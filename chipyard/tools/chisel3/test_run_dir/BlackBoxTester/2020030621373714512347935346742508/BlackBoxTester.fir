;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit BlackBoxTester : 
  extmodule BlackBoxInverter : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxInverter
    
    
  extmodule BlackBoxInverter_1 : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxInverter
    
    
  module BlackBoxTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst blackBoxPos of BlackBoxInverter @[BlackBox.scala 41:27]
    blackBoxPos.out is invalid
    blackBoxPos.in is invalid
    inst blackBoxNeg of BlackBoxInverter_1 @[BlackBox.scala 42:27]
    blackBoxNeg.out is invalid
    blackBoxNeg.in is invalid
    blackBoxPos.in <= UInt<1>("h01") @[BlackBox.scala 44:21]
    blackBoxNeg.in <= UInt<1>("h00") @[BlackBox.scala 45:21]
    node _T = eq(blackBoxNeg.out, UInt<1>("h01")) @[BlackBox.scala 47:29]
    node _T_1 = bits(reset, 0, 0) @[BlackBox.scala 47:9]
    node _T_2 = or(_T, _T_1) @[BlackBox.scala 47:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BlackBox.scala 47:9]
    when _T_3 : @[BlackBox.scala 47:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:47 assert(blackBoxNeg.io.out === 1.U)\n") @[BlackBox.scala 47:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 47:9]
      skip @[BlackBox.scala 47:9]
    node _T_4 = eq(blackBoxPos.out, UInt<1>("h00")) @[BlackBox.scala 48:29]
    node _T_5 = bits(reset, 0, 0) @[BlackBox.scala 48:9]
    node _T_6 = or(_T_4, _T_5) @[BlackBox.scala 48:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[BlackBox.scala 48:9]
    when _T_7 : @[BlackBox.scala 48:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:48 assert(blackBoxPos.io.out === 0.U)\n") @[BlackBox.scala 48:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 48:9]
      skip @[BlackBox.scala 48:9]
    node _T_8 = bits(reset, 0, 0) @[BlackBox.scala 49:7]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[BlackBox.scala 49:7]
    when _T_9 : @[BlackBox.scala 49:7]
      stop(clock, UInt<1>(1), 0) @[BlackBox.scala 49:7]
      skip @[BlackBox.scala 49:7]
    
