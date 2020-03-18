;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit FailingAssertTester : 
  module FailingAssertTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _T = bits(reset, 0, 0) @[Assert.scala 10:9]
    node _T_1 = or(UInt<1>("h00"), _T) @[Assert.scala 10:9]
    node _T_2 = eq(_T_1, UInt<1>("h00")) @[Assert.scala 10:9]
    when _T_2 : @[Assert.scala 10:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at Assert.scala:10 assert(false.B)\n") @[Assert.scala 10:9]
      stop(clock, UInt<1>(1), 1) @[Assert.scala 10:9]
      skip @[Assert.scala 10:9]
    node _T_3 = bits(reset, 0, 0) @[Assert.scala 12:34]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[Assert.scala 12:27]
    reg value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 29:33]
    when _T_4 : @[Counter.scala 71:17]
      node _T_5 = eq(value, UInt<2>("h03")) @[Counter.scala 37:24]
      node _T_6 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_7 = tail(_T_6, 1) @[Counter.scala 38:22]
      value <= _T_7 @[Counter.scala 38:13]
      skip @[Counter.scala 71:17]
    node done = and(_T_4, _T_5) @[Counter.scala 72:20]
    when done : @[Assert.scala 13:15]
      node _T_8 = bits(reset, 0, 0) @[Assert.scala 14:9]
      node _T_9 = eq(_T_8, UInt<1>("h00")) @[Assert.scala 14:9]
      when _T_9 : @[Assert.scala 14:9]
        stop(clock, UInt<1>(1), 0) @[Assert.scala 14:9]
        skip @[Assert.scala 14:9]
      skip @[Assert.scala 13:15]
    
