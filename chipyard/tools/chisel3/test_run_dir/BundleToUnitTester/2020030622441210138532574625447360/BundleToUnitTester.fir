;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit BundleToUnitTester : 
  module BundleToUnitTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire bundle1 : {a : UInt<4>, b : UInt<4>} @[BundleWire.scala 25:21]
    wire bundle2 : {a : UInt<2>, b : UInt<6>} @[BundleWire.scala 29:21]
    bundle1.a <= UInt<1>("h01") @[BundleWire.scala 35:13]
    bundle1.b <= UInt<4>("h0b") @[BundleWire.scala 36:13]
    bundle2.a <= UInt<1>("h00") @[BundleWire.scala 37:13]
    bundle2.b <= UInt<5>("h01b") @[BundleWire.scala 38:13]
    node _T = cat(bundle1.a, bundle1.b) @[BundleWire.scala 40:24]
    node _T_1 = cat(bundle2.a, bundle2.b) @[BundleWire.scala 40:45]
    node _T_2 = eq(_T, _T_1) @[BundleWire.scala 40:27]
    node _T_3 = bits(reset, 0, 0) @[BundleWire.scala 40:9]
    node _T_4 = or(_T_2, _T_3) @[BundleWire.scala 40:9]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[BundleWire.scala 40:9]
    when _T_5 : @[BundleWire.scala 40:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleWire.scala:40 assert(bundle1.asUInt() === bundle2.asUInt())\n") @[BundleWire.scala 40:9]
      stop(clock, UInt<1>(1), 1) @[BundleWire.scala 40:9]
      skip @[BundleWire.scala 40:9]
    node _T_6 = bits(reset, 0, 0) @[BundleWire.scala 42:7]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[BundleWire.scala 42:7]
    when _T_7 : @[BundleWire.scala 42:7]
      stop(clock, UInt<1>(1), 0) @[BundleWire.scala 42:7]
      skip @[BundleWire.scala 42:7]
    
