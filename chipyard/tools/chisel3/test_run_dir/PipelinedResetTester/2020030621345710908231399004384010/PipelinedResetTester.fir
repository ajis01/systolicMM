;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit PipelinedResetTester : 
  module PipelinedResetModule : 
    input clock : Clock
    input reset : Reset
    output io : {}
    
    reg a : UInt, clock with : (reset => (reset, UInt<16>("h0beef"))) @[Assert.scala 29:18]
    reg b : UInt, clock with : (reset => (reset, UInt<16>("h0beef"))) @[Assert.scala 30:18]
    node _T = eq(a, b) @[Assert.scala 31:12]
    node _T_1 = asUInt(reset) @[Assert.scala 31:9]
    node _T_2 = or(_T, _T_1) @[Assert.scala 31:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[Assert.scala 31:9]
    when _T_3 : @[Assert.scala 31:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at Assert.scala:31 assert(a === b)\n") @[Assert.scala 31:9]
      stop(clock, UInt<1>(1), 1) @[Assert.scala 31:9]
      skip @[Assert.scala 31:9]
    
  module PipelinedResetTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst module of PipelinedResetModule @[Assert.scala 36:22]
    module.clock <= clock
    module.reset <= reset
    reg _T : UInt<1>, clock @[Assert.scala 38:42]
    _T <= reset @[Assert.scala 38:42]
    reg _T_1 : UInt<1>, clock @[Assert.scala 38:34]
    _T_1 <= _T @[Assert.scala 38:34]
    reg _T_2 : UInt<1>, clock @[Assert.scala 38:26]
    _T_2 <= _T_1 @[Assert.scala 38:26]
    module.reset <= _T_2 @[Assert.scala 38:16]
    node _T_3 = bits(reset, 0, 0) @[Assert.scala 40:34]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[Assert.scala 40:27]
    reg value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 29:33]
    when _T_4 : @[Counter.scala 71:17]
      node _T_5 = eq(value, UInt<2>("h03")) @[Counter.scala 37:24]
      node _T_6 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_7 = tail(_T_6, 1) @[Counter.scala 38:22]
      value <= _T_7 @[Counter.scala 38:13]
      skip @[Counter.scala 71:17]
    node done = and(_T_4, _T_5) @[Counter.scala 72:20]
    when done : @[Assert.scala 41:15]
      node _T_8 = bits(reset, 0, 0) @[Assert.scala 42:9]
      node _T_9 = eq(_T_8, UInt<1>("h00")) @[Assert.scala 42:9]
      when _T_9 : @[Assert.scala 42:9]
        stop(clock, UInt<1>(1), 0) @[Assert.scala 42:9]
        skip @[Assert.scala 42:9]
      skip @[Assert.scala 41:15]
    
