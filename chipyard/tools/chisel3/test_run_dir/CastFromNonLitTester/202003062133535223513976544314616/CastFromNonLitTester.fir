;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit CastFromNonLitTester : 
  module CastFromNonLit : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_1 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_2 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_3 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_4 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_5 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_6 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_7 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_8 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_9 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_10 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_11 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_12 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_13 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_14 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_15 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_16 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_17 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_18 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_19 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_20 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_21 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_22 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_23 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_24 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_25 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_26 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_27 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_28 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_29 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_30 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_31 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_32 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_33 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_34 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_35 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_36 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_37 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_38 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_39 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_40 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_41 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_42 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_43 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_44 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_45 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_46 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_47 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_48 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_49 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_50 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_51 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_52 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_53 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_54 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_55 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_56 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_57 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_58 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_59 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_60 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_61 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_62 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_63 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_64 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_65 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_66 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_67 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_68 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_69 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_70 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_71 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_72 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_73 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_74 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_75 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_76 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_77 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_78 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_79 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_80 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_81 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_82 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_83 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_84 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_85 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_86 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_87 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_88 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_89 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_90 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_91 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_92 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_93 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_94 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_95 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_96 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_97 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_98 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_99 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_100 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_101 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_102 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_103 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_104 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_105 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_106 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_107 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_108 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_109 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_110 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_111 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_112 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_113 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_114 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_115 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_116 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_117 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_118 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_119 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_120 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_121 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_122 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_123 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_124 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_125 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_126 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLit_127 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<7>, out : UInt<7>, valid : UInt<1>}
    
    wire _T : UInt<7> @[StrongEnum.scala 70:24]
    _T <= io.in @[StrongEnum.scala 70:24]
    wire _T_1 : UInt<7> @[StrongEnum.scala 70:24]
    _T_1 <= _T @[StrongEnum.scala 70:24]
    io.out <= _T_1 @[StrongEnum.scala 70:10]
    node _T_2 = eq(io.out, UInt<1>("h00")) @[StrongEnum.scala 71:22]
    node _T_3 = eq(io.out, UInt<1>("h01")) @[StrongEnum.scala 71:22]
    node _T_4 = eq(io.out, UInt<2>("h02")) @[StrongEnum.scala 71:22]
    node _T_5 = eq(io.out, UInt<7>("h064")) @[StrongEnum.scala 71:22]
    node _T_6 = eq(io.out, UInt<7>("h065")) @[StrongEnum.scala 71:22]
    node _T_7 = or(_T_2, _T_3) @[StrongEnum.scala 71:22]
    node _T_8 = or(_T_7, _T_4) @[StrongEnum.scala 71:22]
    node _T_9 = or(_T_8, _T_5) @[StrongEnum.scala 71:22]
    node _T_10 = or(_T_9, _T_6) @[StrongEnum.scala 71:22]
    io.valid <= _T_10 @[StrongEnum.scala 71:12]
    
  module CastFromNonLitTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst CastFromNonLit of CastFromNonLit @[StrongEnum.scala 171:21]
    CastFromNonLit.clock <= clock
    CastFromNonLit.reset <= reset
    CastFromNonLit.io.in <= UInt<1>("h00") @[StrongEnum.scala 172:15]
    node _T = eq(CastFromNonLit.io.out, UInt<1>("h00")) @[StrongEnum.scala 173:23]
    node _T_1 = bits(reset, 0, 0) @[StrongEnum.scala 173:11]
    node _T_2 = or(_T, _T_1) @[StrongEnum.scala 173:11]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[StrongEnum.scala 173:11]
    when _T_3 : @[StrongEnum.scala 173:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:173 assert(mod.io.out === enum)\n") @[StrongEnum.scala 173:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 173:11]
      skip @[StrongEnum.scala 173:11]
    node _T_4 = eq(CastFromNonLit.io.valid, UInt<1>("h01")) @[StrongEnum.scala 174:25]
    node _T_5 = bits(reset, 0, 0) @[StrongEnum.scala 174:11]
    node _T_6 = or(_T_4, _T_5) @[StrongEnum.scala 174:11]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[StrongEnum.scala 174:11]
    when _T_7 : @[StrongEnum.scala 174:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:174 assert(mod.io.valid === true.B)\n") @[StrongEnum.scala 174:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 174:11]
      skip @[StrongEnum.scala 174:11]
    inst CastFromNonLit_1 of CastFromNonLit_1 @[StrongEnum.scala 171:21]
    CastFromNonLit_1.clock <= clock
    CastFromNonLit_1.reset <= reset
    CastFromNonLit_1.io.in <= UInt<1>("h01") @[StrongEnum.scala 172:15]
    node _T_8 = eq(CastFromNonLit_1.io.out, UInt<1>("h01")) @[StrongEnum.scala 173:23]
    node _T_9 = bits(reset, 0, 0) @[StrongEnum.scala 173:11]
    node _T_10 = or(_T_8, _T_9) @[StrongEnum.scala 173:11]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[StrongEnum.scala 173:11]
    when _T_11 : @[StrongEnum.scala 173:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:173 assert(mod.io.out === enum)\n") @[StrongEnum.scala 173:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 173:11]
      skip @[StrongEnum.scala 173:11]
    node _T_12 = eq(CastFromNonLit_1.io.valid, UInt<1>("h01")) @[StrongEnum.scala 174:25]
    node _T_13 = bits(reset, 0, 0) @[StrongEnum.scala 174:11]
    node _T_14 = or(_T_12, _T_13) @[StrongEnum.scala 174:11]
    node _T_15 = eq(_T_14, UInt<1>("h00")) @[StrongEnum.scala 174:11]
    when _T_15 : @[StrongEnum.scala 174:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:174 assert(mod.io.valid === true.B)\n") @[StrongEnum.scala 174:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 174:11]
      skip @[StrongEnum.scala 174:11]
    inst CastFromNonLit_2 of CastFromNonLit_2 @[StrongEnum.scala 171:21]
    CastFromNonLit_2.clock <= clock
    CastFromNonLit_2.reset <= reset
    CastFromNonLit_2.io.in <= UInt<2>("h02") @[StrongEnum.scala 172:15]
    node _T_16 = eq(CastFromNonLit_2.io.out, UInt<2>("h02")) @[StrongEnum.scala 173:23]
    node _T_17 = bits(reset, 0, 0) @[StrongEnum.scala 173:11]
    node _T_18 = or(_T_16, _T_17) @[StrongEnum.scala 173:11]
    node _T_19 = eq(_T_18, UInt<1>("h00")) @[StrongEnum.scala 173:11]
    when _T_19 : @[StrongEnum.scala 173:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:173 assert(mod.io.out === enum)\n") @[StrongEnum.scala 173:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 173:11]
      skip @[StrongEnum.scala 173:11]
    node _T_20 = eq(CastFromNonLit_2.io.valid, UInt<1>("h01")) @[StrongEnum.scala 174:25]
    node _T_21 = bits(reset, 0, 0) @[StrongEnum.scala 174:11]
    node _T_22 = or(_T_20, _T_21) @[StrongEnum.scala 174:11]
    node _T_23 = eq(_T_22, UInt<1>("h00")) @[StrongEnum.scala 174:11]
    when _T_23 : @[StrongEnum.scala 174:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:174 assert(mod.io.valid === true.B)\n") @[StrongEnum.scala 174:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 174:11]
      skip @[StrongEnum.scala 174:11]
    inst CastFromNonLit_3 of CastFromNonLit_3 @[StrongEnum.scala 171:21]
    CastFromNonLit_3.clock <= clock
    CastFromNonLit_3.reset <= reset
    CastFromNonLit_3.io.in <= UInt<7>("h064") @[StrongEnum.scala 172:15]
    node _T_24 = eq(CastFromNonLit_3.io.out, UInt<7>("h064")) @[StrongEnum.scala 173:23]
    node _T_25 = bits(reset, 0, 0) @[StrongEnum.scala 173:11]
    node _T_26 = or(_T_24, _T_25) @[StrongEnum.scala 173:11]
    node _T_27 = eq(_T_26, UInt<1>("h00")) @[StrongEnum.scala 173:11]
    when _T_27 : @[StrongEnum.scala 173:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:173 assert(mod.io.out === enum)\n") @[StrongEnum.scala 173:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 173:11]
      skip @[StrongEnum.scala 173:11]
    node _T_28 = eq(CastFromNonLit_3.io.valid, UInt<1>("h01")) @[StrongEnum.scala 174:25]
    node _T_29 = bits(reset, 0, 0) @[StrongEnum.scala 174:11]
    node _T_30 = or(_T_28, _T_29) @[StrongEnum.scala 174:11]
    node _T_31 = eq(_T_30, UInt<1>("h00")) @[StrongEnum.scala 174:11]
    when _T_31 : @[StrongEnum.scala 174:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:174 assert(mod.io.valid === true.B)\n") @[StrongEnum.scala 174:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 174:11]
      skip @[StrongEnum.scala 174:11]
    inst CastFromNonLit_4 of CastFromNonLit_4 @[StrongEnum.scala 171:21]
    CastFromNonLit_4.clock <= clock
    CastFromNonLit_4.reset <= reset
    CastFromNonLit_4.io.in <= UInt<7>("h065") @[StrongEnum.scala 172:15]
    node _T_32 = eq(CastFromNonLit_4.io.out, UInt<7>("h065")) @[StrongEnum.scala 173:23]
    node _T_33 = bits(reset, 0, 0) @[StrongEnum.scala 173:11]
    node _T_34 = or(_T_32, _T_33) @[StrongEnum.scala 173:11]
    node _T_35 = eq(_T_34, UInt<1>("h00")) @[StrongEnum.scala 173:11]
    when _T_35 : @[StrongEnum.scala 173:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:173 assert(mod.io.out === enum)\n") @[StrongEnum.scala 173:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 173:11]
      skip @[StrongEnum.scala 173:11]
    node _T_36 = eq(CastFromNonLit_4.io.valid, UInt<1>("h01")) @[StrongEnum.scala 174:25]
    node _T_37 = bits(reset, 0, 0) @[StrongEnum.scala 174:11]
    node _T_38 = or(_T_36, _T_37) @[StrongEnum.scala 174:11]
    node _T_39 = eq(_T_38, UInt<1>("h00")) @[StrongEnum.scala 174:11]
    when _T_39 : @[StrongEnum.scala 174:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:174 assert(mod.io.valid === true.B)\n") @[StrongEnum.scala 174:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 174:11]
      skip @[StrongEnum.scala 174:11]
    inst CastFromNonLit_5 of CastFromNonLit_5 @[StrongEnum.scala 182:21]
    CastFromNonLit_5.clock <= clock
    CastFromNonLit_5.reset <= reset
    CastFromNonLit_5.io.in <= UInt<2>("h03") @[StrongEnum.scala 183:15]
    node _T_40 = eq(CastFromNonLit_5.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_41 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_42 = or(_T_40, _T_41) @[StrongEnum.scala 185:11]
    node _T_43 = eq(_T_42, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_43 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_6 of CastFromNonLit_6 @[StrongEnum.scala 182:21]
    CastFromNonLit_6.clock <= clock
    CastFromNonLit_6.reset <= reset
    CastFromNonLit_6.io.in <= UInt<3>("h04") @[StrongEnum.scala 183:15]
    node _T_44 = eq(CastFromNonLit_6.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_45 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_46 = or(_T_44, _T_45) @[StrongEnum.scala 185:11]
    node _T_47 = eq(_T_46, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_47 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_7 of CastFromNonLit_7 @[StrongEnum.scala 182:21]
    CastFromNonLit_7.clock <= clock
    CastFromNonLit_7.reset <= reset
    CastFromNonLit_7.io.in <= UInt<3>("h05") @[StrongEnum.scala 183:15]
    node _T_48 = eq(CastFromNonLit_7.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_49 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_50 = or(_T_48, _T_49) @[StrongEnum.scala 185:11]
    node _T_51 = eq(_T_50, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_51 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_8 of CastFromNonLit_8 @[StrongEnum.scala 182:21]
    CastFromNonLit_8.clock <= clock
    CastFromNonLit_8.reset <= reset
    CastFromNonLit_8.io.in <= UInt<3>("h06") @[StrongEnum.scala 183:15]
    node _T_52 = eq(CastFromNonLit_8.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_53 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_54 = or(_T_52, _T_53) @[StrongEnum.scala 185:11]
    node _T_55 = eq(_T_54, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_55 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_9 of CastFromNonLit_9 @[StrongEnum.scala 182:21]
    CastFromNonLit_9.clock <= clock
    CastFromNonLit_9.reset <= reset
    CastFromNonLit_9.io.in <= UInt<3>("h07") @[StrongEnum.scala 183:15]
    node _T_56 = eq(CastFromNonLit_9.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_57 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_58 = or(_T_56, _T_57) @[StrongEnum.scala 185:11]
    node _T_59 = eq(_T_58, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_59 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_10 of CastFromNonLit_10 @[StrongEnum.scala 182:21]
    CastFromNonLit_10.clock <= clock
    CastFromNonLit_10.reset <= reset
    CastFromNonLit_10.io.in <= UInt<4>("h08") @[StrongEnum.scala 183:15]
    node _T_60 = eq(CastFromNonLit_10.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_61 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_62 = or(_T_60, _T_61) @[StrongEnum.scala 185:11]
    node _T_63 = eq(_T_62, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_63 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_11 of CastFromNonLit_11 @[StrongEnum.scala 182:21]
    CastFromNonLit_11.clock <= clock
    CastFromNonLit_11.reset <= reset
    CastFromNonLit_11.io.in <= UInt<4>("h09") @[StrongEnum.scala 183:15]
    node _T_64 = eq(CastFromNonLit_11.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_65 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_66 = or(_T_64, _T_65) @[StrongEnum.scala 185:11]
    node _T_67 = eq(_T_66, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_67 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_12 of CastFromNonLit_12 @[StrongEnum.scala 182:21]
    CastFromNonLit_12.clock <= clock
    CastFromNonLit_12.reset <= reset
    CastFromNonLit_12.io.in <= UInt<4>("h0a") @[StrongEnum.scala 183:15]
    node _T_68 = eq(CastFromNonLit_12.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_69 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_70 = or(_T_68, _T_69) @[StrongEnum.scala 185:11]
    node _T_71 = eq(_T_70, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_71 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_13 of CastFromNonLit_13 @[StrongEnum.scala 182:21]
    CastFromNonLit_13.clock <= clock
    CastFromNonLit_13.reset <= reset
    CastFromNonLit_13.io.in <= UInt<4>("h0b") @[StrongEnum.scala 183:15]
    node _T_72 = eq(CastFromNonLit_13.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_73 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_74 = or(_T_72, _T_73) @[StrongEnum.scala 185:11]
    node _T_75 = eq(_T_74, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_75 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_14 of CastFromNonLit_14 @[StrongEnum.scala 182:21]
    CastFromNonLit_14.clock <= clock
    CastFromNonLit_14.reset <= reset
    CastFromNonLit_14.io.in <= UInt<4>("h0c") @[StrongEnum.scala 183:15]
    node _T_76 = eq(CastFromNonLit_14.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_77 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_78 = or(_T_76, _T_77) @[StrongEnum.scala 185:11]
    node _T_79 = eq(_T_78, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_79 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_15 of CastFromNonLit_15 @[StrongEnum.scala 182:21]
    CastFromNonLit_15.clock <= clock
    CastFromNonLit_15.reset <= reset
    CastFromNonLit_15.io.in <= UInt<4>("h0d") @[StrongEnum.scala 183:15]
    node _T_80 = eq(CastFromNonLit_15.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_81 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_82 = or(_T_80, _T_81) @[StrongEnum.scala 185:11]
    node _T_83 = eq(_T_82, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_83 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_16 of CastFromNonLit_16 @[StrongEnum.scala 182:21]
    CastFromNonLit_16.clock <= clock
    CastFromNonLit_16.reset <= reset
    CastFromNonLit_16.io.in <= UInt<4>("h0e") @[StrongEnum.scala 183:15]
    node _T_84 = eq(CastFromNonLit_16.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_85 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_86 = or(_T_84, _T_85) @[StrongEnum.scala 185:11]
    node _T_87 = eq(_T_86, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_87 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_17 of CastFromNonLit_17 @[StrongEnum.scala 182:21]
    CastFromNonLit_17.clock <= clock
    CastFromNonLit_17.reset <= reset
    CastFromNonLit_17.io.in <= UInt<4>("h0f") @[StrongEnum.scala 183:15]
    node _T_88 = eq(CastFromNonLit_17.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_89 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_90 = or(_T_88, _T_89) @[StrongEnum.scala 185:11]
    node _T_91 = eq(_T_90, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_91 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_18 of CastFromNonLit_18 @[StrongEnum.scala 182:21]
    CastFromNonLit_18.clock <= clock
    CastFromNonLit_18.reset <= reset
    CastFromNonLit_18.io.in <= UInt<5>("h010") @[StrongEnum.scala 183:15]
    node _T_92 = eq(CastFromNonLit_18.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_93 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_94 = or(_T_92, _T_93) @[StrongEnum.scala 185:11]
    node _T_95 = eq(_T_94, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_95 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_19 of CastFromNonLit_19 @[StrongEnum.scala 182:21]
    CastFromNonLit_19.clock <= clock
    CastFromNonLit_19.reset <= reset
    CastFromNonLit_19.io.in <= UInt<5>("h011") @[StrongEnum.scala 183:15]
    node _T_96 = eq(CastFromNonLit_19.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_97 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_98 = or(_T_96, _T_97) @[StrongEnum.scala 185:11]
    node _T_99 = eq(_T_98, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_99 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_20 of CastFromNonLit_20 @[StrongEnum.scala 182:21]
    CastFromNonLit_20.clock <= clock
    CastFromNonLit_20.reset <= reset
    CastFromNonLit_20.io.in <= UInt<5>("h012") @[StrongEnum.scala 183:15]
    node _T_100 = eq(CastFromNonLit_20.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_101 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_102 = or(_T_100, _T_101) @[StrongEnum.scala 185:11]
    node _T_103 = eq(_T_102, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_103 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_21 of CastFromNonLit_21 @[StrongEnum.scala 182:21]
    CastFromNonLit_21.clock <= clock
    CastFromNonLit_21.reset <= reset
    CastFromNonLit_21.io.in <= UInt<5>("h013") @[StrongEnum.scala 183:15]
    node _T_104 = eq(CastFromNonLit_21.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_105 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_106 = or(_T_104, _T_105) @[StrongEnum.scala 185:11]
    node _T_107 = eq(_T_106, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_107 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_22 of CastFromNonLit_22 @[StrongEnum.scala 182:21]
    CastFromNonLit_22.clock <= clock
    CastFromNonLit_22.reset <= reset
    CastFromNonLit_22.io.in <= UInt<5>("h014") @[StrongEnum.scala 183:15]
    node _T_108 = eq(CastFromNonLit_22.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_109 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_110 = or(_T_108, _T_109) @[StrongEnum.scala 185:11]
    node _T_111 = eq(_T_110, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_111 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_23 of CastFromNonLit_23 @[StrongEnum.scala 182:21]
    CastFromNonLit_23.clock <= clock
    CastFromNonLit_23.reset <= reset
    CastFromNonLit_23.io.in <= UInt<5>("h015") @[StrongEnum.scala 183:15]
    node _T_112 = eq(CastFromNonLit_23.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_113 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_114 = or(_T_112, _T_113) @[StrongEnum.scala 185:11]
    node _T_115 = eq(_T_114, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_115 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_24 of CastFromNonLit_24 @[StrongEnum.scala 182:21]
    CastFromNonLit_24.clock <= clock
    CastFromNonLit_24.reset <= reset
    CastFromNonLit_24.io.in <= UInt<5>("h016") @[StrongEnum.scala 183:15]
    node _T_116 = eq(CastFromNonLit_24.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_117 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_118 = or(_T_116, _T_117) @[StrongEnum.scala 185:11]
    node _T_119 = eq(_T_118, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_119 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_25 of CastFromNonLit_25 @[StrongEnum.scala 182:21]
    CastFromNonLit_25.clock <= clock
    CastFromNonLit_25.reset <= reset
    CastFromNonLit_25.io.in <= UInt<5>("h017") @[StrongEnum.scala 183:15]
    node _T_120 = eq(CastFromNonLit_25.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_121 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_122 = or(_T_120, _T_121) @[StrongEnum.scala 185:11]
    node _T_123 = eq(_T_122, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_123 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_26 of CastFromNonLit_26 @[StrongEnum.scala 182:21]
    CastFromNonLit_26.clock <= clock
    CastFromNonLit_26.reset <= reset
    CastFromNonLit_26.io.in <= UInt<5>("h018") @[StrongEnum.scala 183:15]
    node _T_124 = eq(CastFromNonLit_26.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_125 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_126 = or(_T_124, _T_125) @[StrongEnum.scala 185:11]
    node _T_127 = eq(_T_126, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_127 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_27 of CastFromNonLit_27 @[StrongEnum.scala 182:21]
    CastFromNonLit_27.clock <= clock
    CastFromNonLit_27.reset <= reset
    CastFromNonLit_27.io.in <= UInt<5>("h019") @[StrongEnum.scala 183:15]
    node _T_128 = eq(CastFromNonLit_27.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_129 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_130 = or(_T_128, _T_129) @[StrongEnum.scala 185:11]
    node _T_131 = eq(_T_130, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_131 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_28 of CastFromNonLit_28 @[StrongEnum.scala 182:21]
    CastFromNonLit_28.clock <= clock
    CastFromNonLit_28.reset <= reset
    CastFromNonLit_28.io.in <= UInt<5>("h01a") @[StrongEnum.scala 183:15]
    node _T_132 = eq(CastFromNonLit_28.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_133 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_134 = or(_T_132, _T_133) @[StrongEnum.scala 185:11]
    node _T_135 = eq(_T_134, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_135 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_29 of CastFromNonLit_29 @[StrongEnum.scala 182:21]
    CastFromNonLit_29.clock <= clock
    CastFromNonLit_29.reset <= reset
    CastFromNonLit_29.io.in <= UInt<5>("h01b") @[StrongEnum.scala 183:15]
    node _T_136 = eq(CastFromNonLit_29.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_137 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_138 = or(_T_136, _T_137) @[StrongEnum.scala 185:11]
    node _T_139 = eq(_T_138, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_139 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_30 of CastFromNonLit_30 @[StrongEnum.scala 182:21]
    CastFromNonLit_30.clock <= clock
    CastFromNonLit_30.reset <= reset
    CastFromNonLit_30.io.in <= UInt<5>("h01c") @[StrongEnum.scala 183:15]
    node _T_140 = eq(CastFromNonLit_30.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_141 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_142 = or(_T_140, _T_141) @[StrongEnum.scala 185:11]
    node _T_143 = eq(_T_142, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_143 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_31 of CastFromNonLit_31 @[StrongEnum.scala 182:21]
    CastFromNonLit_31.clock <= clock
    CastFromNonLit_31.reset <= reset
    CastFromNonLit_31.io.in <= UInt<5>("h01d") @[StrongEnum.scala 183:15]
    node _T_144 = eq(CastFromNonLit_31.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_145 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_146 = or(_T_144, _T_145) @[StrongEnum.scala 185:11]
    node _T_147 = eq(_T_146, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_147 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_32 of CastFromNonLit_32 @[StrongEnum.scala 182:21]
    CastFromNonLit_32.clock <= clock
    CastFromNonLit_32.reset <= reset
    CastFromNonLit_32.io.in <= UInt<5>("h01e") @[StrongEnum.scala 183:15]
    node _T_148 = eq(CastFromNonLit_32.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_149 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_150 = or(_T_148, _T_149) @[StrongEnum.scala 185:11]
    node _T_151 = eq(_T_150, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_151 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_33 of CastFromNonLit_33 @[StrongEnum.scala 182:21]
    CastFromNonLit_33.clock <= clock
    CastFromNonLit_33.reset <= reset
    CastFromNonLit_33.io.in <= UInt<5>("h01f") @[StrongEnum.scala 183:15]
    node _T_152 = eq(CastFromNonLit_33.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_153 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_154 = or(_T_152, _T_153) @[StrongEnum.scala 185:11]
    node _T_155 = eq(_T_154, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_155 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_34 of CastFromNonLit_34 @[StrongEnum.scala 182:21]
    CastFromNonLit_34.clock <= clock
    CastFromNonLit_34.reset <= reset
    CastFromNonLit_34.io.in <= UInt<6>("h020") @[StrongEnum.scala 183:15]
    node _T_156 = eq(CastFromNonLit_34.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_157 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_158 = or(_T_156, _T_157) @[StrongEnum.scala 185:11]
    node _T_159 = eq(_T_158, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_159 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_35 of CastFromNonLit_35 @[StrongEnum.scala 182:21]
    CastFromNonLit_35.clock <= clock
    CastFromNonLit_35.reset <= reset
    CastFromNonLit_35.io.in <= UInt<6>("h021") @[StrongEnum.scala 183:15]
    node _T_160 = eq(CastFromNonLit_35.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_161 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_162 = or(_T_160, _T_161) @[StrongEnum.scala 185:11]
    node _T_163 = eq(_T_162, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_163 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_36 of CastFromNonLit_36 @[StrongEnum.scala 182:21]
    CastFromNonLit_36.clock <= clock
    CastFromNonLit_36.reset <= reset
    CastFromNonLit_36.io.in <= UInt<6>("h022") @[StrongEnum.scala 183:15]
    node _T_164 = eq(CastFromNonLit_36.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_165 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_166 = or(_T_164, _T_165) @[StrongEnum.scala 185:11]
    node _T_167 = eq(_T_166, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_167 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_37 of CastFromNonLit_37 @[StrongEnum.scala 182:21]
    CastFromNonLit_37.clock <= clock
    CastFromNonLit_37.reset <= reset
    CastFromNonLit_37.io.in <= UInt<6>("h023") @[StrongEnum.scala 183:15]
    node _T_168 = eq(CastFromNonLit_37.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_169 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_170 = or(_T_168, _T_169) @[StrongEnum.scala 185:11]
    node _T_171 = eq(_T_170, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_171 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_38 of CastFromNonLit_38 @[StrongEnum.scala 182:21]
    CastFromNonLit_38.clock <= clock
    CastFromNonLit_38.reset <= reset
    CastFromNonLit_38.io.in <= UInt<6>("h024") @[StrongEnum.scala 183:15]
    node _T_172 = eq(CastFromNonLit_38.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_173 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_174 = or(_T_172, _T_173) @[StrongEnum.scala 185:11]
    node _T_175 = eq(_T_174, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_175 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_39 of CastFromNonLit_39 @[StrongEnum.scala 182:21]
    CastFromNonLit_39.clock <= clock
    CastFromNonLit_39.reset <= reset
    CastFromNonLit_39.io.in <= UInt<6>("h025") @[StrongEnum.scala 183:15]
    node _T_176 = eq(CastFromNonLit_39.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_177 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_178 = or(_T_176, _T_177) @[StrongEnum.scala 185:11]
    node _T_179 = eq(_T_178, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_179 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_40 of CastFromNonLit_40 @[StrongEnum.scala 182:21]
    CastFromNonLit_40.clock <= clock
    CastFromNonLit_40.reset <= reset
    CastFromNonLit_40.io.in <= UInt<6>("h026") @[StrongEnum.scala 183:15]
    node _T_180 = eq(CastFromNonLit_40.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_181 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_182 = or(_T_180, _T_181) @[StrongEnum.scala 185:11]
    node _T_183 = eq(_T_182, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_183 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_41 of CastFromNonLit_41 @[StrongEnum.scala 182:21]
    CastFromNonLit_41.clock <= clock
    CastFromNonLit_41.reset <= reset
    CastFromNonLit_41.io.in <= UInt<6>("h027") @[StrongEnum.scala 183:15]
    node _T_184 = eq(CastFromNonLit_41.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_185 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_186 = or(_T_184, _T_185) @[StrongEnum.scala 185:11]
    node _T_187 = eq(_T_186, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_187 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_42 of CastFromNonLit_42 @[StrongEnum.scala 182:21]
    CastFromNonLit_42.clock <= clock
    CastFromNonLit_42.reset <= reset
    CastFromNonLit_42.io.in <= UInt<6>("h028") @[StrongEnum.scala 183:15]
    node _T_188 = eq(CastFromNonLit_42.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_189 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_190 = or(_T_188, _T_189) @[StrongEnum.scala 185:11]
    node _T_191 = eq(_T_190, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_191 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_43 of CastFromNonLit_43 @[StrongEnum.scala 182:21]
    CastFromNonLit_43.clock <= clock
    CastFromNonLit_43.reset <= reset
    CastFromNonLit_43.io.in <= UInt<6>("h029") @[StrongEnum.scala 183:15]
    node _T_192 = eq(CastFromNonLit_43.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_193 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_194 = or(_T_192, _T_193) @[StrongEnum.scala 185:11]
    node _T_195 = eq(_T_194, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_195 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_44 of CastFromNonLit_44 @[StrongEnum.scala 182:21]
    CastFromNonLit_44.clock <= clock
    CastFromNonLit_44.reset <= reset
    CastFromNonLit_44.io.in <= UInt<6>("h02a") @[StrongEnum.scala 183:15]
    node _T_196 = eq(CastFromNonLit_44.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_197 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_198 = or(_T_196, _T_197) @[StrongEnum.scala 185:11]
    node _T_199 = eq(_T_198, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_199 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_45 of CastFromNonLit_45 @[StrongEnum.scala 182:21]
    CastFromNonLit_45.clock <= clock
    CastFromNonLit_45.reset <= reset
    CastFromNonLit_45.io.in <= UInt<6>("h02b") @[StrongEnum.scala 183:15]
    node _T_200 = eq(CastFromNonLit_45.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_201 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_202 = or(_T_200, _T_201) @[StrongEnum.scala 185:11]
    node _T_203 = eq(_T_202, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_203 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_46 of CastFromNonLit_46 @[StrongEnum.scala 182:21]
    CastFromNonLit_46.clock <= clock
    CastFromNonLit_46.reset <= reset
    CastFromNonLit_46.io.in <= UInt<6>("h02c") @[StrongEnum.scala 183:15]
    node _T_204 = eq(CastFromNonLit_46.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_205 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_206 = or(_T_204, _T_205) @[StrongEnum.scala 185:11]
    node _T_207 = eq(_T_206, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_207 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_47 of CastFromNonLit_47 @[StrongEnum.scala 182:21]
    CastFromNonLit_47.clock <= clock
    CastFromNonLit_47.reset <= reset
    CastFromNonLit_47.io.in <= UInt<6>("h02d") @[StrongEnum.scala 183:15]
    node _T_208 = eq(CastFromNonLit_47.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_209 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_210 = or(_T_208, _T_209) @[StrongEnum.scala 185:11]
    node _T_211 = eq(_T_210, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_211 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_48 of CastFromNonLit_48 @[StrongEnum.scala 182:21]
    CastFromNonLit_48.clock <= clock
    CastFromNonLit_48.reset <= reset
    CastFromNonLit_48.io.in <= UInt<6>("h02e") @[StrongEnum.scala 183:15]
    node _T_212 = eq(CastFromNonLit_48.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_213 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_214 = or(_T_212, _T_213) @[StrongEnum.scala 185:11]
    node _T_215 = eq(_T_214, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_215 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_49 of CastFromNonLit_49 @[StrongEnum.scala 182:21]
    CastFromNonLit_49.clock <= clock
    CastFromNonLit_49.reset <= reset
    CastFromNonLit_49.io.in <= UInt<6>("h02f") @[StrongEnum.scala 183:15]
    node _T_216 = eq(CastFromNonLit_49.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_217 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_218 = or(_T_216, _T_217) @[StrongEnum.scala 185:11]
    node _T_219 = eq(_T_218, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_219 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_50 of CastFromNonLit_50 @[StrongEnum.scala 182:21]
    CastFromNonLit_50.clock <= clock
    CastFromNonLit_50.reset <= reset
    CastFromNonLit_50.io.in <= UInt<6>("h030") @[StrongEnum.scala 183:15]
    node _T_220 = eq(CastFromNonLit_50.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_221 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_222 = or(_T_220, _T_221) @[StrongEnum.scala 185:11]
    node _T_223 = eq(_T_222, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_223 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_51 of CastFromNonLit_51 @[StrongEnum.scala 182:21]
    CastFromNonLit_51.clock <= clock
    CastFromNonLit_51.reset <= reset
    CastFromNonLit_51.io.in <= UInt<6>("h031") @[StrongEnum.scala 183:15]
    node _T_224 = eq(CastFromNonLit_51.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_225 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_226 = or(_T_224, _T_225) @[StrongEnum.scala 185:11]
    node _T_227 = eq(_T_226, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_227 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_52 of CastFromNonLit_52 @[StrongEnum.scala 182:21]
    CastFromNonLit_52.clock <= clock
    CastFromNonLit_52.reset <= reset
    CastFromNonLit_52.io.in <= UInt<6>("h032") @[StrongEnum.scala 183:15]
    node _T_228 = eq(CastFromNonLit_52.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_229 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_230 = or(_T_228, _T_229) @[StrongEnum.scala 185:11]
    node _T_231 = eq(_T_230, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_231 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_53 of CastFromNonLit_53 @[StrongEnum.scala 182:21]
    CastFromNonLit_53.clock <= clock
    CastFromNonLit_53.reset <= reset
    CastFromNonLit_53.io.in <= UInt<6>("h033") @[StrongEnum.scala 183:15]
    node _T_232 = eq(CastFromNonLit_53.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_233 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_234 = or(_T_232, _T_233) @[StrongEnum.scala 185:11]
    node _T_235 = eq(_T_234, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_235 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_54 of CastFromNonLit_54 @[StrongEnum.scala 182:21]
    CastFromNonLit_54.clock <= clock
    CastFromNonLit_54.reset <= reset
    CastFromNonLit_54.io.in <= UInt<6>("h034") @[StrongEnum.scala 183:15]
    node _T_236 = eq(CastFromNonLit_54.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_237 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_238 = or(_T_236, _T_237) @[StrongEnum.scala 185:11]
    node _T_239 = eq(_T_238, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_239 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_55 of CastFromNonLit_55 @[StrongEnum.scala 182:21]
    CastFromNonLit_55.clock <= clock
    CastFromNonLit_55.reset <= reset
    CastFromNonLit_55.io.in <= UInt<6>("h035") @[StrongEnum.scala 183:15]
    node _T_240 = eq(CastFromNonLit_55.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_241 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_242 = or(_T_240, _T_241) @[StrongEnum.scala 185:11]
    node _T_243 = eq(_T_242, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_243 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_56 of CastFromNonLit_56 @[StrongEnum.scala 182:21]
    CastFromNonLit_56.clock <= clock
    CastFromNonLit_56.reset <= reset
    CastFromNonLit_56.io.in <= UInt<6>("h036") @[StrongEnum.scala 183:15]
    node _T_244 = eq(CastFromNonLit_56.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_245 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_246 = or(_T_244, _T_245) @[StrongEnum.scala 185:11]
    node _T_247 = eq(_T_246, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_247 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_57 of CastFromNonLit_57 @[StrongEnum.scala 182:21]
    CastFromNonLit_57.clock <= clock
    CastFromNonLit_57.reset <= reset
    CastFromNonLit_57.io.in <= UInt<6>("h037") @[StrongEnum.scala 183:15]
    node _T_248 = eq(CastFromNonLit_57.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_249 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_250 = or(_T_248, _T_249) @[StrongEnum.scala 185:11]
    node _T_251 = eq(_T_250, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_251 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_58 of CastFromNonLit_58 @[StrongEnum.scala 182:21]
    CastFromNonLit_58.clock <= clock
    CastFromNonLit_58.reset <= reset
    CastFromNonLit_58.io.in <= UInt<6>("h038") @[StrongEnum.scala 183:15]
    node _T_252 = eq(CastFromNonLit_58.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_253 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_254 = or(_T_252, _T_253) @[StrongEnum.scala 185:11]
    node _T_255 = eq(_T_254, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_255 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_59 of CastFromNonLit_59 @[StrongEnum.scala 182:21]
    CastFromNonLit_59.clock <= clock
    CastFromNonLit_59.reset <= reset
    CastFromNonLit_59.io.in <= UInt<6>("h039") @[StrongEnum.scala 183:15]
    node _T_256 = eq(CastFromNonLit_59.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_257 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_258 = or(_T_256, _T_257) @[StrongEnum.scala 185:11]
    node _T_259 = eq(_T_258, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_259 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_60 of CastFromNonLit_60 @[StrongEnum.scala 182:21]
    CastFromNonLit_60.clock <= clock
    CastFromNonLit_60.reset <= reset
    CastFromNonLit_60.io.in <= UInt<6>("h03a") @[StrongEnum.scala 183:15]
    node _T_260 = eq(CastFromNonLit_60.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_261 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_262 = or(_T_260, _T_261) @[StrongEnum.scala 185:11]
    node _T_263 = eq(_T_262, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_263 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_61 of CastFromNonLit_61 @[StrongEnum.scala 182:21]
    CastFromNonLit_61.clock <= clock
    CastFromNonLit_61.reset <= reset
    CastFromNonLit_61.io.in <= UInt<6>("h03b") @[StrongEnum.scala 183:15]
    node _T_264 = eq(CastFromNonLit_61.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_265 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_266 = or(_T_264, _T_265) @[StrongEnum.scala 185:11]
    node _T_267 = eq(_T_266, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_267 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_62 of CastFromNonLit_62 @[StrongEnum.scala 182:21]
    CastFromNonLit_62.clock <= clock
    CastFromNonLit_62.reset <= reset
    CastFromNonLit_62.io.in <= UInt<6>("h03c") @[StrongEnum.scala 183:15]
    node _T_268 = eq(CastFromNonLit_62.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_269 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_270 = or(_T_268, _T_269) @[StrongEnum.scala 185:11]
    node _T_271 = eq(_T_270, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_271 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_63 of CastFromNonLit_63 @[StrongEnum.scala 182:21]
    CastFromNonLit_63.clock <= clock
    CastFromNonLit_63.reset <= reset
    CastFromNonLit_63.io.in <= UInt<6>("h03d") @[StrongEnum.scala 183:15]
    node _T_272 = eq(CastFromNonLit_63.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_273 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_274 = or(_T_272, _T_273) @[StrongEnum.scala 185:11]
    node _T_275 = eq(_T_274, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_275 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_64 of CastFromNonLit_64 @[StrongEnum.scala 182:21]
    CastFromNonLit_64.clock <= clock
    CastFromNonLit_64.reset <= reset
    CastFromNonLit_64.io.in <= UInt<6>("h03e") @[StrongEnum.scala 183:15]
    node _T_276 = eq(CastFromNonLit_64.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_277 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_278 = or(_T_276, _T_277) @[StrongEnum.scala 185:11]
    node _T_279 = eq(_T_278, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_279 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_65 of CastFromNonLit_65 @[StrongEnum.scala 182:21]
    CastFromNonLit_65.clock <= clock
    CastFromNonLit_65.reset <= reset
    CastFromNonLit_65.io.in <= UInt<6>("h03f") @[StrongEnum.scala 183:15]
    node _T_280 = eq(CastFromNonLit_65.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_281 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_282 = or(_T_280, _T_281) @[StrongEnum.scala 185:11]
    node _T_283 = eq(_T_282, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_283 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_66 of CastFromNonLit_66 @[StrongEnum.scala 182:21]
    CastFromNonLit_66.clock <= clock
    CastFromNonLit_66.reset <= reset
    CastFromNonLit_66.io.in <= UInt<7>("h040") @[StrongEnum.scala 183:15]
    node _T_284 = eq(CastFromNonLit_66.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_285 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_286 = or(_T_284, _T_285) @[StrongEnum.scala 185:11]
    node _T_287 = eq(_T_286, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_287 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_67 of CastFromNonLit_67 @[StrongEnum.scala 182:21]
    CastFromNonLit_67.clock <= clock
    CastFromNonLit_67.reset <= reset
    CastFromNonLit_67.io.in <= UInt<7>("h041") @[StrongEnum.scala 183:15]
    node _T_288 = eq(CastFromNonLit_67.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_289 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_290 = or(_T_288, _T_289) @[StrongEnum.scala 185:11]
    node _T_291 = eq(_T_290, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_291 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_68 of CastFromNonLit_68 @[StrongEnum.scala 182:21]
    CastFromNonLit_68.clock <= clock
    CastFromNonLit_68.reset <= reset
    CastFromNonLit_68.io.in <= UInt<7>("h042") @[StrongEnum.scala 183:15]
    node _T_292 = eq(CastFromNonLit_68.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_293 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_294 = or(_T_292, _T_293) @[StrongEnum.scala 185:11]
    node _T_295 = eq(_T_294, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_295 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_69 of CastFromNonLit_69 @[StrongEnum.scala 182:21]
    CastFromNonLit_69.clock <= clock
    CastFromNonLit_69.reset <= reset
    CastFromNonLit_69.io.in <= UInt<7>("h043") @[StrongEnum.scala 183:15]
    node _T_296 = eq(CastFromNonLit_69.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_297 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_298 = or(_T_296, _T_297) @[StrongEnum.scala 185:11]
    node _T_299 = eq(_T_298, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_299 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_70 of CastFromNonLit_70 @[StrongEnum.scala 182:21]
    CastFromNonLit_70.clock <= clock
    CastFromNonLit_70.reset <= reset
    CastFromNonLit_70.io.in <= UInt<7>("h044") @[StrongEnum.scala 183:15]
    node _T_300 = eq(CastFromNonLit_70.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_301 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_302 = or(_T_300, _T_301) @[StrongEnum.scala 185:11]
    node _T_303 = eq(_T_302, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_303 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_71 of CastFromNonLit_71 @[StrongEnum.scala 182:21]
    CastFromNonLit_71.clock <= clock
    CastFromNonLit_71.reset <= reset
    CastFromNonLit_71.io.in <= UInt<7>("h045") @[StrongEnum.scala 183:15]
    node _T_304 = eq(CastFromNonLit_71.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_305 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_306 = or(_T_304, _T_305) @[StrongEnum.scala 185:11]
    node _T_307 = eq(_T_306, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_307 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_72 of CastFromNonLit_72 @[StrongEnum.scala 182:21]
    CastFromNonLit_72.clock <= clock
    CastFromNonLit_72.reset <= reset
    CastFromNonLit_72.io.in <= UInt<7>("h046") @[StrongEnum.scala 183:15]
    node _T_308 = eq(CastFromNonLit_72.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_309 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_310 = or(_T_308, _T_309) @[StrongEnum.scala 185:11]
    node _T_311 = eq(_T_310, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_311 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_73 of CastFromNonLit_73 @[StrongEnum.scala 182:21]
    CastFromNonLit_73.clock <= clock
    CastFromNonLit_73.reset <= reset
    CastFromNonLit_73.io.in <= UInt<7>("h047") @[StrongEnum.scala 183:15]
    node _T_312 = eq(CastFromNonLit_73.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_313 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_314 = or(_T_312, _T_313) @[StrongEnum.scala 185:11]
    node _T_315 = eq(_T_314, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_315 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_74 of CastFromNonLit_74 @[StrongEnum.scala 182:21]
    CastFromNonLit_74.clock <= clock
    CastFromNonLit_74.reset <= reset
    CastFromNonLit_74.io.in <= UInt<7>("h048") @[StrongEnum.scala 183:15]
    node _T_316 = eq(CastFromNonLit_74.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_317 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_318 = or(_T_316, _T_317) @[StrongEnum.scala 185:11]
    node _T_319 = eq(_T_318, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_319 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_75 of CastFromNonLit_75 @[StrongEnum.scala 182:21]
    CastFromNonLit_75.clock <= clock
    CastFromNonLit_75.reset <= reset
    CastFromNonLit_75.io.in <= UInt<7>("h049") @[StrongEnum.scala 183:15]
    node _T_320 = eq(CastFromNonLit_75.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_321 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_322 = or(_T_320, _T_321) @[StrongEnum.scala 185:11]
    node _T_323 = eq(_T_322, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_323 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_76 of CastFromNonLit_76 @[StrongEnum.scala 182:21]
    CastFromNonLit_76.clock <= clock
    CastFromNonLit_76.reset <= reset
    CastFromNonLit_76.io.in <= UInt<7>("h04a") @[StrongEnum.scala 183:15]
    node _T_324 = eq(CastFromNonLit_76.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_325 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_326 = or(_T_324, _T_325) @[StrongEnum.scala 185:11]
    node _T_327 = eq(_T_326, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_327 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_77 of CastFromNonLit_77 @[StrongEnum.scala 182:21]
    CastFromNonLit_77.clock <= clock
    CastFromNonLit_77.reset <= reset
    CastFromNonLit_77.io.in <= UInt<7>("h04b") @[StrongEnum.scala 183:15]
    node _T_328 = eq(CastFromNonLit_77.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_329 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_330 = or(_T_328, _T_329) @[StrongEnum.scala 185:11]
    node _T_331 = eq(_T_330, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_331 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_78 of CastFromNonLit_78 @[StrongEnum.scala 182:21]
    CastFromNonLit_78.clock <= clock
    CastFromNonLit_78.reset <= reset
    CastFromNonLit_78.io.in <= UInt<7>("h04c") @[StrongEnum.scala 183:15]
    node _T_332 = eq(CastFromNonLit_78.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_333 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_334 = or(_T_332, _T_333) @[StrongEnum.scala 185:11]
    node _T_335 = eq(_T_334, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_335 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_79 of CastFromNonLit_79 @[StrongEnum.scala 182:21]
    CastFromNonLit_79.clock <= clock
    CastFromNonLit_79.reset <= reset
    CastFromNonLit_79.io.in <= UInt<7>("h04d") @[StrongEnum.scala 183:15]
    node _T_336 = eq(CastFromNonLit_79.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_337 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_338 = or(_T_336, _T_337) @[StrongEnum.scala 185:11]
    node _T_339 = eq(_T_338, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_339 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_80 of CastFromNonLit_80 @[StrongEnum.scala 182:21]
    CastFromNonLit_80.clock <= clock
    CastFromNonLit_80.reset <= reset
    CastFromNonLit_80.io.in <= UInt<7>("h04e") @[StrongEnum.scala 183:15]
    node _T_340 = eq(CastFromNonLit_80.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_341 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_342 = or(_T_340, _T_341) @[StrongEnum.scala 185:11]
    node _T_343 = eq(_T_342, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_343 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_81 of CastFromNonLit_81 @[StrongEnum.scala 182:21]
    CastFromNonLit_81.clock <= clock
    CastFromNonLit_81.reset <= reset
    CastFromNonLit_81.io.in <= UInt<7>("h04f") @[StrongEnum.scala 183:15]
    node _T_344 = eq(CastFromNonLit_81.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_345 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_346 = or(_T_344, _T_345) @[StrongEnum.scala 185:11]
    node _T_347 = eq(_T_346, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_347 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_82 of CastFromNonLit_82 @[StrongEnum.scala 182:21]
    CastFromNonLit_82.clock <= clock
    CastFromNonLit_82.reset <= reset
    CastFromNonLit_82.io.in <= UInt<7>("h050") @[StrongEnum.scala 183:15]
    node _T_348 = eq(CastFromNonLit_82.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_349 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_350 = or(_T_348, _T_349) @[StrongEnum.scala 185:11]
    node _T_351 = eq(_T_350, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_351 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_83 of CastFromNonLit_83 @[StrongEnum.scala 182:21]
    CastFromNonLit_83.clock <= clock
    CastFromNonLit_83.reset <= reset
    CastFromNonLit_83.io.in <= UInt<7>("h051") @[StrongEnum.scala 183:15]
    node _T_352 = eq(CastFromNonLit_83.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_353 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_354 = or(_T_352, _T_353) @[StrongEnum.scala 185:11]
    node _T_355 = eq(_T_354, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_355 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_84 of CastFromNonLit_84 @[StrongEnum.scala 182:21]
    CastFromNonLit_84.clock <= clock
    CastFromNonLit_84.reset <= reset
    CastFromNonLit_84.io.in <= UInt<7>("h052") @[StrongEnum.scala 183:15]
    node _T_356 = eq(CastFromNonLit_84.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_357 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_358 = or(_T_356, _T_357) @[StrongEnum.scala 185:11]
    node _T_359 = eq(_T_358, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_359 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_85 of CastFromNonLit_85 @[StrongEnum.scala 182:21]
    CastFromNonLit_85.clock <= clock
    CastFromNonLit_85.reset <= reset
    CastFromNonLit_85.io.in <= UInt<7>("h053") @[StrongEnum.scala 183:15]
    node _T_360 = eq(CastFromNonLit_85.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_361 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_362 = or(_T_360, _T_361) @[StrongEnum.scala 185:11]
    node _T_363 = eq(_T_362, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_363 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_86 of CastFromNonLit_86 @[StrongEnum.scala 182:21]
    CastFromNonLit_86.clock <= clock
    CastFromNonLit_86.reset <= reset
    CastFromNonLit_86.io.in <= UInt<7>("h054") @[StrongEnum.scala 183:15]
    node _T_364 = eq(CastFromNonLit_86.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_365 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_366 = or(_T_364, _T_365) @[StrongEnum.scala 185:11]
    node _T_367 = eq(_T_366, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_367 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_87 of CastFromNonLit_87 @[StrongEnum.scala 182:21]
    CastFromNonLit_87.clock <= clock
    CastFromNonLit_87.reset <= reset
    CastFromNonLit_87.io.in <= UInt<7>("h055") @[StrongEnum.scala 183:15]
    node _T_368 = eq(CastFromNonLit_87.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_369 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_370 = or(_T_368, _T_369) @[StrongEnum.scala 185:11]
    node _T_371 = eq(_T_370, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_371 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_88 of CastFromNonLit_88 @[StrongEnum.scala 182:21]
    CastFromNonLit_88.clock <= clock
    CastFromNonLit_88.reset <= reset
    CastFromNonLit_88.io.in <= UInt<7>("h056") @[StrongEnum.scala 183:15]
    node _T_372 = eq(CastFromNonLit_88.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_373 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_374 = or(_T_372, _T_373) @[StrongEnum.scala 185:11]
    node _T_375 = eq(_T_374, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_375 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_89 of CastFromNonLit_89 @[StrongEnum.scala 182:21]
    CastFromNonLit_89.clock <= clock
    CastFromNonLit_89.reset <= reset
    CastFromNonLit_89.io.in <= UInt<7>("h057") @[StrongEnum.scala 183:15]
    node _T_376 = eq(CastFromNonLit_89.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_377 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_378 = or(_T_376, _T_377) @[StrongEnum.scala 185:11]
    node _T_379 = eq(_T_378, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_379 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_90 of CastFromNonLit_90 @[StrongEnum.scala 182:21]
    CastFromNonLit_90.clock <= clock
    CastFromNonLit_90.reset <= reset
    CastFromNonLit_90.io.in <= UInt<7>("h058") @[StrongEnum.scala 183:15]
    node _T_380 = eq(CastFromNonLit_90.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_381 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_382 = or(_T_380, _T_381) @[StrongEnum.scala 185:11]
    node _T_383 = eq(_T_382, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_383 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_91 of CastFromNonLit_91 @[StrongEnum.scala 182:21]
    CastFromNonLit_91.clock <= clock
    CastFromNonLit_91.reset <= reset
    CastFromNonLit_91.io.in <= UInt<7>("h059") @[StrongEnum.scala 183:15]
    node _T_384 = eq(CastFromNonLit_91.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_385 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_386 = or(_T_384, _T_385) @[StrongEnum.scala 185:11]
    node _T_387 = eq(_T_386, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_387 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_92 of CastFromNonLit_92 @[StrongEnum.scala 182:21]
    CastFromNonLit_92.clock <= clock
    CastFromNonLit_92.reset <= reset
    CastFromNonLit_92.io.in <= UInt<7>("h05a") @[StrongEnum.scala 183:15]
    node _T_388 = eq(CastFromNonLit_92.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_389 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_390 = or(_T_388, _T_389) @[StrongEnum.scala 185:11]
    node _T_391 = eq(_T_390, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_391 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_93 of CastFromNonLit_93 @[StrongEnum.scala 182:21]
    CastFromNonLit_93.clock <= clock
    CastFromNonLit_93.reset <= reset
    CastFromNonLit_93.io.in <= UInt<7>("h05b") @[StrongEnum.scala 183:15]
    node _T_392 = eq(CastFromNonLit_93.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_393 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_394 = or(_T_392, _T_393) @[StrongEnum.scala 185:11]
    node _T_395 = eq(_T_394, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_395 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_94 of CastFromNonLit_94 @[StrongEnum.scala 182:21]
    CastFromNonLit_94.clock <= clock
    CastFromNonLit_94.reset <= reset
    CastFromNonLit_94.io.in <= UInt<7>("h05c") @[StrongEnum.scala 183:15]
    node _T_396 = eq(CastFromNonLit_94.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_397 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_398 = or(_T_396, _T_397) @[StrongEnum.scala 185:11]
    node _T_399 = eq(_T_398, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_399 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_95 of CastFromNonLit_95 @[StrongEnum.scala 182:21]
    CastFromNonLit_95.clock <= clock
    CastFromNonLit_95.reset <= reset
    CastFromNonLit_95.io.in <= UInt<7>("h05d") @[StrongEnum.scala 183:15]
    node _T_400 = eq(CastFromNonLit_95.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_401 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_402 = or(_T_400, _T_401) @[StrongEnum.scala 185:11]
    node _T_403 = eq(_T_402, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_403 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_96 of CastFromNonLit_96 @[StrongEnum.scala 182:21]
    CastFromNonLit_96.clock <= clock
    CastFromNonLit_96.reset <= reset
    CastFromNonLit_96.io.in <= UInt<7>("h05e") @[StrongEnum.scala 183:15]
    node _T_404 = eq(CastFromNonLit_96.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_405 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_406 = or(_T_404, _T_405) @[StrongEnum.scala 185:11]
    node _T_407 = eq(_T_406, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_407 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_97 of CastFromNonLit_97 @[StrongEnum.scala 182:21]
    CastFromNonLit_97.clock <= clock
    CastFromNonLit_97.reset <= reset
    CastFromNonLit_97.io.in <= UInt<7>("h05f") @[StrongEnum.scala 183:15]
    node _T_408 = eq(CastFromNonLit_97.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_409 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_410 = or(_T_408, _T_409) @[StrongEnum.scala 185:11]
    node _T_411 = eq(_T_410, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_411 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_98 of CastFromNonLit_98 @[StrongEnum.scala 182:21]
    CastFromNonLit_98.clock <= clock
    CastFromNonLit_98.reset <= reset
    CastFromNonLit_98.io.in <= UInt<7>("h060") @[StrongEnum.scala 183:15]
    node _T_412 = eq(CastFromNonLit_98.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_413 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_414 = or(_T_412, _T_413) @[StrongEnum.scala 185:11]
    node _T_415 = eq(_T_414, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_415 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_99 of CastFromNonLit_99 @[StrongEnum.scala 182:21]
    CastFromNonLit_99.clock <= clock
    CastFromNonLit_99.reset <= reset
    CastFromNonLit_99.io.in <= UInt<7>("h061") @[StrongEnum.scala 183:15]
    node _T_416 = eq(CastFromNonLit_99.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_417 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_418 = or(_T_416, _T_417) @[StrongEnum.scala 185:11]
    node _T_419 = eq(_T_418, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_419 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_100 of CastFromNonLit_100 @[StrongEnum.scala 182:21]
    CastFromNonLit_100.clock <= clock
    CastFromNonLit_100.reset <= reset
    CastFromNonLit_100.io.in <= UInt<7>("h062") @[StrongEnum.scala 183:15]
    node _T_420 = eq(CastFromNonLit_100.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_421 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_422 = or(_T_420, _T_421) @[StrongEnum.scala 185:11]
    node _T_423 = eq(_T_422, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_423 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_101 of CastFromNonLit_101 @[StrongEnum.scala 182:21]
    CastFromNonLit_101.clock <= clock
    CastFromNonLit_101.reset <= reset
    CastFromNonLit_101.io.in <= UInt<7>("h063") @[StrongEnum.scala 183:15]
    node _T_424 = eq(CastFromNonLit_101.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_425 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_426 = or(_T_424, _T_425) @[StrongEnum.scala 185:11]
    node _T_427 = eq(_T_426, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_427 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_102 of CastFromNonLit_102 @[StrongEnum.scala 182:21]
    CastFromNonLit_102.clock <= clock
    CastFromNonLit_102.reset <= reset
    CastFromNonLit_102.io.in <= UInt<7>("h066") @[StrongEnum.scala 183:15]
    node _T_428 = eq(CastFromNonLit_102.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_429 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_430 = or(_T_428, _T_429) @[StrongEnum.scala 185:11]
    node _T_431 = eq(_T_430, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_431 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_103 of CastFromNonLit_103 @[StrongEnum.scala 182:21]
    CastFromNonLit_103.clock <= clock
    CastFromNonLit_103.reset <= reset
    CastFromNonLit_103.io.in <= UInt<7>("h067") @[StrongEnum.scala 183:15]
    node _T_432 = eq(CastFromNonLit_103.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_433 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_434 = or(_T_432, _T_433) @[StrongEnum.scala 185:11]
    node _T_435 = eq(_T_434, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_435 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_104 of CastFromNonLit_104 @[StrongEnum.scala 182:21]
    CastFromNonLit_104.clock <= clock
    CastFromNonLit_104.reset <= reset
    CastFromNonLit_104.io.in <= UInt<7>("h068") @[StrongEnum.scala 183:15]
    node _T_436 = eq(CastFromNonLit_104.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_437 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_438 = or(_T_436, _T_437) @[StrongEnum.scala 185:11]
    node _T_439 = eq(_T_438, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_439 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_105 of CastFromNonLit_105 @[StrongEnum.scala 182:21]
    CastFromNonLit_105.clock <= clock
    CastFromNonLit_105.reset <= reset
    CastFromNonLit_105.io.in <= UInt<7>("h069") @[StrongEnum.scala 183:15]
    node _T_440 = eq(CastFromNonLit_105.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_441 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_442 = or(_T_440, _T_441) @[StrongEnum.scala 185:11]
    node _T_443 = eq(_T_442, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_443 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_106 of CastFromNonLit_106 @[StrongEnum.scala 182:21]
    CastFromNonLit_106.clock <= clock
    CastFromNonLit_106.reset <= reset
    CastFromNonLit_106.io.in <= UInt<7>("h06a") @[StrongEnum.scala 183:15]
    node _T_444 = eq(CastFromNonLit_106.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_445 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_446 = or(_T_444, _T_445) @[StrongEnum.scala 185:11]
    node _T_447 = eq(_T_446, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_447 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_107 of CastFromNonLit_107 @[StrongEnum.scala 182:21]
    CastFromNonLit_107.clock <= clock
    CastFromNonLit_107.reset <= reset
    CastFromNonLit_107.io.in <= UInt<7>("h06b") @[StrongEnum.scala 183:15]
    node _T_448 = eq(CastFromNonLit_107.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_449 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_450 = or(_T_448, _T_449) @[StrongEnum.scala 185:11]
    node _T_451 = eq(_T_450, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_451 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_108 of CastFromNonLit_108 @[StrongEnum.scala 182:21]
    CastFromNonLit_108.clock <= clock
    CastFromNonLit_108.reset <= reset
    CastFromNonLit_108.io.in <= UInt<7>("h06c") @[StrongEnum.scala 183:15]
    node _T_452 = eq(CastFromNonLit_108.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_453 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_454 = or(_T_452, _T_453) @[StrongEnum.scala 185:11]
    node _T_455 = eq(_T_454, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_455 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_109 of CastFromNonLit_109 @[StrongEnum.scala 182:21]
    CastFromNonLit_109.clock <= clock
    CastFromNonLit_109.reset <= reset
    CastFromNonLit_109.io.in <= UInt<7>("h06d") @[StrongEnum.scala 183:15]
    node _T_456 = eq(CastFromNonLit_109.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_457 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_458 = or(_T_456, _T_457) @[StrongEnum.scala 185:11]
    node _T_459 = eq(_T_458, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_459 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_110 of CastFromNonLit_110 @[StrongEnum.scala 182:21]
    CastFromNonLit_110.clock <= clock
    CastFromNonLit_110.reset <= reset
    CastFromNonLit_110.io.in <= UInt<7>("h06e") @[StrongEnum.scala 183:15]
    node _T_460 = eq(CastFromNonLit_110.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_461 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_462 = or(_T_460, _T_461) @[StrongEnum.scala 185:11]
    node _T_463 = eq(_T_462, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_463 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_111 of CastFromNonLit_111 @[StrongEnum.scala 182:21]
    CastFromNonLit_111.clock <= clock
    CastFromNonLit_111.reset <= reset
    CastFromNonLit_111.io.in <= UInt<7>("h06f") @[StrongEnum.scala 183:15]
    node _T_464 = eq(CastFromNonLit_111.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_465 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_466 = or(_T_464, _T_465) @[StrongEnum.scala 185:11]
    node _T_467 = eq(_T_466, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_467 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_112 of CastFromNonLit_112 @[StrongEnum.scala 182:21]
    CastFromNonLit_112.clock <= clock
    CastFromNonLit_112.reset <= reset
    CastFromNonLit_112.io.in <= UInt<7>("h070") @[StrongEnum.scala 183:15]
    node _T_468 = eq(CastFromNonLit_112.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_469 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_470 = or(_T_468, _T_469) @[StrongEnum.scala 185:11]
    node _T_471 = eq(_T_470, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_471 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_113 of CastFromNonLit_113 @[StrongEnum.scala 182:21]
    CastFromNonLit_113.clock <= clock
    CastFromNonLit_113.reset <= reset
    CastFromNonLit_113.io.in <= UInt<7>("h071") @[StrongEnum.scala 183:15]
    node _T_472 = eq(CastFromNonLit_113.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_473 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_474 = or(_T_472, _T_473) @[StrongEnum.scala 185:11]
    node _T_475 = eq(_T_474, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_475 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_114 of CastFromNonLit_114 @[StrongEnum.scala 182:21]
    CastFromNonLit_114.clock <= clock
    CastFromNonLit_114.reset <= reset
    CastFromNonLit_114.io.in <= UInt<7>("h072") @[StrongEnum.scala 183:15]
    node _T_476 = eq(CastFromNonLit_114.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_477 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_478 = or(_T_476, _T_477) @[StrongEnum.scala 185:11]
    node _T_479 = eq(_T_478, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_479 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_115 of CastFromNonLit_115 @[StrongEnum.scala 182:21]
    CastFromNonLit_115.clock <= clock
    CastFromNonLit_115.reset <= reset
    CastFromNonLit_115.io.in <= UInt<7>("h073") @[StrongEnum.scala 183:15]
    node _T_480 = eq(CastFromNonLit_115.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_481 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_482 = or(_T_480, _T_481) @[StrongEnum.scala 185:11]
    node _T_483 = eq(_T_482, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_483 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_116 of CastFromNonLit_116 @[StrongEnum.scala 182:21]
    CastFromNonLit_116.clock <= clock
    CastFromNonLit_116.reset <= reset
    CastFromNonLit_116.io.in <= UInt<7>("h074") @[StrongEnum.scala 183:15]
    node _T_484 = eq(CastFromNonLit_116.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_485 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_486 = or(_T_484, _T_485) @[StrongEnum.scala 185:11]
    node _T_487 = eq(_T_486, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_487 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_117 of CastFromNonLit_117 @[StrongEnum.scala 182:21]
    CastFromNonLit_117.clock <= clock
    CastFromNonLit_117.reset <= reset
    CastFromNonLit_117.io.in <= UInt<7>("h075") @[StrongEnum.scala 183:15]
    node _T_488 = eq(CastFromNonLit_117.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_489 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_490 = or(_T_488, _T_489) @[StrongEnum.scala 185:11]
    node _T_491 = eq(_T_490, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_491 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_118 of CastFromNonLit_118 @[StrongEnum.scala 182:21]
    CastFromNonLit_118.clock <= clock
    CastFromNonLit_118.reset <= reset
    CastFromNonLit_118.io.in <= UInt<7>("h076") @[StrongEnum.scala 183:15]
    node _T_492 = eq(CastFromNonLit_118.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_493 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_494 = or(_T_492, _T_493) @[StrongEnum.scala 185:11]
    node _T_495 = eq(_T_494, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_495 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_119 of CastFromNonLit_119 @[StrongEnum.scala 182:21]
    CastFromNonLit_119.clock <= clock
    CastFromNonLit_119.reset <= reset
    CastFromNonLit_119.io.in <= UInt<7>("h077") @[StrongEnum.scala 183:15]
    node _T_496 = eq(CastFromNonLit_119.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_497 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_498 = or(_T_496, _T_497) @[StrongEnum.scala 185:11]
    node _T_499 = eq(_T_498, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_499 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_120 of CastFromNonLit_120 @[StrongEnum.scala 182:21]
    CastFromNonLit_120.clock <= clock
    CastFromNonLit_120.reset <= reset
    CastFromNonLit_120.io.in <= UInt<7>("h078") @[StrongEnum.scala 183:15]
    node _T_500 = eq(CastFromNonLit_120.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_501 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_502 = or(_T_500, _T_501) @[StrongEnum.scala 185:11]
    node _T_503 = eq(_T_502, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_503 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_121 of CastFromNonLit_121 @[StrongEnum.scala 182:21]
    CastFromNonLit_121.clock <= clock
    CastFromNonLit_121.reset <= reset
    CastFromNonLit_121.io.in <= UInt<7>("h079") @[StrongEnum.scala 183:15]
    node _T_504 = eq(CastFromNonLit_121.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_505 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_506 = or(_T_504, _T_505) @[StrongEnum.scala 185:11]
    node _T_507 = eq(_T_506, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_507 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_122 of CastFromNonLit_122 @[StrongEnum.scala 182:21]
    CastFromNonLit_122.clock <= clock
    CastFromNonLit_122.reset <= reset
    CastFromNonLit_122.io.in <= UInt<7>("h07a") @[StrongEnum.scala 183:15]
    node _T_508 = eq(CastFromNonLit_122.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_509 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_510 = or(_T_508, _T_509) @[StrongEnum.scala 185:11]
    node _T_511 = eq(_T_510, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_511 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_123 of CastFromNonLit_123 @[StrongEnum.scala 182:21]
    CastFromNonLit_123.clock <= clock
    CastFromNonLit_123.reset <= reset
    CastFromNonLit_123.io.in <= UInt<7>("h07b") @[StrongEnum.scala 183:15]
    node _T_512 = eq(CastFromNonLit_123.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_513 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_514 = or(_T_512, _T_513) @[StrongEnum.scala 185:11]
    node _T_515 = eq(_T_514, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_515 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_124 of CastFromNonLit_124 @[StrongEnum.scala 182:21]
    CastFromNonLit_124.clock <= clock
    CastFromNonLit_124.reset <= reset
    CastFromNonLit_124.io.in <= UInt<7>("h07c") @[StrongEnum.scala 183:15]
    node _T_516 = eq(CastFromNonLit_124.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_517 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_518 = or(_T_516, _T_517) @[StrongEnum.scala 185:11]
    node _T_519 = eq(_T_518, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_519 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_125 of CastFromNonLit_125 @[StrongEnum.scala 182:21]
    CastFromNonLit_125.clock <= clock
    CastFromNonLit_125.reset <= reset
    CastFromNonLit_125.io.in <= UInt<7>("h07d") @[StrongEnum.scala 183:15]
    node _T_520 = eq(CastFromNonLit_125.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_521 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_522 = or(_T_520, _T_521) @[StrongEnum.scala 185:11]
    node _T_523 = eq(_T_522, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_523 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_126 of CastFromNonLit_126 @[StrongEnum.scala 182:21]
    CastFromNonLit_126.clock <= clock
    CastFromNonLit_126.reset <= reset
    CastFromNonLit_126.io.in <= UInt<7>("h07e") @[StrongEnum.scala 183:15]
    node _T_524 = eq(CastFromNonLit_126.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_525 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_526 = or(_T_524, _T_525) @[StrongEnum.scala 185:11]
    node _T_527 = eq(_T_526, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_527 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    inst CastFromNonLit_127 of CastFromNonLit_127 @[StrongEnum.scala 182:21]
    CastFromNonLit_127.clock <= clock
    CastFromNonLit_127.reset <= reset
    CastFromNonLit_127.io.in <= UInt<7>("h07f") @[StrongEnum.scala 183:15]
    node _T_528 = eq(CastFromNonLit_127.io.valid, UInt<1>("h00")) @[StrongEnum.scala 185:25]
    node _T_529 = bits(reset, 0, 0) @[StrongEnum.scala 185:11]
    node _T_530 = or(_T_528, _T_529) @[StrongEnum.scala 185:11]
    node _T_531 = eq(_T_530, UInt<1>("h00")) @[StrongEnum.scala 185:11]
    when _T_531 : @[StrongEnum.scala 185:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at StrongEnum.scala:185 assert(mod.io.valid === false.B)\n") @[StrongEnum.scala 185:11]
      stop(clock, UInt<1>(1), 1) @[StrongEnum.scala 185:11]
      skip @[StrongEnum.scala 185:11]
    node _T_532 = bits(reset, 0, 0) @[StrongEnum.scala 188:7]
    node _T_533 = eq(_T_532, UInt<1>("h00")) @[StrongEnum.scala 188:7]
    when _T_533 : @[StrongEnum.scala 188:7]
      stop(clock, UInt<1>(1), 0) @[StrongEnum.scala 188:7]
      skip @[StrongEnum.scala 188:7]
    
