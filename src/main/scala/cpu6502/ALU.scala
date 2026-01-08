package cpu6502

import chisel3._
import chisel3.util._

/**
  * ALU Operations for the 6502
  */
object ALUOp extends ChiselEnum {
  val opADC, opSBC, opAND, opORA, opEOR, opASL, opLSR, opROL, opROR,
      opINC, opDEC, opCMP, opBIT, opPASS = Value
}

/**
  * Arithmetic Logic Unit for the 6502 CPU (NES 2A03 compatible)
  * 
  * Supports all 6502 arithmetic and logic operations.
  * Note: BCD mode is not implemented (matches NES 2A03 behavior).
  */
class ALU extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(8.W))
    val b = Input(UInt(8.W))
    val carryIn = Input(Bool())
    val operation = Input(ALUOp())
    
    val result = Output(UInt(8.W))
    val carryOut = Output(Bool())
    val zero = Output(Bool())
    val negative = Output(Bool())
    val overflow = Output(Bool())
  })

  // Default outputs
  val result = WireDefault(0.U(8.W))
  val carryOut = WireDefault(false.B)
  val overflow = WireDefault(false.B)

  // Extended results for carry detection
  val sum = Wire(UInt(9.W))
  val diff = Wire(UInt(9.W))
  
  sum := io.a +& io.b +& io.carryIn.asUInt
  diff := io.a -& io.b -& (!io.carryIn).asUInt

  switch(io.operation) {
    is(ALUOp.opADC) {
      result := sum(7, 0)
      carryOut := sum(8)
      // Overflow: sign of result differs from sign of both operands
      overflow := (io.a(7) === io.b(7)) && (io.a(7) =/= sum(7))
    }
    
    is(ALUOp.opSBC) {
      result := diff(7, 0)
      carryOut := !diff(8)
      overflow := (io.a(7) =/= io.b(7)) && (io.a(7) =/= diff(7))
    }
    
    is(ALUOp.opAND) {
      result := io.a & io.b
    }
    
    is(ALUOp.opORA) {
      result := io.a | io.b
    }
    
    is(ALUOp.opEOR) {
      result := io.a ^ io.b
    }
    
    is(ALUOp.opASL) {
      result := io.a << 1
      carryOut := io.a(7)
    }
    
    is(ALUOp.opLSR) {
      result := io.a >> 1
      carryOut := io.a(0)
    }
    
    is(ALUOp.opROL) {
      result := Cat(io.a(6, 0), io.carryIn)
      carryOut := io.a(7)
    }
    
    is(ALUOp.opROR) {
      result := Cat(io.carryIn, io.a(7, 1))
      carryOut := io.a(0)
    }
    
    is(ALUOp.opINC) {
      result := io.a + 1.U
    }
    
    is(ALUOp.opDEC) {
      result := io.a - 1.U
    }
    
    is(ALUOp.opCMP) {
      result := diff(7, 0)
      carryOut := !diff(8)
    }
    
    is(ALUOp.opBIT) {
      result := io.a & io.b
      overflow := io.b(6)
    }
    
    is(ALUOp.opPASS) {
      result := io.b
    }
  }

  io.result := result
  io.carryOut := carryOut
  io.zero := result === 0.U
  io.negative := result(7)
  io.overflow := overflow
}
