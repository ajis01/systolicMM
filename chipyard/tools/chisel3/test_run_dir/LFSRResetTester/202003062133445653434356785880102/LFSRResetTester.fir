;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit LFSRResetTester : 
  module FooLFSR : 
    input clock : Clock
    input reset : Reset
    output io : {flip seed : {valid : UInt<1>, bits : UInt<1>[4]}, flip increment : UInt<1>, out : UInt<1>[4]}
    
    wire _T : UInt<1>[4]
    _T[0] is invalid
    _T[1] is invalid
    _T[2] is invalid
    _T[3] is invalid
    _T[0] <= UInt<1>("h00") @[LFSR.scala 62:29]
    reg state : UInt<1>[4], clock with : (reset => (reset, _T)) @[PRNG.scala 47:50]
    when io.increment : @[PRNG.scala 61:23]
      state[0] <= state[0] @[PRNG.scala 62:11]
      state[1] <= state[1] @[PRNG.scala 62:11]
      state[2] <= state[2] @[PRNG.scala 62:11]
      state[3] <= state[3] @[PRNG.scala 62:11]
      skip @[PRNG.scala 61:23]
    when io.seed.valid : @[PRNG.scala 65:25]
      state[0] <= io.seed.bits[0] @[PRNG.scala 66:11]
      state[1] <= io.seed.bits[1] @[PRNG.scala 66:11]
      state[2] <= io.seed.bits[2] @[PRNG.scala 66:11]
      state[3] <= io.seed.bits[3] @[PRNG.scala 66:11]
      skip @[PRNG.scala 65:25]
    io.out[0] <= state[0] @[PRNG.scala 69:10]
    io.out[1] <= state[1] @[PRNG.scala 69:10]
    io.out[2] <= state[2] @[PRNG.scala 69:10]
    io.out[3] <= state[3] @[PRNG.scala 69:10]
    
  module LFSRResetTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst lfsr of FooLFSR @[LFSRSpec.scala 26:20]
    lfsr.clock <= clock
    lfsr.reset <= reset
    lfsr.io.seed.valid <= UInt<1>("h00") @[LFSRSpec.scala 27:22]
    lfsr.io.seed.bits[0] is invalid @[LFSRSpec.scala 28:21]
    lfsr.io.seed.bits[1] is invalid @[LFSRSpec.scala 28:21]
    lfsr.io.seed.bits[2] is invalid @[LFSRSpec.scala 28:21]
    lfsr.io.seed.bits[3] is invalid @[LFSRSpec.scala 28:21]
    lfsr.io.increment <= UInt<1>("h01") @[LFSRSpec.scala 29:21]
    reg value : UInt<3>, clock with : (reset => (reset, UInt<3>("h00"))) @[Counter.scala 29:33]
    when UInt<1>("h01") : @[Counter.scala 71:17]
      node _T = eq(value, UInt<3>("h04")) @[Counter.scala 37:24]
      node _T_1 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_2 = tail(_T_1, 1) @[Counter.scala 38:22]
      value <= _T_2 @[Counter.scala 38:13]
      when _T : @[Counter.scala 40:21]
        value <= UInt<1>("h00") @[Counter.scala 40:29]
        skip @[Counter.scala 40:21]
      skip @[Counter.scala 71:17]
    node done = and(UInt<1>("h01"), _T) @[Counter.scala 72:20]
    node _T_3 = eq(value, UInt<1>("h01")) @[LFSRSpec.scala 33:31]
    lfsr.io.seed.valid <= _T_3 @[LFSRSpec.scala 33:22]
    lfsr.io.seed.bits[0] <= UInt<1>("h01") @[LFSRSpec.scala 34:21]
    lfsr.io.seed.bits[1] <= UInt<1>("h01") @[LFSRSpec.scala 34:21]
    lfsr.io.seed.bits[2] <= UInt<1>("h01") @[LFSRSpec.scala 34:21]
    lfsr.io.seed.bits[3] <= UInt<1>("h01") @[LFSRSpec.scala 34:21]
    lfsr.io.increment <= UInt<1>("h01") @[LFSRSpec.scala 35:21]
    node _T_4 = eq(value, UInt<2>("h02")) @[LFSRSpec.scala 37:15]
    when _T_4 : @[LFSRSpec.scala 37:24]
      node _T_5 = cat(lfsr.io.out[1], lfsr.io.out[0]) @[LFSRSpec.scala 38:24]
      node _T_6 = cat(lfsr.io.out[3], lfsr.io.out[2]) @[LFSRSpec.scala 38:24]
      node _T_7 = cat(_T_6, _T_5) @[LFSRSpec.scala 38:24]
      node _T_8 = eq(_T_7, UInt<4>("h0f")) @[LFSRSpec.scala 38:31]
      node _T_9 = bits(reset, 0, 0) @[LFSRSpec.scala 38:11]
      node _T_10 = or(_T_8, _T_9) @[LFSRSpec.scala 38:11]
      node _T_11 = eq(_T_10, UInt<1>("h00")) @[LFSRSpec.scala 38:11]
      when _T_11 : @[LFSRSpec.scala 38:11]
        printf(clock, UInt<1>(1), "Assertion failed: LFSR is NOT locked up, but should be!\n    at LFSRSpec.scala:38 assert(lfsr.io.out.asUInt === lockUpValue.U, \"LFSR is NOT locked up, but should be!\")\n") @[LFSRSpec.scala 38:11]
        stop(clock, UInt<1>(1), 1) @[LFSRSpec.scala 38:11]
        skip @[LFSRSpec.scala 38:11]
      skip @[LFSRSpec.scala 37:24]
    node _T_12 = eq(value, UInt<2>("h03")) @[LFSRSpec.scala 41:23]
    lfsr.reset <= _T_12 @[LFSRSpec.scala 41:14]
    node _T_13 = eq(value, UInt<3>("h04")) @[LFSRSpec.scala 43:15]
    when _T_13 : @[LFSRSpec.scala 43:24]
      node _T_14 = cat(lfsr.io.out[1], lfsr.io.out[0]) @[LFSRSpec.scala 44:24]
      node _T_15 = cat(lfsr.io.out[3], lfsr.io.out[2]) @[LFSRSpec.scala 44:24]
      node _T_16 = cat(_T_15, _T_14) @[LFSRSpec.scala 44:24]
      node _T_17 = neq(_T_16, UInt<4>("h0f")) @[LFSRSpec.scala 44:31]
      node _T_18 = bits(reset, 0, 0) @[LFSRSpec.scala 44:11]
      node _T_19 = or(_T_17, _T_18) @[LFSRSpec.scala 44:11]
      node _T_20 = eq(_T_19, UInt<1>("h00")) @[LFSRSpec.scala 44:11]
      when _T_20 : @[LFSRSpec.scala 44:11]
        printf(clock, UInt<1>(1), "Assertion failed: LFSR is locked up, but should not be after reset!\n    at LFSRSpec.scala:44 assert(lfsr.io.out.asUInt =/= lockUpValue.U, \"LFSR is locked up, but should not be after reset!\")\n") @[LFSRSpec.scala 44:11]
        stop(clock, UInt<1>(1), 1) @[LFSRSpec.scala 44:11]
        skip @[LFSRSpec.scala 44:11]
      skip @[LFSRSpec.scala 43:24]
    when done : @[LFSRSpec.scala 47:15]
      node _T_21 = bits(reset, 0, 0) @[LFSRSpec.scala 48:9]
      node _T_22 = eq(_T_21, UInt<1>("h00")) @[LFSRSpec.scala 48:9]
      when _T_22 : @[LFSRSpec.scala 48:9]
        stop(clock, UInt<1>(1), 0) @[LFSRSpec.scala 48:9]
        skip @[LFSRSpec.scala 48:9]
      skip @[LFSRSpec.scala 47:15]
    
