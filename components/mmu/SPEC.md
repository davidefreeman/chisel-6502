# Component Specification: MMU / PLA

## Overview

The MMU subsystem consists of two modules:

1. **CpuPort6510** — Emulates the 6510's built-in I/O port at $0000-$0001
2. **MmuPla** — Address decoder implementing C64 PLA banking logic

These work together to provide C64-compatible memory banking for our 6502 core.

---

## Module: CpuPort6510

Emulates the 6510 CPU's I/O port, intercepting accesses to $0000-$0001.

### Chisel IO Bundle

```scala
class CpuPort6510IO extends Bundle {
  // CPU bus interface
  val addr      = Input(UInt(16.W))
  val dataIn    = Input(UInt(8.W))    // Data from CPU (writes)
  val dataOut   = Output(UInt(8.W))   // Data to CPU (reads)
  val we        = Input(Bool())       // Write enable
  
  // Port active signal
  val portActive = Output(Bool())     // True when $0000-$0001 accessed
  
  // Banking control outputs
  val loram     = Output(Bool())      // BASIC ROM enable
  val hiram     = Output(Bool())      // KERNAL ROM enable
  val charen    = Output(Bool())      // Char ROM vs I/O select
  
  // Auxiliary port bits (not used in this project)
  val cassWrt   = Output(Bool())      // Cassette write (unconnected)
  val cassSense = Input(Bool())       // Cassette sense input
  val cassMotor = Output(Bool())      // Cassette motor (unconnected)
}
```

### Register Map

| Address | Register | Width | Reset | Description |
|---------|----------|-------|-------|-------------|
| $0000 | DDR | 8 | $2F | Data Direction Register |
| $0001 | PORT | 8 | $37 | Port Data Register |

### Behavioral Specification

#### Read $0000 (DDR)
```
return regDDR
```

#### Read $0001 (PORT)
```
result = 0
for bit in 0..7:
  if DDR[bit] == 1:        // Output
    result[bit] = PORT[bit]
  else:                    // Input
    result[bit] = external_line[bit]  // cassSense for bit 4
return result
```

For simplicity, input bits 0-2 read as their PORT values (pull-up behavior).

#### Write $0000 (DDR)
```
regDDR := dataIn
```

#### Write $0001 (PORT)
```
regPORT := dataIn
```

#### Banking Output Logic
```
loram  := PORT[0] | ~DDR[0]   // Output PORT bit, or high if input
hiram  := PORT[1] | ~DDR[1]
charen := PORT[2] | ~DDR[2]
```

### Reset State

| Register | Value | Notes |
|----------|-------|-------|
| DDR | $2F | Bits 0-3,5 output; bit 4 input |
| PORT | $37 | All banking bits high |

---

## Module: MmuPla

Address decoder implementing C64 PLA banking logic.

### Chisel IO Bundle

```scala
class MmuPlaIO extends Bundle {
  // CPU interface
  val addr      = Input(UInt(16.W))
  val rw        = Input(Bool())       // true=read, false=write
  
  // Banking control inputs (from CpuPort6510)
  val loram     = Input(Bool())
  val hiram     = Input(Bool())
  val charen    = Input(Bool())
  
  // Chip select outputs (active high)
  val ramCs     = Output(Bool())      // RAM selected
  val ramWe     = Output(Bool())      // RAM write enable
  val basicCs   = Output(Bool())      // BASIC ROM selected
  val kernalCs  = Output(Bool())      // KERNAL ROM selected
  val charCs    = Output(Bool())      // Character ROM selected
  val ioCs      = Output(Bool())      // I/O region selected
  
  // I/O sub-selects (active when ioCs is high)
  val vicCs     = Output(Bool())      // VIC-II $D000-$D3FF
  val sidCs     = Output(Bool())      // SID $D400-$D7FF
  val colorCs   = Output(Bool())      // Color RAM $D800-$DBFF
  val cia1Cs    = Output(Bool())      // CIA1 $DC00-$DCFF
  val cia2Cs    = Output(Bool())      // CIA2 $DD00-$DDFF
}
```

### Address Decode Logic

```scala
// Region detection based on address bits
val isZeroPage  = addr < 0x0100.U
val isBasicRom  = addr >= 0xA000.U && addr <= 0xBFFF.U
val isIoOrChar  = addr >= 0xD000.U && addr <= 0xDFFF.U
val isKernalRom = addr >= 0xE000.U

// I/O sub-regions (within $D000-$DFFF)
val isVicRange   = addr >= 0xD000.U && addr <= 0xD3FF.U
val isSidRange   = addr >= 0xD400.U && addr <= 0xD7FF.U
val isColorRange = addr >= 0xD800.U && addr <= 0xDBFF.U
val isCia1Range  = addr >= 0xDC00.U && addr <= 0xDCFF.U
val isCia2Range  = addr >= 0xDD00.U && addr <= 0xDDFF.U

// Banking logic (no cartridge: GAME=1, EXROM=1)
val basicVisible  = loram && hiram
val kernalVisible = hiram
val ioVisible     = hiram && charen    // LORAM irrelevant for $D000 region
val charVisible   = hiram && !charen

// Chip selects
basicCs  := isBasicRom && basicVisible && rw
kernalCs := isKernalRom && kernalVisible && rw
charCs   := isIoOrChar && charVisible && rw
ioCs     := isIoOrChar && ioVisible

// I/O sub-selects
vicCs   := ioCs && isVicRange
sidCs   := ioCs && isSidRange
colorCs := ioCs && isColorRange
cia1Cs  := ioCs && isCia1Range
cia2Cs  := ioCs && isCia2Range

// RAM: selected when no ROM/IO selected, or always for writes
ramCs := !basicCs && !kernalCs && !charCs && !ioCs
ramWe := !rw  // Writes always go to RAM
```

### Banking Truth Table Implementation

| Condition | BASIC | KERNAL | I/O | CHAR |
|-----------|:-----:|:------:|:---:|:----:|
| HIRAM=0 | ✗ | ✗ | ✗ | ✗ |
| HIRAM=1, LORAM=0, CHAREN=1 | ✗ | ✓ | ✓ | ✗ |
| HIRAM=1, LORAM=0, CHAREN=0 | ✗ | ✓ | ✗ | ✓ |
| HIRAM=1, LORAM=1, CHAREN=1 | ✓ | ✓ | ✓ | ✗ |
| HIRAM=1, LORAM=1, CHAREN=0 | ✓ | ✓ | ✗ | ✓ |

### Critical Behavior: Write-Through

**All CPU writes go to RAM**, regardless of what is mapped for reads:
```scala
ramWe := !rw  // Write enable independent of banking
```

This allows software to write to RAM underlying ROM regions.

---

## Integration

### System Wiring

```
              ┌──────────────┐
              │     CPU      │
              │    6502      │
              └──────┬───────┘
                     │ addr, data, rw, we
                     ▼
              ┌──────────────┐
              │ CpuPort6510  │◄── cassSense
              └──────┬───────┘
                     │ loram, hiram, charen
                     │ portActive, dataOut
                     ▼
              ┌──────────────┐
              │   MmuPla     │
              └──────┬───────┘
                     │ chip selects
        ┌────────────┼────────────┬─────────────┐
        ▼            ▼            ▼             ▼
     ┌─────┐    ┌────────┐   ┌────────┐    ┌────────┐
     │ RAM │    │  ROMs  │   │  I/O   │    │ Color  │
     │64KB │    │B/K/Chr │   │VIC/CIA │    │  RAM   │
     └─────┘    └────────┘   └────────┘    └────────┘
```

### Data Path Muxing

The Memory Controller (separate module) uses chip selects to mux read data:

```scala
val readData = MuxCase(ramData, Seq(
  portActive -> port6510Data,
  basicCs    -> basicRomData,
  kernalCs   -> kernalRomData,
  charCs     -> charRomData,
  vicCs      -> vicData,
  sidCs      -> 0.U,  // Stub
  colorCs    -> colorRamData,
  cia1Cs     -> cia1Data,
  cia2Cs     -> cia2Data
))
```

---

## Timing

- All decoding is combinational (no pipeline delay)
- Bank switching takes effect immediately on write to $0001
- Chip selects valid same cycle as address

---

## Reset State

| Module | State |
|--------|-------|
| CpuPort6510 | DDR=$2F, PORT=$37 |
| MmuPla | No state (combinational) |

---

## Risks and Gaps

| Risk | Impact | Mitigation |
|------|--------|------------|
| DDR input behavior complex | Low | Simplify: treat bits 0-2 as always output |
| $DE00-$DFFF unimplemented | Low | Return $FF (open bus) |
| VIC bank select in CIA2 | Medium | Document as integration dependency |

---

## Acceptance Criteria

- [ ] CpuPort6510 correctly handles DDR/PORT read/write
- [ ] Banking outputs match truth table
- [ ] MmuPla generates correct chip selects for all regions
- [ ] Write-through to RAM works regardless of banking
- [ ] I/O sub-selects correctly decode $D000-$DFFF
- [ ] Reset state matches documented values
- [ ] Integrates cleanly with existing SystemBus pattern
