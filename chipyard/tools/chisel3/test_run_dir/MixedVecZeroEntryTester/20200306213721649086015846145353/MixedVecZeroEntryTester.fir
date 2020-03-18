;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit MixedVecZeroEntryTester : 
  module _3 : 
    input clock : Clock
    input reset : Reset
    output io : {foo : UInt<1>, bar : {}}
    
    io.foo <= UInt<1>("h00") @[MixedVecSpec.scala 69:12]
    
  module MixedVecZeroEntryTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _T : {foo : UInt<1>, bar : {}} @[MixedVecSpec.scala 64:23]
    wire _T_1 : UInt<1>
    _T_1 <= UInt<1>("h00")
    node _T_2 = bits(_T_1, 0, 0) @[MixedVecSpec.scala 64:23]
    _T.foo <= _T_2 @[MixedVecSpec.scala 64:23]
    inst m of _3 @[MixedVecSpec.scala 67:17]
    m.clock <= clock
    m.reset <= reset
    wire _T_3 : {}
    node _T_4 = bits(reset, 0, 0) @[MixedVecSpec.scala 73:7]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[MixedVecSpec.scala 73:7]
    when _T_5 : @[MixedVecSpec.scala 73:7]
      stop(clock, UInt<1>(1), 0) @[MixedVecSpec.scala 73:7]
      skip @[MixedVecSpec.scala 73:7]
    
