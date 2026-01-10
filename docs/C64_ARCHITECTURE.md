# C64 Text-Mode Emulator Architecture

## Overview

This document describes the architecture for a Commodore 64 text-mode emulator built on the existing Chisel 6502 CPU core. The goal is to provide a functional C64-compatible system capable of running simple programs (like Forth) in text mode.

## Goals

1. **Text-mode operation** — 40×25 character display with color
2. **Keyboard input** — Host keyboard mapped to C64 matrix
3. **Extensible I/O** — MMU and bus architecture supporting future devices
4. **Run existing software** — Compatible enough to run KERNAL and simple programs
5. **Performance** — Usable simulation speed via Verilator

## Non-Goals (Phase 1)

- Graphics modes (bitmap, sprites, multicolor)
- Sound (SID chip)
- Joysticks, paddles, light pen
- Disk drive emulation
- Cartridge support
- Cycle-exact VIC-II timing (raster IRQs, badlines)

---

## CPU Considerations

### 6502 vs 6510

The C64 uses the MOS 6510, which is a 6502 with an integrated 8-bit I/O port at addresses $0000-$0001:

| Address | Register | Purpose |
|---------|----------|---------|
| $0000 | DDR | Data direction (1=output, 0=input) |
| $0001 | Data | Port data (directly affects banking) |

**Port bit assignments:**
| Bit | Name | Function |
|-----|------|----------|
| 0 | LORAM | BASIC ROM visibility (1=visible) |
| 1 | HIRAM | KERNAL ROM visibility (1=visible) |
| 2 | CHAREN | Character ROM vs I/O (1=I/O visible) |
| 3 | Cassette write | (unused in this project) |
| 4 | Cassette sense | (unused) |
| 5 | Cassette motor | (unused) |

**Our approach:** Emulate the 6510 port externally with a shim module that intercepts reads/writes to $0000-$0001 and provides banking control signals.

### 2A03 Differences

Our existing CPU is a 2A03 clone (no BCD mode). This is acceptable because:
- BCD mode is rarely used in C64 software
- KERNAL doesn't require BCD for basic operation
- We can add BCD later if needed

---

## Memory Map

### Standard C64 Layout ($0000-$FFFF)

```
$0000-$00FF   Zero Page (256 bytes)
$0100-$01FF   Stack (256 bytes)
$0200-$03FF   OS work area
$0400-$07FF   Screen RAM (1KB, default)
$0800-$9FFF   BASIC program area (38KB RAM)
$A000-$BFFF   BASIC ROM (8KB) or RAM
$C000-$CFFF   Upper RAM (4KB)
$D000-$D3FF   VIC-II registers (mirrored)
$D400-$D7FF   SID registers (mirrored) [not implemented]
$D800-$DBFF   Color RAM (1KB, 4-bit)
$DC00-$DCFF   CIA1 registers (mirrored)
$DD00-$DDFF   CIA2 registers (mirrored)
$DE00-$DFFF   I/O expansion [not implemented]
$E000-$FFFF   KERNAL ROM (8KB) or RAM
```

### Banking Modes

Bank configuration is controlled by 6510 port bits 0-2:

| LORAM | HIRAM | CHAREN | $A000-$BFFF | $D000-$DFFF | $E000-$FFFF |
|-------|-------|--------|-------------|-------------|-------------|
| 1 | 1 | 1 | BASIC ROM | I/O | KERNAL ROM |
| 1 | 1 | 0 | BASIC ROM | CHAR ROM | KERNAL ROM |
| 0 | 1 | 1 | RAM | I/O | KERNAL ROM |
| 1 | 0 | 1 | RAM | I/O | RAM |
| 0 | 0 | x | RAM | RAM | RAM |

**Default after reset:** LORAM=1, HIRAM=1, CHAREN=1 (all ROMs visible, I/O active)

---

## Component Architecture

```
                              ┌─────────────────┐
                              │   CPU 6502      │
                              │  (existing)     │
                              └────────┬────────┘
                                       │
                              ┌────────▼────────┐
                              │ 6510 Port Shim  │
                              │ ($0000-$0001)   │
                              └────────┬────────┘
                                       │
                              ┌────────▼────────┐
                              │      MMU        │
                              │ (PLA decode)    │
                              └────────┬────────┘
                                       │
        ┌──────────────────────────────┼──────────────────────────────┐
        │                              │                              │
┌───────▼───────┐             ┌────────▼────────┐            ┌────────▼────────┐
│     RAM       │             │      I/O        │            │      ROM        │
│   64KB        │             │   $D000-$DFFF   │            │  KERNAL/BASIC   │
└───────────────┘             └────────┬────────┘            └─────────────────┘
                                       │
                   ┌───────────────────┼───────────────────┐
                   │                   │                   │
          ┌────────▼────────┐ ┌────────▼────────┐ ┌────────▼────────┐
          │    VIC-II       │ │     CIA1        │ │     CIA2        │
          │  (text mode)    │ │   (keyboard)    │ │  (VIC bank)     │
          │  $D000-$D3FF    │ │   $DC00-$DCFF   │ │   $DD00-$DDFF   │
          └─────────────────┘ └─────────────────┘ └─────────────────┘
```

---

## Components

### 1. MMU / PLA

**Responsibility:** Address decode and banking logic

**Inputs:**
- CPU address (16-bit)
- CPU R/W signal
- LORAM, HIRAM, CHAREN from 6510 port

**Outputs:**
- Chip select signals (RAM, KERNAL, BASIC, CHARGEN, I/O)
- Remapped address for ROM access

### 2. Memory Controller

**Responsibility:** Arbitrate access to RAM, ROM, Color RAM

**Features:**
- 64KB RAM array
- ROM loading from firmware files
- Color RAM (1KB × 4-bit at $D800)
- Write-through: writes always go to RAM even when ROM is visible

### 3. 6510 Port Shim

**Responsibility:** Emulate 6510 I/O port at $0000-$0001

**Registers:**
- DDR at $0000: direction (1=output)
- Data at $0001: port value

**Behavior:**
- Intercept CPU access before main memory
- Expose LORAM, HIRAM, CHAREN outputs to MMU

### 4. CIA 6526 (×2)

**Responsibility:** I/O, timers, keyboard, VIC bank select

**CIA1 ($DC00):**
- Port A: keyboard column select (directly controlled on C64)
- Port B: keyboard row read
- Timers A/B for system timing
- IRQ output

**CIA2 ($DD00):**
- Port A bits 0-1: VIC bank select (inverted)
- Timers A/B
- IRQ output (directly wired on C64, but here goes to CPU IRQ for simplicity)

**Simplifications:**
- No serial port implementation
- No time-of-day clock (initially)
- Basic timer functionality only

### 5. VIC-II (Text Mode Only)

**Responsibility:** Character display, screen/color RAM access

**Registers (subset):**
- $D011: Control register 1 (enable display)
- $D016: Control register 2 (40 columns)
- $D018: Memory pointers (screen base, char base)
- $D020: Border color
- $D021: Background color

**Memory access:**
- Screen RAM: 1KB pointed to by D018 (default $0400)
- Color RAM: 1KB at $D800 (4-bit per cell)
- Character ROM: 4KB pointed to by D018 + VIC bank

**Output:**
- 40×25 character buffer for host rendering

---

## Interrupts

| Source | Type | Destination |
|--------|------|-------------|
| CIA1 | IRQ | CPU IRQ |
| CIA2 | IRQ | CPU IRQ (NMI on real C64, simplified here) |
| VIC-II raster | IRQ | Not implemented (Phase 1) |

**Phase 1 simplification:** Both CIA IRQs go to CPU IRQ line. NMI is unused.

---

## Clock and Timing

**Target clock:** ~1 MHz (985248 Hz PAL / 1022727 Hz NTSC)

**Implementation:**
- Single system clock drives all components
- Simple phi2 generation for components that need it
- No cycle-stealing by VIC-II (simplification)

---

## Testability

Following the established SingleStepTest pattern:
- Each component has state injection for testing
- JSON test vectors define input → expected output
- Tests run in parallel via separate test classes

---

## Risk Register

| Risk | Impact | Mitigation |
|------|--------|------------|
| 2A03 lacks 6510 port | High | External shim module |
| 2A03 lacks BCD mode | Low | Most software doesn't need it |
| VIC timing simplified | Medium | Text mode doesn't need raster IRQ |
| CIA timing simplified | Medium | Basic timer function sufficient |
| ROM licensing | Medium | Use open-source replacements |

---

## Milestones

1. **Memory system online** — Banking, RAM/ROM, Color RAM
2. **CIAs operational** — Timers, keyboard matrix
3. **VIC-II text mode** — 40×25 rendering
4. **System boot** — KERNAL or stub displays text
5. **Forth runs** — Interactive text-mode session
