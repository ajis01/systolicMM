;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit ComplexAssignTester : 
  module ComplexAssign : 
    input clock : Clock
    input reset : Reset
    output io : {flip e : UInt<1>, flip in : {re : UInt<32>, im : UInt<32>}, out : {re : UInt<32>, im : UInt<32>}}
    
    when io.e : @[ComplexAssign.scala 21:15]
      wire _T_6 : {re : UInt<32>, im : UInt<32>} @[ComplexAssign.scala 22:19]
      _T_6.im <= io.in.im @[ComplexAssign.scala 23:9]
      _T_6.re <= io.in.re @[ComplexAssign.scala 23:9]
      io.out.re <= _T_6.re @[ComplexAssign.scala 24:15]
      io.out.im <= _T_6.im @[ComplexAssign.scala 25:15]
      skip @[ComplexAssign.scala 21:15]
    else : @[ComplexAssign.scala 26:16]
      io.out.re <= UInt<1>("h00") @[ComplexAssign.scala 27:15]
      io.out.im <= UInt<1>("h00") @[ComplexAssign.scala 28:15]
      skip @[ComplexAssign.scala 26:16]
    
  module ComplexAssignTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg value : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[Counter.scala 29:33]
    when UInt<1>("h01") : @[Counter.scala 71:17]
      node _T = eq(value, UInt<1>("h01")) @[Counter.scala 37:24]
      node _T_1 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_2 = tail(_T_1, 1) @[Counter.scala 38:22]
      value <= _T_2 @[Counter.scala 38:13]
      skip @[Counter.scala 71:17]
    node wrap = and(UInt<1>("h01"), _T) @[Counter.scala 72:20]
    inst dut of ComplexAssign @[ComplexAssign.scala 34:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.in.re <= UInt<29>("h01aec6d8f") @[ComplexAssign.scala 35:16]
    dut.io.in.im <= UInt<29>("h01509c06a") @[ComplexAssign.scala 36:16]
    wire _T_3 : UInt<1>[2] @[ComplexAssign.scala 37:22]
    _T_3[0] <= UInt<1>("h00") @[ComplexAssign.scala 37:22]
    _T_3[1] <= UInt<1>("h01") @[ComplexAssign.scala 37:22]
    dut.io.e <= _T_3[value] @[ComplexAssign.scala 37:12]
    node _T_4 = mux(dut.io.e, dut.io.in.re, UInt<1>("h00")) @[ComplexAssign.scala 38:41]
    node re_correct = eq(dut.io.out.re, _T_4) @[ComplexAssign.scala 38:34]
    node _T_5 = mux(dut.io.e, dut.io.in.im, UInt<1>("h00")) @[ComplexAssign.scala 39:41]
    node im_correct = eq(dut.io.out.im, _T_5) @[ComplexAssign.scala 39:34]
    node _T_6 = and(re_correct, im_correct) @[ComplexAssign.scala 40:21]
    node _T_7 = bits(reset, 0, 0) @[ComplexAssign.scala 40:9]
    node _T_8 = or(_T_6, _T_7) @[ComplexAssign.scala 40:9]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[ComplexAssign.scala 40:9]
    when _T_9 : @[ComplexAssign.scala 40:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at ComplexAssign.scala:40 assert(re_correct && im_correct)\n") @[ComplexAssign.scala 40:9]
      stop(clock, UInt<1>(1), 1) @[ComplexAssign.scala 40:9]
      skip @[ComplexAssign.scala 40:9]
    when wrap : @[ComplexAssign.scala 41:14]
      node _T_10 = bits(reset, 0, 0) @[ComplexAssign.scala 42:9]
      node _T_11 = eq(_T_10, UInt<1>("h00")) @[ComplexAssign.scala 42:9]
      when _T_11 : @[ComplexAssign.scala 42:9]
        stop(clock, UInt<1>(1), 0) @[ComplexAssign.scala 42:9]
        skip @[ComplexAssign.scala 42:9]
      skip @[ComplexAssign.scala 41:14]
    
