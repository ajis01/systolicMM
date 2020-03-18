;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit IsLitTester : 
  module IsLitTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _T : UInt<7>
    _T <= UInt<1>("h00")
    wire _T_1 : UInt<7>
    _T_1 <= UInt<1>("h01")
    wire _T_2 : UInt<7>
    _T_2 <= UInt<2>("h02")
    wire _T_3 : UInt<7>
    _T_3 <= UInt<7>("h064")
    wire _T_4 : UInt<7>
    _T_4 <= UInt<7>("h065")
    node _T_5 = bits(reset, 0, 0) @[StrongEnum.scala 226:7]
    node _T_6 = eq(_T_5, UInt<1>("h00")) @[StrongEnum.scala 226:7]
    when _T_6 : @[StrongEnum.scala 226:7]
      stop(clock, UInt<1>(1), 0) @[StrongEnum.scala 226:7]
      skip @[StrongEnum.scala 226:7]
    
