// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2026 chisel-6502 contributors

package c64

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers

/**
  * Unit tests for VicIIText - the VIC-II text-mode implementation.
  * 
  * Tests cover:
  * - Reset state
  * - Register read/write
  * - Unused bit behavior
  * - Frame buffer scanout
  * - Display enable
  */
class VicIITextResetTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "VicIIText reset"

  it should "initialize CR1 to $1B (DEN=1, RSEL=1, YSCROLL=3)" in {
    test(new VicIIText) { dut =>
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      
      dut.io.addr.poke(0x11.U)  // CR1
      dut.io.dataOut.expect(0x1B.U)
    }
  }

  it should "initialize CR2 to $C8 (bits 7:5 = 111, CSEL=1)" in {
    test(new VicIIText) { dut =>
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      
      dut.io.addr.poke(0x16.U)  // CR2
      // Bits 7:5 forced to 1, stored value is $08
      dut.io.dataOut.expect(0xE8.U)
    }
  }

  it should "initialize MEMPTR to $15 (bit 0 forced to 1)" in {
    test(new VicIIText) { dut =>
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      
      dut.io.addr.poke(0x18.U)  // MEMPTR
      // Reset value $14 | $01 = $15
      dut.io.dataOut.expect(0x15.U)
    }
  }

  it should "initialize BORDER to $FE (light blue with bits 7:4 = 1)" in {
    test(new VicIIText) { dut =>
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      
      dut.io.addr.poke(0x20.U)  // BORDER
      dut.io.dataOut.expect(0xFE.U)
    }
  }

  it should "initialize BG0 to $F6 (blue with bits 7:4 = 1)" in {
    test(new VicIIText) { dut =>
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      
      dut.io.addr.poke(0x21.U)  // BG0
      dut.io.dataOut.expect(0xF6.U)
    }
  }

  it should "initialize displayEn high (DEN=1)" in {
    test(new VicIIText) { dut =>
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

class VicIITextRegisterTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "VicIIText registers"

  it should "write and read back CR1" in {
    test(new VicIIText) { dut =>
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.cs.poke(true.B)
      
      // Write CR1
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x11.U)
      dut.io.dataIn.poke(0x3B.U)
      dut.clock.step(1)
      
      // Read back
      dut.io.rw.poke(true.B)
      dut.io.dataOut.expect(0x3B.U)
    }
  }

  it should "write CR2 and read back with bits 7:5 forced to 1" in {
    test(new VicIIText) { dut =>
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.cs.poke(true.B)
      
      // Write CR2 with all bits
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x16.U)
      dut.io.dataIn.poke(0x1F.U)  // Write $1F
      dut.clock.step(1)
      
      // Read back - should have bits 7:5 = 111
      dut.io.rw.poke(true.B)
      dut.io.dataOut.expect(0xFF.U)  // $1F | $E0 = $FF
    }
  }

  it should "write MEMPTR and read back with bit 0 forced to 1" in {
    test(new VicIIText) { dut =>
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.cs.poke(true.B)
      
      // Write MEMPTR
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x18.U)
      dut.io.dataIn.poke(0x38.U)  // Screen at $0C00, Char at $1800
      dut.clock.step(1)
      
      // Read back - bit 0 forced to 1
      dut.io.rw.poke(true.B)
      dut.io.dataOut.expect(0x39.U)  // $38 | $01
    }
  }

  it should "write BORDER and read back with bits 7:4 forced to 1" in {
    test(new VicIIText) { dut =>
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.cs.poke(true.B)
      
      // Write BORDER
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x20.U)
      dut.io.dataIn.poke(0x01.U)  // White
      dut.clock.step(1)
      
      // Read back
      dut.io.rw.poke(true.B)
      dut.io.dataOut.expect(0xF1.U)  // Bits 7:4 = $F
      
      // Check borderColor output
      dut.io.borderColor.expect(0x1.U)
    }
  }

  it should "return 0 for RASTER register" in {
    test(new VicIIText) { dut =>
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      
      dut.io.addr.poke(0x12.U)  // RASTER
      dut.io.dataOut.expect(0x00.U)
    }
  }

  it should "return 0 for IRR register" in {
    test(new VicIIText) { dut =>
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      
      dut.io.addr.poke(0x19.U)  // IRR
      dut.io.dataOut.expect(0x00.U)
    }
  }
}

class VicIITextDisplayEnableTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "VicIIText display enable"

  it should "clear displayEn when DEN bit is cleared" in {
    test(new VicIIText) { dut =>
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.cs.poke(true.B)
      
      // Initially DEN=1
      dut.io.displayEn.expect(true.B)
      
      // Write CR1 with DEN=0
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x11.U)
      dut.io.dataIn.poke(0x0B.U)  // DEN bit 4 = 0
      dut.clock.step(1)
      
      dut.io.displayEn.expect(false.B)
    }
  }
}

class VicIITextScanoutTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "VicIIText frame scanout"

  // Use small buffer (10 cells) for fast testing
  val testCells = 10

  it should "set frameReady after scanout completes" in {
    test(new VicIIText(numCells = testCells)) { dut =>
      dut.io.cs.poke(false.B)
      dut.io.vicBank.poke(0.U)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      
      // Initially frameReady is false
      dut.io.frameReady.expect(false.B)
      
      // Provide screen and color data
      dut.io.screenData.poke(0x41.U)  // 'A' character
      dut.io.colorData.poke(0x01.U)   // White foreground
      
      // Trigger frame request
      dut.io.frameReq.poke(true.B)
      dut.clock.step(1)
      dut.io.frameReq.poke(false.B)
      
      // Wait for scanout to complete
      dut.clock.step(testCells + 1)
      
      dut.io.frameReady.expect(true.B)
    }
  }

  it should "capture screen data during scanout" in {
    test(new VicIIText(numCells = testCells)) { dut =>
      dut.io.cs.poke(false.B)
      dut.io.vicBank.poke(0.U)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      
      // Provide varying data during scanout
      dut.io.screenData.poke(0x42.U)  // 'B'
      dut.io.colorData.poke(0x02.U)   // Red
      
      // Trigger scanout
      dut.io.frameReq.poke(true.B)
      dut.clock.step(1)
      dut.io.frameReq.poke(false.B)
      
      // Complete scanout
      dut.clock.step(testCells + 1)
      
      // Read cell 0,0
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.cellChar.expect(0x42.U)
      dut.io.cellFg.expect(0x02.U)
      dut.io.cellBg.expect(0x06.U)  // Default BG0 = blue
    }
  }

  it should "invalidate frame on MEMPTR write" in {
    test(new VicIIText(numCells = testCells)) { dut =>
      dut.io.cs.poke(false.B)
      dut.io.vicBank.poke(0.U)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.screenData.poke(0x41.U)
      dut.io.colorData.poke(0x01.U)
      
      // Complete a scanout first
      dut.io.frameReq.poke(true.B)
      dut.clock.step(1)
      dut.io.frameReq.poke(false.B)
      dut.clock.step(testCells + 1)
      dut.io.frameReady.expect(true.B)
      
      // Write to MEMPTR
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x18.U)
      dut.io.dataIn.poke(0x24.U)
      dut.clock.step(1)
      
      // Frame should be invalidated
      dut.io.frameReady.expect(false.B)
    }
  }
}

class VicIITextSpriteStubTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "VicIIText sprite stubs"

  it should "store and return sprite position registers" in {
    test(new VicIIText) { dut =>
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.cs.poke(true.B)
      
      // Write sprite 0 X position
      dut.io.rw.poke(false.B)
      dut.io.addr.poke(0x00.U)
      dut.io.dataIn.poke(0x55.U)
      dut.clock.step(1)
      
      // Read back
      dut.io.rw.poke(true.B)
      dut.io.dataOut.expect(0x55.U)
    }
  }

  it should "return collision registers as 0" in {
    test(new VicIIText) { dut =>
      dut.io.vicBank.poke(0.U)
      dut.io.screenData.poke(0.U)
      dut.io.colorData.poke(0.U)
      dut.io.frameReq.poke(false.B)
      dut.io.cellRow.poke(0.U)
      dut.io.cellCol.poke(0.U)
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(true.B)
      
      // Sprite-sprite collision
      dut.io.addr.poke(0x1E.U)
      dut.io.dataOut.expect(0x00.U)
      
      // Sprite-background collision
      dut.io.addr.poke(0x1F.U)
      dut.io.dataOut.expect(0x00.U)
    }
  }
}
