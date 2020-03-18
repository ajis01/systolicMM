;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit MultiPrintfTester : 
  module MultiPrintfTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _T = bits(reset, 0, 0) @[Printf.scala 22:9]
    node _T_1 = eq(_T, UInt<1>("h00")) @[Printf.scala 22:9]
    when _T_1 : @[Printf.scala 22:9]
      printf(clock, UInt<1>(1), "x=%x y=%x", UInt<8>("h0fe"), UInt<8>("h0ff")) @[Printf.scala 22:9]
      skip @[Printf.scala 22:9]
    node _T_2 = bits(reset, 0, 0) @[Printf.scala 23:7]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[Printf.scala 23:7]
    when _T_3 : @[Printf.scala 23:7]
      stop(clock, UInt<1>(1), 0) @[Printf.scala 23:7]
      skip @[Printf.scala 23:7]
    
