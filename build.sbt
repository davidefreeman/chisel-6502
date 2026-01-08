// See README.md for license details.

ThisBuild / scalaVersion     := "2.13.14"
ThisBuild / version          := "0.1.0"
ThisBuild / organization     := "com.github.chisel6502"

val chiselVersion = "6.5.0"

lazy val root = (project in file("."))
  .settings(
    name := "chisel-6502",
    libraryDependencies ++= Seq(
      "org.chipsalliance" %% "chisel" % chiselVersion,
      "org.scalatest" %% "scalatest" % "3.2.19" % "test",
      "edu.berkeley.cs" %% "chiseltest" % "6.0.0" % "test"
    ),
    scalacOptions ++= Seq(
      "-language:reflectiveCalls",
      "-deprecation",
      "-feature",
      "-Xcheckinit",
      "-Ymacro-annotations"
    ),
    addCompilerPlugin("org.chipsalliance" % "chisel-plugin" % chiselVersion cross CrossVersion.full)
  )
