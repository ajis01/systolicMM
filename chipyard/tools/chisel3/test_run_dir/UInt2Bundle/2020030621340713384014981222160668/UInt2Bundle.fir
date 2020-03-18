;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit UInt2Bundle : 
  module UInt2Bundle : 
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
    wire bundle : {foo : UInt<4>, bar : UInt<4>} @[UInt2Bundle.scala 18:29]
    wire _T_5 : UInt<8>
    _T_5 <= UInt<8>("h0b4")
    node _T_6 = bits(_T_5, 3, 0) @[UInt2Bundle.scala 18:29]
    bundle.bar <= _T_6 @[UInt2Bundle.scala 18:29]
    node _T_7 = bits(_T_5, 7, 4) @[UInt2Bundle.scala 18:29]
    bundle.foo <= _T_7 @[UInt2Bundle.scala 18:29]
    node _T_8 = bits(reset, 0, 0) @[UInt2Bundle.scala 19:9]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[UInt2Bundle.scala 19:9]
    when _T_9 : @[UInt2Bundle.scala 19:9]
      printf(clock, UInt<1>(1), "MyBundle(foo -> %d, bar -> %d)", bundle.foo, bundle.bar) @[UInt2Bundle.scala 19:9]
      skip @[UInt2Bundle.scala 19:9]
    node _T_10 = eq(bundle.foo, UInt<4>("h0b")) @[UInt2Bundle.scala 22:21]
    node _T_11 = bits(reset, 0, 0) @[UInt2Bundle.scala 22:9]
    node _T_12 = or(_T_10, _T_11) @[UInt2Bundle.scala 22:9]
    node _T_13 = eq(_T_12, UInt<1>("h00")) @[UInt2Bundle.scala 22:9]
    when _T_13 : @[UInt2Bundle.scala 22:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at UInt2Bundle.scala:22 assert(bundle.foo === 0xb.U)\n") @[UInt2Bundle.scala 22:9]
      stop(clock, UInt<1>(1), 1) @[UInt2Bundle.scala 22:9]
      skip @[UInt2Bundle.scala 22:9]
    node _T_14 = eq(bundle.bar, UInt<3>("h04")) @[UInt2Bundle.scala 23:21]
    node _T_15 = bits(reset, 0, 0) @[UInt2Bundle.scala 23:9]
    node _T_16 = or(_T_14, _T_15) @[UInt2Bundle.scala 23:9]
    node _T_17 = eq(_T_16, UInt<1>("h00")) @[UInt2Bundle.scala 23:9]
    when _T_17 : @[UInt2Bundle.scala 23:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at UInt2Bundle.scala:23 assert(bundle.bar === 0x4.U)\n") @[UInt2Bundle.scala 23:9]
      stop(clock, UInt<1>(1), 1) @[UInt2Bundle.scala 23:9]
      skip @[UInt2Bundle.scala 23:9]
    
