;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit HasDeadCode : 
  module HasDeadCodeChild : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<32>, b : UInt<32>, c : UInt<32>[2]}
    
    io.b <= io.a @[DontTouchSpec.scala 13:8]
    io.c[0] is invalid @[DontTouchSpec.scala 14:8]
    io.c[1] is invalid @[DontTouchSpec.scala 14:8]
    
  module HasDeadCode : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip a : UInt<32>, b : UInt<32>}
    
    inst inst of HasDeadCodeChild @[DontTouchSpec.scala 25:20]
    inst.clock <= clock
    inst.reset <= reset
    inst.io.a <= io.a @[DontTouchSpec.scala 26:13]
    io.b <= inst.io.b @[DontTouchSpec.scala 27:8]
    node _T = add(io.a, UInt<1>("h01")) @[DontTouchSpec.scala 28:31]
    node _T_1 = tail(_T, 1) @[DontTouchSpec.scala 28:31]
    wire dead : UInt
    dead <= _T_1
    
