package c64

import circt.stage.ChiselStage.emitSystemVerilog
import java.io.{File, PrintWriter}

/** Emit SystemVerilog for all C64 components */
object EmitC64Components extends App {
  val outDir = new File("generated/c64")
  outDir.mkdirs()
  
  def emit(name: String, sv: String): Unit = {
    val file = new File(outDir, s"$name.sv")
    val pw = new PrintWriter(file)
    pw.write(sv)
    pw.close()
    println(s"  -> ${file.getPath}")
  }
  
  println("Emitting CpuPort6510...")
  emit("CpuPort6510", emitSystemVerilog(new CpuPort6510))
  
  println("Emitting MmuPla...")
  emit("MmuPla", emitSystemVerilog(new MmuPla))
  
  println("Emitting Cia6526...")
  emit("Cia6526", emitSystemVerilog(new Cia6526))
  
  println("Emitting VicIIText...")
  emit("VicIIText", emitSystemVerilog(new VicIIText(1000)))
  
  println("Emitting MemoryController...")
  emit("MemoryController", emitSystemVerilog(new MemoryController()))
  
  println("All components emitted successfully!")
}
