module RecFNToIN(
  input  [32:0] io_in,
  input  [2:0]  io_roundingMode,
  output [63:0] io_out,
  output [2:0]  io_intExceptionFlags
);
  wire  rawIn_isZero; // @[rawFloatFromRecFN.scala 51:54]
  wire  _T_4; // @[rawFloatFromRecFN.scala 52:54]
  wire  rawIn_isNaN; // @[rawFloatFromRecFN.scala 55:33]
  wire  rawIn_isInf; // @[rawFloatFromRecFN.scala 56:33]
  wire  rawIn_sign; // @[rawFloatFromRecFN.scala 58:25]
  wire [9:0] rawIn_sExp; // @[rawFloatFromRecFN.scala 59:27]
  wire [24:0] rawIn_sig; // @[Cat.scala 29:58]
  wire  magGeOne; // @[RecFNToIN.scala 58:30]
  wire [7:0] posExp; // @[RecFNToIN.scala 59:28]
  wire  _T_17; // @[RecFNToIN.scala 60:47]
  wire  magJustBelowOne; // @[RecFNToIN.scala 60:37]
  wire  roundingMode_near_even; // @[RecFNToIN.scala 64:53]
  wire  roundingMode_min; // @[RecFNToIN.scala 66:53]
  wire  roundingMode_max; // @[RecFNToIN.scala 67:53]
  wire  roundingMode_near_maxMag; // @[RecFNToIN.scala 68:53]
  wire  roundingMode_odd; // @[RecFNToIN.scala 69:53]
  wire [23:0] _T_19; // @[Cat.scala 29:58]
  wire [5:0] _T_21; // @[RecFNToIN.scala 81:16]
  wire [86:0] _GEN_0; // @[RecFNToIN.scala 80:50]
  wire [86:0] shiftedSig; // @[RecFNToIN.scala 80:50]
  wire  _T_24; // @[RecFNToIN.scala 86:69]
  wire [65:0] alignedSig; // @[Cat.scala 29:58]
  wire [63:0] unroundedInt; // @[RecFNToIN.scala 87:54]
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
  wire [63:0] complUnroundedInt; // @[RecFNToIN.scala 100:32]
  wire  _T_51; // @[RecFNToIN.scala 102:23]
  wire [63:0] _T_53; // @[RecFNToIN.scala 103:31]
  wire [63:0] _T_54; // @[RecFNToIN.scala 102:12]
  wire  _T_55; // @[RecFNToIN.scala 105:31]
  wire [63:0] _GEN_1; // @[RecFNToIN.scala 105:11]
  wire [63:0] roundedInt; // @[RecFNToIN.scala 105:11]
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
  wire [63:0] _T_82; // @[RecFNToIN.scala 136:12]
  wire [62:0] _T_84; // @[RecFNToIN.scala 140:12]
  wire [63:0] _GEN_2; // @[RecFNToIN.scala 139:11]
  wire [63:0] excOut; // @[RecFNToIN.scala 139:11]
  wire  _T_85; // @[RecFNToIN.scala 142:30]
  wire [1:0] _T_87; // @[Cat.scala 29:58]
  assign rawIn_isZero = io_in[31:29] == 3'h0; // @[rawFloatFromRecFN.scala 51:54]
  assign _T_4 = io_in[31:30] == 2'h3; // @[rawFloatFromRecFN.scala 52:54]
  assign rawIn_isNaN = _T_4 & io_in[29]; // @[rawFloatFromRecFN.scala 55:33]
  assign rawIn_isInf = _T_4 & ~io_in[29]; // @[rawFloatFromRecFN.scala 56:33]
  assign rawIn_sign = io_in[32]; // @[rawFloatFromRecFN.scala 58:25]
  assign rawIn_sExp = {1'b0,$signed(io_in[31:23])}; // @[rawFloatFromRecFN.scala 59:27]
  assign rawIn_sig = {1'h0,~rawIn_isZero,io_in[22:0]}; // @[Cat.scala 29:58]
  assign magGeOne = rawIn_sExp[8]; // @[RecFNToIN.scala 58:30]
  assign posExp = rawIn_sExp[7:0]; // @[RecFNToIN.scala 59:28]
  assign _T_17 = posExp == 8'hff; // @[RecFNToIN.scala 60:47]
  assign magJustBelowOne = ~magGeOne & _T_17; // @[RecFNToIN.scala 60:37]
  assign roundingMode_near_even = io_roundingMode == 3'h0; // @[RecFNToIN.scala 64:53]
  assign roundingMode_min = io_roundingMode == 3'h2; // @[RecFNToIN.scala 66:53]
  assign roundingMode_max = io_roundingMode == 3'h3; // @[RecFNToIN.scala 67:53]
  assign roundingMode_near_maxMag = io_roundingMode == 3'h4; // @[RecFNToIN.scala 68:53]
  assign roundingMode_odd = io_roundingMode == 3'h6; // @[RecFNToIN.scala 69:53]
  assign _T_19 = {magGeOne,rawIn_sig[22:0]}; // @[Cat.scala 29:58]
  assign _T_21 = magGeOne ? rawIn_sExp[5:0] : 6'h0; // @[RecFNToIN.scala 81:16]
  assign _GEN_0 = {{63'd0}, _T_19}; // @[RecFNToIN.scala 80:50]
  assign shiftedSig = _GEN_0 << _T_21; // @[RecFNToIN.scala 80:50]
  assign _T_24 = shiftedSig[21:0] != 22'h0; // @[RecFNToIN.scala 86:69]
  assign alignedSig = {shiftedSig[86:22],_T_24}; // @[Cat.scala 29:58]
  assign unroundedInt = alignedSig[65:2]; // @[RecFNToIN.scala 87:54]
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
  assign _T_53 = complUnroundedInt + 64'h1; // @[RecFNToIN.scala 103:31]
  assign _T_54 = _T_51 ? _T_53 : complUnroundedInt; // @[RecFNToIN.scala 102:12]
  assign _T_55 = roundingMode_odd & common_inexact; // @[RecFNToIN.scala 105:31]
  assign _GEN_1 = {{63'd0}, _T_55}; // @[RecFNToIN.scala 105:11]
  assign roundedInt = _T_54 | _GEN_1; // @[RecFNToIN.scala 105:11]
  assign magGeOne_atOverflowEdge = posExp == 8'h3f; // @[RecFNToIN.scala 107:43]
  assign _T_57 = unroundedInt[61:0] == 62'h3fffffffffffffff; // @[RecFNToIN.scala 110:56]
  assign roundCarryBut2 = _T_57 & roundIncr; // @[RecFNToIN.scala 110:61]
  assign _T_58 = posExp >= 8'h40; // @[RecFNToIN.scala 113:21]
  assign _T_60 = unroundedInt[62:0] != 63'h0; // @[RecFNToIN.scala 117:60]
  assign _T_61 = _T_60 | roundIncr; // @[RecFNToIN.scala 117:64]
  assign _T_62 = magGeOne_atOverflowEdge & _T_61; // @[RecFNToIN.scala 116:49]
  assign _T_63 = posExp == 8'h3e; // @[RecFNToIN.scala 119:38]
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
  assign _T_82 = excSign ? 64'h8000000000000000 : 64'h0; // @[RecFNToIN.scala 136:12]
  assign _T_84 = excSign ? 63'h0 : 63'h7fffffffffffffff; // @[RecFNToIN.scala 140:12]
  assign _GEN_2 = {{1'd0}, _T_84}; // @[RecFNToIN.scala 139:11]
  assign excOut = _T_82 | _GEN_2; // @[RecFNToIN.scala 139:11]
  assign _T_85 = invalidExc | common_overflow; // @[RecFNToIN.scala 142:30]
  assign _T_87 = {invalidExc,overflow}; // @[Cat.scala 29:58]
  assign io_out = _T_85 ? excOut : roundedInt; // @[RecFNToIN.scala 142:12]
  assign io_intExceptionFlags = {_T_87,inexact}; // @[RecFNToIN.scala 143:26]
endmodule
module ValExec_RecF32ToI64(
  input         clock,
  input         reset,
  input  [31:0] io_in,
  input  [2:0]  io_roundingMode,
  input  [63:0] io_expected_out,
  input  [4:0]  io_expected_exceptionFlags,
  output [63:0] io_actual_out,
  output [4:0]  io_actual_exceptionFlags,
  output        io_check,
  output        io_pass
);
  wire [32:0] recFNToIN_io_in; // @[ValExec_RecFNToIN.scala 111:27]
  wire [2:0] recFNToIN_io_roundingMode; // @[ValExec_RecFNToIN.scala 111:27]
  wire [63:0] recFNToIN_io_out; // @[ValExec_RecFNToIN.scala 111:27]
  wire [2:0] recFNToIN_io_intExceptionFlags; // @[ValExec_RecFNToIN.scala 111:27]
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
  wire  _T_82; // @[ValExec_RecFNToIN.scala 118:50]
  wire [3:0] _T_84; // @[Cat.scala 29:58]
  wire  _T_86; // @[ValExec_RecFNToIN.scala 125:24]
  wire  _T_87; // @[ValExec_RecFNToIN.scala 126:35]
  RecFNToIN recFNToIN ( // @[ValExec_RecFNToIN.scala 111:27]
    .io_in(recFNToIN_io_in),
    .io_roundingMode(recFNToIN_io_roundingMode),
    .io_out(recFNToIN_io_out),
    .io_intExceptionFlags(recFNToIN_io_intExceptionFlags)
  );
  assign _T_3 = io_in[30:23] == 8'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_4 = io_in[22:0] == 23'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_28 = io_in[1] ? 5'h15 : 5'h16; // @[Mux.scala 47:69]
  assign _T_29 = io_in[2] ? 5'h14 : _T_28; // @[Mux.scala 47:69]
  assign _T_30 = io_in[3] ? 5'h13 : _T_29; // @[Mux.scala 47:69]
  assign _T_31 = io_in[4] ? 5'h12 : _T_30; // @[Mux.scala 47:69]
  assign _T_32 = io_in[5] ? 5'h11 : _T_31; // @[Mux.scala 47:69]
  assign _T_33 = io_in[6] ? 5'h10 : _T_32; // @[Mux.scala 47:69]
  assign _T_34 = io_in[7] ? 5'hf : _T_33; // @[Mux.scala 47:69]
  assign _T_35 = io_in[8] ? 5'he : _T_34; // @[Mux.scala 47:69]
  assign _T_36 = io_in[9] ? 5'hd : _T_35; // @[Mux.scala 47:69]
  assign _T_37 = io_in[10] ? 5'hc : _T_36; // @[Mux.scala 47:69]
  assign _T_38 = io_in[11] ? 5'hb : _T_37; // @[Mux.scala 47:69]
  assign _T_39 = io_in[12] ? 5'ha : _T_38; // @[Mux.scala 47:69]
  assign _T_40 = io_in[13] ? 5'h9 : _T_39; // @[Mux.scala 47:69]
  assign _T_41 = io_in[14] ? 5'h8 : _T_40; // @[Mux.scala 47:69]
  assign _T_42 = io_in[15] ? 5'h7 : _T_41; // @[Mux.scala 47:69]
  assign _T_43 = io_in[16] ? 5'h6 : _T_42; // @[Mux.scala 47:69]
  assign _T_44 = io_in[17] ? 5'h5 : _T_43; // @[Mux.scala 47:69]
  assign _T_45 = io_in[18] ? 5'h4 : _T_44; // @[Mux.scala 47:69]
  assign _T_46 = io_in[19] ? 5'h3 : _T_45; // @[Mux.scala 47:69]
  assign _T_47 = io_in[20] ? 5'h2 : _T_46; // @[Mux.scala 47:69]
  assign _T_48 = io_in[21] ? 5'h1 : _T_47; // @[Mux.scala 47:69]
  assign _T_49 = io_in[22] ? 5'h0 : _T_48; // @[Mux.scala 47:69]
  assign _GEN_0 = {{31'd0}, io_in[22:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_50 = _GEN_0 << _T_49; // @[rawFloatFromFN.scala 54:36]
  assign _T_52 = {_T_50[21:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_1 = {{4'd0}, _T_49}; // @[rawFloatFromFN.scala 57:26]
  assign _T_53 = _GEN_1 ^ 9'h1ff; // @[rawFloatFromFN.scala 57:26]
  assign _T_54 = _T_3 ? _T_53 : {{1'd0}, io_in[30:23]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_55 = _T_3 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_2 = {{6'd0}, _T_55}; // @[rawFloatFromFN.scala 60:22]
  assign _T_56 = 8'h80 | _GEN_2; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_3 = {{1'd0}, _T_56}; // @[rawFloatFromFN.scala 59:15]
  assign _T_58 = _T_54 + _GEN_3; // @[rawFloatFromFN.scala 59:15]
  assign _T_59 = _T_3 & _T_4; // @[rawFloatFromFN.scala 62:34]
  assign _T_61 = _T_58[8:7] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_64 = _T_61 & ~_T_4; // @[rawFloatFromFN.scala 66:33]
  assign _T_67 = {1'b0,$signed(_T_58)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_69 = _T_3 ? _T_52 : io_in[22:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_71 = {1'h0,~_T_59,_T_69}; // @[Cat.scala 29:58]
  assign _T_73 = _T_59 ? 3'h0 : _T_67[8:6]; // @[recFNFromFN.scala 48:16]
  assign _GEN_4 = {{2'd0}, _T_64}; // @[recFNFromFN.scala 48:79]
  assign _T_75 = _T_73 | _GEN_4; // @[recFNFromFN.scala 48:79]
  assign _T_78 = {_T_67[5:0],_T_71[22:0]}; // @[Cat.scala 29:58]
  assign _T_79 = {io_in[31],_T_75}; // @[Cat.scala 29:58]
  assign _T_82 = recFNToIN_io_intExceptionFlags[2:1] != 2'h0; // @[ValExec_RecFNToIN.scala 118:50]
  assign _T_84 = {_T_82,3'h0}; // @[Cat.scala 29:58]
  assign _T_86 = io_actual_out == io_expected_out; // @[ValExec_RecFNToIN.scala 125:24]
  assign _T_87 = io_actual_exceptionFlags == io_expected_exceptionFlags; // @[ValExec_RecFNToIN.scala 126:35]
  assign io_actual_out = recFNToIN_io_out; // @[ValExec_RecFNToIN.scala 116:19]
  assign io_actual_exceptionFlags = {_T_84,recFNToIN_io_intExceptionFlags[0]}; // @[ValExec_RecFNToIN.scala 117:30]
  assign io_check = 1'h1; // @[ValExec_RecFNToIN.scala 123:14]
  assign io_pass = _T_86 & _T_87; // @[ValExec_RecFNToIN.scala 124:13]
  assign recFNToIN_io_in = {_T_79,_T_78}; // @[ValExec_RecFNToIN.scala 112:21]
  assign recFNToIN_io_roundingMode = io_roundingMode; // @[ValExec_RecFNToIN.scala 113:31]
endmodule
