module ValExec_f64FromRecF64(
  input         clock,
  input         reset,
  input  [63:0] io_a,
  output [63:0] io_out,
  output        io_check,
  output        io_pass
);
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
  wire [64:0] _T_138; // @[Cat.scala 29:58]
  wire  _T_141; // @[rawFloatFromRecFN.scala 51:54]
  wire  _T_143; // @[rawFloatFromRecFN.scala 52:54]
  wire  _T_146; // @[rawFloatFromRecFN.scala 55:33]
  wire  _T_149; // @[rawFloatFromRecFN.scala 56:33]
  wire [12:0] _T_151; // @[rawFloatFromRecFN.scala 59:27]
  wire [53:0] _T_155; // @[Cat.scala 29:58]
  wire  _T_156; // @[fNFromRecFN.scala 50:39]
  wire [5:0] _T_159; // @[fNFromRecFN.scala 51:39]
  wire [52:0] _T_161; // @[fNFromRecFN.scala 52:42]
  wire [10:0] _T_165; // @[fNFromRecFN.scala 57:45]
  wire [10:0] _T_166; // @[fNFromRecFN.scala 55:16]
  wire  _T_167; // @[fNFromRecFN.scala 59:44]
  wire [10:0] _T_169; // @[Bitwise.scala 71:12]
  wire [10:0] _T_170; // @[fNFromRecFN.scala 59:15]
  wire [51:0] _T_172; // @[fNFromRecFN.scala 63:20]
  wire [51:0] _T_173; // @[fNFromRecFN.scala 61:16]
  wire [11:0] _T_174; // @[Cat.scala 29:58]
  assign _T_3 = io_a[62:52] == 11'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_4 = io_a[51:0] == 52'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_57 = io_a[1] ? 6'h32 : 6'h33; // @[Mux.scala 47:69]
  assign _T_58 = io_a[2] ? 6'h31 : _T_57; // @[Mux.scala 47:69]
  assign _T_59 = io_a[3] ? 6'h30 : _T_58; // @[Mux.scala 47:69]
  assign _T_60 = io_a[4] ? 6'h2f : _T_59; // @[Mux.scala 47:69]
  assign _T_61 = io_a[5] ? 6'h2e : _T_60; // @[Mux.scala 47:69]
  assign _T_62 = io_a[6] ? 6'h2d : _T_61; // @[Mux.scala 47:69]
  assign _T_63 = io_a[7] ? 6'h2c : _T_62; // @[Mux.scala 47:69]
  assign _T_64 = io_a[8] ? 6'h2b : _T_63; // @[Mux.scala 47:69]
  assign _T_65 = io_a[9] ? 6'h2a : _T_64; // @[Mux.scala 47:69]
  assign _T_66 = io_a[10] ? 6'h29 : _T_65; // @[Mux.scala 47:69]
  assign _T_67 = io_a[11] ? 6'h28 : _T_66; // @[Mux.scala 47:69]
  assign _T_68 = io_a[12] ? 6'h27 : _T_67; // @[Mux.scala 47:69]
  assign _T_69 = io_a[13] ? 6'h26 : _T_68; // @[Mux.scala 47:69]
  assign _T_70 = io_a[14] ? 6'h25 : _T_69; // @[Mux.scala 47:69]
  assign _T_71 = io_a[15] ? 6'h24 : _T_70; // @[Mux.scala 47:69]
  assign _T_72 = io_a[16] ? 6'h23 : _T_71; // @[Mux.scala 47:69]
  assign _T_73 = io_a[17] ? 6'h22 : _T_72; // @[Mux.scala 47:69]
  assign _T_74 = io_a[18] ? 6'h21 : _T_73; // @[Mux.scala 47:69]
  assign _T_75 = io_a[19] ? 6'h20 : _T_74; // @[Mux.scala 47:69]
  assign _T_76 = io_a[20] ? 6'h1f : _T_75; // @[Mux.scala 47:69]
  assign _T_77 = io_a[21] ? 6'h1e : _T_76; // @[Mux.scala 47:69]
  assign _T_78 = io_a[22] ? 6'h1d : _T_77; // @[Mux.scala 47:69]
  assign _T_79 = io_a[23] ? 6'h1c : _T_78; // @[Mux.scala 47:69]
  assign _T_80 = io_a[24] ? 6'h1b : _T_79; // @[Mux.scala 47:69]
  assign _T_81 = io_a[25] ? 6'h1a : _T_80; // @[Mux.scala 47:69]
  assign _T_82 = io_a[26] ? 6'h19 : _T_81; // @[Mux.scala 47:69]
  assign _T_83 = io_a[27] ? 6'h18 : _T_82; // @[Mux.scala 47:69]
  assign _T_84 = io_a[28] ? 6'h17 : _T_83; // @[Mux.scala 47:69]
  assign _T_85 = io_a[29] ? 6'h16 : _T_84; // @[Mux.scala 47:69]
  assign _T_86 = io_a[30] ? 6'h15 : _T_85; // @[Mux.scala 47:69]
  assign _T_87 = io_a[31] ? 6'h14 : _T_86; // @[Mux.scala 47:69]
  assign _T_88 = io_a[32] ? 6'h13 : _T_87; // @[Mux.scala 47:69]
  assign _T_89 = io_a[33] ? 6'h12 : _T_88; // @[Mux.scala 47:69]
  assign _T_90 = io_a[34] ? 6'h11 : _T_89; // @[Mux.scala 47:69]
  assign _T_91 = io_a[35] ? 6'h10 : _T_90; // @[Mux.scala 47:69]
  assign _T_92 = io_a[36] ? 6'hf : _T_91; // @[Mux.scala 47:69]
  assign _T_93 = io_a[37] ? 6'he : _T_92; // @[Mux.scala 47:69]
  assign _T_94 = io_a[38] ? 6'hd : _T_93; // @[Mux.scala 47:69]
  assign _T_95 = io_a[39] ? 6'hc : _T_94; // @[Mux.scala 47:69]
  assign _T_96 = io_a[40] ? 6'hb : _T_95; // @[Mux.scala 47:69]
  assign _T_97 = io_a[41] ? 6'ha : _T_96; // @[Mux.scala 47:69]
  assign _T_98 = io_a[42] ? 6'h9 : _T_97; // @[Mux.scala 47:69]
  assign _T_99 = io_a[43] ? 6'h8 : _T_98; // @[Mux.scala 47:69]
  assign _T_100 = io_a[44] ? 6'h7 : _T_99; // @[Mux.scala 47:69]
  assign _T_101 = io_a[45] ? 6'h6 : _T_100; // @[Mux.scala 47:69]
  assign _T_102 = io_a[46] ? 6'h5 : _T_101; // @[Mux.scala 47:69]
  assign _T_103 = io_a[47] ? 6'h4 : _T_102; // @[Mux.scala 47:69]
  assign _T_104 = io_a[48] ? 6'h3 : _T_103; // @[Mux.scala 47:69]
  assign _T_105 = io_a[49] ? 6'h2 : _T_104; // @[Mux.scala 47:69]
  assign _T_106 = io_a[50] ? 6'h1 : _T_105; // @[Mux.scala 47:69]
  assign _T_107 = io_a[51] ? 6'h0 : _T_106; // @[Mux.scala 47:69]
  assign _GEN_0 = {{63'd0}, io_a[51:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_108 = _GEN_0 << _T_107; // @[rawFloatFromFN.scala 54:36]
  assign _T_110 = {_T_108[50:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_1 = {{6'd0}, _T_107}; // @[rawFloatFromFN.scala 57:26]
  assign _T_111 = _GEN_1 ^ 12'hfff; // @[rawFloatFromFN.scala 57:26]
  assign _T_112 = _T_3 ? _T_111 : {{1'd0}, io_a[62:52]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_113 = _T_3 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_2 = {{9'd0}, _T_113}; // @[rawFloatFromFN.scala 60:22]
  assign _T_114 = 11'h400 | _GEN_2; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_3 = {{1'd0}, _T_114}; // @[rawFloatFromFN.scala 59:15]
  assign _T_116 = _T_112 + _GEN_3; // @[rawFloatFromFN.scala 59:15]
  assign _T_117 = _T_3 & _T_4; // @[rawFloatFromFN.scala 62:34]
  assign _T_119 = _T_116[11:10] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_122 = _T_119 & ~_T_4; // @[rawFloatFromFN.scala 66:33]
  assign _T_125 = {1'b0,$signed(_T_116)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_127 = _T_3 ? _T_110 : io_a[51:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_129 = {1'h0,~_T_117,_T_127}; // @[Cat.scala 29:58]
  assign _T_131 = _T_117 ? 3'h0 : _T_125[11:9]; // @[recFNFromFN.scala 48:16]
  assign _GEN_4 = {{2'd0}, _T_122}; // @[recFNFromFN.scala 48:79]
  assign _T_133 = _T_131 | _GEN_4; // @[recFNFromFN.scala 48:79]
  assign _T_138 = {io_a[63],_T_133,_T_125[8:0],_T_129[51:0]}; // @[Cat.scala 29:58]
  assign _T_141 = _T_138[63:61] == 3'h0; // @[rawFloatFromRecFN.scala 51:54]
  assign _T_143 = _T_138[63:62] == 2'h3; // @[rawFloatFromRecFN.scala 52:54]
  assign _T_146 = _T_143 & _T_138[61]; // @[rawFloatFromRecFN.scala 55:33]
  assign _T_149 = _T_143 & ~_T_138[61]; // @[rawFloatFromRecFN.scala 56:33]
  assign _T_151 = {1'b0,$signed(_T_138[63:52])}; // @[rawFloatFromRecFN.scala 59:27]
  assign _T_155 = {1'h0,~_T_141,_T_138[51:0]}; // @[Cat.scala 29:58]
  assign _T_156 = $signed(_T_151) < 13'sh402; // @[fNFromRecFN.scala 50:39]
  assign _T_159 = 6'h1 - _T_151[5:0]; // @[fNFromRecFN.scala 51:39]
  assign _T_161 = _T_155[53:1] >> _T_159; // @[fNFromRecFN.scala 52:42]
  assign _T_165 = _T_151[10:0] - 11'h401; // @[fNFromRecFN.scala 57:45]
  assign _T_166 = _T_156 ? 11'h0 : _T_165; // @[fNFromRecFN.scala 55:16]
  assign _T_167 = _T_146 | _T_149; // @[fNFromRecFN.scala 59:44]
  assign _T_169 = _T_167 ? 11'h7ff : 11'h0; // @[Bitwise.scala 71:12]
  assign _T_170 = _T_166 | _T_169; // @[fNFromRecFN.scala 59:15]
  assign _T_172 = _T_149 ? 52'h0 : _T_155[51:0]; // @[fNFromRecFN.scala 63:20]
  assign _T_173 = _T_156 ? _T_161[51:0] : _T_172; // @[fNFromRecFN.scala 61:16]
  assign _T_174 = {_T_138[64],_T_170}; // @[Cat.scala 29:58]
  assign io_out = {_T_174,_T_173}; // @[ValExec_fNFromRecFN.scala 51:12]
  assign io_check = 1'h1; // @[ValExec_fNFromRecFN.scala 54:14]
  assign io_pass = io_out == io_a; // @[ValExec_fNFromRecFN.scala 55:13]
endmodule
