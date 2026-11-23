// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2026 chisel-6502 contributors

package cpu6502

import chisel3._
import chisel3.util._

/**
  * 6502 CPU Clone
  * 
  * An implementation of the MOS Technology 6502 8-bit microprocessor in Chisel.
  * 
  * Features:
  * - 8-bit data bus
  * - 16-bit address bus (64KB address space)
  * - 6 registers: A (accumulator), X, Y (index), SP (stack pointer), PC (program counter), P (status)
  * - 56 instructions with multiple addressing modes
  */
class CPU6502 extends Module {
  val io = IO(new Bundle {
    // Memory interface
    val address = Output(UInt(16.W))
    val dataIn  = Input(UInt(8.W))
    val dataOut = Output(UInt(8.W))
    val writeEnable = Output(Bool())
    
    // Control signals
    val irq = Input(Bool())  // Interrupt request
    val nmi = Input(Bool())  // Non-maskable interrupt
    val rdy = Input(Bool())  // Ready signal
    
    // Debug outputs
    val debug = Output(new DebugBundle)
  })

  // ============================================
  // Registers
  // ============================================
  
  val regA  = RegInit(0.U(8.W))   // Accumulator
  val regX  = RegInit(0.U(8.W))   // X index register
  val regY  = RegInit(0.U(8.W))   // Y index register
  val regSP = RegInit(0xFD.U(8.W)) // Stack pointer (starts at 0xFD after reset)
  val regPC = RegInit(0.U(16.W))  // Program counter
  
  // Status register (P): NV-BDIZC
  val flagN = RegInit(false.B)  // Negative
  val flagV = RegInit(false.B)  // Overflow
  val flagB = RegInit(false.B)  // Break
  val flagD = RegInit(false.B)  // Decimal mode
  val flagI = RegInit(true.B)   // Interrupt disable (set on reset)
  val flagZ = RegInit(false.B)  // Zero
  val flagC = RegInit(false.B)  // Carry

  // Pack status register
  val regP = Cat(flagN, flagV, 1.U(1.W), flagB, flagD, flagI, flagZ, flagC)

  // ============================================
  // CPU State Machine
  // ============================================
  
  object State extends ChiselEnum {
    val sFetch, sDecode, sExecute, sMemRead, sMemWrite, sReset = Value
  }
  import State._

  val state = RegInit(sReset)
  val cycle = RegInit(0.U(4.W))
  
  // Current instruction register
  val opcode = RegInit(0.U(8.W))
  
  // Address registers for memory operations
  val addrLo = RegInit(0.U(8.W))
  val addrHi = RegInit(0.U(8.W))
  val effectiveAddr = Cat(addrHi, addrLo)

  // ============================================
  // Instruction Decoder
  // ============================================
  
  val decoder = Module(new InstructionDecoder)
  decoder.io.opcode := opcode
  
  // ============================================
  // ALU
  // ============================================
  
  val alu = Module(new ALU)
  alu.io.a := regA
  alu.io.b := io.dataIn
  alu.io.carryIn := flagC
  alu.io.operation := decoder.io.aluOp

  // ============================================
  // Main State Machine Logic
  // ============================================
  
  // Default outputs
  io.address := regPC
  io.dataOut := 0.U
  io.writeEnable := false.B
  
  switch(state) {
    is(sReset) {
      // Reset sequence: read reset vector from 0xFFFC/0xFFFD
      when(cycle === 0.U) {
        io.address := 0xFFFC.U
        cycle := 1.U
      }.elsewhen(cycle === 1.U) {
        addrLo := io.dataIn
        io.address := 0xFFFD.U
        cycle := 2.U
      }.elsewhen(cycle === 2.U) {
        addrHi := io.dataIn
        regPC := Cat(io.dataIn, addrLo)
        state := sFetch
        cycle := 0.U
      }
    }
    
    is(sFetch) {
      io.address := regPC
      opcode := io.dataIn
      regPC := regPC + 1.U
      state := sDecode
    }
    
    is(sDecode) {
      // Decode addressing mode and fetch operands
      state := sExecute  // Simplified - real implementation needs more cycles
    }
    
    is(sExecute) {
      // Execute instruction based on decoded operation
      // TODO: Implement full instruction set
      state := sFetch
    }
    
    is(sMemRead) {
      io.address := effectiveAddr
      state := sExecute
    }
    
    is(sMemWrite) {
      io.address := effectiveAddr
      io.dataOut := regA
      io.writeEnable := true.B
      state := sFetch
    }
  }

  // ============================================
  // Debug Output
  // ============================================
  
  io.debug.pc := regPC
  io.debug.a := regA
  io.debug.x := regX
  io.debug.y := regY
  io.debug.sp := regSP
  io.debug.p := regP
  io.debug.opcode := opcode
  io.debug.state := state.asUInt
}

/**
  * Debug bundle for observing internal CPU state
  */
class DebugBundle extends Bundle {
  val pc = UInt(16.W)
  val a = UInt(8.W)
  val x = UInt(8.W)
  val y = UInt(8.W)
  val sp = UInt(8.W)
  val p = UInt(8.W)
  val opcode = UInt(8.W)
  val state = UInt(4.W)
}

/**
  * Top-level module for generating Verilog
  */
object CPU6502Main extends App {
  emitVerilog(new CPU6502Testable, Array("--target-dir", "generated"))
}
