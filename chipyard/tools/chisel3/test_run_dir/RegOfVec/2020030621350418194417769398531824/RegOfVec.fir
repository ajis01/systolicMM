;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit RegOfVec : 
  module RegOfVec : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 29:33]
    when UInt<1>("h01") : @[Counter.scala 71:17]
      node _T = eq(value, UInt<2>("h02")) @[Counter.scala 37:24]
      node _T_1 = add(value, UInt<1>("h01")) @[Counter.scala 38:22]
      node _T_2 = tail(_T_1, 1) @[Counter.scala 38:22]
      value <= _T_2 @[Counter.scala 38:13]
      when _T : @[Counter.scala 40:21]
        value <= UInt<1>("h00") @[Counter.scala 40:29]
        skip @[Counter.scala 40:21]
      skip @[Counter.scala 71:17]
    node done = and(UInt<1>("h01"), _T) @[Counter.scala 72:20]
    when done : @[CookbookSpec.scala 19:15]
      node _T_3 = bits(reset, 0, 0) @[CookbookSpec.scala 19:21]
      node _T_4 = eq(_T_3, UInt<1>("h00")) @[CookbookSpec.scala 19:21]
      when _T_4 : @[CookbookSpec.scala 19:21]
        stop(clock, UInt<1>(1), 0) @[CookbookSpec.scala 19:21]
        skip @[CookbookSpec.scala 19:21]
      skip @[CookbookSpec.scala 19:15]
    reg regOfVec : UInt<32>[4], clock @[RegOfVec.scala 14:21]
    regOfVec[0] <= UInt<7>("h07b") @[RegOfVec.scala 15:15]
    regOfVec[2] <= regOfVec[0] @[RegOfVec.scala 16:15]
    wire _T_5 : UInt<32>[4] @[RegOfVec.scala 22:37]
    _T_5[0] <= UInt<32>("h00") @[RegOfVec.scala 22:37]
    _T_5[1] <= UInt<32>("h00") @[RegOfVec.scala 22:37]
    _T_5[2] <= UInt<32>("h00") @[RegOfVec.scala 22:37]
    _T_5[3] <= UInt<32>("h00") @[RegOfVec.scala 22:37]
    reg initRegOfVec : UInt<32>[4], clock with : (reset => (reset, _T_5)) @[RegOfVec.scala 22:29]
    node _T_6 = eq(value, UInt<2>("h02")) @[RegOfVec.scala 25:15]
    when _T_6 : @[RegOfVec.scala 25:24]
      node _T_7 = eq(regOfVec[2], UInt<7>("h07b")) @[RegOfVec.scala 25:45]
      node _T_8 = bits(reset, 0, 0) @[RegOfVec.scala 25:32]
      node _T_9 = or(_T_7, _T_8) @[RegOfVec.scala 25:32]
      node _T_10 = eq(_T_9, UInt<1>("h00")) @[RegOfVec.scala 25:32]
      when _T_10 : @[RegOfVec.scala 25:32]
        printf(clock, UInt<1>(1), "Assertion failed\n    at RegOfVec.scala:25 when (cycle === 2.U) { assert(regOfVec(2) === 123.U) }\n") @[RegOfVec.scala 25:32]
        stop(clock, UInt<1>(1), 1) @[RegOfVec.scala 25:32]
        skip @[RegOfVec.scala 25:32]
      skip @[RegOfVec.scala 25:24]
    node _T_11 = eq(initRegOfVec[0], UInt<1>("h00")) @[RegOfVec.scala 26:42]
    node _T_12 = bits(reset, 0, 0) @[RegOfVec.scala 26:37]
    node _T_13 = or(_T_11, _T_12) @[RegOfVec.scala 26:37]
    node _T_14 = eq(_T_13, UInt<1>("h00")) @[RegOfVec.scala 26:37]
    when _T_14 : @[RegOfVec.scala 26:37]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RegOfVec.scala:26 for (elt <- initRegOfVec) { assert(elt === 0.U) }\n") @[RegOfVec.scala 26:37]
      stop(clock, UInt<1>(1), 1) @[RegOfVec.scala 26:37]
      skip @[RegOfVec.scala 26:37]
    node _T_15 = eq(initRegOfVec[1], UInt<1>("h00")) @[RegOfVec.scala 26:42]
    node _T_16 = bits(reset, 0, 0) @[RegOfVec.scala 26:37]
    node _T_17 = or(_T_15, _T_16) @[RegOfVec.scala 26:37]
    node _T_18 = eq(_T_17, UInt<1>("h00")) @[RegOfVec.scala 26:37]
    when _T_18 : @[RegOfVec.scala 26:37]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RegOfVec.scala:26 for (elt <- initRegOfVec) { assert(elt === 0.U) }\n") @[RegOfVec.scala 26:37]
      stop(clock, UInt<1>(1), 1) @[RegOfVec.scala 26:37]
      skip @[RegOfVec.scala 26:37]
    node _T_19 = eq(initRegOfVec[2], UInt<1>("h00")) @[RegOfVec.scala 26:42]
    node _T_20 = bits(reset, 0, 0) @[RegOfVec.scala 26:37]
    node _T_21 = or(_T_19, _T_20) @[RegOfVec.scala 26:37]
    node _T_22 = eq(_T_21, UInt<1>("h00")) @[RegOfVec.scala 26:37]
    when _T_22 : @[RegOfVec.scala 26:37]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RegOfVec.scala:26 for (elt <- initRegOfVec) { assert(elt === 0.U) }\n") @[RegOfVec.scala 26:37]
      stop(clock, UInt<1>(1), 1) @[RegOfVec.scala 26:37]
      skip @[RegOfVec.scala 26:37]
    node _T_23 = eq(initRegOfVec[3], UInt<1>("h00")) @[RegOfVec.scala 26:42]
    node _T_24 = bits(reset, 0, 0) @[RegOfVec.scala 26:37]
    node _T_25 = or(_T_23, _T_24) @[RegOfVec.scala 26:37]
    node _T_26 = eq(_T_25, UInt<1>("h00")) @[RegOfVec.scala 26:37]
    when _T_26 : @[RegOfVec.scala 26:37]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RegOfVec.scala:26 for (elt <- initRegOfVec) { assert(elt === 0.U) }\n") @[RegOfVec.scala 26:37]
      stop(clock, UInt<1>(1), 1) @[RegOfVec.scala 26:37]
      skip @[RegOfVec.scala 26:37]
    
