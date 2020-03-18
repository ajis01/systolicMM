;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit _1 : 
  module _1 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _T : UInt<1>
    _T <= UInt<1>("h00")
    node _T_1 = eq(_T, UInt<1>("h00")) @[EnumSpec.scala 15:27]
    node _T_2 = bits(reset, 0, 0) @[EnumSpec.scala 15:21]
    node _T_3 = or(_T_1, _T_2) @[EnumSpec.scala 15:21]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[EnumSpec.scala 15:21]
    when _T_4 : @[EnumSpec.scala 15:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at EnumSpec.scala:15 chisel3.assert(wire === onlyState)\n") @[EnumSpec.scala 15:21]
      stop(clock, UInt<1>(1), 1) @[EnumSpec.scala 15:21]
      skip @[EnumSpec.scala 15:21]
    node _T_5 = bits(reset, 0, 0) @[EnumSpec.scala 16:11]
    node _T_6 = eq(_T_5, UInt<1>("h00")) @[EnumSpec.scala 16:11]
    when _T_6 : @[EnumSpec.scala 16:11]
      stop(clock, UInt<1>(1), 0) @[EnumSpec.scala 16:11]
      skip @[EnumSpec.scala 16:11]
    
