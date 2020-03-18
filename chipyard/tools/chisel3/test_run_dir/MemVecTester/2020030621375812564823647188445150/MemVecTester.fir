;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit MemVecTester : 
  module MemVecTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    cmem mem : UInt<8>[2][2] @[Mem.scala 10:16]
    reg value : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[Counter.scala 29:33]
    when UInt<1>("h01") : @[Counter.scala 71:17]
      node _T = eq(value, UInt<1>("h01")) @[Counter.scala 37:24]
      node _T_1 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_2 = tail(_T_1, 1) @[Counter.scala 38:22]
      value <= _T_2 @[Counter.scala 38:13]
      skip @[Counter.scala 71:17]
    node wrap = and(UInt<1>("h01"), _T) @[Counter.scala 72:20]
    infer mport _T_3 = mem[UInt<1>("h00")], clock @[Mem.scala 14:6]
    _T_3[0] <= UInt<1>("h01") @[Mem.scala 14:13]
    node _T_4 = eq(value, UInt<1>("h01")) @[Mem.scala 16:13]
    when _T_4 : @[Mem.scala 16:22]
      read mport _T_5 = mem[UInt<1>("h00")], clock @[Mem.scala 17:20]
      node _T_6 = eq(_T_5[0], UInt<1>("h01")) @[Mem.scala 17:29]
      node _T_7 = bits(reset, 0, 0) @[Mem.scala 17:11]
      node _T_8 = or(_T_6, _T_7) @[Mem.scala 17:11]
      node _T_9 = eq(_T_8, UInt<1>("h00")) @[Mem.scala 17:11]
      when _T_9 : @[Mem.scala 17:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at Mem.scala:17 assert(mem.read(0.U)(0) === 1.U)\n") @[Mem.scala 17:11]
        stop(clock, UInt<1>(1), 1) @[Mem.scala 17:11]
        skip @[Mem.scala 17:11]
      node _T_10 = bits(reset, 0, 0) @[Mem.scala 18:9]
      node _T_11 = eq(_T_10, UInt<1>("h00")) @[Mem.scala 18:9]
      when _T_11 : @[Mem.scala 18:9]
        stop(clock, UInt<1>(1), 0) @[Mem.scala 18:9]
        skip @[Mem.scala 18:9]
      skip @[Mem.scala 16:22]
    
