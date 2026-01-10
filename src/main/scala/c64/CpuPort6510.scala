package c64

import chisel3._
import chisel3.util._

/**
  * 6510 CPU I/O Port Emulation
  * 
  * Emulates the built-in I/O port of the MOS 6510 CPU at addresses $0000-$0001.
  * This provides memory banking control for the C64 via the LORAM, HIRAM, and
  * CHAREN signals.
  * 
  * Register Map:
  *   $0000 - DDR (Data Direction Register): 1=output, 0=input
  *   $0001 - PORT (Data Register)
  * 
  * Reset State:
  *   DDR  = $2F (bits 0-3,5 output; bit 4 input)
  *   PORT = $37 (LORAM=1, HIRAM=1, CHAREN=1)
  */
class CpuPort6510 extends Module {
  val io = IO(new Bundle {
    // CPU bus interface
    val addr      = Input(UInt(16.W))
    val dataIn    = Input(UInt(8.W))    // Data from CPU (writes)
    val dataOut   = Output(UInt(8.W))   // Data to CPU (reads)
    val we        = Input(Bool())       // Write enable
    
    // Port active signal
    val portActive = Output(Bool())     // True when $0000-$0001 accessed
    
    // Banking control outputs
    val loram     = Output(Bool())      // BASIC ROM enable
    val hiram     = Output(Bool())      // KERNAL ROM enable
    val charen    = Output(Bool())      // Char ROM vs I/O select
    
    // Auxiliary port bits (not used in this project)
    val cassWrt   = Output(Bool())      // Cassette write (unconnected)
    val cassSense = Input(Bool())       // Cassette sense input
    val cassMotor = Output(Bool())      // Cassette motor (unconnected)
  })

  // ============================================
  // Constants
  // ============================================
  
  object Ports {
    val AddrDDR  = 0x0000.U(16.W)
    val AddrPORT = 0x0001.U(16.W)
    val ResetDDR  = 0x2F.U(8.W)  // Bits 0-3,5 output; bit 4 input
    val ResetPORT = 0x37.U(8.W)  // LORAM=1, HIRAM=1, CHAREN=1
  }

  // ============================================
  // Registers
  // ============================================
  
  val regDDR  = RegInit(Ports.ResetDDR)
  val regPORT = RegInit(Ports.ResetPORT)

  // ============================================
  // Address Decode
  // ============================================
  
  val isDDR  = io.addr === Ports.AddrDDR
  val isPORT = io.addr === Ports.AddrPORT
  val isPort = isDDR || isPORT

  io.portActive := isPort

  // ============================================
  // Write Logic
  // ============================================
  
  when(io.we && isDDR) {
    regDDR := io.dataIn
  }
  
  when(io.we && isPORT) {
    regPORT := io.dataIn
  }

  // ============================================
  // Read Logic
  // ============================================
  
  // PORT read: output bits return PORT value, input bits return external state
  // For bits 0-2 (banking), treat as pull-up (return PORT value even if input)
  // Bit 4 returns cassSense when configured as input
  val portReadValue = Wire(UInt(8.W))
  
  // Build read value bit by bit
  val portBits = Wire(Vec(8, Bool()))
  for (i <- 0 until 8) {
    when(regDDR(i)) {
      // Output bit: return PORT value
      portBits(i) := regPORT(i)
    }.otherwise {
      // Input bit: return external line (or pull-up for most)
      if (i == 4) {
        // Bit 4: cassette sense
        portBits(i) := io.cassSense
      } else {
        // Other input bits: pull-up behavior (return PORT latch)
        portBits(i) := regPORT(i)
      }
    }
  }
  portReadValue := portBits.asUInt

  // Output mux for reads
  io.dataOut := MuxCase(0.U, Seq(
    isDDR  -> regDDR,
    isPORT -> portReadValue
  ))

  // ============================================
  // Banking Control Outputs
  // ============================================
  
  // Banking bits: if configured as output, use PORT value; if input, pull high
  io.loram  := regPORT(0) | ~regDDR(0)
  io.hiram  := regPORT(1) | ~regDDR(1)
  io.charen := regPORT(2) | ~regDDR(2)

  // ============================================
  // Auxiliary Outputs (not functional in this implementation)
  // ============================================
  
  io.cassWrt   := regPORT(3) | ~regDDR(3)
  io.cassMotor := ~(regPORT(5) | ~regDDR(5))  // Active low motor control
}
