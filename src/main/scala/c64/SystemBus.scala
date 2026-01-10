package c64

import chisel3._
import chisel3.util._

/**
  * System bus for C64 skeleton.
  * 
  * Handles address decoding and data muxing between CPU and peripherals.
  * 
  * Memory Map (skeleton):
  *   $0000-$FFDF  RAM (64KB minus I/O)
  *   $FFE0-$FFEF  Debug registers
  *   $FFF0-$FFFF  RAM (vectors)
  */
class SystemBus extends Module {
  val io = IO(new Bundle {
    // CPU interface
    val cpuAddr = Input(UInt(16.W))
    val cpuDataOut = Input(UInt(8.W))  // Data from CPU (for writes)
    val cpuDataIn = Output(UInt(8.W))  // Data to CPU (for reads)
    val cpuRw = Input(Bool())          // true = read, false = write
    
    // RAM interface
    val ramAddr = Output(UInt(16.W))
    val ramDataOut = Input(UInt(8.W))  // Data from RAM
    val ramDataIn = Output(UInt(8.W))  // Data to RAM
    val ramWe = Output(Bool())         // RAM write enable
    
    // Debug port interface
    val debugAddr = Output(UInt(4.W))
    val debugDataOut = Input(UInt(8.W))
    val debugDataIn = Output(UInt(8.W))
    val debugCs = Output(Bool())
    val debugWe = Output(Bool())
  })

  // Address Decoding: Debug at $FFE0-$FFEF
  val isDebugRange = io.cpuAddr >= 0xFFE0.U && io.cpuAddr <= 0xFFEF.U
  val isRamRange = !isDebugRange

  // Chip Selects and Write Enables
  io.debugCs := isDebugRange
  io.debugWe := isDebugRange && !io.cpuRw
  io.ramWe := isRamRange && !io.cpuRw

  // Address Routing
  io.ramAddr := io.cpuAddr
  io.debugAddr := io.cpuAddr(3, 0)

  // Data Routing
  io.ramDataIn := io.cpuDataOut
  io.debugDataIn := io.cpuDataOut
  io.cpuDataIn := Mux(isDebugRange, io.debugDataOut, io.ramDataOut)
}
