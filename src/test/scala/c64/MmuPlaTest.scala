// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2026 chisel-6502 contributors

package c64

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers

/**
  * Unit tests for MmuPla - the C64 PLA memory banking decoder.
  * 
  * Tests cover:
  * - Address region detection
  * - Banking truth table
  * - Write-through to RAM
  * - I/O sub-region decoding
  */
class MmuPlaRegionTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "MmuPla region detection"

  it should "select RAM for low memory (standard mode)" in {
    test(new MmuPla) { dut =>
      // Standard C64 mode: LORAM=1, HIRAM=1, CHAREN=1
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(true.B)  // Read
      
      // Test various RAM addresses
      for (addr <- Seq(0x0002, 0x0100, 0x0400, 0x8000, 0x9FFF, 0xC000, 0xCFFF)) {
        dut.io.addr.poke(addr.U)
        dut.io.ramCs.expect(true.B, s"RAM should be selected at $$${addr.toHexString}")
        dut.io.basicCs.expect(false.B)
        dut.io.kernalCs.expect(false.B)
        dut.io.charCs.expect(false.B)
        dut.io.ioCs.expect(false.B)
      }
    }
  }

  it should "select BASIC ROM at $A000-$BFFF (standard mode)" in {
    test(new MmuPla) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(true.B)
      
      for (addr <- Seq(0xA000, 0xA001, 0xB000, 0xBFFE, 0xBFFF)) {
        dut.io.addr.poke(addr.U)
        dut.io.basicCs.expect(true.B, s"BASIC should be selected at $$${addr.toHexString}")
        dut.io.ramCs.expect(false.B)
      }
    }
  }

  it should "select KERNAL ROM at $E000-$FFFF (standard mode)" in {
    test(new MmuPla) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(true.B)
      
      for (addr <- Seq(0xE000, 0xE001, 0xF000, 0xFFFC, 0xFFFD, 0xFFFF)) {
        dut.io.addr.poke(addr.U)
        dut.io.kernalCs.expect(true.B, s"KERNAL should be selected at $$${addr.toHexString}")
        dut.io.ramCs.expect(false.B)
      }
    }
  }

  it should "select I/O at $D000-$DFFF (standard mode with CHAREN=1)" in {
    test(new MmuPla) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(true.B)
      
      dut.io.addr.poke(0xD000.U)
      dut.io.ioCs.expect(true.B)
      dut.io.charCs.expect(false.B)
      dut.io.ramCs.expect(false.B)
    }
  }

  it should "select Char ROM at $D000-$DFFF (with CHAREN=0)" in {
    test(new MmuPla) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(false.B)  // Char ROM visible
      dut.io.rw.poke(true.B)
      
      dut.io.addr.poke(0xD000.U)
      dut.io.charCs.expect(true.B)
      dut.io.ioCs.expect(false.B)
      dut.io.ramCs.expect(false.B)
    }
  }
}

class MmuPlaBankingTruthTableTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "MmuPla banking truth table"

  // Truth table: (loram, hiram, charen) -> (basicVisible, kernalVisible, ioVisible, charVisible)
  val truthTable = Seq(
    // HIRAM=0: All RAM
    ((false, false, false), (false, false, false, false)),
    ((true, false, false), (false, false, false, false)),
    ((false, false, true), (false, false, false, false)),
    ((true, false, true), (false, false, false, false)),
    
    // HIRAM=1, LORAM=0: KERNAL visible, I/O or Char based on CHAREN
    ((false, true, false), (false, true, false, true)),   // Char visible
    ((false, true, true), (false, true, true, false)),    // I/O visible
    
    // HIRAM=1, LORAM=1: BASIC + KERNAL visible, I/O or Char based on CHAREN
    ((true, true, false), (true, true, false, true)),     // Char visible
    ((true, true, true), (true, true, true, false))       // I/O visible (standard mode)
  )

  for (((loram, hiram, charen), (basicExp, kernalExp, ioExp, charExp)) <- truthTable) {
    val desc = s"LORAM=$loram, HIRAM=$hiram, CHAREN=$charen"
    
    it should s"decode correctly for $desc" in {
      test(new MmuPla) { dut =>
        dut.io.loram.poke(loram.B)
        dut.io.hiram.poke(hiram.B)
        dut.io.charen.poke(charen.B)
        dut.io.rw.poke(true.B)
        
        // Test BASIC region
        dut.io.addr.poke(0xA000.U)
        dut.io.basicCs.expect(basicExp.B, s"BASIC at $desc")
        
        // Test KERNAL region
        dut.io.addr.poke(0xE000.U)
        dut.io.kernalCs.expect(kernalExp.B, s"KERNAL at $desc")
        
        // Test I/O region
        dut.io.addr.poke(0xD000.U)
        dut.io.ioCs.expect(ioExp.B, s"I/O at $desc")
        dut.io.charCs.expect(charExp.B, s"Char at $desc")
      }
    }
  }
}

class MmuPlaWriteThroughTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "MmuPla write-through"

  it should "enable RAM write for all regions during writes" in {
    test(new MmuPla) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(false.B)  // Write
      
      // Write to BASIC ROM region should still enable RAM write
      dut.io.addr.poke(0xA000.U)
      dut.io.ramWe.expect(true.B)
      
      // Write to KERNAL ROM region
      dut.io.addr.poke(0xE000.U)
      dut.io.ramWe.expect(true.B)
      
      // Write to I/O region
      dut.io.addr.poke(0xD000.U)
      dut.io.ramWe.expect(true.B)
    }
  }

  it should "not select ROM chip selects during writes" in {
    test(new MmuPla) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(false.B)  // Write
      
      // BASIC region - ROM not selected during write
      dut.io.addr.poke(0xA000.U)
      dut.io.basicCs.expect(false.B)
      
      // KERNAL region
      dut.io.addr.poke(0xE000.U)
      dut.io.kernalCs.expect(false.B)
      
      // Char ROM region (with CHAREN=0)
      dut.io.charen.poke(false.B)
      dut.io.addr.poke(0xD000.U)
      dut.io.charCs.expect(false.B)
    }
  }

  it should "disable RAM write during reads" in {
    test(new MmuPla) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(true.B)  // Read
      
      dut.io.addr.poke(0x1000.U)
      dut.io.ramWe.expect(false.B)
    }
  }
}

class MmuPlaIoSubRegionTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "MmuPla I/O sub-region decoding"

  // I/O sub-regions
  val ioRegions = Seq(
    (0xD000, 0xD3FF, "VIC", (dut: MmuPla) => dut.io.vicCs),
    (0xD400, 0xD7FF, "SID", (dut: MmuPla) => dut.io.sidCs),
    (0xD800, 0xDBFF, "Color RAM", (dut: MmuPla) => dut.io.colorCs),
    (0xDC00, 0xDCFF, "CIA1", (dut: MmuPla) => dut.io.cia1Cs),
    (0xDD00, 0xDDFF, "CIA2", (dut: MmuPla) => dut.io.cia2Cs)
  )

  for ((start, end, name, getCs) <- ioRegions) {
    it should s"select $name at $$${start.toHexString.toUpperCase}-$$${end.toHexString.toUpperCase}" in {
      test(new MmuPla) { dut =>
        // Standard I/O mode
        dut.io.loram.poke(true.B)
        dut.io.hiram.poke(true.B)
        dut.io.charen.poke(true.B)
        dut.io.rw.poke(true.B)
        
        // Test start address
        dut.io.addr.poke(start.U)
        dut.io.ioCs.expect(true.B)
        getCs(dut).expect(true.B, s"$name should be selected at start")
        
        // Test end address
        dut.io.addr.poke(end.U)
        dut.io.ioCs.expect(true.B)
        getCs(dut).expect(true.B, s"$name should be selected at end")
      }
    }
  }

  it should "not select I/O sub-regions when CHAREN=0" in {
    test(new MmuPla) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(false.B)  // Char ROM visible instead of I/O
      dut.io.rw.poke(true.B)
      
      dut.io.addr.poke(0xD000.U)
      dut.io.ioCs.expect(false.B)
      dut.io.vicCs.expect(false.B)
      dut.io.charCs.expect(true.B)
    }
  }

  it should "select only one I/O sub-region at a time" in {
    test(new MmuPla) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(true.B)
      
      // VIC region - only vicCs should be high
      dut.io.addr.poke(0xD000.U)
      dut.io.vicCs.expect(true.B)
      dut.io.sidCs.expect(false.B)
      dut.io.colorCs.expect(false.B)
      dut.io.cia1Cs.expect(false.B)
      dut.io.cia2Cs.expect(false.B)
      
      // CIA1 region - only cia1Cs should be high
      dut.io.addr.poke(0xDC00.U)
      dut.io.vicCs.expect(false.B)
      dut.io.sidCs.expect(false.B)
      dut.io.colorCs.expect(false.B)
      dut.io.cia1Cs.expect(true.B)
      dut.io.cia2Cs.expect(false.B)
    }
  }
}

class MmuPlaEdgeCaseTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "MmuPla edge cases"

  it should "handle address boundaries correctly" in {
    test(new MmuPla) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(true.B)
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(true.B)
      
      // $9FFF is RAM, $A000 is BASIC
      dut.io.addr.poke(0x9FFF.U)
      dut.io.ramCs.expect(true.B)
      dut.io.basicCs.expect(false.B)
      
      dut.io.addr.poke(0xA000.U)
      dut.io.ramCs.expect(false.B)
      dut.io.basicCs.expect(true.B)
      
      // $BFFF is BASIC, $C000 is RAM
      dut.io.addr.poke(0xBFFF.U)
      dut.io.basicCs.expect(true.B)
      
      dut.io.addr.poke(0xC000.U)
      dut.io.ramCs.expect(true.B)
      dut.io.basicCs.expect(false.B)
      
      // $CFFF is RAM, $D000 is I/O
      dut.io.addr.poke(0xCFFF.U)
      dut.io.ramCs.expect(true.B)
      dut.io.ioCs.expect(false.B)
      
      dut.io.addr.poke(0xD000.U)
      dut.io.ramCs.expect(false.B)
      dut.io.ioCs.expect(true.B)
      
      // $DFFF is I/O, $E000 is KERNAL
      dut.io.addr.poke(0xDFFF.U)
      dut.io.ioCs.expect(true.B)
      dut.io.kernalCs.expect(false.B)
      
      dut.io.addr.poke(0xE000.U)
      dut.io.ioCs.expect(false.B)
      dut.io.kernalCs.expect(true.B)
    }
  }

  it should "handle all-RAM mode (HIRAM=0)" in {
    test(new MmuPla) { dut =>
      dut.io.loram.poke(true.B)
      dut.io.hiram.poke(false.B)  // All RAM mode
      dut.io.charen.poke(true.B)
      dut.io.rw.poke(true.B)
      
      // All regions should be RAM
      for (addr <- Seq(0x0100, 0xA000, 0xD000, 0xE000, 0xFFFF)) {
        dut.io.addr.poke(addr.U)
        dut.io.ramCs.expect(true.B, s"RAM should be selected at $$${addr.toHexString} in all-RAM mode")
        dut.io.basicCs.expect(false.B)
        dut.io.kernalCs.expect(false.B)
        dut.io.ioCs.expect(false.B)
        dut.io.charCs.expect(false.B)
      }
    }
  }
}
