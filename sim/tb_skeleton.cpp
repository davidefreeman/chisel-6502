// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2026 chisel-6502 contributors

// Verilator testbench for SkeletonTop
//
// Validates Chisel → Verilog → Verilator pipeline.
// Loads a test program into RAM, runs until HALT or timeout,
// and captures debug output.

#include <verilated.h>
#include "VSkeletonTop.h"
#include "VSkeletonTop___024root.h"  // For direct memory access

#include <iostream>
#include <fstream>
#include <cstdint>
#include <cstring>

constexpr int MAX_CYCLES = 100000;
constexpr int STATE_FETCH = 1;

class SkeletonTestBench {
public:
    VSkeletonTop* dut;
    uint64_t tickCount = 0;
    
    SkeletonTestBench() {
        dut = new VSkeletonTop;
    }
    
    ~SkeletonTestBench() {
        dut->final();
        delete dut;
    }
    
    void reset() {
        dut->reset = 1;
        dut->io_testEnable = 0;
        tick(5);
        dut->reset = 0;
    }
    
    void tick(int count = 1) {
        for (int i = 0; i < count; i++) {
            dut->clock = 0;
            dut->eval();
            dut->clock = 1;
            dut->eval();
            tickCount++;
        }
    }
    
    void loadProgram(uint16_t startAddr, const uint8_t* data, size_t len) {
        // Use test injection to write program into RAM
        // This is a workaround since we can't directly poke RAM
        // For now, we'll load via the CPU writing to RAM
        
        // Reset and inject starting state
        dut->reset = 1;
        tick(1);
        dut->reset = 0;
        
        // Inject PC at program location
        dut->io_testEnable = 1;
        dut->io_testPc = startAddr;
        dut->io_testA = 0;
        dut->io_testX = 0;
        dut->io_testY = 0;
        dut->io_testS = 0xFD;
        dut->io_testP = 0x24;  // Interrupt disable set
        tick(1);
        dut->io_testEnable = 0;
    }
    
    void run() {
        bool halted = false;
        
        while (!halted && tickCount < MAX_CYCLES) {
            tick();
            
            // Check for debug character output
            if (dut->io_debugCharValid) {
                char c = dut->io_debugCharOut;
                std::cout << c << std::flush;
            }
            
            // Check for halt
            if (dut->io_debugHalt) {
                std::cout << "\n[HALT after " << tickCount << " cycles]" << std::endl;
                halted = true;
            }
        }
        
        if (!halted) {
            std::cout << "\n[TIMEOUT after " << tickCount << " cycles]" << std::endl;
            std::cout << "PC=$" << std::hex << dut->io_cpuPc 
                      << " A=$" << (int)dut->io_cpuA
                      << " X=$" << (int)dut->io_cpuX
                      << " Y=$" << (int)dut->io_cpuY
                      << std::dec << std::endl;
        }
    }
    
    // Direct RAM write using Verilator's public-flat-rw
    void writeRam(uint16_t addr, uint8_t value) {
        dut->rootp->SkeletonTop__DOT__ram_ext__DOT__Memory[addr] = value;
    }
    
    uint8_t readRam(uint16_t addr) {
        return dut->rootp->SkeletonTop__DOT__ram_ext__DOT__Memory[addr];
    }
    
    // Load program directly into RAM
    void loadProgram(const uint8_t* data, uint16_t addr, size_t len) {
        for (size_t i = 0; i < len; i++) {
            writeRam(addr + i, data[i]);
        }
    }
};

// Simple test program that prints "HI" and halts
// Assembled at $1000:
//   LDA #'H'   ; A9 48
//   STA $FFE0  ; 8D E0 FF
//   LDA #'I'   ; A9 49
//   STA $FFE0  ; 8D E0 FF
//   LDA #$0A   ; A9 0A (newline)
//   STA $FFE0  ; 8D E0 FF
//   LDA #$01   ; A9 01
//   STA $FFE1  ; 8D E1 FF (halt)
//   JMP $1014  ; 4C 14 10 (infinite loop as fallback)

// Load test program directly into RAM
void loadTestProgram(SkeletonTestBench& tb) {
    // Fill with NOPs
    for (int i = 0; i < 65536; i++) {
        tb.writeRam(i, 0xEA);
    }
    
    // Program at $1000:
    //   LDA #'H'   ; A9 48
    //   STA $FFE0  ; 8D E0 FF
    //   LDA #'I'   ; A9 49
    //   STA $FFE0  ; 8D E0 FF
    //   LDA #$0A   ; A9 0A (newline)
    //   STA $FFE0  ; 8D E0 FF
    //   LDA #$01   ; A9 01
    //   STA $FFE1  ; 8D E1 FF (halt)
    //   JMP $1017  ; 4C 17 10 (infinite loop as fallback)
    
    uint16_t pc = 0x1000;
    tb.writeRam(pc++, 0xA9); tb.writeRam(pc++, 'H');       // LDA #'H'
    tb.writeRam(pc++, 0x8D); tb.writeRam(pc++, 0xE0); tb.writeRam(pc++, 0xFF);  // STA $FFE0
    tb.writeRam(pc++, 0xA9); tb.writeRam(pc++, 'I');       // LDA #'I'
    tb.writeRam(pc++, 0x8D); tb.writeRam(pc++, 0xE0); tb.writeRam(pc++, 0xFF);  // STA $FFE0
    tb.writeRam(pc++, 0xA9); tb.writeRam(pc++, '\n');      // LDA #$0A
    tb.writeRam(pc++, 0x8D); tb.writeRam(pc++, 0xE0); tb.writeRam(pc++, 0xFF);  // STA $FFE0
    tb.writeRam(pc++, 0xA9); tb.writeRam(pc++, 0x01);      // LDA #$01
    tb.writeRam(pc++, 0x8D); tb.writeRam(pc++, 0xE1); tb.writeRam(pc++, 0xFF);  // STA $FFE1 (halt)
    tb.writeRam(pc++, 0x4C); tb.writeRam(pc++, 0x17); tb.writeRam(pc++, 0x10);  // JMP $1017
    
    // Reset vector at $FFFC points to $1000
    tb.writeRam(0xFFFC, 0x00);
    tb.writeRam(0xFFFD, 0x10);
    
    // NMI and IRQ vectors (point to infinite loop)
    tb.writeRam(0xFFFA, 0x17);
    tb.writeRam(0xFFFB, 0x10);
    tb.writeRam(0xFFFE, 0x17);
    tb.writeRam(0xFFFF, 0x10);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    std::cout << "=== Skeleton System Test ===" << std::endl;
    std::cout << "Testing Chisel → Verilog → Verilator pipeline" << std::endl;
    std::cout << std::endl;
    
    SkeletonTestBench tb;
    
    // Load test program into RAM
    std::cout << "Loading test program into RAM..." << std::endl;
    loadTestProgram(tb);
    
    // Reset the system
    std::cout << "Resetting system..." << std::endl;
    tb.reset();
    
    // Inject PC=$1000 to start at our program
    tb.dut->io_testEnable = 1;
    tb.dut->io_testPc = 0x1000;
    tb.dut->io_testA = 0;
    tb.dut->io_testX = 0;
    tb.dut->io_testY = 0;
    tb.dut->io_testS = 0xFD;
    tb.dut->io_testP = 0x24;
    tb.tick(1);
    tb.dut->io_testEnable = 0;
    
    std::cout << "Starting execution at $1000..." << std::endl;
    std::cout << "Expected output: HI" << std::endl;
    std::cout << "Actual output: ";
    
    // Run until halt or timeout
    tb.run();
    
    std::cout << "=== Test Complete ===" << std::endl;
    
    return 0;
}
