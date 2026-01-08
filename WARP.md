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

### CPU6502Testable (`CPU6502Testable.scala`)
Testable wrapper with direct state injection for single-instruction testing:
- `io.test.enable` — load test state when high
- `io.test.{pc,a,x,y,s,p}` — initial register values
- Note: BCD mode is not implemented (NES 2A03 compatible)

## External Test Suite

The project uses [SingleStepTests/65x02](https://github.com/SingleStepTests/65x02) for validation — JSON-encoded single-instruction tests with full CPU and memory state.

### Test Files Location
`src/test/resources/singlestep/*.json` — one file per opcode (e.g., `a9.json` for LDA immediate)

### Running SingleStepTests
```bash
# Run SingleStepTests with default count (50 per opcode)
sbt "testOnly cpu6502.SingleStepTest"

# Run with custom test count via system property
sbt -DtestCount=100 "testOnly cpu6502.SingleStepTest"

# Or via environment variable
TEST_COUNT=200 sbt "testOnly cpu6502.SingleStepTest"

# Download additional opcode tests
curl -s "https://raw.githubusercontent.com/SingleStepTests/65x02/main/nes6502/v1/XX.json" \
  -o src/test/resources/singlestep/XX.json
```

### Currently Tested Opcodes
- `0xEA` NOP, `0xA9` LDA imm, `0x69` ADC imm, `0xE9` SBC imm
- `0x29` AND imm, `0x09` ORA imm, `0x49` EOR imm, `0xC9` CMP imm
- `0xA2` LDX imm, `0xA0` LDY imm, `0x4C` JMP abs

### Development Status
The CPU structure is complete but instruction execution is partial. Key areas needing work:
- Full instruction execution in state machine
- All addressing modes in execution logic
- Interrupt handling (IRQ/NMI)
- Cycle-accurate timing
- Additional opcode coverage in SingleStepTests
