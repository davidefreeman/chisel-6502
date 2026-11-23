<!--
SPDX-License-Identifier: Apache-2.0
SPDX-FileCopyrightText: 2026 chisel-6502 contributors
-->

# Component Specification: Memory System

## Overview

Memory Controller manages 64KB RAM, ROMs (BASIC, KERNAL, Character), and Color RAM.
Receives chip selects from MmuPla and routes CPU/VIC data access.

## Status

**COMPLETE** - Interface defined for Phase 1 integration.

---

## Chisel IO Bundle

```scala
class MemoryControllerIO extends Bundle {
  // CPU Interface
  val cpuAddr    = Input(UInt(16.W))   // CPU address
  val cpuDataIn  = Input(UInt(8.W))    // CPU write data
  val cpuDataOut = Output(UInt(8.W))   // CPU read data
  val cpuWe      = Input(Bool())       // Write enable (active high)
  
  // Chip selects from MmuPla
  val ramCs      = Input(Bool())       // RAM read selected
  val basicCs    = Input(Bool())       // BASIC ROM selected
  val kernalCs   = Input(Bool())       // KERNAL ROM selected  
  val charCs     = Input(Bool())       // Character ROM selected
  val colorCs    = Input(Bool())       // Color RAM selected
  
  // VIC-II Interface (direct memory access)
  val vicAddr    = Input(UInt(14.W))   // VIC address (within 16KB bank)
  val vicBank    = Input(UInt(2.W))    // VIC bank (0-3)
  val vicData    = Output(UInt(8.W))   // VIC read data
  
  // VIC Color RAM access
  val vicColorAddr = Input(UInt(10.W)) // Color RAM address (0-999)
  val vicColorData = Output(UInt(4.W)) // Color RAM data (4-bit)
}
```

---

## Memory Sizes

| Memory | Size | Parameter |
|--------|------|-----------|
| RAM | 64KB | Fixed |
| BASIC ROM | 8KB | `basicRomPath` |
| KERNAL ROM | 8KB | `kernalRomPath` |
| Character ROM | 4KB | `charRomPath` |
| Color RAM | 1KB | Internal |

---

## Behavioral Specification

### CPU Reads

```
if (basicCs)  -> BASIC ROM[addr - $A000]
else if (kernalCs) -> KERNAL ROM[addr - $E000]
else if (charCs)   -> Char ROM[addr - $D000]
else if (colorCs)  -> $F0 | ColorRAM[addr - $D800]
else if (ramCs)    -> RAM[addr]
else               -> $FF (open bus)
```

### CPU Writes

```
// Always write to RAM (write-through)
RAM[addr] := cpuDataIn

// Also write to Color RAM if selected
if (colorCs) ColorRAM[addr - $D800] := cpuDataIn(3,0)
```

### VIC-II Reads

```
fullAddr = (vicBank << 14) | vicAddr

// Character ROM visible at $1000-$1FFF in banks 0,2
if (bank == 0 || bank == 2) && (vicAddr >= $1000 && vicAddr < $2000)
  -> Char ROM[vicAddr - $1000]
else
  -> RAM[fullAddr]

vicColorData = ColorRAM[vicColorAddr]
```

---

## Reset State

- RAM: Uninitialized (or zero-filled)
- ROMs: Loaded from files at elaboration
- Color RAM: Uninitialized

---

## Constructor Parameters

```scala
class MemoryController(
  basicRomPath: String = "",   // Empty = zero-filled
  kernalRomPath: String = "",
  charRomPath: String = ""
) extends Module
```

If ROM path is empty, ROM is zero-filled (allows testing without files).

---

## Integration Notes

### Connection to MmuPla

```
MmuPla.ramCs    --> MemoryController.ramCs
MmuPla.basicCs  --> MemoryController.basicCs
MmuPla.kernalCs --> MemoryController.kernalCs
MmuPla.charCs   --> MemoryController.charCs
MmuPla.colorCs  --> MemoryController.colorCs
```

### Connection to VIC-II

```
VicIIText.screenAddr --> MemoryController.vicAddr
VicIIText.vicBank    --> MemoryController.vicBank
MemoryController.vicData --> VicIIText.screenData

VicIIText.colorAddr  --> MemoryController.vicColorAddr
MemoryController.vicColorData --> VicIIText.colorData
```

---

## Risks and Gaps

| Risk | Impact | Mitigation |
|------|--------|------------|
| ROM files missing | Build fails | Allow empty path for zero-fill |
| VIC/CPU contention | None in Phase 1 | Separate ports, no arbitration |

---

## File Location

- Implementation: `src/main/scala/c64/MemoryController.scala`
- Tests: `src/test/scala/c64/MemoryControllerTest.scala`
