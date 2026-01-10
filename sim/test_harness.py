#!/usr/bin/env python3
"""
Simple adapter to test the Verilator testbench.
Reads SingleStepTests JSON, converts to testbench protocol, validates results.

Usage:
    ./test_harness.py ../src/test/resources/singlestep/ea.json [count]
"""

import json
import subprocess
import sys
from pathlib import Path

def format_test_input(test_case):
    """Convert JSON test case to testbench input format: pc s a x y p addr:val ..."""
    initial = test_case['initial']
    parts = [
        str(initial['pc']),
        str(initial['s']),
        str(initial['a']),
        str(initial['x']),
        str(initial['y']),
        str(initial['p']),
    ]
    for addr, val in initial['ram']:
        parts.append(f"{addr}:{val}")
    return ' '.join(parts)

def parse_test_output(line):
    """Parse testbench output: pc s a x y p cycles"""
    parts = line.strip().split()
    if len(parts) != 7:
        return None
    return {
        'pc': int(parts[0]),
        's': int(parts[1]),
        'a': int(parts[2]),
        'x': int(parts[3]),
        'y': int(parts[4]),
        'p': int(parts[5]),
        'cycles': int(parts[6]),
    }

def compare_results(expected, actual):
    """Compare expected vs actual, masking P bits 4 and 5."""
    p_mask = 0xCF  # Mask out bits 4 (B) and 5 (unused)
    return (
        expected['pc'] == actual['pc'] and
        expected['s'] == actual['s'] and
        expected['a'] == actual['a'] and
        expected['x'] == actual['x'] and
        expected['y'] == actual['y'] and
        (expected['p'] & p_mask) == (actual['p'] & p_mask)
    )

def main():
    if len(sys.argv) < 2:
        print("Usage: ./test_harness.py <json_file> [count]")
        sys.exit(1)
    
    json_file = Path(sys.argv[1])
    count = int(sys.argv[2]) if len(sys.argv) > 2 else 10
    
    # Find the simulation binary
    sim_binary = Path(__file__).parent / 'obj_dir' / 'VCPU6502Testable'
    if not sim_binary.exists():
        print(f"ERROR: Simulation binary not found: {sim_binary}")
        print("Run 'make' first.")
        sys.exit(1)
    
    # Load test cases
    with open(json_file) as f:
        test_cases = json.load(f)
    
    test_cases = test_cases[:count]
    opcode = json_file.stem.upper()
    print(f"Testing {opcode}: {len(test_cases)} tests")
    
    # Prepare input
    input_lines = [format_test_input(tc) for tc in test_cases]
    input_data = '\n'.join(input_lines) + '\n'
    
    # Run simulation
    proc = subprocess.run(
        [str(sim_binary)],
        input=input_data,
        capture_output=True,
        text=True
    )
    
    if proc.returncode != 0:
        print(f"ERROR: Simulation failed with code {proc.returncode}")
        print(proc.stderr)
        sys.exit(1)
    
    # Parse and validate results
    output_lines = proc.stdout.strip().split('\n')
    passed = 0
    failed = 0
    
    for i, (tc, out_line) in enumerate(zip(test_cases, output_lines)):
        expected = tc['final']
        actual = parse_test_output(out_line)
        
        if actual is None:
            print(f"  Test {i}: PARSE ERROR - {out_line}")
            failed += 1
            continue
        
        if compare_results(expected, actual):
            passed += 1
        else:
            failed += 1
            if failed <= 5:  # Only show first 5 failures
                print(f"  Test {i} ({tc['name']}): FAIL")
                print(f"    Expected: PC={expected['pc']} S={expected['s']} A={expected['a']} X={expected['x']} Y={expected['y']} P={expected['p'] & 0xCF}")
                print(f"    Actual:   PC={actual['pc']} S={actual['s']} A={actual['a']} X={actual['x']} Y={actual['y']} P={actual['p'] & 0xCF}")
    
    print(f"Results: {passed}/{len(test_cases)} passed")
    if failed > 0:
        sys.exit(1)

if __name__ == '__main__':
    main()
