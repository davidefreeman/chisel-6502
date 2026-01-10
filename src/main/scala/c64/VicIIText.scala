package c64

import chisel3._
import chisel3.util._

/**
  * VIC-II text-mode implementation for C64.
  * 
  * Implements a simplified VIC-II supporting only 40x25 text mode with:
  * - Register interface for CR1, CR2, MEMPTR, BORDER, BG0
  * - Screen RAM and Color RAM addressing
  * - On-demand frame buffer scanout for testbench rendering
  * 
  * Phase 1 simplifications:
  * - No sprites, bitmap modes, or multicolor
  * - No raster interrupts or timing emulation
  * - No smooth scrolling
  */
class VicIIText extends Module {
  val io = IO(new Bundle {
    // CPU Register Interface
    val addr    = Input(UInt(6.W))      // Register address (0x00-0x2E, masked to 6 bits)
    val dataIn  = Input(UInt(8.W))      // CPU write data
    val dataOut = Output(UInt(8.W))     // CPU read data
    val cs      = Input(Bool())         // Chip select
    val rw      = Input(Bool())         // Read/write (1 = read, 0 = write)

    // VIC Bank Selection (from CIA2, already inverted)
    val vicBank = Input(UInt(2.W))      // Bank 0-3

    // Screen RAM Interface
    val screenAddr = Output(UInt(10.W)) // Screen RAM address (0-999)
    val screenData = Input(UInt(8.W))   // Screen RAM data

    // Color RAM Interface
    val colorAddr = Output(UInt(10.W))  // Color RAM address (0-999)
    val colorData = Input(UInt(4.W))    // Color RAM data (4-bit)

    // Frame Buffer Output (for testbench rendering)
    val frameReq   = Input(Bool())      // Request to capture frame
    val frameReady = Output(Bool())     // Frame data is valid
    val cellRow    = Input(UInt(5.W))   // Row to read (0-24)
    val cellCol    = Input(UInt(6.W))   // Column to read (0-39)
    val cellChar   = Output(UInt(8.W))  // Character code at position
    val cellFg     = Output(UInt(4.W))  // Foreground color at position
    val cellBg     = Output(UInt(4.W))  // Background color (from BG0)
    val borderColor = Output(UInt(4.W)) // Border color

    // Display Enable
    val displayEn = Output(Bool())      // DEN bit from CR1
  })

  // Register addresses (offset within VIC space)
  object RegAddr {
    // Sprite positions $00-$0F (stubbed)
    val MSIGX  = 0x10  // Sprite MSB X
    val CR1    = 0x11  // Control register 1
    val RASTER = 0x12  // Raster counter
    val LPX    = 0x13  // Light pen X
    val LPY    = 0x14  // Light pen Y
    val ME     = 0x15  // Sprite enable
    val CR2    = 0x16  // Control register 2
    val MYE    = 0x17  // Sprite Y expansion
    val MEMPTR = 0x18  // Memory pointers
    val IRR    = 0x19  // Interrupt request register
    val IMR    = 0x1A  // Interrupt mask register
    val MDP    = 0x1B  // Sprite data priority
    val MMC    = 0x1C  // Sprite multicolor
    val MXE    = 0x1D  // Sprite X expansion
    val SSC    = 0x1E  // Sprite-sprite collision
    val SBC    = 0x1F  // Sprite-background collision
    val BORDER = 0x20  // Border color
    val BG0    = 0x21  // Background color 0
    val BG1    = 0x22  // Background color 1
    val BG2    = 0x23  // Background color 2
    val BG3    = 0x24  // Background color 3
    // Sprite colors $25-$2E (stubbed)
  }

  // Registers
  val regCR1    = RegInit(0x1B.U(8.W))  // DEN=1, RSEL=1, YSCROLL=3
  val regCR2    = RegInit(0x08.U(8.W))  // CSEL=1, stored bits only (7:5 forced to 1 on read)
  val regMEMPTR = RegInit(0x14.U(8.W))  // Screen=$0400, Char=$1000
  val regBORDER = RegInit(0x0E.U(8.W))  // Light blue
  val regBG0    = RegInit(0x06.U(8.W))  // Blue

  // Stubbed registers (store values but have no function)
  val regSprite = RegInit(VecInit(Seq.fill(17)(0.U(8.W))))  // $00-$10
  val regME     = RegInit(0.U(8.W))
  val regMYE    = RegInit(0.U(8.W))
  val regIMR    = RegInit(0.U(8.W))
  val regMDP    = RegInit(0.U(8.W))
  val regMMC    = RegInit(0.U(8.W))
  val regMXE    = RegInit(0.U(8.W))
  val regBG1    = RegInit(0.U(8.W))
  val regBG2    = RegInit(0.U(8.W))
  val regBG3    = RegInit(0.U(8.W))
  val regSpriteColor = RegInit(VecInit(Seq.fill(10)(0.U(8.W))))  // $25-$2E

  // Frame buffer (40x25 = 1000 entries)
  val frameChar  = Reg(Vec(1000, UInt(8.W)))
  val frameFg    = Reg(Vec(1000, UInt(4.W)))
  val frameValid = RegInit(false.B)

  // Scanout state machine
  val sIdle :: sScan :: Nil = Enum(2)
  val state = RegInit(sIdle)
  val scanIndex = RegInit(0.U(10.W))

  // Previous frameReq for edge detection
  val frameReqPrev = RegNext(io.frameReq, false.B)
  val frameReqRise = io.frameReq && !frameReqPrev

  // Register write handling
  when(io.cs && !io.rw) {
    val addr = io.addr

    switch(addr) {
      is(RegAddr.CR1.U)    { regCR1 := io.dataIn }
      is(RegAddr.CR2.U)    { regCR2 := io.dataIn(4, 0) }  // Only store bits 4:0
      is(RegAddr.MEMPTR.U) { regMEMPTR := io.dataIn }
      is(RegAddr.BORDER.U) { regBORDER := io.dataIn(3, 0) }
      is(RegAddr.BG0.U)    { regBG0 := io.dataIn(3, 0) }
      is(RegAddr.ME.U)     { regME := io.dataIn }
      is(RegAddr.MYE.U)    { regMYE := io.dataIn }
      is(RegAddr.IMR.U)    { regIMR := io.dataIn }
      is(RegAddr.MDP.U)    { regMDP := io.dataIn }
      is(RegAddr.MMC.U)    { regMMC := io.dataIn }
      is(RegAddr.MXE.U)    { regMXE := io.dataIn }
      is(RegAddr.BG1.U)    { regBG1 := io.dataIn(3, 0) }
      is(RegAddr.BG2.U)    { regBG2 := io.dataIn(3, 0) }
      is(RegAddr.BG3.U)    { regBG3 := io.dataIn(3, 0) }
    }

    // Sprite position registers $00-$10
    when(addr <= 0x10.U) {
      regSprite(addr) := io.dataIn
    }

    // Sprite color registers $25-$2E
    when(addr >= 0x25.U && addr <= 0x2E.U) {
      regSpriteColor(addr - 0x25.U) := io.dataIn(3, 0)
    }

    // Invalidate frame buffer on memory pointer or CR1 change
    when(addr === RegAddr.MEMPTR.U || addr === RegAddr.CR1.U) {
      frameValid := false.B
    }
  }

  // Register read handling
  val readData = WireDefault(0.U(8.W))
  val addr = io.addr

  switch(addr) {
    is(RegAddr.CR1.U)    { readData := regCR1 }
    is(RegAddr.CR2.U)    { readData := Cat(0xE0.U(3.W), regCR2(4, 0)) }  // Bits 7:5 = 1
    is(RegAddr.MEMPTR.U) { readData := regMEMPTR | 0x01.U }  // Bit 0 = 1
    is(RegAddr.RASTER.U) { readData := 0.U }  // Always 0
    is(RegAddr.LPX.U)    { readData := 0.U }
    is(RegAddr.LPY.U)    { readData := 0.U }
    is(RegAddr.ME.U)     { readData := regME }
    is(RegAddr.MYE.U)    { readData := regMYE }
    is(RegAddr.IRR.U)    { readData := 0.U }  // No interrupts
    is(RegAddr.IMR.U)    { readData := regIMR }
    is(RegAddr.MDP.U)    { readData := regMDP }
    is(RegAddr.MMC.U)    { readData := regMMC }
    is(RegAddr.MXE.U)    { readData := regMXE }
    is(RegAddr.SSC.U)    { readData := 0.U }  // No collision
    is(RegAddr.SBC.U)    { readData := 0.U }  // No collision
    is(RegAddr.BORDER.U) { readData := Cat(0xF.U(4.W), regBORDER(3, 0)) }  // Bits 7:4 = 1
    is(RegAddr.BG0.U)    { readData := Cat(0xF.U(4.W), regBG0(3, 0)) }
    is(RegAddr.BG1.U)    { readData := Cat(0xF.U(4.W), regBG1(3, 0)) }
    is(RegAddr.BG2.U)    { readData := Cat(0xF.U(4.W), regBG2(3, 0)) }
    is(RegAddr.BG3.U)    { readData := Cat(0xF.U(4.W), regBG3(3, 0)) }
  }

  // Sprite position registers $00-$10
  when(addr <= 0x10.U) {
    readData := regSprite(addr)
  }

  // Sprite color registers $25-$2E
  when(addr >= 0x25.U && addr <= 0x2E.U) {
    readData := Cat(0xF.U(4.W), regSpriteColor(addr - 0x25.U)(3, 0))
  }

  io.dataOut := readData

  // Scanout state machine
  switch(state) {
    is(sIdle) {
      when(frameReqRise) {
        state := sScan
        scanIndex := 0.U
        frameValid := false.B
      }
    }
    is(sScan) {
      // Store current cell data
      frameChar(scanIndex) := io.screenData
      frameFg(scanIndex) := io.colorData

      // Advance to next cell
      when(scanIndex === 999.U) {
        state := sIdle
        frameValid := true.B
      }.otherwise {
        scanIndex := scanIndex + 1.U
      }
    }
  }

  // Memory address outputs during scanout
  io.screenAddr := scanIndex
  io.colorAddr := scanIndex

  // Frame buffer cell access
  val cellIndex = io.cellRow * 40.U + io.cellCol
  io.cellChar := frameChar(cellIndex)
  io.cellFg := frameFg(cellIndex)
  io.cellBg := regBG0(3, 0)
  io.borderColor := regBORDER(3, 0)
  io.frameReady := frameValid

  // Display enable from CR1 bit 4
  io.displayEn := regCR1(4)
}
