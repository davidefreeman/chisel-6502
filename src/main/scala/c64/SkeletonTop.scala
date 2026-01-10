package c64

import chisel3._
import chisel3.util._
import cpu6502.CPU6502Testable

/**
  * Skeleton system for validating Chisel → Verilog → Verilator pipeline.
  * 
  * Components:
  *   - CPU6502Testable (existing 6502 core)
  *   - SystemBus (address decode, data mux)
  *   - 64KB RAM (internal)
  *   - DebugPort (serial output for testing)
  * 
  * Memory Map:
  *   $0000-$FFDF  RAM
  *   $FFE0-$FFEF  Debug registers
  *   $FFF0-$FFFF  RAM (vectors)
  */
class SkeletonTop extends Module {
  val io = IO(new Bundle {
    // Test injection (directly wired to CPU)
    val testEnable = Input(Bool())
    val testPc = Input(UInt(16.W))
    val testA = Input(UInt(8.W))
    val testX = Input(UInt(8.W))
    val testY = Input(UInt(8.W))
    val testS = Input(UInt(8.W))
    val testP = Input(UInt(8.W))
    
    // Debug outputs
    val debugCharOut = Output(UInt(8.W))
    val debugCharValid = Output(Bool())
    val debugHalt = Output(Bool())
    
    // CPU state for observation
    val cpuPc = Output(UInt(16.W))
    val cpuA = Output(UInt(8.W))
    val cpuX = Output(UInt(8.W))
    val cpuY = Output(UInt(8.W))
    val cpuS = Output(UInt(8.W))
    val cpuP = Output(UInt(8.W))
    val cpuState = Output(UInt(4.W))
  })

  // ============================================
  // Instantiate Components
  // ============================================
  
  val cpu = Module(new CPU6502Testable)
  val bus = Module(new SystemBus)
  val debug = Module(new DebugPort)
  
  // 64KB RAM (using Mem for combinational reads - CPU expects immediate response)
  val ram = Mem(65536, UInt(8.W))

  // ============================================
  // CPU Connections
  // ============================================
  
  // Test injection
  cpu.io.test.enable := io.testEnable
  cpu.io.test.pc := io.testPc
  cpu.io.test.a := io.testA
  cpu.io.test.x := io.testX
  cpu.io.test.y := io.testY
  cpu.io.test.s := io.testS
  cpu.io.test.p := io.testP
  
  // Control signals
  cpu.io.irq := false.B
  cpu.io.nmi := false.B
  cpu.io.rdy := true.B

  // ============================================
  // Bus Connections
  // ============================================
  
  // CPU → Bus
  bus.io.cpuAddr := cpu.io.address
  bus.io.cpuDataOut := cpu.io.dataOut
  bus.io.cpuRw := !cpu.io.writeEnable
  
  // Bus → CPU
  cpu.io.dataIn := bus.io.cpuDataIn

  // ============================================
  // RAM Connections
  // ============================================
  
  // Read port (directly connected, synchronous read)
  bus.io.ramDataOut := ram.read(bus.io.ramAddr)
  
  // Write port
  when(bus.io.ramWe) {
    ram.write(bus.io.ramAddr, bus.io.ramDataIn)
  }

  // ============================================
  // Debug Port Connections
  // ============================================
  
  debug.io.addr := bus.io.debugAddr
  debug.io.dataIn := bus.io.debugDataIn
  debug.io.cs := bus.io.debugCs
  debug.io.we := bus.io.debugWe
  
  bus.io.debugDataOut := debug.io.dataOut

  // ============================================
  // Output Assignment
  // ============================================
  
  io.debugCharOut := debug.io.charOut
  io.debugCharValid := debug.io.charValid
  io.debugHalt := debug.io.halt
  
  io.cpuPc := cpu.io.debug.pc
  io.cpuA := cpu.io.debug.a
  io.cpuX := cpu.io.debug.x
  io.cpuY := cpu.io.debug.y
  io.cpuS := cpu.io.debug.sp
  io.cpuP := cpu.io.debug.p
  io.cpuState := cpu.io.debug.state
}

/**
  * Generate Verilog for skeleton system
  */
object SkeletonMain extends App {
  emitVerilog(new SkeletonTop, Array("--target-dir", "generated"))
}
