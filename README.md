# Chisel 6502

A hardware implementation of the MOS Technology 6502 8-bit microprocessor written in [Chisel](https://www.chisel-lang.org/).

## Overview

This project implements a cycle-accurate clone of the 6502 CPU in Chisel HDL, which can be synthesized to Verilog for FPGA deployment or simulation.

### Features

- 8-bit data bus, 16-bit address bus (64KB address space)
- All 6502 registers: A, X, Y, SP, PC, and Status (P)
- ALU with full arithmetic and logic operations
- BCD (Binary Coded Decimal) mode support
- All standard addressing modes
- Interrupt support (IRQ, NMI)

## Project Structure

```
chisel-6502/
├── build.sbt                 # SBT build configuration
├── project/
│   ├── build.properties      # SBT version
│   └── plugins.sbt           # SBT plugins
├── src/
│   ├── main/scala/cpu6502/
│   │   ├── CPU6502.scala     # Main CPU module
│   │   ├── ALU.scala         # Arithmetic Logic Unit
│   │   └── InstructionDecoder.scala
│   └── test/scala/cpu6502/
│       └── CPU6502Test.scala # Unit tests
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

This is a work-in-progress implementation. Current status:

- [x] Basic CPU structure
- [x] ALU with all operations
- [x] Instruction decoder (partial)
- [x] Reset sequence
- [ ] Full instruction execution
- [ ] All addressing modes
- [ ] Interrupt handling
- [ ] Cycle-accurate timing
- [ ] Illegal opcode support

## Testing

Run the test suite:

```bash
sbt test
```

## References

- [6502.org](http://www.6502.org/) - Comprehensive 6502 resource
- [Chisel Documentation](https://www.chisel-lang.org/docs/)
- [NMOS 6502 Opcodes](http://www.6502.org/tutorials/6502opcodes.html)

## License

MIT License
