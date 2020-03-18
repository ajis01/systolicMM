;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit CountTester : 
  module CountTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 29:33]
    when UInt<1>("h01") : @[Counter.scala 11:16]
      node _T = eq(value, UInt<2>("h02")) @[Counter.scala 37:24]
      node _T_1 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_2 = tail(_T_1, 1) @[Counter.scala 38:22]
      value <= _T_2 @[Counter.scala 38:13]
      when _T : @[Counter.scala 40:21]
        value <= UInt<1>("h00") @[Counter.scala 40:29]
        skip @[Counter.scala 40:21]
      skip @[Counter.scala 11:16]
    node _T_3 = eq(value, UInt<2>("h02")) @[Counter.scala 12:18]
    when _T_3 : @[Counter.scala 12:38]
      node _T_4 = bits(reset, 0, 0) @[Counter.scala 13:9]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[Counter.scala 13:9]
      when _T_5 : @[Counter.scala 13:9]
        stop(clock, UInt<1>(1), 0) @[Counter.scala 13:9]
        skip @[Counter.scala 13:9]
      skip @[Counter.scala 12:38]
    
