;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit _3 : 
  module ResetAgnosticModule : 
    input clk : Clock
    input rst : Reset
    output out : UInt<8>
    
    reg reg : UInt<8>, clk with : (reset => (rst, UInt<8>("h00"))) @[ResetSpec.scala 14:48]
    node _T = add(reg, UInt<1>("h01")) @[ResetSpec.scala 15:14]
    node _T_1 = tail(_T, 1) @[ResetSpec.scala 15:14]
    reg <= _T_1 @[ResetSpec.scala 15:7]
    out <= reg @[ResetSpec.scala 16:7]
    
  module _3 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {out : UInt<8>}
    
    inst ResetAgnosticModule of ResetAgnosticModule @[ResetSpec.scala 41:24]
    ResetAgnosticModule.clk <= clock @[ResetSpec.scala 42:16]
    wire _T : AsyncReset @[ResetSpec.scala 43:33]
    node _T_1 = bits(reset, 0, 0) @[ResetSpec.scala 43:33]
    node _T_2 = asAsyncReset(_T_1) @[ResetSpec.scala 43:33]
    _T <= _T_2 @[ResetSpec.scala 43:33]
    ResetAgnosticModule.rst <= _T @[ResetSpec.scala 43:16]
    io.out <= ResetAgnosticModule.out @[ResetSpec.scala 45:14]
    
