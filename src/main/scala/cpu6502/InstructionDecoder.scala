package cpu6502

import chisel3._
import chisel3.util._

/**
  * Addressing modes for the 6502
  */
object AddressMode extends ChiselEnum {
  val amImplied, amImmediate, amZeroPage, amZeroPageX, amZeroPageY,
      amAbsolute, amAbsoluteX, amAbsoluteY, amIndirect, amIndirectX,
      amIndirectY, amRelative, amAccumulator = Value
}

/**
  * Instruction types
  */
object InstrType extends ChiselEnum {
  val itALU, itLoad, itStore, itBranch, itJump, itStack, itStatus, itNOP, itIllegal,
      itRegTransfer, itIncDec, itRMW = Value
}

/**
  * Instruction Decoder for the 6502 CPU
  * 
  * Decodes the 8-bit opcode into control signals for the CPU.
  */
class InstructionDecoder extends Module {
  val io = IO(new Bundle {
    val opcode = Input(UInt(8.W))
    
    val aluOp = Output(ALUOp())
    val addressMode = Output(AddressMode())
    val instrType = Output(InstrType())
    val writeA = Output(Bool())
    val writeX = Output(Bool())
    val writeY = Output(Bool())
    val writeMem = Output(Bool())
    val updateFlags = Output(Bool())
    val cycles = Output(UInt(4.W))
  })

  // Default outputs
  io.aluOp := ALUOp.opPASS
  io.addressMode := AddressMode.amImplied
  io.instrType := InstrType.itNOP
  io.writeA := false.B
  io.writeX := false.B
  io.writeY := false.B
  io.writeMem := false.B
  io.updateFlags := false.B
  io.cycles := 2.U

  // Opcode breakdown: aaabbbcc pattern (for most instructions)
  val cc = io.opcode(1, 0)
  val bbb = io.opcode(4, 2)
  val aaa = io.opcode(7, 5)

  // Full opcode decode using switch
  switch(io.opcode) {
    // ==========================================
    // Load Instructions
    // ==========================================
    
    // LDA - Load Accumulator
    is(0xA9.U) { // LDA #immediate
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amImmediate
      io.aluOp := ALUOp.opPASS
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0xA5.U) { // LDA zero page
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opPASS
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0xB5.U) { // LDA zero page,X
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opPASS
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xAD.U) { // LDA absolute
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opPASS
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xBD.U) { // LDA absolute,X
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opPASS
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xB9.U) { // LDA absolute,Y
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amAbsoluteY
      io.aluOp := ALUOp.opPASS
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xA1.U) { // LDA (indirect,X)
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amIndirectX
      io.aluOp := ALUOp.opPASS
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0xB1.U) { // LDA (indirect),Y
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amIndirectY
      io.aluOp := ALUOp.opPASS
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    
    // LDX - Load X Register
    is(0xA2.U) { // LDX #immediate
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amImmediate
      io.aluOp := ALUOp.opPASS
      io.writeX := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0xA6.U) { // LDX zero page
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opPASS
      io.writeX := true.B
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0xB6.U) { // LDX zero page,Y
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amZeroPageY
      io.aluOp := ALUOp.opPASS
      io.writeX := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xAE.U) { // LDX absolute
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opPASS
      io.writeX := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xBE.U) { // LDX absolute,Y
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amAbsoluteY
      io.aluOp := ALUOp.opPASS
      io.writeX := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    
    // LDY - Load Y Register
    is(0xA0.U) { // LDY #immediate
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amImmediate
      io.aluOp := ALUOp.opPASS
      io.writeY := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0xA4.U) { // LDY zero page
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opPASS
      io.writeY := true.B
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0xB4.U) { // LDY zero page,X
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opPASS
      io.writeY := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xAC.U) { // LDY absolute
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opPASS
      io.writeY := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xBC.U) { // LDY absolute,X
      io.instrType := InstrType.itLoad
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opPASS
      io.writeY := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    
    // ==========================================
    // Store Instructions
    // ==========================================
    
    // STA - Store Accumulator
    is(0x85.U) { // STA zero page
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amZeroPage
      io.writeMem := true.B
      io.cycles := 3.U
    }
    is(0x95.U) { // STA zero page,X
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amZeroPageX
      io.writeMem := true.B
      io.cycles := 4.U
    }
    is(0x8D.U) { // STA absolute
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amAbsolute
      io.writeMem := true.B
      io.cycles := 4.U
    }
    is(0x9D.U) { // STA absolute,X
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amAbsoluteX
      io.writeMem := true.B
      io.cycles := 5.U
    }
    is(0x99.U) { // STA absolute,Y
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amAbsoluteY
      io.writeMem := true.B
      io.cycles := 5.U
    }
    is(0x81.U) { // STA (indirect,X)
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amIndirectX
      io.writeMem := true.B
      io.cycles := 6.U
    }
    is(0x91.U) { // STA (indirect),Y
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amIndirectY
      io.writeMem := true.B
      io.cycles := 6.U
    }
    
    // STX - Store X Register
    is(0x86.U) { // STX zero page
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amZeroPage
      io.writeMem := true.B
      io.cycles := 3.U
    }
    is(0x96.U) { // STX zero page,Y
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amZeroPageY
      io.writeMem := true.B
      io.cycles := 4.U
    }
    is(0x8E.U) { // STX absolute
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amAbsolute
      io.writeMem := true.B
      io.cycles := 4.U
    }
    
    // STY - Store Y Register
    is(0x84.U) { // STY zero page
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amZeroPage
      io.writeMem := true.B
      io.cycles := 3.U
    }
    is(0x94.U) { // STY zero page,X
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amZeroPageX
      io.writeMem := true.B
      io.cycles := 4.U
    }
    is(0x8C.U) { // STY absolute
      io.instrType := InstrType.itStore
      io.addressMode := AddressMode.amAbsolute
      io.writeMem := true.B
      io.cycles := 4.U
    }
    
    // ==========================================
    // Arithmetic Instructions
    // ==========================================
    
    // ADC - Add with Carry
    is(0x69.U) { // ADC #immediate
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amImmediate
      io.aluOp := ALUOp.opADC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0x65.U) { // ADC zero page
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opADC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0x6D.U) { // ADC absolute
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opADC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x75.U) { // ADC zero page,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opADC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x7D.U) { // ADC absolute,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opADC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x79.U) { // ADC absolute,Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteY
      io.aluOp := ALUOp.opADC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x61.U) { // ADC (indirect,X)
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectX
      io.aluOp := ALUOp.opADC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x71.U) { // ADC (indirect),Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectY
      io.aluOp := ALUOp.opADC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    
    // SBC - Subtract with Carry
    is(0xE9.U) { // SBC #immediate
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amImmediate
      io.aluOp := ALUOp.opSBC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0xE5.U) { // SBC zero page
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opSBC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0xED.U) { // SBC absolute
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opSBC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xF5.U) { // SBC zero page,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opSBC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xFD.U) { // SBC absolute,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opSBC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xF9.U) { // SBC absolute,Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteY
      io.aluOp := ALUOp.opSBC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xE1.U) { // SBC (indirect,X)
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectX
      io.aluOp := ALUOp.opSBC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0xF1.U) { // SBC (indirect),Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectY
      io.aluOp := ALUOp.opSBC
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    
    // ==========================================
    // Logic Instructions
    // ==========================================
    
    // AND
    is(0x29.U) { // AND #immediate
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amImmediate
      io.aluOp := ALUOp.opAND
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0x25.U) { // AND zero page
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opAND
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0x2D.U) { // AND absolute
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opAND
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x35.U) { // AND zero page,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opAND
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x3D.U) { // AND absolute,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opAND
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x39.U) { // AND absolute,Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteY
      io.aluOp := ALUOp.opAND
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x21.U) { // AND (indirect,X)
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectX
      io.aluOp := ALUOp.opAND
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x31.U) { // AND (indirect),Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectY
      io.aluOp := ALUOp.opAND
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    
    // ORA
    is(0x09.U) { // ORA #immediate
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amImmediate
      io.aluOp := ALUOp.opORA
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0x05.U) { // ORA zero page
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opORA
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0x0D.U) { // ORA absolute
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opORA
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x15.U) { // ORA zero page,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opORA
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x1D.U) { // ORA absolute,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opORA
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x19.U) { // ORA absolute,Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteY
      io.aluOp := ALUOp.opORA
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x01.U) { // ORA (indirect,X)
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectX
      io.aluOp := ALUOp.opORA
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x11.U) { // ORA (indirect),Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectY
      io.aluOp := ALUOp.opORA
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    
    // EOR
    is(0x49.U) { // EOR #immediate
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amImmediate
      io.aluOp := ALUOp.opEOR
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0x45.U) { // EOR zero page
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opEOR
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0x4D.U) { // EOR absolute
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opEOR
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x55.U) { // EOR zero page,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opEOR
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x5D.U) { // EOR absolute,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opEOR
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x59.U) { // EOR absolute,Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteY
      io.aluOp := ALUOp.opEOR
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x41.U) { // EOR (indirect,X)
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectX
      io.aluOp := ALUOp.opEOR
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x51.U) { // EOR (indirect),Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectY
      io.aluOp := ALUOp.opEOR
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    
    // ==========================================
    // Compare Instructions
    // ==========================================
    
    // CMP - Compare Accumulator
    is(0xC9.U) { // CMP #immediate
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amImmediate
      io.aluOp := ALUOp.opCMP
      io.writeA := false.B  // CMP doesn't modify A
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0xC5.U) { // CMP zero page
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opCMP
      io.writeA := false.B
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0xCD.U) { // CMP absolute
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opCMP
      io.writeA := false.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xD5.U) { // CMP zero page,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opCMP
      io.writeA := false.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xDD.U) { // CMP absolute,X
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opCMP
      io.writeA := false.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xD9.U) { // CMP absolute,Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsoluteY
      io.aluOp := ALUOp.opCMP
      io.writeA := false.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0xC1.U) { // CMP (indirect,X)
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectX
      io.aluOp := ALUOp.opCMP
      io.writeA := false.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0xD1.U) { // CMP (indirect),Y
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amIndirectY
      io.aluOp := ALUOp.opCMP
      io.writeA := false.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    
    // CPX - Compare X Register
    is(0xE0.U) { // CPX #immediate
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amImmediate
      io.aluOp := ALUOp.opCMP
      io.writeX := false.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0xE4.U) { // CPX zero page
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opCMP
      io.writeX := false.B
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0xEC.U) { // CPX absolute
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opCMP
      io.writeX := false.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    
    // CPY - Compare Y Register  
    is(0xC0.U) { // CPY #immediate
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amImmediate
      io.aluOp := ALUOp.opCMP
      io.writeY := false.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0xC4.U) { // CPY zero page
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opCMP
      io.writeY := false.B
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0xCC.U) { // CPY absolute
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opCMP
      io.writeY := false.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    
    // ==========================================
    // Branch Instructions
    // ==========================================
    
    is(0x10.U) { // BPL - Branch if Positive
      io.instrType := InstrType.itBranch
      io.addressMode := AddressMode.amRelative
      io.cycles := 2.U
    }
    is(0x30.U) { // BMI - Branch if Minus
      io.instrType := InstrType.itBranch
      io.addressMode := AddressMode.amRelative
      io.cycles := 2.U
    }
    is(0x50.U) { // BVC - Branch if Overflow Clear
      io.instrType := InstrType.itBranch
      io.addressMode := AddressMode.amRelative
      io.cycles := 2.U
    }
    is(0x70.U) { // BVS - Branch if Overflow Set
      io.instrType := InstrType.itBranch
      io.addressMode := AddressMode.amRelative
      io.cycles := 2.U
    }
    is(0x90.U) { // BCC - Branch if Carry Clear
      io.instrType := InstrType.itBranch
      io.addressMode := AddressMode.amRelative
      io.cycles := 2.U
    }
    is(0xB0.U) { // BCS - Branch if Carry Set
      io.instrType := InstrType.itBranch
      io.addressMode := AddressMode.amRelative
      io.cycles := 2.U
    }
    is(0xD0.U) { // BNE - Branch if Not Equal
      io.instrType := InstrType.itBranch
      io.addressMode := AddressMode.amRelative
      io.cycles := 2.U
    }
    is(0xF0.U) { // BEQ - Branch if Equal
      io.instrType := InstrType.itBranch
      io.addressMode := AddressMode.amRelative
      io.cycles := 2.U
    }
    
    // ==========================================
    // Jump Instructions
    // ==========================================
    
    is(0x4C.U) { // JMP absolute
      io.instrType := InstrType.itJump
      io.addressMode := AddressMode.amAbsolute
      io.cycles := 3.U
    }
    is(0x6C.U) { // JMP indirect
      io.instrType := InstrType.itJump
      io.addressMode := AddressMode.amIndirect
      io.cycles := 5.U
    }
    is(0x20.U) { // JSR absolute
      io.instrType := InstrType.itJump
      io.addressMode := AddressMode.amAbsolute
      io.cycles := 6.U
    }
    is(0x60.U) { // RTS
      io.instrType := InstrType.itJump
      io.addressMode := AddressMode.amImplied
      io.cycles := 6.U
    }
    is(0x40.U) { // RTI
      io.instrType := InstrType.itJump
      io.addressMode := AddressMode.amImplied
      io.cycles := 6.U
    }
    
    // ==========================================
    // Status Flag Instructions
    // ==========================================
    
    is(0x18.U) { // CLC
      io.instrType := InstrType.itStatus
      io.addressMode := AddressMode.amImplied
      io.cycles := 2.U
    }
    is(0x38.U) { // SEC
      io.instrType := InstrType.itStatus
      io.addressMode := AddressMode.amImplied
      io.cycles := 2.U
    }
    is(0x58.U) { // CLI
      io.instrType := InstrType.itStatus
      io.addressMode := AddressMode.amImplied
      io.cycles := 2.U
    }
    is(0x78.U) { // SEI
      io.instrType := InstrType.itStatus
      io.addressMode := AddressMode.amImplied
      io.cycles := 2.U
    }
    is(0xB8.U) { // CLV
      io.instrType := InstrType.itStatus
      io.addressMode := AddressMode.amImplied
      io.cycles := 2.U
    }
    is(0xD8.U) { // CLD
      io.instrType := InstrType.itStatus
      io.addressMode := AddressMode.amImplied
      io.cycles := 2.U
    }
    is(0xF8.U) { // SED
      io.instrType := InstrType.itStatus
      io.addressMode := AddressMode.amImplied
      io.cycles := 2.U
    }
    
    // ==========================================
    // Stack Instructions
    // ==========================================
    
    is(0x48.U) { // PHA - Push Accumulator
      io.instrType := InstrType.itStack
      io.addressMode := AddressMode.amImplied
      io.cycles := 3.U
    }
    is(0x68.U) { // PLA - Pull Accumulator
      io.instrType := InstrType.itStack
      io.addressMode := AddressMode.amImplied
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    is(0x08.U) { // PHP - Push Processor Status
      io.instrType := InstrType.itStack
      io.addressMode := AddressMode.amImplied
      io.cycles := 3.U
    }
    is(0x28.U) { // PLP - Pull Processor Status
      io.instrType := InstrType.itStack
      io.addressMode := AddressMode.amImplied
      io.cycles := 4.U
    }
    
    // ==========================================
    // Shift/Rotate Instructions (Accumulator)
    // ==========================================
    
    is(0x0A.U) { // ASL A - Arithmetic Shift Left Accumulator
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAccumulator
      io.aluOp := ALUOp.opASL
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0x4A.U) { // LSR A - Logical Shift Right Accumulator
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAccumulator
      io.aluOp := ALUOp.opLSR
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0x2A.U) { // ROL A - Rotate Left Accumulator
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAccumulator
      io.aluOp := ALUOp.opROL
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0x6A.U) { // ROR A - Rotate Right Accumulator
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAccumulator
      io.aluOp := ALUOp.opROR
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    
    // ==========================================
    // BIT Test Instructions
    // ==========================================
    
    is(0x24.U) { // BIT zero page
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opBIT
      io.writeA := false.B  // BIT doesn't modify A
      io.updateFlags := true.B
      io.cycles := 3.U
    }
    is(0x2C.U) { // BIT absolute
      io.instrType := InstrType.itALU
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opBIT
      io.writeA := false.B
      io.updateFlags := true.B
      io.cycles := 4.U
    }
    
    // ==========================================
    // Register Transfer Instructions
    // ==========================================
    
    is(0xAA.U) { // TAX - Transfer A to X
      io.instrType := InstrType.itRegTransfer
      io.addressMode := AddressMode.amImplied
      io.writeX := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0x8A.U) { // TXA - Transfer X to A
      io.instrType := InstrType.itRegTransfer
      io.addressMode := AddressMode.amImplied
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0xA8.U) { // TAY - Transfer A to Y
      io.instrType := InstrType.itRegTransfer
      io.addressMode := AddressMode.amImplied
      io.writeY := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0x98.U) { // TYA - Transfer Y to A
      io.instrType := InstrType.itRegTransfer
      io.addressMode := AddressMode.amImplied
      io.writeA := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0xBA.U) { // TSX - Transfer S to X
      io.instrType := InstrType.itRegTransfer
      io.addressMode := AddressMode.amImplied
      io.writeX := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0x9A.U) { // TXS - Transfer X to S
      io.instrType := InstrType.itRegTransfer
      io.addressMode := AddressMode.amImplied
      // TXS doesn't affect flags
      io.cycles := 2.U
    }
    
    // ==========================================
    // Increment/Decrement Register Instructions
    // ==========================================
    
    is(0xE8.U) { // INX - Increment X
      io.instrType := InstrType.itIncDec
      io.addressMode := AddressMode.amImplied
      io.writeX := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0xC8.U) { // INY - Increment Y
      io.instrType := InstrType.itIncDec
      io.addressMode := AddressMode.amImplied
      io.writeY := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0xCA.U) { // DEX - Decrement X
      io.instrType := InstrType.itIncDec
      io.addressMode := AddressMode.amImplied
      io.writeX := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    is(0x88.U) { // DEY - Decrement Y
      io.instrType := InstrType.itIncDec
      io.addressMode := AddressMode.amImplied
      io.writeY := true.B
      io.updateFlags := true.B
      io.cycles := 2.U
    }
    
    // ==========================================
    // NOP
    // ==========================================
    
    is(0xEA.U) { // NOP
      io.instrType := InstrType.itNOP
      io.addressMode := AddressMode.amImplied
      io.cycles := 2.U
    }
    
    // ==========================================
    // Read-Modify-Write Instructions
    // ==========================================
    
    // INC - Increment Memory
    is(0xE6.U) { // INC zero page
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opINC
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    is(0xF6.U) { // INC zero page,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opINC
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0xEE.U) { // INC absolute
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opINC
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0xFE.U) { // INC absolute,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opINC
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 7.U
    }
    
    // DEC - Decrement Memory
    is(0xC6.U) { // DEC zero page
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opDEC
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    is(0xD6.U) { // DEC zero page,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opDEC
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0xCE.U) { // DEC absolute
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opDEC
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0xDE.U) { // DEC absolute,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opDEC
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 7.U
    }
    
    // ASL - Arithmetic Shift Left Memory
    is(0x06.U) { // ASL zero page
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opASL
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    is(0x16.U) { // ASL zero page,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opASL
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x0E.U) { // ASL absolute
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opASL
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x1E.U) { // ASL absolute,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opASL
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 7.U
    }
    
    // LSR - Logical Shift Right Memory
    is(0x46.U) { // LSR zero page
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opLSR
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    is(0x56.U) { // LSR zero page,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opLSR
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x4E.U) { // LSR absolute
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opLSR
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x5E.U) { // LSR absolute,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opLSR
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 7.U
    }
    
    // ROL - Rotate Left Memory
    is(0x26.U) { // ROL zero page
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opROL
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    is(0x36.U) { // ROL zero page,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opROL
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x2E.U) { // ROL absolute
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opROL
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x3E.U) { // ROL absolute,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opROL
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 7.U
    }
    
    // ROR - Rotate Right Memory
    is(0x66.U) { // ROR zero page
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPage
      io.aluOp := ALUOp.opROR
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 5.U
    }
    is(0x76.U) { // ROR zero page,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amZeroPageX
      io.aluOp := ALUOp.opROR
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x6E.U) { // ROR absolute
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsolute
      io.aluOp := ALUOp.opROR
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 6.U
    }
    is(0x7E.U) { // ROR absolute,X
      io.instrType := InstrType.itRMW
      io.addressMode := AddressMode.amAbsoluteX
      io.aluOp := ALUOp.opROR
      io.writeMem := true.B
      io.updateFlags := true.B
      io.cycles := 7.U
    }
  }
}
