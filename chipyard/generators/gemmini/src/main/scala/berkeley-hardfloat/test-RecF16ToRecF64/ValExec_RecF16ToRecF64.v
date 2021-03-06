module RoundAnyRawFNToRecFN(
  input         io_invalidExc,
  input         io_in_isNaN,
  input         io_in_isInf,
  input         io_in_isZero,
  input         io_in_sign,
  input  [6:0]  io_in_sExp,
  input  [11:0] io_in_sig,
  output [64:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire [11:0] _GEN_0; // @[RoundAnyRawFNToRecFN.scala 102:25]
  wire [12:0] _T_3; // @[RoundAnyRawFNToRecFN.scala 102:25]
  wire [12:0] sAdjustedExp; // @[RoundAnyRawFNToRecFN.scala 104:31]
  wire [55:0] adjustedSig; // @[RoundAnyRawFNToRecFN.scala 112:22]
  wire [12:0] _T_6; // @[RoundAnyRawFNToRecFN.scala 134:55]
  wire [11:0] common_expOut; // @[RoundAnyRawFNToRecFN.scala 134:55]
  wire [51:0] common_fractOut; // @[RoundAnyRawFNToRecFN.scala 138:28]
  wire  isNaNOut; // @[RoundAnyRawFNToRecFN.scala 233:34]
  wire  signOut; // @[RoundAnyRawFNToRecFN.scala 248:22]
  wire [11:0] _T_22; // @[RoundAnyRawFNToRecFN.scala 251:18]
  wire [11:0] _T_24; // @[RoundAnyRawFNToRecFN.scala 250:24]
  wire [11:0] _T_32; // @[RoundAnyRawFNToRecFN.scala 263:18]
  wire [11:0] _T_34; // @[RoundAnyRawFNToRecFN.scala 262:17]
  wire [11:0] _T_39; // @[RoundAnyRawFNToRecFN.scala 275:16]
  wire [11:0] _T_40; // @[RoundAnyRawFNToRecFN.scala 274:15]
  wire [11:0] _T_41; // @[RoundAnyRawFNToRecFN.scala 276:16]
  wire [11:0] expOut; // @[RoundAnyRawFNToRecFN.scala 275:77]
  wire  _T_42; // @[RoundAnyRawFNToRecFN.scala 278:22]
  wire [51:0] _T_44; // @[RoundAnyRawFNToRecFN.scala 279:16]
  wire [51:0] fractOut; // @[RoundAnyRawFNToRecFN.scala 278:12]
  wire [12:0] _T_48; // @[Cat.scala 29:58]
  wire [2:0] _T_52; // @[Cat.scala 29:58]
  assign _GEN_0 = {{5{io_in_sExp[6]}},io_in_sExp}; // @[RoundAnyRawFNToRecFN.scala 102:25]
  assign _T_3 = $signed(_GEN_0) + 12'sh7e0; // @[RoundAnyRawFNToRecFN.scala 102:25]
  assign sAdjustedExp = {1'b0,$signed(_T_3[11:0])}; // @[RoundAnyRawFNToRecFN.scala 104:31]
  assign adjustedSig = {io_in_sig, 44'h0}; // @[RoundAnyRawFNToRecFN.scala 112:22]
  assign _T_6 = {{1'd0}, sAdjustedExp[11:0]}; // @[RoundAnyRawFNToRecFN.scala 134:55]
  assign common_expOut = _T_6[11:0]; // @[RoundAnyRawFNToRecFN.scala 134:55]
  assign common_fractOut = adjustedSig[53:2]; // @[RoundAnyRawFNToRecFN.scala 138:28]
  assign isNaNOut = io_invalidExc | io_in_isNaN; // @[RoundAnyRawFNToRecFN.scala 233:34]
  assign signOut = isNaNOut ? 1'h0 : io_in_sign; // @[RoundAnyRawFNToRecFN.scala 248:22]
  assign _T_22 = io_in_isZero ? 12'he00 : 12'h0; // @[RoundAnyRawFNToRecFN.scala 251:18]
  assign _T_24 = common_expOut & ~_T_22; // @[RoundAnyRawFNToRecFN.scala 250:24]
  assign _T_32 = io_in_isInf ? 12'h200 : 12'h0; // @[RoundAnyRawFNToRecFN.scala 263:18]
  assign _T_34 = _T_24 & ~_T_32; // @[RoundAnyRawFNToRecFN.scala 262:17]
  assign _T_39 = io_in_isInf ? 12'hc00 : 12'h0; // @[RoundAnyRawFNToRecFN.scala 275:16]
  assign _T_40 = _T_34 | _T_39; // @[RoundAnyRawFNToRecFN.scala 274:15]
  assign _T_41 = isNaNOut ? 12'he00 : 12'h0; // @[RoundAnyRawFNToRecFN.scala 276:16]
  assign expOut = _T_40 | _T_41; // @[RoundAnyRawFNToRecFN.scala 275:77]
  assign _T_42 = isNaNOut | io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 278:22]
  assign _T_44 = isNaNOut ? 52'h8000000000000 : 52'h0; // @[RoundAnyRawFNToRecFN.scala 279:16]
  assign fractOut = _T_42 ? _T_44 : common_fractOut; // @[RoundAnyRawFNToRecFN.scala 278:12]
  assign _T_48 = {signOut,expOut}; // @[Cat.scala 29:58]
  assign _T_52 = {io_invalidExc,1'h0,1'h0}; // @[Cat.scala 29:58]
  assign io_out = {_T_48,fractOut}; // @[RoundAnyRawFNToRecFN.scala 284:12]
  assign io_exceptionFlags = {_T_52,2'h0}; // @[RoundAnyRawFNToRecFN.scala 285:23]
endmodule
module RecFNToRecFN(
  input  [16:0] io_in,
  output [64:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  RoundAnyRawFNToRecFN_io_invalidExc; // @[RecFNToRecFN.scala 72:19]
  wire  RoundAnyRawFNToRecFN_io_in_isNaN; // @[RecFNToRecFN.scala 72:19]
  wire  RoundAnyRawFNToRecFN_io_in_isInf; // @[RecFNToRecFN.scala 72:19]
  wire  RoundAnyRawFNToRecFN_io_in_isZero; // @[RecFNToRecFN.scala 72:19]
  wire  RoundAnyRawFNToRecFN_io_in_sign; // @[RecFNToRecFN.scala 72:19]
  wire [6:0] RoundAnyRawFNToRecFN_io_in_sExp; // @[RecFNToRecFN.scala 72:19]
  wire [11:0] RoundAnyRawFNToRecFN_io_in_sig; // @[RecFNToRecFN.scala 72:19]
  wire [64:0] RoundAnyRawFNToRecFN_io_out; // @[RecFNToRecFN.scala 72:19]
  wire [4:0] RoundAnyRawFNToRecFN_io_exceptionFlags; // @[RecFNToRecFN.scala 72:19]
  wire  rawIn_isZero; // @[rawFloatFromRecFN.scala 51:54]
  wire  _T_4; // @[rawFloatFromRecFN.scala 52:54]
  wire  rawIn_isNaN; // @[rawFloatFromRecFN.scala 55:33]
  wire [1:0] _T_14; // @[Cat.scala 29:58]
  wire [11:0] rawIn_sig; // @[Cat.scala 29:58]
  RoundAnyRawFNToRecFN RoundAnyRawFNToRecFN ( // @[RecFNToRecFN.scala 72:19]
    .io_invalidExc(RoundAnyRawFNToRecFN_io_invalidExc),
    .io_in_isNaN(RoundAnyRawFNToRecFN_io_in_isNaN),
    .io_in_isInf(RoundAnyRawFNToRecFN_io_in_isInf),
    .io_in_isZero(RoundAnyRawFNToRecFN_io_in_isZero),
    .io_in_sign(RoundAnyRawFNToRecFN_io_in_sign),
    .io_in_sExp(RoundAnyRawFNToRecFN_io_in_sExp),
    .io_in_sig(RoundAnyRawFNToRecFN_io_in_sig),
    .io_out(RoundAnyRawFNToRecFN_io_out),
    .io_exceptionFlags(RoundAnyRawFNToRecFN_io_exceptionFlags)
  );
  assign rawIn_isZero = io_in[15:13] == 3'h0; // @[rawFloatFromRecFN.scala 51:54]
  assign _T_4 = io_in[15:14] == 2'h3; // @[rawFloatFromRecFN.scala 52:54]
  assign rawIn_isNaN = _T_4 & io_in[13]; // @[rawFloatFromRecFN.scala 55:33]
  assign _T_14 = {1'h0,~rawIn_isZero}; // @[Cat.scala 29:58]
  assign rawIn_sig = {1'h0,~rawIn_isZero,io_in[9:0]}; // @[Cat.scala 29:58]
  assign io_out = RoundAnyRawFNToRecFN_io_out; // @[RecFNToRecFN.scala 85:27]
  assign io_exceptionFlags = RoundAnyRawFNToRecFN_io_exceptionFlags; // @[RecFNToRecFN.scala 86:27]
  assign RoundAnyRawFNToRecFN_io_invalidExc = rawIn_isNaN & ~rawIn_sig[9]; // @[RecFNToRecFN.scala 80:48]
  assign RoundAnyRawFNToRecFN_io_in_isNaN = _T_4 & io_in[13]; // @[RecFNToRecFN.scala 82:48]
  assign RoundAnyRawFNToRecFN_io_in_isInf = _T_4 & ~io_in[13]; // @[RecFNToRecFN.scala 82:48]
  assign RoundAnyRawFNToRecFN_io_in_isZero = io_in[15:13] == 3'h0; // @[RecFNToRecFN.scala 82:48]
  assign RoundAnyRawFNToRecFN_io_in_sign = io_in[16]; // @[RecFNToRecFN.scala 82:48]
  assign RoundAnyRawFNToRecFN_io_in_sExp = {1'b0,$signed(io_in[15:10])}; // @[RecFNToRecFN.scala 82:48]
  assign RoundAnyRawFNToRecFN_io_in_sig = {_T_14,io_in[9:0]}; // @[RecFNToRecFN.scala 82:48]
endmodule
module ValExec_RecF16ToRecF64(
  input         clock,
  input         reset,
  input  [15:0] io_in,
  input  [2:0]  io_roundingMode,
  input         io_detectTininess,
  input  [63:0] io_expected_out,
  input  [4:0]  io_expected_exceptionFlags,
  output [64:0] io_expected_recOut,
  output [64:0] io_actual_out,
  output [4:0]  io_actual_exceptionFlags,
  output        io_check,
  output        io_pass
);
  wire [16:0] recFNToRecFN_io_in; // @[ValExec_RecFNToRecFN.scala 68:15]
  wire [64:0] recFNToRecFN_io_out; // @[ValExec_RecFNToRecFN.scala 68:15]
  wire [4:0] recFNToRecFN_io_exceptionFlags; // @[ValExec_RecFNToRecFN.scala 68:15]
  wire  _T_3; // @[rawFloatFromFN.scala 50:34]
  wire  _T_4; // @[rawFloatFromFN.scala 51:38]
  wire [3:0] _T_15; // @[Mux.scala 47:69]
  wire [3:0] _T_16; // @[Mux.scala 47:69]
  wire [3:0] _T_17; // @[Mux.scala 47:69]
  wire [3:0] _T_18; // @[Mux.scala 47:69]
  wire [3:0] _T_19; // @[Mux.scala 47:69]
  wire [3:0] _T_20; // @[Mux.scala 47:69]
  wire [3:0] _T_21; // @[Mux.scala 47:69]
  wire [3:0] _T_22; // @[Mux.scala 47:69]
  wire [3:0] _T_23; // @[Mux.scala 47:69]
  wire [24:0] _GEN_0; // @[rawFloatFromFN.scala 54:36]
  wire [24:0] _T_24; // @[rawFloatFromFN.scala 54:36]
  wire [9:0] _T_26; // @[rawFloatFromFN.scala 54:64]
  wire [5:0] _GEN_1; // @[rawFloatFromFN.scala 57:26]
  wire [5:0] _T_27; // @[rawFloatFromFN.scala 57:26]
  wire [5:0] _T_28; // @[rawFloatFromFN.scala 56:16]
  wire [1:0] _T_29; // @[rawFloatFromFN.scala 60:27]
  wire [4:0] _GEN_2; // @[rawFloatFromFN.scala 60:22]
  wire [4:0] _T_30; // @[rawFloatFromFN.scala 60:22]
  wire [5:0] _GEN_3; // @[rawFloatFromFN.scala 59:15]
  wire [5:0] _T_32; // @[rawFloatFromFN.scala 59:15]
  wire  _T_33; // @[rawFloatFromFN.scala 62:34]
  wire  _T_35; // @[rawFloatFromFN.scala 63:62]
  wire  _T_38; // @[rawFloatFromFN.scala 66:33]
  wire [6:0] _T_41; // @[rawFloatFromFN.scala 70:48]
  wire [9:0] _T_43; // @[rawFloatFromFN.scala 72:42]
  wire [11:0] _T_45; // @[Cat.scala 29:58]
  wire [2:0] _T_47; // @[recFNFromFN.scala 48:16]
  wire [2:0] _GEN_4; // @[recFNFromFN.scala 48:79]
  wire [2:0] _T_49; // @[recFNFromFN.scala 48:79]
  wire [12:0] _T_52; // @[Cat.scala 29:58]
  wire [3:0] _T_53; // @[Cat.scala 29:58]
  wire  _T_58; // @[rawFloatFromFN.scala 50:34]
  wire  _T_59; // @[rawFloatFromFN.scala 51:38]
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
  wire [5:0] _T_134; // @[Mux.scala 47:69]
  wire [5:0] _T_135; // @[Mux.scala 47:69]
  wire [5:0] _T_136; // @[Mux.scala 47:69]
  wire [5:0] _T_137; // @[Mux.scala 47:69]
  wire [5:0] _T_138; // @[Mux.scala 47:69]
  wire [5:0] _T_139; // @[Mux.scala 47:69]
  wire [5:0] _T_140; // @[Mux.scala 47:69]
  wire [5:0] _T_141; // @[Mux.scala 47:69]
  wire [5:0] _T_142; // @[Mux.scala 47:69]
  wire [5:0] _T_143; // @[Mux.scala 47:69]
  wire [5:0] _T_144; // @[Mux.scala 47:69]
  wire [5:0] _T_145; // @[Mux.scala 47:69]
  wire [5:0] _T_146; // @[Mux.scala 47:69]
  wire [5:0] _T_147; // @[Mux.scala 47:69]
  wire [5:0] _T_148; // @[Mux.scala 47:69]
  wire [5:0] _T_149; // @[Mux.scala 47:69]
  wire [5:0] _T_150; // @[Mux.scala 47:69]
  wire [5:0] _T_151; // @[Mux.scala 47:69]
  wire [5:0] _T_152; // @[Mux.scala 47:69]
  wire [5:0] _T_153; // @[Mux.scala 47:69]
  wire [5:0] _T_154; // @[Mux.scala 47:69]
  wire [5:0] _T_155; // @[Mux.scala 47:69]
  wire [5:0] _T_156; // @[Mux.scala 47:69]
  wire [5:0] _T_157; // @[Mux.scala 47:69]
  wire [5:0] _T_158; // @[Mux.scala 47:69]
  wire [5:0] _T_159; // @[Mux.scala 47:69]
  wire [5:0] _T_160; // @[Mux.scala 47:69]
  wire [5:0] _T_161; // @[Mux.scala 47:69]
  wire [5:0] _T_162; // @[Mux.scala 47:69]
  wire [114:0] _GEN_5; // @[rawFloatFromFN.scala 54:36]
  wire [114:0] _T_163; // @[rawFloatFromFN.scala 54:36]
  wire [51:0] _T_165; // @[rawFloatFromFN.scala 54:64]
  wire [11:0] _GEN_6; // @[rawFloatFromFN.scala 57:26]
  wire [11:0] _T_166; // @[rawFloatFromFN.scala 57:26]
  wire [11:0] _T_167; // @[rawFloatFromFN.scala 56:16]
  wire [1:0] _T_168; // @[rawFloatFromFN.scala 60:27]
  wire [10:0] _GEN_7; // @[rawFloatFromFN.scala 60:22]
  wire [10:0] _T_169; // @[rawFloatFromFN.scala 60:22]
  wire [11:0] _GEN_8; // @[rawFloatFromFN.scala 59:15]
  wire [11:0] _T_171; // @[rawFloatFromFN.scala 59:15]
  wire  _T_172; // @[rawFloatFromFN.scala 62:34]
  wire  _T_174; // @[rawFloatFromFN.scala 63:62]
  wire  _T_177; // @[rawFloatFromFN.scala 66:33]
  wire [12:0] _T_180; // @[rawFloatFromFN.scala 70:48]
  wire [51:0] _T_182; // @[rawFloatFromFN.scala 72:42]
  wire [53:0] _T_184; // @[Cat.scala 29:58]
  wire [2:0] _T_186; // @[recFNFromFN.scala 48:16]
  wire [2:0] _GEN_9; // @[recFNFromFN.scala 48:79]
  wire [2:0] _T_188; // @[recFNFromFN.scala 48:79]
  wire [60:0] _T_191; // @[Cat.scala 29:58]
  wire [3:0] _T_192; // @[Cat.scala 29:58]
  wire  _T_197; // @[tests.scala 48:26]
  wire  _T_199; // @[tests.scala 48:55]
  wire  _T_200; // @[tests.scala 48:39]
  wire  _T_201; // @[tests.scala 49:20]
  wire  _T_204; // @[tests.scala 49:54]
  wire  _T_205; // @[tests.scala 49:31]
  wire  _T_207; // @[tests.scala 50:30]
  wire  _T_209; // @[tests.scala 50:66]
  wire  _T_210; // @[tests.scala 50:16]
  wire  _T_211; // @[tests.scala 48:12]
  wire  _T_212; // @[ValExec_RecFNToRecFN.scala 84:35]
  RecFNToRecFN recFNToRecFN ( // @[ValExec_RecFNToRecFN.scala 68:15]
    .io_in(recFNToRecFN_io_in),
    .io_out(recFNToRecFN_io_out),
    .io_exceptionFlags(recFNToRecFN_io_exceptionFlags)
  );
  assign _T_3 = io_in[14:10] == 5'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_4 = io_in[9:0] == 10'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_15 = io_in[1] ? 4'h8 : 4'h9; // @[Mux.scala 47:69]
  assign _T_16 = io_in[2] ? 4'h7 : _T_15; // @[Mux.scala 47:69]
  assign _T_17 = io_in[3] ? 4'h6 : _T_16; // @[Mux.scala 47:69]
  assign _T_18 = io_in[4] ? 4'h5 : _T_17; // @[Mux.scala 47:69]
  assign _T_19 = io_in[5] ? 4'h4 : _T_18; // @[Mux.scala 47:69]
  assign _T_20 = io_in[6] ? 4'h3 : _T_19; // @[Mux.scala 47:69]
  assign _T_21 = io_in[7] ? 4'h2 : _T_20; // @[Mux.scala 47:69]
  assign _T_22 = io_in[8] ? 4'h1 : _T_21; // @[Mux.scala 47:69]
  assign _T_23 = io_in[9] ? 4'h0 : _T_22; // @[Mux.scala 47:69]
  assign _GEN_0 = {{15'd0}, io_in[9:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_24 = _GEN_0 << _T_23; // @[rawFloatFromFN.scala 54:36]
  assign _T_26 = {_T_24[8:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_1 = {{2'd0}, _T_23}; // @[rawFloatFromFN.scala 57:26]
  assign _T_27 = _GEN_1 ^ 6'h3f; // @[rawFloatFromFN.scala 57:26]
  assign _T_28 = _T_3 ? _T_27 : {{1'd0}, io_in[14:10]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_29 = _T_3 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_2 = {{3'd0}, _T_29}; // @[rawFloatFromFN.scala 60:22]
  assign _T_30 = 5'h10 | _GEN_2; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_3 = {{1'd0}, _T_30}; // @[rawFloatFromFN.scala 59:15]
  assign _T_32 = _T_28 + _GEN_3; // @[rawFloatFromFN.scala 59:15]
  assign _T_33 = _T_3 & _T_4; // @[rawFloatFromFN.scala 62:34]
  assign _T_35 = _T_32[5:4] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_38 = _T_35 & ~_T_4; // @[rawFloatFromFN.scala 66:33]
  assign _T_41 = {1'b0,$signed(_T_32)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_43 = _T_3 ? _T_26 : io_in[9:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_45 = {1'h0,~_T_33,_T_43}; // @[Cat.scala 29:58]
  assign _T_47 = _T_33 ? 3'h0 : _T_41[5:3]; // @[recFNFromFN.scala 48:16]
  assign _GEN_4 = {{2'd0}, _T_38}; // @[recFNFromFN.scala 48:79]
  assign _T_49 = _T_47 | _GEN_4; // @[recFNFromFN.scala 48:79]
  assign _T_52 = {_T_41[2:0],_T_45[9:0]}; // @[Cat.scala 29:58]
  assign _T_53 = {io_in[15],_T_49}; // @[Cat.scala 29:58]
  assign _T_58 = io_expected_out[62:52] == 11'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_59 = io_expected_out[51:0] == 52'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_112 = io_expected_out[1] ? 6'h32 : 6'h33; // @[Mux.scala 47:69]
  assign _T_113 = io_expected_out[2] ? 6'h31 : _T_112; // @[Mux.scala 47:69]
  assign _T_114 = io_expected_out[3] ? 6'h30 : _T_113; // @[Mux.scala 47:69]
  assign _T_115 = io_expected_out[4] ? 6'h2f : _T_114; // @[Mux.scala 47:69]
  assign _T_116 = io_expected_out[5] ? 6'h2e : _T_115; // @[Mux.scala 47:69]
  assign _T_117 = io_expected_out[6] ? 6'h2d : _T_116; // @[Mux.scala 47:69]
  assign _T_118 = io_expected_out[7] ? 6'h2c : _T_117; // @[Mux.scala 47:69]
  assign _T_119 = io_expected_out[8] ? 6'h2b : _T_118; // @[Mux.scala 47:69]
  assign _T_120 = io_expected_out[9] ? 6'h2a : _T_119; // @[Mux.scala 47:69]
  assign _T_121 = io_expected_out[10] ? 6'h29 : _T_120; // @[Mux.scala 47:69]
  assign _T_122 = io_expected_out[11] ? 6'h28 : _T_121; // @[Mux.scala 47:69]
  assign _T_123 = io_expected_out[12] ? 6'h27 : _T_122; // @[Mux.scala 47:69]
  assign _T_124 = io_expected_out[13] ? 6'h26 : _T_123; // @[Mux.scala 47:69]
  assign _T_125 = io_expected_out[14] ? 6'h25 : _T_124; // @[Mux.scala 47:69]
  assign _T_126 = io_expected_out[15] ? 6'h24 : _T_125; // @[Mux.scala 47:69]
  assign _T_127 = io_expected_out[16] ? 6'h23 : _T_126; // @[Mux.scala 47:69]
  assign _T_128 = io_expected_out[17] ? 6'h22 : _T_127; // @[Mux.scala 47:69]
  assign _T_129 = io_expected_out[18] ? 6'h21 : _T_128; // @[Mux.scala 47:69]
  assign _T_130 = io_expected_out[19] ? 6'h20 : _T_129; // @[Mux.scala 47:69]
  assign _T_131 = io_expected_out[20] ? 6'h1f : _T_130; // @[Mux.scala 47:69]
  assign _T_132 = io_expected_out[21] ? 6'h1e : _T_131; // @[Mux.scala 47:69]
  assign _T_133 = io_expected_out[22] ? 6'h1d : _T_132; // @[Mux.scala 47:69]
  assign _T_134 = io_expected_out[23] ? 6'h1c : _T_133; // @[Mux.scala 47:69]
  assign _T_135 = io_expected_out[24] ? 6'h1b : _T_134; // @[Mux.scala 47:69]
  assign _T_136 = io_expected_out[25] ? 6'h1a : _T_135; // @[Mux.scala 47:69]
  assign _T_137 = io_expected_out[26] ? 6'h19 : _T_136; // @[Mux.scala 47:69]
  assign _T_138 = io_expected_out[27] ? 6'h18 : _T_137; // @[Mux.scala 47:69]
  assign _T_139 = io_expected_out[28] ? 6'h17 : _T_138; // @[Mux.scala 47:69]
  assign _T_140 = io_expected_out[29] ? 6'h16 : _T_139; // @[Mux.scala 47:69]
  assign _T_141 = io_expected_out[30] ? 6'h15 : _T_140; // @[Mux.scala 47:69]
  assign _T_142 = io_expected_out[31] ? 6'h14 : _T_141; // @[Mux.scala 47:69]
  assign _T_143 = io_expected_out[32] ? 6'h13 : _T_142; // @[Mux.scala 47:69]
  assign _T_144 = io_expected_out[33] ? 6'h12 : _T_143; // @[Mux.scala 47:69]
  assign _T_145 = io_expected_out[34] ? 6'h11 : _T_144; // @[Mux.scala 47:69]
  assign _T_146 = io_expected_out[35] ? 6'h10 : _T_145; // @[Mux.scala 47:69]
  assign _T_147 = io_expected_out[36] ? 6'hf : _T_146; // @[Mux.scala 47:69]
  assign _T_148 = io_expected_out[37] ? 6'he : _T_147; // @[Mux.scala 47:69]
  assign _T_149 = io_expected_out[38] ? 6'hd : _T_148; // @[Mux.scala 47:69]
  assign _T_150 = io_expected_out[39] ? 6'hc : _T_149; // @[Mux.scala 47:69]
  assign _T_151 = io_expected_out[40] ? 6'hb : _T_150; // @[Mux.scala 47:69]
  assign _T_152 = io_expected_out[41] ? 6'ha : _T_151; // @[Mux.scala 47:69]
  assign _T_153 = io_expected_out[42] ? 6'h9 : _T_152; // @[Mux.scala 47:69]
  assign _T_154 = io_expected_out[43] ? 6'h8 : _T_153; // @[Mux.scala 47:69]
  assign _T_155 = io_expected_out[44] ? 6'h7 : _T_154; // @[Mux.scala 47:69]
  assign _T_156 = io_expected_out[45] ? 6'h6 : _T_155; // @[Mux.scala 47:69]
  assign _T_157 = io_expected_out[46] ? 6'h5 : _T_156; // @[Mux.scala 47:69]
  assign _T_158 = io_expected_out[47] ? 6'h4 : _T_157; // @[Mux.scala 47:69]
  assign _T_159 = io_expected_out[48] ? 6'h3 : _T_158; // @[Mux.scala 47:69]
  assign _T_160 = io_expected_out[49] ? 6'h2 : _T_159; // @[Mux.scala 47:69]
  assign _T_161 = io_expected_out[50] ? 6'h1 : _T_160; // @[Mux.scala 47:69]
  assign _T_162 = io_expected_out[51] ? 6'h0 : _T_161; // @[Mux.scala 47:69]
  assign _GEN_5 = {{63'd0}, io_expected_out[51:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_163 = _GEN_5 << _T_162; // @[rawFloatFromFN.scala 54:36]
  assign _T_165 = {_T_163[50:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_6 = {{6'd0}, _T_162}; // @[rawFloatFromFN.scala 57:26]
  assign _T_166 = _GEN_6 ^ 12'hfff; // @[rawFloatFromFN.scala 57:26]
  assign _T_167 = _T_58 ? _T_166 : {{1'd0}, io_expected_out[62:52]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_168 = _T_58 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_7 = {{9'd0}, _T_168}; // @[rawFloatFromFN.scala 60:22]
  assign _T_169 = 11'h400 | _GEN_7; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_8 = {{1'd0}, _T_169}; // @[rawFloatFromFN.scala 59:15]
  assign _T_171 = _T_167 + _GEN_8; // @[rawFloatFromFN.scala 59:15]
  assign _T_172 = _T_58 & _T_59; // @[rawFloatFromFN.scala 62:34]
  assign _T_174 = _T_171[11:10] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_177 = _T_174 & ~_T_59; // @[rawFloatFromFN.scala 66:33]
  assign _T_180 = {1'b0,$signed(_T_171)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_182 = _T_58 ? _T_165 : io_expected_out[51:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_184 = {1'h0,~_T_172,_T_182}; // @[Cat.scala 29:58]
  assign _T_186 = _T_172 ? 3'h0 : _T_180[11:9]; // @[recFNFromFN.scala 48:16]
  assign _GEN_9 = {{2'd0}, _T_177}; // @[recFNFromFN.scala 48:79]
  assign _T_188 = _T_186 | _GEN_9; // @[recFNFromFN.scala 48:79]
  assign _T_191 = {_T_180[8:0],_T_184[51:0]}; // @[Cat.scala 29:58]
  assign _T_192 = {io_expected_out[63],_T_188}; // @[Cat.scala 29:58]
  assign _T_197 = io_actual_out[63:61] == 3'h0; // @[tests.scala 48:26]
  assign _T_199 = io_actual_out[63:61] == 3'h7; // @[tests.scala 48:55]
  assign _T_200 = _T_197 | _T_199; // @[tests.scala 48:39]
  assign _T_201 = io_actual_out[64:61] == io_expected_recOut[64:61]; // @[tests.scala 49:20]
  assign _T_204 = io_actual_out[51:0] == io_expected_recOut[51:0]; // @[tests.scala 49:54]
  assign _T_205 = _T_201 & _T_204; // @[tests.scala 49:31]
  assign _T_207 = io_actual_out[63:61] == 3'h6; // @[tests.scala 50:30]
  assign _T_209 = io_actual_out == io_expected_recOut; // @[tests.scala 50:66]
  assign _T_210 = _T_207 ? _T_201 : _T_209; // @[tests.scala 50:16]
  assign _T_211 = _T_200 ? _T_205 : _T_210; // @[tests.scala 48:12]
  assign _T_212 = io_actual_exceptionFlags == io_expected_exceptionFlags; // @[ValExec_RecFNToRecFN.scala 84:35]
  assign io_expected_recOut = {_T_192,_T_191}; // @[ValExec_RecFNToRecFN.scala 74:24]
  assign io_actual_out = recFNToRecFN_io_out; // @[ValExec_RecFNToRecFN.scala 77:19]
  assign io_actual_exceptionFlags = recFNToRecFN_io_exceptionFlags; // @[ValExec_RecFNToRecFN.scala 78:30]
  assign io_check = 1'h1; // @[ValExec_RecFNToRecFN.scala 80:14]
  assign io_pass = _T_211 & _T_212; // @[ValExec_RecFNToRecFN.scala 81:13]
  assign recFNToRecFN_io_in = {_T_53,_T_52}; // @[ValExec_RecFNToRecFN.scala 70:24]
endmodule
