;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit SBPTester : 
  module SBP : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : Fixed<6><<2>>, out : Fixed<4><<0>>}
    
    node _T = bpset(io.in, 0) @[FixedPointSpec.scala 101:33]
    io.out <= _T @[FixedPointSpec.scala 101:10]
    
  module SBPTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst dut of SBP @[FixedPointSpec.scala 105:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.in <= asFixedPoint(UInt<5>("h0f"), 2) @[FixedPointSpec.scala 106:13]
    node _T = eq(dut.io.out, asFixedPoint(UInt<3>("h03"), 0)) @[FixedPointSpec.scala 108:21]
    node _T_1 = bits(reset, 0, 0) @[FixedPointSpec.scala 108:9]
    node _T_2 = or(_T, _T_1) @[FixedPointSpec.scala 108:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[FixedPointSpec.scala 108:9]
    when _T_3 : @[FixedPointSpec.scala 108:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at FixedPointSpec.scala:108 assert(dut.io.out === 3.0.F(0.BP))\n") @[FixedPointSpec.scala 108:9]
      stop(clock, UInt<1>(1), 1) @[FixedPointSpec.scala 108:9]
      skip @[FixedPointSpec.scala 108:9]
    wire test : Fixed<10><<5>> @[FixedPointSpec.scala 110:18]
    test <= asFixedPoint(UInt<1>("h00"), 5) @[FixedPointSpec.scala 112:8]
    node q = bpset(test, 18) @[FixedPointSpec.scala 113:30]
    node _T_4 = eq(UInt<5>("h017"), UInt<5>("h017")) @[FixedPointSpec.scala 114:23]
    node _T_5 = bits(reset, 0, 0) @[FixedPointSpec.scala 114:9]
    node _T_6 = or(_T_4, _T_5) @[FixedPointSpec.scala 114:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[FixedPointSpec.scala 114:9]
    when _T_7 : @[FixedPointSpec.scala 114:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at FixedPointSpec.scala:114 assert(q.getWidth.U === 23.U)\n") @[FixedPointSpec.scala 114:9]
      stop(clock, UInt<1>(1), 1) @[FixedPointSpec.scala 114:9]
      skip @[FixedPointSpec.scala 114:9]
    node _T_8 = bits(reset, 0, 0) @[FixedPointSpec.scala 116:7]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[FixedPointSpec.scala 116:7]
    when _T_9 : @[FixedPointSpec.scala 116:7]
      stop(clock, UInt<1>(1), 0) @[FixedPointSpec.scala 116:7]
      skip @[FixedPointSpec.scala 116:7]
    
