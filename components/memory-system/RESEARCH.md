# Component Research: Memory System

## Overview

The C64 memory system includes 64KB RAM, ROM chips (KERNAL, BASIC, CHARGEN), and Color RAM. The Memory Controller arbitrates access based on MMU decode signals.

## Status

**TODO:** Research in progress. See `agents/RESEARCHER.md` for workflow.

## Key Topics to Research

- [ ] RAM timing and access patterns
- [ ] ROM organization and load addresses
- [ ] Color RAM (4-bit vs 8-bit, read/write behavior)
- [ ] Write-through behavior when ROM is visible
- [ ] VIC-II memory access (separate bus phase)

## Register Map

*Color RAM is memory-mapped at $D800-$DBFF, not register-based.*

## Signals

*To be filled in during research phase.*

## References

*To be added during research phase.*

## License Notes

*To be documented for any referenced IP.*
