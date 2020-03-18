;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit FormattedAssertTester : 
  module FormattedAssertTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire foobar : UInt<32> @[Assert.scala 52:20]
    foobar <= UInt<7>("h07b") @[Assert.scala 53:10]
    node _T = eq(foobar, UInt<7>("h07b")) @[Assert.scala 54:17]
    node _T_1 = bits(reset, 0, 0) @[Assert.scala 54:9]
    node _T_2 = or(_T, _T_1) @[Assert.scala 54:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[Assert.scala 54:9]
    when _T_3 : @[Assert.scala 54:9]
      printf(clock, UInt<1>(1), "Assertion failed: Error! Wire foobar =/= %x! This is 100%% wrong.\n\n    at Assert.scala:54 assert(foobar === 123.U, \"Error! Wire foobar =/= %%x! This is 100%%%% wrong.\\n\", foobar)\n", foobar) @[Assert.scala 54:9]
      stop(clock, UInt<1>(1), 1) @[Assert.scala 54:9]
      skip @[Assert.scala 54:9]
    node _T_4 = bits(reset, 0, 0) @[Assert.scala 55:7]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[Assert.scala 55:7]
    when _T_5 : @[Assert.scala 55:7]
      stop(clock, UInt<1>(1), 0) @[Assert.scala 55:7]
      skip @[Assert.scala 55:7]
    
