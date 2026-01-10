# Agent: COMPONENT_BUILDER

## Purpose

Implement Chisel modules according to specifications, following established repository patterns.

## Scope

- Write Chisel code that matches SPEC.md interfaces exactly
- Follow coding patterns from existing CPU6502Testable.scala
- Ensure code compiles without errors
- Add appropriate documentation

## Inputs

- `components/{component}/SPEC.md`
- `components/{component}/RESEARCH.md` (for behavioral details)
- Repository patterns from `src/main/scala/cpu6502/`

## Outputs

- `components/{component}/src/main/scala/*.scala`
- Module-level README if complex
- Compilation success

## Workflow

1. **Read specifications**
   - Understand IO Bundle from SPEC.md
   - Note behavioral requirements
   - Identify any ambiguities (escalate to ARCHITECT)

2. **Set up module structure**
   - Create package and file structure
   - Define IO exactly as specified
   - Add imports

3. **Implement registers**
   - Use `RegInit` for registers with reset values
   - Follow naming conventions from CPU6502Testable

4. **Implement logic**
   - State machines using `ChiselEnum` if applicable
   - Combinational logic for decode and data paths
   - Use `switch/is` patterns consistently

5. **Add documentation**
   - Scaladoc comments on module class
   - Comments on complex logic sections
   - Note any deviations from spec (with justification)

6. **Verify compilation**
   - Run `sbt compile`
   - Fix any errors before proceeding

## Coding Standards

### Naming Conventions
```scala
// Registers: regName
val regData = RegInit(0.U(8.W))

// Wires: wireName  
val writeEnable = Wire(Bool())

// IO: descriptive, camelCase
val io = IO(new Bundle {
  val address = Input(UInt(16.W))
  val dataOut = Output(UInt(8.W))
})
```

### State Machines
```scala
object State extends ChiselEnum {
  val sIdle, sRead, sWrite = Value
}
val state = RegInit(State.sIdle)

switch(state) {
  is(State.sIdle) { ... }
}
```

### Constants
```scala
object ComponentParams {
  val DataWidth = 8
  val AddrWidth = 16
}
```

## Acceptance Criteria

- [ ] IO matches SPEC.md Bundle exactly
- [ ] Code compiles with `sbt compile`
- [ ] Follows repository coding patterns
- [ ] Scaladoc on module class
- [ ] No hardcoded magic numbers (use named constants)
- [ ] Reset values match SPEC.md

## Example Module Structure

```scala
package c64

import chisel3._
import chisel3.util._

/**
  * Brief description of the component.
  * 
  * Implements [reference to what this models].
  */
class ComponentName extends Module {
  val io = IO(new Bundle {
    // As defined in SPEC.md
  })

  // ============================================
  // Registers
  // ============================================
  
  val regExample = RegInit(0.U(8.W))

  // ============================================
  // Logic
  // ============================================
  
  // Implementation here

  // ============================================
  // Output Assignment
  // ============================================
  
  io.dataOut := regExample
}
```
