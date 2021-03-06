module ValExec_f16FromRecF16(
  input         clock,
  input         reset,
  input  [15:0] io_a,
  output [15:0] io_out,
  output        io_check,
  output        io_pass
);
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
  wire [16:0] _T_54; // @[Cat.scala 29:58]
  wire  _T_57; // @[rawFloatFromRecFN.scala 51:54]
  wire  _T_59; // @[rawFloatFromRecFN.scala 52:54]
  wire  _T_62; // @[rawFloatFromRecFN.scala 55:33]
  wire  _T_65; // @[rawFloatFromRecFN.scala 56:33]
  wire [6:0] _T_67; // @[rawFloatFromRecFN.scala 59:27]
  wire [11:0] _T_71; // @[Cat.scala 29:58]
  wire  _T_72; // @[fNFromRecFN.scala 50:39]
  wire [3:0] _T_75; // @[fNFromRecFN.scala 51:39]
  wire [10:0] _T_77; // @[fNFromRecFN.scala 52:42]
  wire [4:0] _T_81; // @[fNFromRecFN.scala 57:45]
  wire [4:0] _T_82; // @[fNFromRecFN.scala 55:16]
  wire  _T_83; // @[fNFromRecFN.scala 59:44]
  wire [4:0] _T_85; // @[Bitwise.scala 71:12]
  wire [4:0] _T_86; // @[fNFromRecFN.scala 59:15]
  wire [9:0] _T_88; // @[fNFromRecFN.scala 63:20]
  wire [9:0] _T_89; // @[fNFromRecFN.scala 61:16]
  wire [5:0] _T_90; // @[Cat.scala 29:58]
  assign _T_3 = io_a[14:10] == 5'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_4 = io_a[9:0] == 10'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_15 = io_a[1] ? 4'h8 : 4'h9; // @[Mux.scala 47:69]
  assign _T_16 = io_a[2] ? 4'h7 : _T_15; // @[Mux.scala 47:69]
  assign _T_17 = io_a[3] ? 4'h6 : _T_16; // @[Mux.scala 47:69]
  assign _T_18 = io_a[4] ? 4'h5 : _T_17; // @[Mux.scala 47:69]
  assign _T_19 = io_a[5] ? 4'h4 : _T_18; // @[Mux.scala 47:69]
  assign _T_20 = io_a[6] ? 4'h3 : _T_19; // @[Mux.scala 47:69]
  assign _T_21 = io_a[7] ? 4'h2 : _T_20; // @[Mux.scala 47:69]
  assign _T_22 = io_a[8] ? 4'h1 : _T_21; // @[Mux.scala 47:69]
  assign _T_23 = io_a[9] ? 4'h0 : _T_22; // @[Mux.scala 47:69]
  assign _GEN_0 = {{15'd0}, io_a[9:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_24 = _GEN_0 << _T_23; // @[rawFloatFromFN.scala 54:36]
  assign _T_26 = {_T_24[8:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_1 = {{2'd0}, _T_23}; // @[rawFloatFromFN.scala 57:26]
  assign _T_27 = _GEN_1 ^ 6'h3f; // @[rawFloatFromFN.scala 57:26]
  assign _T_28 = _T_3 ? _T_27 : {{1'd0}, io_a[14:10]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_29 = _T_3 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_2 = {{3'd0}, _T_29}; // @[rawFloatFromFN.scala 60:22]
  assign _T_30 = 5'h10 | _GEN_2; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_3 = {{1'd0}, _T_30}; // @[rawFloatFromFN.scala 59:15]
  assign _T_32 = _T_28 + _GEN_3; // @[rawFloatFromFN.scala 59:15]
  assign _T_33 = _T_3 & _T_4; // @[rawFloatFromFN.scala 62:34]
  assign _T_35 = _T_32[5:4] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_38 = _T_35 & ~_T_4; // @[rawFloatFromFN.scala 66:33]
  assign _T_41 = {1'b0,$signed(_T_32)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_43 = _T_3 ? _T_26 : io_a[9:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_45 = {1'h0,~_T_33,_T_43}; // @[Cat.scala 29:58]
  assign _T_47 = _T_33 ? 3'h0 : _T_41[5:3]; // @[recFNFromFN.scala 48:16]
  assign _GEN_4 = {{2'd0}, _T_38}; // @[recFNFromFN.scala 48:79]
  assign _T_49 = _T_47 | _GEN_4; // @[recFNFromFN.scala 48:79]
  assign _T_54 = {io_a[15],_T_49,_T_41[2:0],_T_45[9:0]}; // @[Cat.scala 29:58]
  assign _T_57 = _T_54[15:13] == 3'h0; // @[rawFloatFromRecFN.scala 51:54]
  assign _T_59 = _T_54[15:14] == 2'h3; // @[rawFloatFromRecFN.scala 52:54]
  assign _T_62 = _T_59 & _T_54[13]; // @[rawFloatFromRecFN.scala 55:33]
  assign _T_65 = _T_59 & ~_T_54[13]; // @[rawFloatFromRecFN.scala 56:33]
  assign _T_67 = {1'b0,$signed(_T_54[15:10])}; // @[rawFloatFromRecFN.scala 59:27]
  assign _T_71 = {1'h0,~_T_57,_T_54[9:0]}; // @[Cat.scala 29:58]
  assign _T_72 = $signed(_T_67) < 7'sh12; // @[fNFromRecFN.scala 50:39]
  assign _T_75 = 4'h1 - _T_67[3:0]; // @[fNFromRecFN.scala 51:39]
  assign _T_77 = _T_71[11:1] >> _T_75; // @[fNFromRecFN.scala 52:42]
  assign _T_81 = _T_67[4:0] - 5'h11; // @[fNFromRecFN.scala 57:45]
  assign _T_82 = _T_72 ? 5'h0 : _T_81; // @[fNFromRecFN.scala 55:16]
  assign _T_83 = _T_62 | _T_65; // @[fNFromRecFN.scala 59:44]
  assign _T_85 = _T_83 ? 5'h1f : 5'h0; // @[Bitwise.scala 71:12]
  assign _T_86 = _T_82 | _T_85; // @[fNFromRecFN.scala 59:15]
  assign _T_88 = _T_65 ? 10'h0 : _T_71[9:0]; // @[fNFromRecFN.scala 63:20]
  assign _T_89 = _T_72 ? _T_77[9:0] : _T_88; // @[fNFromRecFN.scala 61:16]
  assign _T_90 = {_T_54[16],_T_86}; // @[Cat.scala 29:58]
  assign io_out = {_T_90,_T_89}; // @[ValExec_fNFromRecFN.scala 51:12]
  assign io_check = 1'h1; // @[ValExec_fNFromRecFN.scala 54:14]
  assign io_pass = io_out == io_a; // @[ValExec_fNFromRecFN.scala 55:13]
endmodule
