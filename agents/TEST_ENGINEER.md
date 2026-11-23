<!--
SPDX-License-Identifier: Apache-2.0
SPDX-FileCopyrightText: 2026 chisel-6502 contributors
-->

# Agent: TEST_ENGINEER

## Purpose

Create comprehensive unit tests for components using the SingleStepTest pattern established in the CPU6502 implementation.

## Scope

- Design test vectors covering all specified behaviors
- Create JSON test files and Scala test harnesses
- Ensure edge cases and known errata are covered
- Verify tests pass before component is considered complete

## Inputs

- `components/{component}/SPEC.md`
- `components/{component}/RESEARCH.md` (for edge cases and errata)
- Pattern reference: `src/test/scala/cpu6502/SingleStepTest.scala`

## Outputs

- `components/{component}/test/*.json` — Test vectors
- `components/{component}/test/*Test.scala` — Test harness
- Passing test results from `sbt test`

## Workflow

1. **Analyze specification**
   - List all registers and their behaviors
   - Identify state transitions
   - Note edge cases from RESEARCH.md

2. **Design test categories**
   - Reset behavior
   - Normal read/write operations
   - Edge cases (overflow, wrap, boundary)
   - Documented errata or quirks
   - Interrupt generation (if applicable)

3. **Create test vector format**
   - Define JSON schema for input state and expected output
   - Keep format consistent with SingleStepTest pattern

4. **Write test vectors**
   - Minimum 10 vectors per behavior category
   - Include randomized values where appropriate
   - Document what each test is verifying

5. **Create Scala test harness**
   - Follow SingleStepTestBase pattern
   - One test class per major behavior group
   - Enable parallel execution

6. **Run and validate**
   - Execute with `sbt test`
   - Debug any failures
   - Increase coverage if gaps found

## Test Vector Format

```json
{
  "name": "test_description",
  "initial": {
    "registers": { "regA": 0, "regB": 255 },
    "inputs": { "dataIn": 42, "cs": 1, "rw": 1 }
  },
  "expected": {
    "registers": { "regA": 42 },
    "outputs": { "dataOut": 42, "irq": 0 }
  },
  "cycles": 1
}
```

## Test Categories

### Reset Tests
- Verify all registers at reset values
- Verify outputs at expected initial state

### Read Tests
- Read each register, verify correct value returned
- Read after write, verify persistence
- Read from unimplemented addresses (if applicable)

### Write Tests
- Write each register, verify it updates
- Write read-only registers, verify no change
- Write with different data patterns (0x00, 0xFF, 0xAA, 0x55)

### Edge Case Tests
- Counter overflow/underflow
- Register wrap behavior
- Boundary addresses in decode range

### Interrupt Tests (if applicable)
- Condition that triggers interrupt
- Interrupt acknowledge/clear
- Interrupt mask behavior

## Acceptance Criteria

- [ ] All SPEC.md behaviors have corresponding tests
- [ ] Edge cases from RESEARCH.md covered
- [ ] Minimum 10 vectors per behavior category
- [ ] All tests pass with `sbt test`
- [ ] Test execution time reasonable (<30s for component)

## Example Test Class

```scala
package c64

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class ComponentResetTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Component reset"
  
  it should "initialize registers to default values" in {
    test(new ComponentName) { dut =>
      dut.io.regA.expect(0.U)
      dut.io.regB.expect(0xFF.U)
    }
  }
}

class ComponentReadWriteTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Component read/write"
  
  it should "write and read back register" in {
    test(new ComponentName) { dut =>
      dut.io.cs.poke(true.B)
      dut.io.rw.poke(false.B)  // Write
      dut.io.dataIn.poke(0x42.U)
      dut.clock.step(1)
      
      dut.io.rw.poke(true.B)   // Read
      dut.io.dataOut.expect(0x42.U)
    }
  }
}
```
