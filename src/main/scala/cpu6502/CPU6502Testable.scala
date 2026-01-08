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
        sReadOperand, sReadAddrLo, sReadAddrHi = Value
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
  // Select ALU input A based on opcode (for CPX/CPY comparisons)
  alu.io.a := MuxCase(regA, Seq(
    (opcode === 0xE0.U) -> regX,  // CPX
    (opcode === 0xC0.U) -> regY   // CPY
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
            state := sExecute
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
            state := sReadAddrHi
          }
          is(AddressMode.amZeroPage) {
            io.address := regPC
            addrLo := io.dataIn
            addrHi := 0.U
            regPC := regPC + 1.U
            state := sMemRead
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
        addrHi := io.dataIn
        regPC := regPC + 1.U
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
        state := sExecute
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
              // N and Z are always updated
              flagZ := alu.io.zero
              flagN := alu.io.negative
              // C and V only for arithmetic/compare operations
              val aluOp = decoder.io.aluOp
              when(aluOp === ALUOp.opADC || aluOp === ALUOp.opSBC || 
                   aluOp === ALUOp.opCMP || aluOp === ALUOp.opASL ||
                   aluOp === ALUOp.opLSR || aluOp === ALUOp.opROL ||
                   aluOp === ALUOp.opROR) {
                flagC := alu.io.carryOut
              }
              when(aluOp === ALUOp.opADC || aluOp === ALUOp.opSBC ||
                   aluOp === ALUOp.opBIT) {
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
            when(opcode === 0x85.U || opcode === 0x8D.U || opcode === 0x95.U || 
                 opcode === 0x9D.U || opcode === 0x99.U || opcode === 0x81.U || 
                 opcode === 0x91.U) {
              io.dataOut := regA
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
        }
      }
      
      is(sMemWrite) {
        io.address := effectiveAddr
        io.dataOut := regA
        io.writeEnable := true.B
        state := sFetch
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
