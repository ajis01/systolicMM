;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit PopCountTester : 
  module PopCountTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg x : UInt<3>, clock with : (reset => (reset, UInt<3>("h00"))) @[PopCount.scala 10:18]
    node _T = add(x, UInt<1>("h01")) @[PopCount.scala 11:10]
    node _T_1 = tail(_T, 1) @[PopCount.scala 11:10]
    x <= _T_1 @[PopCount.scala 11:5]
    node _T_2 = not(UInt<3>("h00")) @[PopCount.scala 12:23]
    node _T_3 = eq(x, _T_2) @[PopCount.scala 12:19]
    reg _T_4 : UInt<1>, clock @[PopCount.scala 12:16]
    _T_4 <= _T_3 @[PopCount.scala 12:16]
    when _T_4 : @[PopCount.scala 12:35]
      node _T_5 = bits(reset, 0, 0) @[PopCount.scala 12:41]
      node _T_6 = eq(_T_5, UInt<1>("h00")) @[PopCount.scala 12:41]
      when _T_6 : @[PopCount.scala 12:41]
        stop(clock, UInt<1>(1), 0) @[PopCount.scala 12:41]
        skip @[PopCount.scala 12:41]
      skip @[PopCount.scala 12:35]
    node _T_7 = bits(x, 0, 0) @[PopCount.scala 14:27]
    node _T_8 = bits(x, 1, 1) @[PopCount.scala 14:27]
    node _T_9 = bits(x, 2, 2) @[PopCount.scala 14:27]
    node _T_10 = add(_T_8, _T_9) @[Bitwise.scala 47:55]
    node _T_11 = bits(_T_10, 1, 0) @[Bitwise.scala 47:55]
    node _T_12 = add(_T_7, _T_11) @[Bitwise.scala 47:55]
    node result = bits(_T_12, 1, 0) @[Bitwise.scala 47:55]
    node _T_13 = bits(x, 0, 0) @[PopCount.scala 15:20]
    node _T_14 = bits(x, 1, 1) @[PopCount.scala 15:20]
    node _T_15 = bits(x, 2, 2) @[PopCount.scala 15:20]
    node _T_16 = add(UInt<1>("h00"), _T_13) @[PopCount.scala 15:44]
    node _T_17 = add(_T_16, _T_14) @[PopCount.scala 15:44]
    node expected = add(_T_17, _T_15) @[PopCount.scala 15:44]
    node _T_18 = eq(result, expected) @[PopCount.scala 16:17]
    node _T_19 = bits(reset, 0, 0) @[PopCount.scala 16:9]
    node _T_20 = or(_T_18, _T_19) @[PopCount.scala 16:9]
    node _T_21 = eq(_T_20, UInt<1>("h00")) @[PopCount.scala 16:9]
    when _T_21 : @[PopCount.scala 16:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at PopCount.scala:16 assert(result === expected)\n") @[PopCount.scala 16:9]
      stop(clock, UInt<1>(1), 1) @[PopCount.scala 16:9]
      skip @[PopCount.scala 16:9]
    
