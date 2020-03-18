;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit CountTester : 
  module CountTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    when UInt<1>("h01") : @[Counter.scala 11:16]
      skip @[Counter.scala 11:16]
    node _T = eq(UInt<1>("h00"), UInt<1>("h00")) @[Counter.scala 12:18]
    when _T : @[Counter.scala 12:38]
      node _T_1 = bits(reset, 0, 0) @[Counter.scala 13:9]
      node _T_2 = eq(_T_1, UInt<1>("h00")) @[Counter.scala 13:9]
      when _T_2 : @[Counter.scala 13:9]
        stop(clock, UInt<1>(1), 0) @[Counter.scala 13:9]
        skip @[Counter.scala 13:9]
      skip @[Counter.scala 12:38]
    
