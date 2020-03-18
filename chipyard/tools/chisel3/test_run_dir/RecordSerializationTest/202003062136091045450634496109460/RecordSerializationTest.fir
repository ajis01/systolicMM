;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit RecordSerializationTest : 
  module RecordSerializationTest : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire record : {buzz : UInt<16>, fizz : UInt<16>} @[RecordSpec.scala 47:22]
    record.fizz <= UInt<16>("h0dead") @[RecordSpec.scala 49:20]
    record.buzz <= UInt<16>("h0beef") @[RecordSpec.scala 50:20]
    node uint = cat(record.buzz, record.fizz) @[RecordSpec.scala 52:23]
    node _T_2 = eq(uint, UInt<32>("h0beefdead")) @[RecordSpec.scala 54:17]
    node _T_3 = bits(reset, 0, 0) @[RecordSpec.scala 54:11]
    node _T_4 = or(_T_2, _T_3) @[RecordSpec.scala 54:11]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[RecordSpec.scala 54:11]
    when _T_5 : @[RecordSpec.scala 54:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RecordSpec.scala:54 assert(uint === \"hbeefdead\".U)\n") @[RecordSpec.scala 54:11]
      stop(clock, UInt<1>(1), 1) @[RecordSpec.scala 54:11]
      skip @[RecordSpec.scala 54:11]
    wire record2 : {buzz : UInt<16>, fizz : UInt<16>} @[RecordSpec.scala 56:32]
    wire _T_8 : UInt<32>
    _T_8 <= uint
    node _T_9 = bits(_T_8, 15, 0) @[RecordSpec.scala 56:32]
    record2.fizz <= _T_9 @[RecordSpec.scala 56:32]
    node _T_10 = bits(_T_8, 31, 16) @[RecordSpec.scala 56:32]
    record2.buzz <= _T_10 @[RecordSpec.scala 56:32]
    node _T_11 = eq(UInt<16>("h0dead"), record2.fizz) @[RecordSpec.scala 57:22]
    node _T_12 = bits(reset, 0, 0) @[RecordSpec.scala 57:11]
    node _T_13 = or(_T_11, _T_12) @[RecordSpec.scala 57:11]
    node _T_14 = eq(_T_13, UInt<1>("h00")) @[RecordSpec.scala 57:11]
    when _T_14 : @[RecordSpec.scala 57:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RecordSpec.scala:57 assert(\"hdead\".U === record2(\"fizz\").asUInt)\n") @[RecordSpec.scala 57:11]
      stop(clock, UInt<1>(1), 1) @[RecordSpec.scala 57:11]
      skip @[RecordSpec.scala 57:11]
    node _T_15 = eq(UInt<16>("h0beef"), record2.buzz) @[RecordSpec.scala 58:22]
    node _T_16 = bits(reset, 0, 0) @[RecordSpec.scala 58:11]
    node _T_17 = or(_T_15, _T_16) @[RecordSpec.scala 58:11]
    node _T_18 = eq(_T_17, UInt<1>("h00")) @[RecordSpec.scala 58:11]
    when _T_18 : @[RecordSpec.scala 58:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RecordSpec.scala:58 assert(\"hbeef\".U === record2(\"buzz\").asUInt)\n") @[RecordSpec.scala 58:11]
      stop(clock, UInt<1>(1), 1) @[RecordSpec.scala 58:11]
      skip @[RecordSpec.scala 58:11]
    node _T_19 = bits(reset, 0, 0) @[RecordSpec.scala 59:9]
    node _T_20 = eq(_T_19, UInt<1>("h00")) @[RecordSpec.scala 59:9]
    when _T_20 : @[RecordSpec.scala 59:9]
      stop(clock, UInt<1>(1), 0) @[RecordSpec.scala 59:9]
      skip @[RecordSpec.scala 59:9]
    
