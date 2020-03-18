;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit MixedVecUIntDynamicIndexTester : 
  module MixedVecUIntDynamicIndexTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire wire : {3 : UInt<7>, 2 : UInt<4>, 1 : UInt<16>, 0 : UInt<8>} @[MixedVecSpec.scala 77:18]
    wire.0 <= UInt<1>("h00") @[MixedVecSpec.scala 81:13]
    wire.1 <= UInt<1>("h01") @[MixedVecSpec.scala 81:13]
    wire.2 <= UInt<2>("h02") @[MixedVecSpec.scala 81:13]
    wire.3 <= UInt<2>("h03") @[MixedVecSpec.scala 81:13]
    wire vecWire : UInt<16>[4] @[MixedVecSpec.scala 84:24]
    vecWire[0] <= wire.0 @[MixedVecSpec.scala 84:24]
    vecWire[1] <= wire.1 @[MixedVecSpec.scala 84:24]
    vecWire[2] <= wire.2 @[MixedVecSpec.scala 84:24]
    vecWire[3] <= wire.3 @[MixedVecSpec.scala 84:24]
    reg value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 29:33]
    when UInt<1>("h01") : @[Counter.scala 71:17]
      node _T = eq(value, UInt<2>("h03")) @[Counter.scala 37:24]
      node _T_1 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_2 = tail(_T_1, 1) @[Counter.scala 38:22]
      value <= _T_2 @[Counter.scala 38:13]
      skip @[Counter.scala 71:17]
    node done = and(UInt<1>("h01"), _T) @[Counter.scala 72:20]
    node _T_3 = eq(vecWire[value], value) @[MixedVecSpec.scala 87:25]
    node _T_4 = bits(reset, 0, 0) @[MixedVecSpec.scala 87:9]
    node _T_5 = or(_T_3, _T_4) @[MixedVecSpec.scala 87:9]
    node _T_6 = eq(_T_5, UInt<1>("h00")) @[MixedVecSpec.scala 87:9]
    when _T_6 : @[MixedVecSpec.scala 87:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:87 assert(vecWire(cycle) === cycle)\n") @[MixedVecSpec.scala 87:9]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 87:9]
      skip @[MixedVecSpec.scala 87:9]
    when done : @[MixedVecSpec.scala 89:15]
      node _T_7 = bits(reset, 0, 0) @[MixedVecSpec.scala 89:21]
      node _T_8 = eq(_T_7, UInt<1>("h00")) @[MixedVecSpec.scala 89:21]
      when _T_8 : @[MixedVecSpec.scala 89:21]
        stop(clock, UInt<1>(1), 0) @[MixedVecSpec.scala 89:21]
        skip @[MixedVecSpec.scala 89:21]
      skip @[MixedVecSpec.scala 89:15]
    
