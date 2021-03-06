module RecFNToIN(
  input  [64:0] io_in,
  input  [2:0]  io_roundingMode,
  output [31:0] io_out,
  output [2:0]  io_intExceptionFlags
);
  wire  rawIn_isZero; // @[rawFloatFromRecFN.scala 51:54]
  wire  _T_4; // @[rawFloatFromRecFN.scala 52:54]
  wire  rawIn_isNaN; // @[rawFloatFromRecFN.scala 55:33]
  wire  rawIn_isInf; // @[rawFloatFromRecFN.scala 56:33]
  wire  rawIn_sign; // @[rawFloatFromRecFN.scala 58:25]
  wire [12:0] rawIn_sExp; // @[rawFloatFromRecFN.scala 59:27]
  wire [53:0] rawIn_sig; // @[Cat.scala 29:58]
  wire  magGeOne; // @[RecFNToIN.scala 58:30]
  wire [10:0] posExp; // @[RecFNToIN.scala 59:28]
  wire  _T_17; // @[RecFNToIN.scala 60:47]
  wire  magJustBelowOne; // @[RecFNToIN.scala 60:37]
  wire  roundingMode_near_even; // @[RecFNToIN.scala 64:53]
  wire  roundingMode_min; // @[RecFNToIN.scala 66:53]
  wire  roundingMode_max; // @[RecFNToIN.scala 67:53]
  wire  roundingMode_near_maxMag; // @[RecFNToIN.scala 68:53]
  wire  roundingMode_odd; // @[RecFNToIN.scala 69:53]
  wire [52:0] _T_19; // @[Cat.scala 29:58]
  wire [4:0] _T_21; // @[RecFNToIN.scala 81:16]
  wire [83:0] _GEN_0; // @[RecFNToIN.scala 80:50]
  wire [83:0] shiftedSig; // @[RecFNToIN.scala 80:50]
  wire  _T_24; // @[RecFNToIN.scala 86:69]
  wire [33:0] alignedSig; // @[Cat.scala 29:58]
  wire [31:0] unroundedInt; // @[RecFNToIN.scala 87:54]
  wire  _T_27; // @[RecFNToIN.scala 89:57]
  wire  common_inexact; // @[RecFNToIN.scala 89:29]
  wire  _T_30; // @[RecFNToIN.scala 91:46]
  wire  _T_32; // @[RecFNToIN.scala 91:71]
  wire  _T_33; // @[RecFNToIN.scala 91:51]
  wire  _T_34; // @[RecFNToIN.scala 91:25]
  wire  _T_37; // @[RecFNToIN.scala 92:26]
  wire  roundIncr_near_even; // @[RecFNToIN.scala 91:78]
  wire  _T_39; // @[RecFNToIN.scala 93:43]
  wire  roundIncr_near_maxMag; // @[RecFNToIN.scala 93:61]
  wire  _T_40; // @[RecFNToIN.scala 95:35]
  wire  _T_41; // @[RecFNToIN.scala 96:35]
  wire  _T_42; // @[RecFNToIN.scala 95:61]
  wire  _T_43; // @[RecFNToIN.scala 97:28]
  wire  _T_44; // @[RecFNToIN.scala 98:26]
  wire  _T_45; // @[RecFNToIN.scala 97:49]
  wire  _T_46; // @[RecFNToIN.scala 96:61]
  wire  _T_48; // @[RecFNToIN.scala 99:43]
  wire  _T_49; // @[RecFNToIN.scala 99:27]
  wire  roundIncr; // @[RecFNToIN.scala 98:46]
  wire [31:0] complUnroundedInt; // @[RecFNToIN.scala 100:32]
  wire  _T_51; // @[RecFNToIN.scala 102:23]
  wire [31:0] _T_53; // @[RecFNToIN.scala 103:31]
  wire [31:0] _T_54; // @[RecFNToIN.scala 102:12]
  wire  _T_55; // @[RecFNToIN.scala 105:31]
  wire [31:0] _GEN_1; // @[RecFNToIN.scala 105:11]
  wire [31:0] roundedInt; // @[RecFNToIN.scala 105:11]
  wire  magGeOne_atOverflowEdge; // @[RecFNToIN.scala 107:43]
  wire  _T_57; // @[RecFNToIN.scala 110:56]
  wire  roundCarryBut2; // @[RecFNToIN.scala 110:61]
  wire  _T_58; // @[RecFNToIN.scala 113:21]
  wire  _T_60; // @[RecFNToIN.scala 117:60]
  wire  _T_61; // @[RecFNToIN.scala 117:64]
  wire  _T_62; // @[RecFNToIN.scala 116:49]
  wire  _T_63; // @[RecFNToIN.scala 119:38]
  wire  _T_64; // @[RecFNToIN.scala 119:62]
  wire  _T_65; // @[RecFNToIN.scala 118:49]
  wire  _T_66; // @[RecFNToIN.scala 115:24]
  wire  _T_72; // @[RecFNToIN.scala 113:40]
  wire  common_overflow; // @[RecFNToIN.scala 112:12]
  wire  invalidExc; // @[RecFNToIN.scala 130:34]
  wire  overflow; // @[RecFNToIN.scala 131:32]
  wire  _T_79; // @[RecFNToIN.scala 132:32]
  wire  inexact; // @[RecFNToIN.scala 132:52]
  wire  excSign; // @[RecFNToIN.scala 134:32]
  wire [31:0] _T_82; // @[RecFNToIN.scala 136:12]
  wire [30:0] _T_84; // @[RecFNToIN.scala 140:12]
  wire [31:0] _GEN_2; // @[RecFNToIN.scala 139:11]
  wire [31:0] excOut; // @[RecFNToIN.scala 139:11]
  wire  _T_85; // @[RecFNToIN.scala 142:30]
  wire [1:0] _T_87; // @[Cat.scala 29:58]
  assign rawIn_isZero = io_in[63:61] == 3'h0; // @[rawFloatFromRecFN.scala 51:54]
  assign _T_4 = io_in[63:62] == 2'h3; // @[rawFloatFromRecFN.scala 52:54]
  assign rawIn_isNaN = _T_4 & io_in[61]; // @[rawFloatFromRecFN.scala 55:33]
  assign rawIn_isInf = _T_4 & ~io_in[61]; // @[rawFloatFromRecFN.scala 56:33]
  assign rawIn_sign = io_in[64]; // @[rawFloatFromRecFN.scala 58:25]
  assign rawIn_sExp = {1'b0,$signed(io_in[63:52])}; // @[rawFloatFromRecFN.scala 59:27]
  assign rawIn_sig = {1'h0,~rawIn_isZero,io_in[51:0]}; // @[Cat.scala 29:58]
  assign magGeOne = rawIn_sExp[11]; // @[RecFNToIN.scala 58:30]
  assign posExp = rawIn_sExp[10:0]; // @[RecFNToIN.scala 59:28]
  assign _T_17 = posExp == 11'h7ff; // @[RecFNToIN.scala 60:47]
  assign magJustBelowOne = ~magGeOne & _T_17; // @[RecFNToIN.scala 60:37]
  assign roundingMode_near_even = io_roundingMode == 3'h0; // @[RecFNToIN.scala 64:53]
  assign roundingMode_min = io_roundingMode == 3'h2; // @[RecFNToIN.scala 66:53]
  assign roundingMode_max = io_roundingMode == 3'h3; // @[RecFNToIN.scala 67:53]
  assign roundingMode_near_maxMag = io_roundingMode == 3'h4; // @[RecFNToIN.scala 68:53]
  assign roundingMode_odd = io_roundingMode == 3'h6; // @[RecFNToIN.scala 69:53]
  assign _T_19 = {magGeOne,rawIn_sig[51:0]}; // @[Cat.scala 29:58]
  assign _T_21 = magGeOne ? rawIn_sExp[4:0] : 5'h0; // @[RecFNToIN.scala 81:16]
  assign _GEN_0 = {{31'd0}, _T_19}; // @[RecFNToIN.scala 80:50]
  assign shiftedSig = _GEN_0 << _T_21; // @[RecFNToIN.scala 80:50]
  assign _T_24 = shiftedSig[50:0] != 51'h0; // @[RecFNToIN.scala 86:69]
  assign alignedSig = {shiftedSig[83:51],_T_24}; // @[Cat.scala 29:58]
  assign unroundedInt = alignedSig[33:2]; // @[RecFNToIN.scala 87:54]
  assign _T_27 = alignedSig[1:0] != 2'h0; // @[RecFNToIN.scala 89:57]
  assign common_inexact = magGeOne ? _T_27 : ~rawIn_isZero; // @[RecFNToIN.scala 89:29]
  assign _T_30 = alignedSig[2:1] == 2'h3; // @[RecFNToIN.scala 91:46]
  assign _T_32 = alignedSig[1:0] == 2'h3; // @[RecFNToIN.scala 91:71]
  assign _T_33 = _T_30 | _T_32; // @[RecFNToIN.scala 91:51]
  assign _T_34 = magGeOne & _T_33; // @[RecFNToIN.scala 91:25]
  assign _T_37 = magJustBelowOne & _T_27; // @[RecFNToIN.scala 92:26]
  assign roundIncr_near_even = _T_34 | _T_37; // @[RecFNToIN.scala 91:78]
  assign _T_39 = magGeOne & alignedSig[1]; // @[RecFNToIN.scala 93:43]
  assign roundIncr_near_maxMag = _T_39 | magJustBelowOne; // @[RecFNToIN.scala 93:61]
  assign _T_40 = roundingMode_near_even & roundIncr_near_even; // @[RecFNToIN.scala 95:35]
  assign _T_41 = roundingMode_near_maxMag & roundIncr_near_maxMag; // @[RecFNToIN.scala 96:35]
  assign _T_42 = _T_40 | _T_41; // @[RecFNToIN.scala 95:61]
  assign _T_43 = roundingMode_min | roundingMode_odd; // @[RecFNToIN.scala 97:28]
  assign _T_44 = rawIn_sign & common_inexact; // @[RecFNToIN.scala 98:26]
  assign _T_45 = _T_43 & _T_44; // @[RecFNToIN.scala 97:49]
  assign _T_46 = _T_42 | _T_45; // @[RecFNToIN.scala 96:61]
  assign _T_48 = ~rawIn_sign & common_inexact; // @[RecFNToIN.scala 99:43]
  assign _T_49 = roundingMode_max & _T_48; // @[RecFNToIN.scala 99:27]
  assign roundIncr = _T_46 | _T_49; // @[RecFNToIN.scala 98:46]
  assign complUnroundedInt = rawIn_sign ? ~unroundedInt : unroundedInt; // @[RecFNToIN.scala 100:32]
  assign _T_51 = roundIncr ^ rawIn_sign; // @[RecFNToIN.scala 102:23]
  assign _T_53 = complUnroundedInt + 32'h1; // @[RecFNToIN.scala 103:31]
  assign _T_54 = _T_51 ? _T_53 : complUnroundedInt; // @[RecFNToIN.scala 102:12]
  assign _T_55 = roundingMode_odd & common_inexact; // @[RecFNToIN.scala 105:31]
  assign _GEN_1 = {{31'd0}, _T_55}; // @[RecFNToIN.scala 105:11]
  assign roundedInt = _T_54 | _GEN_1; // @[RecFNToIN.scala 105:11]
  assign magGeOne_atOverflowEdge = posExp == 11'h1f; // @[RecFNToIN.scala 107:43]
  assign _T_57 = unroundedInt[29:0] == 30'h3fffffff; // @[RecFNToIN.scala 110:56]
  assign roundCarryBut2 = _T_57 & roundIncr; // @[RecFNToIN.scala 110:61]
  assign _T_58 = posExp >= 11'h20; // @[RecFNToIN.scala 113:21]
  assign _T_60 = unroundedInt[30:0] != 31'h0; // @[RecFNToIN.scala 117:60]
  assign _T_61 = _T_60 | roundIncr; // @[RecFNToIN.scala 117:64]
  assign _T_62 = magGeOne_atOverflowEdge & _T_61; // @[RecFNToIN.scala 116:49]
  assign _T_63 = posExp == 11'h1e; // @[RecFNToIN.scala 119:38]
  assign _T_64 = _T_63 & roundCarryBut2; // @[RecFNToIN.scala 119:62]
  assign _T_65 = magGeOne_atOverflowEdge | _T_64; // @[RecFNToIN.scala 118:49]
  assign _T_66 = rawIn_sign ? _T_62 : _T_65; // @[RecFNToIN.scala 115:24]
  assign _T_72 = _T_58 | _T_66; // @[RecFNToIN.scala 113:40]
  assign common_overflow = magGeOne & _T_72; // @[RecFNToIN.scala 112:12]
  assign invalidExc = rawIn_isNaN | rawIn_isInf; // @[RecFNToIN.scala 130:34]
  assign overflow = ~invalidExc & common_overflow; // @[RecFNToIN.scala 131:32]
  assign _T_79 = ~invalidExc & ~common_overflow; // @[RecFNToIN.scala 132:32]
  assign inexact = _T_79 & common_inexact; // @[RecFNToIN.scala 132:52]
  assign excSign = ~rawIn_isNaN & rawIn_sign; // @[RecFNToIN.scala 134:32]
  assign _T_82 = excSign ? 32'h80000000 : 32'h0; // @[RecFNToIN.scala 136:12]
  assign _T_84 = excSign ? 31'h0 : 31'h7fffffff; // @[RecFNToIN.scala 140:12]
  assign _GEN_2 = {{1'd0}, _T_84}; // @[RecFNToIN.scala 139:11]
  assign excOut = _T_82 | _GEN_2; // @[RecFNToIN.scala 139:11]
  assign _T_85 = invalidExc | common_overflow; // @[RecFNToIN.scala 142:30]
  assign _T_87 = {invalidExc,overflow}; // @[Cat.scala 29:58]
  assign io_out = _T_85 ? excOut : roundedInt; // @[RecFNToIN.scala 142:12]
  assign io_intExceptionFlags = {_T_87,inexact}; // @[RecFNToIN.scala 143:26]
endmodule
module ValExec_RecF64ToI32(
  input         clock,
  input         reset,
  input  [63:0] io_in,
  input  [2:0]  io_roundingMode,
  input  [31:0] io_expected_out,
  input  [4:0]  io_expected_exceptionFlags,
  output [31:0] io_actual_out,
  output [4:0]  io_actual_exceptionFlags,
  output        io_check,
  output        io_pass
);
  wire [64:0] recFNToIN_io_in; // @[ValExec_RecFNToIN.scala 111:27]
  wire [2:0] recFNToIN_io_roundingMode; // @[ValExec_RecFNToIN.scala 111:27]
  wire [31:0] recFNToIN_io_out; // @[ValExec_RecFNToIN.scala 111:27]
  wire [2:0] recFNToIN_io_intExceptionFlags; // @[ValExec_RecFNToIN.scala 111:27]
  wire  _T_3; // @[rawFloatFromFN.scala 50:34]
  wire  _T_4; // @[rawFloatFromFN.scala 51:38]
  wire [5:0] _T_57; // @[Mux.scala 47:69]
  wire [5:0] _T_58; // @[Mux.scala 47:69]
  wire [5:0] _T_59; // @[Mux.scala 47:69]
  wire [5:0] _T_60; // @[Mux.scala 47:69]
  wire [5:0] _T_61; // @[Mux.scala 47:69]
  wire [5:0] _T_62; // @[Mux.scala 47:69]
  wire [5:0] _T_63; // @[Mux.scala 47:69]
  wire [5:0] _T_64; // @[Mux.scala 47:69]
  wire [5:0] _T_65; // @[Mux.scala 47:69]
  wire [5:0] _T_66; // @[Mux.scala 47:69]
  wire [5:0] _T_67; // @[Mux.scala 47:69]
  wire [5:0] _T_68; // @[Mux.scala 47:69]
  wire [5:0] _T_69; // @[Mux.scala 47:69]
  wire [5:0] _T_70; // @[Mux.scala 47:69]
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
  wire [114:0] _GEN_0; // @[rawFloatFromFN.scala 54:36]
  wire [114:0] _T_108; // @[rawFloatFromFN.scala 54:36]
  wire [51:0] _T_110; // @[rawFloatFromFN.scala 54:64]
  wire [11:0] _GEN_1; // @[rawFloatFromFN.scala 57:26]
  wire [11:0] _T_111; // @[rawFloatFromFN.scala 57:26]
  wire [11:0] _T_112; // @[rawFloatFromFN.scala 56:16]
  wire [1:0] _T_113; // @[rawFloatFromFN.scala 60:27]
  wire [10:0] _GEN_2; // @[rawFloatFromFN.scala 60:22]
  wire [10:0] _T_114; // @[rawFloatFromFN.scala 60:22]
  wire [11:0] _GEN_3; // @[rawFloatFromFN.scala 59:15]
  wire [11:0] _T_116; // @[rawFloatFromFN.scala 59:15]
  wire  _T_117; // @[rawFloatFromFN.scala 62:34]
  wire  _T_119; // @[rawFloatFromFN.scala 63:62]
  wire  _T_122; // @[rawFloatFromFN.scala 66:33]
  wire [12:0] _T_125; // @[rawFloatFromFN.scala 70:48]
  wire [51:0] _T_127; // @[rawFloatFromFN.scala 72:42]
  wire [53:0] _T_129; // @[Cat.scala 29:58]
  wire [2:0] _T_131; // @[recFNFromFN.scala 48:16]
  wire [2:0] _GEN_4; // @[recFNFromFN.scala 48:79]
  wire [2:0] _T_133; // @[recFNFromFN.scala 48:79]
  wire [60:0] _T_136; // @[Cat.scala 29:58]
  wire [3:0] _T_137; // @[Cat.scala 29:58]
  wire  _T_140; // @[ValExec_RecFNToIN.scala 118:50]
  wire [3:0] _T_142; // @[Cat.scala 29:58]
  wire  _T_144; // @[ValExec_RecFNToIN.scala 125:24]
  wire  _T_145; // @[ValExec_RecFNToIN.scala 126:35]
  RecFNToIN recFNToIN ( // @[ValExec_RecFNToIN.scala 111:27]
    .io_in(recFNToIN_io_in),
    .io_roundingMode(recFNToIN_io_roundingMode),
    .io_out(recFNToIN_io_out),
    .io_intExceptionFlags(recFNToIN_io_intExceptionFlags)
  );
  assign _T_3 = io_in[62:52] == 11'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_4 = io_in[51:0] == 52'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_57 = io_in[1] ? 6'h32 : 6'h33; // @[Mux.scala 47:69]
  assign _T_58 = io_in[2] ? 6'h31 : _T_57; // @[Mux.scala 47:69]
  assign _T_59 = io_in[3] ? 6'h30 : _T_58; // @[Mux.scala 47:69]
  assign _T_60 = io_in[4] ? 6'h2f : _T_59; // @[Mux.scala 47:69]
  assign _T_61 = io_in[5] ? 6'h2e : _T_60; // @[Mux.scala 47:69]
  assign _T_62 = io_in[6] ? 6'h2d : _T_61; // @[Mux.scala 47:69]
  assign _T_63 = io_in[7] ? 6'h2c : _T_62; // @[Mux.scala 47:69]
  assign _T_64 = io_in[8] ? 6'h2b : _T_63; // @[Mux.scala 47:69]
  assign _T_65 = io_in[9] ? 6'h2a : _T_64; // @[Mux.scala 47:69]
  assign _T_66 = io_in[10] ? 6'h29 : _T_65; // @[Mux.scala 47:69]
  assign _T_67 = io_in[11] ? 6'h28 : _T_66; // @[Mux.scala 47:69]
  assign _T_68 = io_in[12] ? 6'h27 : _T_67; // @[Mux.scala 47:69]
  assign _T_69 = io_in[13] ? 6'h26 : _T_68; // @[Mux.scala 47:69]
  assign _T_70 = io_in[14] ? 6'h25 : _T_69; // @[Mux.scala 47:69]
  assign _T_71 = io_in[15] ? 6'h24 : _T_70; // @[Mux.scala 47:69]
  assign _T_72 = io_in[16] ? 6'h23 : _T_71; // @[Mux.scala 47:69]
  assign _T_73 = io_in[17] ? 6'h22 : _T_72; // @[Mux.scala 47:69]
  assign _T_74 = io_in[18] ? 6'h21 : _T_73; // @[Mux.scala 47:69]
  assign _T_75 = io_in[19] ? 6'h20 : _T_74; // @[Mux.scala 47:69]
  assign _T_76 = io_in[20] ? 6'h1f : _T_75; // @[Mux.scala 47:69]
  assign _T_77 = io_in[21] ? 6'h1e : _T_76; // @[Mux.scala 47:69]
  assign _T_78 = io_in[22] ? 6'h1d : _T_77; // @[Mux.scala 47:69]
  assign _T_79 = io_in[23] ? 6'h1c : _T_78; // @[Mux.scala 47:69]
  assign _T_80 = io_in[24] ? 6'h1b : _T_79; // @[Mux.scala 47:69]
  assign _T_81 = io_in[25] ? 6'h1a : _T_80; // @[Mux.scala 47:69]
  assign _T_82 = io_in[26] ? 6'h19 : _T_81; // @[Mux.scala 47:69]
  assign _T_83 = io_in[27] ? 6'h18 : _T_82; // @[Mux.scala 47:69]
  assign _T_84 = io_in[28] ? 6'h17 : _T_83; // @[Mux.scala 47:69]
  assign _T_85 = io_in[29] ? 6'h16 : _T_84; // @[Mux.scala 47:69]
  assign _T_86 = io_in[30] ? 6'h15 : _T_85; // @[Mux.scala 47:69]
  assign _T_87 = io_in[31] ? 6'h14 : _T_86; // @[Mux.scala 47:69]
  assign _T_88 = io_in[32] ? 6'h13 : _T_87; // @[Mux.scala 47:69]
  assign _T_89 = io_in[33] ? 6'h12 : _T_88; // @[Mux.scala 47:69]
  assign _T_90 = io_in[34] ? 6'h11 : _T_89; // @[Mux.scala 47:69]
  assign _T_91 = io_in[35] ? 6'h10 : _T_90; // @[Mux.scala 47:69]
  assign _T_92 = io_in[36] ? 6'hf : _T_91; // @[Mux.scala 47:69]
  assign _T_93 = io_in[37] ? 6'he : _T_92; // @[Mux.scala 47:69]
  assign _T_94 = io_in[38] ? 6'hd : _T_93; // @[Mux.scala 47:69]
  assign _T_95 = io_in[39] ? 6'hc : _T_94; // @[Mux.scala 47:69]
  assign _T_96 = io_in[40] ? 6'hb : _T_95; // @[Mux.scala 47:69]
  assign _T_97 = io_in[41] ? 6'ha : _T_96; // @[Mux.scala 47:69]
  assign _T_98 = io_in[42] ? 6'h9 : _T_97; // @[Mux.scala 47:69]
  assign _T_99 = io_in[43] ? 6'h8 : _T_98; // @[Mux.scala 47:69]
  assign _T_100 = io_in[44] ? 6'h7 : _T_99; // @[Mux.scala 47:69]
  assign _T_101 = io_in[45] ? 6'h6 : _T_100; // @[Mux.scala 47:69]
  assign _T_102 = io_in[46] ? 6'h5 : _T_101; // @[Mux.scala 47:69]
  assign _T_103 = io_in[47] ? 6'h4 : _T_102; // @[Mux.scala 47:69]
  assign _T_104 = io_in[48] ? 6'h3 : _T_103; // @[Mux.scala 47:69]
  assign _T_105 = io_in[49] ? 6'h2 : _T_104; // @[Mux.scala 47:69]
  assign _T_106 = io_in[50] ? 6'h1 : _T_105; // @[Mux.scala 47:69]
  assign _T_107 = io_in[51] ? 6'h0 : _T_106; // @[Mux.scala 47:69]
  assign _GEN_0 = {{63'd0}, io_in[51:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_108 = _GEN_0 << _T_107; // @[rawFloatFromFN.scala 54:36]
  assign _T_110 = {_T_108[50:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_1 = {{6'd0}, _T_107}; // @[rawFloatFromFN.scala 57:26]
  assign _T_111 = _GEN_1 ^ 12'hfff; // @[rawFloatFromFN.scala 57:26]
  assign _T_112 = _T_3 ? _T_111 : {{1'd0}, io_in[62:52]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_113 = _T_3 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_2 = {{9'd0}, _T_113}; // @[rawFloatFromFN.scala 60:22]
  assign _T_114 = 11'h400 | _GEN_2; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_3 = {{1'd0}, _T_114}; // @[rawFloatFromFN.scala 59:15]
  assign _T_116 = _T_112 + _GEN_3; // @[rawFloatFromFN.scala 59:15]
  assign _T_117 = _T_3 & _T_4; // @[rawFloatFromFN.scala 62:34]
  assign _T_119 = _T_116[11:10] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_122 = _T_119 & ~_T_4; // @[rawFloatFromFN.scala 66:33]
  assign _T_125 = {1'b0,$signed(_T_116)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_127 = _T_3 ? _T_110 : io_in[51:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_129 = {1'h0,~_T_117,_T_127}; // @[Cat.scala 29:58]
  assign _T_131 = _T_117 ? 3'h0 : _T_125[11:9]; // @[recFNFromFN.scala 48:16]
  assign _GEN_4 = {{2'd0}, _T_122}; // @[recFNFromFN.scala 48:79]
  assign _T_133 = _T_131 | _GEN_4; // @[recFNFromFN.scala 48:79]
  assign _T_136 = {_T_125[8:0],_T_129[51:0]}; // @[Cat.scala 29:58]
  assign _T_137 = {io_in[63],_T_133}; // @[Cat.scala 29:58]
  assign _T_140 = recFNToIN_io_intExceptionFlags[2:1] != 2'h0; // @[ValExec_RecFNToIN.scala 118:50]
  assign _T_142 = {_T_140,3'h0}; // @[Cat.scala 29:58]
  assign _T_144 = io_actual_out == io_expected_out; // @[ValExec_RecFNToIN.scala 125:24]
  assign _T_145 = io_actual_exceptionFlags == io_expected_exceptionFlags; // @[ValExec_RecFNToIN.scala 126:35]
  assign io_actual_out = recFNToIN_io_out; // @[ValExec_RecFNToIN.scala 116:19]
  assign io_actual_exceptionFlags = {_T_142,recFNToIN_io_intExceptionFlags[0]}; // @[ValExec_RecFNToIN.scala 117:30]
  assign io_check = 1'h1; // @[ValExec_RecFNToIN.scala 123:14]
  assign io_pass = _T_144 & _T_145; // @[ValExec_RecFNToIN.scala 124:13]
  assign recFNToIN_io_in = {_T_137,_T_136}; // @[ValExec_RecFNToIN.scala 112:21]
  assign recFNToIN_io_roundingMode = io_roundingMode; // @[ValExec_RecFNToIN.scala 113:31]
endmodule
