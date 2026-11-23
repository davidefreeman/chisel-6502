<!--
SPDX-License-Identifier: Apache-2.0
SPDX-FileCopyrightText: 2026 chisel-6502 contributors
-->

# Chisel 6502

A hardware implementation of the MOS Technology 6502 8-bit microprocessor written in [Chisel](https://www.chisel-lang.org/), targeting NES (2A03) compatibility.

## Overview

This project implements a functionally-correct 6502 CPU in Chisel HDL, validated against the [SingleStepTests](https://github.com/SingleStepTests/65x02) test suite. The design can be synthesized to Verilog for FPGA deployment or simulation.

**Status**: 150 of 151 official NES 6502 opcodes validated (99%)

### Features

- 8-bit data bus, 16-bit address bus (64KB address space)
- All 6502 registers: A, X, Y, SP, PC, and Status (P)
- ALU with full arithmetic and logic operations
- All 13 addressing modes (including indirect modes)
- All official instruction types: loads, stores, ALU ops, branches, jumps, stack ops, RMW
- JSR/RTS subroutine support
- BRK/RTI interrupt handling
- Testable design with state injection for single-instruction verification

**Note**: BCD mode is intentionally not implemented (NES 2A03 compatibility).

## Documentation

- **[docs/OVERVIEW.md](docs/OVERVIEW.md)** - Technical overview for engineers new to CPU design
- **[docs/ARCHITECTURE.md](docs/ARCHITECTURE.md)** - Detailed architecture and design rationale
- **[WARP.md](WARP.md)** - AI assistant guidance (build commands, test procedures)

## Project Structure

```
chisel-6502/
├── build.sbt                 # SBT build configuration
├── src/
│   ├── main/scala/cpu6502/
│   │   ├── CPU6502Testable.scala    # Main CPU with state machine (~780 lines)
│   │   ├── ALU.scala                # Arithmetic Logic Unit (~200 lines)
│   │   └── InstructionDecoder.scala # Opcode decoder (~500 lines)
│   └── test/
│       ├── scala/cpu6502/
│       │   └── SingleStepTest.scala # 150 parallel test classes
│       └── resources/singlestep/
│           └── *.json               # 150 test vector files
├── docs/
│   ├── OVERVIEW.md           # Technical overview
│   └── ARCHITECTURE.md       # Detailed architecture
└── README.md
```

## Requirements

- JDK 11 or later
- [SBT](https://www.scala-sbt.org/) 1.9+

## Building

```bash
# Compile the project
sbt compile

# Run tests
sbt test

# Generate Verilog
sbt "runMain cpu6502.CPU6502Main"
```

Generated Verilog will be output to the `generated/` directory.

## 6502 Architecture

### Registers

| Register | Size | Description |
|----------|------|-------------|
| A | 8-bit | Accumulator |
| X | 8-bit | Index register X |
| Y | 8-bit | Index register Y |
| SP | 8-bit | Stack pointer (page 1: $0100-$01FF) |
| PC | 16-bit | Program counter |
| P | 8-bit | Processor status (NV-BDIZC) |

### Status Flags (P Register)

| Bit | Flag | Description |
|-----|------|-------------|
| 7 | N | Negative |
| 6 | V | Overflow |
| 5 | - | (Unused, always 1) |
| 4 | B | Break |
| 3 | D | Decimal mode |
| 2 | I | Interrupt disable |
| 1 | Z | Zero |
| 0 | C | Carry |

### Addressing Modes

- Implied
- Immediate (`#$nn`)
- Zero Page (`$nn`)
- Zero Page,X (`$nn,X`)
- Zero Page,Y (`$nn,Y`)
- Absolute (`$nnnn`)
- Absolute,X (`$nnnn,X`)
- Absolute,Y (`$nnnn,Y`)
- Indirect (`($nnnn)`)
- Indexed Indirect (`($nn,X)`)
- Indirect Indexed (`($nn),Y`)
- Relative (for branches)

## Development Status

**NES 6502 Implementation Complete** (150/151 opcodes)

- [x] All official instructions (56 unique mnemonics)
- [x] All 13 addressing modes
- [x] Read-Modify-Write instructions (INC, DEC, shifts on memory)
- [x] Indirect addressing ((zp,X) and (zp),Y)
- [x] Subroutines (JSR, RTS)
- [x] Interrupts (BRK, RTI)
- [x] JMP indirect (with page-boundary bug for compatibility)
- [x] Stack operations (PHA, PLA, PHP, PLP)
- [x] Validated against SingleStepTests (1000+ tests per opcode)
- [ ] Illegal/undocumented opcodes (not planned)
- [ ] BCD mode (intentionally omitted for NES compatibility)

## Testing

Tests use the [SingleStepTests](https://github.com/SingleStepTests/65x02) framework with 10,000 test vectors per opcode.

```bash
# Quick validation (10 tests per opcode, ~30 seconds)
sbt -DtestCount=10 "testOnly cpu6502.Test_*"

# Standard validation (100 tests per opcode, ~1 minute)
sbt -DtestCount=100 "testOnly cpu6502.Test_*"

# Full validation (1000 tests per opcode, ~2 minutes)
sbt -DtestCount=1000 "testOnly cpu6502.Test_*"

# Test specific instruction
sbt -DtestCount=1000 "testOnly cpu6502.Test_LDA_abs"

# Test addressing mode group
sbt -DtestCount=100 "testOnly cpu6502.Test_*_zp"    # zero page
sbt -DtestCount=100 "testOnly cpu6502.Test_*_indx"  # (zp,X)
```

## References

- [6502.org](http://www.6502.org/) - Comprehensive 6502 resource
- [Chisel Documentation](https://www.chisel-lang.org/docs/)
- [NMOS 6502 Opcodes](http://www.6502.org/tutorials/6502opcodes.html)

## License

Project-owned HDL, software, build files, and documentation are licensed under
the [Apache License, Version 2.0](LICENSE) (`Apache-2.0`).
Copyright (c) 2026 chisel-6502 contributors, for copyrightable contributions.

Apache-2.0 is a permissive license with an express contributor patent grant; it
does not require publishing modifications. It applies to the project-owned
design sources and their generated forms, without replacing licenses on
third-party dependencies or tool runtime code.

### Third-party material

- SingleStepTests vectors in `src/test/resources/singlestep/` and `8d.json`
  originate from [SingleStepTests/65x02](https://github.com/SingleStepTests/65x02)
  and retain their MIT license. See
  [the bundled upstream license](src/test/resources/singlestep/LICENSE).
- Firmware and ROM images retain their respective owners' licenses; see
  [firmware/README.md](firmware/README.md). They are not covered by this project's
  Apache-2.0 license.
- Dependencies and third-party code included in generated simulator artifacts
  retain their upstream licenses and notices. Project source headers are not
  intended to relicense those materials.

### AI assistance

AI agents have been used in developing this project. The license applies to
copyrightable contributions to the extent the contributors have rights to
license them; it does not assert copyright in material that is not eligible
for copyright protection.
