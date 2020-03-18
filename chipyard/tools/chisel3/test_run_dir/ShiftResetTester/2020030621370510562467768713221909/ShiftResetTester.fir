;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit ShiftResetTester : 
  module ShiftResetTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    when UInt<1>("h01") : @[Counter.scala 71:17]
      skip @[Counter.scala 71:17]
    node done = and(UInt<1>("h01"), UInt<1>("h01")) @[Counter.scala 72:20]
    node _T = add(UInt<1>("h00"), UInt<5>("h017")) @[Reg.scala 55:33]
    node _T_1 = tail(_T, 1) @[Reg.scala 55:33]
    reg sr : UInt, clock with : (reset => (reset, UInt<1>("h01"))) @[Reg.scala 27:20]
    when UInt<1>("h01") : @[Reg.scala 28:19]
      sr <= _T_1 @[Reg.scala 28:23]
      skip @[Reg.scala 28:19]
    when done : @[Reg.scala 56:14]
      node _T_2 = eq(sr, UInt<1>("h01")) @[Reg.scala 57:15]
      node _T_3 = bits(reset, 0, 0) @[Reg.scala 57:11]
      node _T_4 = or(_T_2, _T_3) @[Reg.scala 57:11]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[Reg.scala 57:11]
      when _T_5 : @[Reg.scala 57:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at Reg.scala:57 assert(sr === 1.U)\n") @[Reg.scala 57:11]
        stop(clock, UInt<1>(1), 1) @[Reg.scala 57:11]
        skip @[Reg.scala 57:11]
      node _T_6 = bits(reset, 0, 0) @[Reg.scala 58:9]
      node _T_7 = eq(_T_6, UInt<1>("h00")) @[Reg.scala 58:9]
      when _T_7 : @[Reg.scala 58:9]
        stop(clock, UInt<1>(1), 0) @[Reg.scala 58:9]
        skip @[Reg.scala 58:9]
      skip @[Reg.scala 56:14]
    
