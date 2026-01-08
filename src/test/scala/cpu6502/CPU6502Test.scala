package cpu6502

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class ALUTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "ALU"

  it should "perform addition correctly" in {
    test(new ALU) { dut =>
      // Test simple addition: 5 + 3 = 8
      dut.io.a.poke(5.U)
      dut.io.b.poke(3.U)
      dut.io.carryIn.poke(false.B)
      dut.io.decimalMode.poke(false.B)
      dut.io.operation.poke(ALUOp.opADC)
      dut.io.result.expect(8.U)
      dut.io.carryOut.expect(false.B)
      dut.io.zero.expect(false.B)
      dut.io.negative.expect(false.B)
    }
  }

  it should "detect carry on overflow" in {
    test(new ALU) { dut =>
      // Test overflow: 255 + 1 = 0 with carry
      dut.io.a.poke(255.U)
      dut.io.b.poke(1.U)
      dut.io.carryIn.poke(false.B)
      dut.io.decimalMode.poke(false.B)
      dut.io.operation.poke(ALUOp.opADC)
      dut.io.result.expect(0.U)
      dut.io.carryOut.expect(true.B)
      dut.io.zero.expect(true.B)
    }
  }

  it should "perform AND correctly" in {
    test(new ALU) { dut =>
      dut.io.a.poke(0xF0.U)
      dut.io.b.poke(0x0F.U)
      dut.io.operation.poke(ALUOp.opAND)
      dut.io.result.expect(0.U)
      dut.io.zero.expect(true.B)
    }
  }

  it should "perform OR correctly" in {
    test(new ALU) { dut =>
      dut.io.a.poke(0xF0.U)
      dut.io.b.poke(0x0F.U)
      dut.io.operation.poke(ALUOp.opORA)
      dut.io.result.expect(0xFF.U)
      dut.io.negative.expect(true.B)
    }
  }

  it should "perform shift left correctly" in {
    test(new ALU) { dut =>
      dut.io.a.poke(0x81.U)  // 10000001
      dut.io.operation.poke(ALUOp.opASL)
      dut.io.result.expect(0x02.U)  // 00000010
      dut.io.carryOut.expect(true.B)  // MSB shifted into carry
    }
  }

  it should "perform rotate right correctly" in {
    test(new ALU) { dut =>
      dut.io.a.poke(0x01.U)
      dut.io.carryIn.poke(true.B)
      dut.io.operation.poke(ALUOp.opROR)
      dut.io.result.expect(0x80.U)  // Carry rotated in
      dut.io.carryOut.expect(true.B)  // LSB shifted into carry
    }
  }
}

class InstructionDecoderTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "InstructionDecoder"

  it should "decode LDA immediate" in {
    test(new InstructionDecoder) { dut =>
      dut.io.opcode.poke(0xA9.U)
      dut.io.instrType.expect(InstrType.itLoad)
      dut.io.addressMode.expect(AddressMode.amImmediate)
      dut.io.writeA.expect(true.B)
      dut.io.cycles.expect(2.U)
    }
  }

  it should "decode ADC immediate" in {
    test(new InstructionDecoder) { dut =>
      dut.io.opcode.poke(0x69.U)
      dut.io.instrType.expect(InstrType.itALU)
      dut.io.aluOp.expect(ALUOp.opADC)
      dut.io.writeA.expect(true.B)
    }
  }

  it should "decode JMP absolute" in {
    test(new InstructionDecoder) { dut =>
      dut.io.opcode.poke(0x4C.U)
      dut.io.instrType.expect(InstrType.itJump)
      dut.io.addressMode.expect(AddressMode.amAbsolute)
      dut.io.cycles.expect(3.U)
    }
  }

  it should "decode NOP" in {
    test(new InstructionDecoder) { dut =>
      dut.io.opcode.poke(0xEA.U)
      dut.io.instrType.expect(InstrType.itNOP)
      dut.io.cycles.expect(2.U)
    }
  }
}

class CPU6502Test extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "CPU6502"

  it should "initialize and read reset vector" in {
    test(new CPU6502) { dut =>
      // After reset, CPU should read from 0xFFFC
      dut.clock.step(1)
      dut.io.address.expect(0xFFFC.U)
      
      // Provide low byte of reset vector
      dut.io.dataIn.poke(0x00.U)
      dut.clock.step(1)
      
      // CPU should read from 0xFFFD
      dut.io.address.expect(0xFFFD.U)
      
      // Provide high byte of reset vector
      dut.io.dataIn.poke(0x80.U)
      dut.clock.step(1)
      
      // PC should now be 0x8000
      dut.io.debug.pc.expect(0x8000.U)
    }
  }
}
