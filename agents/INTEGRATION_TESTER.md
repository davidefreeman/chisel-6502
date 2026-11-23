<!--
SPDX-License-Identifier: Apache-2.0
SPDX-FileCopyrightText: 2026 chisel-6502 contributors
-->

# Agent: INTEGRATION_TESTER

## Purpose

Build the unified system model, compile to Verilog, create Verilator test harness, and validate end-to-end functionality.

## Scope

- Integrate all components into system top module
- Generate Verilog using sbt/Chisel
- Create Verilator testbench with terminal rendering
- Execute boot and functional tests
- Measure and report performance

## Inputs

- All component implementations (compiled, unit-tested)
- Firmware from `firmware/`
- System specification from `docs/C64_ARCHITECTURE.md`
- Existing Verilator infrastructure in `sim/`

## Outputs

- `src/main/scala/c64/C64TextTop.scala` — System top module
- `sim/tb_c64.cpp` — Verilator testbench
- `sim/Makefile` updates for C64 targets
- Integration test results and performance notes

## Workflow

1. **Create system top module**
   - Instantiate all components
   - Wire bus connections
   - Implement address decode for component selection
   - Connect interrupts to CPU

2. **Generate Verilog**
   ```bash
   sbt "runMain c64.C64TextMain"
   ```

3. **Update Verilator Makefile**
   - Add target for C64 text-mode build
   - Configure memory initialization from firmware

4. **Create testbench**
   - Load ROM files into memory arrays
   - Implement clock and reset generation
   - Map keyboard input to CIA1 matrix
   - Read VIC-II screen buffer for terminal display

5. **Implement terminal rendering**
   - Read 40x25 screen buffer
   - Map PETSCII to ASCII where possible
   - Refresh display periodically

6. **Boot test**
   - Reset system
   - Verify CPU reads reset vector
   - Confirm KERNAL initialization sequence
   - Verify screen displays expected content

7. **Functional tests**
   - Keyboard input test
   - Simple program execution
   - Timer and interrupt verification

8. **Performance measurement**
   - Cycles per second
   - Frame update rate
   - Identify bottlenecks

## Testbench Structure

```cpp
#include "VC64TextTop.h"
#include "verilated.h"
#include <iostream>
#include <fstream>

class C64TestBench {
public:
    VC64TextTop* dut;
    uint8_t ram[65536];
    uint8_t kernal[8192];
    uint8_t chargen[4096];
    
    void loadRoms() {
        // Load firmware files
    }
    
    void reset() {
        dut->reset = 1;
        tick(10);
        dut->reset = 0;
    }
    
    void tick(int count = 1) {
        for (int i = 0; i < count; i++) {
            dut->clock = 0;
            dut->eval();
            dut->clock = 1;
            dut->eval();
            handleMemory();
        }
    }
    
    void handleMemory() {
        // Bus read/write handling
    }
    
    void renderScreen() {
        // 40x25 ASCII output
    }
};
```

## Terminal Rendering

```
+----------------------------------------+
|C64 TEXT MODE OK                        |
|                                        |
|READY.                                  |
|█                                       |
|                                        |
...
+----------------------------------------+
Cycles: 1000000  FPS: 50
```

## Test Categories

### Boot Test
- [ ] Reset vector read correctly
- [ ] KERNAL init code executes
- [ ] Screen memory initialized
- [ ] Ready prompt displayed (if using full KERNAL)

### Memory Test
- [ ] RAM read/write works
- [ ] ROM regions return correct data
- [ ] Banking switches correctly
- [ ] Color RAM accessible

### I/O Test
- [ ] CIA timer counts down
- [ ] Keyboard matrix responds
- [ ] VIC registers readable/writable

### Integration Test
- [ ] Load and run simple machine code
- [ ] Print characters to screen
- [ ] Accept keyboard input

## Acceptance Criteria

- [ ] System compiles to Verilog without errors
- [ ] Verilator simulation builds successfully
- [ ] Boot test passes (KERNAL or stub initializes)
- [ ] Screen displays expected content
- [ ] Keyboard input functional
- [ ] No critical regressions from CPU unit tests
- [ ] Performance documented

## Performance Targets

| Metric | Target | Notes |
|--------|--------|-------|
| Simulation speed | >1M cycles/sec | On modern desktop |
| Frame rate | 50+ FPS | Terminal refresh |
| Boot time | <1 second | To ready prompt |
