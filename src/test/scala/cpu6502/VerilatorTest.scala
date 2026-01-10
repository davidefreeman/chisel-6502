package cpu6502

import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers

import scala.sys.process._
import scala.io.Source
import java.io.{File, PrintWriter, BufferedWriter, OutputStreamWriter}

/**
  * Base trait for Verilator-based SingleStepTests
  * 
  * Runs the same test vectors as SingleStepTestBase but uses
  * the Verilator-compiled Verilog simulation instead of Chisel.
  */
trait VerilatorTestBase extends AnyFlatSpec with Matchers {
  
  // Configurable test count (default: 50)
  val testCount: Int = sys.props.getOrElse("testCount", 
    sys.env.getOrElse("TEST_COUNT", "50")).toInt
  
  // Progress reporting interval
  val progressInterval: Int = sys.props.getOrElse("progressInterval",
    sys.env.getOrElse("PROGRESS_INTERVAL", "100")).toInt
  
  // Path to Verilator simulation binary
  lazy val simBinary: String = {
    // Resources are in target/scala-2.13/test-classes/singlestep
    // Project root is 4 levels up from test-classes
    val resourceDir = new File(getClass.getClassLoader.getResource("singlestep").toURI)
    val testClasses = resourceDir.getParentFile  // test-classes
    val scala213 = testClasses.getParentFile      // scala-2.13
    val target = scala213.getParentFile           // target
    val projectRoot = target.getParentFile        // project root
    new File(projectRoot, "sim/obj_dir/VCPU6502Testable").getAbsolutePath
  }
  
  def simExists: Boolean = new File(simBinary).exists()
  
  /** Format a test case for the Verilator testbench: pc s a x y p addr:val ... */
  def formatTestInput(initial: TestState): String = {
    val parts = Seq(
      initial.pc.toString,
      initial.s.toString,
      initial.a.toString,
      initial.x.toString,
      initial.y.toString,
      initial.p.toString
    ) ++ initial.ram.map { case (addr, value) => s"$addr:$value" }
    parts.mkString(" ")
  }
  
  /** Parse testbench output: pc s a x y p cycles */
  def parseTestOutput(line: String): Option[(Int, Int, Int, Int, Int, Int, Int)] = {
    val parts = line.trim.split("\\s+")
    if (parts.length == 7) {
      try {
        Some((
          parts(0).toInt, // pc
          parts(1).toInt, // s
          parts(2).toInt, // a
          parts(3).toInt, // x
          parts(4).toInt, // y
          parts(5).toInt, // p
          parts(6).toInt  // cycles
        ))
      } catch {
        case _: NumberFormatException => None
      }
    } else None
  }
  
  def runOpcodeTests(resourcePath: String): Unit = {
    assume(simExists, s"Verilator simulation not built. Run 'make' in sim/ directory first.\nExpected: $simBinary")
    
    val opcodeName = resourcePath.replace("singlestep/", "").replace(".json", "").toUpperCase
    val testCases = SingleStepTestParser.parseTestFile(resourcePath)
    val subset = testCases.take(testCount)
    val total = subset.length
    
    println(s">>> VERILATOR $opcodeName: $total tests")
    
    // Format all test inputs
    val inputLines = subset.map(tc => formatTestInput(tc.initial))
    val inputData = inputLines.mkString("\n") + "\n"
    
    // Run simulation
    val process = Process(simBinary)
    var outputLines: List[String] = Nil
    var stderrLines: List[String] = Nil
    
    val exitCode = process.#<(new java.io.ByteArrayInputStream(inputData.getBytes))
      .!(ProcessLogger(
        line => outputLines = outputLines :+ line,
        line => stderrLines = stderrLines :+ line
      ))
    
    if (stderrLines.nonEmpty) {
      System.err.println(s"Verilator stderr: ${stderrLines.mkString("\n")}")
    }
    
    // Validate results
    var passed = 0
    var failures = List.empty[String]
    val pMask = 0xCF // Mask out bits 4 (B) and 5 (unused)
    
    for ((tc, i) <- subset.zipWithIndex) {
      val outLine = if (i < outputLines.length) outputLines(i) else ""
      
      parseTestOutput(outLine) match {
        case Some((actualPc, actualS, actualA, actualX, actualY, actualP, _)) =>
          val exp = tc.expected
          val pass = actualPc == exp.pc &&
                     actualS == exp.s &&
                     actualA == exp.a &&
                     actualX == exp.x &&
                     actualY == exp.y &&
                     (actualP & pMask) == (exp.p & pMask)
          
          if (pass) {
            passed += 1
          } else {
            failures = failures :+ s"Test ${tc.name}: " +
              s"PC=$actualPc(exp ${exp.pc}) " +
              s"S=$actualS(exp ${exp.s}) " +
              s"A=$actualA(exp ${exp.a}) " +
              s"X=$actualX(exp ${exp.x}) " +
              s"Y=$actualY(exp ${exp.y}) " +
              s"P=${actualP & pMask}(exp ${exp.p & pMask})"
          }
          
        case None =>
          failures = failures :+ s"Test ${tc.name}: PARSE ERROR - $outLine"
      }
      
      if ((i + 1) % progressInterval == 0 || i + 1 == total) {
        println(s"    $opcodeName: ${i + 1}/$total")
      }
    }
    
    if (failures.nonEmpty) {
      fail(s"${failures.length} tests failed:\n${failures.take(10).mkString("\n")}")
    }
  }
}

// ==========================================
// Verilator test classes for parallel execution
// Run with: sbt -DtestCount=100 "testOnly cpu6502.VTest_*"
// ==========================================

class VTest_NOP extends VerilatorTestBase {
  behavior of "NOP (0xEA) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/ea.json") }
}

class VTest_LDA_imm extends VerilatorTestBase {
  behavior of "LDA immediate (0xA9) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/a9.json") }
}

class VTest_ADC_imm extends VerilatorTestBase {
  behavior of "ADC immediate (0x69) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/69.json") }
}

class VTest_SBC_imm extends VerilatorTestBase {
  behavior of "SBC immediate (0xE9) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/e9.json") }
}

class VTest_AND_imm extends VerilatorTestBase {
  behavior of "AND immediate (0x29) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/29.json") }
}

class VTest_ORA_imm extends VerilatorTestBase {
  behavior of "ORA immediate (0x09) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/09.json") }
}

class VTest_EOR_imm extends VerilatorTestBase {
  behavior of "EOR immediate (0x49) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/49.json") }
}

class VTest_CMP_imm extends VerilatorTestBase {
  behavior of "CMP immediate (0xC9) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/c9.json") }
}

class VTest_LDX_imm extends VerilatorTestBase {
  behavior of "LDX immediate (0xA2) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/a2.json") }
}

class VTest_LDY_imm extends VerilatorTestBase {
  behavior of "LDY immediate (0xA0) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/a0.json") }
}

// Status Flag Instructions
class VTest_CLC extends VerilatorTestBase {
  behavior of "CLC (0x18) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/18.json") }
}

class VTest_SEC extends VerilatorTestBase {
  behavior of "SEC (0x38) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/38.json") }
}

class VTest_CLI extends VerilatorTestBase {
  behavior of "CLI (0x58) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/58.json") }
}

class VTest_SEI extends VerilatorTestBase {
  behavior of "SEI (0x78) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/78.json") }
}

class VTest_CLV extends VerilatorTestBase {
  behavior of "CLV (0xB8) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/b8.json") }
}

class VTest_CLD extends VerilatorTestBase {
  behavior of "CLD (0xD8) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/d8.json") }
}

class VTest_SED extends VerilatorTestBase {
  behavior of "SED (0xF8) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/f8.json") }
}

// Register Transfer Instructions
class VTest_TAX extends VerilatorTestBase {
  behavior of "TAX (0xAA) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/aa.json") }
}

class VTest_TXA extends VerilatorTestBase {
  behavior of "TXA (0x8A) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/8a.json") }
}

class VTest_TAY extends VerilatorTestBase {
  behavior of "TAY (0xA8) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/a8.json") }
}

class VTest_TYA extends VerilatorTestBase {
  behavior of "TYA (0x98) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/98.json") }
}

class VTest_TSX extends VerilatorTestBase {
  behavior of "TSX (0xBA) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/ba.json") }
}

class VTest_TXS extends VerilatorTestBase {
  behavior of "TXS (0x9A) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/9a.json") }
}

// Increment/Decrement Instructions
class VTest_INX extends VerilatorTestBase {
  behavior of "INX (0xE8) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/e8.json") }
}

class VTest_INY extends VerilatorTestBase {
  behavior of "INY (0xC8) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/c8.json") }
}

class VTest_DEX extends VerilatorTestBase {
  behavior of "DEX (0xCA) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/ca.json") }
}

class VTest_DEY extends VerilatorTestBase {
  behavior of "DEY (0x88) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/88.json") }
}

// Zero Page Instructions
class VTest_LDA_zp extends VerilatorTestBase {
  behavior of "LDA zero page (0xA5) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/a5.json") }
}

class VTest_STA_zp extends VerilatorTestBase {
  behavior of "STA zero page (0x85) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/85.json") }
}

class VTest_ADC_zp extends VerilatorTestBase {
  behavior of "ADC zero page (0x65) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/65.json") }
}

// Absolute Instructions
class VTest_LDA_abs extends VerilatorTestBase {
  behavior of "LDA absolute (0xAD) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/ad.json") }
}

class VTest_STA_abs extends VerilatorTestBase {
  behavior of "STA absolute (0x8D) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/8d.json") }
}

class VTest_JMP_abs extends VerilatorTestBase {
  behavior of "JMP absolute (0x4C) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/4c.json") }
}

// Branch Instructions
class VTest_BEQ extends VerilatorTestBase {
  behavior of "BEQ (0xF0) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/f0.json") }
}

class VTest_BNE extends VerilatorTestBase {
  behavior of "BNE (0xD0) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/d0.json") }
}

class VTest_BCC extends VerilatorTestBase {
  behavior of "BCC (0x90) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/90.json") }
}

class VTest_BCS extends VerilatorTestBase {
  behavior of "BCS (0xB0) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/b0.json") }
}

// Stack Instructions
class VTest_PHA extends VerilatorTestBase {
  behavior of "PHA (0x48) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/48.json") }
}

class VTest_PLA extends VerilatorTestBase {
  behavior of "PLA (0x68) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/68.json") }
}

class VTest_PHP extends VerilatorTestBase {
  behavior of "PHP (0x08) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/08.json") }
}

class VTest_PLP extends VerilatorTestBase {
  behavior of "PLP (0x28) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/28.json") }
}

// Subroutine Instructions
class VTest_JSR extends VerilatorTestBase {
  behavior of "JSR (0x20) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/20.json") }
}

class VTest_RTS extends VerilatorTestBase {
  behavior of "RTS (0x60) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/60.json") }
}

class VTest_BRK extends VerilatorTestBase {
  behavior of "BRK (0x00) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/00.json") }
}

class VTest_RTI extends VerilatorTestBase {
  behavior of "RTI (0x40) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/40.json") }
}

// Indirect Instructions
class VTest_LDA_indx extends VerilatorTestBase {
  behavior of "LDA (indirect,X) (0xA1) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/a1.json") }
}

class VTest_LDA_indy extends VerilatorTestBase {
  behavior of "LDA (indirect),Y (0xB1) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/b1.json") }
}

class VTest_JMP_ind extends VerilatorTestBase {
  behavior of "JMP indirect (0x6C) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/6c.json") }
}

// RMW Instructions
class VTest_INC_zp extends VerilatorTestBase {
  behavior of "INC zero page (0xE6) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/e6.json") }
}

class VTest_DEC_zp extends VerilatorTestBase {
  behavior of "DEC zero page (0xC6) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/c6.json") }
}

class VTest_ASL_A extends VerilatorTestBase {
  behavior of "ASL A (0x0A) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/0a.json") }
}

class VTest_LSR_A extends VerilatorTestBase {
  behavior of "LSR A (0x4A) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/4a.json") }
}

class VTest_ROL_A extends VerilatorTestBase {
  behavior of "ROL A (0x2A) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/2a.json") }
}

class VTest_ROR_A extends VerilatorTestBase {
  behavior of "ROR A (0x6A) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/6a.json") }
}

// ==========================================
// Additional tests for 1:1 correspondence
// ==========================================

// ADC addressing modes
class VTest_ADC_abs extends VerilatorTestBase {
  behavior of "ADC absolute (0x6D) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/6d.json") }
}

class VTest_ADC_absx extends VerilatorTestBase {
  behavior of "ADC absolute,X (0x7D) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/7d.json") }
}

class VTest_ADC_absy extends VerilatorTestBase {
  behavior of "ADC absolute,Y (0x79) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/79.json") }
}

class VTest_ADC_indx extends VerilatorTestBase {
  behavior of "ADC (indirect,X) (0x61) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/61.json") }
}

class VTest_ADC_indy extends VerilatorTestBase {
  behavior of "ADC (indirect),Y (0x71) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/71.json") }
}

class VTest_ADC_zpx extends VerilatorTestBase {
  behavior of "ADC zero page,X (0x75) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/75.json") }
}

// AND addressing modes
class VTest_AND_abs extends VerilatorTestBase {
  behavior of "AND absolute (0x2D) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/2d.json") }
}

class VTest_AND_absx extends VerilatorTestBase {
  behavior of "AND absolute,X (0x3D) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/3d.json") }
}

class VTest_AND_absy extends VerilatorTestBase {
  behavior of "AND absolute,Y (0x39) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/39.json") }
}

class VTest_AND_indx extends VerilatorTestBase {
  behavior of "AND (indirect,X) (0x21) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/21.json") }
}

class VTest_AND_indy extends VerilatorTestBase {
  behavior of "AND (indirect),Y (0x31) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/31.json") }
}

class VTest_AND_zp extends VerilatorTestBase {
  behavior of "AND zero page (0x25) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/25.json") }
}

class VTest_AND_zpx extends VerilatorTestBase {
  behavior of "AND zero page,X (0x35) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/35.json") }
}

// ASL memory modes
class VTest_ASL_abs extends VerilatorTestBase {
  behavior of "ASL absolute (0x0E) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/0e.json") }
}

class VTest_ASL_absx extends VerilatorTestBase {
  behavior of "ASL absolute,X (0x1E) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/1e.json") }
}

class VTest_ASL_zp extends VerilatorTestBase {
  behavior of "ASL zero page (0x06) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/06.json") }
}

class VTest_ASL_zpx extends VerilatorTestBase {
  behavior of "ASL zero page,X (0x16) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/16.json") }
}

// BIT
class VTest_BIT_abs extends VerilatorTestBase {
  behavior of "BIT absolute (0x2C) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/2c.json") }
}

class VTest_BIT_zp extends VerilatorTestBase {
  behavior of "BIT zero page (0x24) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/24.json") }
}

// Branch instructions
class VTest_BMI extends VerilatorTestBase {
  behavior of "BMI (0x30) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/30.json") }
}

class VTest_BPL extends VerilatorTestBase {
  behavior of "BPL (0x10) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/10.json") }
}

class VTest_BVC extends VerilatorTestBase {
  behavior of "BVC (0x50) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/50.json") }
}

class VTest_BVS extends VerilatorTestBase {
  behavior of "BVS (0x70) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/70.json") }
}

// CMP addressing modes
class VTest_CMP_abs extends VerilatorTestBase {
  behavior of "CMP absolute (0xCD) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/cd.json") }
}

class VTest_CMP_absx extends VerilatorTestBase {
  behavior of "CMP absolute,X (0xDD) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/dd.json") }
}

class VTest_CMP_absy extends VerilatorTestBase {
  behavior of "CMP absolute,Y (0xD9) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/d9.json") }
}

class VTest_CMP_indx extends VerilatorTestBase {
  behavior of "CMP (indirect,X) (0xC1) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/c1.json") }
}

class VTest_CMP_indy extends VerilatorTestBase {
  behavior of "CMP (indirect),Y (0xD1) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/d1.json") }
}

class VTest_CMP_zp extends VerilatorTestBase {
  behavior of "CMP zero page (0xC5) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/c5.json") }
}

class VTest_CMP_zpx extends VerilatorTestBase {
  behavior of "CMP zero page,X (0xD5) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/d5.json") }
}

// CPX/CPY
class VTest_CPX_abs extends VerilatorTestBase {
  behavior of "CPX absolute (0xEC) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/ec.json") }
}

class VTest_CPX_imm extends VerilatorTestBase {
  behavior of "CPX immediate (0xE0) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/e0.json") }
}

class VTest_CPX_zp extends VerilatorTestBase {
  behavior of "CPX zero page (0xE4) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/e4.json") }
}

class VTest_CPY_abs extends VerilatorTestBase {
  behavior of "CPY absolute (0xCC) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/cc.json") }
}

class VTest_CPY_imm extends VerilatorTestBase {
  behavior of "CPY immediate (0xC0) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/c0.json") }
}

class VTest_CPY_zp extends VerilatorTestBase {
  behavior of "CPY zero page (0xC4) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/c4.json") }
}

// DEC memory modes
class VTest_DEC_abs extends VerilatorTestBase {
  behavior of "DEC absolute (0xCE) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/ce.json") }
}

class VTest_DEC_absx extends VerilatorTestBase {
  behavior of "DEC absolute,X (0xDE) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/de.json") }
}

class VTest_DEC_zpx extends VerilatorTestBase {
  behavior of "DEC zero page,X (0xD6) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/d6.json") }
}

// EOR addressing modes
class VTest_EOR_abs extends VerilatorTestBase {
  behavior of "EOR absolute (0x4D) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/4d.json") }
}

class VTest_EOR_absx extends VerilatorTestBase {
  behavior of "EOR absolute,X (0x5D) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/5d.json") }
}

class VTest_EOR_absy extends VerilatorTestBase {
  behavior of "EOR absolute,Y (0x59) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/59.json") }
}

class VTest_EOR_indx extends VerilatorTestBase {
  behavior of "EOR (indirect,X) (0x41) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/41.json") }
}

class VTest_EOR_indy extends VerilatorTestBase {
  behavior of "EOR (indirect),Y (0x51) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/51.json") }
}

class VTest_EOR_zp extends VerilatorTestBase {
  behavior of "EOR zero page (0x45) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/45.json") }
}

class VTest_EOR_zpx extends VerilatorTestBase {
  behavior of "EOR zero page,X (0x55) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/55.json") }
}

// INC memory modes
class VTest_INC_abs extends VerilatorTestBase {
  behavior of "INC absolute (0xEE) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/ee.json") }
}

class VTest_INC_absx extends VerilatorTestBase {
  behavior of "INC absolute,X (0xFE) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/fe.json") }
}

class VTest_INC_zpx extends VerilatorTestBase {
  behavior of "INC zero page,X (0xF6) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/f6.json") }
}

// LDA addressing modes
class VTest_LDA_absx extends VerilatorTestBase {
  behavior of "LDA absolute,X (0xBD) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/bd.json") }
}

class VTest_LDA_absy extends VerilatorTestBase {
  behavior of "LDA absolute,Y (0xB9) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/b9.json") }
}

class VTest_LDA_zpx extends VerilatorTestBase {
  behavior of "LDA zero page,X (0xB5) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/b5.json") }
}

// LDX addressing modes
class VTest_LDX_abs extends VerilatorTestBase {
  behavior of "LDX absolute (0xAE) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/ae.json") }
}

class VTest_LDX_absy extends VerilatorTestBase {
  behavior of "LDX absolute,Y (0xBE) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/be.json") }
}

class VTest_LDX_zp extends VerilatorTestBase {
  behavior of "LDX zero page (0xA6) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/a6.json") }
}

class VTest_LDX_zpy extends VerilatorTestBase {
  behavior of "LDX zero page,Y (0xB6) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/b6.json") }
}

// LDY addressing modes
class VTest_LDY_abs extends VerilatorTestBase {
  behavior of "LDY absolute (0xAC) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/ac.json") }
}

class VTest_LDY_absx extends VerilatorTestBase {
  behavior of "LDY absolute,X (0xBC) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/bc.json") }
}

class VTest_LDY_zp extends VerilatorTestBase {
  behavior of "LDY zero page (0xA4) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/a4.json") }
}

class VTest_LDY_zpx extends VerilatorTestBase {
  behavior of "LDY zero page,X (0xB4) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/b4.json") }
}

// LSR memory modes
class VTest_LSR_abs extends VerilatorTestBase {
  behavior of "LSR absolute (0x4E) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/4e.json") }
}

class VTest_LSR_absx extends VerilatorTestBase {
  behavior of "LSR absolute,X (0x5E) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/5e.json") }
}

class VTest_LSR_zp extends VerilatorTestBase {
  behavior of "LSR zero page (0x46) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/46.json") }
}

class VTest_LSR_zpx extends VerilatorTestBase {
  behavior of "LSR zero page,X (0x56) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/56.json") }
}

// ORA addressing modes
class VTest_ORA_abs extends VerilatorTestBase {
  behavior of "ORA absolute (0x0D) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/0d.json") }
}

class VTest_ORA_absx extends VerilatorTestBase {
  behavior of "ORA absolute,X (0x1D) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/1d.json") }
}

class VTest_ORA_absy extends VerilatorTestBase {
  behavior of "ORA absolute,Y (0x19) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/19.json") }
}

class VTest_ORA_indx extends VerilatorTestBase {
  behavior of "ORA (indirect,X) (0x01) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/01.json") }
}

class VTest_ORA_indy extends VerilatorTestBase {
  behavior of "ORA (indirect),Y (0x11) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/11.json") }
}

class VTest_ORA_zp extends VerilatorTestBase {
  behavior of "ORA zero page (0x05) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/05.json") }
}

class VTest_ORA_zpx extends VerilatorTestBase {
  behavior of "ORA zero page,X (0x15) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/15.json") }
}

// ROL memory modes
class VTest_ROL_abs extends VerilatorTestBase {
  behavior of "ROL absolute (0x2E) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/2e.json") }
}

class VTest_ROL_absx extends VerilatorTestBase {
  behavior of "ROL absolute,X (0x3E) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/3e.json") }
}

class VTest_ROL_zp extends VerilatorTestBase {
  behavior of "ROL zero page (0x26) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/26.json") }
}

class VTest_ROL_zpx extends VerilatorTestBase {
  behavior of "ROL zero page,X (0x36) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/36.json") }
}

// ROR memory modes
class VTest_ROR_abs extends VerilatorTestBase {
  behavior of "ROR absolute (0x6E) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/6e.json") }
}

class VTest_ROR_absx extends VerilatorTestBase {
  behavior of "ROR absolute,X (0x7E) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/7e.json") }
}

class VTest_ROR_zp extends VerilatorTestBase {
  behavior of "ROR zero page (0x66) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/66.json") }
}

class VTest_ROR_zpx extends VerilatorTestBase {
  behavior of "ROR zero page,X (0x76) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/76.json") }
}

// SBC addressing modes
class VTest_SBC_abs extends VerilatorTestBase {
  behavior of "SBC absolute (0xED) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/ed.json") }
}

class VTest_SBC_absx extends VerilatorTestBase {
  behavior of "SBC absolute,X (0xFD) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/fd.json") }
}

class VTest_SBC_absy extends VerilatorTestBase {
  behavior of "SBC absolute,Y (0xF9) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/f9.json") }
}

class VTest_SBC_indx extends VerilatorTestBase {
  behavior of "SBC (indirect,X) (0xE1) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/e1.json") }
}

class VTest_SBC_indy extends VerilatorTestBase {
  behavior of "SBC (indirect),Y (0xF1) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/f1.json") }
}

class VTest_SBC_zp extends VerilatorTestBase {
  behavior of "SBC zero page (0xE5) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/e5.json") }
}

class VTest_SBC_zpx extends VerilatorTestBase {
  behavior of "SBC zero page,X (0xF5) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/f5.json") }
}

// STA addressing modes
class VTest_STA_absx extends VerilatorTestBase {
  behavior of "STA absolute,X (0x9D) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/9d.json") }
}

class VTest_STA_absy extends VerilatorTestBase {
  behavior of "STA absolute,Y (0x99) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/99.json") }
}

class VTest_STA_indx extends VerilatorTestBase {
  behavior of "STA (indirect,X) (0x81) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/81.json") }
}

class VTest_STA_indy extends VerilatorTestBase {
  behavior of "STA (indirect),Y (0x91) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/91.json") }
}

class VTest_STA_zpx extends VerilatorTestBase {
  behavior of "STA zero page,X (0x95) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/95.json") }
}

// STX addressing modes
class VTest_STX_abs extends VerilatorTestBase {
  behavior of "STX absolute (0x8E) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/8e.json") }
}

class VTest_STX_zp extends VerilatorTestBase {
  behavior of "STX zero page (0x86) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/86.json") }
}

class VTest_STX_zpy extends VerilatorTestBase {
  behavior of "STX zero page,Y (0x96) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/96.json") }
}

// STY addressing modes
class VTest_STY_abs extends VerilatorTestBase {
  behavior of "STY absolute (0x8C) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/8c.json") }
}

class VTest_STY_zp extends VerilatorTestBase {
  behavior of "STY zero page (0x84) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/84.json") }
}

class VTest_STY_zpx extends VerilatorTestBase {
  behavior of "STY zero page,X (0x94) [Verilator]"
  it should "execute correctly" in { runOpcodeTests("singlestep/94.json") }
}
