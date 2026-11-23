<!--
SPDX-License-Identifier: Apache-2.0
SPDX-FileCopyrightText: 2026 chisel-6502 contributors
-->

# Agent Runbook

Orchestration guide for building C64 text-mode emulator components.

## Branching Strategy

Each component uses its own branch for isolation:

```
master                          # Original 6502 CPU
└── feature/c64-text            # Integration branch for C64 work
    ├── component/mmu           # MMU/PLA development
    ├── component/memory-system # Memory controller development
    ├── component/cia           # CIA 6526 development
    └── component/vic-ii-text   # VIC-II text mode development
```

### Branch Lifecycle

1. **Create:** `git checkout -b component/{name} feature/c64-text`
2. **Work:** RESEARCHER → ARCHITECT → BUILDER → TESTER commit to branch
3. **Validate:** ARCHITECT reviews, runs integration tests
4. **Merge:** `git checkout feature/c64-text && git merge component/{name}`
5. **Clean up:** `git branch -d component/{name}` (optional)

### Commit Message Format

```
{phase}: {component} - {description}

Co-Authored-By: Warp <agent@warp.dev>
```

Phase prefixes:
- `research:` — RESEARCHER findings
- `spec:` — ARCHITECT specifications
- `build:` — COMPONENT_BUILDER implementation
- `test:` — TEST_ENGINEER test cases
- `integrate:` — INTEGRATION_TESTER harness updates
- `firmware:` — SOFTWARE_ENGINEER ROM additions

---

## Per-Component Workflow

### Step 1: Research (RESEARCHER)

**Trigger:** "Research [component name]"

**Actions:**
1. Identify canonical datasheets and reference manuals
2. Search for existing HDL implementations (Chisel, Verilog, VHDL)
3. Document register maps, timing, and behavioral quirks
4. Note license constraints on any referenced IP
5. Create `components/{component}/RESEARCH.md`

**Checkpoint:** Research complete when all registers, signals, and behaviors documented.

---

### Step 2: Specification (ARCHITECT)

**Trigger:** "Design [component name] interface"

**Actions:**
1. Read `RESEARCH.md` for the component
2. Define Chisel `Bundle` for all IO signals
3. Document memory map and decode logic
4. Specify reset states and register defaults
5. Identify integration risks and cross-component dependencies
6. Create `components/{component}/SPEC.md`

**Checkpoint:** Spec complete when IO is unambiguous and risks documented.

---

### Step 3: Implementation (COMPONENT_BUILDER)

**Trigger:** "Build [component name]"

**Actions:**
1. Read `SPEC.md` and `RESEARCH.md`
2. Create Chisel module(s) in `components/{component}/src/main/scala/`
3. Follow patterns from `CPU6502Testable.scala`
4. Add scaladoc comments for external IO
5. Verify compilation with `sbt compile`

**Checkpoint:** Code compiles and exposes exact SPEC.md interface.

---

### Step 4: Unit Testing (TEST_ENGINEER)

**Trigger:** "Test [component name]"

**Actions:**
1. Read `SPEC.md` for expected behaviors
2. Create test vectors in `components/{component}/test/`
3. Follow SingleStepTest pattern (JSON vectors + Scala harness)
4. Cover: reset, nominal ops, edge cases, documented errata
5. Run tests with `sbt test`

**Checkpoint:** All critical behaviors in SPEC.md have passing tests.

---

### Step 5: Integration (INTEGRATION_TESTER)

**Trigger:** "Integrate [component name]"

**Actions:**
1. Add component to system top module
2. Verify bus connections and address decode
3. Run component unit tests in integrated context
4. Update Verilator harness if needed

**Checkpoint:** Component works within system; no regressions.

---

### Step 6: Sign-off (ARCHITECT)

**Trigger:** "Review [component name]"

**Actions:**
1. Verify RESEARCH.md, SPEC.md, implementation, and tests are consistent
2. Check for undocumented behaviors or missing edge cases
3. Update risk register if new issues found
4. Mark component as complete

---

## Phase Sequencing

| Phase | Components | Dependencies |
|-------|------------|--------------|
| 1 | MMU, Memory System | None (uses existing CPU) |
| 2 | CIA (×2) | Memory System (for address decode) |
| 3 | VIC-II Text | CIA (for bank select), Memory System |
| 4 | System Top | All components |
| 5 | Firmware | System Top (for testing) |
| 6 | Integration Tests | All above |

## Escalation

If any agent encounters:
- **Ambiguity** in specifications → Escalate to ARCHITECT
- **Missing documentation** → Escalate to RESEARCHER
- **Integration conflicts** → Escalate to ARCHITECT
- **Licensing concerns** → Escalate to customer (user)

Document all escalations in the component's SPEC.md under "Risks and Gaps".
