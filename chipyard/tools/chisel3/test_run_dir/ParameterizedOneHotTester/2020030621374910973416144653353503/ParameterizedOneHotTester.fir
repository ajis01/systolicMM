;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit ParameterizedOneHotTester : 
  module ParameterizedOneHot : 
    input clock : Clock
    input reset : Reset
    output io : {flip selectors : UInt<1>[4], out : SInt<8>}
    
    wire _T : SInt<5> @[Mux.scala 27:72]
    node _T_1 = asUInt(asSInt(UInt<3>("h05"))) @[Mux.scala 27:72]
    node _T_2 = asSInt(_T_1) @[Mux.scala 27:72]
    _T <= _T_2 @[Mux.scala 27:72]
    wire _T_3 : SInt<5> @[Mux.scala 27:72]
    node _T_4 = asUInt(asSInt(UInt<4>("h0b"))) @[Mux.scala 27:72]
    node _T_5 = asSInt(_T_4) @[Mux.scala 27:72]
    _T_3 <= _T_5 @[Mux.scala 27:72]
    wire _T_6 : SInt<5> @[Mux.scala 27:72]
    node _T_7 = asUInt(asSInt(UInt<4>("h09"))) @[Mux.scala 27:72]
    node _T_8 = asSInt(_T_7) @[Mux.scala 27:72]
    _T_6 <= _T_8 @[Mux.scala 27:72]
    wire _T_9 : SInt<5> @[Mux.scala 27:72]
    node _T_10 = asUInt(asSInt(UInt<5>("h015"))) @[Mux.scala 27:72]
    node _T_11 = asSInt(_T_10) @[Mux.scala 27:72]
    _T_9 <= _T_11 @[Mux.scala 27:72]
    node _T_12 = mux(io.selectors[0], _T, asSInt(UInt<1>("h00"))) @[Mux.scala 27:72]
    node _T_13 = mux(io.selectors[1], _T_3, asSInt(UInt<1>("h00"))) @[Mux.scala 27:72]
    node _T_14 = mux(io.selectors[2], _T_6, asSInt(UInt<1>("h00"))) @[Mux.scala 27:72]
    node _T_15 = mux(io.selectors[3], _T_9, asSInt(UInt<1>("h00"))) @[Mux.scala 27:72]
    node _T_16 = or(_T_12, _T_13) @[Mux.scala 27:72]
    node _T_17 = asSInt(_T_16) @[Mux.scala 27:72]
    node _T_18 = or(_T_17, _T_14) @[Mux.scala 27:72]
    node _T_19 = asSInt(_T_18) @[Mux.scala 27:72]
    node _T_20 = or(_T_19, _T_15) @[Mux.scala 27:72]
    node _T_21 = asSInt(_T_20) @[Mux.scala 27:72]
    wire _T_22 : SInt<5> @[Mux.scala 27:72]
    node _T_23 = asUInt(_T_21) @[Mux.scala 27:72]
    node _T_24 = asSInt(_T_23) @[Mux.scala 27:72]
    _T_22 <= _T_24 @[Mux.scala 27:72]
    io.out <= _T_22 @[OneHotMuxSpec.scala 194:10]
    
  module ParameterizedOneHotTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst dut of ParameterizedOneHot @[OneHotMuxSpec.scala 115:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.selectors[0] <= UInt<1>("h00") @[OneHotMuxSpec.scala 116:23]
    dut.io.selectors[1] <= UInt<1>("h01") @[OneHotMuxSpec.scala 117:23]
    dut.io.selectors[2] <= UInt<1>("h00") @[OneHotMuxSpec.scala 118:23]
    dut.io.selectors[3] <= UInt<1>("h00") @[OneHotMuxSpec.scala 119:23]
    node _T = asUInt(dut.io.out) @[OneHotMuxSpec.scala 121:27]
    node _T_1 = asUInt(asSInt(UInt<8>("h0fb"))) @[OneHotMuxSpec.scala 121:49]
    node _T_2 = eq(_T, _T_1) @[OneHotMuxSpec.scala 121:30]
    node _T_3 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 121:9]
    node _T_4 = or(_T_2, _T_3) @[OneHotMuxSpec.scala 121:9]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[OneHotMuxSpec.scala 121:9]
    when _T_5 : @[OneHotMuxSpec.scala 121:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at OneHotMuxSpec.scala:121 assert(dut.io.out.asUInt() === expected.asUInt())\n") @[OneHotMuxSpec.scala 121:9]
      stop(clock, UInt<1>(1), 1) @[OneHotMuxSpec.scala 121:9]
      skip @[OneHotMuxSpec.scala 121:9]
    node _T_6 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 123:7]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[OneHotMuxSpec.scala 123:7]
    when _T_7 : @[OneHotMuxSpec.scala 123:7]
      stop(clock, UInt<1>(1), 0) @[OneHotMuxSpec.scala 123:7]
      skip @[OneHotMuxSpec.scala 123:7]
    
