// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2026 chisel-6502 contributors

package cpu6502

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers

import io.circe._
import io.circe.parser._
import scala.io.Source

/**
  * Test case parsed from SingleStepTests JSON format
  */
case class TestState(
  pc: Int,
  s: Int,   // Stack pointer
  a: Int,
  x: Int,
  y: Int,
  p: Int,   // Status register
  ram: Map[Int, Int]
)

case class BusCycle(
  address: Int,
  value: Int,
  isRead: Boolean
)

case class SingleStepTestCase(
  name: String,
  initial: TestState,
  expected: TestState,
  cycles: Seq[BusCycle]
)

/**
  * Parser for SingleStepTests JSON format
  */
object SingleStepTestParser {
  
  def parseTestFile(resourcePath: String): Seq[SingleStepTestCase] = {
    val source = Source.fromResource(resourcePath)
    val jsonStr = try source.mkString finally source.close()
    
    parse(jsonStr) match {
      case Right(json) => parseTestArray(json)
      case Left(error) => 
        throw new RuntimeException(s"Failed to parse JSON: $error")
    }
  }
  
  private def parseTestArray(json: Json): Seq[SingleStepTestCase] = {
    json.asArray.getOrElse(Vector.empty).flatMap { testJson =>
      parseTestCase(testJson)
    }
  }
  
  private def parseTestCase(json: Json): Option[SingleStepTestCase] = {
    val cursor = json.hcursor
    
    for {
      name <- cursor.get[String]("name").toOption
      initial <- parseState(cursor.downField("initial"))
      expected <- parseState(cursor.downField("final"))
      cycles <- parseCycles(cursor.downField("cycles"))
    } yield SingleStepTestCase(name, initial, expected, cycles)
  }
  
  private def parseState(cursor: ACursor): Option[TestState] = {
    for {
      pc <- cursor.get[Int]("pc").toOption
      s <- cursor.get[Int]("s").toOption
      a <- cursor.get[Int]("a").toOption
      x <- cursor.get[Int]("x").toOption
      y <- cursor.get[Int]("y").toOption
      p <- cursor.get[Int]("p").toOption
      ramArray <- cursor.get[Seq[Seq[Int]]]("ram").toOption
    } yield {
      val ram = ramArray.collect {
        case Seq(addr, value) => addr -> value
      }.toMap
      TestState(pc, s, a, x, y, p, ram)
    }
  }
  
  private def parseCycles(cursor: ACursor): Option[Seq[BusCycle]] = {
    cursor.as[Seq[Json]].toOption.map { cycleJsons =>
      cycleJsons.flatMap { cycleJson =>
        cycleJson.asArray.flatMap {
          case Vector(addrJson, valJson, typeJson) =>
            for {
              addr <- addrJson.as[Int].toOption
              value <- valJson.as[Int].toOption
              cycleType <- typeJson.as[String].toOption
            } yield BusCycle(addr, value, cycleType == "read")
          case _ => None
        }
      }
    }
  }
}

/**
  * Memory simulation for SingleStepTests
  */
class TestMemory(initialRam: Map[Int, Int]) {
  private val memory = scala.collection.mutable.Map[Int, Int]() ++ initialRam
  
  def read(address: Int): Int = memory.getOrElse(address, 0)
  
  def write(address: Int, value: Int): Unit = {
    memory(address) = value
  }
  
  def getContents: Map[Int, Int] = memory.toMap
}

/**
  * Base trait for SingleStepTests with shared configuration and helpers
  */
trait SingleStepTestBase extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  
  // Configurable test count (default: 50)
  val testCount: Int = sys.props.getOrElse("testCount", 
    sys.env.getOrElse("TEST_COUNT", "50")).toInt
  
  // Progress reporting interval
  val progressInterval: Int = sys.props.getOrElse("progressInterval",
    sys.env.getOrElse("PROGRESS_INTERVAL", "100")).toInt
  
  // Helper to run a single test case
  def runTestCase(dut: CPU6502Testable, testCase: SingleStepTestCase): Unit = {
    val memory = new TestMemory(testCase.initial.ram)
    
    // Inject initial state
    dut.io.test.enable.poke(true.B)
    dut.io.test.pc.poke(testCase.initial.pc.U)
    dut.io.test.a.poke(testCase.initial.a.U)
    dut.io.test.x.poke(testCase.initial.x.U)
    dut.io.test.y.poke(testCase.initial.y.U)
    dut.io.test.s.poke(testCase.initial.s.U)
    dut.io.test.p.poke(testCase.initial.p.U)
    dut.io.irq.poke(false.B)
    dut.io.nmi.poke(false.B)
    dut.io.rdy.poke(true.B)
    
    dut.clock.step(1)
    
    // Disable test injection, start execution
    dut.io.test.enable.poke(false.B)
    
    // Provide memory data based on address requests
    // State values: sReset=0, sFetch=1, sDecode=2, sExecute=3, ...
    val sFetchState = 1
    val maxCycles = 20  // Safety limit
    var instructionComplete = false
    var cycleCount = 0
    var wasInFetch = true  // Start in sFetch after test injection
    
    while (!instructionComplete && cycleCount < maxCycles) {
      val addr = dut.io.address.peek().litValue.toInt
      val memValue = memory.read(addr)
      dut.io.dataIn.poke(memValue.U)
      
      // Check for memory writes
      if (dut.io.writeEnable.peek().litToBoolean) {
        val writeAddr = dut.io.address.peek().litValue.toInt
        val writeData = dut.io.dataOut.peek().litValue.toInt
        memory.write(writeAddr, writeData)
      }
      
      dut.clock.step(1)
      cycleCount += 1
      
      // Check if we've returned to sFetch after leaving it
      val currentState = dut.io.debug.state.peek().litValue.toInt
      if (!wasInFetch && currentState == sFetchState) {
        // Instruction completed, we're back in fetch
        instructionComplete = true
      }
      wasInFetch = (currentState == sFetchState)
    }
    
    // Verify final state
    val finalPc = dut.io.debug.pc.peek().litValue.toInt
    val finalA = dut.io.debug.a.peek().litValue.toInt
    val finalX = dut.io.debug.x.peek().litValue.toInt
    val finalY = dut.io.debug.y.peek().litValue.toInt
    val finalS = dut.io.debug.sp.peek().litValue.toInt
    val finalP = dut.io.debug.p.peek().litValue.toInt
    
    // Use soft assertions to collect all failures
    withClue(s"Test '${testCase.name}' PC: ") {
      finalPc shouldBe testCase.expected.pc
    }
    withClue(s"Test '${testCase.name}' A: ") {
      finalA shouldBe testCase.expected.a
    }
    withClue(s"Test '${testCase.name}' X: ") {
      finalX shouldBe testCase.expected.x
    }
    withClue(s"Test '${testCase.name}' Y: ") {
      finalY shouldBe testCase.expected.y
    }
    withClue(s"Test '${testCase.name}' S: ") {
      finalS shouldBe testCase.expected.s
    }
    // Mask out bit 5 (always 1) and bit 4 (B flag, not stored) for comparison
    withClue(s"Test '${testCase.name}' P: ") {
      (finalP & 0xCF) shouldBe (testCase.expected.p & 0xCF)
    }
  }
  
  // Helper to run tests from a file with progress reporting
  def runOpcodeTests(resourcePath: String): Unit = {
    val opcodeName = resourcePath.replace("singlestep/", "").replace(".json", "").toUpperCase
    val testCases = SingleStepTestParser.parseTestFile(resourcePath)
    val subset = testCases.take(testCount)
    val total = subset.length
    
    println(s">>> $opcodeName: $total tests")
    
    test(new CPU6502Testable) { dut =>
      var completed = 0
      for (testCase <- subset) {
        runTestCase(dut, testCase)
        completed += 1
        if (completed % progressInterval == 0 || completed == total) {
          println(s"    $opcodeName: $completed/$total")
        }
      }
    }
  }
}

// ==========================================
// Individual test classes for parallel execution
// ==========================================

class Test_NOP extends SingleStepTestBase {
  behavior of "NOP (0xEA)"
  it should "execute correctly" in { runOpcodeTests("singlestep/ea.json") }
}

class Test_LDA_imm extends SingleStepTestBase {
  behavior of "LDA immediate (0xA9)"
  it should "execute correctly" in { runOpcodeTests("singlestep/a9.json") }
}

class Test_ADC_imm extends SingleStepTestBase {
  behavior of "ADC immediate (0x69)"
  it should "execute correctly" in { runOpcodeTests("singlestep/69.json") }
}

class Test_JMP_abs extends SingleStepTestBase {
  behavior of "JMP absolute (0x4C)"
  it should "execute correctly" in { runOpcodeTests("singlestep/4c.json") }
}

class Test_SBC_imm extends SingleStepTestBase {
  behavior of "SBC immediate (0xE9)"
  it should "execute correctly" in { runOpcodeTests("singlestep/e9.json") }
}

class Test_AND_imm extends SingleStepTestBase {
  behavior of "AND immediate (0x29)"
  it should "execute correctly" in { runOpcodeTests("singlestep/29.json") }
}

class Test_ORA_imm extends SingleStepTestBase {
  behavior of "ORA immediate (0x09)"
  it should "execute correctly" in { runOpcodeTests("singlestep/09.json") }
}

class Test_EOR_imm extends SingleStepTestBase {
  behavior of "EOR immediate (0x49)"
  it should "execute correctly" in { runOpcodeTests("singlestep/49.json") }
}

class Test_CMP_imm extends SingleStepTestBase {
  behavior of "CMP immediate (0xC9)"
  it should "execute correctly" in { runOpcodeTests("singlestep/c9.json") }
}

class Test_LDX_imm extends SingleStepTestBase {
  behavior of "LDX immediate (0xA2)"
  it should "execute correctly" in { runOpcodeTests("singlestep/a2.json") }
}

class Test_LDY_imm extends SingleStepTestBase {
  behavior of "LDY immediate (0xA0)"
  it should "execute correctly" in { runOpcodeTests("singlestep/a0.json") }
}

// Status Flag Instructions
class Test_CLC extends SingleStepTestBase {
  behavior of "CLC (0x18)"
  it should "execute correctly" in { runOpcodeTests("singlestep/18.json") }
}

class Test_SEC extends SingleStepTestBase {
  behavior of "SEC (0x38)"
  it should "execute correctly" in { runOpcodeTests("singlestep/38.json") }
}

class Test_CLI extends SingleStepTestBase {
  behavior of "CLI (0x58)"
  it should "execute correctly" in { runOpcodeTests("singlestep/58.json") }
}

class Test_SEI extends SingleStepTestBase {
  behavior of "SEI (0x78)"
  it should "execute correctly" in { runOpcodeTests("singlestep/78.json") }
}

class Test_CLV extends SingleStepTestBase {
  behavior of "CLV (0xB8)"
  it should "execute correctly" in { runOpcodeTests("singlestep/b8.json") }
}

class Test_CLD extends SingleStepTestBase {
  behavior of "CLD (0xD8)"
  it should "execute correctly" in { runOpcodeTests("singlestep/d8.json") }
}

class Test_SED extends SingleStepTestBase {
  behavior of "SED (0xF8)"
  it should "execute correctly" in { runOpcodeTests("singlestep/f8.json") }
}

// Register Transfer Instructions
class Test_TAX extends SingleStepTestBase {
  behavior of "TAX (0xAA)"
  it should "execute correctly" in { runOpcodeTests("singlestep/aa.json") }
}

class Test_TXA extends SingleStepTestBase {
  behavior of "TXA (0x8A)"
  it should "execute correctly" in { runOpcodeTests("singlestep/8a.json") }
}

class Test_TAY extends SingleStepTestBase {
  behavior of "TAY (0xA8)"
  it should "execute correctly" in { runOpcodeTests("singlestep/a8.json") }
}

class Test_TYA extends SingleStepTestBase {
  behavior of "TYA (0x98)"
  it should "execute correctly" in { runOpcodeTests("singlestep/98.json") }
}

class Test_TSX extends SingleStepTestBase {
  behavior of "TSX (0xBA)"
  it should "execute correctly" in { runOpcodeTests("singlestep/ba.json") }
}

class Test_TXS extends SingleStepTestBase {
  behavior of "TXS (0x9A)"
  it should "execute correctly" in { runOpcodeTests("singlestep/9a.json") }
}

// Increment/Decrement Instructions
class Test_INX extends SingleStepTestBase {
  behavior of "INX (0xE8)"
  it should "execute correctly" in { runOpcodeTests("singlestep/e8.json") }
}

class Test_INY extends SingleStepTestBase {
  behavior of "INY (0xC8)"
  it should "execute correctly" in { runOpcodeTests("singlestep/c8.json") }
}

class Test_DEX extends SingleStepTestBase {
  behavior of "DEX (0xCA)"
  it should "execute correctly" in { runOpcodeTests("singlestep/ca.json") }
}

class Test_DEY extends SingleStepTestBase {
  behavior of "DEY (0x88)"
  it should "execute correctly" in { runOpcodeTests("singlestep/88.json") }
}

// Compare X/Y Instructions
class Test_CPX_imm extends SingleStepTestBase {
  behavior of "CPX immediate (0xE0)"
  it should "execute correctly" in { runOpcodeTests("singlestep/e0.json") }
}

class Test_CPY_imm extends SingleStepTestBase {
  behavior of "CPY immediate (0xC0)"
  it should "execute correctly" in { runOpcodeTests("singlestep/c0.json") }
}

// Zero Page Load Instructions
class Test_LDA_zp extends SingleStepTestBase {
  behavior of "LDA zero page (0xA5)"
  it should "execute correctly" in { runOpcodeTests("singlestep/a5.json") }
}

class Test_LDX_zp extends SingleStepTestBase {
  behavior of "LDX zero page (0xA6)"
  it should "execute correctly" in { runOpcodeTests("singlestep/a6.json") }
}

class Test_LDY_zp extends SingleStepTestBase {
  behavior of "LDY zero page (0xA4)"
  it should "execute correctly" in { runOpcodeTests("singlestep/a4.json") }
}

// Zero Page Store Instructions
class Test_STA_zp extends SingleStepTestBase {
  behavior of "STA zero page (0x85)"
  it should "execute correctly" in { runOpcodeTests("singlestep/85.json") }
}

class Test_STX_zp extends SingleStepTestBase {
  behavior of "STX zero page (0x86)"
  it should "execute correctly" in { runOpcodeTests("singlestep/86.json") }
}

class Test_STY_zp extends SingleStepTestBase {
  behavior of "STY zero page (0x84)"
  it should "execute correctly" in { runOpcodeTests("singlestep/84.json") }
}

// Absolute Load Instructions
class Test_LDA_abs extends SingleStepTestBase {
  behavior of "LDA absolute (0xAD)"
  it should "execute correctly" in { runOpcodeTests("singlestep/ad.json") }
}

class Test_LDX_abs extends SingleStepTestBase {
  behavior of "LDX absolute (0xAE)"
  it should "execute correctly" in { runOpcodeTests("singlestep/ae.json") }
}

class Test_LDY_abs extends SingleStepTestBase {
  behavior of "LDY absolute (0xAC)"
  it should "execute correctly" in { runOpcodeTests("singlestep/ac.json") }
}

// Zero Page ALU Instructions
class Test_ADC_zp extends SingleStepTestBase {
  behavior of "ADC zero page (0x65)"
  it should "execute correctly" in { runOpcodeTests("singlestep/65.json") }
}

class Test_SBC_zp extends SingleStepTestBase {
  behavior of "SBC zero page (0xE5)"
  it should "execute correctly" in { runOpcodeTests("singlestep/e5.json") }
}

class Test_AND_zp extends SingleStepTestBase {
  behavior of "AND zero page (0x25)"
  it should "execute correctly" in { runOpcodeTests("singlestep/25.json") }
}

class Test_ORA_zp extends SingleStepTestBase {
  behavior of "ORA zero page (0x05)"
  it should "execute correctly" in { runOpcodeTests("singlestep/05.json") }
}

class Test_EOR_zp extends SingleStepTestBase {
  behavior of "EOR zero page (0x45)"
  it should "execute correctly" in { runOpcodeTests("singlestep/45.json") }
}

class Test_CMP_zp extends SingleStepTestBase {
  behavior of "CMP zero page (0xC5)"
  it should "execute correctly" in { runOpcodeTests("singlestep/c5.json") }
}

// Absolute ALU Instructions
class Test_ADC_abs extends SingleStepTestBase {
  behavior of "ADC absolute (0x6D)"
  it should "execute correctly" in { runOpcodeTests("singlestep/6d.json") }
}

class Test_SBC_abs extends SingleStepTestBase {
  behavior of "SBC absolute (0xED)"
  it should "execute correctly" in { runOpcodeTests("singlestep/ed.json") }
}

class Test_AND_abs extends SingleStepTestBase {
  behavior of "AND absolute (0x2D)"
  it should "execute correctly" in { runOpcodeTests("singlestep/2d.json") }
}

class Test_ORA_abs extends SingleStepTestBase {
  behavior of "ORA absolute (0x0D)"
  it should "execute correctly" in { runOpcodeTests("singlestep/0d.json") }
}

class Test_EOR_abs extends SingleStepTestBase {
  behavior of "EOR absolute (0x4D)"
  it should "execute correctly" in { runOpcodeTests("singlestep/4d.json") }
}

class Test_CMP_abs extends SingleStepTestBase {
  behavior of "CMP absolute (0xCD)"
  it should "execute correctly" in { runOpcodeTests("singlestep/cd.json") }
}

// Zero Page,X ALU Instructions
class Test_ADC_zpx extends SingleStepTestBase {
  behavior of "ADC zero page,X (0x75)"
  it should "execute correctly" in { runOpcodeTests("singlestep/75.json") }
}

class Test_SBC_zpx extends SingleStepTestBase {
  behavior of "SBC zero page,X (0xF5)"
  it should "execute correctly" in { runOpcodeTests("singlestep/f5.json") }
}

class Test_AND_zpx extends SingleStepTestBase {
  behavior of "AND zero page,X (0x35)"
  it should "execute correctly" in { runOpcodeTests("singlestep/35.json") }
}

class Test_ORA_zpx extends SingleStepTestBase {
  behavior of "ORA zero page,X (0x15)"
  it should "execute correctly" in { runOpcodeTests("singlestep/15.json") }
}

class Test_EOR_zpx extends SingleStepTestBase {
  behavior of "EOR zero page,X (0x55)"
  it should "execute correctly" in { runOpcodeTests("singlestep/55.json") }
}

class Test_CMP_zpx extends SingleStepTestBase {
  behavior of "CMP zero page,X (0xD5)"
  it should "execute correctly" in { runOpcodeTests("singlestep/d5.json") }
}

// Zero Page,X Load/Store Instructions
class Test_LDA_zpx extends SingleStepTestBase {
  behavior of "LDA zero page,X (0xB5)"
  it should "execute correctly" in { runOpcodeTests("singlestep/b5.json") }
}

class Test_STA_zpx extends SingleStepTestBase {
  behavior of "STA zero page,X (0x95)"
  it should "execute correctly" in { runOpcodeTests("singlestep/95.json") }
}

class Test_LDY_zpx extends SingleStepTestBase {
  behavior of "LDY zero page,X (0xB4)"
  it should "execute correctly" in { runOpcodeTests("singlestep/b4.json") }
}

class Test_STY_zpx extends SingleStepTestBase {
  behavior of "STY zero page,X (0x94)"
  it should "execute correctly" in { runOpcodeTests("singlestep/94.json") }
}

// Zero Page,Y Load/Store Instructions
class Test_LDX_zpy extends SingleStepTestBase {
  behavior of "LDX zero page,Y (0xB6)"
  it should "execute correctly" in { runOpcodeTests("singlestep/b6.json") }
}

class Test_STX_zpy extends SingleStepTestBase {
  behavior of "STX zero page,Y (0x96)"
  it should "execute correctly" in { runOpcodeTests("singlestep/96.json") }
}

// Absolute,X ALU Instructions
class Test_ADC_absx extends SingleStepTestBase {
  behavior of "ADC absolute,X (0x7D)"
  it should "execute correctly" in { runOpcodeTests("singlestep/7d.json") }
}

class Test_SBC_absx extends SingleStepTestBase {
  behavior of "SBC absolute,X (0xFD)"
  it should "execute correctly" in { runOpcodeTests("singlestep/fd.json") }
}

class Test_AND_absx extends SingleStepTestBase {
  behavior of "AND absolute,X (0x3D)"
  it should "execute correctly" in { runOpcodeTests("singlestep/3d.json") }
}

class Test_ORA_absx extends SingleStepTestBase {
  behavior of "ORA absolute,X (0x1D)"
  it should "execute correctly" in { runOpcodeTests("singlestep/1d.json") }
}

class Test_EOR_absx extends SingleStepTestBase {
  behavior of "EOR absolute,X (0x5D)"
  it should "execute correctly" in { runOpcodeTests("singlestep/5d.json") }
}

class Test_CMP_absx extends SingleStepTestBase {
  behavior of "CMP absolute,X (0xDD)"
  it should "execute correctly" in { runOpcodeTests("singlestep/dd.json") }
}

// Absolute,X Load Instructions
class Test_LDA_absx extends SingleStepTestBase {
  behavior of "LDA absolute,X (0xBD)"
  it should "execute correctly" in { runOpcodeTests("singlestep/bd.json") }
}

class Test_LDY_absx extends SingleStepTestBase {
  behavior of "LDY absolute,X (0xBC)"
  it should "execute correctly" in { runOpcodeTests("singlestep/bc.json") }
}

// Absolute,Y ALU Instructions
class Test_ADC_absy extends SingleStepTestBase {
  behavior of "ADC absolute,Y (0x79)"
  it should "execute correctly" in { runOpcodeTests("singlestep/79.json") }
}

class Test_SBC_absy extends SingleStepTestBase {
  behavior of "SBC absolute,Y (0xF9)"
  it should "execute correctly" in { runOpcodeTests("singlestep/f9.json") }
}

class Test_AND_absy extends SingleStepTestBase {
  behavior of "AND absolute,Y (0x39)"
  it should "execute correctly" in { runOpcodeTests("singlestep/39.json") }
}

class Test_ORA_absy extends SingleStepTestBase {
  behavior of "ORA absolute,Y (0x19)"
  it should "execute correctly" in { runOpcodeTests("singlestep/19.json") }
}

class Test_EOR_absy extends SingleStepTestBase {
  behavior of "EOR absolute,Y (0x59)"
  it should "execute correctly" in { runOpcodeTests("singlestep/59.json") }
}

class Test_CMP_absy extends SingleStepTestBase {
  behavior of "CMP absolute,Y (0xD9)"
  it should "execute correctly" in { runOpcodeTests("singlestep/d9.json") }
}

// Absolute,Y Load Instructions
class Test_LDA_absy extends SingleStepTestBase {
  behavior of "LDA absolute,Y (0xB9)"
  it should "execute correctly" in { runOpcodeTests("singlestep/b9.json") }
}

class Test_LDX_absy extends SingleStepTestBase {
  behavior of "LDX absolute,Y (0xBE)"
  it should "execute correctly" in { runOpcodeTests("singlestep/be.json") }
}

// Absolute Indexed Store Instructions
class Test_STA_absx extends SingleStepTestBase {
  behavior of "STA absolute,X (0x9D)"
  it should "execute correctly" in { runOpcodeTests("singlestep/9d.json") }
}

class Test_STA_absy extends SingleStepTestBase {
  behavior of "STA absolute,Y (0x99)"
  it should "execute correctly" in { runOpcodeTests("singlestep/99.json") }
}

// Branch Instructions
class Test_BPL extends SingleStepTestBase {
  behavior of "BPL (0x10)"
  it should "execute correctly" in { runOpcodeTests("singlestep/10.json") }
}

class Test_BMI extends SingleStepTestBase {
  behavior of "BMI (0x30)"
  it should "execute correctly" in { runOpcodeTests("singlestep/30.json") }
}

class Test_BVC extends SingleStepTestBase {
  behavior of "BVC (0x50)"
  it should "execute correctly" in { runOpcodeTests("singlestep/50.json") }
}

class Test_BVS extends SingleStepTestBase {
  behavior of "BVS (0x70)"
  it should "execute correctly" in { runOpcodeTests("singlestep/70.json") }
}

class Test_BCC extends SingleStepTestBase {
  behavior of "BCC (0x90)"
  it should "execute correctly" in { runOpcodeTests("singlestep/90.json") }
}

class Test_BCS extends SingleStepTestBase {
  behavior of "BCS (0xB0)"
  it should "execute correctly" in { runOpcodeTests("singlestep/b0.json") }
}

class Test_BNE extends SingleStepTestBase {
  behavior of "BNE (0xD0)"
  it should "execute correctly" in { runOpcodeTests("singlestep/d0.json") }
}

class Test_BEQ extends SingleStepTestBase {
  behavior of "BEQ (0xF0)"
  it should "execute correctly" in { runOpcodeTests("singlestep/f0.json") }
}

// Stack Instructions
class Test_PHA extends SingleStepTestBase {
  behavior of "PHA (0x48)"
  it should "execute correctly" in { runOpcodeTests("singlestep/48.json") }
}

class Test_PLA extends SingleStepTestBase {
  behavior of "PLA (0x68)"
  it should "execute correctly" in { runOpcodeTests("singlestep/68.json") }
}

class Test_PHP extends SingleStepTestBase {
  behavior of "PHP (0x08)"
  it should "execute correctly" in { runOpcodeTests("singlestep/08.json") }
}

class Test_PLP extends SingleStepTestBase {
  behavior of "PLP (0x28)"
  it should "execute correctly" in { runOpcodeTests("singlestep/28.json") }
}

// Shift/Rotate Accumulator Instructions
class Test_ASL_A extends SingleStepTestBase {
  behavior of "ASL A (0x0A)"
  it should "execute correctly" in { runOpcodeTests("singlestep/0a.json") }
}

class Test_LSR_A extends SingleStepTestBase {
  behavior of "LSR A (0x4A)"
  it should "execute correctly" in { runOpcodeTests("singlestep/4a.json") }
}

class Test_ROL_A extends SingleStepTestBase {
  behavior of "ROL A (0x2A)"
  it should "execute correctly" in { runOpcodeTests("singlestep/2a.json") }
}

class Test_ROR_A extends SingleStepTestBase {
  behavior of "ROR A (0x6A)"
  it should "execute correctly" in { runOpcodeTests("singlestep/6a.json") }
}

// Absolute Store Instructions
class Test_STA_abs extends SingleStepTestBase {
  behavior of "STA absolute (0x8D)"
  it should "execute correctly" in { runOpcodeTests("singlestep/8d.json") }
}

class Test_STX_abs extends SingleStepTestBase {
  behavior of "STX absolute (0x8E)"
  it should "execute correctly" in { runOpcodeTests("singlestep/8e.json") }
}

class Test_STY_abs extends SingleStepTestBase {
  behavior of "STY absolute (0x8C)"
  it should "execute correctly" in { runOpcodeTests("singlestep/8c.json") }
}

// BIT Test Instructions
class Test_BIT_zp extends SingleStepTestBase {
  behavior of "BIT zero page (0x24)"
  it should "execute correctly" in { runOpcodeTests("singlestep/24.json") }
}

class Test_BIT_abs extends SingleStepTestBase {
  behavior of "BIT absolute (0x2C)"
  it should "execute correctly" in { runOpcodeTests("singlestep/2c.json") }
}

// CPX/CPY Memory Mode Instructions
class Test_CPX_zp extends SingleStepTestBase {
  behavior of "CPX zero page (0xE4)"
  it should "execute correctly" in { runOpcodeTests("singlestep/e4.json") }
}

class Test_CPX_abs extends SingleStepTestBase {
  behavior of "CPX absolute (0xEC)"
  it should "execute correctly" in { runOpcodeTests("singlestep/ec.json") }
}

class Test_CPY_zp extends SingleStepTestBase {
  behavior of "CPY zero page (0xC4)"
  it should "execute correctly" in { runOpcodeTests("singlestep/c4.json") }
}

class Test_CPY_abs extends SingleStepTestBase {
  behavior of "CPY absolute (0xCC)"
  it should "execute correctly" in { runOpcodeTests("singlestep/cc.json") }
}

// ==========================================
// Read-Modify-Write Instructions
// ==========================================

// INC - Increment Memory
class Test_INC_zp extends SingleStepTestBase {
  behavior of "INC zero page (0xE6)"
  it should "execute correctly" in { runOpcodeTests("singlestep/e6.json") }
}

class Test_INC_zpx extends SingleStepTestBase {
  behavior of "INC zero page,X (0xF6)"
  it should "execute correctly" in { runOpcodeTests("singlestep/f6.json") }
}

class Test_INC_abs extends SingleStepTestBase {
  behavior of "INC absolute (0xEE)"
  it should "execute correctly" in { runOpcodeTests("singlestep/ee.json") }
}

class Test_INC_absx extends SingleStepTestBase {
  behavior of "INC absolute,X (0xFE)"
  it should "execute correctly" in { runOpcodeTests("singlestep/fe.json") }
}

// DEC - Decrement Memory
class Test_DEC_zp extends SingleStepTestBase {
  behavior of "DEC zero page (0xC6)"
  it should "execute correctly" in { runOpcodeTests("singlestep/c6.json") }
}

class Test_DEC_zpx extends SingleStepTestBase {
  behavior of "DEC zero page,X (0xD6)"
  it should "execute correctly" in { runOpcodeTests("singlestep/d6.json") }
}

class Test_DEC_abs extends SingleStepTestBase {
  behavior of "DEC absolute (0xCE)"
  it should "execute correctly" in { runOpcodeTests("singlestep/ce.json") }
}

class Test_DEC_absx extends SingleStepTestBase {
  behavior of "DEC absolute,X (0xDE)"
  it should "execute correctly" in { runOpcodeTests("singlestep/de.json") }
}

// ASL - Arithmetic Shift Left Memory
class Test_ASL_zp extends SingleStepTestBase {
  behavior of "ASL zero page (0x06)"
  it should "execute correctly" in { runOpcodeTests("singlestep/06.json") }
}

class Test_ASL_zpx extends SingleStepTestBase {
  behavior of "ASL zero page,X (0x16)"
  it should "execute correctly" in { runOpcodeTests("singlestep/16.json") }
}

class Test_ASL_abs extends SingleStepTestBase {
  behavior of "ASL absolute (0x0E)"
  it should "execute correctly" in { runOpcodeTests("singlestep/0e.json") }
}

class Test_ASL_absx extends SingleStepTestBase {
  behavior of "ASL absolute,X (0x1E)"
  it should "execute correctly" in { runOpcodeTests("singlestep/1e.json") }
}

// LSR - Logical Shift Right Memory
class Test_LSR_zp extends SingleStepTestBase {
  behavior of "LSR zero page (0x46)"
  it should "execute correctly" in { runOpcodeTests("singlestep/46.json") }
}

class Test_LSR_zpx extends SingleStepTestBase {
  behavior of "LSR zero page,X (0x56)"
  it should "execute correctly" in { runOpcodeTests("singlestep/56.json") }
}

class Test_LSR_abs extends SingleStepTestBase {
  behavior of "LSR absolute (0x4E)"
  it should "execute correctly" in { runOpcodeTests("singlestep/4e.json") }
}

class Test_LSR_absx extends SingleStepTestBase {
  behavior of "LSR absolute,X (0x5E)"
  it should "execute correctly" in { runOpcodeTests("singlestep/5e.json") }
}

// ROL - Rotate Left Memory
class Test_ROL_zp extends SingleStepTestBase {
  behavior of "ROL zero page (0x26)"
  it should "execute correctly" in { runOpcodeTests("singlestep/26.json") }
}

class Test_ROL_zpx extends SingleStepTestBase {
  behavior of "ROL zero page,X (0x36)"
  it should "execute correctly" in { runOpcodeTests("singlestep/36.json") }
}

class Test_ROL_abs extends SingleStepTestBase {
  behavior of "ROL absolute (0x2E)"
  it should "execute correctly" in { runOpcodeTests("singlestep/2e.json") }
}

class Test_ROL_absx extends SingleStepTestBase {
  behavior of "ROL absolute,X (0x3E)"
  it should "execute correctly" in { runOpcodeTests("singlestep/3e.json") }
}

// ROR - Rotate Right Memory
class Test_ROR_zp extends SingleStepTestBase {
  behavior of "ROR zero page (0x66)"
  it should "execute correctly" in { runOpcodeTests("singlestep/66.json") }
}

class Test_ROR_zpx extends SingleStepTestBase {
  behavior of "ROR zero page,X (0x76)"
  it should "execute correctly" in { runOpcodeTests("singlestep/76.json") }
}

class Test_ROR_abs extends SingleStepTestBase {
  behavior of "ROR absolute (0x6E)"
  it should "execute correctly" in { runOpcodeTests("singlestep/6e.json") }
}

class Test_ROR_absx extends SingleStepTestBase {
  behavior of "ROR absolute,X (0x7E)"
  it should "execute correctly" in { runOpcodeTests("singlestep/7e.json") }
}

// ==========================================
// Indirect Addressing Mode Instructions
// ==========================================

// (zp,X) Indexed Indirect
class Test_LDA_indx extends SingleStepTestBase {
  behavior of "LDA (indirect,X) (0xA1)"
  it should "execute correctly" in { runOpcodeTests("singlestep/a1.json") }
}

class Test_STA_indx extends SingleStepTestBase {
  behavior of "STA (indirect,X) (0x81)"
  it should "execute correctly" in { runOpcodeTests("singlestep/81.json") }
}

class Test_ADC_indx extends SingleStepTestBase {
  behavior of "ADC (indirect,X) (0x61)"
  it should "execute correctly" in { runOpcodeTests("singlestep/61.json") }
}

class Test_SBC_indx extends SingleStepTestBase {
  behavior of "SBC (indirect,X) (0xE1)"
  it should "execute correctly" in { runOpcodeTests("singlestep/e1.json") }
}

class Test_AND_indx extends SingleStepTestBase {
  behavior of "AND (indirect,X) (0x21)"
  it should "execute correctly" in { runOpcodeTests("singlestep/21.json") }
}

class Test_ORA_indx extends SingleStepTestBase {
  behavior of "ORA (indirect,X) (0x01)"
  it should "execute correctly" in { runOpcodeTests("singlestep/01.json") }
}

class Test_EOR_indx extends SingleStepTestBase {
  behavior of "EOR (indirect,X) (0x41)"
  it should "execute correctly" in { runOpcodeTests("singlestep/41.json") }
}

class Test_CMP_indx extends SingleStepTestBase {
  behavior of "CMP (indirect,X) (0xC1)"
  it should "execute correctly" in { runOpcodeTests("singlestep/c1.json") }
}

// (zp),Y Indirect Indexed
class Test_LDA_indy extends SingleStepTestBase {
  behavior of "LDA (indirect),Y (0xB1)"
  it should "execute correctly" in { runOpcodeTests("singlestep/b1.json") }
}

class Test_STA_indy extends SingleStepTestBase {
  behavior of "STA (indirect),Y (0x91)"
  it should "execute correctly" in { runOpcodeTests("singlestep/91.json") }
}

class Test_ADC_indy extends SingleStepTestBase {
  behavior of "ADC (indirect),Y (0x71)"
  it should "execute correctly" in { runOpcodeTests("singlestep/71.json") }
}

class Test_SBC_indy extends SingleStepTestBase {
  behavior of "SBC (indirect),Y (0xF1)"
  it should "execute correctly" in { runOpcodeTests("singlestep/f1.json") }
}

class Test_AND_indy extends SingleStepTestBase {
  behavior of "AND (indirect),Y (0x31)"
  it should "execute correctly" in { runOpcodeTests("singlestep/31.json") }
}

class Test_ORA_indy extends SingleStepTestBase {
  behavior of "ORA (indirect),Y (0x11)"
  it should "execute correctly" in { runOpcodeTests("singlestep/11.json") }
}

class Test_EOR_indy extends SingleStepTestBase {
  behavior of "EOR (indirect),Y (0x51)"
  it should "execute correctly" in { runOpcodeTests("singlestep/51.json") }
}

class Test_CMP_indy extends SingleStepTestBase {
  behavior of "CMP (indirect),Y (0xD1)"
  it should "execute correctly" in { runOpcodeTests("singlestep/d1.json") }
}

// ==========================================
// Subroutine and Interrupt Instructions
// ==========================================

class Test_JSR extends SingleStepTestBase {
  behavior of "JSR (0x20)"
  it should "execute correctly" in { runOpcodeTests("singlestep/20.json") }
}

class Test_RTS extends SingleStepTestBase {
  behavior of "RTS (0x60)"
  it should "execute correctly" in { runOpcodeTests("singlestep/60.json") }
}

class Test_JMP_ind extends SingleStepTestBase {
  behavior of "JMP indirect (0x6C)"
  it should "execute correctly" in { runOpcodeTests("singlestep/6c.json") }
}

class Test_BRK extends SingleStepTestBase {
  behavior of "BRK (0x00)"
  it should "execute correctly" in { runOpcodeTests("singlestep/00.json") }
}

class Test_RTI extends SingleStepTestBase {
  behavior of "RTI (0x40)"
  it should "execute correctly" in { runOpcodeTests("singlestep/40.json") }
}
