;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit UsesBlackBoxAddViaInline : 
  extmodule BlackBoxAdd : 
    input in : UInt<16>
    output out : UInt<16>
    
    defname = BlackBoxAdd
    
    
  module UsesBlackBoxAddViaInline : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<16>, out : UInt<16>}
    
    inst blackBoxAdd of BlackBoxAdd @[BlackBoxImpl.scala 39:27]
    blackBoxAdd.out is invalid
    blackBoxAdd.in is invalid
    blackBoxAdd.in <= io.in @[BlackBoxImpl.scala 40:21]
    io.out <= blackBoxAdd.out @[BlackBoxImpl.scala 41:10]
    
