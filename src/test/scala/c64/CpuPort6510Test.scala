package c64

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers

/**
  * Unit tests for CpuPort6510 - the 6510 I/O port emulation.
  * 
  * Tests cover:
  * - Reset state (DDR=$2F, PORT=$37)
  * - DDR read/write
  * - PORT read/write
  * - Banking outputs (LORAM, HIRAM, CHAREN)
  * - DDR direction effects on banking
  */
class CpuPort6510ResetTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "CpuPort6510 reset"

  it should "initialize DDR to $2F" in {
    test(new CpuPort6510) { dut =>
      dut.io.addr.poke(0x0000.U)
      dut.io.we.poke(false.B)
      dut.io.cassSense.poke(false.B)
      dut.clock.step(1)
      dut.io.dataOut.expect(0x2F.U)
    }
  }

  it should "initialize PORT to $37 (reads as $27 due to input bits)" in {
    test(new CpuPort6510) { dut =>
      // PORT register is $37, but read value is affected by DDR
      // DDR=$2F means bit 4 is input (reads cassSense)
      // With cassSense=0, bit 4 reads as 0, so $37 -> $27
      dut.io.addr.poke(0x0001.U)
      dut.io.we.poke(false.B)
      dut.io.cassSense.poke(false.B)
      dut.clock.step(1)
      dut.io.dataOut.expect(0x27.U)
    }
  }

  it should "initialize banking outputs high (standard C64 mode)" in {
    test(new CpuPort6510) { dut =>
      dut.io.cassSense.poke(false.B)
      dut.io.we.poke(false.B)
      dut.io.addr.poke(0x1000.U)  // Not addressing port
      dut.clock.step(1)
      dut.io.loram.expect(true.B)
      dut.io.hiram.expect(true.B)
      dut.io.charen.expect(true.B)
    }
  }
}

class CpuPort6510ReadWriteTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "CpuPort6510 read/write"

  it should "write and read back DDR" in {
    test(new CpuPort6510) { dut =>
      dut.io.cassSense.poke(false.B)
      
      // Write DDR
      dut.io.addr.poke(0x0000.U)
      dut.io.dataIn.poke(0xFF.U)
      dut.io.we.poke(true.B)
      dut.clock.step(1)
      
      // Read DDR
      dut.io.we.poke(false.B)
      dut.io.dataOut.expect(0xFF.U)
    }
  }

  it should "write and read back PORT" in {
    test(new CpuPort6510) { dut =>
      dut.io.cassSense.poke(false.B)
      
      // Write PORT
      dut.io.addr.poke(0x0001.U)
      dut.io.dataIn.poke(0xAA.U)
      dut.io.we.poke(true.B)
      dut.clock.step(1)
      
      // Read PORT - with default DDR ($2F), bits 0-3,5 are outputs
      // So we expect to read back those bits from PORT
      dut.io.we.poke(false.B)
      // Bit 4 is input (reads cassSense), bits 6-7 are inputs (read PORT latch)
      dut.io.dataOut.expect(0xAA.U)
    }
  }

  it should "signal portActive only for $0000-$0001" in {
    test(new CpuPort6510) { dut =>
      dut.io.cassSense.poke(false.B)
      dut.io.we.poke(false.B)
      
      dut.io.addr.poke(0x0000.U)
      dut.io.portActive.expect(true.B)
      
      dut.io.addr.poke(0x0001.U)
      dut.io.portActive.expect(true.B)
      
      dut.io.addr.poke(0x0002.U)
      dut.io.portActive.expect(false.B)
      
      dut.io.addr.poke(0x1000.U)
      dut.io.portActive.expect(false.B)
      
      dut.io.addr.poke(0xFFFF.U)
      dut.io.portActive.expect(false.B)
    }
  }

  it should "return 0 for non-port addresses" in {
    test(new CpuPort6510) { dut =>
      dut.io.cassSense.poke(false.B)
      dut.io.we.poke(false.B)
      dut.io.addr.poke(0x1234.U)
      dut.io.dataOut.expect(0.U)
    }
  }
}

class CpuPort6510BankingTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "CpuPort6510 banking control"

  it should "update LORAM when PORT bit 0 is written" in {
    test(new CpuPort6510) { dut =>
      dut.io.cassSense.poke(false.B)
      dut.io.loram.expect(true.B)  // Initial state
      
      // Write PORT with bit 0 = 0
      dut.io.addr.poke(0x0001.U)
      dut.io.dataIn.poke(0x36.U)  // Clear bit 0
      dut.io.we.poke(true.B)
      dut.clock.step(1)
      
      dut.io.loram.expect(false.B)
      
      // Write PORT with bit 0 = 1
      dut.io.dataIn.poke(0x37.U)
      dut.clock.step(1)
      
      dut.io.loram.expect(true.B)
    }
  }

  it should "update HIRAM when PORT bit 1 is written" in {
    test(new CpuPort6510) { dut =>
      dut.io.cassSense.poke(false.B)
      dut.io.hiram.expect(true.B)
      
      // Write PORT with bit 1 = 0
      dut.io.addr.poke(0x0001.U)
      dut.io.dataIn.poke(0x35.U)
      dut.io.we.poke(true.B)
      dut.clock.step(1)
      
      dut.io.hiram.expect(false.B)
    }
  }

  it should "update CHAREN when PORT bit 2 is written" in {
    test(new CpuPort6510) { dut =>
      dut.io.cassSense.poke(false.B)
      dut.io.charen.expect(true.B)
      
      // Write PORT with bit 2 = 0
      dut.io.addr.poke(0x0001.U)
      dut.io.dataIn.poke(0x33.U)
      dut.clock.step(1)
      dut.io.we.poke(true.B)
      dut.clock.step(1)
      
      dut.io.charen.expect(false.B)
    }
  }

  it should "pull banking bits high when DDR sets them as input" in {
    test(new CpuPort6510) { dut =>
      dut.io.cassSense.poke(false.B)
      
      // Set PORT bits 0-2 to 0
      dut.io.addr.poke(0x0001.U)
      dut.io.dataIn.poke(0x30.U)  // Clear bits 0-2
      dut.io.we.poke(true.B)
      dut.clock.step(1)
      
      // Banking should be low when bits are outputs
      dut.io.loram.expect(false.B)
      dut.io.hiram.expect(false.B)
      dut.io.charen.expect(false.B)
      
      // Now set DDR to make bits 0-2 inputs
      dut.io.addr.poke(0x0000.U)
      dut.io.dataIn.poke(0x28.U)  // Clear bits 0-2 in DDR (make them inputs)
      dut.clock.step(1)
      
      // Banking should pull high when bits are inputs
      dut.io.loram.expect(true.B)
      dut.io.hiram.expect(true.B)
      dut.io.charen.expect(true.B)
    }
  }
}

class CpuPort6510CassetteTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "CpuPort6510 cassette sense"

  it should "read cassSense on bit 4 when DDR bit 4 is input" in {
    test(new CpuPort6510) { dut =>
      // DDR bit 4 is input by default ($2F has bit 4 = 0)
      
      // Test cassSense = 0
      dut.io.cassSense.poke(false.B)
      dut.io.addr.poke(0x0001.U)
      dut.io.we.poke(false.B)
      val read1 = dut.io.dataOut.peek().litValue.toInt
      (read1 & 0x10) shouldBe 0x00
      
      // Test cassSense = 1
      dut.io.cassSense.poke(true.B)
      val read2 = dut.io.dataOut.peek().litValue.toInt
      (read2 & 0x10) shouldBe 0x10
    }
  }
}

class CpuPort6510AllBankingModesTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "CpuPort6510 banking modes"

  // Test all 8 combinations of LORAM/HIRAM/CHAREN
  val testCases = Seq(
    (0x30, false, false, false),  // All ROMs disabled
    (0x31, true, false, false),   // LORAM only
    (0x32, false, true, false),   // HIRAM only
    (0x33, true, true, false),    // LORAM + HIRAM, CHAREN=0 (char ROM visible)
    (0x34, false, false, true),   // CHAREN only
    (0x35, true, false, true),    // LORAM + CHAREN
    (0x36, false, true, true),    // HIRAM + CHAREN (KERNAL + I/O)
    (0x37, true, true, true)      // All enabled (standard C64 mode)
  )

  for ((portVal, loram, hiram, charen) <- testCases) {
    it should s"set banking correctly for PORT=$$${portVal.toHexString.toUpperCase}" in {
      test(new CpuPort6510) { dut =>
        dut.io.cassSense.poke(false.B)
        
        // Write PORT value
        dut.io.addr.poke(0x0001.U)
        dut.io.dataIn.poke(portVal.U)
        dut.io.we.poke(true.B)
        dut.clock.step(1)
        
        dut.io.loram.expect(loram.B)
        dut.io.hiram.expect(hiram.B)
        dut.io.charen.expect(charen.B)
      }
    }
  }
}
