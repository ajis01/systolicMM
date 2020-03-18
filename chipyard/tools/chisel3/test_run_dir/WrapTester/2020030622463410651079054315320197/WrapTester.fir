;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit WrapTester : 
  module WrapTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    when UInt<1>("h01") : @[Counter.scala 71:17]
      skip @[Counter.scala 71:17]
    node wrap = and(UInt<1>("h01"), UInt<1>("h01")) @[Counter.scala 72:20]
    when wrap : @[Counter.scala 32:14]
      node _T = eq(UInt<1>("h00"), UInt<1>("h00")) @[Counter.scala 33:16]
      node _T_1 = bits(reset, 0, 0) @[Counter.scala 33:11]
      node _T_2 = or(_T, _T_1) @[Counter.scala 33:11]
      node _T_3 = eq(_T_2, UInt<1>("h00")) @[Counter.scala 33:11]
      when _T_3 : @[Counter.scala 33:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at Counter.scala:33 assert(cnt === (max - 1).asUInt)\n") @[Counter.scala 33:11]
        stop(clock, UInt<1>(1), 1) @[Counter.scala 33:11]
        skip @[Counter.scala 33:11]
      node _T_4 = bits(reset, 0, 0) @[Counter.scala 34:9]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[Counter.scala 34:9]
      when _T_5 : @[Counter.scala 34:9]
        stop(clock, UInt<1>(1), 0) @[Counter.scala 34:9]
        skip @[Counter.scala 34:9]
      skip @[Counter.scala 32:14]
    
