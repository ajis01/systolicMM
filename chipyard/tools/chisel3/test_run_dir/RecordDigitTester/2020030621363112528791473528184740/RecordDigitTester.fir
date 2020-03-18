;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit RecordDigitTester : 
  module RecordDigitTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire wire : {0 : UInt<32>} @[RecordSpec.scala 97:20]
    wire.0 <= UInt<7>("h07b") @[RecordSpec.scala 98:15]
    node _T_1 = eq(wire.0, UInt<7>("h07b")) @[RecordSpec.scala 99:29]
    node _T_2 = bits(reset, 0, 0) @[RecordSpec.scala 99:11]
    node _T_3 = or(_T_1, _T_2) @[RecordSpec.scala 99:11]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[RecordSpec.scala 99:11]
    when _T_4 : @[RecordSpec.scala 99:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RecordSpec.scala:99 assert(wire(\"0\").asUInt === 123.U)\n") @[RecordSpec.scala 99:11]
      stop(clock, UInt<1>(1), 1) @[RecordSpec.scala 99:11]
      skip @[RecordSpec.scala 99:11]
    node _T_5 = bits(reset, 0, 0) @[RecordSpec.scala 100:9]
    node _T_6 = eq(_T_5, UInt<1>("h00")) @[RecordSpec.scala 100:9]
    when _T_6 : @[RecordSpec.scala 100:9]
      stop(clock, UInt<1>(1), 0) @[RecordSpec.scala 100:9]
      skip @[RecordSpec.scala 100:9]
    
