<!--
SPDX-License-Identifier: Apache-2.0
SPDX-FileCopyrightText: 2026 chisel-6502 contributors
-->

# Component Specification: CIA 6526

## Overview

The CIA 6526 module provides:
- Two 8-bit bidirectional I/O ports with DDR
- Two 16-bit countdown timers with interrupt generation
- Interrupt control register with mask and status

The C64 uses two instances:
- **CIA1** ($DC00): Keyboard scanning, IRQ to CPU
- **CIA2** ($DD00): VIC bank select, NMI to CPU

---

## Chisel IO Bundle

```scala
class Cia6526IO extends Bundle {
  // Bus interface
  val addr    = Input(UInt(4.W))      // Register select (bits 0-3, mirrored)
  val dataIn  = Input(UInt(8.W))      // Write data
  val dataOut = Output(UInt(8.W))     // Read data
  val rw      = Input(Bool())         // true=read, false=write
  val cs      = Input(Bool())         // Chip select
  
  // Port A interface
  val portAIn  = Input(UInt(8.W))     // External input pins
  val portAOut = Output(UInt(8.W))    // Output latch
  val portADir = Output(UInt(8.W))    // Direction (1=output)
  
  // Port B interface
  val portBIn  = Input(UInt(8.W))
  val portBOut = Output(UInt(8.W))
  val portBDir = Output(UInt(8.W))
  
  // Interrupt
  val irq      = Output(Bool())       // Active low interrupt request
  
  // Optional: FLAG pin (not implemented in Phase 1)
  val flag     = Input(Bool())        // FLAG pin input (not used initially)
}
```

---

## Register Map

| Offset | Name | R/W | Description |
|--------|------|-----|-------------|
| $0 | PRA | R/W | Port A Data (read: output bits from latch, input bits from pins) |
| $1 | PRB | R/W | Port B Data |
| $2 | DDRA | R/W | Data Direction A (1=output) |
| $3 | DDRB | R/W | Data Direction B |
| $4 | TALO | R/W | Timer A Low (read=counter, write=latch) |
| $5 | TAHI | R/W | Timer A High |
| $6 | TBLO | R/W | Timer B Low |
| $7 | TBHI | R/W | Timer B High |
| $8-$B | TOD | R/W | Time-of-Day (stub: return $00) |
| $C | SDR | R/W | Serial Data (stub: return $00) |
| $D | ICR | R/W | Interrupt Control Register |
| $E | CRA | R/W | Control Register A |
| $F | CRB | R/W | Control Register B |

---

## Timer Specification

### Timer Structure

```scala
class TimerState extends Bundle {
  val counter = UInt(16.W)    // Current countdown value
  val latch   = UInt(16.W)    // Reload value
  val running = Bool()        // Timer enabled
  val oneShot = Bool()        // One-shot vs continuous
  val output  = Bool()        // PB6/PB7 output state (toggle mode)
}
```

### Timer A Behavior

```
if (running && cs is active for any operation):
  if (counter == 0):
    set TA interrupt flag
    if (oneShot):
      running := false
    counter := latch
    toggle output (if toggle mode)
  else:
    counter := counter - 1
```

### Timer B Input Modes

| CRB[6:5] | Mode |
|----------|------|
| 00 | Count clock cycles |
| 01 | Count CNT edges (not implemented) |
| 10 | Count Timer A underflows |
| 11 | Count Timer A underflows gated by CNT (not implemented) |

---

## Control Registers

### CRA - Control Register A ($E)

| Bit | Name | Function |
|-----|------|----------|
| 0 | START | 1=Timer running |
| 1 | PBON | 1=PB6 shows timer output |
| 2 | OUTMODE | 0=pulse, 1=toggle on underflow |
| 3 | RUNMODE | 0=continuous, 1=one-shot |
| 4 | LOAD | Strobe: force reload from latch |
| 5 | INMODE | 0=count PHI2, 1=count CNT (not impl) |
| 6 | SPMODE | Serial port mode (not impl) |
| 7 | TODIN | TOD input freq (not impl) |

### CRB - Control Register B ($F)

| Bit | Name | Function |
|-----|------|----------|
| 0 | START | 1=Timer running |
| 1 | PBON | 1=PB7 shows timer output |
| 2 | OUTMODE | 0=pulse, 1=toggle on underflow |
| 3 | RUNMODE | 0=continuous, 1=one-shot |
| 4 | LOAD | Strobe: force reload from latch |
| 5-6 | INMODE | Timer B input select |
| 7 | ALARM | TOD alarm select (not impl) |

---

## Interrupt Control Register (ICR - $D)

### Read Behavior

Returns status and **clears all flags**:

| Bit | Source |
|-----|--------|
| 0 | Timer A underflow |
| 1 | Timer B underflow |
| 2 | TOD alarm (stub: always 0) |
| 3 | Serial port (stub: always 0) |
| 4 | FLAG pin (stub: always 0) |
| 5-6 | Unused (0) |
| 7 | IR: 1 if any masked interrupt active |

### Write Behavior

| Bit 7 | Effect on bits 0-4 |
|-------|--------------------|
| 0 | Clear mask bits that are 1 in write data |
| 1 | Set mask bits that are 1 in write data |

### IRQ Generation

```scala
val irqActive = (icrStatus & icrMask) =/= 0.U
io.irq := !irqActive  // Active low
```

---

## Port Read/Write Behavior

### Write to Port Data Register

```scala
when (write to PRA):
  portALatch := dataIn
```

### Read from Port Data Register

```scala
for each bit i:
  if (DDRA(i) == 1):  // Output
    result(i) := portALatch(i)
  else:               // Input
    result(i) := portAIn(i)
```

### Port Output

```scala
io.portAOut := portALatch
io.portADir := regDDRA
```

External logic combines: `pin = portADir(i) ? portAOut(i) : Z`

---

## Reset State

| Register | Value | Notes |
|----------|-------|-------|
| PRA | $FF | Output latch high |
| PRB | $FF | Output latch high |
| DDRA | $00 | All inputs |
| DDRB | $00 | All inputs |
| TA | $FFFF | Counter and latch |
| TB | $FFFF | Counter and latch |
| ICR status | $00 | No interrupts pending |
| ICR mask | $00 | All interrupts masked |
| CRA | $00 | Timer stopped |
| CRB | $00 | Timer stopped |

---

## Timing

- Register reads/writes: combinational within clock cycle
- Timer decrement: once per clock when enabled
- IRQ: asserted same cycle as underflow

---

## Integration: Keyboard Matrix (CIA1)

```
            CIA1
    +-------------------+
    |  PA0-7 (outputs)  |-----> Column select (active low)
    |  PB0-7 (inputs)   |<----- Row sense (active low)
    +-------------------+
```

Scanning:
1. Software sets DDRA=$FF (all outputs), DDRB=$00 (all inputs)
2. Software writes ~(1 << col) to PRA
3. Software reads PRB; bit N low = key at (col, row N) pressed

---

## Integration: VIC Bank Select (CIA2)

```scala
// In system integration:
val vicBank = ~io.cia2.portAOut(1, 0)  // Inverted bits 0-1
val vicBaseAddr = vicBank << 14        // 16KB bank: 0, $4000, $8000, $C000
```

---

## Phase 1 Simplifications

| Feature | Status |
|---------|--------|
| Port A/B | Full |
| DDR A/B | Full |
| Timer A | Full (PHI2 input only) |
| Timer B | Counts PHI2 or Timer A underflows |
| ICR read/write | Full |
| IRQ output | Full |
| TOD | Stub: read $00 |
| SDR | Stub: read $00 |
| CNT pin | Not connected |
| FLAG pin | Not connected |
| PB6/PB7 output | Optional |

---

## Acceptance Criteria

- [ ] Port read/write with DDR direction
- [ ] Timer A countdown and underflow IRQ
- [ ] Timer B countdown (PHI2 and Timer A modes)
- [ ] ICR mask/status read/write
- [ ] IRQ output active low when unmasked interrupt
- [ ] Reading ICR clears status
- [ ] CRA/CRB control timer operation
- [ ] Reset values match specification

---

## Risks and Gaps

| Risk | Impact | Mitigation |
|------|--------|------------|
| Timer edge cases | Medium | Test underflow at count=1 and latch reload |
| ICR read-clear timing | Low | Clear on read cycle end |
| Keyboard ghosting | Low | Not modeled (pass through) |
