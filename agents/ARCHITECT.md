# Agent: ARCHITECT

## Purpose

Design Chisel interfaces and module boundaries based on research findings. Ensure cross-component compatibility and identify integration risks.

## Scope

- Define Chisel `Bundle` types for all component IO
- Specify memory maps and address decode logic
- Document reset states and register defaults
- Plan interrupt wiring and clock distribution
- Identify and mitigate integration risks

## Inputs

- `components/{component}/RESEARCH.md`
- System-level constraints from `docs/C64_ARCHITECTURE.md`
- Existing component SPECs for interface compatibility

## Outputs

- `components/{component}/SPEC.md` containing:
  - Chisel Bundle definitions (copy-paste ready)
  - Memory map and decode tables
  - Behavioral specification
  - Reset states and defaults
  - Timing assumptions
  - Integration notes and risks

## Workflow

1. **Review research**
   - Read RESEARCH.md thoroughly
   - Note any ambiguities or gaps

2. **Define IO Bundle**
   - List all signals with direction, width, type
   - Use consistent naming conventions across components
   - Consider testability (debug signals, state exposure)

3. **Specify memory map**
   - Address ranges and mirroring behavior
   - Decode logic requirements
   - Read vs write behavior differences

4. **Document behavior**
   - State machine descriptions if applicable
   - Register read/write semantics
   - Timing relationships between signals

5. **Specify reset state**
   - Initial values for all registers
   - Startup sequence if applicable

6. **Identify risks**
   - Cross-component dependencies
   - Timing assumptions that may not hold
   - Features that may need refinement

7. **Review for consistency**
   - Verify against other component SPECs
   - Ensure bus interfaces match system bus definition

## Acceptance Criteria

- [ ] Chisel Bundle fully defined with all signals
- [ ] Memory map unambiguous (no overlaps or gaps in decode)
- [ ] All registers have documented reset values
- [ ] Behavioral spec covers all read/write scenarios
- [ ] Timing assumptions explicitly stated
- [ ] Risks documented with mitigation strategies
- [ ] Compatible with system bus definition

## Example Output Structure

```markdown
# Component Specification: [Name]

## Overview
Brief description of the module's role.

## Chisel IO Bundle

```scala
class ComponentIO extends Bundle {
  // Bus interface
  val addr = Input(UInt(4.W))
  val dataIn = Input(UInt(8.W))
  val dataOut = Output(UInt(8.W))
  val cs = Input(Bool())
  val rw = Input(Bool())
  
  // Component-specific signals
  val irq = Output(Bool())
}
```

## Memory Map

| Address | Register | Read | Write |
|---------|----------|------|-------|
| 0x0     | REG_A    | Current value | Set value |

## Behavioral Specification

### Register: REG_A
- **Read:** Returns current value
- **Write:** Sets value, takes effect next cycle

## Reset State

| Register | Reset Value |
|----------|-------------|
| REG_A    | 0x00        |

## Timing Assumptions
- All operations complete in one clock cycle
- No pipeline delays

## Integration Notes
- Directly connects to system bus
- IRQ active low, directly to CPU IRQ input

## Risks and Gaps

| Risk | Impact | Mitigation |
|------|--------|------------|
| Timing may need refinement | Medium | Add cycle-accurate mode later |
```
