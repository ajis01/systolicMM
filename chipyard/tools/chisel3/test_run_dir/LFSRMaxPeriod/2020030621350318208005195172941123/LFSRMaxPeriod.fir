;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit LFSRMaxPeriod : 
  module GaloisLFSR : 
    input clock : Clock
    input reset : Reset
    output io : {flip seed : {valid : UInt<1>, bits : UInt<1>[9]}, flip increment : UInt<1>, out : UInt<1>[9]}
    
    wire _T : UInt<1>[9] @[PRNG.scala 38:28]
    _T[0] <= UInt<1>("h01") @[PRNG.scala 38:28]
    _T[1] <= UInt<1>("h00") @[PRNG.scala 38:28]
    _T[2] <= UInt<1>("h00") @[PRNG.scala 38:28]
    _T[3] <= UInt<1>("h00") @[PRNG.scala 38:28]
    _T[4] <= UInt<1>("h00") @[PRNG.scala 38:28]
    _T[5] <= UInt<1>("h00") @[PRNG.scala 38:28]
    _T[6] <= UInt<1>("h00") @[PRNG.scala 38:28]
    _T[7] <= UInt<1>("h00") @[PRNG.scala 38:28]
    _T[8] <= UInt<1>("h00") @[PRNG.scala 38:28]
    reg state : UInt<1>[9], clock with : (reset => (reset, _T)) @[PRNG.scala 47:50]
    when io.increment : @[PRNG.scala 61:23]
      node _T_1 = xor(state[5], state[0]) @[LFSR.scala 15:41]
      state[0] <= state[1] @[PRNG.scala 62:11]
      state[1] <= state[2] @[PRNG.scala 62:11]
      state[2] <= state[3] @[PRNG.scala 62:11]
      state[3] <= state[4] @[PRNG.scala 62:11]
      state[4] <= _T_1 @[PRNG.scala 62:11]
      state[5] <= state[6] @[PRNG.scala 62:11]
      state[6] <= state[7] @[PRNG.scala 62:11]
      state[7] <= state[8] @[PRNG.scala 62:11]
      state[8] <= state[0] @[PRNG.scala 62:11]
      skip @[PRNG.scala 61:23]
    when io.seed.valid : @[PRNG.scala 65:25]
      state[0] <= io.seed.bits[0] @[PRNG.scala 66:11]
      state[1] <= io.seed.bits[1] @[PRNG.scala 66:11]
      state[2] <= io.seed.bits[2] @[PRNG.scala 66:11]
      state[3] <= io.seed.bits[3] @[PRNG.scala 66:11]
      state[4] <= io.seed.bits[4] @[PRNG.scala 66:11]
      state[5] <= io.seed.bits[5] @[PRNG.scala 66:11]
      state[6] <= io.seed.bits[6] @[PRNG.scala 66:11]
      state[7] <= io.seed.bits[7] @[PRNG.scala 66:11]
      state[8] <= io.seed.bits[8] @[PRNG.scala 66:11]
      skip @[PRNG.scala 65:25]
    io.out[0] <= state[0] @[PRNG.scala 69:10]
    io.out[1] <= state[1] @[PRNG.scala 69:10]
    io.out[2] <= state[2] @[PRNG.scala 69:10]
    io.out[3] <= state[3] @[PRNG.scala 69:10]
    io.out[4] <= state[4] @[PRNG.scala 69:10]
    io.out[5] <= state[5] @[PRNG.scala 69:10]
    io.out[6] <= state[6] @[PRNG.scala 69:10]
    io.out[7] <= state[7] @[PRNG.scala 69:10]
    io.out[8] <= state[8] @[PRNG.scala 69:10]
    
  module LFSRMaxPeriod : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst GaloisLFSR of GaloisLFSR @[PRNG.scala 82:22]
    GaloisLFSR.clock <= clock
    GaloisLFSR.reset <= reset
    GaloisLFSR.io.seed.valid <= UInt<1>("h00") @[PRNG.scala 83:24]
    GaloisLFSR.io.seed.bits[0] is invalid @[PRNG.scala 84:23]
    GaloisLFSR.io.seed.bits[1] is invalid @[PRNG.scala 84:23]
    GaloisLFSR.io.seed.bits[2] is invalid @[PRNG.scala 84:23]
    GaloisLFSR.io.seed.bits[3] is invalid @[PRNG.scala 84:23]
    GaloisLFSR.io.seed.bits[4] is invalid @[PRNG.scala 84:23]
    GaloisLFSR.io.seed.bits[5] is invalid @[PRNG.scala 84:23]
    GaloisLFSR.io.seed.bits[6] is invalid @[PRNG.scala 84:23]
    GaloisLFSR.io.seed.bits[7] is invalid @[PRNG.scala 84:23]
    GaloisLFSR.io.seed.bits[8] is invalid @[PRNG.scala 84:23]
    GaloisLFSR.io.increment <= UInt<1>("h01") @[PRNG.scala 85:23]
    node _T = cat(GaloisLFSR.io.out[1], GaloisLFSR.io.out[0]) @[PRNG.scala 86:17]
    node _T_1 = cat(GaloisLFSR.io.out[3], GaloisLFSR.io.out[2]) @[PRNG.scala 86:17]
    node _T_2 = cat(_T_1, _T) @[PRNG.scala 86:17]
    node _T_3 = cat(GaloisLFSR.io.out[5], GaloisLFSR.io.out[4]) @[PRNG.scala 86:17]
    node _T_4 = cat(GaloisLFSR.io.out[8], GaloisLFSR.io.out[7]) @[PRNG.scala 86:17]
    node _T_5 = cat(_T_4, GaloisLFSR.io.out[6]) @[PRNG.scala 86:17]
    node _T_6 = cat(_T_5, _T_3) @[PRNG.scala 86:17]
    node rv = cat(_T_6, _T_2) @[PRNG.scala 86:17]
    reg started : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[LFSR16.scala 50:24]
    started <= UInt<1>("h01") @[LFSR16.scala 50:24]
    node _T_7 = eq(started, UInt<1>("h00")) @[LFSR16.scala 51:24]
    reg seed : UInt, clock with : (reset => (_T_7, rv)) @[LFSR16.scala 51:43]
    reg value : UInt<9>, clock with : (reset => (reset, UInt<9>("h00"))) @[Counter.scala 29:33]
    when started : @[Counter.scala 71:17]
      node _T_8 = eq(value, UInt<9>("h01fe")) @[Counter.scala 37:24]
      node _T_9 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_10 = tail(_T_9, 1) @[Counter.scala 38:22]
      value <= _T_10 @[Counter.scala 38:13]
      when _T_8 : @[Counter.scala 40:21]
        value <= UInt<1>("h00") @[Counter.scala 40:29]
        skip @[Counter.scala 40:21]
      skip @[Counter.scala 71:17]
    node wrap = and(started, _T_8) @[Counter.scala 72:20]
    node _T_11 = eq(rv, seed) @[LFSR16.scala 55:12]
    node _T_12 = and(_T_11, started) @[LFSR16.scala 55:21]
    when _T_12 : @[LFSR16.scala 55:33]
      node _T_13 = bits(reset, 0, 0) @[LFSR16.scala 56:19]
      node _T_14 = or(wrap, _T_13) @[LFSR16.scala 56:19]
      node _T_15 = eq(_T_14, UInt<1>("h00")) @[LFSR16.scala 56:19]
      when _T_15 : @[LFSR16.scala 56:19]
        printf(clock, UInt<1>(1), "Assertion failed\n    at LFSR16.scala:56 chisel3.assert(wrap)\n") @[LFSR16.scala 56:19]
        stop(clock, UInt<1>(1), 1) @[LFSR16.scala 56:19]
        skip @[LFSR16.scala 56:19]
      node _T_16 = bits(reset, 0, 0) @[LFSR16.scala 57:9]
      node _T_17 = eq(_T_16, UInt<1>("h00")) @[LFSR16.scala 57:9]
      when _T_17 : @[LFSR16.scala 57:9]
        stop(clock, UInt<1>(1), 0) @[LFSR16.scala 57:9]
        skip @[LFSR16.scala 57:9]
      skip @[LFSR16.scala 55:33]
    reg last : UInt, clock @[LFSR16.scala 60:21]
    last <= rv @[LFSR16.scala 60:21]
    node _T_18 = neq(rv, last) @[LFSR16.scala 61:21]
    node _T_19 = bits(reset, 0, 0) @[LFSR16.scala 61:17]
    node _T_20 = or(_T_18, _T_19) @[LFSR16.scala 61:17]
    node _T_21 = eq(_T_20, UInt<1>("h00")) @[LFSR16.scala 61:17]
    when _T_21 : @[LFSR16.scala 61:17]
      printf(clock, UInt<1>(1), "Assertion failed: LFSR last value (0b%b) was equal to current value (0b%b)\n    at LFSR16.scala:61 chisel3.assert(rv =/= last, \"LFSR last value (0b%%b) was equal to current value (0b%%b)\", rv, last)\n", rv, last) @[LFSR16.scala 61:17]
      stop(clock, UInt<1>(1), 1) @[LFSR16.scala 61:17]
      skip @[LFSR16.scala 61:17]
    
