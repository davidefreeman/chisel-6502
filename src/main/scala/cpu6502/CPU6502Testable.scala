package cpu6502

import chisel3._
import chisel3.util._

/**
  * Testable version of CPU6502 with direct register access for testing.
  * 
  * This module adds test inputs to directly set CPU state, enabling
  * single-instruction testing with known initial conditions.
  */
class CPU6502Testable extends Module {
  val io = IO(new Bundle {
    // Memory interface
    val address = Output(UInt(16.W))
    val dataIn  = Input(UInt(8.W))
    val dataOut = Output(UInt(8.W))
    val writeEnable = Output(Bool())
    
    // Control signals
    val irq = Input(Bool())
    val nmi = Input(Bool())
    val rdy = Input(Bool())
    
    // Test injection interface
    val test = Input(new Bundle {
      val enable = Bool()       // When high, load test state
      val pc = UInt(16.W)
      val a = UInt(8.W)
      val x = UInt(8.W)
      val y = UInt(8.W)
      val s = UInt(8.W)         // Stack pointer
      val p = UInt(8.W)         // Status register
    })
    
    // Debug outputs
    val debug = Output(new DebugBundle)
    
    // Cycle counter for test synchronization
    val cycleCount = Output(UInt(8.W))
  })

  // ============================================
  // Registers
  // ============================================
  
  val regA  = RegInit(0.U(8.W))
  val regX  = RegInit(0.U(8.W))
  val regY  = RegInit(0.U(8.W))
  val regSP = RegInit(0xFD.U(8.W))
  val regPC = RegInit(0.U(16.W))
  
  // Status register bits
  val flagN = RegInit(false.B)
  val flagV = RegInit(false.B)
  val flagB = RegInit(false.B)
  val flagD = RegInit(false.B)
  val flagI = RegInit(true.B)
  val flagZ = RegInit(false.B)
  val flagC = RegInit(false.B)

  val regP = Cat(flagN, flagV, 1.U(1.W), flagB, flagD, flagI, flagZ, flagC)

  // ============================================
  // CPU State Machine
  // ============================================
  
  object State extends ChiselEnum {
    val sReset, sFetch, sDecode, sExecute, sMemRead, sMemWrite, 
        sReadOperand, sReadAddrLo, sReadAddrHi, sRMWWrite,
        sIndirectReadLo, sIndirectReadHi,
        sJSR, sRTS, sBRK, sRTI, sJMPIndirect = Value
  }
  import State._

  val state = RegInit(sReset)
  val cycle = RegInit(0.U(4.W))
  val cycleCount = RegInit(0.U(8.W))
  
  val opcode = RegInit(0.U(8.W))
  val operand = RegInit(0.U(8.W))
  val addrLo = RegInit(0.U(8.W))
  val addrHi = RegInit(0.U(8.W))
  val effectiveAddr = Cat(addrHi, addrLo)
  val zpAddr = RegInit(0.U(8.W))  // Zero page address for indirect modes

  // ============================================
  // Test State Injection
  // ============================================
  
  when(io.test.enable) {
    regPC := io.test.pc
    regA := io.test.a
    regX := io.test.x
    regY := io.test.y
    regSP := io.test.s
    flagN := io.test.p(7)
    flagV := io.test.p(6)
    flagB := io.test.p(4)
    flagD := io.test.p(3)
    flagI := io.test.p(2)
    flagZ := io.test.p(1)
    flagC := io.test.p(0)
    state := sFetch
    cycle := 0.U
    cycleCount := 0.U
  }

  // ============================================
  // Instruction Decoder
  // ============================================
  
  val decoder = Module(new InstructionDecoder)
  decoder.io.opcode := opcode
  
  // ============================================
  // ALU
  // ============================================
  
  val alu = Module(new ALU)
  // Select ALU input A based on opcode and instruction type
  // For RMW instructions, ALU operates on memory operand
  // For CPX/CPY, ALU compares X or Y register
  alu.io.a := MuxCase(regA, Seq(
    (decoder.io.instrType === InstrType.itRMW) -> operand,  // RMW: operate on memory value
    (opcode === 0xE0.U || opcode === 0xE4.U || opcode === 0xEC.U) -> regX,  // CPX
    (opcode === 0xC0.U || opcode === 0xC4.U || opcode === 0xCC.U) -> regY   // CPY
  ))
  alu.io.b := operand
  alu.io.carryIn := flagC
  alu.io.operation := decoder.io.aluOp

  // ============================================
  // Main State Machine Logic
  // ============================================
  
  io.address := regPC
  io.dataOut := 0.U
  io.writeEnable := false.B
  
  when(!io.test.enable) {
    cycleCount := cycleCount + 1.U
    
    switch(state) {
      is(sReset) {
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
        // Handle different addressing modes
        switch(decoder.io.addressMode) {
          is(AddressMode.amImplied) {
            // RTS, RTI, BRK need special multi-cycle handling
            when(opcode === 0x60.U) {
              state := sRTS
              cycle := 0.U
            }.elsewhen(opcode === 0x40.U) {
              state := sRTI
              cycle := 0.U
            }.elsewhen(opcode === 0x00.U) {
              state := sBRK
              cycle := 0.U
            }.otherwise {
              state := sExecute
            }
          }
          is(AddressMode.amImmediate) {
            io.address := regPC
            operand := io.dataIn
            regPC := regPC + 1.U
            state := sExecute
          }
          is(AddressMode.amAbsolute) {
            io.address := regPC
            addrLo := io.dataIn
            regPC := regPC + 1.U
            // JSR needs special handling to push return address
            when(opcode === 0x20.U) {
              state := sJSR
              cycle := 0.U
            }.otherwise {
              state := sReadAddrHi
            }
          }
          is(AddressMode.amIndirect) {
            // JMP indirect: read pointer address
            io.address := regPC
            addrLo := io.dataIn
            regPC := regPC + 1.U
            state := sJMPIndirect
            cycle := 0.U
          }
          is(AddressMode.amZeroPage) {
            io.address := regPC
            addrLo := io.dataIn
            addrHi := 0.U
            regPC := regPC + 1.U
            state := sMemRead
          }
          is(AddressMode.amZeroPageX) {
            io.address := regPC
            addrLo := (io.dataIn + regX)(7, 0)  // Wrap within zero page
            addrHi := 0.U
            regPC := regPC + 1.U
            state := sMemRead
          }
          is(AddressMode.amZeroPageY) {
            io.address := regPC
            addrLo := (io.dataIn + regY)(7, 0)  // Wrap within zero page
            addrHi := 0.U
            regPC := regPC + 1.U
            state := sMemRead
          }
          is(AddressMode.amAbsoluteX) {
            io.address := regPC
            addrLo := io.dataIn
            regPC := regPC + 1.U
            state := sReadAddrHi
          }
          is(AddressMode.amAbsoluteY) {
            io.address := regPC
            addrLo := io.dataIn
            regPC := regPC + 1.U
            state := sReadAddrHi
          }
          is(AddressMode.amRelative) {
            io.address := regPC
            operand := io.dataIn  // Branch offset (signed)
            regPC := regPC + 1.U
            state := sExecute
          }
          is(AddressMode.amIndirectX) {
            // (zp,X): Read zp byte, add X (wrap), then read pointer from zero page
            io.address := regPC
            zpAddr := (io.dataIn + regX)(7, 0)  // Wrap within zero page
            regPC := regPC + 1.U
            state := sIndirectReadLo
          }
          is(AddressMode.amIndirectY) {
            // (zp),Y: Read zp byte, then read pointer from zero page, add Y later
            io.address := regPC
            zpAddr := io.dataIn
            regPC := regPC + 1.U
            state := sIndirectReadLo
          }
        }
        // Default for unhandled modes
        when(decoder.io.addressMode === AddressMode.amAccumulator) {
          operand := regA
          state := sExecute
        }
      }
      
      is(sReadAddrHi) {
        io.address := regPC
        regPC := regPC + 1.U
        
        // Compute effective address with indexing
        val baseAddr = Cat(io.dataIn, addrLo)
        val indexedAddr = MuxCase(baseAddr, Seq(
          (decoder.io.addressMode === AddressMode.amAbsoluteX) -> (baseAddr + regX),
          (decoder.io.addressMode === AddressMode.amAbsoluteY) -> (baseAddr + regY)
        ))
        addrLo := indexedAddr(7, 0)
        addrHi := indexedAddr(15, 8)
        
        // For JMP, go directly to execute
        when(decoder.io.instrType === InstrType.itJump) {
          state := sExecute
        }.otherwise {
          state := sMemRead
        }
      }
      
      is(sMemRead) {
        io.address := effectiveAddr
        operand := io.dataIn
        // For RMW instructions, go to write phase; otherwise execute
        when(decoder.io.instrType === InstrType.itRMW) {
          state := sRMWWrite
        }.otherwise {
          state := sExecute
        }
      }
      
      is(sIndirectReadLo) {
        // Read low byte of effective address from zero page
        io.address := Cat(0.U(8.W), zpAddr)
        addrLo := io.dataIn
        // Increment zpAddr for high byte read (wraps within zero page)
        zpAddr := zpAddr + 1.U
        state := sIndirectReadHi
      }
      
      is(sIndirectReadHi) {
        // Read high byte of effective address from zero page
        io.address := Cat(0.U(8.W), zpAddr)
        
        // For (zp),Y: add Y to the full address
        // For (zp,X): X was already added before reading pointer
        val baseAddr = Cat(io.dataIn, addrLo)
        val indexedAddr = Mux(
          decoder.io.addressMode === AddressMode.amIndirectY,
          baseAddr + regY,
          baseAddr
        )
        addrLo := indexedAddr(7, 0)
        addrHi := indexedAddr(15, 8)
        
        // For store instructions, go directly to execute (which handles the write)
        when(decoder.io.instrType === InstrType.itStore) {
          state := sExecute
        }.otherwise {
          state := sMemRead
        }
      }
      
      is(sExecute) {
        // Execute based on instruction type
        switch(decoder.io.instrType) {
          is(InstrType.itNOP) {
            state := sFetch
          }
          
          is(InstrType.itLoad) {
            when(decoder.io.writeA) {
              regA := operand
            }
            when(decoder.io.writeX) {
              regX := operand
            }
            when(decoder.io.writeY) {
              regY := operand
            }
            when(decoder.io.updateFlags) {
              flagZ := operand === 0.U
              flagN := operand(7)
            }
            state := sFetch
          }
          
          is(InstrType.itALU) {
            when(decoder.io.writeA) {
              regA := alu.io.result
            }
            when(decoder.io.updateFlags) {
              // N and Z are always updated (except BIT has special handling)
              flagZ := alu.io.zero
              val aluOp = decoder.io.aluOp
              
              // BIT instruction: N = M[7], V = M[6], Z = (A AND M) == 0
              when(aluOp === ALUOp.opBIT) {
                flagN := operand(7)  // N from memory operand, not result
                flagV := operand(6)  // V from memory operand
              }.otherwise {
                flagN := alu.io.negative
              }
              
              // C flag for arithmetic/shift operations
              when(aluOp === ALUOp.opADC || aluOp === ALUOp.opSBC || 
                   aluOp === ALUOp.opCMP || aluOp === ALUOp.opASL ||
                   aluOp === ALUOp.opLSR || aluOp === ALUOp.opROL ||
                   aluOp === ALUOp.opROR) {
                flagC := alu.io.carryOut
              }
              // V flag for ADC/SBC (BIT handled above)
              when(aluOp === ALUOp.opADC || aluOp === ALUOp.opSBC) {
                flagV := alu.io.overflow
              }
            }
            state := sFetch
          }
          
          is(InstrType.itJump) {
            // JMP absolute
            regPC := effectiveAddr
            state := sFetch
          }
          
          is(InstrType.itStore) {
            io.address := effectiveAddr
            // STA opcodes
            when(opcode === 0x85.U || opcode === 0x8D.U || opcode === 0x95.U || 
                 opcode === 0x9D.U || opcode === 0x99.U || opcode === 0x81.U || 
                 opcode === 0x91.U) {
              io.dataOut := regA
            }
            // STX opcodes
            when(opcode === 0x86.U || opcode === 0x96.U || opcode === 0x8E.U) {
              io.dataOut := regX
            }
            // STY opcodes
            when(opcode === 0x84.U || opcode === 0x94.U || opcode === 0x8C.U) {
              io.dataOut := regY
            }
            io.writeEnable := true.B
            state := sFetch
          }
          
          is(InstrType.itStatus) {
            // Flag manipulation instructions
            switch(opcode) {
              is(0x18.U) { flagC := false.B }  // CLC
              is(0x38.U) { flagC := true.B }   // SEC
              is(0x58.U) { flagI := false.B }  // CLI
              is(0x78.U) { flagI := true.B }   // SEI
              is(0xB8.U) { flagV := false.B }  // CLV
              is(0xD8.U) { flagD := false.B }  // CLD
              is(0xF8.U) { flagD := true.B }   // SED
            }
            state := sFetch
          }
          
          is(InstrType.itRegTransfer) {
            // Register-to-register transfers
            val transferValue = Wire(UInt(8.W))
            transferValue := 0.U
            
            switch(opcode) {
              is(0xAA.U) { transferValue := regA }   // TAX: A -> X
              is(0x8A.U) { transferValue := regX }   // TXA: X -> A
              is(0xA8.U) { transferValue := regA }   // TAY: A -> Y
              is(0x98.U) { transferValue := regY }   // TYA: Y -> A
              is(0xBA.U) { transferValue := regSP }  // TSX: S -> X
              is(0x9A.U) { transferValue := regX }   // TXS: X -> S
            }
            
            when(decoder.io.writeA) {
              regA := transferValue
            }
            when(decoder.io.writeX) {
              regX := transferValue
            }
            when(decoder.io.writeY) {
              regY := transferValue
            }
            when(opcode === 0x9A.U) {
              regSP := transferValue  // TXS
            }
            
            when(decoder.io.updateFlags) {
              flagZ := transferValue === 0.U
              flagN := transferValue(7)
            }
            state := sFetch
          }
          
          is(InstrType.itIncDec) {
            // Increment/Decrement register
            val incDecResult = Wire(UInt(8.W))
            incDecResult := 0.U
            
            switch(opcode) {
              is(0xE8.U) { incDecResult := regX + 1.U }  // INX
              is(0xC8.U) { incDecResult := regY + 1.U }  // INY
              is(0xCA.U) { incDecResult := regX - 1.U }  // DEX
              is(0x88.U) { incDecResult := regY - 1.U }  // DEY
            }
            
            when(decoder.io.writeX) {
              regX := incDecResult
            }
            when(decoder.io.writeY) {
              regY := incDecResult
            }
            
            when(decoder.io.updateFlags) {
              flagZ := incDecResult === 0.U
              flagN := incDecResult(7)
            }
            state := sFetch
          }
          
          is(InstrType.itBranch) {
            // Determine if branch is taken based on opcode and flags
            val takeBranch = Wire(Bool())
            takeBranch := false.B
            
            switch(opcode) {
              is(0x10.U) { takeBranch := !flagN }  // BPL - Branch if Positive
              is(0x30.U) { takeBranch := flagN }   // BMI - Branch if Minus
              is(0x50.U) { takeBranch := !flagV }  // BVC - Branch if Overflow Clear
              is(0x70.U) { takeBranch := flagV }   // BVS - Branch if Overflow Set
              is(0x90.U) { takeBranch := !flagC }  // BCC - Branch if Carry Clear
              is(0xB0.U) { takeBranch := flagC }   // BCS - Branch if Carry Set
              is(0xD0.U) { takeBranch := !flagZ }  // BNE - Branch if Not Equal
              is(0xF0.U) { takeBranch := flagZ }   // BEQ - Branch if Equal
            }
            
            when(takeBranch) {
              // Sign-extend offset and add to PC
              val signedOffset = Wire(SInt(16.W))
              signedOffset := operand.asSInt
              regPC := (regPC.asSInt + signedOffset).asUInt
            }
            state := sFetch
          }
          
          is(InstrType.itStack) {
            switch(opcode) {
              is(0x48.U) { // PHA - Push Accumulator
                io.address := Cat(0x01.U(8.W), regSP)
                io.dataOut := regA
                io.writeEnable := true.B
                regSP := regSP - 1.U
              }
              is(0x68.U) { // PLA - Pull Accumulator
                regSP := regSP + 1.U
                io.address := Cat(0x01.U(8.W), regSP + 1.U)
                regA := io.dataIn
                flagZ := io.dataIn === 0.U
                flagN := io.dataIn(7)
              }
              is(0x08.U) { // PHP - Push Processor Status
                io.address := Cat(0x01.U(8.W), regSP)
                // PHP sets B flag in pushed value
                io.dataOut := Cat(flagN, flagV, 1.U(1.W), 1.U(1.W), flagD, flagI, flagZ, flagC)
                io.writeEnable := true.B
                regSP := regSP - 1.U
              }
              is(0x28.U) { // PLP - Pull Processor Status
                regSP := regSP + 1.U
                io.address := Cat(0x01.U(8.W), regSP + 1.U)
                val pulledP = io.dataIn
                flagN := pulledP(7)
                flagV := pulledP(6)
                flagD := pulledP(3)
                flagI := pulledP(2)
                flagZ := pulledP(1)
                flagC := pulledP(0)
              }
            }
            state := sFetch
          }
        }
      }
      
      is(sMemWrite) {
        io.address := effectiveAddr
        io.dataOut := regA
        io.writeEnable := true.B
        state := sFetch
      }
      
      is(sRMWWrite) {
        // Write ALU result back to memory and update flags
        io.address := effectiveAddr
        io.dataOut := alu.io.result
        io.writeEnable := true.B
        
        // Update flags based on ALU result
        when(decoder.io.updateFlags) {
          flagZ := alu.io.zero
          flagN := alu.io.negative
          // Carry flag for shift/rotate operations
          val aluOp = decoder.io.aluOp
          when(aluOp === ALUOp.opASL || aluOp === ALUOp.opLSR || 
               aluOp === ALUOp.opROL || aluOp === ALUOp.opROR) {
            flagC := alu.io.carryOut
          }
        }
        state := sFetch
      }
      
      is(sJSR) {
        // JSR: Push return address-1, then jump to subroutine
        // At entry: addrLo has target low byte, PC points to high byte
        switch(cycle) {
          is(0.U) {
            // Push PC high byte (PC still points to high byte of target)
            io.address := Cat(0x01.U(8.W), regSP)
            io.dataOut := regPC(15, 8)
            io.writeEnable := true.B
            regSP := regSP - 1.U
            cycle := 1.U
          }
          is(1.U) {
            // Push PC low byte
            io.address := Cat(0x01.U(8.W), regSP)
            io.dataOut := regPC(7, 0)
            io.writeEnable := true.B
            regSP := regSP - 1.U
            cycle := 2.U
          }
          is(2.U) {
            // Read target high byte
            io.address := regPC
            addrHi := io.dataIn
            cycle := 3.U
          }
          is(3.U) {
            // Jump to subroutine
            regPC := Cat(addrHi, addrLo)
            state := sFetch
            cycle := 0.U
          }
        }
      }
      
      is(sRTS) {
        // RTS: Pull return address, add 1, continue
        switch(cycle) {
          is(0.U) {
            // Increment SP, prepare to read
            regSP := regSP + 1.U
            cycle := 1.U
          }
          is(1.U) {
            // Read PC low byte
            io.address := Cat(0x01.U(8.W), regSP)
            addrLo := io.dataIn
            regSP := regSP + 1.U
            cycle := 2.U
          }
          is(2.U) {
            // Read PC high byte
            io.address := Cat(0x01.U(8.W), regSP)
            addrHi := io.dataIn
            cycle := 3.U
          }
          is(3.U) {
            // Set PC to return address + 1
            regPC := Cat(addrHi, addrLo) + 1.U
            state := sFetch
            cycle := 0.U
          }
        }
      }
      
      is(sBRK) {
        // BRK: Push PC+1, push P with B set, load IRQ vector
        switch(cycle) {
          is(0.U) {
            // Read and discard byte after BRK, increment PC
            io.address := regPC
            regPC := regPC + 1.U
            cycle := 1.U
          }
          is(1.U) {
            // Push PC high byte
            io.address := Cat(0x01.U(8.W), regSP)
            io.dataOut := regPC(15, 8)
            io.writeEnable := true.B
            regSP := regSP - 1.U
            cycle := 2.U
          }
          is(2.U) {
            // Push PC low byte
            io.address := Cat(0x01.U(8.W), regSP)
            io.dataOut := regPC(7, 0)
            io.writeEnable := true.B
            regSP := regSP - 1.U
            cycle := 3.U
          }
          is(3.U) {
            // Push P with B flag set
            io.address := Cat(0x01.U(8.W), regSP)
            io.dataOut := Cat(flagN, flagV, 1.U(1.W), 1.U(1.W), flagD, flagI, flagZ, flagC)
            io.writeEnable := true.B
            regSP := regSP - 1.U
            flagI := true.B  // Set interrupt disable
            cycle := 4.U
          }
          is(4.U) {
            // Read IRQ vector low
            io.address := 0xFFFE.U
            addrLo := io.dataIn
            cycle := 5.U
          }
          is(5.U) {
            // Read IRQ vector high
            io.address := 0xFFFF.U
            addrHi := io.dataIn
            cycle := 6.U
          }
          is(6.U) {
            // Jump to IRQ handler
            regPC := Cat(addrHi, addrLo)
            state := sFetch
            cycle := 0.U
          }
        }
      }
      
      is(sRTI) {
        // RTI: Pull P, pull PC
        switch(cycle) {
          is(0.U) {
            // Increment SP
            regSP := regSP + 1.U
            cycle := 1.U
          }
          is(1.U) {
            // Pull P
            io.address := Cat(0x01.U(8.W), regSP)
            val pulledP = io.dataIn
            flagN := pulledP(7)
            flagV := pulledP(6)
            flagD := pulledP(3)
            flagI := pulledP(2)
            flagZ := pulledP(1)
            flagC := pulledP(0)
            regSP := regSP + 1.U
            cycle := 2.U
          }
          is(2.U) {
            // Pull PC low
            io.address := Cat(0x01.U(8.W), regSP)
            addrLo := io.dataIn
            regSP := regSP + 1.U
            cycle := 3.U
          }
          is(3.U) {
            // Pull PC high
            io.address := Cat(0x01.U(8.W), regSP)
            addrHi := io.dataIn
            cycle := 4.U
          }
          is(4.U) {
            // Set PC (no increment unlike RTS)
            regPC := Cat(addrHi, addrLo)
            state := sFetch
            cycle := 0.U
          }
        }
      }
      
      is(sJMPIndirect) {
        // JMP indirect: read target address from pointer
        // Note: 6502 bug - if low byte is FF, high byte is read from XX00
        switch(cycle) {
          is(0.U) {
            // Read pointer high byte
            io.address := regPC
            addrHi := io.dataIn
            cycle := 1.U
          }
          is(1.U) {
            // Read target low byte from pointer
            io.address := Cat(addrHi, addrLo)
            zpAddr := io.dataIn  // Store target low temporarily
            cycle := 2.U
          }
          is(2.U) {
            // Read target high byte (with 6502 page crossing bug)
            val nextAddr = Cat(addrHi, (addrLo + 1.U)(7, 0))  // Wrap within page
            io.address := nextAddr
            operand := io.dataIn  // Store target high temporarily
            cycle := 3.U
          }
          is(3.U) {
            // Jump to target
            regPC := Cat(operand, zpAddr)
            state := sFetch
            cycle := 0.U
          }
        }
      }
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
  io.cycleCount := cycleCount
}
