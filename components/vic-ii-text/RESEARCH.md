# Component Research: VIC-II (Text Mode)

## Overview

The MOS 6569 (PAL) / 6567 (NTSC) Video Interface Chip handles all video generation. For this project, we implement only the text-mode subset (40×25 characters with color).

## Status

**TODO:** Research in progress. See `agents/RESEARCHER.md` for workflow.

## Key Topics to Research

- [ ] Text mode register subset (D011, D016, D018, D020, D021)
- [ ] Screen RAM pointer calculation from D018
- [ ] Character ROM/RAM pointer calculation
- [ ] VIC bank selection (via CIA2 port A)
- [ ] Color RAM access ($D800-$DBFF)
- [ ] Character cell format and color mapping
- [ ] Register mirroring behavior ($D000-$D3FF)

## Excluded Features (Phase 1)

- Bitmap graphics modes
- Sprites
- Raster interrupts
- Badline cycle stealing
- Border logic (beyond color register)
- Light pen

## Register Map

*To be filled in during research phase.*

## Signals

*To be filled in during research phase.*

## References

*To be added during research phase.*

## License Notes

*To be documented for any referenced IP.*
