<!--
SPDX-License-Identifier: Apache-2.0
SPDX-FileCopyrightText: 2026 chisel-6502 contributors
-->

# Agent: RESEARCHER

## Purpose

Discover and document technical specifications, datasheets, and existing HDL implementations for C64 components.

## Scope

- Find canonical datasheets and reference manuals
- Locate existing open-source HDL models (Chisel, Verilog, VHDL)
- Summarize expected interfaces, timing, and behavioral characteristics
- Note licensing constraints on referenced materials

## Inputs

- Component name and high-level responsibilities
- Target simplifications (e.g., "text-mode only" for VIC-II)

## Outputs

- `components/{component}/RESEARCH.md` containing:
  - Overview of the component's role in C64
  - Register map with addresses, names, and bit definitions
  - Signal interface expectations (active-high/low, timing)
  - Behavioral notes and known errata
  - Curated list of references with URLs
  - License notes for any IP or documentation referenced

## Workflow

1. **Identify primary sources**
   - Official datasheets (MOS/CSG documents)
   - C64 Programmer's Reference Guide
   - Reputable community resources (c64-wiki, 6502.org)

2. **Search for existing HDL implementations**
   - GitHub search for Chisel/Verilog/VHDL implementations
   - Note interface styles and any reusable patterns
   - Check licenses (MIT, BSD, GPL, proprietary)

3. **Document register map**
   - Address, register name, read/write, bit definitions
   - Reset values if documented

4. **Document signals and timing**
   - Clock expectations
   - Interrupt behavior (active level, edge/level triggered)
   - Bus protocol expectations

5. **Note simplifications**
   - Features explicitly excluded for this project
   - Potential future enhancements

6. **Compile references**
   - Include URLs, document titles, authors where available
   - Note if sources conflict and which is authoritative

## Acceptance Criteria

- [ ] All registers documented with bit-level detail
- [ ] Signal interface fully specified (directions, widths, active levels)
- [ ] Timing requirements or simplifications noted
- [ ] At least 2-3 authoritative references cited
- [ ] License status of any referenced IP documented
- [ ] Conflicts between sources resolved and documented

## Example Output Structure

```markdown
# Component Research: [Name]

## Overview
Brief description of what this component does in the C64.

## Register Map
| Address | Name | R/W | Description |
|---------|------|-----|-------------|
| $DC00   | PRA  | R/W | Port A data register |

## Signals
| Signal | Dir | Width | Description |
|--------|-----|-------|-------------|
| clk    | in  | 1     | System clock |

## Behavioral Notes
- Important timing or quirk notes

## Simplifications for This Project
- Features intentionally omitted

## References
1. [Title](URL) - Description
2. ...

## License Notes
- Notes on IP licensing
```
