;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit WrapTester : 
  module WrapTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 29:33]
    when UInt<1>("h01") : @[Counter.scala 71:17]
      node _T = eq(value, UInt<2>("h03")) @[Counter.scala 37:24]
      node _T_1 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_2 = tail(_T_1, 1) @[Counter.scala 38:22]
      value <= _T_2 @[Counter.scala 38:13]
      skip @[Counter.scala 71:17]
    node wrap = and(UInt<1>("h01"), _T) @[Counter.scala 72:20]
    when wrap : @[Counter.scala 32:14]
      node _T_3 = eq(value, UInt<2>("h03")) @[Counter.scala 33:16]
      node _T_4 = bits(reset, 0, 0) @[Counter.scala 33:11]
      node _T_5 = or(_T_3, _T_4) @[Counter.scala 33:11]
      node _T_6 = eq(_T_5, UInt<1>("h00")) @[Counter.scala 33:11]
      when _T_6 : @[Counter.scala 33:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at Counter.scala:33 assert(cnt === (max - 1).asUInt)\n") @[Counter.scala 33:11]
        stop(clock, UInt<1>(1), 1) @[Counter.scala 33:11]
        skip @[Counter.scala 33:11]
      node _T_7 = bits(reset, 0, 0) @[Counter.scala 34:9]
      node _T_8 = eq(_T_7, UInt<1>("h00")) @[Counter.scala 34:9]
      when _T_8 : @[Counter.scala 34:9]
        stop(clock, UInt<1>(1), 0) @[Counter.scala 34:9]
        skip @[Counter.scala 34:9]
      skip @[Counter.scala 32:14]
    
