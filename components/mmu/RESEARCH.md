# Component Research: MMU / PLA

## Overview

The C64's memory management is handled by two components working together:

1. **6510 CPU I/O Port** — Built into the CPU at addresses $0000-$0001, controls LORAM/HIRAM/CHAREN signals
2. **PLA (82S100)** — Programmable Logic Array that decodes addresses and control signals to generate chip selects

Since our 6502 core (2A03 variant) lacks the 6510's I/O port, we must emulate it externally.

---

## 6510 I/O Port

The MOS 6510 has an 8-bit I/O port integrated into the CPU, accessible at:

| Address | Register | Description |
|---------|----------|-------------|
| $0000 | DDR | Data Direction Register (1=output, 0=input) |
| $0001 | PORT | Port Data Register |

### Port Bit Assignments

| Bit | Name | Direction | Function |
|-----|------|-----------|----------|
| 0 | LORAM | Output | BASIC ROM enable (directly active high) |
| 1 | HIRAM | Output | KERNAL ROM enable (directly active high) |
| 2 | CHAREN | Output | Character ROM vs I/O (directly active high for I/O) |
| 3 | CASS WRT | Output | Cassette write line |
| 4 | CASS SENSE | Input | Cassette switch sense |
| 5 | CASS MOTOR | Output | Cassette motor control |
| 6 | — | — | Directly unavailable on 6510 |
| 7 | — | — | Directly unavailable on 6510 |

### DDR Behavior

- Bit = **1**: Pin configured as output, PORT bit drives the line
- Bit = **0**: Pin configured as input, PORT bit reads external state

**Pull-up behavior**: On real C64, bits 0-2 have external pull-ups. When configured as inputs, they read high. For simplicity, we treat bits 0-2 as always outputting their PORT value (safe assumption for software compatibility).

### Reset State

| Register | Value | Binary | Notes |
|----------|-------|--------|-------|
| DDR | $2F | %00101111 | Bits 0-3,5 output; bit 4 input |
| PORT | $37 | %00110111 | LORAM=1, HIRAM=1, CHAREN=1, motor off |

Standard banking after reset: BASIC, KERNAL, and I/O all visible.

---

## PLA Banking Logic

### Inputs (Directly relevant for CPU access, no cartridge)

| Signal | Description |
|--------|-------------|
| A15-A12 | Address bits for region decode |
| LORAM | BASIC ROM enable |
| HIRAM | KERNAL ROM enable |
| CHAREN | Char ROM vs I/O |
| R/W | Read=1, Write=0 |

### Banking Truth Table (GAME=1, EXROM=1, no cartridge)

| LORAM | HIRAM | CHAREN | $A000-$BFFF | $D000-$DFFF | $E000-$FFFF |
|:-----:|:-----:|:------:|:-----------:|:-----------:|:-----------:|
| 1 | 1 | 1 | BASIC ROM | I/O | KERNAL ROM |
| 1 | 1 | 0 | BASIC ROM | CHAR ROM | KERNAL ROM |
| 0 | 1 | 1 | RAM | I/O | KERNAL ROM |
| 0 | 1 | 0 | RAM | CHAR ROM | KERNAL ROM |
| 1 | 0 | x | RAM | RAM | RAM |
| 0 | 0 | x | RAM | RAM | RAM |

**Key rules:**
1. HIRAM=0 → RAM everywhere (no ROMs, no I/O)
2. HIRAM=1, LORAM=0 → BASIC hidden, KERNAL visible
3. CHAREN selects between I/O and Character ROM at $D000-$DFFF
4. **Writes always go to underlying RAM**, even when ROM is visible

---

## Memory Map

### Full 64KB Layout (Standard Configuration)

```
$0000-$0001   6510 I/O Port (emulated externally)
$0002-$00FF   Zero Page RAM
$0100-$01FF   Stack RAM
$0200-$03FF   OS work area
$0400-$07FF   Default screen RAM (1KB)
$0800-$9FFF   BASIC program area (38KB RAM)
$A000-$BFFF   BASIC ROM / RAM (8KB)
$C000-$CFFF   Upper RAM (4KB)
$D000-$DFFF   I/O / Char ROM / RAM (4KB)
$E000-$FFFF   KERNAL ROM / RAM (8KB)
```

### I/O Region Detail ($D000-$DFFF)

| Range | Size | Component | Mirroring |
|-------|------|-----------|-----------|
| $D000-$D3FF | 1KB | VIC-II | 64-byte blocks |
| $D400-$D7FF | 1KB | SID | 32-byte blocks |
| $D800-$DBFF | 1KB | Color RAM | None (4-bit) |
| $DC00-$DCFF | 256B | CIA1 | 16-byte blocks |
| $DD00-$DDFF | 256B | CIA2 | 16-byte blocks |
| $DE00-$DEFF | 256B | I/O Exp 1 | Open bus |
| $DF00-$DFFF | 256B | I/O Exp 2 | Open bus |

---

## Color RAM

Special 4-bit wide static RAM at $D800-$DBFF:

| Aspect | Behavior |
|--------|----------|
| Width | 4 bits (nibble) |
| Size | 1024 nibbles |
| Read | Low 4 bits = color, high 4 bits = undefined |
| Write | Only low 4 bits stored |
| Visibility | Always visible when I/O is visible |

**Implementation**: Store as 8-bit, mask to low nibble on read/write. High nibble reads as $0 or $F (implementation choice; we'll use $0).

---

## VIC-II Bank Selection (for context)

Controlled by CIA2 Port A bits 0-1 (directly active **inverted** directly):

| CIA2 PA1:PA0 | Bank | VIC Sees |
|:------------:|:----:|:--------:|
| %11 (write $03) | 0 | $0000-$3FFF |
| %10 (write $02) | 1 | $4000-$7FFF |
| %01 (write $01) | 2 | $8000-$BFFF |
| %00 (write $00) | 3 | $C000-$FFFF |

**Character ROM visibility to VIC:**
- Bank 0: $1000-$1FFF shows Char ROM
- Bank 2: $9000-$9FFF shows Char ROM
- Banks 1, 3: VIC sees RAM at those addresses

---

## Signals Interface

### 6510 Port Shim

**Inputs:**
| Signal | Width | Description |
|--------|-------|-------------|
| addr | 16 | CPU address |
| dataIn | 8 | CPU write data |
| we | 1 | Write enable |

**Outputs:**
| Signal | Width | Description |
|--------|-------|-------------|
| dataOut | 8 | Read data ($0000 or $0001) |
| loram | 1 | BASIC enable |
| hiram | 1 | KERNAL enable |
| charen | 1 | Char/I/O select |
| portActive | 1 | True if $0000-$0001 accessed |

### MMU/PLA Decode

**Inputs:**
| Signal | Width | Description |
|--------|-------|-------------|
| addr | 16 | CPU address |
| rw | 1 | Read=1, Write=0 |
| loram | 1 | From 6510 port |
| hiram | 1 | From 6510 port |
| charen | 1 | From 6510 port |

**Outputs (directly active chip selects):**
| Signal | Description |
|--------|-------------|
| ramRd | RAM read enable |
| ramWr | RAM write enable |
| basicCs | BASIC ROM select |
| kernalCs | KERNAL ROM select |
| charCs | Character ROM select |
| ioCs | I/O region select |
| vicCs | VIC-II select ($D000-$D3FF) |
| sidCs | SID select ($D400-$D7FF) |
| colorCs | Color RAM select ($D800-$DBFF) |
| cia1Cs | CIA1 select ($DC00-$DCFF) |
| cia2Cs | CIA2 select ($DD00-$DDFF) |

---

## Phase 1 Simplifications

1. **No cartridge**: GAME=1, EXROM=1 always assumed
2. **No expansion I/O**: $DE00-$DFFF returns open bus ($FF)
3. **Immediate switching**: Bank changes take effect instantly
4. **No VIC bus contention**: CPU has full bandwidth
5. **Cassette port**: Bits 3-5 stored but not connected

---

## References

1. **C64 Programmer's Reference Guide** (Commodore, 1982)
   - Memory management, banking tables

2. **C64 Wiki - Bank Switching**
   - https://www.c64-wiki.com/wiki/Bank_Switching

3. **C64 Wiki - PLA**
   - https://www.c64-wiki.com/wiki/PLA_(C64_chip)

4. **Mapping the Commodore 64** (Sheldon Leemon)
   - Detailed register and memory documentation

5. **FPGA64 / MiSTer C64 Core**
   - Reference implementations (GPL, design patterns only)

---

## License Notes

- PLA truth tables are factual data (not copyrightable)
- This research is original documentation
- Referenced HDL implementations inform design but code is original

---

## Acceptance Checklist

- [x] 6510 port DDR/PORT behavior documented
- [x] Reset state specified
- [x] Banking truth table for no-cartridge case
- [x] Memory map with all regions
- [x] I/O region decode documented
- [x] Color RAM behavior documented
- [x] Signal interface defined
- [x] Simplifications noted
- [x] References provided
