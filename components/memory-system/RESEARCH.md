<!--
SPDX-License-Identifier: Apache-2.0
SPDX-FileCopyrightText: 2026 chisel-6502 contributors
-->

# Component Research: Memory System

## Overview

The Memory Controller manages access to 64KB RAM, ROM chips (BASIC, KERNAL, Character),
and Color RAM. It receives chip select signals from MmuPla and routes data accordingly.

## Status

**COMPLETE** - Simplified model for Phase 1 integration.

## Key Topics

- [x] RAM: 64KB, always writable, readable when selected
- [x] ROMs: BASIC (8KB), KERNAL (8KB), Character (4KB)
- [x] Color RAM: 1KB of 4-bit values at $D800-$DBFF
- [x] Write-through: CPU writes always go to RAM underneath ROMs
- [x] VIC access: Separate port for screen/color RAM reads

---

## Memory Organization

| Memory | Size | CPU Address | Notes |
|--------|------|-------------|-------|
| RAM | 64KB | $0000-$FFFF | Always present underneath |
| BASIC ROM | 8KB | $A000-$BFFF | Visible when LORAM & HIRAM |
| KERNAL ROM | 8KB | $E000-$FFFF | Visible when HIRAM |
| Char ROM | 4KB | $D000-$DFFF | Visible when HIRAM & !CHAREN |
| Color RAM | 1KB | $D800-$DBFF | 4-bit, within I/O space |

---

## Behavioral Notes

### Write-Through

All CPU writes go to underlying RAM regardless of banking. MmuPla asserts `ramWe`
for every write. The Memory Controller honors this unconditionally.

### Color RAM

- 1024 x 4-bit storage
- Reads return upper nibble as $F (undefined bits)
- Writes store only lower nibble
- Addressed as $D800 + offset (offset 0-1023 within Color RAM)

### VIC-II Access

VIC-II needs to read:
- Screen RAM (location set by VIC D018 register)
- Color RAM (always at fixed offset)
- Character ROM/RAM (location set by VIC D018 + bank)

For Phase 1, VIC reads use a separate port with direct address.

---

## Phase 1 Simplifications

- Single-port RAM (no true dual-port, VIC access is time-multiplexed or separate)
- ROMs loaded from files at elaboration time
- No DMA or bus contention modeling

---

## References

1. C64 Programmer's Reference Guide - Memory Maps
2. MmuPla.scala - Chip select generation

## License Notes

No external IP. Implementation based on documented behavior.
