package c64

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers

/**
  * Unit tests for MemoryController.
  * 
  * Tests cover:
  * - RAM read/write
  * - ROM reads with chip selects
  * - Color RAM read/write
  * - Write-through behavior
  * - VIC-II access
  */
class MemoryControllerRamTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "MemoryController RAM"

  it should "write and read back RAM" in {
    test(new MemoryController()) { dut =>
      // Disable all chip selects except RAM
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(false.B)
      dut.io.ramCs.poke(true.B)
      dut.io.vicAddr.poke(0.U)
      dut.io.vicBank.poke(0.U)
      dut.io.vicColorAddr.poke(0.U)
      
      // Write to RAM at $1234
      dut.io.cpuAddr.poke(0x1234.U)
      dut.io.cpuDataIn.poke(0xAB.U)
      dut.io.cpuWe.poke(true.B)
      dut.clock.step(1)
      
      // Read back (SyncReadMem has 1-cycle latency)
      dut.io.cpuWe.poke(false.B)
      dut.clock.step(1)
      dut.io.cpuDataOut.expect(0xAB.U)
    }
  }

  it should "write through to RAM even when ROM visible" in {
    test(new MemoryController()) { dut =>
      dut.io.vicAddr.poke(0.U)
      dut.io.vicBank.poke(0.U)
      dut.io.vicColorAddr.poke(0.U)
      
      // Write to BASIC ROM area with basicCs active
      dut.io.cpuAddr.poke(0xA000.U)
      dut.io.cpuDataIn.poke(0x42.U)
      dut.io.basicCs.poke(true.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(false.B)
      dut.io.ramCs.poke(false.B)
      dut.io.cpuWe.poke(true.B)
      dut.clock.step(1)
      
      // Now read as RAM (not ROM)
      dut.io.basicCs.poke(false.B)
      dut.io.ramCs.poke(true.B)
      dut.io.cpuWe.poke(false.B)
      dut.clock.step(1)
      dut.io.cpuDataOut.expect(0x42.U)  // Written through to RAM
    }
  }
}

class MemoryControllerRomTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "MemoryController ROM"

  it should "read from BASIC ROM when basicCs active" in {
    // Create ROM with known pattern
    val basicRom = Seq.tabulate(8192)(i => (i & 0xFF))
    test(new MemoryController(basicRomContents = basicRom)) { dut =>
      dut.io.vicAddr.poke(0.U)
      dut.io.vicBank.poke(0.U)
      dut.io.vicColorAddr.poke(0.U)
      dut.io.cpuWe.poke(false.B)
      
      // Enable BASIC ROM
      dut.io.basicCs.poke(true.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(false.B)
      dut.io.ramCs.poke(false.B)
      
      // Read from $A000 (offset 0)
      dut.io.cpuAddr.poke(0xA000.U)
      dut.io.cpuDataOut.expect(0x00.U)
      
      // Read from $A042 (offset $42)
      dut.io.cpuAddr.poke(0xA042.U)
      dut.io.cpuDataOut.expect(0x42.U)
    }
  }

  it should "read from KERNAL ROM when kernalCs active" in {
    val kernalRom = Seq.tabulate(8192)(i => ((i + 0x10) & 0xFF))
    test(new MemoryController(kernalRomContents = kernalRom)) { dut =>
      dut.io.vicAddr.poke(0.U)
      dut.io.vicBank.poke(0.U)
      dut.io.vicColorAddr.poke(0.U)
      dut.io.cpuWe.poke(false.B)
      
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(true.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(false.B)
      dut.io.ramCs.poke(false.B)
      
      // Read from $E000 (offset 0)
      dut.io.cpuAddr.poke(0xE000.U)
      dut.io.cpuDataOut.expect(0x10.U)
    }
  }

  it should "read reset vector from KERNAL ROM at $FFFC-$FFFD" in {
    // Create ROM with reset vector pointing to $E000
    val rom = Array.fill(8192)(0xEA)  // Fill with NOP
    rom(0x1FFC) = 0x00  // Low byte at $FFFC
    rom(0x1FFD) = 0xE0  // High byte at $FFFD
    val kernalRom = rom.toSeq
    
    test(new MemoryController(kernalRomContents = kernalRom)) { dut =>
      dut.io.vicAddr.poke(0.U)
      dut.io.vicBank.poke(0.U)
      dut.io.vicColorAddr.poke(0.U)
      dut.io.cpuWe.poke(false.B)
      
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(true.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(false.B)
      dut.io.ramCs.poke(false.B)
      
      // Read low byte from $FFFC (offset $1FFC)
      dut.io.cpuAddr.poke(0xFFFC.U)
      dut.io.cpuDataOut.expect(0x00.U)
      
      // Read high byte from $FFFD (offset $1FFD)
      dut.io.cpuAddr.poke(0xFFFD.U)
      dut.io.cpuDataOut.expect(0xE0.U)
    }
  }

  it should "read from Character ROM when charCs active" in {
    val charRom = Seq.tabulate(4096)(i => ((i + 0x20) & 0xFF))
    test(new MemoryController(charRomContents = charRom)) { dut =>
      dut.io.vicAddr.poke(0.U)
      dut.io.vicBank.poke(0.U)
      dut.io.vicColorAddr.poke(0.U)
      dut.io.cpuWe.poke(false.B)
      
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(true.B)
      dut.io.colorCs.poke(false.B)
      dut.io.ramCs.poke(false.B)
      
      // Read from $D000 (offset 0)
      dut.io.cpuAddr.poke(0xD000.U)
      dut.io.cpuDataOut.expect(0x20.U)
    }
  }
}

class MemoryControllerColorRamTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "MemoryController Color RAM"

  it should "write and read Color RAM" in {
    test(new MemoryController()) { dut =>
      dut.io.vicAddr.poke(0.U)
      dut.io.vicBank.poke(0.U)
      dut.io.vicColorAddr.poke(0.U)
      
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(true.B)
      dut.io.ramCs.poke(false.B)
      
      // Write to Color RAM at $D800
      dut.io.cpuAddr.poke(0xD800.U)
      dut.io.cpuDataIn.poke(0x0A.U)
      dut.io.cpuWe.poke(true.B)
      dut.clock.step(1)
      
      // Read back (upper nibble = $F)
      dut.io.cpuWe.poke(false.B)
      dut.clock.step(1)
      dut.io.cpuDataOut.expect(0xFA.U)
    }
  }

  it should "only store lower nibble in Color RAM" in {
    test(new MemoryController()) { dut =>
      dut.io.vicAddr.poke(0.U)
      dut.io.vicBank.poke(0.U)
      dut.io.vicColorAddr.poke(0.U)
      
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(true.B)
      dut.io.ramCs.poke(false.B)
      
      // Write $5A to Color RAM (upper nibble $5, lower nibble $A)
      dut.io.cpuAddr.poke(0xD810.U)
      dut.io.cpuDataIn.poke(0x5A.U)
      dut.io.cpuWe.poke(true.B)
      dut.clock.step(1)
      
      // Read back - should be $FA (upper nibble forced to $F, lower preserved as $A)
      // This proves upper nibble was discarded
      dut.io.cpuWe.poke(false.B)
      dut.clock.step(1)
      dut.io.cpuDataOut.expect(0xFA.U)
    }
  }
}

class MemoryControllerVicTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "MemoryController VIC access"

  it should "read RAM via VIC port" in {
    test(new MemoryController()) { dut =>
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(false.B)
      dut.io.ramCs.poke(true.B)
      dut.io.vicColorAddr.poke(0.U)
      
      // Write to RAM at $0400 (screen RAM default)
      dut.io.cpuAddr.poke(0x0400.U)
      dut.io.cpuDataIn.poke(0x41.U)  // 'A'
      dut.io.cpuWe.poke(true.B)
      dut.clock.step(1)
      dut.io.cpuWe.poke(false.B)
      
      // Read via VIC port (bank 0, addr $0400)
      dut.io.vicBank.poke(0.U)
      dut.io.vicAddr.poke(0x0400.U)
      dut.clock.step(1)
      dut.io.vicData.expect(0x41.U)
    }
  }

  it should "read Character ROM via VIC in bank 0" in {
    val charRom = Seq.tabulate(4096)(i => ((i + 0x80) & 0xFF))
    test(new MemoryController(charRomContents = charRom)) { dut =>
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(false.B)
      dut.io.ramCs.poke(false.B)
      dut.io.cpuWe.poke(false.B)
      dut.io.vicColorAddr.poke(0.U)
      
      // VIC reads from $1000 in bank 0 -> Character ROM
      dut.io.vicBank.poke(0.U)
      dut.io.vicAddr.poke(0x1000.U)
      dut.io.vicData.expect(0x80.U)  // charRom[0] = 0x80
    }
  }

  it should "read RAM via VIC in bank 1 (no char ROM)" in {
    test(new MemoryController()) { dut =>
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(false.B)
      dut.io.ramCs.poke(true.B)
      dut.io.vicColorAddr.poke(0.U)
      
      // Write to $5000 (bank 1, offset $1000)
      dut.io.cpuAddr.poke(0x5000.U)
      dut.io.cpuDataIn.poke(0x55.U)
      dut.io.cpuWe.poke(true.B)
      dut.clock.step(1)
      dut.io.cpuWe.poke(false.B)
      
      // VIC reads from $1000 in bank 1 -> RAM (no char ROM)
      dut.io.vicBank.poke(1.U)
      dut.io.vicAddr.poke(0x1000.U)
      dut.clock.step(1)
      dut.io.vicData.expect(0x55.U)
    }
  }

  it should "read VIC Color RAM" in {
    test(new MemoryController()) { dut =>
      dut.io.basicCs.poke(false.B)
      dut.io.kernalCs.poke(false.B)
      dut.io.charCs.poke(false.B)
      dut.io.colorCs.poke(true.B)
      dut.io.ramCs.poke(false.B)
      dut.io.vicAddr.poke(0.U)
      dut.io.vicBank.poke(0.U)
      
      // Write to Color RAM via CPU
      dut.io.cpuAddr.poke(0xD800.U)
      dut.io.cpuDataIn.poke(0x07.U)  // Yellow
      dut.io.cpuWe.poke(true.B)
      dut.clock.step(1)
      dut.io.cpuWe.poke(false.B)
      
      // Read via VIC Color port
      dut.io.vicColorAddr.poke(0.U)
      dut.clock.step(1)
      dut.io.vicColorData.expect(0x7.U)
    }
  }
}
