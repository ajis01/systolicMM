;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit StopTester : 
  module StopTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _T = bits(reset, 0, 0) @[Stop.scala 9:7]
    node _T_1 = eq(_T, UInt<1>("h00")) @[Stop.scala 9:7]
    when _T_1 : @[Stop.scala 9:7]
      stop(clock, UInt<1>(1), 0) @[Stop.scala 9:7]
      skip @[Stop.scala 9:7]
    
