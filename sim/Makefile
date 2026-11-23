# SPDX-License-Identifier: Apache-2.0
# SPDX-FileCopyrightText: 2026 chisel-6502 contributors

# Verilator simulation build for CPU6502Testable
#
# Usage:
#   make           - Build the Verilator simulation
#   make clean     - Remove build artifacts
#   make test      - Run a quick test with NOP
#   make rebuild   - Regenerate Verilog and rebuild simulation

# Directories
PROJECT_ROOT := $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))/..
VERILOG_DIR  := $(PROJECT_ROOT)/generated
SIM_DIR      := $(PROJECT_ROOT)/sim
BUILD_DIR    := $(SIM_DIR)/obj_dir
TEST_DIR     := $(PROJECT_ROOT)/src/test/resources/singlestep

# Source files
VERILOG_SRC  := $(VERILOG_DIR)/CPU6502Testable.sv
TESTBENCH    := $(SIM_DIR)/tb_cpu6502.cpp

# Output binary
SIM_EXE      := $(BUILD_DIR)/VCPU6502Testable

# Verilator flags
VERILATOR    := verilator
VERILATOR_FLAGS := --cc --exe --build \
    -Wall -Wno-fatal \
    --trace \
    -CFLAGS "-std=c++17 -O2" \
    --top-module CPU6502Testable \
    -Mdir $(BUILD_DIR)

.PHONY: all clean test rebuild verilate help

all: $(SIM_EXE)

$(SIM_EXE): $(VERILOG_SRC) $(TESTBENCH)
	@echo "Building Verilator simulation..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SRC) $(TESTBENCH)
	@echo "Build complete: $(SIM_EXE)"

verilate: $(SIM_EXE)

clean:
	rm -rf $(BUILD_DIR)
	@echo "Cleaned build artifacts"

# Quick test with NOP instruction
test: $(SIM_EXE)
	@echo "Running quick test with NOP (0xEA)..."
	@head -1 $(TEST_DIR)/ea.json | $(SIM_EXE)

# Test a specific opcode (e.g., make test-a9 for LDA immediate)
test-%: $(SIM_EXE)
	@echo "Testing opcode $*..."
	@head -10 $(TEST_DIR)/$*.json | $(SIM_EXE)

# Full test with all opcodes (10 tests each)
test-all: $(SIM_EXE)
	@echo "Running all opcode tests (10 each)..."
	@for f in $(TEST_DIR)/*.json; do \
		opcode=$$(basename $$f .json); \
		echo -n "Testing $$opcode: "; \
		count=$$(head -10 $$f | $(SIM_EXE) 2>/dev/null | wc -l); \
		echo "$$count tests"; \
	done

# ============================================
# Skeleton System (C64 pipeline validation)
# ============================================

SKELETON_SRC := $(VERILOG_DIR)/SkeletonTop.sv
SKELETON_TB  := $(SIM_DIR)/tb_skeleton.cpp
SKELETON_EXE := $(SIM_DIR)/obj_skeleton/VSkeletonTop

VERILATOR_SKELETON_FLAGS := --cc --exe --build \
    -Wall -Wno-fatal \
    --trace \
    --public-flat-rw \
    -CFLAGS "-std=c++17 -O2" \
    --top-module SkeletonTop \
    -Mdir $(SIM_DIR)/obj_skeleton

skeleton: $(SKELETON_EXE)

$(SKELETON_EXE): $(SKELETON_SRC) $(SKELETON_TB)
	@echo "Building Skeleton system simulation..."
	$(VERILATOR) $(VERILATOR_SKELETON_FLAGS) $(SKELETON_SRC) $(SKELETON_TB)
	@echo "Build complete: $(SKELETON_EXE)"

test-skeleton: $(SKELETON_EXE)
	@echo "Running skeleton system test..."
	cd $(SIM_DIR) && ./obj_skeleton/VSkeletonTop

rebuild-skeleton:
	@echo "Regenerating Skeleton Verilog..."
	cd $(PROJECT_ROOT) && sbt "runMain c64.SkeletonMain"
	rm -rf $(SIM_DIR)/obj_skeleton
	$(MAKE) skeleton

# ============================================
# C64Top System (Full C64 text-mode emulation)
# ============================================

C64TOP_SRC := $(VERILOG_DIR)/c64/C64Top.sv
C64TOP_TB  := $(SIM_DIR)/tb_c64top.cpp
C64TOP_EXE := $(SIM_DIR)/obj_c64top/VC64Top

VERILATOR_C64TOP_FLAGS := --cc --exe --build \
    -Wall -Wno-fatal \
    --trace \
    --public-flat-rw \
    -CFLAGS "-std=c++17 -O2" \
    --top-module C64Top \
    -Mdir $(SIM_DIR)/obj_c64top

c64top: $(C64TOP_EXE)

$(C64TOP_EXE): $(C64TOP_SRC) $(C64TOP_TB)
	@echo "Building C64Top Verilator simulation..."
	$(VERILATOR) $(VERILATOR_C64TOP_FLAGS) $(C64TOP_SRC) $(C64TOP_TB)
	@echo "Build complete: $(C64TOP_EXE)"

test-c64top: $(C64TOP_EXE)
	@echo "Running C64Top keyboard test..."
	$(C64TOP_EXE)

rebuild-c64top:
	@echo "Regenerating C64Top Verilog..."
	cd $(PROJECT_ROOT) && sbt "runMain c64.C64TopMain"
	rm -rf $(SIM_DIR)/obj_c64top
	$(MAKE) c64top

clean-c64top:
	rm -rf $(SIM_DIR)/obj_c64top

# ============================================
# CPU6502 rebuild
# ============================================

# Regenerate Verilog from Chisel and rebuild
rebuild:
	@echo "Regenerating Verilog..."
	cd $(PROJECT_ROOT) && sbt "runMain cpu6502.CPU6502Main"
	$(MAKE) clean
	$(MAKE) all

help:
	@echo "Verilator Simulation Build"
	@echo ""
	@echo "Targets:"
	@echo "  all       - Build the simulation (default)"
	@echo "  clean     - Remove build artifacts"
	@echo "  test      - Quick test with NOP instruction"
	@echo "  test-XX   - Test specific opcode (e.g., test-a9 for LDA imm)"
	@echo "  test-all  - Run all opcode tests (10 each)"
	@echo "  rebuild   - Regenerate Verilog and rebuild simulation"
	@echo "  help      - Show this help"
	@echo ""
	@echo "The simulation binary reads JSON test cases from stdin"
	@echo "and outputs results to stdout."
