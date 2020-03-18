;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit SinglePrintfTester : 
  module SinglePrintfTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _T = bits(reset, 0, 0) @[Printf.scala 10:9]
    node _T_1 = eq(_T, UInt<1>("h00")) @[Printf.scala 10:9]
    when _T_1 : @[Printf.scala 10:9]
      printf(clock, UInt<1>(1), "x=%x", UInt<8>("h0fe")) @[Printf.scala 10:9]
      skip @[Printf.scala 10:9]
    node _T_2 = bits(reset, 0, 0) @[Printf.scala 11:7]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[Printf.scala 11:7]
    when _T_3 : @[Printf.scala 11:7]
      stop(clock, UInt<1>(1), 0) @[Printf.scala 11:7]
      skip @[Printf.scala 11:7]
    
