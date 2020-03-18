module RecFNToIN(
  input  [16:0] io_in,
  input  [2:0]  io_roundingMode,
  output [31:0] io_out,
  output [2:0]  io_intExceptionFlags
);
  wire  rawIn_isZero; // @[rawFloatFromRecFN.scala 51:54]
  wire  _T_4; // @[rawFloatFromRecFN.scala 52:54]
  wire  rawIn_isNaN; // @[rawFloatFromRecFN.scala 55:33]
  wire  rawIn_isInf; // @[rawFloatFromRecFN.scala 56:33]
  wire  rawIn_sign; // @[rawFloatFromRecFN.scala 58:25]
  wire [6:0] rawIn_sExp; // @[rawFloatFromRecFN.scala 59:27]
  wire [11:0] rawIn_sig; // @[Cat.scala 29:58]
  wire  magGeOne; // @[RecFNToIN.scala 58:30]
  wire [4:0] posExp; // @[RecFNToIN.scala 59:28]
  wire  _T_17; // @[RecFNToIN.scala 60:47]
  wire  magJustBelowOne; // @[RecFNToIN.scala 60:37]
  wire  roundingMode_near_even; // @[RecFNToIN.scala 64:53]
  wire  roundingMode_min; // @[RecFNToIN.scala 66:53]
  wire  roundingMode_max; // @[RecFNToIN.scala 67:53]
  wire  roundingMode_near_maxMag; // @[RecFNToIN.scala 68:53]
  wire  roundingMode_odd; // @[RecFNToIN.scala 69:53]
  wire [10:0] _T_19; // @[Cat.scala 29:58]
  wire [3:0] _T_21; // @[RecFNToIN.scala 81:16]
  wire [25:0] _GEN_0; // @[RecFNToIN.scala 80:50]
  wire [25:0] shiftedSig; // @[RecFNToIN.scala 80:50]
  wire  _T_24; // @[RecFNToIN.scala 86:69]
  wire [17:0] alignedSig; // @[Cat.scala 29:58]
  wire [31:0] unroundedInt; // @[RecFNToIN.scala 87:42]
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
  wire  _T_57; // @[RecFNToIN.scala 110:56]
  wire  roundCarryBut2; // @[RecFNToIN.scala 110:61]
  wire  _T_68; // @[RecFNToIN.scala 122:50]
  wire  _T_69; // @[RecFNToIN.scala 123:57]
  wire  _T_70; // @[RecFNToIN.scala 121:32]
  wire  _T_75; // @[RecFNToIN.scala 125:41]
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
  assign rawIn_isZero = io_in[15:13] == 3'h0; // @[rawFloatFromRecFN.scala 51:54]
  assign _T_4 = io_in[15:14] == 2'h3; // @[rawFloatFromRecFN.scala 52:54]
  assign rawIn_isNaN = _T_4 & io_in[13]; // @[rawFloatFromRecFN.scala 55:33]
  assign rawIn_isInf = _T_4 & ~io_in[13]; // @[rawFloatFromRecFN.scala 56:33]
  assign rawIn_sign = io_in[16]; // @[rawFloatFromRecFN.scala 58:25]
  assign rawIn_sExp = {1'b0,$signed(io_in[15:10])}; // @[rawFloatFromRecFN.scala 59:27]
  assign rawIn_sig = {1'h0,~rawIn_isZero,io_in[9:0]}; // @[Cat.scala 29:58]
  assign magGeOne = rawIn_sExp[5]; // @[RecFNToIN.scala 58:30]
  assign posExp = rawIn_sExp[4:0]; // @[RecFNToIN.scala 59:28]
  assign _T_17 = posExp == 5'h1f; // @[RecFNToIN.scala 60:47]
  assign magJustBelowOne = ~magGeOne & _T_17; // @[RecFNToIN.scala 60:37]
  assign roundingMode_near_even = io_roundingMode == 3'h0; // @[RecFNToIN.scala 64:53]
  assign roundingMode_min = io_roundingMode == 3'h2; // @[RecFNToIN.scala 66:53]
  assign roundingMode_max = io_roundingMode == 3'h3; // @[RecFNToIN.scala 67:53]
  assign roundingMode_near_maxMag = io_roundingMode == 3'h4; // @[RecFNToIN.scala 68:53]
  assign roundingMode_odd = io_roundingMode == 3'h6; // @[RecFNToIN.scala 69:53]
  assign _T_19 = {magGeOne,rawIn_sig[9:0]}; // @[Cat.scala 29:58]
  assign _T_21 = magGeOne ? rawIn_sExp[3:0] : 4'h0; // @[RecFNToIN.scala 81:16]
  assign _GEN_0 = {{15'd0}, _T_19}; // @[RecFNToIN.scala 80:50]
  assign shiftedSig = _GEN_0 << _T_21; // @[RecFNToIN.scala 80:50]
  assign _T_24 = shiftedSig[8:0] != 9'h0; // @[RecFNToIN.scala 86:69]
  assign alignedSig = {shiftedSig[25:9],_T_24}; // @[Cat.scala 29:58]
  assign unroundedInt = {{16'd0}, alignedSig[17:2]}; // @[RecFNToIN.scala 87:42]
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
  assign _T_57 = unroundedInt[29:0] == 30'h3fffffff; // @[RecFNToIN.scala 110:56]
  assign roundCarryBut2 = _T_57 & roundIncr; // @[RecFNToIN.scala 110:61]
  assign _T_68 = _T_17 & unroundedInt[30]; // @[RecFNToIN.scala 122:50]
  assign _T_69 = _T_68 & roundCarryBut2; // @[RecFNToIN.scala 123:57]
  assign _T_70 = rawIn_sign | _T_69; // @[RecFNToIN.scala 121:32]
  assign _T_75 = rawIn_sign & roundIncr; // @[RecFNToIN.scala 125:41]
  assign common_overflow = magGeOne ? _T_70 : _T_75; // @[RecFNToIN.scala 112:12]
  assign invalidExc = rawIn_isNaN | rawIn_isInf; // @[RecFNToIN.scala 130:34]
  assign overflow = ~invalidExc & common_overflow; // @[RecFNToIN.scala 131:32]
  assign _T_79 = ~invalidExc & ~common_overflow; // @[RecFNToIN.scala 132:32]
  assign inexact = _T_79 & common_inexact; // @[RecFNToIN.scala 132:52]
  assign excSign = ~rawIn_isNaN & rawIn_sign; // @[RecFNToIN.scala 134:32]
  assign _T_82 = excSign ? 32'h0 : 32'h80000000; // @[RecFNToIN.scala 136:12]
  assign _T_84 = excSign ? 31'h0 : 31'h7fffffff; // @[RecFNToIN.scala 140:12]
  assign _GEN_2 = {{1'd0}, _T_84}; // @[RecFNToIN.scala 139:11]
  assign excOut = _T_82 | _GEN_2; // @[RecFNToIN.scala 139:11]
  assign _T_85 = invalidExc | common_overflow; // @[RecFNToIN.scala 142:30]
  assign _T_87 = {invalidExc,overflow}; // @[Cat.scala 29:58]
  assign io_out = _T_85 ? excOut : roundedInt; // @[RecFNToIN.scala 142:12]
  assign io_intExceptionFlags = {_T_87,inexact}; // @[RecFNToIN.scala 143:26]
endmodule
module ValExec_RecF16ToUI32(
  input         clock,
  input         reset,
  input  [15:0] io_in,
  input  [2:0]  io_roundingMode,
  input  [31:0] io_expected_out,
  input  [4:0]  io_expected_exceptionFlags,
  output [31:0] io_actual_out,
  output [4:0]  io_actual_exceptionFlags,
  output        io_check,
  output        io_pass
);
  wire [16:0] recFNToIN_io_in; // @[ValExec_RecFNToIN.scala 64:27]
  wire [2:0] recFNToIN_io_roundingMode; // @[ValExec_RecFNToIN.scala 64:27]
  wire [31:0] recFNToIN_io_out; // @[ValExec_RecFNToIN.scala 64:27]
  wire [2:0] recFNToIN_io_intExceptionFlags; // @[ValExec_RecFNToIN.scala 64:27]
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
  wire  _T_56; // @[ValExec_RecFNToIN.scala 71:50]
  wire [3:0] _T_58; // @[Cat.scala 29:58]
  wire  _T_60; // @[ValExec_RecFNToIN.scala 78:24]
  wire  _T_61; // @[ValExec_RecFNToIN.scala 79:35]
  RecFNToIN recFNToIN ( // @[ValExec_RecFNToIN.scala 64:27]
    .io_in(recFNToIN_io_in),
    .io_roundingMode(recFNToIN_io_roundingMode),
    .io_out(recFNToIN_io_out),
    .io_intExceptionFlags(recFNToIN_io_intExceptionFlags)
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
  assign _T_56 = recFNToIN_io_intExceptionFlags[2:1] != 2'h0; // @[ValExec_RecFNToIN.scala 71:50]
  assign _T_58 = {_T_56,3'h0}; // @[Cat.scala 29:58]
  assign _T_60 = io_actual_out == io_expected_out; // @[ValExec_RecFNToIN.scala 78:24]
  assign _T_61 = io_actual_exceptionFlags == io_expected_exceptionFlags; // @[ValExec_RecFNToIN.scala 79:35]
  assign io_actual_out = recFNToIN_io_out; // @[ValExec_RecFNToIN.scala 69:19]
  assign io_actual_exceptionFlags = {_T_58,recFNToIN_io_intExceptionFlags[0]}; // @[ValExec_RecFNToIN.scala 70:30]
  assign io_check = 1'h1; // @[ValExec_RecFNToIN.scala 76:14]
  assign io_pass = _T_60 & _T_61; // @[ValExec_RecFNToIN.scala 77:13]
  assign recFNToIN_io_in = {_T_53,_T_52}; // @[ValExec_RecFNToIN.scala 65:21]
  assign recFNToIN_io_roundingMode = io_roundingMode; // @[ValExec_RecFNToIN.scala 66:31]
endmodule
