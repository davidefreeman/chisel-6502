<!--
SPDX-License-Identifier: Apache-2.0
SPDX-FileCopyrightText: 2026 chisel-6502 contributors
-->

# Chisel 6502 Technical Overview

A guide for engineers who want to understand this 6502 CPU implementation without deep CPU design experience.

## What Is This Project?

This is a hardware description of the MOS 6502 microprocessor, written in Chisel (a Scala-based hardware description language). The 6502 was the CPU in the Apple II, Commodore 64, Atari 2600, and Nintendo Entertainment System (NES).

**Key Point**: This is not a software emulator. It describes actual digital logic that can be synthesized into an FPGA or ASIC. The Chisel code compiles to Verilog, which synthesis tools convert to gate-level hardware.

### Why the 6502?

- **Simplicity**: Only ~3,500 transistors in the original (vs. billions in modern CPUs)
- **Well-documented**: Extensively studied for 45+ years
- **Complete test suites**: SingleStepTests provides 10,000+ test vectors per instruction
- **Still relevant**: Retro computing, NES homebrew, educational hardware projects

---

## High-Level Architecture

```
┌─────────────────────────────────────────────────────────┐
│                    CPU6502Testable                       │
│                                                         │
│  ┌──────────────┐    ┌────────────────────┐            │
│  │   Register   │    │   State Machine    │            │
│  │     File     │    │                    │            │
│  │  A, X, Y     │    │  Fetch → Decode    │            │
│  │  SP, PC      │◄──►│  → Execute →...    │            │
│  │  Flags       │    │                    │            │
│  └──────────────┘    └────────────────────┘            │
│         │                     │                        │
│         ▼                     ▼                        │
│  ┌──────────────┐    ┌────────────────────┐            │
│  │     ALU      │    │ Instruction        │            │
│  │              │◄───│ Decoder            │            │
│  │ ADD, SUB,    │    │                    │            │
│  │ AND, OR,     │    │ Opcode → Control   │            │
│  │ Shifts...    │    │ Signals            │            │
│  └──────────────┘    └────────────────────┘            │
│                                                         │
└─────────────────────────────────────────────────────────┘
              │                    ▲
              ▼                    │
        ┌──────────┐         ┌──────────┐
        │ Address  │         │  Data    │
        │   Bus    │         │   Bus    │
        │ (16-bit) │         │  (8-bit) │
        └──────────┘         └──────────┘
              │                    │
              └────────┬───────────┘
                       ▼
                  ┌─────────┐
                  │ Memory  │
                  │  64KB   │
                  └─────────┘
```

### The Three Main Components

| Component | What It Does | Analogy |
|-----------|--------------|---------|
| **State Machine** | Controls execution flow, one state per clock cycle | Traffic controller |
| **Instruction Decoder** | Translates opcode byte to control signals | Dictionary lookup |
| **ALU** | Performs arithmetic and logic operations | Calculator |

---

## How Instructions Execute

Every instruction follows a fetch-decode-execute pattern:

### Example: `LDA #$42` (Load Accumulator with value 0x42)

```
Cycle 1 (Fetch):    Read opcode 0xA9 from memory[PC], PC++
Cycle 2 (Decode):   Decoder says "this is LDA immediate", read operand 0x42, PC++
Cycle 3 (Execute):  Load 0x42 into A register, set Zero/Negative flags
```

### Example: `LDA $1234` (Load Accumulator from address $1234)

```
Cycle 1 (Fetch):    Read opcode 0xAD from memory[PC], PC++
Cycle 2 (Decode):   Read address low byte 0x34, PC++
Cycle 3:            Read address high byte 0x12, PC++
Cycle 4 (MemRead):  Read value from memory[$1234]
Cycle 5 (Execute):  Load value into A register, set flags
```

**Key Insight**: More complex addressing modes require more cycles to calculate the effective address.

---

## Microarchitectural Parameters

| Parameter | Value | Notes |
|-----------|-------|-------|
| Data width | 8 bits | All registers, memory bus |
| Address width | 16 bits | 64KB addressable memory |
| Register count | 6 | A, X, Y, SP, PC, Status |
| Clock | Single-phase | One operation per cycle |
| Pipeline | None | Strictly sequential execution |
| Cache | None | Direct memory access every cycle |
| Branch prediction | None | Conditional branches resolved in execute |

### Memory Map (Typical 6502 System)

```
$0000-$00FF   Zero Page (fast access, 256 bytes)
$0100-$01FF   Stack (grows downward)
$0200-$FFFF   General purpose / ROM / I/O
$FFFA-$FFFB   NMI vector
$FFFC-$FFFD   Reset vector
$FFFE-$FFFF   IRQ/BRK vector
```

---

## Instruction Groups

The 6502 has 56 unique instructions with 150 opcode variants (same instruction with different addressing modes).

### Simple Instructions (1-2 cycles)

**Flag Manipulation**: CLC, SEC, CLI, SEI, CLV, CLD, SED
- Single byte, instant execution
- Example: `SEC` sets the Carry flag

**Register Transfers**: TAX, TXA, TAY, TYA, TSX, TXS
- Copy value between registers
- Example: `TAX` copies A to X

**Register Inc/Dec**: INX, INY, DEX, DEY
- Increment or decrement X/Y registers
- Example: `INX` adds 1 to X

### Moderate Complexity (2-4 cycles)

**Loads**: LDA, LDX, LDY
- Load register from memory or immediate value
- 6 addressing modes each for LDA/LDX/LDY

**Stores**: STA, STX, STY
- Store register to memory
- Example: `STA $1234` stores A to address $1234

**Arithmetic/Logic**: ADC, SBC, AND, ORA, EOR, CMP, CPX, CPY, BIT
- ALU operations between accumulator and operand
- ADC/SBC use carry flag for multi-byte arithmetic

### Complex Instructions (4-7 cycles)

**Read-Modify-Write (RMW)**: INC, DEC, ASL, LSR, ROL, ROR (on memory)
- Read memory, modify in ALU, write back
- Requires 3 memory accesses (read, dummy write, final write)
- Example: `INC $42` increments the byte at zero page address $42

**Indirect Addressing**: `(zp,X)` and `(zp),Y` modes
- Two-step address calculation through a pointer
- Example: `LDA ($20),Y` reads pointer from $20-$21, adds Y, reads from result

**Subroutines**: JSR, RTS
- JSR pushes return address, jumps to subroutine
- RTS pops address and returns
- 6 cycles each (multiple stack operations)

### Most Complex (6-7 cycles)

**Interrupts**: BRK, RTI
- BRK: Push PC and status, jump to interrupt handler
- RTI: Restore status and PC from stack
- 7 cycles for BRK (push 3 bytes, read vector)

---

## Exceptional/Unexpected Complexity

### 1. The JMP Indirect Bug

When `JMP ($XXFF)` is executed (pointer at a page boundary), the 6502 reads the high byte from $XX00 instead of $(XX+1)00:

```
JMP ($10FF)
  Low byte from $10FF  ✓
  High byte from $1000  ✗ (should be $1100)
```

This is a hardware bug in the original 6502 that we faithfully reproduce for compatibility.

### 2. BIT Instruction's Unusual Flag Behavior

Most instructions set N and V flags from the result. BIT sets them from the *memory operand*:

```
BIT $42
  Z = (A AND memory[$42]) == 0
  N = memory[$42] bit 7    ← Unusual!
  V = memory[$42] bit 6    ← Unusual!
```

This allows testing specific bits in memory without destroying the accumulator.

### 3. JSR/RTS Address Off-By-One

JSR pushes PC-1 (the address of the last byte of the JSR instruction), not the return address. RTS adds 1 after popping. This asymmetry is intentional but confusing:

```
$1000: JSR $2000    ; Pushes $1002 (not $1003)
$1003: ...         ; RTS returns here ($1002 + 1)
```

### 4. Stack Wraps Within Page $01

The stack pointer is 8 bits. Pushing/pulling wraps within $0100-$01FF:

```
SP = $00, PUSH → write to $0100, SP = $FF
SP = $FF, PULL → read from $0100, SP = $00
```

### 5. Zero Page Indexing Wraps

`LDA $FF,X` with X=2 reads from $0001, not $0101. Zero page addressing always stays in page zero.

### 6. Indirect Indexed vs. Indexed Indirect

These look similar but behave very differently:

| Mode | Syntax | Address Calculation |
|------|--------|---------------------|
| Indexed Indirect | `($20,X)` | pointer = mem[$20+X]; addr = mem[pointer] |
| Indirect Indexed | `($20),Y` | pointer = mem[$20]; addr = pointer + Y |

The first adds X in zero page (before reading pointer). The second adds Y to the full address (after reading pointer).

---

## Design Decisions Summary

### Why No BCD?

The NES 2A03 (our target) disabled BCD mode. The D flag exists but ADC/SBC always use binary arithmetic. This simplifies the ALU significantly.

### Why Separate Test Classes?

Each opcode has its own test class (150 total) so sbt can run them in parallel across CPU cores. A single test class with 150 tests would run sequentially.

### Why Explicit State Machine?

We could use a microcode ROM or counter-based sequencing. Explicit states are:
- Self-documenting (state names describe what's happening)
- Easier to debug (you can observe the current state)
- More flexible (different instructions can have different flows)

### Why Individual Flag Registers?

Most instructions only update a subset of flags. Storing N, V, B, D, I, Z, C as separate 1-bit registers avoids read-modify-write cycles on a single status register.

---

## Testing Approach

We validate against [SingleStepTests](https://github.com/SingleStepTests/65x02), which provides:

- 10,000 test vectors per opcode
- Each test specifies: initial state → expected final state
- Tests cover edge cases (flag combinations, address wrapping, etc.)

### Running Tests

```bash
# Quick validation (10 tests per opcode)
sbt -DtestCount=10 "testOnly cpu6502.Test_*"

# Standard validation (100 tests per opcode)
sbt -DtestCount=100 "testOnly cpu6502.Test_*"

# Full validation (1000 tests per opcode)
sbt -DtestCount=1000 "testOnly cpu6502.Test_*"

# Test specific instruction
sbt -DtestCount=1000 "testOnly cpu6502.Test_LDA_abs"
```

### Current Status

**151 of 151 opcodes validated** (100%) — NES 6502 complete!

---

## Verilator Testing

In addition to Chisel simulation, the generated Verilog can be tested using [Verilator](https://www.veripool.org/verilator/), which compiles the RTL to optimized C++ for significantly faster simulation.

### Building the Verilator Simulation

```bash
cd sim
make          # Build simulation (~10 seconds)
make test     # Quick test with NOP
```

### Running Verilator Tests

```bash
# Run all Verilator tests (151 opcodes)
sbt -DtestCount=100 "testOnly cpu6502.VTest_*"

# Run full 10,000 test vectors for one opcode
sbt -DtestCount=10000 "testOnly cpu6502.VTest_ADC_imm"
```

### Performance Comparison

Verilator provides substantial performance improvements over Chisel simulation:

| Metric | Chisel | Verilator | Speedup |
|--------|--------|-----------|----------|
| Wall time (151 tests × 10 vectors) | 23.4s | 5.6s | **4.2×** |
| CPU time | 215s | 48s | **4.5×** |

This speedup comes from Verilator compiling the Verilog to native C++ code, versus Chisel's interpreted simulation. For running the full 10,000 test vectors per opcode, Verilator completes each opcode in ~1.2 seconds.

### Architecture

The Verilator test infrastructure uses a simple text protocol:

```
Scala Test → stdin → Verilator Process → stdout → Scala Validation
```

- **Input**: `pc s a x y p addr1:val1 addr2:val2 ...`
- **Output**: `pc s a x y p cycles`

Each test class spawns its own Verilator process, allowing parallel execution across all CPU cores.

---

## File Organization

```
src/main/scala/cpu6502/
├── CPU6502Testable.scala   # Main CPU with state machine (~780 lines)
├── InstructionDecoder.scala # Opcode → control signals (~500 lines)
└── ALU.scala                # Arithmetic/logic unit (~200 lines)

src/test/scala/cpu6502/
└── SingleStepTest.scala     # 150 test classes, one per opcode

src/test/resources/singlestep/
└── *.json                   # 150 test vector files

docs/
├── ARCHITECTURE.md          # Detailed technical architecture
└── OVERVIEW.md              # This file
```

---

## Glossary

| Term | Definition |
|------|------------|
| **Accumulator (A)** | Primary 8-bit register for arithmetic |
| **ALU** | Arithmetic Logic Unit - performs math and logic ops |
| **Addressing Mode** | Method to calculate the effective memory address |
| **Carry Flag (C)** | Set on unsigned overflow/underflow |
| **Chisel** | Scala-based hardware description language |
| **Effective Address** | Final memory address after all calculations |
| **Immediate** | Operand is the value itself, not an address |
| **Index Register (X, Y)** | Used for array indexing and loops |
| **Opcode** | 8-bit instruction identifier |
| **Overflow Flag (V)** | Set on signed overflow |
| **Program Counter (PC)** | 16-bit address of next instruction |
| **RMW** | Read-Modify-Write: read, change, write back |
| **Stack Pointer (SP)** | 8-bit offset into stack page ($0100-$01FF) |
| **Zero Page** | First 256 bytes ($0000-$00FF) with fast addressing |
