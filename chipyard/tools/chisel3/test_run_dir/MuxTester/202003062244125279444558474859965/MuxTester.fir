;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit MuxTester : 
  module MuxTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _T = mux(UInt<1>("h00"), UInt<1>("h01"), UInt<2>("h02")) @[MuxSpec.scala 9:13]
    node _T_1 = eq(_T, UInt<2>("h02")) @[MuxSpec.scala 9:29]
    node _T_2 = bits(reset, 0, 0) @[MuxSpec.scala 9:9]
    node _T_3 = or(_T_1, _T_2) @[MuxSpec.scala 9:9]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[MuxSpec.scala 9:9]
    when _T_4 : @[MuxSpec.scala 9:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MuxSpec.scala:9 assert(Mux(0.B, 1.U, 2.U) === 2.U)\n") @[MuxSpec.scala 9:9]
      stop(clock, UInt<1>(1), 1) @[MuxSpec.scala 9:9]
      skip @[MuxSpec.scala 9:9]
    node _T_5 = mux(UInt<1>("h01"), UInt<1>("h01"), UInt<2>("h02")) @[MuxSpec.scala 10:13]
    node _T_6 = eq(_T_5, UInt<1>("h01")) @[MuxSpec.scala 10:29]
    node _T_7 = bits(reset, 0, 0) @[MuxSpec.scala 10:9]
    node _T_8 = or(_T_6, _T_7) @[MuxSpec.scala 10:9]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[MuxSpec.scala 10:9]
    when _T_9 : @[MuxSpec.scala 10:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MuxSpec.scala:10 assert(Mux(1.B, 1.U, 2.U) === 1.U)\n") @[MuxSpec.scala 10:9]
      stop(clock, UInt<1>(1), 1) @[MuxSpec.scala 10:9]
      skip @[MuxSpec.scala 10:9]
    wire dontCareMux1 : UInt @[MuxSpec.scala 11:26]
    wire _T_11 : UInt<3> @[MuxSpec.scala 12:22]
    _T_11 is invalid @[MuxSpec.scala 12:22]
    node _T_10 = mux(UInt<1>("h00"), _T_11, UInt<3>("h04")) @[MuxSpec.scala 12:22]
    dontCareMux1 <= _T_10 @[MuxSpec.scala 12:16]
    node _T_12 = eq(dontCareMux1, UInt<3>("h04")) @[MuxSpec.scala 13:23]
    node _T_13 = bits(reset, 0, 0) @[MuxSpec.scala 13:9]
    node _T_14 = or(_T_12, _T_13) @[MuxSpec.scala 13:9]
    node _T_15 = eq(_T_14, UInt<1>("h00")) @[MuxSpec.scala 13:9]
    when _T_15 : @[MuxSpec.scala 13:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MuxSpec.scala:13 assert(dontCareMux1 === 4.U)\n") @[MuxSpec.scala 13:9]
      stop(clock, UInt<1>(1), 1) @[MuxSpec.scala 13:9]
      skip @[MuxSpec.scala 13:9]
    wire dontCareMux2 : UInt @[MuxSpec.scala 15:26]
    wire _T_17 : UInt<2> @[MuxSpec.scala 16:22]
    _T_17 is invalid @[MuxSpec.scala 16:22]
    node _T_16 = mux(UInt<1>("h01"), UInt<2>("h03"), _T_17) @[MuxSpec.scala 16:22]
    dontCareMux2 <= _T_16 @[MuxSpec.scala 16:16]
    node _T_18 = eq(dontCareMux2, UInt<2>("h03")) @[MuxSpec.scala 17:23]
    node _T_19 = bits(reset, 0, 0) @[MuxSpec.scala 17:9]
    node _T_20 = or(_T_18, _T_19) @[MuxSpec.scala 17:9]
    node _T_21 = eq(_T_20, UInt<1>("h00")) @[MuxSpec.scala 17:9]
    when _T_21 : @[MuxSpec.scala 17:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MuxSpec.scala:17 assert(dontCareMux2 === 3.U)\n") @[MuxSpec.scala 17:9]
      stop(clock, UInt<1>(1), 1) @[MuxSpec.scala 17:9]
      skip @[MuxSpec.scala 17:9]
    wire _T_23 : UInt<2> @[MuxSpec.scala 19:6]
    _T_23 is invalid @[MuxSpec.scala 19:6]
    node _T_22 = mux(UInt<1>("h00"), UInt<2>("h03"), _T_23) @[MuxSpec.scala 19:6]
    node _T_24 = bits(reset, 0, 0) @[MuxSpec.scala 20:7]
    node _T_25 = eq(_T_24, UInt<1>("h00")) @[MuxSpec.scala 20:7]
    when _T_25 : @[MuxSpec.scala 20:7]
      stop(clock, UInt<1>(1), 0) @[MuxSpec.scala 20:7]
      skip @[MuxSpec.scala 20:7]
    
