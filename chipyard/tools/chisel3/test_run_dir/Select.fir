;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit SelectTester : 
  module SelectTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire values : UInt<2>[3] @[SelectSpec.scala 15:23]
    values[0] <= UInt<1>("h00") @[SelectSpec.scala 15:23]
    values[1] <= UInt<1>("h01") @[SelectSpec.scala 15:23]
    values[2] <= UInt<2>("h02") @[SelectSpec.scala 15:23]
    reg counter : UInt<3>, clock with : (reset => (reset, UInt<3>("h00"))) @[SelectSpec.scala 16:24]
    node _T = add(counter, UInt<1>("h01")) @[SelectSpec.scala 17:23]
    node added = tail(_T, 1) @[SelectSpec.scala 17:23]
    counter <= added @[SelectSpec.scala 18:11]
    node overflow = geq(counter, UInt<2>("h03")) @[SelectSpec.scala 19:26]
    node _T_1 = bits(reset, 0, 0) @[SelectSpec.scala 20:28]
    node nreset = eq(_T_1, UInt<1>("h00")) @[SelectSpec.scala 20:31]
    node _T_2 = bits(counter, 1, 0)
    node _T_3 = add(UInt<1>("h00"), UInt<1>("h00")) @[SelectSpec.scala 22:18]
    node zero = tail(_T_3, 1) @[SelectSpec.scala 22:18]
    when overflow : @[SelectSpec.scala 23:18]
      counter <= zero @[SelectSpec.scala 24:13]
      node _T_4 = bits(reset, 0, 0) @[SelectSpec.scala 25:9]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[SelectSpec.scala 25:9]
      when _T_5 : @[SelectSpec.scala 25:9]
        stop(clock, UInt<1>(1), 0) @[SelectSpec.scala 25:9]
        skip @[SelectSpec.scala 25:9]
      skip @[SelectSpec.scala 23:18]
    else : @[SelectSpec.scala 26:15]
      when nreset : @[SelectSpec.scala 27:18]
        node _T_6 = bits(counter, 1, 0)
        node _T_7 = eq(counter, values[_T_6]) @[SelectSpec.scala 28:22]
        node _T_8 = bits(reset, 0, 0) @[SelectSpec.scala 28:13]
        node _T_9 = or(_T_7, _T_8) @[SelectSpec.scala 28:13]
        node _T_10 = eq(_T_9, UInt<1>("h00")) @[SelectSpec.scala 28:13]
        when _T_10 : @[SelectSpec.scala 28:13]
          printf(clock, UInt<1>(1), "Assertion failed\n    at SelectSpec.scala:28 assert(counter === values(counter))\n") @[SelectSpec.scala 28:13]
          stop(clock, UInt<1>(1), 1) @[SelectSpec.scala 28:13]
          skip @[SelectSpec.scala 28:13]
        node _T_11 = bits(reset, 0, 0) @[SelectSpec.scala 29:13]
        node _T_12 = eq(_T_11, UInt<1>("h00")) @[SelectSpec.scala 29:13]
        when _T_12 : @[SelectSpec.scala 29:13]
          printf(clock, UInt<1>(1), "values(%d) = %d\n", counter, values[_T_2]) @[SelectSpec.scala 29:13]
          skip @[SelectSpec.scala 29:13]
        skip @[SelectSpec.scala 27:18]
      skip @[SelectSpec.scala 26:15]
    
