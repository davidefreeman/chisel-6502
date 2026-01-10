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
