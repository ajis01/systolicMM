circuit UsesMuchUsedModule :
  module MuchUsedModule :
    input clock : Clock
    input reset : UInt<1>
    input io_in : UInt<16>
    output io_out : UInt<16>
  
    node _T = add(io_in, UInt<1>("h1")) @[AnnotationNoDedup.scala 16:19]
    node _T_1 = tail(_T, 1) @[AnnotationNoDedup.scala 16:19]
    io_out <= _T_1 @[AnnotationNoDedup.scala 16:10]

  module UsesMuchUsedModule :
    input clock : Clock
    input reset : UInt<1>
    input io_in : UInt<16>
    output io_out : UInt<16>
  
    inst mod0 of MuchUsedModule @[AnnotationNoDedup.scala 25:20]
    inst mod1 of MuchUsedModule @[AnnotationNoDedup.scala 26:20]
    inst mod2 of MuchUsedModule @[AnnotationNoDedup.scala 27:20]
    inst mod3 of MuchUsedModule @[AnnotationNoDedup.scala 28:20]
    io_out <= mod3.io_out @[AnnotationNoDedup.scala 34:10]
    mod0.clock <= clock
    mod0.reset <= reset
    mod0.io_in <= io_in @[AnnotationNoDedup.scala 30:14]
    mod1.clock <= clock
    mod1.reset <= reset
    mod1.io_in <= mod0.io_out @[AnnotationNoDedup.scala 31:14]
    mod2.clock <= clock
    mod2.reset <= reset
    mod2.io_in <= mod1.io_out @[AnnotationNoDedup.scala 32:14]
    mod3.clock <= clock
    mod3.reset <= reset
    mod3.io_in <= mod2.io_out @[AnnotationNoDedup.scala 33:14]
