package c64

import chisel3._
import chisel3.util._

/**
  * Debug port for skeleton validation.
  * 
  * Register Map (base $FFE0):
  *   $FFE0 (0)  DBGOUT  - Write: output character to terminal
  *   $FFE1 (1)  DBGCTL  - Write $01: halt simulation
  *   $FFE2 (2)  DBGSTAT - Read: always $00 (ready)
  */
class DebugPort extends Module {
  val io = IO(new Bundle {
    // Bus interface
    val addr = Input(UInt(4.W))
    val dataIn = Input(UInt(8.W))
    val dataOut = Output(UInt(8.W))
    val cs = Input(Bool())
    val we = Input(Bool())
    
    // Debug outputs (monitored by testbench)
    val charOut = Output(UInt(8.W))
    val charValid = Output(Bool())
    val halt = Output(Bool())
  })

  // Registers
  val regCharOut = RegInit(0.U(8.W))
  val regCharValid = RegInit(false.B)
  val regHalt = RegInit(false.B)

  // Clear valid flag each cycle by default
  regCharValid := false.B
  
  // Write Logic
  when(io.cs && io.we) {
    switch(io.addr) {
      is(0.U) {  // DBGOUT
        regCharOut := io.dataIn
        regCharValid := true.B
      }
      is(1.U) {  // DBGCTL
        when(io.dataIn === 0x01.U) {
          regHalt := true.B
        }
      }
    }
  }

  // Read Logic
  io.dataOut := 0.U
  when(io.cs) {
    switch(io.addr) {
      is(0.U) { io.dataOut := regCharOut }
      is(2.U) { io.dataOut := 0.U }  // Status: ready
    }
  }

  // Output Assignment
  io.charOut := regCharOut
  io.charValid := regCharValid
  io.halt := regHalt
}
