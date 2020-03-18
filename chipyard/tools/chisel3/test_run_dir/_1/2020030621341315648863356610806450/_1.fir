;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit _1 : 
  module _1 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _T : UInt<4>[1] @[WidthSpec.scala 125:19]
    _T[0] <= UInt<4>("h00") @[WidthSpec.scala 126:12]
    wire _T_1 : UInt<4>[1]
    _T_1[0] <= _T[0]
    wire _T_2 : UInt<4> @[ChiselSpec.scala 43:24]
    _T_2 <= UInt<1>("h00") @[ChiselSpec.scala 43:24]
    _T_1[0] <= _T_2 @[ChiselSpec.scala 43:9]
    reg value : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[Counter.scala 29:33]
    when UInt<1>("h01") : @[Counter.scala 71:17]
      node _T_3 = eq(value, UInt<1>("h01")) @[Counter.scala 37:24]
      node _T_4 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_5 = tail(_T_4, 1) @[Counter.scala 38:22]
      value <= _T_5 @[Counter.scala 38:13]
      skip @[Counter.scala 71:17]
    node _T_6 = and(UInt<1>("h01"), _T_3) @[Counter.scala 72:20]
    when _T_6 : @[ChiselSpec.scala 45:19]
      node _T_7 = not(_T_1[0]) @[ChiselSpec.scala 46:24]
      node _T_8 = asUInt(asSInt(UInt<4>("h0f"))) @[ChiselSpec.scala 46:57]
      node _T_9 = eq(_T_7, _T_8) @[ChiselSpec.scala 46:36]
      node _T_10 = bits(reset, 0, 0) @[ChiselSpec.scala 46:23]
      node _T_11 = or(_T_9, _T_10) @[ChiselSpec.scala 46:23]
      node _T_12 = eq(_T_11, UInt<1>("h00")) @[ChiselSpec.scala 46:23]
      when _T_12 : @[ChiselSpec.scala 46:23]
        printf(clock, UInt<1>(1), "Assertion failed\n    at ChiselSpec.scala:46 chisel3.assert(~(x.asUInt) === -1.S(expected.W).asUInt)\n") @[ChiselSpec.scala 46:23]
        stop(clock, UInt<1>(1), 1) @[ChiselSpec.scala 46:23]
        skip @[ChiselSpec.scala 46:23]
      node _T_13 = bits(reset, 0, 0) @[ChiselSpec.scala 47:13]
      node _T_14 = eq(_T_13, UInt<1>("h00")) @[ChiselSpec.scala 47:13]
      when _T_14 : @[ChiselSpec.scala 47:13]
        stop(clock, UInt<1>(1), 0) @[ChiselSpec.scala 47:13]
        skip @[ChiselSpec.scala 47:13]
      skip @[ChiselSpec.scala 45:19]
    
