;buildInfoPackage: chisel3, version: 3.2.0, scalaVersion: 2.12.10, sbtVersion: 1.2.8
circuit MulLookupTester : 
  module MulLookup : 
    input clock : Clock
    input reset : Reset
    output io : {flip x : UInt<3>, flip y : UInt<3>, z : UInt<6>}
    
    wire tbl : UInt<6>[64] @[MulLookup.scala 14:20]
    tbl[0] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[1] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[2] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[3] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[4] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[5] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[6] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[7] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[8] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[9] <= UInt<6>("h01") @[MulLookup.scala 14:20]
    tbl[10] <= UInt<6>("h02") @[MulLookup.scala 14:20]
    tbl[11] <= UInt<6>("h03") @[MulLookup.scala 14:20]
    tbl[12] <= UInt<6>("h04") @[MulLookup.scala 14:20]
    tbl[13] <= UInt<6>("h05") @[MulLookup.scala 14:20]
    tbl[14] <= UInt<6>("h06") @[MulLookup.scala 14:20]
    tbl[15] <= UInt<6>("h07") @[MulLookup.scala 14:20]
    tbl[16] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[17] <= UInt<6>("h02") @[MulLookup.scala 14:20]
    tbl[18] <= UInt<6>("h04") @[MulLookup.scala 14:20]
    tbl[19] <= UInt<6>("h06") @[MulLookup.scala 14:20]
    tbl[20] <= UInt<6>("h08") @[MulLookup.scala 14:20]
    tbl[21] <= UInt<6>("h0a") @[MulLookup.scala 14:20]
    tbl[22] <= UInt<6>("h0c") @[MulLookup.scala 14:20]
    tbl[23] <= UInt<6>("h0e") @[MulLookup.scala 14:20]
    tbl[24] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[25] <= UInt<6>("h03") @[MulLookup.scala 14:20]
    tbl[26] <= UInt<6>("h06") @[MulLookup.scala 14:20]
    tbl[27] <= UInt<6>("h09") @[MulLookup.scala 14:20]
    tbl[28] <= UInt<6>("h0c") @[MulLookup.scala 14:20]
    tbl[29] <= UInt<6>("h0f") @[MulLookup.scala 14:20]
    tbl[30] <= UInt<6>("h012") @[MulLookup.scala 14:20]
    tbl[31] <= UInt<6>("h015") @[MulLookup.scala 14:20]
    tbl[32] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[33] <= UInt<6>("h04") @[MulLookup.scala 14:20]
    tbl[34] <= UInt<6>("h08") @[MulLookup.scala 14:20]
    tbl[35] <= UInt<6>("h0c") @[MulLookup.scala 14:20]
    tbl[36] <= UInt<6>("h010") @[MulLookup.scala 14:20]
    tbl[37] <= UInt<6>("h014") @[MulLookup.scala 14:20]
    tbl[38] <= UInt<6>("h018") @[MulLookup.scala 14:20]
    tbl[39] <= UInt<6>("h01c") @[MulLookup.scala 14:20]
    tbl[40] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[41] <= UInt<6>("h05") @[MulLookup.scala 14:20]
    tbl[42] <= UInt<6>("h0a") @[MulLookup.scala 14:20]
    tbl[43] <= UInt<6>("h0f") @[MulLookup.scala 14:20]
    tbl[44] <= UInt<6>("h014") @[MulLookup.scala 14:20]
    tbl[45] <= UInt<6>("h019") @[MulLookup.scala 14:20]
    tbl[46] <= UInt<6>("h01e") @[MulLookup.scala 14:20]
    tbl[47] <= UInt<6>("h023") @[MulLookup.scala 14:20]
    tbl[48] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[49] <= UInt<6>("h06") @[MulLookup.scala 14:20]
    tbl[50] <= UInt<6>("h0c") @[MulLookup.scala 14:20]
    tbl[51] <= UInt<6>("h012") @[MulLookup.scala 14:20]
    tbl[52] <= UInt<6>("h018") @[MulLookup.scala 14:20]
    tbl[53] <= UInt<6>("h01e") @[MulLookup.scala 14:20]
    tbl[54] <= UInt<6>("h024") @[MulLookup.scala 14:20]
    tbl[55] <= UInt<6>("h02a") @[MulLookup.scala 14:20]
    tbl[56] <= UInt<6>("h00") @[MulLookup.scala 14:20]
    tbl[57] <= UInt<6>("h07") @[MulLookup.scala 14:20]
    tbl[58] <= UInt<6>("h0e") @[MulLookup.scala 14:20]
    tbl[59] <= UInt<6>("h015") @[MulLookup.scala 14:20]
    tbl[60] <= UInt<6>("h01c") @[MulLookup.scala 14:20]
    tbl[61] <= UInt<6>("h023") @[MulLookup.scala 14:20]
    tbl[62] <= UInt<6>("h02a") @[MulLookup.scala 14:20]
    tbl[63] <= UInt<6>("h031") @[MulLookup.scala 14:20]
    node _T = shl(io.x, 3) @[MulLookup.scala 20:22]
    node _T_1 = or(_T, io.y) @[MulLookup.scala 20:28]
    io.z <= tbl[_T_1] @[MulLookup.scala 20:8]
    
  module MulLookupTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst dut of MulLookup @[MulLookup.scala 24:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.x <= UInt<1>("h01") @[MulLookup.scala 25:12]
    dut.io.y <= UInt<2>("h02") @[MulLookup.scala 26:12]
    node _T = eq(dut.io.z, UInt<2>("h02")) @[MulLookup.scala 27:19]
    node _T_1 = bits(reset, 0, 0) @[MulLookup.scala 27:9]
    node _T_2 = or(_T, _T_1) @[MulLookup.scala 27:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[MulLookup.scala 27:9]
    when _T_3 : @[MulLookup.scala 27:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MulLookup.scala:27 assert(dut.io.z === (x * y).asUInt)\n") @[MulLookup.scala 27:9]
      stop(clock, UInt<1>(1), 1) @[MulLookup.scala 27:9]
      skip @[MulLookup.scala 27:9]
    node _T_4 = bits(reset, 0, 0) @[MulLookup.scala 28:7]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[MulLookup.scala 28:7]
    when _T_5 : @[MulLookup.scala 28:7]
      stop(clock, UInt<1>(1), 0) @[MulLookup.scala 28:7]
      skip @[MulLookup.scala 28:7]
    
