# WARP.md

This file provides guidance to WARP (warp.dev) when working with code in this repository.

## Build Commands

```bash
# Compile the project
sbt compile

# Run all tests
sbt test

# Run all SingleStepTests (129 parallel test classes)
sbt -DtestCount=1000 "testOnly cpu6502.Test_*"

# Run a specific opcode test
sbt -DtestCount=1000 "testOnly cpu6502.Test_ADC_imm"

# Run tests for an addressing mode group
sbt -DtestCount=100 "testOnly cpu6502.Test_*_zp"   # zero page
sbt -DtestCount=100 "testOnly cpu6502.Test_*_abs"  # absolute
sbt -DtestCount=100 "testOnly cpu6502.Test_*_absx" # absolute,X

# Generate Verilog output
sbt "runMain cpu6502.CPU6502Main"

# Clean build artifacts
sbt clean
```

## Architecture

Chisel 6 HDL implementation of MOS 6502, NES 2A03 compatible (no BCD mode).

### Module Hierarchy

```
CPU6502Testable (testable wrapper)
├── InstructionDecoder - decodes 8-bit opcodes into control signals
└── ALU - arithmetic/logic operations (no BCD)
```

### Key Files

| File | Description |
|------|-------------|
| `CPU6502Testable.scala` | Testable CPU with state injection via `io.test.*` |
| `InstructionDecoder.scala` | Opcode → control signals (129 opcodes) |
| `ALU.scala` | All ALU operations (ADC, SBC, AND, ORA, EOR, shifts, CMP, BIT, INC, DEC) |
| `SingleStepTest.scala` | Test harness with 129 parallel test classes |

### CPU State Machine

```
sFetch → sDecode → [sReadAddrHi] → [sMemRead] → sExecute → sFetch
                                       ↓
                                 sRMWWrite → sFetch  (for read-modify-write)
```

### Implemented Addressing Modes
- ✅ Implied, Accumulator
- ✅ Immediate
- ✅ Zero Page, Zero Page X, Zero Page Y
- ✅ Absolute, Absolute X, Absolute Y
- ✅ Relative (branches)
- ❌ Indirect (JMP indirect)
- ❌ Indexed Indirect (zp,X)
- ❌ Indirect Indexed (zp),Y

### Implemented Instruction Types
- ✅ `itLoad` - LDA, LDX, LDY (all addressing modes)
- ✅ `itStore` - STA, STX, STY (all addressing modes)
- ✅ `itALU` - ADC, SBC, AND, ORA, EOR, CMP, CPX, CPY, BIT, ASL/LSR/ROL/ROR A
- ✅ `itBranch` - BPL, BMI, BVC, BVS, BCC, BCS, BNE, BEQ
- ✅ `itJump` - JMP absolute
- ✅ `itStack` - PHA, PLA, PHP, PLP
- ✅ `itStatus` - CLC, SEC, CLI, SEI, CLV, CLD, SED
- ✅ `itRegTransfer` - TAX, TXA, TAY, TYA, TSX, TXS
- ✅ `itIncDec` - INX, INY, DEX, DEY
- ✅ `itRMW` - INC/DEC memory, ASL/LSR/ROL/ROR memory (zp, zp,X, abs, abs,X)
- ❌ JSR, RTS, BRK, RTI

## SingleStepTests Integration

### Test Structure

Each opcode has its own test class for parallel execution:
```scala
class Test_ADC_imm extends SingleStepTestBase { ... }
class Test_LDA_zp extends SingleStepTestBase { ... }
```

### Configuration

| Property | Default | Description |
|----------|---------|-------------|
| `testCount` | 50 | Tests per opcode |
| `progressInterval` | 100 | Print progress every N tests |

### Running Tests

```bash
# Quick validation (10 tests each)
sbt -DtestCount=10 "testOnly cpu6502.Test_*"

# Full validation (1000 tests each) - ~2 minutes
sbt -DtestCount=1000 "testOnly cpu6502.Test_*"

# Overnight full test (all 10000 tests per opcode)
sbt -DtestCount=10000 "testOnly cpu6502.Test_*"
```

### Test File Location
`src/test/resources/singlestep/*.json` — 129 opcode test files

### Downloading New Test Files
```bash
cd src/test/resources/singlestep
curl -sO "https://raw.githubusercontent.com/SingleStepTests/65x02/main/nes6502/v1/XX.json"
```

## Current Status (January 2026)

**129 of 151 opcodes validated (85%)**

### Validated Opcodes by Category

| Category | Opcodes | Count |
|----------|---------|-------|
| Status Flags | CLC, SEC, CLI, SEI, CLV, CLD, SED | 7 |
| Register Transfer | TAX, TXA, TAY, TYA, TSX, TXS | 6 |
| Inc/Dec Register | INX, INY, DEX, DEY | 4 |
| Stack | PHA, PLA, PHP, PLP | 4 |
| Shift/Rotate A | ASL A, LSR A, ROL A, ROR A | 4 |
| Branches | BPL, BMI, BVC, BVS, BCC, BCS, BNE, BEQ | 8 |
| LDA | imm, zp, zp,X, abs, abs,X, abs,Y | 6 |
| LDX | imm, zp, zp,Y, abs, abs,Y | 5 |
| LDY | imm, zp, zp,X, abs, abs,X | 5 |
| STA | zp, zp,X, abs, abs,X, abs,Y | 5 |
| STX | zp, zp,Y, abs | 3 |
| STY | zp, zp,X, abs | 3 |
| ADC | imm, zp, zp,X, abs, abs,X, abs,Y | 6 |
| SBC | imm, zp, zp,X, abs, abs,X, abs,Y | 6 |
| AND | imm, zp, zp,X, abs, abs,X, abs,Y | 6 |
| ORA | imm, zp, zp,X, abs, abs,X, abs,Y | 6 |
| EOR | imm, zp, zp,X, abs, abs,X, abs,Y | 6 |
| CMP | imm, zp, zp,X, abs, abs,X, abs,Y | 6 |
| CPX | imm, zp, abs | 3 |
| CPY | imm, zp, abs | 3 |
| BIT | zp, abs | 2 |
| JMP | abs | 1 |
| NOP | | 1 |
| INC memory | zp, zp,X, abs, abs,X | 4 |
| DEC memory | zp, zp,X, abs, abs,X | 4 |
| ASL memory | zp, zp,X, abs, abs,X | 4 |
| LSR memory | zp, zp,X, abs, abs,X | 4 |
| ROL memory | zp, zp,X, abs, abs,X | 4 |
| ROR memory | zp, zp,X, abs, abs,X | 4 |

### Remaining Work (~22 opcodes)

1. **Indirect Addressing** (~16 opcodes)
   - (zp,X) indexed indirect: ADC, SBC, AND, ORA, EOR, CMP, LDA, STA
   - (zp),Y indirect indexed: same 8 instructions
   - Requires multi-byte address calculation

3. **Subroutines/Interrupts** (4 opcodes)
   - JSR, RTS, BRK, RTI
   - Requires stack push/pull of PC and status

4. **JMP Indirect** (1 opcode)
   - 0x6C - requires reading address from memory

## Development Workflow

When adding new opcodes:

1. **Download test file**: `curl -sO ".../{opcode}.json"`
2. **Add decoder entry** in `InstructionDecoder.scala`
3. **Add/update CPU execution logic** in `CPU6502Testable.scala`
4. **Add test class** in `SingleStepTest.scala`
5. **Initial test**: `sbt -DtestCount=10 "testOnly cpu6502.Test_NewOpcode"`
6. **Fix issues** until tests pass
7. **Full test**: `sbt -DtestCount=1000 "testOnly cpu6502.Test_NewOpcode"`
8. **Regression test**: `sbt -DtestCount=100 "testOnly cpu6502.Test_*"`
9. **Commit** with co-author line

## Notes

- BCD mode intentionally not implemented (NES 2A03 compatibility)
- Stack is at $0100-$01FF, stack pointer is 8-bit offset
- Memory is external (CPU exposes bus interface)
- Tests run in parallel via separate test classes per opcode
