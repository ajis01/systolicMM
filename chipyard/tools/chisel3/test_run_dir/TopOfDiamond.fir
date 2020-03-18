;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit TopOfDiamond : 
  module ModC : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<16>, out : UInt<16>}
    
    io.out <= io.in @[AnnotatingDiamondSpec.scala 64:10]
    
  module ModA : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt, out : UInt}
    
    inst modC of ModC @[AnnotatingDiamondSpec.scala 81:20]
    modC.clock <= clock
    modC.reset <= reset
    modC.io.in <= io.in @[AnnotatingDiamondSpec.scala 82:14]
    io.out <= modC.io.out @[AnnotatingDiamondSpec.scala 83:10]
    
  module ModC_1 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<32>, out : UInt<32>}
    
    io.out <= io.in @[AnnotatingDiamondSpec.scala 64:10]
    
  module ModB : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<32>, out : UInt<32>}
    
    inst modC of ModC_1 @[AnnotatingDiamondSpec.scala 96:20]
    modC.clock <= clock
    modC.reset <= reset
    modC.io.in <= io.in @[AnnotatingDiamondSpec.scala 97:14]
    io.out <= modC.io.out @[AnnotatingDiamondSpec.scala 98:10]
    
  module TopOfDiamond : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<32>, out : UInt<32>}
    
    reg x : UInt<32>, clock @[AnnotatingDiamondSpec.scala 108:14]
    reg y : UInt<32>, clock @[AnnotatingDiamondSpec.scala 109:14]
    inst modA of ModA @[AnnotatingDiamondSpec.scala 111:20]
    modA.clock <= clock
    modA.reset <= reset
    inst modB of ModB @[AnnotatingDiamondSpec.scala 112:20]
    modB.clock <= clock
    modB.reset <= reset
    x <= io.in @[AnnotatingDiamondSpec.scala 114:5]
    modA.io.in <= x @[AnnotatingDiamondSpec.scala 115:14]
    modB.io.in <= x @[AnnotatingDiamondSpec.scala 116:14]
    node _T = add(modA.io.out, modB.io.out) @[AnnotatingDiamondSpec.scala 118:20]
    node _T_1 = tail(_T, 1) @[AnnotatingDiamondSpec.scala 118:20]
    y <= _T_1 @[AnnotatingDiamondSpec.scala 118:5]
    io.out <= y @[AnnotatingDiamondSpec.scala 119:10]
    
