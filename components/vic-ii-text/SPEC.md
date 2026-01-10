# Component Specification: VIC-II (Text Mode)

## Overview

Simplified VIC-II implementation for 40×25 text mode display. Provides register
interface compatible with C64 software, memory pointer calculation, and a
frame buffer interface for testbench rendering.

## Status

**COMPLETE** - Interface and behavior specified for Phase 1 text-mode.

---

## Chisel IO Bundle

```scala
class VicIITextIO extends Bundle {
  // CPU Register Interface
  val addr    = Input(UInt(6.W))      // Register address (0x00-0x2E, masked)
  val dataIn  = Input(UInt(8.W))      // CPU write data
  val dataOut = Output(UInt(8.W))     // CPU read data
  val cs      = Input(Bool())         // Chip select (directly access at $D000-$D3FF)
  val rw      = Input(Bool())         // Read/write (1 = read, 0 = write)

  // VIC Bank Selection (from CIA2)
  val vicBank = Input(UInt(2.W))      // Bank 0-3 (already inverted from CIA2 PA0-1)

  // Memory Read Interface (directly to memory system)
  val memAddr = Output(UInt(14.W))    // 14-bit address within 16KB VIC bank
  val memData = Input(UInt(8.W))      // Data from memory
  val memReq  = Output(Bool())        // Memory request strobe

  // Color RAM Interface
  val colorAddr = Output(UInt(10.W))  // Color RAM address (0-999)
  val colorData = Input(UInt(4.W))    // Color RAM data (4-bit)

  // Character ROM Interface (directly exposed for VIC access)
  val charRomAddr = Output(UInt(12.W)) // Character ROM address (4KB)
  val charRomData = Input(UInt(8.W))   // Character ROM data
  val charRomReq  = Output(Bool())     // Request character data

  // Frame Buffer Output (for testbench rendering)
  val frameReq   = Input(Bool())       // Request to latch current frame
  val frameReady = Output(Bool())      // Frame data is valid
  val cellRow    = Input(UInt(5.W))    // Row to read (0-24)
  val cellCol    = Input(UInt(6.W))    // Column to read (0-39)
  val cellChar   = Output(UInt(8.W))   // Character code at position
  val cellFg     = Output(UInt(4.W))   // Foreground color at position
  val cellBg     = Output(UInt(4.W))   // Background color (from BG0 register)
  val borderColor = Output(UInt(4.W))  // Border color register value

  // Display Enable
  val displayEn = Output(Bool())       // DEN bit from CR1 (D011 bit 4)
}
```

---

## Register Map

Registers occupy $D000-$D02E with 64-byte mirroring through $D3FF.
Address decoding: `regAddr = addr(5,0)` (i.e., `addr & 0x3F`).

### Implemented Registers

| Offset | Name   | R/W | Reset | Description                          |
|--------|--------|-----|-------|--------------------------------------|
| $11    | CR1    | R/W | $1B   | Control Register 1                   |
| $16    | CR2    | R/W | $C8   | Control Register 2                   |
| $18    | MEMPTR | R/W | $14   | Memory Pointers                      |
| $20    | BORDER | R/W | $0E   | Border Color (bits 3:0)              |
| $21    | BG0    | R/W | $06   | Background Color 0 (bits 3:0)        |

### Stubbed Registers (read/write storage, no function)

| Offset | Name    | Reset | Notes                              |
|--------|---------|-------|------------------------------------|
| $00-$10| Sprite  | $00   | Sprite X/Y positions, MSB          |
| $12    | RASTER  | $00   | Raster counter (reads 0)           |
| $13    | LPX     | $00   | Light pen X (reads 0)              |
| $14    | LPY     | $00   | Light pen Y (reads 0)              |
| $15    | ME      | $00   | Sprite enable                      |
| $17    | MYE     | $00   | Sprite Y expansion                 |
| $19    | IRR     | $00   | Interrupt register (reads 0)       |
| $1A    | IMR     | $00   | Interrupt mask                     |
| $1B-$1E| Sprite  | $00   | Priority, multicolor, expand X     |
| $1F    | SSC     | $00   | Sprite-sprite collision (reads 0)  |
| $22-$24| BG1-3   | $00   | Extra background colors            |
| $25-$2E| Sprite  | $00   | Sprite multicolor, colors          |

### Read Behavior

- Bits 7:4 of color registers ($20, $21, $22-$24, $25-$2E) return 1
- Bits 7:5 of CR2 ($16) return 1
- Bit 0 of MEMPTR ($18) returns 1
- All other unused bits return their stored value

---

## Register Details

### CR1 ($D011)

```
Bit 7: RC8     - Raster compare bit 8 (stored, ignored)
Bit 6: ECM     - Extended color mode (stored, must be 0 for text)
Bit 5: BMM     - Bitmap mode (stored, must be 0 for text)
Bit 4: DEN     - Display enable (active)
Bit 3: RSEL    - Row select (stored, ignored)
Bit 2:0: YSCROLL - Vertical scroll (stored, ignored)
```

### CR2 ($D016)

```
Bit 7:5: Unused - Always read as 1, writes ignored
Bit 4: MCM     - Multicolor mode (stored, must be 0)
Bit 3: CSEL    - Column select (stored, ignored)
Bit 2:0: XSCROLL - Horizontal scroll (stored, ignored)
```

### MEMPTR ($D018)

```
Bit 7:4: VM13-VM10 - Screen RAM base: base = VM * $0400
Bit 3:1: CB13-CB11 - Character base: base = CB * $0800
Bit 0: Unused      - Always reads as 1, writes ignored
```

**Screen RAM address calculation:**
```
screenBase = (vicBank << 14) | ((MEMPTR >> 4) << 10)
screenAddr(cell) = screenBase + cell  // cell = row*40 + col
```

**Character ROM/RAM address calculation:**
```
charBase = (vicBank << 14) | (((MEMPTR >> 1) & 7) << 11)
charAddr(char, row) = charBase + (char << 3) + row
```

**Character ROM substitution:**
When `vicBank` is 0 or 2, and charBase points to $1000-$1FFF within the bank,
the VIC sees Character ROM instead of RAM. This is handled by the memory
controller, not the VIC module itself.

---

## Behavioral Specification

### Frame Buffer Model

The VIC maintains an internal 40×25 frame buffer that can be read by the testbench:

1. **Scanout trigger**: When `frameReq` pulses high, the VIC begins scanning:
   - Reads 1000 bytes from Screen RAM sequentially
   - Reads 1000 nybbles from Color RAM in parallel
   - Stores character codes and colors in internal buffer
   - Sets `frameReady` high when complete

2. **Cell access**: While `frameReady` is high, testbench can read any cell:
   - Set `cellRow` (0-24) and `cellCol` (0-39)
   - Read `cellChar`, `cellFg`, `cellBg`, `borderColor`

3. **Frame invalidation**: Any write to MEMPTR, CR1, or VIC bank change
   clears `frameReady`, requiring a new scanout.

### Memory Access Pattern

During scanout (simplified, not cycle-accurate):
```
for row in 0..24:
  for col in 0..39:
    cell = row * 40 + col
    screenAddr = screenBase + cell
    char = mem[screenAddr]
    fg = colorRam[cell]
    buffer[row][col] = (char, fg, BG0)
```

Character glyph fetching (for potential pixel rendering) uses `charRomAddr`.

### Display Enable (DEN)

When DEN (CR1 bit 4) is 0:
- `displayEn` output is low
- Frame buffer can still be read, but represents "blanked" display
- Screen RAM scanning still occurs (for compatibility)

---

## Reset State

| Register | Reset Value | Notes                              |
|----------|-------------|------------------------------------|
| CR1      | $1B         | DEN=1, RSEL=1, YSCROLL=3           |
| CR2      | $C8         | Bits 7:6=1, CSEL=1, XSCROLL=0      |
| MEMPTR   | $14         | Screen=$0400, Char=$1000 (ROM)     |
| BORDER   | $0E         | Light blue                         |
| BG0      | $06         | Blue                               |
| Others   | $00         | All other registers zero           |

**Derived defaults:**
- Screen RAM at $0400 (bank 0)
- Character ROM at $1000 (bank 0, ROM visible)
- Display enabled, 25 rows, 40 columns

---

## Timing Assumptions

### Phase 1 Simplifications

- **No cycle-accurate timing**: Frame scanout is instantaneous relative to
  CPU operations. No badline delays or cycle stealing.

- **No raster interrupts**: IRR register always reads 0, no IRQ generation.

- **Synchronous updates**: Register changes take effect immediately for the
  next frame scanout.

- **Frame-on-demand**: Testbench triggers frame capture explicitly via
  `frameReq`. There is no continuous refresh.

### Clock Domain

Single system clock. All operations are synchronous to the main clock.

---

## Integration Notes

### Connection to Memory System

```
VicIIText.memAddr  --> MemoryController.vicAddr
VicIIText.memData  <-- MemoryController.vicData
VicIIText.memReq   --> MemoryController.vicReq
```

Memory controller must handle:
- Character ROM substitution at $1000-$1FFF and $9000-$9FFF
- VIC bank offset (vicBank * $4000 added to memAddr)

### Connection to CIA2

```
Cia2.portAOut(1:0) --> invert --> VicIIText.vicBank
```

The CIA2 port A bits 0-1 are active low:
- `vicBank = ~cia2.portAOut(1,0)`

### Connection to Color RAM

Color RAM is a separate 1KB (4-bit) memory:
```
VicIIText.colorAddr --> ColorRAM.addr
VicIIText.colorData <-- ColorRAM.data(3:0)
```

Color RAM is also CPU-accessible at $D800-$DBFF.

---

## State Machine (Scanout)

```
IDLE:
  frameReady = last_valid
  on frameReq rising:
    goto SCAN, cellIndex = 0

SCAN:
  memAddr = screenBase + cellIndex
  memReq = 1
  colorAddr = cellIndex
  on memData valid:
    buffer[cellIndex].char = memData
    buffer[cellIndex].fg = colorData
    buffer[cellIndex].bg = BG0
    cellIndex++
    if cellIndex == 1000:
      frameReady = 1
      goto IDLE
```

---

## Risks and Gaps

| Risk | Impact | Mitigation |
|------|--------|------------|
| Software expects raster IRQ | Medium | KERNAL uses CIA timers for cursor blink; most text software works without raster IRQ |
| Multicolor text used | Low | Return to research if needed; most text software uses hi-res mode |
| Screen scrolling | Low | YSCROLL/XSCROLL ignored; software may look odd but functions |
| Sprite collision checks | None | No sprites in Phase 1; collision registers read 0 |
| Bank switching during frame | Low | Frame invalidation handles this; no mid-frame effects |

---

## Test Vectors (for TEST_ENGINEER)

1. **Reset state**: Verify all registers at documented reset values
2. **Register read/write**: Write values, read back with unused bits = 1
3. **Memory pointer calculation**:
   - Write $14 to MEMPTR, verify screenBase = $0400, charBase = $1000
   - Write $38 to MEMPTR, verify screenBase = $0C00, charBase = $1800
4. **VIC bank effect**: Change vicBank, verify memAddr includes bank offset
5. **Frame scanout**: Trigger frameReq, verify frameReady and buffer contents
6. **Display enable**: Clear DEN, verify displayEn output goes low
7. **Color register masking**: Write $FF to BORDER, read back $FE (bit 0 ignored? or $FF with upper bits 1)

---

## File Locations

- Implementation: `src/main/scala/c64/VicIIText.scala`
- Tests: `src/test/scala/c64/VicIITextTest.scala`
