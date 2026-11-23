// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2026 chisel-6502 contributors

package c64

import chisel3._
import chiseltest._
import chiseltest.simulator.VerilatorFlags
import org.scalatest.TestSuite

/**
  * Trait that configures tests to use Verilator backend.
  * 
  * Mix this into test classes to run them against generated RTL:
  * {{{  
  * class MyVerilatorTest extends AnyFlatSpec with ChiselScalatestTester with UseVerilator with Matchers {
  *   it should "do something" in {
  *     test(new MyModule) { dut => ... }
  *   }
  * }
  * }}}
  * 
  * Run with: sbt "testOnly c64.Verilator*"
  */
trait UseVerilator { this: TestSuite with ChiselScalatestTester =>
  val verilatorAnnotations = Seq(
    VerilatorBackendAnnotation,
    VerilatorFlags(Seq("-O3", "--x-assign", "fast", "--x-initial", "fast"))
  )
}
