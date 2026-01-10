package c64

import chisel3._
import chisel3.util._

/**
  * C64 PLA Memory Banking Logic
  * 
  * Implements address decoding for the Commodore 64, generating chip select
  * signals based on the address bus and banking control lines (LORAM, HIRAM,
  * CHAREN).
  * 
  * This implementation assumes no cartridge (GAME=1, EXROM=1).
  * 
  * Memory Map:
  *   $0000-$9FFF  RAM
  *   $A000-$BFFF  BASIC ROM or RAM (based on LORAM && HIRAM)
  *   $C000-$CFFF  RAM
  *   $D000-$DFFF  I/O or Char ROM or RAM (based on CHAREN and banking)
  *   $E000-$FFFF  KERNAL ROM or RAM (based on HIRAM)
  * 
  * Critical: All CPU writes go to underlying RAM regardless of banking.
  */
class MmuPla extends Module {
  val io = IO(new Bundle {
    // CPU interface
    val addr      = Input(UInt(16.W))
    val rw        = Input(Bool())       // true=read, false=write
    
    // Banking control inputs (from CpuPort6510)
    val loram     = Input(Bool())
    val hiram     = Input(Bool())
    val charen    = Input(Bool())
    
    // Chip select outputs (active high)
    val ramCs     = Output(Bool())      // RAM selected
    val ramWe     = Output(Bool())      // RAM write enable
    val basicCs   = Output(Bool())      // BASIC ROM selected
    val kernalCs  = Output(Bool())      // KERNAL ROM selected
    val charCs    = Output(Bool())      // Character ROM selected
    val ioCs      = Output(Bool())      // I/O region selected
    
    // I/O sub-selects (active when ioCs is high)
    val vicCs     = Output(Bool())      // VIC-II $D000-$D3FF
    val sidCs     = Output(Bool())      // SID $D400-$D7FF
    val colorCs   = Output(Bool())      // Color RAM $D800-$DBFF
    val cia1Cs    = Output(Bool())      // CIA1 $DC00-$DCFF
    val cia2Cs    = Output(Bool())      // CIA2 $DD00-$DDFF
  })

  // ============================================
  // Address Region Detection
  // ============================================
  
  // Main memory regions
  val isBasicRom  = io.addr >= 0xA000.U && io.addr <= 0xBFFF.U
  val isIoOrChar  = io.addr >= 0xD000.U && io.addr <= 0xDFFF.U
  val isKernalRom = io.addr >= 0xE000.U

  // I/O sub-regions (within $D000-$DFFF)
  val isVicRange   = io.addr >= 0xD000.U && io.addr <= 0xD3FF.U
  val isSidRange   = io.addr >= 0xD400.U && io.addr <= 0xD7FF.U
  val isColorRange = io.addr >= 0xD800.U && io.addr <= 0xDBFF.U
  val isCia1Range  = io.addr >= 0xDC00.U && io.addr <= 0xDCFF.U
  val isCia2Range  = io.addr >= 0xDD00.U && io.addr <= 0xDDFF.U

  // ============================================
  // Banking Logic (no cartridge: GAME=1, EXROM=1)
  // ============================================
  
  // BASIC visible when both LORAM and HIRAM are high
  val basicVisible = io.loram && io.hiram
  
  // KERNAL visible when HIRAM is high
  val kernalVisible = io.hiram
  
  // I/O visible when HIRAM and CHAREN (LORAM is irrelevant for $D000 region)
  val ioVisible = io.hiram && io.charen
  
  // Char ROM visible when HIRAM and NOT CHAREN
  val charVisible = io.hiram && !io.charen

  // ============================================
  // Chip Select Generation
  // ============================================
  
  // ROM chip selects (only active for reads when visible)
  val basicCs  = isBasicRom && basicVisible && io.rw
  val kernalCs = isKernalRom && kernalVisible && io.rw
  val charCs   = isIoOrChar && charVisible && io.rw
  
  // I/O chip select (active for reads and writes when visible)
  val ioCs = isIoOrChar && ioVisible

  // I/O sub-selects
  val vicCs   = ioCs && isVicRange
  val sidCs   = ioCs && isSidRange
  val colorCs = ioCs && isColorRange
  val cia1Cs  = ioCs && isCia1Range
  val cia2Cs  = ioCs && isCia2Range

  // RAM selected when no ROM or I/O is selected
  val ramCs = !basicCs && !kernalCs && !charCs && !ioCs
  
  // RAM write enable: all CPU writes go to RAM
  val ramWe = !io.rw

  // ============================================
  // Output Assignment
  // ============================================
  
  io.ramCs    := ramCs
  io.ramWe    := ramWe
  io.basicCs  := basicCs
  io.kernalCs := kernalCs
  io.charCs   := charCs
  io.ioCs     := ioCs
  io.vicCs    := vicCs
  io.sidCs    := sidCs
  io.colorCs  := colorCs
  io.cia1Cs   := cia1Cs
  io.cia2Cs   := cia2Cs
}
