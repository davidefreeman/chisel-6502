package c64

import chisel3._
import chisel3.util._
import cpu6502.CPU6502Testable

/**
  * C64 Text-mode System Top Level
  * 
  * Integrates all C64 components for text-mode emulation:
  *   - CPU (6502 core)
  *   - CpuPort6510 (memory banking via $00-$01)
  *   - MmuPla (address decode / chip selects)
  *   - CIA1 (keyboard, joystick, IRQ)
  *   - CIA2 (VIC bank select, NMI)
  *   - VicIIText (text-mode video)
  *   - MemoryController (RAM, ROM, Color RAM)
  *
  * Memory Map:
  *   $0000-$0001  CPU I/O Port (CpuPort6510)
  *   $0002-$9FFF  RAM
  *   $A000-$BFFF  BASIC ROM / RAM
  *   $C000-$CFFF  RAM
  *   $D000-$D3FF  VIC-II
  *   $D400-$D7FF  SID (stubbed)
  *   $D800-$DBFF  Color RAM
  *   $DC00-$DCFF  CIA1
  *   $DD00-$DDFF  CIA2
  *   $DE00-$DFFF  I/O Area 1 & 2 (open)
  *   $E000-$FFFF  KERNAL ROM / RAM
  */
class C64Top(
  basicRomContents: Seq[Int] = Seq(),
  kernalRomContents: Seq[Int] = Seq(),
  charRomContents: Seq[Int] = Seq()
) extends Module {
  val io = IO(new Bundle {
    // Test injection (directly wired to CPU)
    val testEnable = Input(Bool())
    val testPc     = Input(UInt(16.W))
    val testA      = Input(UInt(8.W))
    val testX      = Input(UInt(8.W))
    val testY      = Input(UInt(8.W))
    val testS      = Input(UInt(8.W))
    val testP      = Input(UInt(8.W))

    // Keyboard matrix (directly to CIA1)
    val keyboardCol = Input(UInt(8.W))   // Active-low column inputs
    val keyboardRow = Output(UInt(8.W))  // Active-low row outputs

    // Joystick ports (directly to CIAs)
    val joy1 = Input(UInt(5.W))  // CIA1 Port A bits 0-4 (directly active-low)
    val joy2 = Input(UInt(5.W))  // CIA1 Port B bits 0-4

    // Video output (directly from VIC-II)
    val frameReq   = Input(Bool())
    val frameReady = Output(Bool())
    val cellRow    = Input(UInt(5.W))
    val cellCol    = Input(UInt(6.W))
    val cellChar   = Output(UInt(8.W))
    val cellFg     = Output(UInt(4.W))
    val cellBg     = Output(UInt(4.W))
    val borderColor = Output(UInt(4.W))
    val displayEn  = Output(Bool())

    // CPU debug outputs
    val cpuPc    = Output(UInt(16.W))
    val cpuA     = Output(UInt(8.W))
    val cpuX     = Output(UInt(8.W))
    val cpuY     = Output(UInt(8.W))
    val cpuS     = Output(UInt(8.W))
    val cpuP     = Output(UInt(8.W))
    val cpuState = Output(UInt(4.W))
    val cpuCycle = Output(UInt(8.W))
  })

  // ==========================================================================
  // Component Instantiation
  // ==========================================================================

  val cpu    = Module(new CPU6502Testable)
  val cpuPort = Module(new CpuPort6510)
  val mmu    = Module(new MmuPla)
  val cia1   = Module(new Cia6526)
  val cia2   = Module(new Cia6526)
  val vic    = Module(new VicIIText(1000))  // Full 40x25 frame buffer
  val mem    = Module(new MemoryController(basicRomContents, kernalRomContents, charRomContents))

  // ==========================================================================
  // CPU Test Injection
  // ==========================================================================

  cpu.io.test.enable := io.testEnable
  cpu.io.test.pc     := io.testPc
  cpu.io.test.a      := io.testA
  cpu.io.test.x      := io.testX
  cpu.io.test.y      := io.testY
  cpu.io.test.s      := io.testS
  cpu.io.test.p      := io.testP
  cpu.io.rdy         := true.B

  // ==========================================================================
  // Address Decode
  // ==========================================================================

  val cpuAddr = cpu.io.address
  val cpuRw   = !cpu.io.writeEnable  // CPU: writeEnable=1 means write; rw=0 means write

  // CPU Port ($0000-$0001)
  val cpuPortActive = cpuAddr <= 0x0001.U

  // I/O sub-region decode (active when in I/O mode, $D000-$DFFF)
  val ioRegion   = cpuAddr >= 0xD000.U && cpuAddr <= 0xDFFF.U
  val vicRegion  = cpuAddr >= 0xD000.U && cpuAddr <= 0xD3FF.U
  val sidRegion  = cpuAddr >= 0xD400.U && cpuAddr <= 0xD7FF.U
  val colorRegion = cpuAddr >= 0xD800.U && cpuAddr <= 0xDBFF.U
  val cia1Region = cpuAddr >= 0xDC00.U && cpuAddr <= 0xDCFF.U
  val cia2Region = cpuAddr >= 0xDD00.U && cpuAddr <= 0xDDFF.U

  // ==========================================================================
  // CPU Port (Banking Control)
  // ==========================================================================

  cpuPort.io.addr     := cpuAddr
  cpuPort.io.dataIn   := cpu.io.dataOut
  cpuPort.io.we       := cpu.io.writeEnable && cpuPortActive
  cpuPort.io.cassSense := true.B  // Cassette not present (sense = no button)

  // ==========================================================================
  // MMU/PLA (Memory Banking)
  // ==========================================================================

  mmu.io.addr   := cpuAddr
  mmu.io.rw     := cpuRw
  mmu.io.loram  := cpuPort.io.loram
  mmu.io.hiram  := cpuPort.io.hiram
  mmu.io.charen := cpuPort.io.charen

  // ==========================================================================
  // Memory Controller
  // ==========================================================================

  // Chip selects from MMU
  mem.io.ramCs    := mmu.io.ramCs && !cpuPortActive
  mem.io.basicCs  := mmu.io.basicCs
  mem.io.kernalCs := mmu.io.kernalCs
  mem.io.charCs   := mmu.io.charCs
  mem.io.colorCs  := mmu.io.colorCs

  // CPU interface
  mem.io.cpuAddr   := cpuAddr
  mem.io.cpuDataIn := cpu.io.dataOut
  mem.io.cpuWe     := cpu.io.writeEnable && (mmu.io.ramWe || mmu.io.colorCs)

  // VIC interface
  val vicBank = ~cia2.io.portAOut(1, 0)  // CIA2 PA0-PA1, active low → bank select
  mem.io.vicBank := vicBank
  mem.io.vicAddr := vic.io.screenAddr      // VIC provides screen RAM address
  mem.io.vicColorAddr := vic.io.colorAddr  // VIC provides color RAM address

  // ==========================================================================
  // VIC-II Text
  // ==========================================================================

  // Register interface
  vic.io.cs     := mmu.io.vicCs && vicRegion
  vic.io.rw     := cpuRw
  vic.io.addr   := cpuAddr(5, 0)  // 6-bit register offset
  vic.io.dataIn := cpu.io.dataOut

  // VIC bank from CIA2
  vic.io.vicBank := vicBank

  // Screen/Color RAM feedback from memory controller
  vic.io.screenData := mem.io.vicData
  vic.io.colorData  := mem.io.vicColorData

  // Frame buffer interface
  vic.io.frameReq := io.frameReq
  vic.io.cellRow  := io.cellRow
  vic.io.cellCol  := io.cellCol

  // ==========================================================================
  // CIA1 (Keyboard/Joystick, IRQ)
  // ==========================================================================

  cia1.io.cs     := mmu.io.cia1Cs && cia1Region
  cia1.io.rw     := cpuRw
  cia1.io.addr   := cpuAddr(3, 0)  // 4-bit register offset
  cia1.io.dataIn := cpu.io.dataOut
  cia1.io.flag   := true.B  // FLAG pin unused

  // Keyboard matrix: PA = row select (active low output), PB = column sense (active low input)
  // Directly wire external keyboard matrix
  cia1.io.portAIn := io.joy1 | 0xE0.U  // Joystick 1 on bits 0-4, others pulled high
  cia1.io.portBIn := io.keyboardCol    // Keyboard columns directly

  io.keyboardRow := cia1.io.portAOut   // Row select output

  // ==========================================================================
  // CIA2 (VIC Bank, Serial, NMI)
  // ==========================================================================

  cia2.io.cs     := mmu.io.cia2Cs && cia2Region
  cia2.io.rw     := cpuRw
  cia2.io.addr   := cpuAddr(3, 0)
  cia2.io.dataIn := cpu.io.dataOut
  cia2.io.flag   := true.B  // FLAG pin unused

  // Port A: bits 0-1 = VIC bank (directly output), others stubbed
  cia2.io.portAIn := 0xFF.U  // No external input on Port A
  cia2.io.portBIn := io.joy2 | 0xE0.U  // Joystick 2 on bits 0-4

  // ==========================================================================
  // Interrupts
  // ==========================================================================

  cpu.io.irq := !cia1.io.irq  // CIA1 IRQ is active low, CPU expects active high
  cpu.io.nmi := !cia2.io.irq  // CIA2 IRQ → NMI (also active low)

  // ==========================================================================
  // Data Bus Multiplexer
  // ==========================================================================

  val cpuDataIn = WireDefault(0.U(8.W))

  when(cpuPortActive) {
    cpuDataIn := cpuPort.io.dataOut
  }.elsewhen(vic.io.cs) {
    cpuDataIn := vic.io.dataOut
  }.elsewhen(cia1.io.cs) {
    cpuDataIn := cia1.io.dataOut
  }.elsewhen(cia2.io.cs) {
    cpuDataIn := cia2.io.dataOut
  }.elsewhen(sidRegion && mmu.io.ioCs) {
    cpuDataIn := 0.U  // SID not implemented
  }.otherwise {
    cpuDataIn := mem.io.cpuDataOut
  }

  cpu.io.dataIn := cpuDataIn

  // ==========================================================================
  // Output Connections
  // ==========================================================================

  // Video
  io.frameReady  := vic.io.frameReady
  io.cellChar    := vic.io.cellChar
  io.cellFg      := vic.io.cellFg
  io.cellBg      := vic.io.cellBg
  io.borderColor := vic.io.borderColor
  io.displayEn   := vic.io.displayEn

  // CPU debug
  io.cpuPc    := cpu.io.debug.pc
  io.cpuA     := cpu.io.debug.a
  io.cpuX     := cpu.io.debug.x
  io.cpuY     := cpu.io.debug.y
  io.cpuS     := cpu.io.debug.sp
  io.cpuP     := cpu.io.debug.p
  io.cpuState := cpu.io.debug.state
  io.cpuCycle := cpu.io.cycleCount
}

/**
  * Generate SystemVerilog for C64Top
  */
object C64TopMain extends App {
  import _root_.circt.stage.ChiselStage.emitSystemVerilog
  import java.io.{File, PrintWriter}

  val outDir = new File("generated/c64")
  outDir.mkdirs()

  println("Emitting C64Top...")
  val sv = emitSystemVerilog(new C64Top())
  val file = new File(outDir, "C64Top.sv")
  val pw = new PrintWriter(file)
  pw.write(sv)
  pw.close()
  println(s"  -> ${file.getPath}")
}
