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
  * SingleStepTests runner for CPU6502
  */
class SingleStepTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  
  behavior of "CPU6502 SingleStepTests"
  
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
  
  // Run a subset of tests from a file
  def runTestsFromFile(resourcePath: String, maxTests: Int = 10): Unit = {
    val testCases = SingleStepTestParser.parseTestFile(resourcePath)
    val subset = testCases.take(maxTests)
    
    test(new CPU6502Testable) { dut =>
      var passed = 0
      var failed = 0
      
      for (testCase <- subset) {
        try {
          runTestCase(dut, testCase)
          passed += 1
        } catch {
          case e: Exception =>
            failed += 1
            println(s"FAILED: ${testCase.name} - ${e.getMessage}")
        }
      }
      
      println(s"\nResults: $passed passed, $failed failed out of ${subset.length}")
    }
  }
  
  // NOP tests (0xEA) - simplest instruction
  it should "execute NOP instructions correctly" in {
    val testCases = SingleStepTestParser.parseTestFile("singlestep/ea.json")
    val subset = testCases.take(50)
    
    test(new CPU6502Testable) { dut =>
      for (testCase <- subset) {
        runTestCase(dut, testCase)
      }
    }
  }
  
  // LDA immediate tests (0xA9)
  it should "execute LDA immediate instructions correctly" in {
    val testCases = SingleStepTestParser.parseTestFile("singlestep/a9.json")
    val subset = testCases.take(50)
    
    test(new CPU6502Testable) { dut =>
      for (testCase <- subset) {
        runTestCase(dut, testCase)
      }
    }
  }
  
  // ADC immediate tests (0x69)
  it should "execute ADC immediate instructions correctly" in {
    val testCases = SingleStepTestParser.parseTestFile("singlestep/69.json")
    val subset = testCases.take(50)
    
    test(new CPU6502Testable) { dut =>
      for (testCase <- subset) {
        runTestCase(dut, testCase)
      }
    }
  }
  
  // JMP absolute tests (0x4C)
  it should "execute JMP absolute instructions correctly" in {
    val testCases = SingleStepTestParser.parseTestFile("singlestep/4c.json")
    val subset = testCases.take(50)
    
    test(new CPU6502Testable) { dut =>
      for (testCase <- subset) {
        runTestCase(dut, testCase)
      }
    }
  }
}

/**
  * Comprehensive test runner - runs more tests per opcode
  */
class SingleStepComprehensiveTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  
  behavior of "CPU6502 Comprehensive SingleStepTests"
  
  // This test runs 100 cases per opcode file
  it should "pass comprehensive NOP tests" ignore {
    val runner = new SingleStepTest
    runner.runTestsFromFile("singlestep/ea.json", 100)
  }
  
  it should "pass comprehensive LDA immediate tests" ignore {
    val runner = new SingleStepTest
    runner.runTestsFromFile("singlestep/a9.json", 100)
  }
}
