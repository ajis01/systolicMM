;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit GCDTester : 
  module GCD : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<32>, flip b : UInt<32>, flip e : UInt<1>, z : UInt<32>, v : UInt<1>}
    
    reg x : UInt<32>, clock @[GCD.scala 16:14]
    reg y : UInt<32>, clock @[GCD.scala 17:14]
    node _T = gt(x, y) @[GCD.scala 18:11]
    when _T : @[GCD.scala 18:18]
      node _T_1 = sub(x, y) @[GCD.scala 18:27]
      node _T_2 = tail(_T_1, 1) @[GCD.scala 18:27]
      x <= _T_2 @[GCD.scala 18:22]
      skip @[GCD.scala 18:18]
    else : @[GCD.scala 19:18]
      node _T_3 = sub(y, x) @[GCD.scala 19:27]
      node _T_4 = tail(_T_3, 1) @[GCD.scala 19:27]
      y <= _T_4 @[GCD.scala 19:22]
      skip @[GCD.scala 19:18]
    when io.e : @[GCD.scala 20:15]
      x <= io.a @[GCD.scala 20:19]
      y <= io.b @[GCD.scala 20:30]
      skip @[GCD.scala 20:15]
    io.z <= x @[GCD.scala 21:8]
    node _T_5 = eq(y, UInt<1>("h00")) @[GCD.scala 22:13]
    io.v <= _T_5 @[GCD.scala 22:8]
    
  module GCDTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst dut of GCD @[GCD.scala 26:19]
    dut.clock <= clock
    dut.reset <= reset
    reg first : UInt<1>, clock with : (reset => (reset, UInt<1>("h01"))) @[GCD.scala 27:22]
    dut.io.a <= UInt<4>("h0c") @[GCD.scala 28:12]
    dut.io.b <= UInt<4>("h09") @[GCD.scala 29:12]
    dut.io.e <= first @[GCD.scala 30:12]
    when first : @[GCD.scala 31:15]
      first <= UInt<1>("h00") @[GCD.scala 31:23]
      skip @[GCD.scala 31:15]
    node _T = eq(first, UInt<1>("h00")) @[GCD.scala 32:8]
    node _T_1 = and(_T, dut.io.v) @[GCD.scala 32:15]
    when _T_1 : @[GCD.scala 32:28]
      node _T_2 = eq(dut.io.z, UInt<2>("h03")) @[GCD.scala 33:21]
      node _T_3 = bits(reset, 0, 0) @[GCD.scala 33:11]
      node _T_4 = or(_T_2, _T_3) @[GCD.scala 33:11]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[GCD.scala 33:11]
      when _T_5 : @[GCD.scala 33:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at GCD.scala:33 assert(dut.io.z === z.U)\n") @[GCD.scala 33:11]
        stop(clock, UInt<1>(1), 1) @[GCD.scala 33:11]
        skip @[GCD.scala 33:11]
      node _T_6 = bits(reset, 0, 0) @[GCD.scala 34:9]
      node _T_7 = eq(_T_6, UInt<1>("h00")) @[GCD.scala 34:9]
      when _T_7 : @[GCD.scala 34:9]
        stop(clock, UInt<1>(1), 0) @[GCD.scala 34:9]
        skip @[GCD.scala 34:9]
      skip @[GCD.scala 32:28]
    
