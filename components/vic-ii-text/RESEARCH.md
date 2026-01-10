# Component Research: VIC-II (Text Mode)

## Overview

The MOS 6569 (PAL) / 6567 (NTSC) Video Interface Chip II handles all video generation
for the Commodore 64. For this project, we implement only the **text-mode subset**:
40×25 characters with foreground color per cell and configurable background/border.

## Status

**COMPLETE** - Research covers text-mode registers, memory pointers, color handling,
and VIC bank selection. Phase 1 simplifications documented.

## Key Topics Researched

- [x] Text mode register subset (D011, D016, D018, D020, D021)
- [x] Screen RAM pointer calculation from D018
- [x] Character ROM/RAM pointer calculation
- [x] VIC bank selection (via CIA2 port A)
- [x] Color RAM access ($D800-$DBFF)
- [x] Character cell format and color mapping
- [x] Register mirroring behavior ($D000-$D3FF)

---

## VIC-II Address Space

The VIC-II occupies I/O addresses **$D000-$D3FF** (1024 bytes), but only uses 47
registers at $D000-$D02E. The remaining addresses mirror these 47 registers with
a period of 64 bytes (i.e., $D000 = $D040 = $D080 = ...).

For Phase 1, we implement a minimal register set focused on text mode.

---

## Register Map (Text Mode Subset)

| Address | Name   | Bits    | Description                                    |
|---------|--------|---------|------------------------------------------------|
| $D011   | CR1    | 7:0     | Control Register 1                             |
| $D016   | CR2    | 7:0     | Control Register 2                             |
| $D018   | MEMPTR | 7:0     | Memory Pointers                                |
| $D020   | BORDER | 3:0     | Border Color                                   |
| $D021   | BG0    | 3:0     | Background Color 0                             |

### Additional Registers (stubbed for compatibility)

| Address | Name     | Description                          | Phase 1 Behavior  |
|---------|----------|--------------------------------------|-------------------|
| $D000   | M0X      | Sprite 0 X position                  | Read/write, ignored |
| $D001   | M0Y      | Sprite 0 Y position                  | Read/write, ignored |
| ...     | ...      | Sprite registers $D000-$D010         | Stubbed           |
| $D012   | RASTER   | Raster counter                       | Returns 0         |
| $D013   | LPX      | Light pen X                          | Returns 0         |
| $D014   | LPY      | Light pen Y                          | Returns 0         |
| $D015   | ME       | Sprite enable                        | Read/write, ignored |
| $D017   | MYE      | Sprite Y expansion                   | Read/write, ignored |
| $D019   | IRR      | Interrupt request register           | Returns 0         |
| $D01A   | IMR      | Interrupt mask register              | Read/write, ignored |
| $D01B-$D02E | ...  | Sprite priority, multicolor, etc.    | Stubbed           |

---

## Register Details

### $D011 - Control Register 1 (CR1)

```
Bit 7: RC8    - Raster compare bit 8 (ignored Phase 1)
Bit 6: ECM    - Extended color mode (0 = standard text)
Bit 5: BMM    - Bitmap mode (0 = character mode)
Bit 4: DEN    - Display enable (1 = screen on)
Bit 3: RSEL   - Row select (0 = 24 rows, 1 = 25 rows)
Bit 2:0: YSCROLL - Vertical scroll (0-7 pixels)
```

**Phase 1 behavior:**
- ECM and BMM must be 0 for standard text mode
- DEN controls whether display is active
- RSEL defaults to 1 (25 rows)
- YSCROLL ignored (no smooth scroll)

**Reset value:** $1B (DEN=1, RSEL=1, YSCROLL=3)

### $D016 - Control Register 2 (CR2)

```
Bit 7:5: Unused (return 1 on read)
Bit 4: MCM    - Multicolor mode (0 = hi-res text)
Bit 3: CSEL   - Column select (0 = 38 columns, 1 = 40 columns)
Bit 2:0: XSCROLL - Horizontal scroll (0-7 pixels)
```

**Phase 1 behavior:**
- MCM must be 0 for standard text mode
- CSEL defaults to 1 (40 columns)
- XSCROLL ignored (no smooth scroll)
- Bits 7:5 always read as 1

**Reset value:** $C8 (bits 7:6 = 11, CSEL=1)

### $D018 - Memory Pointers (MEMPTR)

```
Bit 7:4: VM13-VM10 - Video matrix (screen RAM) base address
Bit 3:1: CB13-CB11 - Character base address
Bit 0: Unused (returns 1 on read)
```

**Screen RAM calculation:**
```
Screen Base = VIC Bank Base + (VM13:VM10 × $0400)
            = VIC Bank Base + ((D018 >> 4) × 1024)
```

**Character ROM/RAM calculation:**
```
Char Base = VIC Bank Base + (CB13:CB11 × $0800)
          = VIC Bank Base + (((D018 >> 1) & 7) × 2048)
```

**Reset value:** $14
- VM = $04 → Screen at bank + $0400 (default $0400 in bank 0)
- CB = $02 → Chars at bank + $1000 (Character ROM image)

### $D020 - Border Color

```
Bit 7:4: Unused (return 1 on read)
Bit 3:0: Border color (0-15)
```

**Reset value:** $0E (light blue)

### $D021 - Background Color 0

```
Bit 7:4: Unused (return 1 on read)
Bit 3:0: Background color 0 (0-15)
```

**Reset value:** $06 (blue)

---

## VIC Bank Selection (CIA2)

The VIC-II can only address 16 KB of memory at a time. The active bank is
selected via **CIA2 Port A bits 0-1** (directly accent at $DD00):

| PA1:PA0 | Bank | VIC Address Range | CPU Address Range |
|---------|------|-------------------|-------------------|
| 11 (3)  | 0    | $0000-$3FFF       | $0000-$3FFF       |
| 10 (2)  | 1    | $4000-$7FFF       | $4000-$7FFF       |
| 01 (1)  | 2    | $8000-$BFFF       | $8000-$BFFF       |
| 00 (0)  | 3    | $C000-$FFFF       | $C000-$FFFF       |

**IMPORTANT:** The bits are **active low / inverted**:
- Writing $03 to $DD00 selects bank 0 (bits inverted → 00 → bank 0)
- Writing $00 to $DD00 selects bank 3 (bits inverted → 11 → bank 3)

**Character ROM visibility:**
The VIC-II sees Character ROM at VIC addresses $1000-$1FFF and $9000-$9FFF,
regardless of CHAREN setting. This maps to:
- Bank 0: CPU $1000-$1FFF (Char ROM instead of RAM)
- Bank 2: CPU $9000-$9FFF (Char ROM instead of RAM)

Banks 1 and 3 have no Character ROM—VIC sees RAM at all addresses.

---

## Screen RAM and Color RAM

### Screen RAM (Video Matrix)

Screen RAM holds 1000 bytes (40×25) of character codes. Each byte is a character
index (0-255) into the character set.

**Default location:** $0400-$07E7 (in bank 0 with default D018)

**Calculation:**
```
Screen Address = VIC Bank + ((D018 >> 4) × $0400)
```

### Color RAM

Color RAM is **always** at $D800-$DBE7, independent of VIC bank. It provides
the foreground color for each character cell.

**Structure:**
- 1000 nybbles (4-bit values), stored as bytes with upper nybble undefined
- Read returns upper nybble as random/undefined (we return $F)
- Only bits 3:0 are significant

**Access:**
- CPU reads/writes at $D800-$DBFF
- VIC reads in parallel with screen RAM fetches

---

## Character Set Format

### Character ROM

The C64 Character ROM contains 512 characters (two sets of 256):
- Characters 0-255: Upper/graphics set (active by default)
- Characters 256-511: Lower/upper case set (selected via $D018)

Each character is 8 bytes (8×8 pixels), stored sequentially:
```
Character N offset = N × 8
Row R of character N = ROM[N × 8 + R]
```

Bit 7 = leftmost pixel, Bit 0 = rightmost pixel.
1 = foreground color, 0 = background color.

### Character Base Selection

From $D018 bits 3:1 (CB13:CB11):

| CB  | VIC Address | Notes                               |
|-----|-------------|-------------------------------------|
| 000 | $0000       | RAM (if in bank 1 or 3)             |
| 001 | $0800       | RAM                                 |
| 010 | $1000       | Character ROM (banks 0, 2) or RAM   |
| 011 | $1800       | Character ROM (banks 0, 2) or RAM   |
| 100 | $2000       | RAM                                 |
| 101 | $2800       | RAM                                 |
| 110 | $3000       | RAM                                 |
| 111 | $3800       | RAM                                 |

---

## Display Generation (Simplified Model)

For Phase 1, we use a **scanout buffer model** rather than cycle-accurate timing:

1. On each "frame tick" (simulated):
   - Read 1000 bytes from Screen RAM
   - Read 1000 nybbles from Color RAM
   - For each cell (row, col):
     - Fetch 8-byte character glyph from Character ROM/RAM
     - Store (glyph, fg_color, bg_color) in frame buffer

2. Frame buffer exposed to testbench for terminal rendering

**No timing emulation:**
- No badlines or cycle stealing
- No raster interrupts
- No smooth scrolling
- Border is just a color value, not rendered

---

## Color Palette

The VIC-II has a fixed 16-color palette:

| Index | Name         | Hex (approx) |
|-------|--------------|-------------|
| 0     | Black        | #000000     |
| 1     | White        | #FFFFFF     |
| 2     | Red          | #880000     |
| 3     | Cyan         | #AAFFEE     |
| 4     | Purple       | #CC44CC     |
| 5     | Green        | #00CC55     |
| 6     | Blue         | #0000AA     |
| 7     | Yellow       | #EEEE77     |
| 8     | Orange       | #DD8855     |
| 9     | Brown        | #664400     |
| 10    | Light Red    | #FF7777     |
| 11    | Dark Grey    | #333333     |
| 12    | Grey         | #777777     |
| 13    | Light Green  | #AAFF66     |
| 14    | Light Blue   | #0088FF     |
| 15    | Light Grey   | #BBBBBB     |

---

## Phase 1 Simplifications

| Feature              | Real VIC-II          | Phase 1 Implementation     |
|----------------------|----------------------|----------------------------|
| Raster timing        | Cycle-accurate       | Frame-based scanout        |
| Sprites              | 8 hardware sprites   | Stubbed (registers exist)  |
| Bitmap mode          | 320×200 / 160×200    | Not supported              |
| Multicolor text      | 160×200 effective    | Not supported              |
| Extended color mode  | 4 background colors  | Not supported              |
| Smooth scroll        | Pixel-level scroll   | Ignored                    |
| Badlines             | Cycle stealing       | None                       |
| Raster IRQ           | Scanline interrupts  | Returns 0, no IRQ          |
| Light pen            | Input coordinates    | Returns 0                  |
| Border rendering     | Visible border area  | Color register only        |

---

## Signals Summary

### Directly Implemented

| Signal      | Width | Dir | Description                        |
|-------------|-------|-----|------------------------------------|
| addr        | 6     | In  | Register address ($00-$2E)         |
| dataIn      | 8     | In  | CPU write data                     |
| dataOut     | 8     | Out | CPU read data                      |
| cs          | 1     | In  | Chip select                        |
| rw          | 1     | In  | Read/write (1=read)                |
| vicBank     | 2     | In  | VIC bank from CIA2 (inverted PA0-1)|
| charRomData | 8     | In  | Character ROM read data            |
| charRomAddr | 12    | Out | Character ROM address (within 4KB) |
| screenAddr  | 10    | Out | Screen RAM read address            |
| screenData  | 8     | In  | Screen RAM read data               |
| colorData   | 4     | In  | Color RAM read data                |

### Frame Buffer Interface

| Signal      | Width | Dir | Description                        |
|-------------|-------|-----|------------------------------------|
| frameReq    | 1     | In  | Request frame scanout              |
| frameReady  | 1     | Out | Frame buffer valid                 |
| cellRow     | 5     | In  | Cell row to read (0-24)            |
| cellCol     | 6     | In  | Cell column to read (0-39)         |
| cellChar    | 8     | Out | Character code at cell             |
| cellFg      | 4     | Out | Foreground color at cell           |
| cellBg      | 4     | Out | Background color (from BG0)        |

---

## References

1. **"The MOS 6567/6569 Video Controller (VIC-II)"** - Christian Bauer
   - Comprehensive technical reference
   - http://www.zimmers.net/cbmpics/cbm/c64/vic-ii.txt

2. **C64 Programmer's Reference Guide** - Commodore
   - Chapter 3: Programming Graphics
   - Appendix O: Memory Maps

3. **"VIC-II for Beginners"** - Codebase64
   - Accessible overview of VIC-II programming
   - https://codebase64.org/doku.php?id=base:vic

4. **VICE Emulator Source** - vice-emu.sourceforge.io
   - Reference implementation (GPL)
   - src/vicii/ directory

---

## License Notes

No external IP incorporated. Implementation based on publicly documented
behavior from datasheets and reference guides.
