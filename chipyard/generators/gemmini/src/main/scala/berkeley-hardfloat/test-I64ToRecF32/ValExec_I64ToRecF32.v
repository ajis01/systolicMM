module RoundAnyRawFNToRecFN(
  input         io_in_isZero,
  input         io_in_sign,
  input  [8:0]  io_in_sExp,
  input  [64:0] io_in_sig,
  input  [2:0]  io_roundingMode,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  roundingMode_near_even; // @[RoundAnyRawFNToRecFN.scala 88:53]
  wire  roundingMode_min; // @[RoundAnyRawFNToRecFN.scala 90:53]
  wire  roundingMode_max; // @[RoundAnyRawFNToRecFN.scala 91:53]
  wire  roundingMode_near_maxMag; // @[RoundAnyRawFNToRecFN.scala 92:53]
  wire  roundingMode_odd; // @[RoundAnyRawFNToRecFN.scala 93:53]
  wire  _T; // @[RoundAnyRawFNToRecFN.scala 96:27]
  wire  _T_2; // @[RoundAnyRawFNToRecFN.scala 96:63]
  wire  roundMagUp; // @[RoundAnyRawFNToRecFN.scala 96:42]
  wire [9:0] _T_3; // @[RoundAnyRawFNToRecFN.scala 102:25]
  wire [9:0] sAdjustedExp; // @[RoundAnyRawFNToRecFN.scala 104:31]
  wire  _T_7; // @[RoundAnyRawFNToRecFN.scala 115:60]
  wire [26:0] adjustedSig; // @[Cat.scala 29:58]
  wire [26:0] _T_14; // @[RoundAnyRawFNToRecFN.scala 162:40]
  wire  _T_15; // @[RoundAnyRawFNToRecFN.scala 162:56]
  wire [26:0] _T_16; // @[RoundAnyRawFNToRecFN.scala 163:42]
  wire  _T_17; // @[RoundAnyRawFNToRecFN.scala 163:62]
  wire  common_inexact; // @[RoundAnyRawFNToRecFN.scala 164:36]
  wire  _T_19; // @[RoundAnyRawFNToRecFN.scala 167:38]
  wire  _T_20; // @[RoundAnyRawFNToRecFN.scala 167:67]
  wire  _T_21; // @[RoundAnyRawFNToRecFN.scala 169:29]
  wire  _T_22; // @[RoundAnyRawFNToRecFN.scala 168:31]
  wire [26:0] _T_23; // @[RoundAnyRawFNToRecFN.scala 172:32]
  wire [25:0] _T_25; // @[RoundAnyRawFNToRecFN.scala 172:49]
  wire  _T_26; // @[RoundAnyRawFNToRecFN.scala 173:49]
  wire  _T_28; // @[RoundAnyRawFNToRecFN.scala 173:64]
  wire [25:0] _T_30; // @[RoundAnyRawFNToRecFN.scala 173:25]
  wire [25:0] _T_32; // @[RoundAnyRawFNToRecFN.scala 172:61]
  wire [26:0] _T_34; // @[RoundAnyRawFNToRecFN.scala 178:30]
  wire  _T_36; // @[RoundAnyRawFNToRecFN.scala 179:42]
  wire [25:0] _T_38; // @[RoundAnyRawFNToRecFN.scala 179:24]
  wire [25:0] _GEN_0; // @[RoundAnyRawFNToRecFN.scala 178:47]
  wire [25:0] _T_39; // @[RoundAnyRawFNToRecFN.scala 178:47]
  wire [25:0] _T_40; // @[RoundAnyRawFNToRecFN.scala 171:16]
  wire [2:0] _T_42; // @[RoundAnyRawFNToRecFN.scala 183:69]
  wire [9:0] _GEN_1; // @[RoundAnyRawFNToRecFN.scala 183:40]
  wire [10:0] _T_43; // @[RoundAnyRawFNToRecFN.scala 183:40]
  wire [8:0] common_expOut; // @[RoundAnyRawFNToRecFN.scala 185:37]
  wire [22:0] common_fractOut; // @[RoundAnyRawFNToRecFN.scala 189:27]
  wire  commonCase; // @[RoundAnyRawFNToRecFN.scala 235:64]
  wire  inexact; // @[RoundAnyRawFNToRecFN.scala 238:43]
  wire [8:0] _T_75; // @[RoundAnyRawFNToRecFN.scala 251:18]
  wire [8:0] expOut; // @[RoundAnyRawFNToRecFN.scala 250:24]
  wire [22:0] fractOut; // @[RoundAnyRawFNToRecFN.scala 278:12]
  wire [9:0] _T_101; // @[Cat.scala 29:58]
  wire [1:0] _T_103; // @[Cat.scala 29:58]
  assign roundingMode_near_even = io_roundingMode == 3'h0; // @[RoundAnyRawFNToRecFN.scala 88:53]
  assign roundingMode_min = io_roundingMode == 3'h2; // @[RoundAnyRawFNToRecFN.scala 90:53]
  assign roundingMode_max = io_roundingMode == 3'h3; // @[RoundAnyRawFNToRecFN.scala 91:53]
  assign roundingMode_near_maxMag = io_roundingMode == 3'h4; // @[RoundAnyRawFNToRecFN.scala 92:53]
  assign roundingMode_odd = io_roundingMode == 3'h6; // @[RoundAnyRawFNToRecFN.scala 93:53]
  assign _T = roundingMode_min & io_in_sign; // @[RoundAnyRawFNToRecFN.scala 96:27]
  assign _T_2 = roundingMode_max & ~io_in_sign; // @[RoundAnyRawFNToRecFN.scala 96:63]
  assign roundMagUp = _T | _T_2; // @[RoundAnyRawFNToRecFN.scala 96:42]
  assign _T_3 = $signed(io_in_sExp) + 9'sh80; // @[RoundAnyRawFNToRecFN.scala 102:25]
  assign sAdjustedExp = {1'b0,$signed(_T_3[8:0])}; // @[RoundAnyRawFNToRecFN.scala 104:31]
  assign _T_7 = io_in_sig[38:0] != 39'h0; // @[RoundAnyRawFNToRecFN.scala 115:60]
  assign adjustedSig = {io_in_sig[64:39],_T_7}; // @[Cat.scala 29:58]
  assign _T_14 = adjustedSig & 27'h2; // @[RoundAnyRawFNToRecFN.scala 162:40]
  assign _T_15 = _T_14 != 27'h0; // @[RoundAnyRawFNToRecFN.scala 162:56]
  assign _T_16 = adjustedSig & 27'h1; // @[RoundAnyRawFNToRecFN.scala 163:42]
  assign _T_17 = _T_16 != 27'h0; // @[RoundAnyRawFNToRecFN.scala 163:62]
  assign common_inexact = _T_15 | _T_17; // @[RoundAnyRawFNToRecFN.scala 164:36]
  assign _T_19 = roundingMode_near_even | roundingMode_near_maxMag; // @[RoundAnyRawFNToRecFN.scala 167:38]
  assign _T_20 = _T_19 & _T_15; // @[RoundAnyRawFNToRecFN.scala 167:67]
  assign _T_21 = roundMagUp & common_inexact; // @[RoundAnyRawFNToRecFN.scala 169:29]
  assign _T_22 = _T_20 | _T_21; // @[RoundAnyRawFNToRecFN.scala 168:31]
  assign _T_23 = adjustedSig | 27'h3; // @[RoundAnyRawFNToRecFN.scala 172:32]
  assign _T_25 = _T_23[26:2] + 25'h1; // @[RoundAnyRawFNToRecFN.scala 172:49]
  assign _T_26 = roundingMode_near_even & _T_15; // @[RoundAnyRawFNToRecFN.scala 173:49]
  assign _T_28 = _T_26 & ~_T_17; // @[RoundAnyRawFNToRecFN.scala 173:64]
  assign _T_30 = _T_28 ? 26'h1 : 26'h0; // @[RoundAnyRawFNToRecFN.scala 173:25]
  assign _T_32 = _T_25 & ~_T_30; // @[RoundAnyRawFNToRecFN.scala 172:61]
  assign _T_34 = adjustedSig & 27'h7fffffc; // @[RoundAnyRawFNToRecFN.scala 178:30]
  assign _T_36 = roundingMode_odd & common_inexact; // @[RoundAnyRawFNToRecFN.scala 179:42]
  assign _T_38 = _T_36 ? 26'h1 : 26'h0; // @[RoundAnyRawFNToRecFN.scala 179:24]
  assign _GEN_0 = {{1'd0}, _T_34[26:2]}; // @[RoundAnyRawFNToRecFN.scala 178:47]
  assign _T_39 = _GEN_0 | _T_38; // @[RoundAnyRawFNToRecFN.scala 178:47]
  assign _T_40 = _T_22 ? _T_32 : _T_39; // @[RoundAnyRawFNToRecFN.scala 171:16]
  assign _T_42 = {1'b0,$signed(_T_40[25:24])}; // @[RoundAnyRawFNToRecFN.scala 183:69]
  assign _GEN_1 = {{7{_T_42[2]}},_T_42}; // @[RoundAnyRawFNToRecFN.scala 183:40]
  assign _T_43 = $signed(sAdjustedExp) + $signed(_GEN_1); // @[RoundAnyRawFNToRecFN.scala 183:40]
  assign common_expOut = _T_43[8:0]; // @[RoundAnyRawFNToRecFN.scala 185:37]
  assign common_fractOut = _T_40[22:0]; // @[RoundAnyRawFNToRecFN.scala 189:27]
  assign commonCase = ~io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 235:64]
  assign inexact = commonCase & common_inexact; // @[RoundAnyRawFNToRecFN.scala 238:43]
  assign _T_75 = io_in_isZero ? 9'h1c0 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 251:18]
  assign expOut = common_expOut & ~_T_75; // @[RoundAnyRawFNToRecFN.scala 250:24]
  assign fractOut = io_in_isZero ? 23'h0 : common_fractOut; // @[RoundAnyRawFNToRecFN.scala 278:12]
  assign _T_101 = {io_in_sign,expOut}; // @[Cat.scala 29:58]
  assign _T_103 = {1'h0,inexact}; // @[Cat.scala 29:58]
  assign io_out = {_T_101,fractOut}; // @[RoundAnyRawFNToRecFN.scala 284:12]
  assign io_exceptionFlags = {3'h0,_T_103}; // @[RoundAnyRawFNToRecFN.scala 285:23]
endmodule
module INToRecFN(
  input  [63:0] io_in,
  input  [2:0]  io_roundingMode,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  roundAnyRawFNToRecFN_io_in_isZero; // @[INToRecFN.scala 59:15]
  wire  roundAnyRawFNToRecFN_io_in_sign; // @[INToRecFN.scala 59:15]
  wire [8:0] roundAnyRawFNToRecFN_io_in_sExp; // @[INToRecFN.scala 59:15]
  wire [64:0] roundAnyRawFNToRecFN_io_in_sig; // @[INToRecFN.scala 59:15]
  wire [2:0] roundAnyRawFNToRecFN_io_roundingMode; // @[INToRecFN.scala 59:15]
  wire [32:0] roundAnyRawFNToRecFN_io_out; // @[INToRecFN.scala 59:15]
  wire [4:0] roundAnyRawFNToRecFN_io_exceptionFlags; // @[INToRecFN.scala 59:15]
  wire  intAsRawFloat_sign; // @[rawFloatFromIN.scala 50:34]
  wire [63:0] _T_3; // @[rawFloatFromIN.scala 51:31]
  wire [63:0] _T_4; // @[rawFloatFromIN.scala 51:24]
  wire [127:0] _T_5; // @[Cat.scala 29:58]
  wire [5:0] _T_71; // @[Mux.scala 47:69]
  wire [5:0] _T_72; // @[Mux.scala 47:69]
  wire [5:0] _T_73; // @[Mux.scala 47:69]
  wire [5:0] _T_74; // @[Mux.scala 47:69]
  wire [5:0] _T_75; // @[Mux.scala 47:69]
  wire [5:0] _T_76; // @[Mux.scala 47:69]
  wire [5:0] _T_77; // @[Mux.scala 47:69]
  wire [5:0] _T_78; // @[Mux.scala 47:69]
  wire [5:0] _T_79; // @[Mux.scala 47:69]
  wire [5:0] _T_80; // @[Mux.scala 47:69]
  wire [5:0] _T_81; // @[Mux.scala 47:69]
  wire [5:0] _T_82; // @[Mux.scala 47:69]
  wire [5:0] _T_83; // @[Mux.scala 47:69]
  wire [5:0] _T_84; // @[Mux.scala 47:69]
  wire [5:0] _T_85; // @[Mux.scala 47:69]
  wire [5:0] _T_86; // @[Mux.scala 47:69]
  wire [5:0] _T_87; // @[Mux.scala 47:69]
  wire [5:0] _T_88; // @[Mux.scala 47:69]
  wire [5:0] _T_89; // @[Mux.scala 47:69]
  wire [5:0] _T_90; // @[Mux.scala 47:69]
  wire [5:0] _T_91; // @[Mux.scala 47:69]
  wire [5:0] _T_92; // @[Mux.scala 47:69]
  wire [5:0] _T_93; // @[Mux.scala 47:69]
  wire [5:0] _T_94; // @[Mux.scala 47:69]
  wire [5:0] _T_95; // @[Mux.scala 47:69]
  wire [5:0] _T_96; // @[Mux.scala 47:69]
  wire [5:0] _T_97; // @[Mux.scala 47:69]
  wire [5:0] _T_98; // @[Mux.scala 47:69]
  wire [5:0] _T_99; // @[Mux.scala 47:69]
  wire [5:0] _T_100; // @[Mux.scala 47:69]
  wire [5:0] _T_101; // @[Mux.scala 47:69]
  wire [5:0] _T_102; // @[Mux.scala 47:69]
  wire [5:0] _T_103; // @[Mux.scala 47:69]
  wire [5:0] _T_104; // @[Mux.scala 47:69]
  wire [5:0] _T_105; // @[Mux.scala 47:69]
  wire [5:0] _T_106; // @[Mux.scala 47:69]
  wire [5:0] _T_107; // @[Mux.scala 47:69]
  wire [5:0] _T_108; // @[Mux.scala 47:69]
  wire [5:0] _T_109; // @[Mux.scala 47:69]
  wire [5:0] _T_110; // @[Mux.scala 47:69]
  wire [5:0] _T_111; // @[Mux.scala 47:69]
  wire [5:0] _T_112; // @[Mux.scala 47:69]
  wire [5:0] _T_113; // @[Mux.scala 47:69]
  wire [5:0] _T_114; // @[Mux.scala 47:69]
  wire [5:0] _T_115; // @[Mux.scala 47:69]
  wire [5:0] _T_116; // @[Mux.scala 47:69]
  wire [5:0] _T_117; // @[Mux.scala 47:69]
  wire [5:0] _T_118; // @[Mux.scala 47:69]
  wire [5:0] _T_119; // @[Mux.scala 47:69]
  wire [5:0] _T_120; // @[Mux.scala 47:69]
  wire [5:0] _T_121; // @[Mux.scala 47:69]
  wire [5:0] _T_122; // @[Mux.scala 47:69]
  wire [5:0] _T_123; // @[Mux.scala 47:69]
  wire [5:0] _T_124; // @[Mux.scala 47:69]
  wire [5:0] _T_125; // @[Mux.scala 47:69]
  wire [5:0] _T_126; // @[Mux.scala 47:69]
  wire [5:0] _T_127; // @[Mux.scala 47:69]
  wire [5:0] _T_128; // @[Mux.scala 47:69]
  wire [5:0] _T_129; // @[Mux.scala 47:69]
  wire [5:0] _T_130; // @[Mux.scala 47:69]
  wire [5:0] _T_131; // @[Mux.scala 47:69]
  wire [5:0] _T_132; // @[Mux.scala 47:69]
  wire [5:0] _T_133; // @[Mux.scala 47:69]
  wire [126:0] _GEN_0; // @[rawFloatFromIN.scala 55:22]
  wire [126:0] _T_134; // @[rawFloatFromIN.scala 55:22]
  wire [7:0] _T_140; // @[Cat.scala 29:58]
  RoundAnyRawFNToRecFN roundAnyRawFNToRecFN ( // @[INToRecFN.scala 59:15]
    .io_in_isZero(roundAnyRawFNToRecFN_io_in_isZero),
    .io_in_sign(roundAnyRawFNToRecFN_io_in_sign),
    .io_in_sExp(roundAnyRawFNToRecFN_io_in_sExp),
    .io_in_sig(roundAnyRawFNToRecFN_io_in_sig),
    .io_roundingMode(roundAnyRawFNToRecFN_io_roundingMode),
    .io_out(roundAnyRawFNToRecFN_io_out),
    .io_exceptionFlags(roundAnyRawFNToRecFN_io_exceptionFlags)
  );
  assign intAsRawFloat_sign = io_in[63]; // @[rawFloatFromIN.scala 50:34]
  assign _T_3 = 64'h0 - io_in; // @[rawFloatFromIN.scala 51:31]
  assign _T_4 = intAsRawFloat_sign ? _T_3 : io_in; // @[rawFloatFromIN.scala 51:24]
  assign _T_5 = {64'h0,_T_4}; // @[Cat.scala 29:58]
  assign _T_71 = _T_5[1] ? 6'h3e : 6'h3f; // @[Mux.scala 47:69]
  assign _T_72 = _T_5[2] ? 6'h3d : _T_71; // @[Mux.scala 47:69]
  assign _T_73 = _T_5[3] ? 6'h3c : _T_72; // @[Mux.scala 47:69]
  assign _T_74 = _T_5[4] ? 6'h3b : _T_73; // @[Mux.scala 47:69]
  assign _T_75 = _T_5[5] ? 6'h3a : _T_74; // @[Mux.scala 47:69]
  assign _T_76 = _T_5[6] ? 6'h39 : _T_75; // @[Mux.scala 47:69]
  assign _T_77 = _T_5[7] ? 6'h38 : _T_76; // @[Mux.scala 47:69]
  assign _T_78 = _T_5[8] ? 6'h37 : _T_77; // @[Mux.scala 47:69]
  assign _T_79 = _T_5[9] ? 6'h36 : _T_78; // @[Mux.scala 47:69]
  assign _T_80 = _T_5[10] ? 6'h35 : _T_79; // @[Mux.scala 47:69]
  assign _T_81 = _T_5[11] ? 6'h34 : _T_80; // @[Mux.scala 47:69]
  assign _T_82 = _T_5[12] ? 6'h33 : _T_81; // @[Mux.scala 47:69]
  assign _T_83 = _T_5[13] ? 6'h32 : _T_82; // @[Mux.scala 47:69]
  assign _T_84 = _T_5[14] ? 6'h31 : _T_83; // @[Mux.scala 47:69]
  assign _T_85 = _T_5[15] ? 6'h30 : _T_84; // @[Mux.scala 47:69]
  assign _T_86 = _T_5[16] ? 6'h2f : _T_85; // @[Mux.scala 47:69]
  assign _T_87 = _T_5[17] ? 6'h2e : _T_86; // @[Mux.scala 47:69]
  assign _T_88 = _T_5[18] ? 6'h2d : _T_87; // @[Mux.scala 47:69]
  assign _T_89 = _T_5[19] ? 6'h2c : _T_88; // @[Mux.scala 47:69]
  assign _T_90 = _T_5[20] ? 6'h2b : _T_89; // @[Mux.scala 47:69]
  assign _T_91 = _T_5[21] ? 6'h2a : _T_90; // @[Mux.scala 47:69]
  assign _T_92 = _T_5[22] ? 6'h29 : _T_91; // @[Mux.scala 47:69]
  assign _T_93 = _T_5[23] ? 6'h28 : _T_92; // @[Mux.scala 47:69]
  assign _T_94 = _T_5[24] ? 6'h27 : _T_93; // @[Mux.scala 47:69]
  assign _T_95 = _T_5[25] ? 6'h26 : _T_94; // @[Mux.scala 47:69]
  assign _T_96 = _T_5[26] ? 6'h25 : _T_95; // @[Mux.scala 47:69]
  assign _T_97 = _T_5[27] ? 6'h24 : _T_96; // @[Mux.scala 47:69]
  assign _T_98 = _T_5[28] ? 6'h23 : _T_97; // @[Mux.scala 47:69]
  assign _T_99 = _T_5[29] ? 6'h22 : _T_98; // @[Mux.scala 47:69]
  assign _T_100 = _T_5[30] ? 6'h21 : _T_99; // @[Mux.scala 47:69]
  assign _T_101 = _T_5[31] ? 6'h20 : _T_100; // @[Mux.scala 47:69]
  assign _T_102 = _T_5[32] ? 6'h1f : _T_101; // @[Mux.scala 47:69]
  assign _T_103 = _T_5[33] ? 6'h1e : _T_102; // @[Mux.scala 47:69]
  assign _T_104 = _T_5[34] ? 6'h1d : _T_103; // @[Mux.scala 47:69]
  assign _T_105 = _T_5[35] ? 6'h1c : _T_104; // @[Mux.scala 47:69]
  assign _T_106 = _T_5[36] ? 6'h1b : _T_105; // @[Mux.scala 47:69]
  assign _T_107 = _T_5[37] ? 6'h1a : _T_106; // @[Mux.scala 47:69]
  assign _T_108 = _T_5[38] ? 6'h19 : _T_107; // @[Mux.scala 47:69]
  assign _T_109 = _T_5[39] ? 6'h18 : _T_108; // @[Mux.scala 47:69]
  assign _T_110 = _T_5[40] ? 6'h17 : _T_109; // @[Mux.scala 47:69]
  assign _T_111 = _T_5[41] ? 6'h16 : _T_110; // @[Mux.scala 47:69]
  assign _T_112 = _T_5[42] ? 6'h15 : _T_111; // @[Mux.scala 47:69]
  assign _T_113 = _T_5[43] ? 6'h14 : _T_112; // @[Mux.scala 47:69]
  assign _T_114 = _T_5[44] ? 6'h13 : _T_113; // @[Mux.scala 47:69]
  assign _T_115 = _T_5[45] ? 6'h12 : _T_114; // @[Mux.scala 47:69]
  assign _T_116 = _T_5[46] ? 6'h11 : _T_115; // @[Mux.scala 47:69]
  assign _T_117 = _T_5[47] ? 6'h10 : _T_116; // @[Mux.scala 47:69]
  assign _T_118 = _T_5[48] ? 6'hf : _T_117; // @[Mux.scala 47:69]
  assign _T_119 = _T_5[49] ? 6'he : _T_118; // @[Mux.scala 47:69]
  assign _T_120 = _T_5[50] ? 6'hd : _T_119; // @[Mux.scala 47:69]
  assign _T_121 = _T_5[51] ? 6'hc : _T_120; // @[Mux.scala 47:69]
  assign _T_122 = _T_5[52] ? 6'hb : _T_121; // @[Mux.scala 47:69]
  assign _T_123 = _T_5[53] ? 6'ha : _T_122; // @[Mux.scala 47:69]
  assign _T_124 = _T_5[54] ? 6'h9 : _T_123; // @[Mux.scala 47:69]
  assign _T_125 = _T_5[55] ? 6'h8 : _T_124; // @[Mux.scala 47:69]
  assign _T_126 = _T_5[56] ? 6'h7 : _T_125; // @[Mux.scala 47:69]
  assign _T_127 = _T_5[57] ? 6'h6 : _T_126; // @[Mux.scala 47:69]
  assign _T_128 = _T_5[58] ? 6'h5 : _T_127; // @[Mux.scala 47:69]
  assign _T_129 = _T_5[59] ? 6'h4 : _T_128; // @[Mux.scala 47:69]
  assign _T_130 = _T_5[60] ? 6'h3 : _T_129; // @[Mux.scala 47:69]
  assign _T_131 = _T_5[61] ? 6'h2 : _T_130; // @[Mux.scala 47:69]
  assign _T_132 = _T_5[62] ? 6'h1 : _T_131; // @[Mux.scala 47:69]
  assign _T_133 = _T_5[63] ? 6'h0 : _T_132; // @[Mux.scala 47:69]
  assign _GEN_0 = {{63'd0}, _T_5[63:0]}; // @[rawFloatFromIN.scala 55:22]
  assign _T_134 = _GEN_0 << _T_133; // @[rawFloatFromIN.scala 55:22]
  assign _T_140 = {2'h2,~_T_133}; // @[Cat.scala 29:58]
  assign io_out = roundAnyRawFNToRecFN_io_out; // @[INToRecFN.scala 72:23]
  assign io_exceptionFlags = roundAnyRawFNToRecFN_io_exceptionFlags; // @[INToRecFN.scala 73:23]
  assign roundAnyRawFNToRecFN_io_in_isZero = ~_T_134[63]; // @[INToRecFN.scala 69:44]
  assign roundAnyRawFNToRecFN_io_in_sign = io_in[63]; // @[INToRecFN.scala 69:44]
  assign roundAnyRawFNToRecFN_io_in_sExp = {1'b0,$signed(_T_140)}; // @[INToRecFN.scala 69:44]
  assign roundAnyRawFNToRecFN_io_in_sig = {{1'd0}, _T_134[63:0]}; // @[INToRecFN.scala 69:44]
  assign roundAnyRawFNToRecFN_io_roundingMode = io_roundingMode; // @[INToRecFN.scala 70:44]
endmodule
module ValExec_I64ToRecF32(
  input         clock,
  input         reset,
  input  [63:0] io_in,
  input  [2:0]  io_roundingMode,
  input         io_detectTininess,
  input  [31:0] io_expected_out,
  input  [4:0]  io_expected_exceptionFlags,
  output [32:0] io_expected_recOut,
  output [32:0] io_actual_out,
  output [4:0]  io_actual_exceptionFlags,
  output        io_check,
  output        io_pass
);
  wire [63:0] iNToRecFN_io_in; // @[ValExec_INToRecFN.scala 114:27]
  wire [2:0] iNToRecFN_io_roundingMode; // @[ValExec_INToRecFN.scala 114:27]
  wire [32:0] iNToRecFN_io_out; // @[ValExec_INToRecFN.scala 114:27]
  wire [4:0] iNToRecFN_io_exceptionFlags; // @[ValExec_INToRecFN.scala 114:27]
  wire  _T_3; // @[rawFloatFromFN.scala 50:34]
  wire  _T_4; // @[rawFloatFromFN.scala 51:38]
  wire [4:0] _T_28; // @[Mux.scala 47:69]
  wire [4:0] _T_29; // @[Mux.scala 47:69]
  wire [4:0] _T_30; // @[Mux.scala 47:69]
  wire [4:0] _T_31; // @[Mux.scala 47:69]
  wire [4:0] _T_32; // @[Mux.scala 47:69]
  wire [4:0] _T_33; // @[Mux.scala 47:69]
  wire [4:0] _T_34; // @[Mux.scala 47:69]
  wire [4:0] _T_35; // @[Mux.scala 47:69]
  wire [4:0] _T_36; // @[Mux.scala 47:69]
  wire [4:0] _T_37; // @[Mux.scala 47:69]
  wire [4:0] _T_38; // @[Mux.scala 47:69]
  wire [4:0] _T_39; // @[Mux.scala 47:69]
  wire [4:0] _T_40; // @[Mux.scala 47:69]
  wire [4:0] _T_41; // @[Mux.scala 47:69]
  wire [4:0] _T_42; // @[Mux.scala 47:69]
  wire [4:0] _T_43; // @[Mux.scala 47:69]
  wire [4:0] _T_44; // @[Mux.scala 47:69]
  wire [4:0] _T_45; // @[Mux.scala 47:69]
  wire [4:0] _T_46; // @[Mux.scala 47:69]
  wire [4:0] _T_47; // @[Mux.scala 47:69]
  wire [4:0] _T_48; // @[Mux.scala 47:69]
  wire [4:0] _T_49; // @[Mux.scala 47:69]
  wire [53:0] _GEN_0; // @[rawFloatFromFN.scala 54:36]
  wire [53:0] _T_50; // @[rawFloatFromFN.scala 54:36]
  wire [22:0] _T_52; // @[rawFloatFromFN.scala 54:64]
  wire [8:0] _GEN_1; // @[rawFloatFromFN.scala 57:26]
  wire [8:0] _T_53; // @[rawFloatFromFN.scala 57:26]
  wire [8:0] _T_54; // @[rawFloatFromFN.scala 56:16]
  wire [1:0] _T_55; // @[rawFloatFromFN.scala 60:27]
  wire [7:0] _GEN_2; // @[rawFloatFromFN.scala 60:22]
  wire [7:0] _T_56; // @[rawFloatFromFN.scala 60:22]
  wire [8:0] _GEN_3; // @[rawFloatFromFN.scala 59:15]
  wire [8:0] _T_58; // @[rawFloatFromFN.scala 59:15]
  wire  _T_59; // @[rawFloatFromFN.scala 62:34]
  wire  _T_61; // @[rawFloatFromFN.scala 63:62]
  wire  _T_64; // @[rawFloatFromFN.scala 66:33]
  wire [9:0] _T_67; // @[rawFloatFromFN.scala 70:48]
  wire [22:0] _T_69; // @[rawFloatFromFN.scala 72:42]
  wire [24:0] _T_71; // @[Cat.scala 29:58]
  wire [2:0] _T_73; // @[recFNFromFN.scala 48:16]
  wire [2:0] _GEN_4; // @[recFNFromFN.scala 48:79]
  wire [2:0] _T_75; // @[recFNFromFN.scala 48:79]
  wire [28:0] _T_78; // @[Cat.scala 29:58]
  wire [3:0] _T_79; // @[Cat.scala 29:58]
  wire  _T_84; // @[tests.scala 48:26]
  wire  _T_86; // @[tests.scala 48:55]
  wire  _T_87; // @[tests.scala 48:39]
  wire  _T_88; // @[tests.scala 49:20]
  wire  _T_91; // @[tests.scala 49:54]
  wire  _T_92; // @[tests.scala 49:31]
  wire  _T_94; // @[tests.scala 50:30]
  wire  _T_96; // @[tests.scala 50:66]
  wire  _T_97; // @[tests.scala 50:16]
  wire  _T_98; // @[tests.scala 48:12]
  wire  _T_99; // @[ValExec_INToRecFN.scala 128:35]
  INToRecFN iNToRecFN ( // @[ValExec_INToRecFN.scala 114:27]
    .io_in(iNToRecFN_io_in),
    .io_roundingMode(iNToRecFN_io_roundingMode),
    .io_out(iNToRecFN_io_out),
    .io_exceptionFlags(iNToRecFN_io_exceptionFlags)
  );
  assign _T_3 = io_expected_out[30:23] == 8'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_4 = io_expected_out[22:0] == 23'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_28 = io_expected_out[1] ? 5'h15 : 5'h16; // @[Mux.scala 47:69]
  assign _T_29 = io_expected_out[2] ? 5'h14 : _T_28; // @[Mux.scala 47:69]
  assign _T_30 = io_expected_out[3] ? 5'h13 : _T_29; // @[Mux.scala 47:69]
  assign _T_31 = io_expected_out[4] ? 5'h12 : _T_30; // @[Mux.scala 47:69]
  assign _T_32 = io_expected_out[5] ? 5'h11 : _T_31; // @[Mux.scala 47:69]
  assign _T_33 = io_expected_out[6] ? 5'h10 : _T_32; // @[Mux.scala 47:69]
  assign _T_34 = io_expected_out[7] ? 5'hf : _T_33; // @[Mux.scala 47:69]
  assign _T_35 = io_expected_out[8] ? 5'he : _T_34; // @[Mux.scala 47:69]
  assign _T_36 = io_expected_out[9] ? 5'hd : _T_35; // @[Mux.scala 47:69]
  assign _T_37 = io_expected_out[10] ? 5'hc : _T_36; // @[Mux.scala 47:69]
  assign _T_38 = io_expected_out[11] ? 5'hb : _T_37; // @[Mux.scala 47:69]
  assign _T_39 = io_expected_out[12] ? 5'ha : _T_38; // @[Mux.scala 47:69]
  assign _T_40 = io_expected_out[13] ? 5'h9 : _T_39; // @[Mux.scala 47:69]
  assign _T_41 = io_expected_out[14] ? 5'h8 : _T_40; // @[Mux.scala 47:69]
  assign _T_42 = io_expected_out[15] ? 5'h7 : _T_41; // @[Mux.scala 47:69]
  assign _T_43 = io_expected_out[16] ? 5'h6 : _T_42; // @[Mux.scala 47:69]
  assign _T_44 = io_expected_out[17] ? 5'h5 : _T_43; // @[Mux.scala 47:69]
  assign _T_45 = io_expected_out[18] ? 5'h4 : _T_44; // @[Mux.scala 47:69]
  assign _T_46 = io_expected_out[19] ? 5'h3 : _T_45; // @[Mux.scala 47:69]
  assign _T_47 = io_expected_out[20] ? 5'h2 : _T_46; // @[Mux.scala 47:69]
  assign _T_48 = io_expected_out[21] ? 5'h1 : _T_47; // @[Mux.scala 47:69]
  assign _T_49 = io_expected_out[22] ? 5'h0 : _T_48; // @[Mux.scala 47:69]
  assign _GEN_0 = {{31'd0}, io_expected_out[22:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_50 = _GEN_0 << _T_49; // @[rawFloatFromFN.scala 54:36]
  assign _T_52 = {_T_50[21:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_1 = {{4'd0}, _T_49}; // @[rawFloatFromFN.scala 57:26]
  assign _T_53 = _GEN_1 ^ 9'h1ff; // @[rawFloatFromFN.scala 57:26]
  assign _T_54 = _T_3 ? _T_53 : {{1'd0}, io_expected_out[30:23]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_55 = _T_3 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_2 = {{6'd0}, _T_55}; // @[rawFloatFromFN.scala 60:22]
  assign _T_56 = 8'h80 | _GEN_2; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_3 = {{1'd0}, _T_56}; // @[rawFloatFromFN.scala 59:15]
  assign _T_58 = _T_54 + _GEN_3; // @[rawFloatFromFN.scala 59:15]
  assign _T_59 = _T_3 & _T_4; // @[rawFloatFromFN.scala 62:34]
  assign _T_61 = _T_58[8:7] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_64 = _T_61 & ~_T_4; // @[rawFloatFromFN.scala 66:33]
  assign _T_67 = {1'b0,$signed(_T_58)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_69 = _T_3 ? _T_52 : io_expected_out[22:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_71 = {1'h0,~_T_59,_T_69}; // @[Cat.scala 29:58]
  assign _T_73 = _T_59 ? 3'h0 : _T_67[8:6]; // @[recFNFromFN.scala 48:16]
  assign _GEN_4 = {{2'd0}, _T_64}; // @[recFNFromFN.scala 48:79]
  assign _T_75 = _T_73 | _GEN_4; // @[recFNFromFN.scala 48:79]
  assign _T_78 = {_T_67[5:0],_T_71[22:0]}; // @[Cat.scala 29:58]
  assign _T_79 = {io_expected_out[31],_T_75}; // @[Cat.scala 29:58]
  assign _T_84 = io_actual_out[31:29] == 3'h0; // @[tests.scala 48:26]
  assign _T_86 = io_actual_out[31:29] == 3'h7; // @[tests.scala 48:55]
  assign _T_87 = _T_84 | _T_86; // @[tests.scala 48:39]
  assign _T_88 = io_actual_out[32:29] == io_expected_recOut[32:29]; // @[tests.scala 49:20]
  assign _T_91 = io_actual_out[22:0] == io_expected_recOut[22:0]; // @[tests.scala 49:54]
  assign _T_92 = _T_88 & _T_91; // @[tests.scala 49:31]
  assign _T_94 = io_actual_out[31:29] == 3'h6; // @[tests.scala 50:30]
  assign _T_96 = io_actual_out == io_expected_recOut; // @[tests.scala 50:66]
  assign _T_97 = _T_94 ? _T_88 : _T_96; // @[tests.scala 50:16]
  assign _T_98 = _T_87 ? _T_92 : _T_97; // @[tests.scala 48:12]
  assign _T_99 = io_actual_exceptionFlags == io_expected_exceptionFlags; // @[ValExec_INToRecFN.scala 128:35]
  assign io_expected_recOut = {_T_79,_T_78}; // @[ValExec_INToRecFN.scala 120:24]
  assign io_actual_out = iNToRecFN_io_out; // @[ValExec_INToRecFN.scala 122:19]
  assign io_actual_exceptionFlags = iNToRecFN_io_exceptionFlags; // @[ValExec_INToRecFN.scala 123:30]
  assign io_check = 1'h1; // @[ValExec_INToRecFN.scala 125:14]
  assign io_pass = _T_98 & _T_99; // @[ValExec_INToRecFN.scala 126:13]
  assign iNToRecFN_io_in = io_in; // @[ValExec_INToRecFN.scala 116:21]
  assign iNToRecFN_io_roundingMode = io_roundingMode; // @[ValExec_INToRecFN.scala 117:33]
endmodule
