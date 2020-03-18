;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit DecoderTester : 
  module Decoder : 
    input clock : Clock
    input reset : Reset
    output io : {flip inst : UInt<32>, matched : UInt<1>}
    
    node _T = and(io.inst, UInt<31>("h07e3cafd7")) @[Decoder.scala 16:47]
    node _T_1 = eq(UInt<31>("h07e3cafd7"), _T) @[Decoder.scala 16:47]
    node _T_2 = and(io.inst, UInt<1>("h01")) @[Decoder.scala 16:47]
    node _T_3 = eq(UInt<1>("h01"), _T_2) @[Decoder.scala 16:47]
    wire _T_4 : UInt<1>[2] @[Decoder.scala 16:24]
    _T_4[0] <= _T_1 @[Decoder.scala 16:24]
    _T_4[1] <= _T_3 @[Decoder.scala 16:24]
    node _T_5 = or(_T_4[0], _T_4[1]) @[Decoder.scala 16:69]
    io.matched <= _T_5 @[Decoder.scala 16:14]
    
  module DecoderTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg value : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[Counter.scala 29:33]
    when UInt<1>("h01") : @[Counter.scala 71:17]
      node _T = eq(value, UInt<1>("h01")) @[Counter.scala 37:24]
      node _T_1 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_2 = tail(_T_1, 1) @[Counter.scala 38:22]
      value <= _T_2 @[Counter.scala 38:13]
      skip @[Counter.scala 71:17]
    node wrap = and(UInt<1>("h01"), _T) @[Counter.scala 72:20]
    inst dut of Decoder @[Decoder.scala 22:19]
    dut.clock <= clock
    dut.reset <= reset
    wire _T_3 : UInt<31>[2] @[Decoder.scala 23:25]
    _T_3[0] <= UInt<31>("h07fffffff") @[Decoder.scala 23:25]
    _T_3[1] <= UInt<1>("h01") @[Decoder.scala 23:25]
    dut.io.inst <= _T_3[value] @[Decoder.scala 23:15]
    node _T_4 = eq(dut.io.matched, UInt<1>("h00")) @[Decoder.scala 24:8]
    when _T_4 : @[Decoder.scala 24:25]
      node _T_5 = eq(value, UInt<1>("h00")) @[Decoder.scala 25:16]
      node _T_6 = bits(reset, 0, 0) @[Decoder.scala 25:11]
      node _T_7 = or(_T_5, _T_6) @[Decoder.scala 25:11]
      node _T_8 = eq(_T_7, UInt<1>("h00")) @[Decoder.scala 25:11]
      when _T_8 : @[Decoder.scala 25:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at Decoder.scala:25 assert(cnt === 0.U)\n") @[Decoder.scala 25:11]
        stop(clock, UInt<1>(1), 1) @[Decoder.scala 25:11]
        skip @[Decoder.scala 25:11]
      node _T_9 = bits(reset, 0, 0) @[Decoder.scala 26:9]
      node _T_10 = eq(_T_9, UInt<1>("h00")) @[Decoder.scala 26:9]
      when _T_10 : @[Decoder.scala 26:9]
        stop(clock, UInt<1>(1), 0) @[Decoder.scala 26:9]
        skip @[Decoder.scala 26:9]
      skip @[Decoder.scala 24:25]
    when wrap : @[Decoder.scala 28:14]
      node _T_11 = bits(reset, 0, 0) @[Decoder.scala 29:9]
      node _T_12 = eq(_T_11, UInt<1>("h00")) @[Decoder.scala 29:9]
      when _T_12 : @[Decoder.scala 29:9]
        stop(clock, UInt<1>(1), 0) @[Decoder.scala 29:9]
        skip @[Decoder.scala 29:9]
      skip @[Decoder.scala 28:14]
    
