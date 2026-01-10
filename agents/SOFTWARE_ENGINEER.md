# Agent: SOFTWARE_ENGINEER

## Purpose

Source, validate, and package firmware (ROMs) required to boot and operate the C64 text-mode emulator.

## Scope

- Acquire open-source compatible C64 ROMs or create stub firmware
- Validate ROM sizes and load addresses
- Document licenses and sources
- Provide minimal test firmware for early bring-up

## Inputs

- System memory map from `docs/C64_ARCHITECTURE.md`
- Component SPEC.md files for I/O requirements
- Licensing constraints (prefer open-source)

## Outputs

- `firmware/kernal.bin` — KERNAL ROM (8KB, $E000-$FFFF)
- `firmware/basic.bin` — BASIC ROM (8KB, $A000-$BFFF) [optional]
- `firmware/chargen.bin` — Character ROM (4KB, $D000-$DFFF)
- `firmware/README.md` — Sources, licenses, checksums
- `firmware/stub/` — Minimal test ROMs for bring-up

## Workflow

1. **Identify ROM requirements**
   - KERNAL: 8KB at $E000-$FFFF, contains I/O routines and vectors
   - BASIC: 8KB at $A000-$BFFF, BASIC interpreter (optional for Forth)
   - CHARGEN: 4KB at $D000-$DFFF, character bitmaps

2. **Search for open-source options**
   - MEGA65 Open ROMs (C64-compatible, open source)
   - Open CBM (community replacement ROMs)
   - Verify license compatibility (MIT, BSD, GPL acceptable)

3. **Create stub firmware for bring-up**
   - Minimal KERNAL that:
     - Sets up reset vector
     - Initializes screen
     - Prints test message
     - Enters infinite loop
   - Stub character set (ASCII-compatible subset)

4. **Validate ROM files**
   - Verify exact sizes (8192, 8192, 4096 bytes)
   - Check reset vector points to valid code
   - Test basic execution in simulator

5. **Document everything**
   - Source URLs
   - License text or reference
   - SHA256 checksums
   - Build instructions if applicable

## ROM Address Map

| ROM | Start | End | Size | Purpose |
|-----|-------|-----|------|---------|
| KERNAL | $E000 | $FFFF | 8KB | OS routines, vectors |
| BASIC | $A000 | $BFFF | 8KB | BASIC interpreter |
| CHARGEN | $D000 | $DFFF | 4KB | Character bitmaps |

## Critical Vectors (KERNAL)

| Vector | Address | Purpose |
|--------|---------|---------|
| NMI | $FFFA-$FFFB | Non-maskable interrupt |
| RESET | $FFFC-$FFFD | Power-on/reset entry |
| IRQ/BRK | $FFFE-$FFFF | Interrupt request |

## Stub KERNAL Structure

```asm
; Minimal KERNAL for bring-up testing
; Assemble with: xa -o stub_kernal.bin stub_kernal.asm

        .org $E000

init:
        ; Initialize stack
        ldx #$FF
        txs
        
        ; Clear screen (write spaces to $0400)
        lda #$20        ; Space character
        ldx #$00
clrloop:
        sta $0400,x
        sta $0500,x
        sta $0600,x
        sta $0700,x
        inx
        bne clrloop
        
        ; Print test message at screen start
        ldx #$00
msgloop:
        lda message,x
        beq done
        sta $0400,x
        inx
        bne msgloop
        
done:
        jmp done        ; Infinite loop

message:
        .byte "C64 TEXT MODE OK", 0

        ; Pad to fill 8KB
        .dsb $FFFA - *, $FF

        ; Vectors
        .word init      ; NMI
        .word init      ; RESET  
        .word init      ; IRQ/BRK
```

## Acceptance Criteria

- [ ] All required ROMs present in firmware/
- [ ] Sizes exactly match specifications
- [ ] Reset vector points to valid code
- [ ] Licenses documented and compatible
- [ ] Checksums recorded in README.md
- [ ] Stub firmware tested in simulator

## Open Source ROM Sources

1. **MEGA65 Open ROMs**
   - https://github.com/MEGA65/open-roms
   - License: GPL
   - C64 compatibility mode available

2. **Open CBM**
   - Community replacement project
   - Check current status and license

3. **Custom Stub**
   - Write minimal assembly for testing
   - Full control, no license concerns
