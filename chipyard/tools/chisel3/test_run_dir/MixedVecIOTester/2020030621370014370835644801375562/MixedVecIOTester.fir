;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit MixedVecIOTester : 
  module MixedVecIOPassthroughModule : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : {7 : UInt<2>, 6 : UInt<2>, 5 : UInt<2>, 4 : UInt<2>, 3 : UInt<2>, 2 : UInt<2>, 1 : UInt<2>, 0 : UInt<2>}, out : {7 : UInt<2>, 6 : UInt<2>, 5 : UInt<2>, 4 : UInt<2>, 3 : UInt<2>, 2 : UInt<2>, 1 : UInt<2>, 0 : UInt<2>}}
    
    io.out.0 <= io.in.0 @[MixedVec.scala 111:9]
    io.out.1 <= io.in.1 @[MixedVec.scala 111:9]
    io.out.2 <= io.in.2 @[MixedVec.scala 111:9]
    io.out.3 <= io.in.3 @[MixedVec.scala 111:9]
    io.out.4 <= io.in.4 @[MixedVec.scala 111:9]
    io.out.5 <= io.in.5 @[MixedVec.scala 111:9]
    io.out.6 <= io.in.6 @[MixedVec.scala 111:9]
    io.out.7 <= io.in.7 @[MixedVec.scala 111:9]
    
  module MixedVecIOTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire v : {7 : UInt<2>, 6 : UInt<2>, 5 : UInt<2>, 4 : UInt<2>, 3 : UInt<2>, 2 : UInt<2>, 1 : UInt<2>, 0 : UInt<2>} @[MixedVec.scala 27:26]
    v.0 <= UInt<2>("h02") @[MixedVec.scala 30:9]
    v.1 <= UInt<2>("h01") @[MixedVec.scala 30:9]
    v.2 <= UInt<2>("h03") @[MixedVec.scala 30:9]
    v.3 <= UInt<2>("h00") @[MixedVec.scala 30:9]
    v.4 <= UInt<2>("h02") @[MixedVec.scala 30:9]
    v.5 <= UInt<2>("h03") @[MixedVec.scala 30:9]
    v.6 <= UInt<2>("h03") @[MixedVec.scala 30:9]
    v.7 <= UInt<2>("h00") @[MixedVec.scala 30:9]
    inst dut of MixedVecIOPassthroughModule @[MixedVecSpec.scala 47:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.in.0 <= v.0 @[MixedVec.scala 111:9]
    dut.io.in.1 <= v.1 @[MixedVec.scala 111:9]
    dut.io.in.2 <= v.2 @[MixedVec.scala 111:9]
    dut.io.in.3 <= v.3 @[MixedVec.scala 111:9]
    dut.io.in.4 <= v.4 @[MixedVec.scala 111:9]
    dut.io.in.5 <= v.5 @[MixedVec.scala 111:9]
    dut.io.in.6 <= v.6 @[MixedVec.scala 111:9]
    dut.io.in.7 <= v.7 @[MixedVec.scala 111:9]
    node _T = eq(dut.io.out.0, UInt<2>("h02")) @[MixedVecSpec.scala 50:21]
    node _T_1 = bits(reset, 0, 0) @[MixedVecSpec.scala 50:11]
    node _T_2 = or(_T, _T_1) @[MixedVecSpec.scala 50:11]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[MixedVecSpec.scala 50:11]
    when _T_3 : @[MixedVecSpec.scala 50:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:50 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 50:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 50:11]
      skip @[MixedVecSpec.scala 50:11]
    node _T_4 = eq(dut.io.out.1, UInt<2>("h01")) @[MixedVecSpec.scala 50:21]
    node _T_5 = bits(reset, 0, 0) @[MixedVecSpec.scala 50:11]
    node _T_6 = or(_T_4, _T_5) @[MixedVecSpec.scala 50:11]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[MixedVecSpec.scala 50:11]
    when _T_7 : @[MixedVecSpec.scala 50:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:50 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 50:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 50:11]
      skip @[MixedVecSpec.scala 50:11]
    node _T_8 = eq(dut.io.out.2, UInt<2>("h03")) @[MixedVecSpec.scala 50:21]
    node _T_9 = bits(reset, 0, 0) @[MixedVecSpec.scala 50:11]
    node _T_10 = or(_T_8, _T_9) @[MixedVecSpec.scala 50:11]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[MixedVecSpec.scala 50:11]
    when _T_11 : @[MixedVecSpec.scala 50:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:50 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 50:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 50:11]
      skip @[MixedVecSpec.scala 50:11]
    node _T_12 = eq(dut.io.out.3, UInt<2>("h00")) @[MixedVecSpec.scala 50:21]
    node _T_13 = bits(reset, 0, 0) @[MixedVecSpec.scala 50:11]
    node _T_14 = or(_T_12, _T_13) @[MixedVecSpec.scala 50:11]
    node _T_15 = eq(_T_14, UInt<1>("h00")) @[MixedVecSpec.scala 50:11]
    when _T_15 : @[MixedVecSpec.scala 50:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:50 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 50:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 50:11]
      skip @[MixedVecSpec.scala 50:11]
    node _T_16 = eq(dut.io.out.4, UInt<2>("h02")) @[MixedVecSpec.scala 50:21]
    node _T_17 = bits(reset, 0, 0) @[MixedVecSpec.scala 50:11]
    node _T_18 = or(_T_16, _T_17) @[MixedVecSpec.scala 50:11]
    node _T_19 = eq(_T_18, UInt<1>("h00")) @[MixedVecSpec.scala 50:11]
    when _T_19 : @[MixedVecSpec.scala 50:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:50 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 50:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 50:11]
      skip @[MixedVecSpec.scala 50:11]
    node _T_20 = eq(dut.io.out.5, UInt<2>("h03")) @[MixedVecSpec.scala 50:21]
    node _T_21 = bits(reset, 0, 0) @[MixedVecSpec.scala 50:11]
    node _T_22 = or(_T_20, _T_21) @[MixedVecSpec.scala 50:11]
    node _T_23 = eq(_T_22, UInt<1>("h00")) @[MixedVecSpec.scala 50:11]
    when _T_23 : @[MixedVecSpec.scala 50:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:50 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 50:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 50:11]
      skip @[MixedVecSpec.scala 50:11]
    node _T_24 = eq(dut.io.out.6, UInt<2>("h03")) @[MixedVecSpec.scala 50:21]
    node _T_25 = bits(reset, 0, 0) @[MixedVecSpec.scala 50:11]
    node _T_26 = or(_T_24, _T_25) @[MixedVecSpec.scala 50:11]
    node _T_27 = eq(_T_26, UInt<1>("h00")) @[MixedVecSpec.scala 50:11]
    when _T_27 : @[MixedVecSpec.scala 50:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:50 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 50:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 50:11]
      skip @[MixedVecSpec.scala 50:11]
    node _T_28 = eq(dut.io.out.7, UInt<2>("h00")) @[MixedVecSpec.scala 50:21]
    node _T_29 = bits(reset, 0, 0) @[MixedVecSpec.scala 50:11]
    node _T_30 = or(_T_28, _T_29) @[MixedVecSpec.scala 50:11]
    node _T_31 = eq(_T_30, UInt<1>("h00")) @[MixedVecSpec.scala 50:11]
    when _T_31 : @[MixedVecSpec.scala 50:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:50 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 50:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 50:11]
      skip @[MixedVecSpec.scala 50:11]
    node _T_32 = bits(reset, 0, 0) @[MixedVecSpec.scala 52:7]
    node _T_33 = eq(_T_32, UInt<1>("h00")) @[MixedVecSpec.scala 52:7]
    when _T_33 : @[MixedVecSpec.scala 52:7]
      stop(clock, UInt<1>(1), 0) @[MixedVecSpec.scala 52:7]
      skip @[MixedVecSpec.scala 52:7]
    
