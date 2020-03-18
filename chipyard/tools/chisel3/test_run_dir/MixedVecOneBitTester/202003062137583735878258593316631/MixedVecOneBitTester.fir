;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit MixedVecOneBitTester : 
  module MixedVecOneBitTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg flag : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[MixedVecSpec.scala 142:21]
    reg oneBit : {0 : UInt<1>}, clock @[MixedVecSpec.scala 144:19]
    node _T = eq(flag, UInt<1>("h00")) @[MixedVecSpec.scala 145:9]
    when _T : @[MixedVecSpec.scala 145:16]
      oneBit.0 <= UInt<1>("h01") @[MixedVecSpec.scala 146:15]
      flag <= UInt<1>("h01") @[MixedVecSpec.scala 147:10]
      skip @[MixedVecSpec.scala 145:16]
    else : @[MixedVecSpec.scala 148:16]
      node _T_1 = eq(oneBit.0, UInt<1>("h01")) @[MixedVecSpec.scala 149:22]
      node _T_2 = bits(reset, 0, 0) @[MixedVecSpec.scala 149:11]
      node _T_3 = or(_T_1, _T_2) @[MixedVecSpec.scala 149:11]
      node _T_4 = eq(_T_3, UInt<1>("h00")) @[MixedVecSpec.scala 149:11]
      when _T_4 : @[MixedVecSpec.scala 149:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:149 assert(oneBit(0) === 1.U)\n") @[MixedVecSpec.scala 149:11]
        stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 149:11]
        skip @[MixedVecSpec.scala 149:11]
      node _T_5 = eq(oneBit.0, UInt<1>("h01")) @[MixedVecSpec.scala 150:26]
      node _T_6 = bits(reset, 0, 0) @[MixedVecSpec.scala 150:11]
      node _T_7 = or(_T_5, _T_6) @[MixedVecSpec.scala 150:11]
      node _T_8 = eq(_T_7, UInt<1>("h00")) @[MixedVecSpec.scala 150:11]
      when _T_8 : @[MixedVecSpec.scala 150:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:150 assert(oneBit.asUInt === 1.U)\n") @[MixedVecSpec.scala 150:11]
        stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 150:11]
        skip @[MixedVecSpec.scala 150:11]
      node _T_9 = bits(reset, 0, 0) @[MixedVecSpec.scala 151:9]
      node _T_10 = eq(_T_9, UInt<1>("h00")) @[MixedVecSpec.scala 151:9]
      when _T_10 : @[MixedVecSpec.scala 151:9]
        stop(clock, UInt<1>(1), 0) @[MixedVecSpec.scala 151:9]
        skip @[MixedVecSpec.scala 151:9]
      skip @[MixedVecSpec.scala 148:16]
    
