package c64

import chisel3._
import chisel3.util._

/**
  * MOS 6526 Complex Interface Adapter (CIA)
  * 
  * Provides:
  * - Two 8-bit bidirectional I/O ports with DDR
  * - Two 16-bit countdown timers with IRQ generation
  * - Interrupt control register with mask and status
  * 
  * The C64 uses two instances:
  * - CIA1 ($DC00): Keyboard scanning, IRQ to CPU
  * - CIA2 ($DD00): VIC bank select, NMI to CPU
  * 
  * Phase 1 simplifications:
  * - TOD returns $00 (stub)
  * - SDR returns $00 (stub)
  * - CNT pin not implemented (timers count PHI2 only)
  * - FLAG pin not implemented
  */
class Cia6526 extends Module {
  val io = IO(new Bundle {
    // Bus interface
    val addr    = Input(UInt(4.W))      // Register select (bits 0-3)
    val dataIn  = Input(UInt(8.W))      // Write data
    val dataOut = Output(UInt(8.W))     // Read data
    val rw      = Input(Bool())         // true=read, false=write
    val cs      = Input(Bool())         // Chip select
    
    // Port A interface
    val portAIn  = Input(UInt(8.W))     // External input pins
    val portAOut = Output(UInt(8.W))    // Output latch
    val portADir = Output(UInt(8.W))    // Direction (1=output)
    
    // Port B interface
    val portBIn  = Input(UInt(8.W))
    val portBOut = Output(UInt(8.W))
    val portBDir = Output(UInt(8.W))
    
    // Interrupt
    val irq      = Output(Bool())       // Active low interrupt request
    
    // FLAG pin (not used in Phase 1)
    val flag     = Input(Bool())
  })

  // ============================================
  // Register Addresses
  // ============================================
  
  object Reg {
    val PRA   = 0x0.U(4.W)
    val PRB   = 0x1.U(4.W)
    val DDRA  = 0x2.U(4.W)
    val DDRB  = 0x3.U(4.W)
    val TALO  = 0x4.U(4.W)
    val TAHI  = 0x5.U(4.W)
    val TBLO  = 0x6.U(4.W)
    val TBHI  = 0x7.U(4.W)
    val TOD10 = 0x8.U(4.W)
    val TODSEC = 0x9.U(4.W)
    val TODMIN = 0xA.U(4.W)
    val TODHR = 0xB.U(4.W)
    val SDR   = 0xC.U(4.W)
    val ICR   = 0xD.U(4.W)
    val CRA   = 0xE.U(4.W)
    val CRB   = 0xF.U(4.W)
  }

  // ============================================
  // Port Registers
  // ============================================
  
  val regPRA  = RegInit(0xFF.U(8.W))  // Port A output latch
  val regPRB  = RegInit(0xFF.U(8.W))  // Port B output latch
  val regDDRA = RegInit(0x00.U(8.W))  // Port A direction (1=output)
  val regDDRB = RegInit(0x00.U(8.W))  // Port B direction (1=output)

  // ============================================
  // Timer A
  // ============================================
  
  val regTACounter = RegInit(0xFFFF.U(16.W))
  val regTALatch   = RegInit(0xFFFF.U(16.W))
  val regCRA       = RegInit(0x00.U(8.W))
  
  // CRA bit fields
  val craStart   = regCRA(0)
  val craPBOn    = regCRA(1)
  val craOutMode = regCRA(2)  // 0=pulse, 1=toggle
  val craRunMode = regCRA(3)  // 0=continuous, 1=one-shot
  val craLoad    = regCRA(4)  // Strobe
  val craInMode  = regCRA(5)  // 0=PHI2, 1=CNT (not impl)
  
  val taOutput   = RegInit(true.B)  // Timer A output state
  val taUnderflow = WireDefault(false.B)

  // ============================================
  // Timer B
  // ============================================
  
  val regTBCounter = RegInit(0xFFFF.U(16.W))
  val regTBLatch   = RegInit(0xFFFF.U(16.W))
  val regCRB       = RegInit(0x00.U(8.W))
  
  // CRB bit fields
  val crbStart   = regCRB(0)
  val crbPBOn    = regCRB(1)
  val crbOutMode = regCRB(2)
  val crbRunMode = regCRB(3)
  val crbLoad    = regCRB(4)
  val crbInMode  = regCRB(6, 5)  // 00=PHI2, 10=TA underflows
  
  val tbOutput   = RegInit(true.B)
  val tbUnderflow = WireDefault(false.B)

  // ============================================
  // Interrupt Control
  // ============================================
  
  val icrStatus = RegInit(0.U(5.W))  // Bits 0-4: TA, TB, ALRM, SP, FLG
  val icrMask   = RegInit(0.U(5.W))  // Interrupt enable mask
  
  // ICR bit positions
  val ICR_TA   = 0
  val ICR_TB   = 1
  val ICR_ALRM = 2
  val ICR_SP   = 3
  val ICR_FLG  = 4

  // ============================================
  // Register Write Logic
  // ============================================
  
  val writeEnable = io.cs && !io.rw
  
  when(writeEnable) {
    switch(io.addr) {
      is(Reg.PRA)  { regPRA := io.dataIn }
      is(Reg.PRB)  { regPRB := io.dataIn }
      is(Reg.DDRA) { regDDRA := io.dataIn }
      is(Reg.DDRB) { regDDRB := io.dataIn }
      is(Reg.TALO) { regTALatch := Cat(regTALatch(15, 8), io.dataIn) }
      is(Reg.TAHI) { regTALatch := Cat(io.dataIn, regTALatch(7, 0)) }
      is(Reg.TBLO) { regTBLatch := Cat(regTBLatch(15, 8), io.dataIn) }
      is(Reg.TBHI) { regTBLatch := Cat(io.dataIn, regTBLatch(7, 0)) }
      is(Reg.ICR)  {
        // Bit 7: 1=set mask bits, 0=clear mask bits
        when(io.dataIn(7)) {
          icrMask := icrMask | io.dataIn(4, 0)
        }.otherwise {
          icrMask := icrMask & ~io.dataIn(4, 0)
        }
      }
      is(Reg.CRA) {
        // Bit 4 (LOAD) is a strobe - don't store it
        regCRA := io.dataIn & 0xEF.U
        when(io.dataIn(4)) {
          regTACounter := regTALatch
        }
      }
      is(Reg.CRB) {
        regCRB := io.dataIn & 0xEF.U
        when(io.dataIn(4)) {
          regTBCounter := regTBLatch
        }
      }
      // TOD and SDR writes ignored (stub)
    }
  }

  // ============================================
  // Timer A Logic
  // ============================================
  
  when(craStart) {
    when(regTACounter === 0.U) {
      // Underflow
      taUnderflow := true.B
      regTACounter := regTALatch
      
      // Toggle output if in toggle mode
      when(craOutMode) {
        taOutput := !taOutput
      }
      
      // Stop if one-shot mode
      when(craRunMode) {
        regCRA := regCRA & 0xFE.U  // Clear START bit
      }
    }.otherwise {
      regTACounter := regTACounter - 1.U
    }
  }

  // ============================================
  // Timer B Logic
  // ============================================
  
  // Timer B input selection
  val tbCountEnable = WireDefault(false.B)
  switch(crbInMode) {
    is(0.U) { tbCountEnable := true.B }           // Count PHI2
    is(1.U) { tbCountEnable := false.B }          // Count CNT (not impl)
    is(2.U) { tbCountEnable := taUnderflow }      // Count TA underflows
    is(3.U) { tbCountEnable := false.B }          // Count TA underflows gated by CNT (not impl)
  }
  
  when(crbStart && tbCountEnable) {
    when(regTBCounter === 0.U) {
      tbUnderflow := true.B
      regTBCounter := regTBLatch
      
      when(crbOutMode) {
        tbOutput := !tbOutput
      }
      
      when(crbRunMode) {
        regCRB := regCRB & 0xFE.U
      }
    }.otherwise {
      regTBCounter := regTBCounter - 1.U
    }
  }

  // ============================================
  // Interrupt Status Update
  // ============================================
  
  // Set interrupt flags on underflow
  when(taUnderflow) {
    icrStatus := icrStatus | (1.U << ICR_TA)
  }
  when(tbUnderflow) {
    icrStatus := icrStatus | (1.U << ICR_TB)
  }

  // ============================================
  // Register Read Logic
  // ============================================
  
  val readEnable = io.cs && io.rw
  val readData = WireDefault(0.U(8.W))
  
  // Port read: output bits from latch, input bits from pins
  val praRead = (regPRA & regDDRA) | (io.portAIn & ~regDDRA)
  val prbRead = (regPRB & regDDRB) | (io.portBIn & ~regDDRB)
  
  // ICR read value (with IR bit)
  val irqActive = (icrStatus & icrMask) =/= 0.U
  val icrRead = Cat(irqActive, 0.U(2.W), icrStatus)
  
  switch(io.addr) {
    is(Reg.PRA)   { readData := praRead }
    is(Reg.PRB)   { readData := prbRead }
    is(Reg.DDRA)  { readData := regDDRA }
    is(Reg.DDRB)  { readData := regDDRB }
    is(Reg.TALO)  { readData := regTACounter(7, 0) }
    is(Reg.TAHI)  { readData := regTACounter(15, 8) }
    is(Reg.TBLO)  { readData := regTBCounter(7, 0) }
    is(Reg.TBHI)  { readData := regTBCounter(15, 8) }
    is(Reg.TOD10) { readData := 0.U }  // Stub
    is(Reg.TODSEC){ readData := 0.U }  // Stub
    is(Reg.TODMIN){ readData := 0.U }  // Stub
    is(Reg.TODHR) { readData := 0.U }  // Stub
    is(Reg.SDR)   { readData := 0.U }  // Stub
    is(Reg.ICR)   { readData := icrRead }
    is(Reg.CRA)   { readData := regCRA }
    is(Reg.CRB)   { readData := regCRB }
  }
  
  // Clear ICR status on read
  when(readEnable && io.addr === Reg.ICR) {
    icrStatus := 0.U
  }
  
  io.dataOut := readData

  // ============================================
  // Output Assignment
  // ============================================
  
  io.portAOut := regPRA
  io.portADir := regDDRA
  io.portBOut := regPRB
  io.portBDir := regDDRB
  
  // IRQ: active low when any enabled interrupt is pending
  io.irq := !irqActive
}
