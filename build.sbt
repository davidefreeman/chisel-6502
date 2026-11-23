// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2026 chisel-6502 contributors

ThisBuild / scalaVersion     := "2.13.14"
ThisBuild / version          := "0.1.0"
ThisBuild / organization     := "com.github.chisel6502"
ThisBuild / licenses         := Seq("Apache-2.0" -> url("https://www.apache.org/licenses/LICENSE-2.0"))

val chiselVersion = "6.5.0"
val circeVersion = "0.14.7"

lazy val root = (project in file("."))
  .settings(
    name := "chisel-6502",
    libraryDependencies ++= Seq(
      "org.chipsalliance" %% "chisel" % chiselVersion,
      "org.scalatest" %% "scalatest" % "3.2.19" % "test",
      "edu.berkeley.cs" %% "chiseltest" % "6.0.0" % "test",
      "io.circe" %% "circe-core" % circeVersion % "test",
      "io.circe" %% "circe-generic" % circeVersion % "test",
      "io.circe" %% "circe-parser" % circeVersion % "test"
    ),
    scalacOptions ++= Seq(
      "-language:reflectiveCalls",
      "-deprecation",
      "-feature",
      "-Xcheckinit",
      "-Ymacro-annotations"
    ),
    addCompilerPlugin("org.chipsalliance" % "chisel-plugin" % chiselVersion cross CrossVersion.full),
    // Parallel test execution
    Test / testForkedParallel := true,
    Test / fork := true,
    Test / parallelExecution := true,
    // Pass system properties to forked JVMs
    Test / javaOptions ++= Seq(
      s"-DtestCount=${sys.props.getOrElse("testCount", "50")}",
      s"-DprogressInterval=${sys.props.getOrElse("progressInterval", "100")}"
    )
  )
