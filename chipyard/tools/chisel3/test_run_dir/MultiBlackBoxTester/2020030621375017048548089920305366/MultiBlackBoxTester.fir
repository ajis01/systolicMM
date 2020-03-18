;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit MultiBlackBoxTester : 
  extmodule BlackBoxInverter : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxInverter
    
    
  extmodule BlackBoxInverter_1 : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxInverter
    
    
  extmodule BlackBoxPassthrough : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxPassthrough
    
    
  extmodule BlackBoxPassthrough_1 : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxPassthrough
    
    
  module MultiBlackBoxTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst blackBoxInvPos of BlackBoxInverter @[BlackBox.scala 66:30]
    blackBoxInvPos.out is invalid
    blackBoxInvPos.in is invalid
    inst blackBoxInvNeg of BlackBoxInverter_1 @[BlackBox.scala 67:30]
    blackBoxInvNeg.out is invalid
    blackBoxInvNeg.in is invalid
    inst blackBoxPassPos of BlackBoxPassthrough @[BlackBox.scala 68:31]
    blackBoxPassPos.out is invalid
    blackBoxPassPos.in is invalid
    inst blackBoxPassNeg of BlackBoxPassthrough_1 @[BlackBox.scala 69:31]
    blackBoxPassNeg.out is invalid
    blackBoxPassNeg.in is invalid
    blackBoxInvPos.in <= UInt<1>("h01") @[BlackBox.scala 71:24]
    blackBoxInvNeg.in <= UInt<1>("h00") @[BlackBox.scala 72:24]
    blackBoxPassPos.in <= UInt<1>("h01") @[BlackBox.scala 73:25]
    blackBoxPassNeg.in <= UInt<1>("h00") @[BlackBox.scala 74:25]
    node _T = eq(blackBoxInvNeg.out, UInt<1>("h01")) @[BlackBox.scala 76:32]
    node _T_1 = bits(reset, 0, 0) @[BlackBox.scala 76:9]
    node _T_2 = or(_T, _T_1) @[BlackBox.scala 76:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BlackBox.scala 76:9]
    when _T_3 : @[BlackBox.scala 76:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:76 assert(blackBoxInvNeg.io.out === 1.U)\n") @[BlackBox.scala 76:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 76:9]
      skip @[BlackBox.scala 76:9]
    node _T_4 = eq(blackBoxInvPos.out, UInt<1>("h00")) @[BlackBox.scala 77:32]
    node _T_5 = bits(reset, 0, 0) @[BlackBox.scala 77:9]
    node _T_6 = or(_T_4, _T_5) @[BlackBox.scala 77:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[BlackBox.scala 77:9]
    when _T_7 : @[BlackBox.scala 77:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:77 assert(blackBoxInvPos.io.out === 0.U)\n") @[BlackBox.scala 77:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 77:9]
      skip @[BlackBox.scala 77:9]
    node _T_8 = eq(blackBoxPassNeg.out, UInt<1>("h00")) @[BlackBox.scala 78:33]
    node _T_9 = bits(reset, 0, 0) @[BlackBox.scala 78:9]
    node _T_10 = or(_T_8, _T_9) @[BlackBox.scala 78:9]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[BlackBox.scala 78:9]
    when _T_11 : @[BlackBox.scala 78:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:78 assert(blackBoxPassNeg.io.out === 0.U)\n") @[BlackBox.scala 78:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 78:9]
      skip @[BlackBox.scala 78:9]
    node _T_12 = eq(blackBoxPassPos.out, UInt<1>("h01")) @[BlackBox.scala 79:33]
    node _T_13 = bits(reset, 0, 0) @[BlackBox.scala 79:9]
    node _T_14 = or(_T_12, _T_13) @[BlackBox.scala 79:9]
    node _T_15 = eq(_T_14, UInt<1>("h00")) @[BlackBox.scala 79:9]
    when _T_15 : @[BlackBox.scala 79:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:79 assert(blackBoxPassPos.io.out === 1.U)\n") @[BlackBox.scala 79:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 79:9]
      skip @[BlackBox.scala 79:9]
    node _T_16 = bits(reset, 0, 0) @[BlackBox.scala 80:7]
    node _T_17 = eq(_T_16, UInt<1>("h00")) @[BlackBox.scala 80:7]
    when _T_17 : @[BlackBox.scala 80:7]
      stop(clock, UInt<1>(1), 0) @[BlackBox.scala 80:7]
      skip @[BlackBox.scala 80:7]
    
