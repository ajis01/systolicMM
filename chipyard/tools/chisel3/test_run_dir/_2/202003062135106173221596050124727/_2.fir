;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit _2 : 
  module _2 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _T : UInt<2>
    _T <= UInt<2>("h00")
    wire _T_1 : UInt
    _T_1 <= _T
    _T_1 <= UInt<4>("h00") @[WidthSpec.scala 160:11]
    wire _T_2 : UInt @[ChiselSpec.scala 56:24]
    _T_2 <= UInt<1>("h00") @[ChiselSpec.scala 56:24]
    _T_1 <= _T_2 @[ChiselSpec.scala 56:9]
    reg value : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[Counter.scala 29:33]
    when UInt<1>("h01") : @[Counter.scala 71:17]
      node _T_3 = eq(value, UInt<1>("h01")) @[Counter.scala 37:24]
      node _T_4 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_5 = tail(_T_4, 1) @[Counter.scala 38:22]
      value <= _T_5 @[Counter.scala 38:13]
      skip @[Counter.scala 71:17]
    node _T_6 = and(UInt<1>("h01"), _T_3) @[Counter.scala 72:20]
    when _T_6 : @[ChiselSpec.scala 58:19]
      node _T_7 = not(_T_1) @[ChiselSpec.scala 59:24]
      node _T_8 = asUInt(asSInt(UInt<4>("h0f"))) @[ChiselSpec.scala 59:57]
      node _T_9 = eq(_T_7, _T_8) @[ChiselSpec.scala 59:36]
      node _T_10 = bits(reset, 0, 0) @[ChiselSpec.scala 59:23]
      node _T_11 = or(_T_9, _T_10) @[ChiselSpec.scala 59:23]
      node _T_12 = eq(_T_11, UInt<1>("h00")) @[ChiselSpec.scala 59:23]
      when _T_12 : @[ChiselSpec.scala 59:23]
        printf(clock, UInt<1>(1), "Assertion failed\n    at ChiselSpec.scala:59 chisel3.assert(~(x.asUInt) === -1.S(expected.W).asUInt)\n") @[ChiselSpec.scala 59:23]
        stop(clock, UInt<1>(1), 1) @[ChiselSpec.scala 59:23]
        skip @[ChiselSpec.scala 59:23]
      node _T_13 = bits(reset, 0, 0) @[ChiselSpec.scala 60:13]
      node _T_14 = eq(_T_13, UInt<1>("h00")) @[ChiselSpec.scala 60:13]
      when _T_14 : @[ChiselSpec.scala 60:13]
        stop(clock, UInt<1>(1), 0) @[ChiselSpec.scala 60:13]
        skip @[ChiselSpec.scala 60:13]
      skip @[ChiselSpec.scala 58:19]
    
