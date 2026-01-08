# Chisel 6502 Architecture Document

This document provides a detailed technical description of the 6502 CPU implementation, including rationale behind key design decisions, assumptions, and block-by-block analysis.

## Table of Contents

1. [Design Philosophy](#design-philosophy)
2. [Module Hierarchy](#module-hierarchy)
3. [CPU6502Testable - Main CPU Module](#cpu6502testable---main-cpu-module)
4. [InstructionDecoder - Opcode Decode Logic](#instructiondecoder---opcode-decode-logic)
5. [ALU - Arithmetic Logic Unit](#alu---arithmetic-logic-unit)
6. [State Machine Architecture](#state-machine-architecture)
7. [Addressing Mode Implementation](#addressing-mode-implementation)
8. [Instruction Execution Details](#instruction-execution-details)
9. [Key Design Decisions](#key-design-decisions)
10. [Timing Characteristics](#timing-characteristics)

---

## Design Philosophy

### Goals

1. **Functional Correctness**: Pass all SingleStepTests validation (10,000 tests per opcode)
2. **NES Compatibility**: Implement the 2A03 variant (no BCD mode)
3. **Testability**: Enable single-instruction testing via state injection
4. **Simplicity**: Favor clarity over optimization for educational/verification purposes

### Non-Goals (explicit trade-offs)

- **Cycle Accuracy**: We don't match exact cycle timing for all edge cases
- **Illegal Opcodes**: Only official opcodes are implemented
- **BCD Mode**: Intentionally omitted (NES 2A03 compatibility)

---

## Module Hierarchy

```
CPU6502Testable (top-level)
│
├── InstructionDecoder
│   └── Combinational logic mapping opcode → control signals
│
└── ALU
    └── Combinational arithmetic/logic operations
```

### Module Responsibilities

| Module | Responsibility |
|--------|---------------|
| `CPU6502Testable` | State machine, register file, memory interface, instruction sequencing |
| `InstructionDecoder` | Opcode → {instrType, addressMode, aluOp, writeFlags} |
| `ALU` | Stateless arithmetic/logic: ADC, SBC, AND, ORA, EOR, shifts, CMP, BIT, INC, DEC |

---

## CPU6502Testable - Main CPU Module

### File: `src/main/scala/cpu6502/CPU6502Testable.scala`

### Interface

```scala
val io = IO(new Bundle {
  // Memory interface (active every cycle)
  val address = Output(UInt(16.W))     // Address bus
  val dataIn  = Input(UInt(8.W))       // Data from memory
  val dataOut = Output(UInt(8.W))      // Data to memory
  val writeEnable = Output(Bool())     // Write strobe
  
  // Control signals (active-low on real 6502, active-high here)
  val irq = Input(Bool())              // Maskable interrupt (unused)
  val nmi = Input(Bool())              // Non-maskable interrupt (unused)
  val rdy = Input(Bool())              // Ready signal (unused)
  
  // Test injection interface
  val test = Input(new Bundle {
    val enable = Bool()                // Load test state when high
    val pc, a, x, y, s, p = UInt(...)  // State to inject
  })
  
  // Debug interface
  val debug = Output(new DebugBundle)  // All internal state for observation
  val cycleCount = Output(UInt(8.W))   // Cycles since test.enable
})
```

### Register File

| Register | Width | Initial | Description |
|----------|-------|---------|-------------|
| `regA` | 8 | 0x00 | Accumulator |
| `regX` | 8 | 0x00 | X index register |
| `regY` | 8 | 0x00 | Y index register |
| `regSP` | 8 | 0xFD | Stack pointer (stack at $0100-$01FF) |
| `regPC` | 16 | 0x0000 | Program counter |
| `flagN/V/B/D/I/Z/C` | 1 each | varies | Status register bits |

**Design Decision**: Flags stored as individual 1-bit registers rather than a single 8-bit register. This simplifies flag manipulation logic since most instructions only modify a subset of flags.

### Temporary Registers

| Register | Purpose |
|----------|---------|
| `opcode` | Current instruction being executed |
| `operand` | 8-bit operand (immediate value or memory read) |
| `addrLo` / `addrHi` | Effective address components |
| `zpAddr` | Zero-page address for indirect modes |
| `cycle` | Sub-cycle counter for multi-cycle states |

---

## InstructionDecoder - Opcode Decode Logic

### File: `src/main/scala/cpu6502/InstructionDecoder.scala`

### Interface

```scala
val io = IO(new Bundle {
  val opcode = Input(UInt(8.W))
  
  val aluOp = Output(ALUOp())           // Which ALU operation
  val addressMode = Output(AddressMode()) // How to calculate effective address
  val instrType = Output(InstrType())   // Category of instruction
  val writeA/X/Y = Output(Bool())       // Register write enables
  val writeMem = Output(Bool())         // Memory write enable
  val updateFlags = Output(Bool())      // Update status flags
  val cycles = Output(UInt(4.W))        // Expected cycle count (informational)
})
```

### Addressing Modes (ChiselEnum)

```scala
object AddressMode extends ChiselEnum {
  val amImplied,      // No operand (CLC, INX, etc.)
      amAccumulator,  // Accumulator is operand (ASL A)
      amImmediate,    // Next byte is operand (LDA #$42)
      amZeroPage,     // 8-bit address in page 0 (LDA $42)
      amZeroPageX,    // Zero page + X (LDA $42,X)
      amZeroPageY,    // Zero page + Y (LDX $42,Y)
      amAbsolute,     // 16-bit address (LDA $1234)
      amAbsoluteX,    // Absolute + X (LDA $1234,X)
      amAbsoluteY,    // Absolute + Y (LDA $1234,Y)
      amIndirect,     // Pointer at address (JMP ($1234))
      amIndirectX,    // Indexed indirect ((zp,X))
      amIndirectY,    // Indirect indexed ((zp),Y)
      amRelative      // PC + signed offset (BNE label)
    = Value
}
```

### Instruction Types (ChiselEnum)

```scala
object InstrType extends ChiselEnum {
  val itALU,          // ALU operation (ADC, AND, etc.)
      itLoad,         // Load register from memory
      itStore,        // Store register to memory
      itBranch,       // Conditional branch
      itJump,         // Unconditional jump (JMP)
      itStack,        // Stack operations (PHA, PLA, PHP, PLP)
      itStatus,       // Flag manipulation (CLC, SEC, etc.)
      itNOP,          // No operation
      itIllegal,      // Invalid opcode
      itRegTransfer,  // Register-to-register (TAX, TYA, etc.)
      itIncDec,       // Register increment/decrement (INX, DEY)
      itRMW           // Read-Modify-Write memory (INC $42)
    = Value
}
```

### Decode Structure

The decoder is implemented as a large `switch(io.opcode)` statement with explicit entries for each of the 150 supported opcodes. This approach was chosen over a decode ROM or pattern-matching for:

1. **Clarity**: Each opcode's behavior is explicitly visible
2. **Flexibility**: Easy to add or modify individual opcodes
3. **Synthesis**: Chisel optimizes to efficient hardware regardless

**Design Decision**: We avoided the "aaabbbcc" pattern-based decoding used by some 6502 implementations because:
- Pattern decoding has many exceptions that obscure the logic
- Explicit decoding is more maintainable
- Modern synthesis tools handle large case statements efficiently

---

## ALU - Arithmetic Logic Unit

### File: `src/main/scala/cpu6502/ALU.scala`

### Interface

```scala
val io = IO(new Bundle {
  val a = Input(UInt(8.W))           // First operand (usually accumulator)
  val b = Input(UInt(8.W))           // Second operand (usually memory value)
  val carryIn = Input(Bool())        // Carry flag input
  val operation = Input(ALUOp())     // Operation to perform
  
  val result = Output(UInt(8.W))     // 8-bit result
  val carryOut = Output(Bool())      // Carry/borrow output
  val zero = Output(Bool())          // Result == 0
  val negative = Output(Bool())      // Result bit 7
  val overflow = Output(Bool())      // Signed overflow (ADC/SBC)
})
```

### Operations (ChiselEnum)

```scala
object ALUOp extends ChiselEnum {
  val opADC,   // Add with Carry: A + B + C
      opSBC,   // Subtract with Carry: A - B - !C
      opAND,   // Bitwise AND
      opORA,   // Bitwise OR
      opEOR,   // Bitwise XOR
      opASL,   // Arithmetic Shift Left (C ← b7, shift left, 0 → b0)
      opLSR,   // Logical Shift Right (0 → b7, shift right, b0 → C)
      opROL,   // Rotate Left through Carry
      opROR,   // Rotate Right through Carry
      opINC,   // Increment (A + 1)
      opDEC,   // Decrement (A - 1)
      opCMP,   // Compare (A - B, flags only)
      opBIT,   // Bit Test (A AND B, special flag handling)
      opPASS   // Pass B through unchanged (for loads)
    = Value
}
```

### Implementation Notes

**ADC (Add with Carry)**:
```scala
sum := io.a +& io.b +& io.carryIn.asUInt  // 9-bit addition
result := sum(7, 0)
carryOut := sum(8)
overflow := (io.a(7) === io.b(7)) && (io.a(7) =/= sum(7))
```

**SBC (Subtract with Carry)**:
```scala
// SBC is A - B - !C, implemented as A + (~B) + C
diff := io.a -& io.b -& (!io.carryIn).asUInt
result := diff(7, 0)
carryOut := !diff(8)  // Inverted for 6502 convention (C=1 means no borrow)
overflow := (io.a(7) =/= io.b(7)) && (io.a(7) =/= diff(7))
```

**BIT (Bit Test)** - Special case:
```scala
result := io.a & io.b     // Z flag based on AND result
overflow := io.b(6)       // V flag from bit 6 of memory
// N flag set from bit 7 of memory (handled in CPU, not ALU)
```

**Design Decision**: BCD mode is NOT implemented. The original 6502 had a Decimal flag that changed ADC/SBC to Binary-Coded Decimal arithmetic. The NES 2A03 removed this feature, and since we target NES compatibility, we omit it entirely.

---

## State Machine Architecture

### States (ChiselEnum)

```scala
object State extends ChiselEnum {
  val sReset,           // Read reset vector from $FFFC-$FFFD
      sFetch,           // Read opcode from memory[PC++]
      sDecode,          // Decode opcode, read operand byte(s)
      sExecute,         // Execute instruction
      sMemRead,         // Read memory at effective address
      sMemWrite,        // Write memory at effective address
      sReadOperand,     // (unused)
      sReadAddrLo,      // (unused)
      sReadAddrHi,      // Read high byte of 16-bit address
      sRMWWrite,        // Write-back for Read-Modify-Write
      sIndirectReadLo,  // Read low byte of indirect pointer
      sIndirectReadHi,  // Read high byte of indirect pointer
      sJSR,             // Multi-cycle JSR handling
      sRTS,             // Multi-cycle RTS handling
      sBRK,             // Multi-cycle BRK handling
      sRTI,             // Multi-cycle RTI handling
      sJMPIndirect      // Multi-cycle JMP indirect handling
    = Value
}
```

### State Transition Diagram

```
                              ┌─────────────────────────────────────────────┐
                              ▼                                             │
    sReset ───► sFetch ───► sDecode ───┬───► sExecute ─────────────────────►┤
                  ▲                    │         │                          │
                  │                    │         ▼                          │
                  │                    │    (write mem)                     │
                  │                    │         │                          │
                  │                    ├───► sReadAddrHi ───► sMemRead ─────┤
                  │                    │                          │         │
                  │                    │                          ▼         │
                  │                    │                     sRMWWrite ─────┤
                  │                    │                                    │
                  │                    ├───► sIndirectReadLo                │
                  │                    │         │                          │
                  │                    │         ▼                          │
                  │                    │    sIndirectReadHi ───► sMemRead ──┤
                  │                    │                                    │
                  │                    ├───► sJSR ──────────────────────────┤
                  │                    ├───► sRTS ──────────────────────────┤
                  │                    ├───► sBRK ──────────────────────────┤
                  │                    ├───► sRTI ──────────────────────────┤
                  │                    └───► sJMPIndirect ──────────────────┘
                  │                                                         │
                  └─────────────────────────────────────────────────────────┘
```

### Flow for Different Instruction Types

**Simple Implied (e.g., INX)**:
```
sFetch → sDecode → sExecute → sFetch
```

**Immediate (e.g., LDA #$42)**:
```
sFetch → sDecode (read operand) → sExecute → sFetch
```

**Zero Page (e.g., LDA $42)**:
```
sFetch → sDecode → sMemRead → sExecute → sFetch
```

**Absolute (e.g., LDA $1234)**:
```
sFetch → sDecode → sReadAddrHi → sMemRead → sExecute → sFetch
```

**Read-Modify-Write (e.g., INC $42)**:
```
sFetch → sDecode → sMemRead → sRMWWrite → sFetch
```

**Indirect Indexed (e.g., LDA ($42),Y)**:
```
sFetch → sDecode → sIndirectReadLo → sIndirectReadHi → sMemRead → sExecute → sFetch
```

**JSR**:
```
sFetch → sDecode → sJSR (4 cycles: push PCH, push PCL, read addr hi, jump) → sFetch
```

---

## Addressing Mode Implementation

### Zero Page (8-bit address)

Zero page addressing provides fast access to the first 256 bytes ($0000-$00FF). The effective address is simply the 8-bit operand:

```scala
is(AddressMode.amZeroPage) {
  addrLo := io.dataIn
  addrHi := 0.U  // Always page 0
  state := sMemRead
}
```

### Zero Page Indexed

For `zp,X` and `zp,Y`, the index register is added with wrap-around within page 0:

```scala
is(AddressMode.amZeroPageX) {
  addrLo := (io.dataIn + regX)(7, 0)  // Wrap within zero page
  addrHi := 0.U
  state := sMemRead
}
```

**Key Assumption**: Zero page indexing always wraps within page 0. If ZP address is $FF and X is $02, the effective address is $01, NOT $0101.

### Absolute Indexed

For `abs,X` and `abs,Y`, the 16-bit base address has the index added. Page crossing is allowed:

```scala
is(sReadAddrHi) {
  val baseAddr = Cat(io.dataIn, addrLo)
  val indexedAddr = MuxCase(baseAddr, Seq(
    (addressMode === amAbsoluteX) -> (baseAddr + regX),
    (addressMode === amAbsoluteY) -> (baseAddr + regY)
  ))
  addrLo := indexedAddr(7, 0)
  addrHi := indexedAddr(15, 8)
  state := sMemRead
}
```

### Indexed Indirect ((zp,X))

Pointer is at zero page location (zp+X). Both pointer bytes are read from zero page:

```scala
// In sDecode:
zpAddr := (io.dataIn + regX)(7, 0)  // Add X, wrap within zero page
state := sIndirectReadLo

// In sIndirectReadLo:
io.address := Cat(0.U(8.W), zpAddr)  // Read from zero page
addrLo := io.dataIn
zpAddr := zpAddr + 1.U  // Next byte (wraps within zero page)
state := sIndirectReadHi

// In sIndirectReadHi:
io.address := Cat(0.U(8.W), zpAddr)  // Still in zero page
addrHi := io.dataIn
state := sMemRead
```

### Indirect Indexed ((zp),Y)

Pointer is at zero page location, Y added to the 16-bit address AFTER reading:

```scala
// In sDecode:
zpAddr := io.dataIn  // Zero page address (no X added)
state := sIndirectReadLo

// In sIndirectReadHi:
val baseAddr = Cat(io.dataIn, addrLo)
val indexedAddr = baseAddr + regY  // Add Y to full 16-bit address
addrLo := indexedAddr(7, 0)
addrHi := indexedAddr(15, 8)  // May cross page boundary
state := sMemRead
```

**Key Difference**: `(zp,X)` adds X BEFORE reading the pointer (in zero page). `(zp),Y` adds Y AFTER reading the pointer (to the full address). This asymmetry is historical but affects performance patterns in 6502 software.

### JMP Indirect Bug

The 6502 has a famous bug with JMP indirect when the pointer crosses a page boundary:

```scala
is(sJMPIndirect) {
  is(2.U) {
    // If addrLo is $FF, high byte comes from $XX00, not $XX00+$0100
    val nextAddr = Cat(addrHi, (addrLo + 1.U)(7, 0))  // Wrap within page!
    io.address := nextAddr
    ...
  }
}
```

If `JMP ($10FF)` is executed, the 6502 reads the low byte from $10FF and the HIGH byte from $1000 (not $1100). We faithfully reproduce this bug for compatibility.

---

## Instruction Execution Details

### Load Instructions (LDA, LDX, LDY)

```scala
is(InstrType.itLoad) {
  when(decoder.io.writeA) { regA := operand }
  when(decoder.io.writeX) { regX := operand }
  when(decoder.io.writeY) { regY := operand }
  when(decoder.io.updateFlags) {
    flagZ := operand === 0.U
    flagN := operand(7)
  }
  state := sFetch
}
```

### ALU Instructions (ADC, SBC, AND, ORA, EOR, CMP)

```scala
is(InstrType.itALU) {
  when(decoder.io.writeA) { regA := alu.io.result }
  when(decoder.io.updateFlags) {
    flagZ := alu.io.zero
    flagN := alu.io.negative
    // C flag for arithmetic/shifts
    when(aluOp === opADC || aluOp === opSBC || aluOp === opCMP || ...) {
      flagC := alu.io.carryOut
    }
    // V flag for ADC/SBC
    when(aluOp === opADC || aluOp === opSBC) {
      flagV := alu.io.overflow
    }
  }
  state := sFetch
}
```

### BIT Instruction (Special)

BIT tests memory bits against the accumulator with unusual flag behavior:

- **Z**: Set if (A AND M) == 0
- **N**: Set to bit 7 of MEMORY (not result)
- **V**: Set to bit 6 of MEMORY (not result)

```scala
when(aluOp === ALUOp.opBIT) {
  flagN := operand(7)  // From memory, not ALU result
  flagV := operand(6)  // From memory, not ALU result
}
```

### Read-Modify-Write (INC, DEC, ASL, LSR, ROL, ROR on memory)

These instructions read memory, modify it through the ALU, then write back:

```scala
// After sMemRead for RMW instructions:
is(sRMWWrite) {
  io.address := effectiveAddr
  io.dataOut := alu.io.result  // ALU was configured with operand
  io.writeEnable := true.B
  
  // Update flags from result
  flagZ := alu.io.zero
  flagN := alu.io.negative
  when(isShiftOp) { flagC := alu.io.carryOut }
  
  state := sFetch
}
```

**ALU Input for RMW**: The ALU's `a` input is muxed to use `operand` (the memory value) instead of `regA`:

```scala
alu.io.a := MuxCase(regA, Seq(
  (decoder.io.instrType === InstrType.itRMW) -> operand,
  ...
))
```

### Branch Instructions

All 8 branch instructions share the same execution logic:

```scala
is(InstrType.itBranch) {
  val takeBranch = Wire(Bool())
  switch(opcode) {
    is(0x10.U) { takeBranch := !flagN }  // BPL
    is(0x30.U) { takeBranch := flagN }   // BMI
    is(0x50.U) { takeBranch := !flagV }  // BVC
    is(0x70.U) { takeBranch := flagV }   // BVS
    is(0x90.U) { takeBranch := !flagC }  // BCC
    is(0xB0.U) { takeBranch := flagC }   // BCS
    is(0xD0.U) { takeBranch := !flagZ }  // BNE
    is(0xF0.U) { takeBranch := flagZ }   // BEQ
  }
  
  when(takeBranch) {
    val signedOffset = operand.asSInt  // Sign-extend 8-bit to 16-bit
    regPC := (regPC.asSInt + signedOffset).asUInt
  }
  state := sFetch
}
```

### Stack Operations (PHA, PLA, PHP, PLP)

Stack lives at $0100-$01FF. SP is 8-bit offset into this page:

```scala
is(0x48.U) { // PHA
  io.address := Cat(0x01.U(8.W), regSP)  // Address = $01XX
  io.dataOut := regA
  io.writeEnable := true.B
  regSP := regSP - 1.U  // SP decrements on push
}

is(0x68.U) { // PLA
  regSP := regSP + 1.U  // SP increments on pull
  io.address := Cat(0x01.U(8.W), regSP + 1.U)
  regA := io.dataIn
  flagZ := io.dataIn === 0.U
  flagN := io.dataIn(7)
}
```

### JSR/RTS (Subroutine Call/Return)

**JSR** pushes the address of the LAST BYTE of the JSR instruction (PC-1), not the next instruction:

```scala
is(sJSR) {
  switch(cycle) {
    is(0.U) { /* Push PCH */ regSP := regSP - 1.U }
    is(1.U) { /* Push PCL */ regSP := regSP - 1.U }
    is(2.U) { /* Read addr high byte */ }
    is(3.U) { regPC := Cat(addrHi, addrLo) }  // Jump
  }
}
```

**RTS** pulls PC and adds 1 (compensating for JSR's PC-1):

```scala
is(sRTS) {
  switch(cycle) {
    is(0.U) { regSP := regSP + 1.U }
    is(1.U) { /* Pull PCL */ regSP := regSP + 1.U }
    is(2.U) { /* Pull PCH */ }
    is(3.U) { regPC := Cat(addrHi, addrLo) + 1.U }  // Note: +1
  }
}
```

### BRK/RTI (Interrupt Handling)

**BRK** is a software interrupt:

```scala
is(sBRK) {
  switch(cycle) {
    is(0.U) { /* Read/discard signature byte, PC++ */ }
    is(1.U) { /* Push PCH */ }
    is(2.U) { /* Push PCL */ }
    is(3.U) { 
      /* Push P with B flag set */
      io.dataOut := Cat(flagN, flagV, 1.U, 1.U, flagD, flagI, flagZ, flagC)
      flagI := true.B  // Disable interrupts
    }
    is(4.U) { /* Read IRQ vector low from $FFFE */ }
    is(5.U) { /* Read IRQ vector high from $FFFF */ }
    is(6.U) { regPC := Cat(addrHi, addrLo) }  // Jump to handler
  }
}
```

**RTI** returns from interrupt (restores P and PC):

```scala
is(sRTI) {
  switch(cycle) {
    is(0.U) { regSP := regSP + 1.U }
    is(1.U) { /* Pull P, restore flags */ }
    is(2.U) { /* Pull PCL */ }
    is(3.U) { /* Pull PCH */ }
    is(4.U) { regPC := Cat(addrHi, addrLo) }  // No +1 unlike RTS
  }
}
```

**Key Difference**: RTI does NOT add 1 to the pulled PC (unlike RTS), because BRK pushes the actual return address, not address-1.

---

## Key Design Decisions

### 1. Test-Driven Development

The implementation was developed using SingleStepTests validation with 1000+ tests per opcode. This approach:
- Ensures correctness before optimization
- Catches edge cases (flag behavior, address wrapping)
- Provides confidence for future changes

### 2. Explicit State Machine

We use explicit state names rather than a counter-based approach because:
- State transitions are self-documenting
- Easier to debug (state is observable)
- Different instruction types can have different state flows

### 3. Multi-Cycle States with Cycle Counter

For complex operations (JSR, BRK, etc.), we use a `cycle` counter within the state rather than adding more states. This:
- Keeps the state enum manageable
- Groups related operations logically
- Matches how hardware engineers think about multi-cycle operations

### 4. Combinational ALU

The ALU is purely combinational (no registered outputs). This:
- Simplifies timing analysis
- Allows result to be used in same cycle
- Matches traditional 6502 behavior

### 5. Individual Flag Registers

Status flags are stored as separate 1-bit registers rather than a single 8-bit P register. This:
- Simplifies partial flag updates (most instructions don't touch all flags)
- Avoids read-modify-write on a single register
- The concatenated `regP` signal is derived for debug/stack operations

---

## Timing Characteristics

### Cycles Per Instruction (approximate)

| Category | Cycles | Examples |
|----------|--------|----------|
| Implied | 2 | CLC, INX, TAX |
| Immediate | 2 | LDA #$42 |
| Zero Page | 3 | LDA $42 |
| Zero Page,X | 4 | LDA $42,X |
| Absolute | 4 | LDA $1234 |
| Absolute,X/Y | 4-5 | LDA $1234,X |
| (zp,X) | 6 | LDA ($42,X) |
| (zp),Y | 5-6 | LDA ($42),Y |
| JSR | 6 | JSR $1234 |
| RTS | 6 | RTS |
| BRK | 7 | BRK |
| RTI | 6 | RTI |

**Note**: Our implementation doesn't add extra cycles for page crossings. The original 6502 takes an extra cycle when indexed addressing crosses a page boundary. This is a simplification that doesn't affect functional correctness.

---

## Appendix: Opcode Coverage

150 of 151 official NES 6502 opcodes are implemented and validated. The missing opcode (0x89) is an unofficial NOP variant not present in standard test suites.

See `WARP.md` for the complete opcode list organized by category.
