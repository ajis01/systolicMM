;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit ShiftTester : 
  module ShiftTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 29:33]
    when UInt<1>("h01") : @[Counter.scala 71:17]
      node _T = eq(value, UInt<2>("h02")) @[Counter.scala 37:24]
      node _T_1 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_2 = tail(_T_1, 1) @[Counter.scala 38:22]
      value <= _T_2 @[Counter.scala 38:13]
      when _T : @[Counter.scala 40:21]
        value <= UInt<1>("h00") @[Counter.scala 40:29]
        skip @[Counter.scala 40:21]
      skip @[Counter.scala 71:17]
    node done = and(UInt<1>("h01"), _T) @[Counter.scala 72:20]
    node _T_3 = add(value, UInt<5>("h017")) @[Reg.scala 45:33]
    node _T_4 = tail(_T_3, 1) @[Reg.scala 45:33]
    reg _T_5 : UInt<5>, clock @[Reg.scala 15:16]
    when UInt<1>("h01") : @[Reg.scala 16:19]
      _T_5 <= _T_4 @[Reg.scala 16:23]
      skip @[Reg.scala 16:19]
    reg _T_6 : UInt<5>, clock @[Reg.scala 15:16]
    when UInt<1>("h01") : @[Reg.scala 16:19]
      _T_6 <= _T_5 @[Reg.scala 16:23]
      skip @[Reg.scala 16:19]
    reg sr : UInt<5>, clock @[Reg.scala 15:16]
    when UInt<1>("h01") : @[Reg.scala 16:19]
      sr <= _T_6 @[Reg.scala 16:23]
      skip @[Reg.scala 16:19]
    when done : @[Reg.scala 46:14]
      node _T_7 = eq(sr, UInt<5>("h017")) @[Reg.scala 47:15]
      node _T_8 = bits(reset, 0, 0) @[Reg.scala 47:11]
      node _T_9 = or(_T_7, _T_8) @[Reg.scala 47:11]
      node _T_10 = eq(_T_9, UInt<1>("h00")) @[Reg.scala 47:11]
      when _T_10 : @[Reg.scala 47:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at Reg.scala:47 assert(sr === start)\n") @[Reg.scala 47:11]
        stop(clock, UInt<1>(1), 1) @[Reg.scala 47:11]
        skip @[Reg.scala 47:11]
      node _T_11 = bits(reset, 0, 0) @[Reg.scala 48:9]
      node _T_12 = eq(_T_11, UInt<1>("h00")) @[Reg.scala 48:9]
      when _T_12 : @[Reg.scala 48:9]
        stop(clock, UInt<1>(1), 0) @[Reg.scala 48:9]
        skip @[Reg.scala 48:9]
      skip @[Reg.scala 46:14]
    
