package c64

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers

/**
  * Unit tests for Cia6526 - the MOS 6526 Complex Interface Adapter.
  * 
  * Tests cover:
  * - Reset state
  * - Port A/B with DDR
  * - Timer A/B countdown and underflow
  * - ICR mask/status and read-clear
  * - IRQ generation
  */
class Cia6526ResetTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "Cia6526 reset"

  it should "initialize port registers correctly" in {
    test(new Cia6526) { dut =>
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)  // Read
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      
      // DDRA and DDRB should be $00 (all inputs)
      dut.io.addr.poke(0x2.U)  // DDRA
      dut.io.dataOut.expect(0x00.U)
      
      dut.io.addr.poke(0x3.U)  // DDRB
      dut.io.dataOut.expect(0x00.U)
      
      // Port outputs should be $FF (latch high)
      dut.io.portAOut.expect(0xFF.U)
      dut.io.portBOut.expect(0xFF.U)
      dut.io.portADir.expect(0x00.U)
      dut.io.portBDir.expect(0x00.U)
    }
  }

  it should "initialize timers to $FFFF" in {
    test(new Cia6526) { dut =>
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      
      // Timer A
      dut.io.addr.poke(0x4.U)  // TALO
      dut.io.dataOut.expect(0xFF.U)
      dut.io.addr.poke(0x5.U)  // TAHI
      dut.io.dataOut.expect(0xFF.U)
      
      // Timer B
      dut.io.addr.poke(0x6.U)  // TBLO
      dut.io.dataOut.expect(0xFF.U)
      dut.io.addr.poke(0x7.U)  // TBHI
      dut.io.dataOut.expect(0xFF.U)
    }
  }

  it should "initialize CRA/CRB to $00 (timers stopped)" in {
    test(new Cia6526) { dut =>
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      
      dut.io.addr.poke(0xE.U)  // CRA
      dut.io.dataOut.expect(0x00.U)
      
      dut.io.addr.poke(0xF.U)  // CRB
      dut.io.dataOut.expect(0x00.U)
    }
  }

  it should "initialize IRQ high (inactive)" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(false.B)
      
      dut.io.irq.expect(true.B)  // Active low, so high = no interrupt
    }
  }
}

class Cia6526PortTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "Cia6526 port registers"

  it should "write and read back PRA" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // Write PRA
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x0.U)
      dut.io.dataIn.poke(0xAA.U)
      dut.clock.step(1)
      
      // Output should reflect written value
      dut.io.portAOut.expect(0xAA.U)
      
      // Set DDRA to all outputs
      dut.io.addr.poke(0x2.U)
      dut.io.dataIn.poke(0xFF.U)
      dut.clock.step(1)
      
      // Read PRA - should get latch value since all output
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0x0.U)
      dut.io.dataOut.expect(0xAA.U)
    }
  }

  it should "read external input on input pins" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // DDRA defaults to $00 (all inputs)
      // External input should be read
      dut.io.portAIn.poke(0x55.U)
      
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0x0.U)
      dut.io.dataOut.expect(0x55.U)
      
      // Change external input
      dut.io.portAIn.poke(0xAA.U)
      dut.io.dataOut.expect(0xAA.U)
    }
  }

  it should "mix output and input based on DDR" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // Write PRA = $F0
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x0.U)
      dut.io.dataIn.poke(0xF0.U)
      dut.clock.step(1)
      
      // Write DDRA = $0F (low nibble output, high nibble input)
      dut.io.addr.poke(0x2.U)
      dut.io.dataIn.poke(0x0F.U)
      dut.clock.step(1)
      
      // External input = $AA
      dut.io.portAIn.poke(0xAA.U)
      
      // Read PRA: low nibble from latch ($0), high nibble from input ($A)
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0x0.U)
      // Latch = $F0, DDR = $0F
      // Output bits (DDR=1): $F0 & $0F = $00
      // Input bits (DDR=0): $AA & $F0 = $A0
      // Result: $A0
      dut.io.dataOut.expect(0xA0.U)
    }
  }
}

class Cia6526TimerTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "Cia6526 timer"

  it should "load latch value to counter on LOAD strobe" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // Write timer A latch = $0010
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x4.U)  // TALO
      dut.io.dataIn.poke(0x10.U)
      dut.clock.step(1)
      
      dut.io.addr.poke(0x5.U)  // TAHI
      dut.io.dataIn.poke(0x00.U)
      dut.clock.step(1)
      
      // Timer counter should still be $FFFF
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0x4.U)
      dut.io.dataOut.expect(0xFF.U)
      
      // Write CRA with LOAD bit (bit 4)
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0xE.U)
      dut.io.dataIn.poke(0x10.U)  // LOAD strobe
      dut.clock.step(1)
      
      // Counter should now be $0010
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0x4.U)
      dut.io.dataOut.expect(0x10.U)
      
      dut.io.addr.poke(0x5.U)
      dut.io.dataOut.expect(0x00.U)
    }
  }

  it should "count down when started" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // Set latch to $0005
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x4.U)
      dut.io.dataIn.poke(0x05.U)
      dut.clock.step(1)
      dut.io.addr.poke(0x5.U)
      dut.io.dataIn.poke(0x00.U)
      dut.clock.step(1)
      
      // Load and start: CRA = $11 (START + LOAD)
      dut.io.addr.poke(0xE.U)
      dut.io.dataIn.poke(0x11.U)
      dut.clock.step(1)
      
      // Timer should be counting down
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0x4.U)
      val count1 = dut.io.dataOut.peek().litValue.toInt
      
      dut.clock.step(1)
      val count2 = dut.io.dataOut.peek().litValue.toInt
      
      count2 shouldBe (count1 - 1)
    }
  }

  it should "underflow and reload from latch" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // Set latch to $0003
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x4.U)
      dut.io.dataIn.poke(0x03.U)
      dut.clock.step(1)
      dut.io.addr.poke(0x5.U)
      dut.io.dataIn.poke(0x00.U)
      dut.clock.step(1)
      
      // Load and start continuous: CRA = $11
      dut.io.addr.poke(0xE.U)
      dut.io.dataIn.poke(0x11.U)
      dut.clock.step(1)
      
      // After load: counter = 3
      // Step 1: 3->2, Step 2: 2->1, Step 3: 1->0, Step 4: underflow, reload to 3
      dut.clock.step(4)
      
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0x4.U)
      // On underflow cycle, counter reloads from latch
      dut.io.dataOut.expect(0x03.U)
      
      // After one more cycle, it decrements
      dut.clock.step(1)
      dut.io.dataOut.expect(0x02.U)
    }
  }
}

class Cia6526IcrTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "Cia6526 ICR"

  it should "set mask bits with bit 7 = 1" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // Write ICR with bit 7 = 1 to set mask bits
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0xD.U)
      dut.io.dataIn.poke(0x81.U)  // Set TA mask
      dut.clock.step(1)
      
      // Trigger timer A underflow
      // Set latch to $0001
      dut.io.addr.poke(0x4.U)
      dut.io.dataIn.poke(0x01.U)
      dut.clock.step(1)
      dut.io.addr.poke(0x5.U)
      dut.io.dataIn.poke(0x00.U)
      dut.clock.step(1)
      
      // Load and start: CRA = $11
      dut.io.addr.poke(0xE.U)
      dut.io.dataIn.poke(0x11.U)
      dut.clock.step(1)
      
      // Wait for underflow (counter goes 1 -> 0 -> underflow)
      dut.clock.step(2)
      
      // IRQ should be low (active)
      dut.io.irq.expect(false.B)
    }
  }

  it should "clear mask bits with bit 7 = 0" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // First set TA mask
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0xD.U)
      dut.io.dataIn.poke(0x81.U)
      dut.clock.step(1)
      
      // Then clear it
      dut.io.dataIn.poke(0x01.U)  // Bit 7 = 0, clear TA mask
      dut.clock.step(1)
      
      // Trigger underflow - IRQ should NOT activate
      dut.io.addr.poke(0x4.U)
      dut.io.dataIn.poke(0x01.U)
      dut.clock.step(1)
      dut.io.addr.poke(0x5.U)
      dut.io.dataIn.poke(0x00.U)
      dut.clock.step(1)
      dut.io.addr.poke(0xE.U)
      dut.io.dataIn.poke(0x11.U)
      dut.clock.step(3)
      
      // IRQ should be high (inactive) since mask is cleared
      dut.io.irq.expect(true.B)
    }
  }

  it should "clear status on read" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // Enable TA interrupt
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0xD.U)
      dut.io.dataIn.poke(0x81.U)
      dut.clock.step(1)
      
      // Trigger underflow
      dut.io.addr.poke(0x4.U)
      dut.io.dataIn.poke(0x01.U)
      dut.clock.step(1)
      dut.io.addr.poke(0x5.U)
      dut.io.dataIn.poke(0x00.U)
      dut.clock.step(1)
      dut.io.addr.poke(0xE.U)
      dut.io.dataIn.poke(0x11.U)
      dut.clock.step(3)
      
      // IRQ should be active
      dut.io.irq.expect(false.B)
      
      // Read ICR - should have bit 0 (TA) and bit 7 (IR) set
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0xD.U)
      val icrVal = dut.io.dataOut.peek().litValue.toInt
      (icrVal & 0x81) shouldBe 0x81
      
      dut.clock.step(1)
      
      // After read, status should be cleared, IRQ should go high
      dut.io.irq.expect(true.B)
      
      // Reading again should show 0
      dut.io.dataOut.expect(0x00.U)
    }
  }
}

class Cia6526OneShotTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "Cia6526 one-shot mode"

  it should "stop timer after one-shot underflow" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // Set latch to $0002
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x4.U)
      dut.io.dataIn.poke(0x02.U)
      dut.clock.step(1)
      dut.io.addr.poke(0x5.U)
      dut.io.dataIn.poke(0x00.U)
      dut.clock.step(1)
      
      // Load, start, one-shot: CRA = $19 (START + RUNMODE + LOAD)
      dut.io.addr.poke(0xE.U)
      dut.io.dataIn.poke(0x19.U)
      dut.clock.step(1)
      
      // Wait for underflow
      dut.clock.step(3)
      
      // Timer should have stopped (START bit cleared)
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0xE.U)
      val cra = dut.io.dataOut.peek().litValue.toInt
      (cra & 0x01) shouldBe 0x00  // START bit should be clear
    }
  }
}

class Cia6526TimerBCascadeTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "Cia6526 Timer B cascade"

  it should "count Timer A underflows when INMODE=10" in {
    test(new Cia6526) { dut =>
      dut.io.flag.poke(false.B)
      dut.io.portAIn.poke(0xFF.U)
      dut.io.portBIn.poke(0xFF.U)
      dut.io.cs.poke(true.B)
      
      // Set Timer A latch to $0002
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x4.U)
      dut.io.dataIn.poke(0x02.U)
      dut.clock.step(1)
      dut.io.addr.poke(0x5.U)
      dut.io.dataIn.poke(0x00.U)
      dut.clock.step(1)
      
      // Set Timer B latch to $0005
      dut.io.addr.poke(0x6.U)
      dut.io.dataIn.poke(0x05.U)
      dut.clock.step(1)
      dut.io.addr.poke(0x7.U)
      dut.io.dataIn.poke(0x00.U)
      dut.clock.step(1)
      
      // Load Timer A: CRA = $11
      dut.io.addr.poke(0xE.U)
      dut.io.dataIn.poke(0x11.U)
      dut.clock.step(1)
      
      // Load Timer B with cascade mode: CRB = $51 (START + LOAD + INMODE=10)
      dut.io.addr.poke(0xF.U)
      dut.io.dataIn.poke(0x51.U)
      dut.clock.step(1)
      
      // Read Timer B initial value
      dut.io.rw.poke(true.B)
      dut.io.addr.poke(0x6.U)
      dut.io.dataOut.expect(0x05.U)
      
      // Wait for Timer A to underflow (3 cycles: 2->1->0->underflow+reload)
      dut.clock.step(3)
      
      // Timer B should have decremented once
      dut.io.dataOut.expect(0x04.U)
    }
  }
}
