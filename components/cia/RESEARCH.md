# Component Research: CIA 6526

## Overview

The MOS 6526 Complex Interface Adapter provides I/O ports, timers, and interrupt generation. The C64 uses two CIAs:
- CIA1 at $DC00: keyboard matrix, joystick port 2
- CIA2 at $DD00: VIC bank select, serial bus, user port

## Status

**TODO:** Research in progress. See `agents/RESEARCHER.md` for workflow.

## Key Topics to Research

- [ ] Complete register map (16 registers)
- [ ] Timer A and B operation modes
- [ ] Port A/B data direction and data registers
- [ ] Interrupt control and mask registers
- [ ] Keyboard matrix wiring (CIA1)
- [ ] VIC bank select via CIA2 port A
- [ ] Time-of-day clock (low priority)
- [ ] Serial shift register (low priority)

## Register Map

*To be filled in during research phase.*

## Signals

*To be filled in during research phase.*

## References

*To be added during research phase.*

## License Notes

*To be documented for any referenced IP.*
