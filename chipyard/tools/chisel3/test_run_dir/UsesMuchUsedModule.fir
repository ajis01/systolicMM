;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit UsesMuchUsedModule : 
  module MuchUsedModule : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<16>, out : UInt<16>}
    
    node _T = add(io.in, UInt<1>("h01")) @[AnnotationNoDedup.scala 16:19]
    node _T_1 = tail(_T, 1) @[AnnotationNoDedup.scala 16:19]
    io.out <= _T_1 @[AnnotationNoDedup.scala 16:10]
    
  module MuchUsedModule_1 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<16>, out : UInt<16>}
    
    node _T = add(io.in, UInt<1>("h01")) @[AnnotationNoDedup.scala 16:19]
    node _T_1 = tail(_T, 1) @[AnnotationNoDedup.scala 16:19]
    io.out <= _T_1 @[AnnotationNoDedup.scala 16:10]
    
  module MuchUsedModule_2 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<16>, out : UInt<16>}
    
    node _T = add(io.in, UInt<1>("h01")) @[AnnotationNoDedup.scala 16:19]
    node _T_1 = tail(_T, 1) @[AnnotationNoDedup.scala 16:19]
    io.out <= _T_1 @[AnnotationNoDedup.scala 16:10]
    
  module MuchUsedModule_3 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<16>, out : UInt<16>}
    
    node _T = add(io.in, UInt<1>("h01")) @[AnnotationNoDedup.scala 16:19]
    node _T_1 = tail(_T, 1) @[AnnotationNoDedup.scala 16:19]
    io.out <= _T_1 @[AnnotationNoDedup.scala 16:10]
    
  module UsesMuchUsedModule : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<16>, out : UInt<16>}
    
    inst mod0 of MuchUsedModule @[AnnotationNoDedup.scala 25:20]
    mod0.clock <= clock
    mod0.reset <= reset
    inst mod1 of MuchUsedModule_1 @[AnnotationNoDedup.scala 26:20]
    mod1.clock <= clock
    mod1.reset <= reset
    inst mod2 of MuchUsedModule_2 @[AnnotationNoDedup.scala 27:20]
    mod2.clock <= clock
    mod2.reset <= reset
    inst mod3 of MuchUsedModule_3 @[AnnotationNoDedup.scala 28:20]
    mod3.clock <= clock
    mod3.reset <= reset
    mod0.io.in <= io.in @[AnnotationNoDedup.scala 30:14]
    mod1.io.in <= mod0.io.out @[AnnotationNoDedup.scala 31:14]
    mod2.io.in <= mod1.io.out @[AnnotationNoDedup.scala 32:14]
    mod3.io.in <= mod2.io.out @[AnnotationNoDedup.scala 33:14]
    io.out <= mod3.io.out @[AnnotationNoDedup.scala 34:10]
    
