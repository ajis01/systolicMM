;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit AllSameFixedPointOneHotTester : 
  module AllSameFixedPointOneHotTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire out : Fixed<12><<3>> @[OneHotMuxSpec.scala 100:17]
    node _T = asUInt(asFixedPoint(UInt<12>("h0ff4"), 3)) @[Mux.scala 27:72]
    node _T_1 = mux(UInt<1>("h00"), _T, UInt<1>("h00")) @[Mux.scala 27:72]
    node _T_2 = asUInt(asFixedPoint(UInt<12>("h0fee"), 3)) @[Mux.scala 27:72]
    node _T_3 = mux(UInt<1>("h01"), _T_2, UInt<1>("h00")) @[Mux.scala 27:72]
    node _T_4 = asUInt(asFixedPoint(UInt<12>("h0fdf"), 3)) @[Mux.scala 27:72]
    node _T_5 = mux(UInt<1>("h00"), _T_4, UInt<1>("h00")) @[Mux.scala 27:72]
    node _T_6 = asUInt(asFixedPoint(UInt<12>("h0fa3"), 3)) @[Mux.scala 27:72]
    node _T_7 = mux(UInt<1>("h00"), _T_6, UInt<1>("h00")) @[Mux.scala 27:72]
    node _T_8 = or(_T_1, _T_3) @[Mux.scala 27:72]
    node _T_9 = or(_T_8, _T_5) @[Mux.scala 27:72]
    node _T_10 = or(_T_9, _T_7) @[Mux.scala 27:72]
    wire _T_11 : Fixed<12><<3>> @[Mux.scala 27:72]
    node _T_12 = asFixedPoint(_T_10, 3) @[Mux.scala 27:72]
    _T_11 <= _T_12 @[Mux.scala 27:72]
    out <= _T_11 @[OneHotMuxSpec.scala 102:7]
    node _T_13 = eq(out, asFixedPoint(UInt<14>("h03fdc"), 4)) @[OneHotMuxSpec.scala 109:14]
    node _T_14 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 109:9]
    node _T_15 = or(_T_13, _T_14) @[OneHotMuxSpec.scala 109:9]
    node _T_16 = eq(_T_15, UInt<1>("h00")) @[OneHotMuxSpec.scala 109:9]
    when _T_16 : @[OneHotMuxSpec.scala 109:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at OneHotMuxSpec.scala:109 assert(out === (-2.25).F(14.W, 4.BP))\n") @[OneHotMuxSpec.scala 109:9]
      stop(clock, UInt<1>(1), 1) @[OneHotMuxSpec.scala 109:9]
      skip @[OneHotMuxSpec.scala 109:9]
    node _T_17 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 111:7]
    node _T_18 = eq(_T_17, UInt<1>("h00")) @[OneHotMuxSpec.scala 111:7]
    when _T_18 : @[OneHotMuxSpec.scala 111:7]
      stop(clock, UInt<1>(1), 0) @[OneHotMuxSpec.scala 111:7]
      skip @[OneHotMuxSpec.scala 111:7]
    
