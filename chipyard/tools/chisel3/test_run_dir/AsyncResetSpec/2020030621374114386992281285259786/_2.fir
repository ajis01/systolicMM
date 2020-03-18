;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit _2 : 
  module _2 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _T = add(UInt<7>("h07b"), UInt<9>("h01c8")) @[AsyncResetSpec.scala 135:32]
    node _T_1 = tail(_T, 1) @[AsyncResetSpec.scala 135:32]
    wire _T_2 : UInt
    _T_2 <= _T_1
    node _T_3 = asAsyncReset(reset) @[AsyncResetSpec.scala 136:25]
    reg _T_4 : UInt, clock with : (reset => (_T_3, _T_2)) @[AsyncResetSpec.scala 136:46]
    
