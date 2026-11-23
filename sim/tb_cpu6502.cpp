// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2026 chisel-6502 contributors

// Verilator testbench for CPU6502Testable
// 
// Protocol (one test per line on stdin):
//   INPUT:  pc s a x y p addr1:val1 addr2:val2 ...
//   OUTPUT: pc s a x y p cycles
//
// All values are decimal integers.
// Memory pairs are address:value (both decimal).

#include <verilated.h>
#include "VCPU6502Testable.h"

#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <cstdint>

// Memory simulation
class Memory {
public:
    std::map<uint16_t, uint8_t> data;
    
    void clear() { data.clear(); }
    
    uint8_t read(uint16_t addr) {
        auto it = data.find(addr);
        return (it != data.end()) ? it->second : 0;
    }
    
    void write(uint16_t addr, uint8_t val) {
        data[addr] = val;
    }
};

// State constants matching CPU6502Testable
constexpr int STATE_FETCH = 1;
constexpr int MAX_CYCLES = 50;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    auto dut = std::make_unique<VCPU6502Testable>();
    Memory mem;
    
    std::string line;
    while (std::getline(std::cin, line)) {
        if (line.empty() || line[0] == '#') continue;
        
        // Parse input: pc s a x y p [addr:val ...]
        std::istringstream iss(line);
        int pc, s, a, x, y, p;
        if (!(iss >> pc >> s >> a >> x >> y >> p)) {
            std::cerr << "ERROR: Invalid input format" << std::endl;
            continue;
        }
        
        // Parse memory values
        mem.clear();
        std::string memPair;
        while (iss >> memPair) {
            size_t colonPos = memPair.find(':');
            if (colonPos != std::string::npos) {
                int addr = std::stoi(memPair.substr(0, colonPos));
                int val = std::stoi(memPair.substr(colonPos + 1));
                mem.write(addr, val);
            }
        }
        
        // Reset the CPU
        dut->reset = 1;
        dut->clock = 0;
        dut->eval();
        dut->clock = 1;
        dut->eval();
        dut->reset = 0;
        
        // Inject test state
        dut->io_test_enable = 1;
        dut->io_test_pc = pc;
        dut->io_test_a = a;
        dut->io_test_x = x;
        dut->io_test_y = y;
        dut->io_test_s = s;
        dut->io_test_p = p;
        dut->io_irq = 0;
        dut->io_nmi = 0;
        dut->io_rdy = 1;
        
        // Provide initial memory data and clock once with test_enable high
        dut->io_dataIn = mem.read(dut->io_address);
        dut->clock = 0;
        dut->eval();
        dut->clock = 1;
        dut->eval();
        
        // Disable test injection, start execution
        dut->io_test_enable = 0;
        
        // Run until instruction completes (returns to fetch state after leaving it)
        bool wasInFetch = true;
        bool instructionComplete = false;
        int cycleCount = 0;
        
        while (!instructionComplete && cycleCount < MAX_CYCLES) {
            // Provide memory data
            dut->io_dataIn = mem.read(dut->io_address);
            
            // Clock low
            dut->clock = 0;
            dut->eval();
            
            // Handle memory write
            if (dut->io_writeEnable) {
                mem.write(dut->io_address, dut->io_dataOut);
            }
            
            // Clock high
            dut->clock = 1;
            dut->eval();
            
            cycleCount++;
            
            // Check if instruction completed (returned to fetch after leaving)
            int currentState = dut->io_debug_state;
            if (!wasInFetch && currentState == STATE_FETCH) {
                instructionComplete = true;
            }
            wasInFetch = (currentState == STATE_FETCH);
        }
        
        // Output result: pc s a x y p cycles
        std::cout << dut->io_debug_pc << " "
                  << (int)dut->io_debug_sp << " "
                  << (int)dut->io_debug_a << " "
                  << (int)dut->io_debug_x << " "
                  << (int)dut->io_debug_y << " "
                  << (int)dut->io_debug_p << " "
                  << cycleCount << std::endl;
    }
    
    dut->final();
    return 0;
}
