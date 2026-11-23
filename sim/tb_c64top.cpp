// Verilator testbench for C64Top
//
// Command-based text protocol via stdin/stdout.
// Each test is a sequence of commands ending with END.
// Multiple tests can be run in one session.
//
// Commands:
//   RESET                       - Reset the DUT
//   RAM addr:val [addr:val ...] - Write bytes to RAM (decimal addr, hex val)
//   INJECT pc s a x y p         - Inject CPU state (all decimal)
//   RUN cycles                  - Step N clock cycles
//   KEY byte                    - Set keyboard column byte (decimal, 0xFF=none)
//   CHECK addr expected         - Verify RAM[addr]==expected, output result
//   STATE                       - Output CPU state
//   END                         - End of test case
//
// Output:
//   CHECK addr expected actual PASS|FAIL
//   STATE pc s a x y p state_num
//
// All numeric values in input/output are decimal unless noted.

#include <verilated.h>
#include "VC64Top.h"
#include "VC64Top___024root.h"  // For public-flat-rw access

#include <iostream>
#include <sstream>
#include <string>
#include <cstdint>

class C64TopTestBench {
public:
    VC64Top* dut;
    uint64_t tickCount = 0;

    C64TopTestBench() {
        dut = new VC64Top;
        initInputs();
    }

    ~C64TopTestBench() {
        dut->final();
        delete dut;
    }

    void initInputs() {
        dut->io_testEnable = 0;
        dut->io_testPc = 0;
        dut->io_testA = 0;
        dut->io_testX = 0;
        dut->io_testY = 0;
        dut->io_testS = 0xFF;
        dut->io_testP = 0x04;
        dut->io_keyboardCol = 0xFF;  // No keys pressed
        dut->io_joy1 = 0x1F;        // No joystick
        dut->io_joy2 = 0x1F;
        dut->io_frameReq = 0;
        dut->io_cellRow = 0;
        dut->io_cellCol = 0;
        dut->io_debugAddr = 0;
    }

    void reset() {
        dut->reset = 1;
        tick(5);
        dut->reset = 0;
        initInputs();
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

    // Direct RAM write using Verilator public-flat-rw
    void writeRam(uint16_t addr, uint8_t value) {
        dut->rootp->C64Top__DOT__mem__DOT__ram_ext__DOT__Memory[addr] = value;
    }

    uint8_t readRam(uint16_t addr) {
        // Use debug port for reads (always bypasses banking)
        dut->io_debugAddr = addr;
        dut->eval();
        return dut->io_debugData;
    }

    void inject(int pc, int s, int a, int x, int y, int p) {
        dut->io_testEnable = 1;
        dut->io_testPc = pc;
        dut->io_testS = s;
        dut->io_testA = a;
        dut->io_testX = x;
        dut->io_testY = y;
        dut->io_testP = p;
        tick(1);
        dut->io_testEnable = 0;
    }

    void setKey(uint8_t colByte) {
        dut->io_keyboardCol = colByte;
    }

    void printState() {
        std::cout << "STATE "
                  << dut->io_cpuPc << " "
                  << (int)dut->io_cpuS << " "
                  << (int)dut->io_cpuA << " "
                  << (int)dut->io_cpuX << " "
                  << (int)dut->io_cpuY << " "
                  << (int)dut->io_cpuP << " "
                  << (int)dut->io_cpuState << std::endl;
    }

    bool check(uint16_t addr, uint8_t expected) {
        uint8_t actual = readRam(addr);
        bool pass = (actual == expected);
        std::cout << "CHECK " << addr << " " << (int)expected << " "
                  << (int)actual << " " << (pass ? "PASS" : "FAIL")
                  << std::endl;
        return pass;
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    C64TopTestBench tb;
    tb.reset();

    std::string line;
    int testCount = 0;
    int passCount = 0;
    int failCount = 0;

    while (std::getline(std::cin, line)) {
        if (line.empty() || line[0] == '#') continue;

        std::istringstream iss(line);
        std::string cmd;
        iss >> cmd;

        if (cmd == "RESET") {
            tb.reset();
        }
        else if (cmd == "RAM") {
            // Parse addr:val pairs
            std::string pair;
            while (iss >> pair) {
                size_t colon = pair.find(':');
                if (colon != std::string::npos) {
                    int addr = std::stoi(pair.substr(0, colon));
                    int val = std::stoi(pair.substr(colon + 1), nullptr, 16);
                    tb.writeRam(addr, val);
                }
            }
        }
        else if (cmd == "INJECT") {
            int pc, s, a, x, y, p;
            if (iss >> pc >> s >> a >> x >> y >> p) {
                tb.inject(pc, s, a, x, y, p);
            }
        }
        else if (cmd == "RUN") {
            int cycles;
            if (iss >> cycles) {
                tb.tick(cycles);
            }
        }
        else if (cmd == "KEY") {
            int colByte;
            if (iss >> colByte) {
                tb.setKey(colByte);
            }
        }
        else if (cmd == "CHECK") {
            int addr, expected;
            if (iss >> addr >> expected) {
                if (tb.check(addr, expected)) {
                    passCount++;
                } else {
                    failCount++;
                }
            }
        }
        else if (cmd == "STATE") {
            tb.printState();
        }
        else if (cmd == "END") {
            testCount++;
            std::cout << "---" << std::endl;
            // Reset for next test
            tb.reset();
        }
    }

    // Summary
    std::cerr << testCount << " tests, " << passCount << " checks passed, "
              << failCount << " failed" << std::endl;

    return failCount > 0 ? 1 : 0;
}
