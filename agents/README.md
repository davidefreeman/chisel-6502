# Warp Agent Framework

This directory contains role definitions for the Warp AI agent framework used to build the C64 text-mode emulator.

## How It Works

Each markdown file defines a specialized **agent role** with:
- Purpose and scope
- Required inputs
- Expected outputs
- Step-by-step workflow
- Acceptance criteria

When working with Warp AI, reference the appropriate agent file to activate that role:
> "Act as the RESEARCHER agent and investigate the CIA 6526"

## Agents

| Agent | File | Responsibility |
|-------|------|----------------|
| Researcher | `RESEARCHER.md` | Find datasheets, docs, existing HDL models |
| Architect | `ARCHITECT.md` | Design Chisel interfaces and system integration |
| Component Builder | `COMPONENT_BUILDER.md` | Implement Chisel modules per spec |
| Test Engineer | `TEST_ENGINEER.md` | Create SingleStepTest-style unit tests |
| Software Engineer | `SOFTWARE_ENGINEER.md` | Source/create firmware and ROMs |
| Integration Tester | `INTEGRATION_TESTER.md` | Verilator harness and end-to-end tests |

## Workflow Per Component

```
RESEARCHER → ARCHITECT → COMPONENT_BUILDER → TEST_ENGINEER → INTEGRATION_TESTER
     ↓            ↓              ↓                 ↓                  ↓
 RESEARCH.md   SPEC.md      *.scala           *Test.scala      tb_*.cpp
```

See `RUNBOOK.md` for detailed orchestration steps.

## Directory Structure

```
agents/
├── README.md              # This file
├── RUNBOOK.md             # Orchestration and sequencing
├── RESEARCHER.md          # Research role definition
├── ARCHITECT.md           # Architecture role definition
├── COMPONENT_BUILDER.md   # Implementation role definition
├── TEST_ENGINEER.md       # Testing role definition
├── SOFTWARE_ENGINEER.md   # Firmware role definition
└── INTEGRATION_TESTER.md  # Integration role definition
```

## Component Artifacts

Each component in `components/{name}/` should have:
- `RESEARCH.md` — Discovered documentation and references
- `SPEC.md` — Chisel interface definitions and behavior spec
- `src/main/scala/` — Implementation
- `test/` — Unit tests and test vectors
