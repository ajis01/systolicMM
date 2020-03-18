;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit MixedVecConnectWithVecTester : 
  module MixedVecIOPassthroughModule : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : {2 : UInt<8>, 1 : UInt<8>, 0 : UInt<8>}, out : {2 : UInt<8>, 1 : UInt<8>, 0 : UInt<8>}}
    
    io.out.0 <= io.in.0 @[MixedVec.scala 111:9]
    io.out.1 <= io.in.1 @[MixedVec.scala 111:9]
    io.out.2 <= io.in.2 @[MixedVec.scala 111:9]
    
  module MixedVecConnectWithVecTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst m of MixedVecIOPassthroughModule @[MixedVecSpec.scala 116:17]
    m.clock <= clock
    m.reset <= reset
    wire _T : UInt<7>[3] @[MixedVecSpec.scala 117:21]
    _T[0] <= UInt<5>("h014") @[MixedVecSpec.scala 117:21]
    _T[1] <= UInt<6>("h028") @[MixedVecSpec.scala 117:21]
    _T[2] <= UInt<7>("h050") @[MixedVecSpec.scala 117:21]
    m.io.in.0 <= _T[0] @[MixedVec.scala 111:9]
    m.io.in.1 <= _T[1] @[MixedVec.scala 111:9]
    m.io.in.2 <= _T[2] @[MixedVec.scala 111:9]
    node _T_1 = eq(m.io.out.0, UInt<5>("h014")) @[MixedVecSpec.scala 120:18]
    node _T_2 = bits(reset, 0, 0) @[MixedVecSpec.scala 120:9]
    node _T_3 = or(_T_1, _T_2) @[MixedVecSpec.scala 120:9]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[MixedVecSpec.scala 120:9]
    when _T_4 : @[MixedVecSpec.scala 120:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:120 assert(wire(0) === 20.U)\n") @[MixedVecSpec.scala 120:9]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 120:9]
      skip @[MixedVecSpec.scala 120:9]
    node _T_5 = eq(m.io.out.1, UInt<6>("h028")) @[MixedVecSpec.scala 121:18]
    node _T_6 = bits(reset, 0, 0) @[MixedVecSpec.scala 121:9]
    node _T_7 = or(_T_5, _T_6) @[MixedVecSpec.scala 121:9]
    node _T_8 = eq(_T_7, UInt<1>("h00")) @[MixedVecSpec.scala 121:9]
    when _T_8 : @[MixedVecSpec.scala 121:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:121 assert(wire(1) === 40.U)\n") @[MixedVecSpec.scala 121:9]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 121:9]
      skip @[MixedVecSpec.scala 121:9]
    node _T_9 = eq(m.io.out.2, UInt<7>("h050")) @[MixedVecSpec.scala 122:18]
    node _T_10 = bits(reset, 0, 0) @[MixedVecSpec.scala 122:9]
    node _T_11 = or(_T_9, _T_10) @[MixedVecSpec.scala 122:9]
    node _T_12 = eq(_T_11, UInt<1>("h00")) @[MixedVecSpec.scala 122:9]
    when _T_12 : @[MixedVecSpec.scala 122:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:122 assert(wire(2) === 80.U)\n") @[MixedVecSpec.scala 122:9]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 122:9]
      skip @[MixedVecSpec.scala 122:9]
    node _T_13 = bits(reset, 0, 0) @[MixedVecSpec.scala 124:7]
    node _T_14 = eq(_T_13, UInt<1>("h00")) @[MixedVecSpec.scala 124:7]
    when _T_14 : @[MixedVecSpec.scala 124:7]
      stop(clock, UInt<1>(1), 0) @[MixedVecSpec.scala 124:7]
      skip @[MixedVecSpec.scala 124:7]
    
