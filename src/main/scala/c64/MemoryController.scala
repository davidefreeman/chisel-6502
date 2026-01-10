package c64

import chisel3._
import chisel3.util._

/**
  * Memory Controller for C64.
  * 
  * Manages access to:
  * - 64KB RAM (always writable, readable when ramCs)
  * - BASIC ROM (8KB at $A000-$BFFF)
  * - KERNAL ROM (8KB at $E000-$FFFF)
  * - Character ROM (4KB at $D000-$DFFF)
  * - Color RAM (1KB at $D800-$DBFF, 4-bit)
  * 
  * Features:
  * - Write-through: CPU writes always go to RAM
  * - VIC-II port: Separate access for screen/color reads
  * - Character ROM substitution for VIC at $1000-$1FFF in banks 0,2
  *
  * @param basicRomContents  BASIC ROM contents (8192 bytes), empty for zero-fill
  * @param kernalRomContents KERNAL ROM contents (8192 bytes), empty for zero-fill
  * @param charRomContents   Character ROM contents (4096 bytes), empty for zero-fill
  */
class MemoryController(
  basicRomContents: Seq[Int] = Seq(),
  kernalRomContents: Seq[Int] = Seq(),
  charRomContents: Seq[Int] = Seq()
) extends Module {
  val io = IO(new Bundle {
    // CPU Interface
    val cpuAddr    = Input(UInt(16.W))
    val cpuDataIn  = Input(UInt(8.W))
    val cpuDataOut = Output(UInt(8.W))
    val cpuWe      = Input(Bool())
    
    // Chip selects from MmuPla
    val ramCs      = Input(Bool())
    val basicCs    = Input(Bool())
    val kernalCs   = Input(Bool())
    val charCs     = Input(Bool())
    val colorCs    = Input(Bool())
    
    // VIC-II Interface
    val vicAddr      = Input(UInt(14.W))   // Address within 16KB bank
    val vicBank      = Input(UInt(2.W))    // Bank 0-3
    val vicData      = Output(UInt(8.W))
    
    // VIC Color RAM access
    val vicColorAddr = Input(UInt(10.W))
    val vicColorData = Output(UInt(4.W))
  })

  // ============================================
  // Memory Arrays
  // ============================================
  
  // 64KB RAM
  val ram = SyncReadMem(65536, UInt(8.W))
  
  // ROMs (use VecInit for read-only memory with initial values)
  val basicRom = VecInit(
    if (basicRomContents.nonEmpty) basicRomContents.map(_.U(8.W))
    else Seq.fill(8192)(0.U(8.W))
  )
  
  val kernalRom = VecInit(
    if (kernalRomContents.nonEmpty) kernalRomContents.map(_.U(8.W))
    else Seq.fill(8192)(0.U(8.W))
  )
  
  val charRom = VecInit(
    if (charRomContents.nonEmpty) charRomContents.map(_.U(8.W))
    else Seq.fill(4096)(0.U(8.W))
  )
  
  // Color RAM (1KB, 4-bit)
  val colorRam = SyncReadMem(1024, UInt(4.W))

  // ============================================
  // Address Calculations
  // ============================================
  
  // ROM offsets
  val basicOffset  = io.cpuAddr - 0xA000.U
  val kernalOffset = io.cpuAddr - 0xE000.U
  val charOffset   = io.cpuAddr - 0xD000.U
  val colorOffset  = io.cpuAddr - 0xD800.U

  // ============================================
  // CPU Write Logic
  // ============================================
  
  // Always write to RAM (write-through)
  when(io.cpuWe) {
    ram.write(io.cpuAddr, io.cpuDataIn)
  }
  
  // Also write to Color RAM when selected
  when(io.cpuWe && io.colorCs) {
    colorRam.write(colorOffset(9, 0), io.cpuDataIn(3, 0))
  }

  // ============================================
  // CPU Read Logic
  // ============================================
  
  // Read from RAM (always available)
  val ramData = ram.read(io.cpuAddr)
  
  // Read from Color RAM
  val colorData = colorRam.read(colorOffset(9, 0))
  
  // Mux based on chip selects (priority encoded)
  val cpuReadData = WireDefault(0xFF.U(8.W))  // Open bus default
  
  when(io.basicCs) {
    cpuReadData := basicRom(basicOffset(12, 0))
  }.elsewhen(io.kernalCs) {
    cpuReadData := kernalRom(kernalOffset(12, 0))
  }.elsewhen(io.charCs) {
    cpuReadData := charRom(charOffset(11, 0))
  }.elsewhen(io.colorCs) {
    cpuReadData := Cat(0xF.U(4.W), colorData)  // Upper nibble = $F
  }.elsewhen(io.ramCs) {
    cpuReadData := ramData
  }
  
  io.cpuDataOut := cpuReadData

  // ============================================
  // VIC-II Read Logic
  // ============================================
  
  // Full VIC address including bank
  val vicFullAddr = Cat(io.vicBank, io.vicAddr)
  
  // Character ROM visible at $1000-$1FFF within banks 0 and 2
  val vicInCharRomRange = io.vicAddr >= 0x1000.U && io.vicAddr < 0x2000.U
  val vicCharRomVisible = (io.vicBank === 0.U || io.vicBank === 2.U) && vicInCharRomRange
  
  // VIC data from RAM or Character ROM
  val vicRamData = ram.read(vicFullAddr)
  val vicCharRomData = charRom(io.vicAddr(11, 0) - 0x1000.U)
  
  io.vicData := Mux(vicCharRomVisible, vicCharRomData, vicRamData)
  
  // VIC Color RAM read
  io.vicColorData := colorRam.read(io.vicColorAddr)
}
