;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit CastToUIntTester : 
  module CastToUInt : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt}
    
    node _T = asUInt(io.in) @[StrongEnum.scala 50:25]
    io.out <= _T @[StrongEnum.scala 50:10]
    
  module CastToUInt_1 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt}
    
    node _T = asUInt(io.in) @[StrongEnum.scala 50:25]
    io.out <= _T @[StrongEnum.scala 50:10]
    
  module CastToUInt_2 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt}
    
    node _T = asUInt(io.in) @[StrongEnum.scala 50:25]
    io.out <= _T @[StrongEnum.scala 50:10]
    
  module CastToUInt_3 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt}
    
    node _T = asUInt(io.in) @[StrongEnum.scala 50:25]
    io.out <= _T @[StrongEnum.scala 50:10]
    
  module CastToUInt_4 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt}
    
    node _T = asUInt(io.in) @[StrongEnum.scala 50:25]
    io.out <= _T @[StrongEnum.scala 50:10]
    
  module CastToUIntTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst CastToUInt of CastToUInt @[StrongEnum.scala 153:21]
    CastToUInt.clock <= clock
    CastToUInt.reset <= reset
    CastToUInt.io.in <= UInt<1>("h00") @[StrongEnum.scala 154:15]
    node _T = eq(CastToUInt.io.out, UInt<1>("h00")) @[StrongEnum.scala 155:23]
    node _T_1 = bits(reset, 0, 0) @[StrongEnum.scala 155:11]
    node _T_2 = or(_T, _T_1) @[StrongEnum.scala 155:11]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[StrongEnum.scala 155:11]
    when _T_3 : @[StrongEnum.scala 155:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:155 assert(mod.io.out === lit)\n") @[StrongEnum.scala 155:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 155:11]
      skip @[StrongEnum.scala 155:11]
    inst CastToUInt_1 of CastToUInt_1 @[StrongEnum.scala 153:21]
    CastToUInt_1.clock <= clock
    CastToUInt_1.reset <= reset
    CastToUInt_1.io.in <= UInt<1>("h01") @[StrongEnum.scala 154:15]
    node _T_4 = eq(CastToUInt_1.io.out, UInt<1>("h01")) @[StrongEnum.scala 155:23]
    node _T_5 = bits(reset, 0, 0) @[StrongEnum.scala 155:11]
    node _T_6 = or(_T_4, _T_5) @[StrongEnum.scala 155:11]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[StrongEnum.scala 155:11]
    when _T_7 : @[StrongEnum.scala 155:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:155 assert(mod.io.out === lit)\n") @[StrongEnum.scala 155:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 155:11]
      skip @[StrongEnum.scala 155:11]
    inst CastToUInt_2 of CastToUInt_2 @[StrongEnum.scala 153:21]
    CastToUInt_2.clock <= clock
    CastToUInt_2.reset <= reset
    CastToUInt_2.io.in <= UInt<2>("h02") @[StrongEnum.scala 154:15]
    node _T_8 = eq(CastToUInt_2.io.out, UInt<2>("h02")) @[StrongEnum.scala 155:23]
    node _T_9 = bits(reset, 0, 0) @[StrongEnum.scala 155:11]
    node _T_10 = or(_T_8, _T_9) @[StrongEnum.scala 155:11]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[StrongEnum.scala 155:11]
    when _T_11 : @[StrongEnum.scala 155:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:155 assert(mod.io.out === lit)\n") @[StrongEnum.scala 155:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 155:11]
      skip @[StrongEnum.scala 155:11]
    inst CastToUInt_3 of CastToUInt_3 @[StrongEnum.scala 153:21]
    CastToUInt_3.clock <= clock
    CastToUInt_3.reset <= reset
    CastToUInt_3.io.in <= UInt<7>("h064") @[StrongEnum.scala 154:15]
    node _T_12 = eq(CastToUInt_3.io.out, UInt<7>("h064")) @[StrongEnum.scala 155:23]
    node _T_13 = bits(reset, 0, 0) @[StrongEnum.scala 155:11]
    node _T_14 = or(_T_12, _T_13) @[StrongEnum.scala 155:11]
    node _T_15 = eq(_T_14, UInt<1>("h00")) @[StrongEnum.scala 155:11]
    when _T_15 : @[StrongEnum.scala 155:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:155 assert(mod.io.out === lit)\n") @[StrongEnum.scala 155:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 155:11]
      skip @[StrongEnum.scala 155:11]
    inst CastToUInt_4 of CastToUInt_4 @[StrongEnum.scala 153:21]
    CastToUInt_4.clock <= clock
    CastToUInt_4.reset <= reset
    CastToUInt_4.io.in <= UInt<7>("h065") @[StrongEnum.scala 154:15]
    node _T_16 = eq(CastToUInt_4.io.out, UInt<7>("h065")) @[StrongEnum.scala 155:23]
    node _T_17 = bits(reset, 0, 0) @[StrongEnum.scala 155:11]
    node _T_18 = or(_T_16, _T_17) @[StrongEnum.scala 155:11]
    node _T_19 = eq(_T_18, UInt<1>("h00")) @[StrongEnum.scala 155:11]
    when _T_19 : @[StrongEnum.scala 155:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:155 assert(mod.io.out === lit)\n") @[StrongEnum.scala 155:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 155:11]
      skip @[StrongEnum.scala 155:11]
    node _T_20 = bits(reset, 0, 0) @[StrongEnum.scala 157:7]
    node _T_21 = eq(_T_20, UInt<1>("h00")) @[StrongEnum.scala 157:7]
    when _T_21 : @[StrongEnum.scala 157:7]
      stop(clock, UInt<1>(1), 0) @[StrongEnum.scala 157:7]
      skip @[StrongEnum.scala 157:7]
    
