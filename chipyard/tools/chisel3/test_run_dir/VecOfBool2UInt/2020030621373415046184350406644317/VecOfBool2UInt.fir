;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit VecOfBool2UInt : 
  module VecOfBool2UInt : 
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
    node done = and(UInt<1>("h01"), _T) @[Counter.scala 72:20]
    when done : @[CookbookSpec.scala 19:15]
      node _T_3 = bits(reset, 0, 0) @[CookbookSpec.scala 19:21]
      node _T_4 = eq(_T_3, UInt<1>("h00")) @[CookbookSpec.scala 19:21]
      when _T_4 : @[CookbookSpec.scala 19:21]
        stop(clock, UInt<1>(1), 0) @[CookbookSpec.scala 19:21]
        skip @[CookbookSpec.scala 19:21]
      skip @[CookbookSpec.scala 19:15]
    wire vec : UInt<1>[4] @[VecOfBool2UInt.scala 13:20]
    vec[0] <= UInt<1>("h01") @[VecOfBool2UInt.scala 13:20]
    vec[1] <= UInt<1>("h00") @[VecOfBool2UInt.scala 13:20]
    vec[2] <= UInt<1>("h01") @[VecOfBool2UInt.scala 13:20]
    vec[3] <= UInt<1>("h01") @[VecOfBool2UInt.scala 13:20]
    node _T_5 = cat(vec[1], vec[0]) @[VecOfBool2UInt.scala 14:18]
    node _T_6 = cat(vec[3], vec[2]) @[VecOfBool2UInt.scala 14:18]
    node uint = cat(_T_6, _T_5) @[VecOfBool2UInt.scala 14:18]
    node _T_7 = bits(reset, 0, 0) @[VecOfBool2UInt.scala 15:9]
    node _T_8 = eq(_T_7, UInt<1>("h00")) @[VecOfBool2UInt.scala 15:9]
    when _T_8 : @[VecOfBool2UInt.scala 15:9]
      printf(clock, UInt<1>(1), "%d", uint) @[VecOfBool2UInt.scala 15:9]
      skip @[VecOfBool2UInt.scala 15:9]
    node _T_9 = eq(UInt<4>("h0d"), uint) @[VecOfBool2UInt.scala 21:16]
    node _T_10 = bits(reset, 0, 0) @[VecOfBool2UInt.scala 21:9]
    node _T_11 = or(_T_9, _T_10) @[VecOfBool2UInt.scala 21:9]
    node _T_12 = eq(_T_11, UInt<1>("h00")) @[VecOfBool2UInt.scala 21:9]
    when _T_12 : @[VecOfBool2UInt.scala 21:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at VecOfBool2UInt.scala:21 assert(0xd.U === uint)\n") @[VecOfBool2UInt.scala 21:9]
      stop(clock, UInt<1>(1), 1) @[VecOfBool2UInt.scala 21:9]
      skip @[VecOfBool2UInt.scala 21:9]
    
