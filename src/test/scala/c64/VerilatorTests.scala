package c64

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers

/**
  * Verilator backend tests for C64 components.
  * 
  * These tests run the same test logic as the standard tests but use
  * Verilator to simulate the generated RTL instead of Treadle.
  * 
  * Run with: sbt "testOnly c64.Verilator*"
  */

// =============================================================================
// CpuPort6510 Verilator Tests
// =============================================================================

class VerilatorCpuPort6510ResetTest extends AnyFlatSpec with ChiselScalatestTester with UseVerilator with Matchers {
  behavior of "CpuPort6510 reset (Verilator)"

  it should "initialize DDR to $2F" in {
    test(new CpuPort6510).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.addr.poke(0x0000.U)
      dut.io.we.poke(false.B)
      dut.io.cassSense.poke(false.B)
      dut.clock.step(1)
      dut.io.dataOut.expect(0x2F.U)
    }
  }

  it should "initialize PORT to $37 (reads as $27 due to input bits)" in {
    test(new CpuPort6510).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.addr.poke(0x0001.U)
      dut.io.we.poke(false.B)
      dut.io.cassSense.poke(false.B)
      dut.clock.step(1)
      dut.io.dataOut.expect(0x27.U)
    }
  }
}

class VerilatorCpuPort6510BankingTest extends AnyFlatSpec with ChiselScalatestTester with UseVerilator with Matchers {
  behavior of "CpuPort6510 banking (Verilator)"

  it should "update LORAM when PORT bit 0 is written" in {
    test(new CpuPort6510).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.cassSense.poke(false.B)
      dut.io.loram.expect(true.B)
      
      dut.io.addr.poke(0x0001.U)
      dut.io.dataIn.poke(0x36.U)
      dut.io.we.poke(true.B)
      dut.clock.step(1)
      
      dut.io.loram.expect(false.B)
    }
  }
}

// =============================================================================
// MmuPla Verilator Tests
// =============================================================================

class VerilatorMmuPlaRegionTest extends AnyFlatSpec with ChiselScalatestTester with UseVerilator with Matchers {
  behavior of "MmuPla region detection (Verilator)"

  it should "select RAM for low memory (standard mode)" in {
    test(new MmuPla).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0x0400.U)
      
      dut.io.ramCs.expect(true.B)
      dut.io.basicCs.expect(false.B)
      dut.io.kernalCs.expect(false.B)
    }
  }

  it should "select BASIC ROM at $A000-$BFFF (standard mode)" in {
    test(new MmuPla).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0xA000.U)
      
      dut.io.basicCs.expect(true.B)
      dut.io.ramWe.expect(false.B)
    }
  }
}

// =============================================================================
// Cia6526 Verilator Tests
// =============================================================================

class VerilatorCia6526ResetTest extends AnyFlatSpec with ChiselScalatestTester with UseVerilator with Matchers {
  behavior of "Cia6526 reset (Verilator)"

  it should "initialize timers to $FFFF" in {
    test(new Cia6526).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      
      dut.io.addr.poke(0x4.U)
      dut.io.dataOut.expect(0xFF.U)
      dut.io.addr.poke(0x5.U)
      dut.io.dataOut.expect(0xFF.U)
    }
  }

  it should "initialize IRQ high (inactive)" in {
    test(new Cia6526).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(false.B)
      
      dut.io.irq.expect(true.B)
    }
  }
}

class VerilatorCia6526TimerTest extends AnyFlatSpec with ChiselScalatestTester with UseVerilator with Matchers {
  behavior of "Cia6526 timer (Verilator)"

  it should "count down when started" in {
    test(new Cia6526).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // Write latch = $0010
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x4.U)
      dut.io.dataIn.poke(0x10.U)
      dut.clock.step(1)
      dut.io.addr.poke(0x5.U)
      dut.io.dataIn.poke(0x00.U)
      dut.clock.step(1)
      
      // Start timer with LOAD
      dut.io.addr.poke(0xE.U)
      dut.io.dataIn.poke(0x11.U)
      dut.clock.step(1)
      
      // Clear LOAD bit
      dut.io.dataIn.poke(0x01.U)
      dut.clock.step(1)
      
      // Read timer - should have decremented
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0x4.U)
      val count = dut.io.dataOut.peek().litValue.toInt
      assert(count < 0x10, s"Timer should have decremented, got $count")
    }
  }
}

// =============================================================================
// VicIIText Verilator Tests (using small buffer for speed)
// =============================================================================

// =============================================================================
// C64Top Keyboard Verilator Tests (full system keyboard-to-display)
// =============================================================================

/**
  * Verilator-based keyboard integration test.
  * 
  * Much faster than Treadle because C64Top is elaborated once and reused.
  * Tests the complete keyboard matrix scanning via CIA1.
  */
class VerilatorC64TopKeyboardTest extends AnyFlatSpec with ChiselScalatestTester with UseVerilator with Matchers {
  behavior of "C64Top keyboard (Verilator)"

  /** Build ROM that scans for a specific key and writes its character to screen */
  def buildKeyboardRom(row: Int, col: Int, petscii: Int): Seq[Int] = {
    val rom = Array.fill(8192)(0xEA)  // Fill with NOP
    val rowMask = ~(1 << row) & 0xFF  // Active low row selection
    val colMask = 1 << col            // Column bit to check
    
    // Program at $E000
    rom(0x0000) = 0xA9; rom(0x0001) = 0xFF                      // LDA #$FF
    rom(0x0002) = 0x8D; rom(0x0003) = 0x02; rom(0x0004) = 0xDC  // STA $DC02
    rom(0x0005) = 0xA9; rom(0x0006) = rowMask                   // LDA #rowMask
    rom(0x0007) = 0x8D; rom(0x0008) = 0x00; rom(0x0009) = 0xDC  // STA $DC00
    rom(0x000A) = 0xAD; rom(0x000B) = 0x01; rom(0x000C) = 0xDC  // LDA $DC01
    rom(0x000D) = 0x29; rom(0x000E) = colMask                   // AND #colMask
    rom(0x000F) = 0xD0; rom(0x0010) = 0xF4                      // BNE $E005 (-12)
    rom(0x0011) = 0xA9; rom(0x0012) = petscii                   // LDA #petscii
    rom(0x0013) = 0x8D; rom(0x0014) = 0x00; rom(0x0015) = 0x04  // STA $0400
    rom(0x0016) = 0x4C; rom(0x0017) = 0x16; rom(0x0018) = 0xE0  // JMP $E016
    
    // Reset vector
    rom(0x1FFC) = 0x00; rom(0x1FFD) = 0xE0
    rom.toSeq
  }

  /** Test a single key with Verilator backend */
  def testKey(row: Int, col: Int, petscii: Int, keyName: String): Unit = {
    val rom = buildKeyboardRom(row, col, petscii)
    val colInput = ~(1 << col) & 0xFF
    
    test(new C64Top(
      basicRomContents = Seq(),
      kernalRomContents = rom,
      charRomContents = Seq()
    )).withAnnotations(verilatorAnnotations) { dut =>
      // Initialize
      dut.io.testEnable.poke(false.B)
      dut.io.keyboardCol.poke(0xFF.U)
      dut.io.joy1.poke(0x1F.U)
      dut.io.joy2.poke(0x1F.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.debugAddr.poke(0.U)
      
      // Start at $E000
      dut.io.testEnable.poke(true.B)
      dut.io.testPc.poke(0xE000.U)
      dut.io.testA.poke(0x00.U)
      dut.io.testX.poke(0x00.U)
      dut.io.testY.poke(0x00.U)
      dut.io.testS.poke(0xFF.U)
      dut.io.testP.poke(0x04.U)
      dut.clock.step(1)
      dut.io.testEnable.poke(false.B)
      
      // Run setup and enter polling loop
      dut.clock.step(30)
      
      // Screen should be empty
      dut.io.debugAddr.poke(0x0400.U)
      dut.io.debugData.expect(0x00.U)
      
      // Simulate key press
      dut.io.keyboardCol.poke(colInput.U)
      
      // Run to detect and write
      dut.clock.step(30)
      
      // Verify character
      dut.io.debugAddr.poke(0x0400.U)
      dut.io.debugData.expect(petscii.U)
    }
  }

  // Alphabetic keys - one from each row
  it should "detect 'A' key (row 1, col 2)" in { testKey(1, 2, 0x41, "A") }
  it should "detect 'Z' key (row 1, col 4)" in { testKey(1, 4, 0x5A, "Z") }
  it should "detect 'W' key (row 1, col 1)" in { testKey(1, 1, 0x57, "W") }
  it should "detect 'S' key (row 1, col 5)" in { testKey(1, 5, 0x53, "S") }
  it should "detect 'E' key (row 1, col 6)" in { testKey(1, 6, 0x45, "E") }
  it should "detect 'D' key (row 2, col 2)" in { testKey(2, 2, 0x44, "D") }
  it should "detect 'R' key (row 2, col 1)" in { testKey(2, 1, 0x52, "R") }
  it should "detect 'F' key (row 2, col 5)" in { testKey(2, 5, 0x46, "F") }
  it should "detect 'T' key (row 2, col 6)" in { testKey(2, 6, 0x54, "T") }
  it should "detect 'G' key (row 3, col 2)" in { testKey(3, 2, 0x47, "G") }
  it should "detect 'Y' key (row 3, col 1)" in { testKey(3, 1, 0x59, "Y") }
  it should "detect 'H' key (row 3, col 5)" in { testKey(3, 5, 0x48, "H") }
  it should "detect 'U' key (row 3, col 6)" in { testKey(3, 6, 0x55, "U") }
  it should "detect 'J' key (row 4, col 2)" in { testKey(4, 2, 0x4A, "J") }
  it should "detect 'I' key (row 4, col 1)" in { testKey(4, 1, 0x49, "I") }
  it should "detect 'K' key (row 4, col 5)" in { testKey(4, 5, 0x4B, "K") }
  it should "detect 'O' key (row 4, col 6)" in { testKey(4, 6, 0x4F, "O") }
  it should "detect 'L' key (row 5, col 2)" in { testKey(5, 2, 0x4C, "L") }
  it should "detect 'P' key (row 5, col 1)" in { testKey(5, 1, 0x50, "P") }
  it should "detect 'Q' key (row 7, col 6)" in { testKey(7, 6, 0x51, "Q") }
  
  // Number keys
  it should "detect '0' key (row 4, col 3)" in { testKey(4, 3, 0x30, "0") }
  it should "detect '1' key (row 7, col 0)" in { testKey(7, 0, 0x31, "1") }
  it should "detect '2' key (row 7, col 3)" in { testKey(7, 3, 0x32, "2") }
  it should "detect '3' key (row 1, col 0)" in { testKey(1, 0, 0x33, "3") }
  it should "detect '4' key (row 1, col 3)" in { testKey(1, 3, 0x34, "4") }
  it should "detect '5' key (row 2, col 0)" in { testKey(2, 0, 0x35, "5") }
  it should "detect '6' key (row 2, col 3)" in { testKey(2, 3, 0x36, "6") }
  it should "detect '7' key (row 3, col 0)" in { testKey(3, 0, 0x37, "7") }
  it should "detect '8' key (row 3, col 3)" in { testKey(3, 3, 0x38, "8") }
  it should "detect '9' key (row 4, col 0)" in { testKey(4, 0, 0x39, "9") }
  
  // Special keys
  it should "detect SPACE key (row 7, col 4)" in { testKey(7, 4, 0x20, "SPACE") }
  it should "detect '+' key (row 5, col 0)" in { testKey(5, 0, 0x2B, "+") }
  it should "detect '-' key (row 5, col 3)" in { testKey(5, 3, 0x2D, "-") }
  it should "detect '*' key (row 6, col 1)" in { testKey(6, 1, 0x2A, "*") }
  it should "detect '/' key (row 6, col 7)" in { testKey(6, 7, 0x2F, "/") }
  it should "detect '=' key (row 6, col 5)" in { testKey(6, 5, 0x3D, "=") }
  it should "detect '.' key (row 5, col 4)" in { testKey(5, 4, 0x2E, ".") }
  it should "detect ',' key (row 5, col 7)" in { testKey(5, 7, 0x2C, ",") }
  it should "detect ':' key (row 5, col 5)" in { testKey(5, 5, 0x3A, ":") }
  it should "detect ';' key (row 6, col 2)" in { testKey(6, 2, 0x3B, ";") }
  it should "detect '@' key (row 5, col 6)" in { testKey(5, 6, 0x40, "@") }
}

class VerilatorVicIITextResetTest extends AnyFlatSpec with ChiselScalatestTester with UseVerilator with Matchers {
  behavior of "VicIIText reset (Verilator)"

  it should "initialize CR1 to $1B" in {
    test(new VicIIText(10)).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      
      dut.io.addr.poke(0x11.U)
      dut.io.dataOut.expect(0x1B.U)
    }
  }

  it should "initialize displayEn high" in {
    test(new VicIIText(10)).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.cs.poke(false.B)
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      
      dut.io.displayEn.expect(true.B)
    }
  }
}

class VerilatorVicIITextRegisterTest extends AnyFlatSpec with ChiselScalatestTester with UseVerilator with Matchers {
  behavior of "VicIIText registers (Verilator)"

  it should "write and read back CR1" in {
    test(new VicIIText(10)).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.cs.poke(true.B)
      
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x11.U)
      dut.io.dataIn.poke(0x9B.U)
      dut.clock.step(1)
      
      dut.io.rw.poke(true.B)
      dut.io.dataOut.expect(0x9B.U)
    }
  }
}

// =============================================================================
// MemoryController Verilator Tests
// =============================================================================

class VerilatorMemoryControllerRamTest extends AnyFlatSpec with ChiselScalatestTester with UseVerilator with Matchers {
  behavior of "MemoryController RAM (Verilator)"

  it should "write and read back RAM" in {
    test(new MemoryController()).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.ramCs.poke(true.B)
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(false.B)
      dut.io.vicBank.poke(0.U)
      dut.io.vicAddr.poke(0.U)
      
      // Write
      dut.io.cpuAddr.poke(0x0400.U)
      dut.io.cpuDataIn.poke(0x42.U)
      dut.io.cpuWe.poke(true.B)
      dut.clock.step(1)
      
      // Read
      dut.io.cpuWe.poke(false.B)
      dut.clock.step(1)
      dut.io.cpuDataOut.expect(0x42.U)
    }
  }
}

class VerilatorMemoryControllerColorRamTest extends AnyFlatSpec with ChiselScalatestTester with UseVerilator with Matchers {
  behavior of "MemoryController Color RAM (Verilator)"

  it should "only store lower nibble in Color RAM" in {
    test(new MemoryController()).withAnnotations(verilatorAnnotations) { dut =>
      dut.io.ramCs.poke(false.B)
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(true.B)
      dut.io.vicBank.poke(0.U)
      dut.io.vicAddr.poke(0.U)
      
      // Write $5A (upper nibble should be truncated)
      dut.io.cpuAddr.poke(0xD800.U)
      dut.io.cpuDataIn.poke(0x5A.U)
      dut.io.cpuWe.poke(true.B)
      dut.clock.step(1)
      
      // Read back - should get $FA (upper nibble = $F, lower = $A)
      dut.io.cpuWe.poke(false.B)
      dut.clock.step(1)
      dut.io.cpuDataOut.expect(0xFA.U)
    }
  }
}
