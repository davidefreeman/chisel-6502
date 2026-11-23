<!--
SPDX-License-Identifier: Apache-2.0
SPDX-FileCopyrightText: 2026 chisel-6502 contributors
-->

# Component Research: CIA 6526

## Overview

The MOS 6526 Complex Interface Adapter (CIA) is a peripheral chip providing:
- Two 8-bit bidirectional I/O ports with data direction control
- Two 16-bit interval timers with multiple operating modes
- Time-of-day clock with alarm
- 8-bit serial shift register
- Interrupt control with 5 sources

The C64 uses two CIAs:
- **CIA1** at $DC00-$DCFF: Keyboard matrix, joystick ports, IRQ generation
- **CIA2** at $DD00-$DDFF: VIC bank select, serial bus, user port, NMI generation

---

## Register Map

Each CIA has 16 registers, mirrored every 16 bytes across a 256-byte range.

| Offset | Name | R/W | Description |
|--------|------|-----|-------------|
| $00 | PRA | R/W | Port A Data Register |
| $01 | PRB | R/W | Port B Data Register |
| $02 | DDRA | R/W | Data Direction Register A (1=output) |
| $03 | DDRB | R/W | Data Direction Register B (1=output) |
| $04 | TALO | R/W | Timer A Low Byte (read: current, write: latch) |
| $05 | TAHI | R/W | Timer A High Byte |
| $06 | TBLO | R/W | Timer B Low Byte |
| $07 | TBHI | R/W | Timer B High Byte |
| $08 | TOD10 | R/W | Time-of-Day 1/10 Seconds |
| $09 | TODSEC | R/W | Time-of-Day Seconds |
| $0A | TODMIN | R/W | Time-of-Day Minutes |
| $0B | TODHR | R/W | Time-of-Day Hours + AM/PM |
| $0C | SDR | R/W | Serial Data Register |
| $0D | ICR | R/W | Interrupt Control Register |
| $0E | CRA | R/W | Control Register A |
| $0F | CRB | R/W | Control Register B |

---

## Port Registers (PRA, PRB, DDRA, DDRB)

### Data Direction Registers
- Bit = 1: Corresponding port bit is output
- Bit = 0: Corresponding port bit is input
- Reset value: $00 (all inputs)

### Port Data Registers
- **Write**: Output latch is updated
- **Read**: For output bits, reads output latch; for input bits, reads pin state

### CIA1 Port Assignments

| Port | Bit | Function |
|------|-----|----------|
| PA0-PA7 | 0-7 | Keyboard column select (active low output) |
| PB0-PB7 | 0-7 | Keyboard row sense (active low input) |

### CIA2 Port Assignments

| Port | Bit | Function |
|------|-----|----------|
| PA0 | 0 | VIC bank select bit 0 (inverted) |
| PA1 | 1 | VIC bank select bit 1 (inverted) |
| PA2 | 2 | RS-232 TXD output |
| PA3-PA5 | 3-5 | Serial bus (DATA, CLK, ATN) |
| PA6-PA7 | 6-7 | Serial bus (CLK IN, DATA IN) |
| PB0-PB7 | 0-7 | User port |

### VIC Bank Selection

CIA2 PA0-PA1 select which 16KB bank the VIC-II sees:

| PA1 | PA0 | Bank | Address Range |
|-----|-----|------|---------------|
| 1 | 1 | 0 | $0000-$3FFF |
| 1 | 0 | 1 | $4000-$7FFF |
| 0 | 1 | 2 | $8000-$BFFF |
| 0 | 0 | 3 | $C000-$FFFF |

**Note**: PA0-PA1 are inverted, so bank = ~(PA1:PA0) & 3.

---

## Timers

### Timer A (TA)

A 16-bit down counter with these features:
- Counts system clock (PHI2) or CNT pin edges
- On underflow: can generate IRQ, toggle/pulse PB6, reload from latch
- One-shot or continuous mode

### Timer B (TB)

Similar to Timer A with additional input options:
- Can count system clock, CNT pin, Timer A underflows, or Timer A underflows while CNT high
- On underflow: can generate IRQ, toggle/pulse PB7, reload from latch

### Timer Registers

**Reading TALo/TAHi**: Returns current counter value
**Writing TALo/TAHi**: Updates latch (not counter directly)

### Control Register A ($0E - CRA)

| Bit | Name | Function |
|-----|------|----------|
| 0 | START | 1=Start timer, 0=Stop timer |
| 1 | PBON | 1=PB6 output reflects timer state |
| 2 | OUTMODE | 1=Toggle PB6 on underflow, 0=Pulse |
| 3 | RUNMODE | 1=One-shot, 0=Continuous |
| 4 | LOAD | 1=Force load latch into counter (strobe) |
| 5 | INMODE | 0=Count PHI2, 1=Count CNT positive edges |
| 6 | SPMODE | Serial port direction (1=output) |
| 7 | TODIN | TOD clock source (0=60Hz, 1=50Hz) |

### Control Register B ($0F - CRB)

| Bit | Name | Function |
|-----|------|----------|
| 0 | START | 1=Start timer, 0=Stop timer |
| 1 | PBON | 1=PB7 output reflects timer state |
| 2 | OUTMODE | 1=Toggle PB7 on underflow, 0=Pulse |
| 3 | RUNMODE | 1=One-shot, 0=Continuous |
| 4 | LOAD | 1=Force load latch into counter (strobe) |
| 5-6 | INMODE | Timer B input select (see below) |
| 7 | ALARM | 0=Write to TOD, 1=Write to Alarm |

**Timer B Input Modes (bits 5-6)**:
| Value | Mode |
|-------|------|
| 00 | Count PHI2 |
| 01 | Count CNT positive edges |
| 10 | Count Timer A underflows |
| 11 | Count Timer A underflows while CNT high |

---

## Interrupt Control Register (ICR - $0D)

### Reading ICR

Returns interrupt status and **clears all flags**:

| Bit | Name | Source |
|-----|------|--------|
| 0 | TA | Timer A underflow |
| 1 | TB | Timer B underflow |
| 2 | ALRM | TOD alarm match |
| 3 | SP | Serial port full/empty |
| 4 | FLG | FLAG pin negative edge |
| 5-6 | - | Unused (read as 0) |
| 7 | IR | 1 if any enabled interrupt occurred |

### Writing ICR

Sets or clears interrupt mask:

| Bit | Function |
|-----|----------|
| 0-4 | Mask bits for corresponding interrupt source |
| 5-6 | Unused |
| 7 | 0=Clear mask bits that are 1, 1=Set mask bits that are 1 |

**Example**: Write $81 to enable Timer A interrupt, write $01 to disable it.

### Interrupt Behavior

- CIA1 IRQ pin → CPU IRQ
- CIA2 IRQ pin → CPU NMI
- IRQ/NMI is active low, open drain
- Cleared by reading ICR

---

## Keyboard Matrix (CIA1)

The C64 keyboard is an 8x8 matrix scanned via CIA1:

1. Set DDRA = $FF (all outputs), DDRB = $00 (all inputs)
2. Write column select to PRA (active low)
3. Read row state from PRB (active low = key pressed)

### Matrix Layout (8 rows × 8 columns)

```
        C0      C1      C2      C3      C4      C5      C6      C7
R0      DEL     RETURN  CRSR-R  F7      F1      F3      F5      CRSR-D
R1      3       W       A       4       Z       S       E       LSHIFT
R2      5       R       D       6       C       F       T       X
R3      7       Y       G       8       B       H       U       V
R4      9       I       J       0       M       K       O       N
R5      +       P       L       -       .       :       @       ,
R6      £       *       ;       HOME    RSHIFT  =       ↑       /
R7      1       ←       CTRL    2       SPACE   C=      Q       STOP
```

### Scanning Algorithm

```
for col in 0..7:
    PRA = ~(1 << col)     // Select one column (active low)
    row_state = ~PRB       // Read rows (invert: 1 = pressed)
    // row_state bit N = 1 means key at (col, N) is pressed
```

---

## Time-of-Day Clock (Low Priority)

BCD-encoded real-time clock with:
- 1/10 seconds, seconds, minutes, hours (12/24 with AM/PM)
- Alarm with IRQ generation
- Runs from 50/60 Hz input (typically from AC mains)

**Not implemented for Phase 1** - can stub to return fixed values.

---

## Serial Shift Register (Low Priority)

8-bit shift register for serial communication. Clocked by Timer A or CNT pin.

**Not implemented for Phase 1** - can return 0 on read, ignore writes.

---

## Reset State

| Register | Reset Value | Notes |
|----------|-------------|-------|
| PRA | $FF | All high |
| PRB | $FF | All high |
| DDRA | $00 | All inputs |
| DDRB | $00 | All inputs |
| TA | $FFFF | Latch and counter |
| TB | $FFFF | Latch and counter |
| TOD | $01:00:00.0 | 1 AM |
| SDR | $00 | Empty |
| ICR | $00 | No interrupts pending, mask cleared |
| CRA | $00 | Timer stopped |
| CRB | $00 | Timer stopped |

---

## Phase 1 Simplifications

For initial text-mode implementation:

| Feature | Implementation |
|---------|----------------|
| Port A/B | Full implementation with DDR |
| Timer A | Countdown, underflow IRQ, continuous/one-shot |
| Timer B | Same as Timer A; input from PHI2 or Timer A underflow |
| ICR | Full read/write with mask and status |
| IRQ output | Active low, cleared on ICR read |
| TOD | Return fixed value (stub) |
| SDR | Return $00 (stub) |
| CNT pin | Not used (count PHI2 only) |
| PB6/PB7 timer output | Optional |

---

## Module Interfaces

### Cia6526 Module

**Inputs**:
- `addr[3:0]` — Register select (mirrored across 256 bytes)
- `dataIn[7:0]` — Write data
- `rw` — true=read, false=write
- `cs` — Chip select
- `phi2` — System clock (for timer countdown)
- `portAIn[7:0]` — External port A input
- `portBIn[7:0]` — External port B input
- `flag` — FLAG pin input (negative edge triggers IRQ)

**Outputs**:
- `dataOut[7:0]` — Read data
- `irq` — Interrupt request (active low)
- `portAOut[7:0]` — Port A output
- `portBOut[7:0]` — Port B output
- `portADir[7:0]` — Port A direction (1=output)
- `portBDir[7:0]` — Port B direction (1=output)

### Keyboard Interface (Host side)

For testbench, expose keyboard state as 64-bit matrix:
- `keyMatrix[63:0]` — Bit N = key at (N/8, N%8) pressed

---

## References

1. MOS 6526 Complex Interface Adapter (CIA) Datasheet
2. C64 Programmer's Reference Guide, Appendix M
3. "Mapping the Commodore 64" by Sheldon Leemon
4. C64 Wiki: https://www.c64-wiki.com/wiki/CIA

---

## License Notes

The CIA is a standard chip from the 1980s with well-documented behavior.
No IP licensing concerns for a clean-room implementation based on public datasheets.
