;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit SomeOptionBundleTester : 
  module OptionBundleModule : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<1>, out : UInt<1>}
    
    io.out <= io.in @[OptionBundle.scala 20:12]
    
  module SomeOptionBundleTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst mod of OptionBundleModule @[OptionBundle.scala 27:19]
    mod.clock <= clock
    mod.reset <= reset
    mod.io.in <= UInt<1>("h00") @[OptionBundle.scala 28:17]
    node _T = eq(mod.io.out, UInt<1>("h00")) @[OptionBundle.scala 29:21]
    node _T_1 = bits(reset, 0, 0) @[OptionBundle.scala 29:9]
    node _T_2 = or(_T, _T_1) @[OptionBundle.scala 29:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[OptionBundle.scala 29:9]
    when _T_3 : @[OptionBundle.scala 29:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at OptionBundle.scala:29 assert(mod.io.out === expected.asBool)\n") @[OptionBundle.scala 29:9]
      stop(clock, UInt<1>(1), 1) @[OptionBundle.scala 29:9]
      skip @[OptionBundle.scala 29:9]
    node _T_4 = bits(reset, 0, 0) @[OptionBundle.scala 30:7]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[OptionBundle.scala 30:7]
    when _T_5 : @[OptionBundle.scala 30:7]
      stop(clock, UInt<1>(1), 0) @[OptionBundle.scala 30:7]
      skip @[OptionBundle.scala 30:7]
    
