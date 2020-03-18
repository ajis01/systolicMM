;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit SimpleOneHotTester : 
  module SimpleOneHotTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire out : UInt @[OneHotMuxSpec.scala 57:17]
    node _T = mux(UInt<1>("h00"), UInt<2>("h02"), UInt<1>("h00")) @[Mux.scala 27:72]
    node _T_1 = mux(UInt<1>("h00"), UInt<3>("h04"), UInt<1>("h00")) @[Mux.scala 27:72]
    node _T_2 = mux(UInt<1>("h01"), UInt<4>("h08"), UInt<1>("h00")) @[Mux.scala 27:72]
    node _T_3 = mux(UInt<1>("h00"), UInt<4>("h0b"), UInt<1>("h00")) @[Mux.scala 27:72]
    node _T_4 = or(_T, _T_1) @[Mux.scala 27:72]
    node _T_5 = or(_T_4, _T_2) @[Mux.scala 27:72]
    node _T_6 = or(_T_5, _T_3) @[Mux.scala 27:72]
    wire _T_7 : UInt<4> @[Mux.scala 27:72]
    _T_7 <= _T_6 @[Mux.scala 27:72]
    out <= _T_7 @[OneHotMuxSpec.scala 58:7]
    node _T_8 = eq(out, UInt<4>("h08")) @[OneHotMuxSpec.scala 65:14]
    node _T_9 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 65:9]
    node _T_10 = or(_T_8, _T_9) @[OneHotMuxSpec.scala 65:9]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[OneHotMuxSpec.scala 65:9]
    when _T_11 : @[OneHotMuxSpec.scala 65:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at OneHotMuxSpec.scala:65 assert(out === 8.U)\n") @[OneHotMuxSpec.scala 65:9]
      stop(clock, UInt<1>(1), 1) @[OneHotMuxSpec.scala 65:9]
      skip @[OneHotMuxSpec.scala 65:9]
    node _T_12 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 67:7]
    node _T_13 = eq(_T_12, UInt<1>("h00")) @[OneHotMuxSpec.scala 67:7]
    when _T_13 : @[OneHotMuxSpec.scala 67:7]
      stop(clock, UInt<1>(1), 0) @[OneHotMuxSpec.scala 67:7]
      skip @[OneHotMuxSpec.scala 67:7]
    
