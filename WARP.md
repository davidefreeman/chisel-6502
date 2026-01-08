# WARP.md

This file provides guidance to WARP (warp.dev) when working with code in this repository.

## Build Commands

```bash
# Compile the project
sbt compile

# Run all tests
sbt test

# Run a specific test class
sbt "testOnly cpu6502.ALUTest"

# Run a specific test within a class
sbt "testOnly cpu6502.ALUTest -- -z \"perform addition\""

# Generate Verilog output (outputs to generated/ directory)
sbt "runMain cpu6502.CPU6502Main"

# Continuous compilation (watches for changes)
sbt ~compile

# Clean build artifacts
sbt clean
```

## Architecture

This is a Chisel 6 HDL implementation of the MOS 6502 8-bit microprocessor.

### Module Hierarchy

```
CPU6502 (top-level)
├── InstructionDecoder - decodes 8-bit opcodes into control signals
└── ALU - arithmetic/logic operations with BCD support
```

### CPU6502 (`CPU6502.scala`)
Main CPU module implementing:
- **Registers**: A (accumulator), X, Y (index), SP (stack pointer), PC (program counter), P (status flags: NV-BDIZC)
- **State machine**: `sReset → sFetch → sDecode → sExecute` cycle with `sMemRead`/`sMemWrite` states
- **Memory interface**: 16-bit address bus, 8-bit data bus, active-high write enable
- **Interrupts**: IRQ and NMI inputs (not yet fully implemented)
- **Debug bundle**: Exposes internal state for testing/simulation

### ALU (`ALU.scala`)
Supports operations via `ALUOp` enum:
- Arithmetic: `opADC`, `opSBC` (with BCD mode support)
- Logic: `opAND`, `opORA`, `opEOR`
- Shifts/rotates: `opASL`, `opLSR`, `opROL`, `opROR`
- Increment/decrement: `opINC`, `opDEC`
- Compare/test: `opCMP`, `opBIT`, `opPASS`

### InstructionDecoder (`InstructionDecoder.scala`)
Decodes opcodes into:
- `aluOp` - ALU operation to perform
- `addressMode` - one of 13 modes (immediate, zero page, absolute, indexed, indirect, etc.)
- `instrType` - category (ALU, Load, Store, Branch, Jump, Stack, Status, NOP, Illegal)
- Register write enables and cycle counts

### Development Status
The CPU structure is complete but instruction execution is partial. Key areas needing work:
- Full instruction execution in state machine
- All addressing modes in execution logic
- Interrupt handling (IRQ/NMI)
- Cycle-accurate timing
