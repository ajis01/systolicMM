;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit _1 : 
  module ResetAgnosticModule : 
    input clk : Clock
    input rst : Reset
    output out : UInt<8>
    
    reg reg : UInt<8>, clk with : (reset => (rst, UInt<8>("h00"))) @[ResetSpec.scala 14:48]
    node _T = add(reg, UInt<1>("h01")) @[ResetSpec.scala 15:14]
    node _T_1 = tail(_T, 1) @[ResetSpec.scala 15:14]
    reg <= _T_1 @[ResetSpec.scala 15:7]
    out <= reg @[ResetSpec.scala 16:7]
    
  module _1 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {out : UInt<8>}
    
    inst ResetAgnosticModule of ResetAgnosticModule @[ResetSpec.scala 29:24]
    ResetAgnosticModule.clk <= clock @[ResetSpec.scala 30:16]
    ResetAgnosticModule.rst <= reset @[ResetSpec.scala 31:16]
    io.out <= ResetAgnosticModule.out @[ResetSpec.scala 33:14]
    
