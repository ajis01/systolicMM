;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit CastFromLitTester : 
  module CastFromLit : 
    input clock : Clock
    input reset : Reset
    output io : {out : UInt<7>, valid : UInt<1>}
    
    io.out <= UInt<1>("h00") @[StrongEnum.scala 59:10]
    node _T = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 60:22]
    node _T_1 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 60:22]
    node _T_2 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 60:22]
    node _T_3 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 60:22]
    node _T_4 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 60:22]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 60:22]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 60:22]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 60:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 60:22]
    io.valid <= _T_8 @[StrongEnum.scala 60:12]
    
  module CastFromLit_1 : 
    input clock : Clock
    input reset : Reset
    output io : {out : UInt<7>, valid : UInt<1>}
    
    io.out <= UInt<1>("h01") @[StrongEnum.scala 59:10]
    node _T = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 60:22]
    node _T_1 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 60:22]
    node _T_2 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 60:22]
    node _T_3 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 60:22]
    node _T_4 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 60:22]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 60:22]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 60:22]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 60:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 60:22]
    io.valid <= _T_8 @[StrongEnum.scala 60:12]
    
  module CastFromLit_2 : 
    input clock : Clock
    input reset : Reset
    output io : {out : UInt<7>, valid : UInt<1>}
    
    io.out <= UInt<2>("h02") @[StrongEnum.scala 59:10]
    node _T = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 60:22]
    node _T_1 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 60:22]
    node _T_2 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 60:22]
    node _T_3 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 60:22]
    node _T_4 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 60:22]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 60:22]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 60:22]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 60:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 60:22]
    io.valid <= _T_8 @[StrongEnum.scala 60:12]
    
  module CastFromLit_3 : 
    input clock : Clock
    input reset : Reset
    output io : {out : UInt<7>, valid : UInt<1>}
    
    io.out <= UInt<7>("h064") @[StrongEnum.scala 59:10]
    node _T = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 60:22]
    node _T_1 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 60:22]
    node _T_2 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 60:22]
    node _T_3 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 60:22]
    node _T_4 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 60:22]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 60:22]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 60:22]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 60:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 60:22]
    io.valid <= _T_8 @[StrongEnum.scala 60:12]
    
  module CastFromLit_4 : 
    input clock : Clock
    input reset : Reset
    output io : {out : UInt<7>, valid : UInt<1>}
    
    io.out <= UInt<7>("h065") @[StrongEnum.scala 59:10]
    node _T = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 60:22]
    node _T_1 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 60:22]
    node _T_2 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 60:22]
    node _T_3 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 60:22]
    node _T_4 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 60:22]
    node _T_5 = or(_T, _T_1) @[StrongEnum.scala 60:22]
    node _T_6 = or(_T_5, _T_2) @[StrongEnum.scala 60:22]
    node _T_7 = or(_T_6, _T_3) @[StrongEnum.scala 60:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 60:22]
    io.valid <= _T_8 @[StrongEnum.scala 60:12]
    
  module CastFromLitTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst CastFromLit of CastFromLit @[StrongEnum.scala 162:21]
    CastFromLit.clock <= clock
    CastFromLit.reset <= reset
    node _T = eq(CastFromLit.io.out, UInt<1>("h00")) @[StrongEnum.scala 163:23]
    node _T_1 = bits(reset, 0, 0) @[StrongEnum.scala 163:11]
    node _T_2 = or(_T, _T_1) @[StrongEnum.scala 163:11]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[StrongEnum.scala 163:11]
    when _T_3 : @[StrongEnum.scala 163:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:163 assert(mod.io.out === enum)\n") @[StrongEnum.scala 163:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 163:11]
      skip @[StrongEnum.scala 163:11]
    node _T_4 = eq(CastFromLit.io.valid, UInt<1>("h01")) @[StrongEnum.scala 164:25]
    node _T_5 = bits(reset, 0, 0) @[StrongEnum.scala 164:11]
    node _T_6 = or(_T_4, _T_5) @[StrongEnum.scala 164:11]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[StrongEnum.scala 164:11]
    when _T_7 : @[StrongEnum.scala 164:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:164 assert(mod.io.valid === true.B)\n") @[StrongEnum.scala 164:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 164:11]
      skip @[StrongEnum.scala 164:11]
    inst CastFromLit_1 of CastFromLit_1 @[StrongEnum.scala 162:21]
    CastFromLit_1.clock <= clock
    CastFromLit_1.reset <= reset
    node _T_8 = eq(CastFromLit_1.io.out, UInt<1>("h01")) @[StrongEnum.scala 163:23]
    node _T_9 = bits(reset, 0, 0) @[StrongEnum.scala 163:11]
    node _T_10 = or(_T_8, _T_9) @[StrongEnum.scala 163:11]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[StrongEnum.scala 163:11]
    when _T_11 : @[StrongEnum.scala 163:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:163 assert(mod.io.out === enum)\n") @[StrongEnum.scala 163:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 163:11]
      skip @[StrongEnum.scala 163:11]
    node _T_12 = eq(CastFromLit_1.io.valid, UInt<1>("h01")) @[StrongEnum.scala 164:25]
    node _T_13 = bits(reset, 0, 0) @[StrongEnum.scala 164:11]
    node _T_14 = or(_T_12, _T_13) @[StrongEnum.scala 164:11]
    node _T_15 = eq(_T_14, UInt<1>("h00")) @[StrongEnum.scala 164:11]
    when _T_15 : @[StrongEnum.scala 164:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:164 assert(mod.io.valid === true.B)\n") @[StrongEnum.scala 164:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 164:11]
      skip @[StrongEnum.scala 164:11]
    inst CastFromLit_2 of CastFromLit_2 @[StrongEnum.scala 162:21]
    CastFromLit_2.clock <= clock
    CastFromLit_2.reset <= reset
    node _T_16 = eq(CastFromLit_2.io.out, UInt<2>("h02")) @[StrongEnum.scala 163:23]
    node _T_17 = bits(reset, 0, 0) @[StrongEnum.scala 163:11]
    node _T_18 = or(_T_16, _T_17) @[StrongEnum.scala 163:11]
    node _T_19 = eq(_T_18, UInt<1>("h00")) @[StrongEnum.scala 163:11]
    when _T_19 : @[StrongEnum.scala 163:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:163 assert(mod.io.out === enum)\n") @[StrongEnum.scala 163:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 163:11]
      skip @[StrongEnum.scala 163:11]
    node _T_20 = eq(CastFromLit_2.io.valid, UInt<1>("h01")) @[StrongEnum.scala 164:25]
    node _T_21 = bits(reset, 0, 0) @[StrongEnum.scala 164:11]
    node _T_22 = or(_T_20, _T_21) @[StrongEnum.scala 164:11]
    node _T_23 = eq(_T_22, UInt<1>("h00")) @[StrongEnum.scala 164:11]
    when _T_23 : @[StrongEnum.scala 164:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:164 assert(mod.io.valid === true.B)\n") @[StrongEnum.scala 164:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 164:11]
      skip @[StrongEnum.scala 164:11]
    inst CastFromLit_3 of CastFromLit_3 @[StrongEnum.scala 162:21]
    CastFromLit_3.clock <= clock
    CastFromLit_3.reset <= reset
    node _T_24 = eq(CastFromLit_3.io.out, UInt<7>("h064")) @[StrongEnum.scala 163:23]
    node _T_25 = bits(reset, 0, 0) @[StrongEnum.scala 163:11]
    node _T_26 = or(_T_24, _T_25) @[StrongEnum.scala 163:11]
    node _T_27 = eq(_T_26, UInt<1>("h00")) @[StrongEnum.scala 163:11]
    when _T_27 : @[StrongEnum.scala 163:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:163 assert(mod.io.out === enum)\n") @[StrongEnum.scala 163:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 163:11]
      skip @[StrongEnum.scala 163:11]
    node _T_28 = eq(CastFromLit_3.io.valid, UInt<1>("h01")) @[StrongEnum.scala 164:25]
    node _T_29 = bits(reset, 0, 0) @[StrongEnum.scala 164:11]
    node _T_30 = or(_T_28, _T_29) @[StrongEnum.scala 164:11]
    node _T_31 = eq(_T_30, UInt<1>("h00")) @[StrongEnum.scala 164:11]
    when _T_31 : @[StrongEnum.scala 164:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:164 assert(mod.io.valid === true.B)\n") @[StrongEnum.scala 164:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 164:11]
      skip @[StrongEnum.scala 164:11]
    inst CastFromLit_4 of CastFromLit_4 @[StrongEnum.scala 162:21]
    CastFromLit_4.clock <= clock
    CastFromLit_4.reset <= reset
    node _T_32 = eq(CastFromLit_4.io.out, UInt<7>("h065")) @[StrongEnum.scala 163:23]
    node _T_33 = bits(reset, 0, 0) @[StrongEnum.scala 163:11]
    node _T_34 = or(_T_32, _T_33) @[StrongEnum.scala 163:11]
    node _T_35 = eq(_T_34, UInt<1>("h00")) @[StrongEnum.scala 163:11]
    when _T_35 : @[StrongEnum.scala 163:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:163 assert(mod.io.out === enum)\n") @[StrongEnum.scala 163:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 163:11]
      skip @[StrongEnum.scala 163:11]
    node _T_36 = eq(CastFromLit_4.io.valid, UInt<1>("h01")) @[StrongEnum.scala 164:25]
    node _T_37 = bits(reset, 0, 0) @[StrongEnum.scala 164:11]
    node _T_38 = or(_T_36, _T_37) @[StrongEnum.scala 164:11]
    node _T_39 = eq(_T_38, UInt<1>("h00")) @[StrongEnum.scala 164:11]
    when _T_39 : @[StrongEnum.scala 164:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:164 assert(mod.io.valid === true.B)\n") @[StrongEnum.scala 164:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 164:11]
      skip @[StrongEnum.scala 164:11]
    node _T_40 = bits(reset, 0, 0) @[StrongEnum.scala 166:7]
    node _T_41 = eq(_T_40, UInt<1>("h00")) @[StrongEnum.scala 166:7]
    when _T_41 : @[StrongEnum.scala 166:7]
      stop(clock, UInt<1>(1), 0) @[StrongEnum.scala 166:7]
      skip @[StrongEnum.scala 166:7]
    
