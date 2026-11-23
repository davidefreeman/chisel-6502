<!--
SPDX-License-Identifier: Apache-2.0
SPDX-FileCopyrightText: 2026 chisel-6502 contributors
-->

# Firmware

This directory contains ROM images required to boot the C64 text-mode emulator.

## Required Files

| File | Size | Address | Purpose |
|------|------|---------|---------|
| `kernal.bin` | 8192 bytes | $E000-$FFFF | Operating system |
| `basic.bin` | 8192 bytes | $A000-$BFFF | BASIC interpreter (optional) |
| `chargen.bin` | 4096 bytes | $D000-$DFFF | Character bitmaps |

## Sources

### Option 1: Open ROMs (Recommended)

The MEGA65 project provides open-source C64-compatible ROMs:
- Repository: https://github.com/MEGA65/open-roms
- License: GPL v3

### Option 2: Stub Firmware

For initial bring-up testing, minimal stub ROMs can be assembled from source in `stub/`.

### Option 3: Original ROMs

Original Commodore ROMs are copyrighted. If you own a C64, you may legally dump your own ROMs for personal use.

## Checksums

*To be filled in when ROMs are added.*

| File | SHA256 |
|------|--------|
| `kernal.bin` | TBD |
| `basic.bin` | TBD |
| `chargen.bin` | TBD |

## Building Stub ROMs

```bash
cd stub
make
```

This will create minimal test ROMs that:
1. Initialize the stack
2. Clear the screen
3. Print a test message
4. Enter an infinite loop

## Loading ROMs

The Verilator testbench loads ROM files automatically:

```cpp
loadRom("firmware/kernal.bin", 0xE000, 8192);
loadRom("firmware/chargen.bin", 0xD000, 4096);
```

## License

See individual ROM sources for licensing information.
