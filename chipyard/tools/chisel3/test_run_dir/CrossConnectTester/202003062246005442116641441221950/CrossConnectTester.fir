;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit CrossConnectTester : 
  module CrossConnects : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : SInt<16>, out : SInt<16>}
    
    io.out <= io.in @[ConnectSpec.scala 19:10]
    
  module CrossConnectTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst dut of CrossConnects @[ConnectSpec.scala 34:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.out is invalid @[ConnectSpec.scala 35:10]
    dut.io.in is invalid @[ConnectSpec.scala 35:10]
    node _T = bits(reset, 0, 0) @[ConnectSpec.scala 36:7]
    node _T_1 = eq(_T, UInt<1>("h00")) @[ConnectSpec.scala 36:7]
    when _T_1 : @[ConnectSpec.scala 36:7]
      stop(clock, UInt<1>(1), 0) @[ConnectSpec.scala 36:7]
      skip @[ConnectSpec.scala 36:7]
    
