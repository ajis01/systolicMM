module DivSqrtRawFN_small(
  input         clock,
  input         reset,
  output        io_inReady,
  input         io_inValid,
  input         io_a_isNaN,
  input         io_a_isInf,
  input         io_a_isZero,
  input         io_a_sign,
  input  [9:0]  io_a_sExp,
  input  [24:0] io_a_sig,
  input  [2:0]  io_roundingMode,
  output        io_rawOutValid_sqrt,
  output [2:0]  io_roundingModeOut,
  output        io_invalidExc,
  output        io_infiniteExc,
  output        io_rawOut_isNaN,
  output        io_rawOut_isInf,
  output        io_rawOut_isZero,
  output        io_rawOut_sign,
  output [9:0]  io_rawOut_sExp,
  output [26:0] io_rawOut_sig
);
  reg [26:0] cycleNum; // @[DivSqrtRecFN_small.scala 223:33]
  reg [31:0] _RAND_0;
  reg  majorExc_Z; // @[DivSqrtRecFN_small.scala 226:29]
  reg [31:0] _RAND_1;
  reg  isNaN_Z; // @[DivSqrtRecFN_small.scala 228:29]
  reg [31:0] _RAND_2;
  reg  isInf_Z; // @[DivSqrtRecFN_small.scala 229:29]
  reg [31:0] _RAND_3;
  reg  isZero_Z; // @[DivSqrtRecFN_small.scala 230:29]
  reg [31:0] _RAND_4;
  reg  sign_Z; // @[DivSqrtRecFN_small.scala 231:29]
  reg [31:0] _RAND_5;
  reg [9:0] sExp_Z; // @[DivSqrtRecFN_small.scala 232:29]
  reg [31:0] _RAND_6;
  reg [2:0] roundingMode_Z; // @[DivSqrtRecFN_small.scala 234:29]
  reg [31:0] _RAND_7;
  reg [25:0] rem_Z; // @[DivSqrtRecFN_small.scala 240:29]
  reg [31:0] _RAND_8;
  reg  notZeroRem_Z; // @[DivSqrtRecFN_small.scala 241:29]
  reg [31:0] _RAND_9;
  reg [25:0] sigX_Z; // @[DivSqrtRecFN_small.scala 242:29]
  reg [31:0] _RAND_10;
  wire  _T_4; // @[DivSqrtRecFN_small.scala 253:24]
  wire  notSigNaNIn_invalidExc_S_sqrt; // @[DivSqrtRecFN_small.scala 253:43]
  wire  _T_7; // @[common.scala 81:46]
  wire  majorExc_S; // @[DivSqrtRecFN_small.scala 256:38]
  wire  isNaN_S; // @[DivSqrtRecFN_small.scala 263:26]
  wire  _T_29; // @[DivSqrtRecFN_small.scala 270:39]
  wire  specialCaseA_S; // @[DivSqrtRecFN_small.scala 270:55]
  wire  normalCase_S_sqrt; // @[DivSqrtRecFN_small.scala 273:46]
  wire  evenSqrt_S; // @[DivSqrtRecFN_small.scala 288:35]
  wire  idle; // @[DivSqrtRecFN_small.scala 293:24]
  wire  inReady; // @[DivSqrtRecFN_small.scala 294:24]
  wire  entering; // @[DivSqrtRecFN_small.scala 295:28]
  wire  entering_normalCase; // @[DivSqrtRecFN_small.scala 296:40]
  wire  skipCycle2; // @[DivSqrtRecFN_small.scala 298:34]
  wire  _T_52; // @[DivSqrtRecFN_small.scala 300:18]
  wire  _T_54; // @[DivSqrtRecFN_small.scala 302:26]
  wire [1:0] _T_55; // @[DivSqrtRecFN_small.scala 302:16]
  wire [25:0] _T_57; // @[DivSqrtRecFN_small.scala 305:24]
  wire [26:0] _T_58; // @[DivSqrtRecFN_small.scala 304:20]
  wire [26:0] _T_59; // @[DivSqrtRecFN_small.scala 303:16]
  wire [26:0] _GEN_14; // @[DivSqrtRecFN_small.scala 302:59]
  wire [26:0] _T_60; // @[DivSqrtRecFN_small.scala 302:59]
  wire  _T_63; // @[DivSqrtRecFN_small.scala 310:28]
  wire [25:0] _T_65; // @[DivSqrtRecFN_small.scala 310:16]
  wire [26:0] _GEN_15; // @[DivSqrtRecFN_small.scala 309:15]
  wire [26:0] _T_66; // @[DivSqrtRecFN_small.scala 309:15]
  wire [1:0] _T_67; // @[DivSqrtRecFN_small.scala 311:16]
  wire [26:0] _GEN_16; // @[DivSqrtRecFN_small.scala 310:63]
  wire [26:0] _T_68; // @[DivSqrtRecFN_small.scala 310:63]
  wire [8:0] _T_69; // @[DivSqrtRecFN_small.scala 329:29]
  wire [9:0] _T_70; // @[DivSqrtRecFN_small.scala 329:34]
  wire  _T_76; // @[DivSqrtRecFN_small.scala 341:21]
  wire [25:0] _T_77; // @[DivSqrtRecFN_small.scala 341:47]
  wire [25:0] _T_78; // @[DivSqrtRecFN_small.scala 341:12]
  wire  _T_79; // @[DivSqrtRecFN_small.scala 342:21]
  wire [1:0] _T_82; // @[DivSqrtRecFN_small.scala 343:56]
  wire [24:0] _T_84; // @[DivSqrtRecFN_small.scala 344:44]
  wire [26:0] _T_85; // @[Cat.scala 29:58]
  wire [26:0] _T_86; // @[DivSqrtRecFN_small.scala 342:12]
  wire [26:0] _GEN_17; // @[DivSqrtRecFN_small.scala 341:57]
  wire [26:0] _T_87; // @[DivSqrtRecFN_small.scala 341:57]
  wire [26:0] _T_89; // @[DivSqrtRecFN_small.scala 348:29]
  wire [26:0] _T_90; // @[DivSqrtRecFN_small.scala 348:12]
  wire [26:0] rem; // @[DivSqrtRecFN_small.scala 347:11]
  wire [24:0] bitMask; // @[DivSqrtRecFN_small.scala 349:27]
  wire [24:0] _T_96; // @[DivSqrtRecFN_small.scala 352:12]
  wire [25:0] _T_97; // @[DivSqrtRecFN_small.scala 351:73]
  wire [25:0] _T_99; // @[DivSqrtRecFN_small.scala 353:12]
  wire [25:0] _T_100; // @[DivSqrtRecFN_small.scala 352:73]
  wire [26:0] _T_110; // @[DivSqrtRecFN_small.scala 355:44]
  wire [26:0] _GEN_18; // @[DivSqrtRecFN_small.scala 355:48]
  wire [26:0] _T_111; // @[DivSqrtRecFN_small.scala 355:48]
  wire [26:0] _T_112; // @[DivSqrtRecFN_small.scala 355:12]
  wire [26:0] _GEN_19; // @[DivSqrtRecFN_small.scala 354:73]
  wire [26:0] trialTerm; // @[DivSqrtRecFN_small.scala 354:73]
  wire [27:0] _T_113; // @[DivSqrtRecFN_small.scala 356:24]
  wire [27:0] _T_114; // @[DivSqrtRecFN_small.scala 356:41]
  wire [27:0] trialRem; // @[DivSqrtRecFN_small.scala 356:29]
  wire  newBit; // @[DivSqrtRecFN_small.scala 357:23]
  wire  _T_118; // @[DivSqrtRecFN_small.scala 359:41]
  wire  _T_120; // @[DivSqrtRecFN_small.scala 359:31]
  wire [27:0] _T_121; // @[DivSqrtRecFN_small.scala 360:39]
  wire [27:0] _T_122; // @[DivSqrtRecFN_small.scala 360:21]
  wire [27:0] _GEN_10; // @[DivSqrtRecFN_small.scala 359:58]
  wire  _T_124; // @[DivSqrtRecFN_small.scala 362:45]
  wire  _T_125; // @[DivSqrtRecFN_small.scala 362:31]
  wire  _T_126; // @[DivSqrtRecFN_small.scala 363:35]
  wire [24:0] _T_132; // @[DivSqrtRecFN_small.scala 366:16]
  wire [25:0] _T_133; // @[DivSqrtRecFN_small.scala 365:71]
  wire [23:0] _T_135; // @[DivSqrtRecFN_small.scala 367:47]
  wire [23:0] _T_136; // @[DivSqrtRecFN_small.scala 367:16]
  wire [25:0] _GEN_20; // @[DivSqrtRecFN_small.scala 366:71]
  wire [25:0] _T_137; // @[DivSqrtRecFN_small.scala 366:71]
  wire [25:0] _GEN_21; // @[DivSqrtRecFN_small.scala 368:48]
  wire [25:0] _T_139; // @[DivSqrtRecFN_small.scala 368:48]
  wire [25:0] _T_140; // @[DivSqrtRecFN_small.scala 368:16]
  wire [25:0] _T_141; // @[DivSqrtRecFN_small.scala 367:71]
  wire [26:0] _GEN_22; // @[DivSqrtRecFN_small.scala 385:35]
  assign _T_4 = ~io_a_isNaN & ~io_a_isZero; // @[DivSqrtRecFN_small.scala 253:24]
  assign notSigNaNIn_invalidExc_S_sqrt = _T_4 & io_a_sign; // @[DivSqrtRecFN_small.scala 253:43]
  assign _T_7 = io_a_isNaN & ~io_a_sig[22]; // @[common.scala 81:46]
  assign majorExc_S = _T_7 | notSigNaNIn_invalidExc_S_sqrt; // @[DivSqrtRecFN_small.scala 256:38]
  assign isNaN_S = io_a_isNaN | notSigNaNIn_invalidExc_S_sqrt; // @[DivSqrtRecFN_small.scala 263:26]
  assign _T_29 = io_a_isNaN | io_a_isInf; // @[DivSqrtRecFN_small.scala 270:39]
  assign specialCaseA_S = _T_29 | io_a_isZero; // @[DivSqrtRecFN_small.scala 270:55]
  assign normalCase_S_sqrt = ~specialCaseA_S & ~io_a_sign; // @[DivSqrtRecFN_small.scala 273:46]
  assign evenSqrt_S = ~io_a_sExp[0]; // @[DivSqrtRecFN_small.scala 288:35]
  assign idle = cycleNum[0]; // @[DivSqrtRecFN_small.scala 293:24]
  assign inReady = idle | cycleNum[1]; // @[DivSqrtRecFN_small.scala 294:24]
  assign entering = inReady & io_inValid; // @[DivSqrtRecFN_small.scala 295:28]
  assign entering_normalCase = entering & normalCase_S_sqrt; // @[DivSqrtRecFN_small.scala 296:40]
  assign skipCycle2 = cycleNum[3] & sigX_Z[25]; // @[DivSqrtRecFN_small.scala 298:34]
  assign _T_52 = ~idle | entering; // @[DivSqrtRecFN_small.scala 300:18]
  assign _T_54 = entering & ~normalCase_S_sqrt; // @[DivSqrtRecFN_small.scala 302:26]
  assign _T_55 = _T_54 ? 2'h2 : 2'h0; // @[DivSqrtRecFN_small.scala 302:16]
  assign _T_57 = io_a_sExp[0] ? 26'h1000000 : 26'h2000000; // @[DivSqrtRecFN_small.scala 305:24]
  assign _T_58 = {{1'd0}, _T_57}; // @[DivSqrtRecFN_small.scala 304:20]
  assign _T_59 = entering_normalCase ? _T_58 : 27'h0; // @[DivSqrtRecFN_small.scala 303:16]
  assign _GEN_14 = {{25'd0}, _T_55}; // @[DivSqrtRecFN_small.scala 302:59]
  assign _T_60 = _GEN_14 | _T_59; // @[DivSqrtRecFN_small.scala 302:59]
  assign _T_63 = ~entering & ~skipCycle2; // @[DivSqrtRecFN_small.scala 310:28]
  assign _T_65 = _T_63 ? cycleNum[26:1] : 26'h0; // @[DivSqrtRecFN_small.scala 310:16]
  assign _GEN_15 = {{1'd0}, _T_65}; // @[DivSqrtRecFN_small.scala 309:15]
  assign _T_66 = _T_60 | _GEN_15; // @[DivSqrtRecFN_small.scala 309:15]
  assign _T_67 = skipCycle2 ? 2'h2 : 2'h0; // @[DivSqrtRecFN_small.scala 311:16]
  assign _GEN_16 = {{25'd0}, _T_67}; // @[DivSqrtRecFN_small.scala 310:63]
  assign _T_68 = _T_66 | _GEN_16; // @[DivSqrtRecFN_small.scala 310:63]
  assign _T_69 = io_a_sExp[9:1]; // @[DivSqrtRecFN_small.scala 329:29]
  assign _T_70 = $signed(_T_69) + 9'sh80; // @[DivSqrtRecFN_small.scala 329:34]
  assign _T_76 = inReady & evenSqrt_S; // @[DivSqrtRecFN_small.scala 341:21]
  assign _T_77 = {io_a_sig, 1'h0}; // @[DivSqrtRecFN_small.scala 341:47]
  assign _T_78 = _T_76 ? _T_77 : 26'h0; // @[DivSqrtRecFN_small.scala 341:12]
  assign _T_79 = inReady & io_a_sExp[0]; // @[DivSqrtRecFN_small.scala 342:21]
  assign _T_82 = io_a_sig[23:22] - 2'h1; // @[DivSqrtRecFN_small.scala 343:56]
  assign _T_84 = {io_a_sig[21:0], 3'h0}; // @[DivSqrtRecFN_small.scala 344:44]
  assign _T_85 = {_T_82,_T_84}; // @[Cat.scala 29:58]
  assign _T_86 = _T_79 ? _T_85 : 27'h0; // @[DivSqrtRecFN_small.scala 342:12]
  assign _GEN_17 = {{1'd0}, _T_78}; // @[DivSqrtRecFN_small.scala 341:57]
  assign _T_87 = _GEN_17 | _T_86; // @[DivSqrtRecFN_small.scala 341:57]
  assign _T_89 = {rem_Z, 1'h0}; // @[DivSqrtRecFN_small.scala 348:29]
  assign _T_90 = inReady ? 27'h0 : _T_89; // @[DivSqrtRecFN_small.scala 348:12]
  assign rem = _T_87 | _T_90; // @[DivSqrtRecFN_small.scala 347:11]
  assign bitMask = cycleNum[26:2]; // @[DivSqrtRecFN_small.scala 349:27]
  assign _T_96 = _T_76 ? 25'h1000000 : 25'h0; // @[DivSqrtRecFN_small.scala 352:12]
  assign _T_97 = {{1'd0}, _T_96}; // @[DivSqrtRecFN_small.scala 351:73]
  assign _T_99 = _T_79 ? 26'h2800000 : 26'h0; // @[DivSqrtRecFN_small.scala 353:12]
  assign _T_100 = _T_97 | _T_99; // @[DivSqrtRecFN_small.scala 352:73]
  assign _T_110 = {sigX_Z, 1'h0}; // @[DivSqrtRecFN_small.scala 355:44]
  assign _GEN_18 = {{2'd0}, bitMask}; // @[DivSqrtRecFN_small.scala 355:48]
  assign _T_111 = _T_110 | _GEN_18; // @[DivSqrtRecFN_small.scala 355:48]
  assign _T_112 = inReady ? 27'h0 : _T_111; // @[DivSqrtRecFN_small.scala 355:12]
  assign _GEN_19 = {{1'd0}, _T_100}; // @[DivSqrtRecFN_small.scala 354:73]
  assign trialTerm = _GEN_19 | _T_112; // @[DivSqrtRecFN_small.scala 354:73]
  assign _T_113 = {1'b0,$signed(rem)}; // @[DivSqrtRecFN_small.scala 356:24]
  assign _T_114 = {1'b0,$signed(trialTerm)}; // @[DivSqrtRecFN_small.scala 356:41]
  assign trialRem = $signed(_T_113) - $signed(_T_114); // @[DivSqrtRecFN_small.scala 356:29]
  assign newBit = 28'sh0 <= $signed(trialRem); // @[DivSqrtRecFN_small.scala 357:23]
  assign _T_118 = idle | cycleNum[2]; // @[DivSqrtRecFN_small.scala 359:41]
  assign _T_120 = entering_normalCase | ~_T_118; // @[DivSqrtRecFN_small.scala 359:31]
  assign _T_121 = $signed(_T_113) - $signed(_T_114); // @[DivSqrtRecFN_small.scala 360:39]
  assign _T_122 = newBit ? _T_121 : {{1'd0}, rem}; // @[DivSqrtRecFN_small.scala 360:21]
  assign _GEN_10 = _T_120 ? _T_122 : {{2'd0}, rem_Z}; // @[DivSqrtRecFN_small.scala 359:58]
  assign _T_124 = ~inReady & newBit; // @[DivSqrtRecFN_small.scala 362:45]
  assign _T_125 = entering_normalCase | _T_124; // @[DivSqrtRecFN_small.scala 362:31]
  assign _T_126 = $signed(trialRem) != 28'sh0; // @[DivSqrtRecFN_small.scala 363:35]
  assign _T_132 = inReady ? 25'h1000000 : 25'h0; // @[DivSqrtRecFN_small.scala 366:16]
  assign _T_133 = {{1'd0}, _T_132}; // @[DivSqrtRecFN_small.scala 365:71]
  assign _T_135 = {newBit, 23'h0}; // @[DivSqrtRecFN_small.scala 367:47]
  assign _T_136 = _T_79 ? _T_135 : 24'h0; // @[DivSqrtRecFN_small.scala 367:16]
  assign _GEN_20 = {{2'd0}, _T_136}; // @[DivSqrtRecFN_small.scala 366:71]
  assign _T_137 = _T_133 | _GEN_20; // @[DivSqrtRecFN_small.scala 366:71]
  assign _GEN_21 = {{1'd0}, bitMask}; // @[DivSqrtRecFN_small.scala 368:48]
  assign _T_139 = sigX_Z | _GEN_21; // @[DivSqrtRecFN_small.scala 368:48]
  assign _T_140 = inReady ? 26'h0 : _T_139; // @[DivSqrtRecFN_small.scala 368:16]
  assign _T_141 = _T_137 | _T_140; // @[DivSqrtRecFN_small.scala 367:71]
  assign _GEN_22 = {{26'd0}, notZeroRem_Z}; // @[DivSqrtRecFN_small.scala 385:35]
  assign io_inReady = idle | cycleNum[1]; // @[DivSqrtRecFN_small.scala 314:16]
  assign io_rawOutValid_sqrt = cycleNum[1]; // @[DivSqrtRecFN_small.scala 376:25]
  assign io_roundingModeOut = roundingMode_Z; // @[DivSqrtRecFN_small.scala 377:25]
  assign io_invalidExc = majorExc_Z & isNaN_Z; // @[DivSqrtRecFN_small.scala 378:22]
  assign io_infiniteExc = majorExc_Z & ~isNaN_Z; // @[DivSqrtRecFN_small.scala 379:22]
  assign io_rawOut_isNaN = isNaN_Z; // @[DivSqrtRecFN_small.scala 380:22]
  assign io_rawOut_isInf = isInf_Z; // @[DivSqrtRecFN_small.scala 381:22]
  assign io_rawOut_isZero = isZero_Z; // @[DivSqrtRecFN_small.scala 382:22]
  assign io_rawOut_sign = sign_Z; // @[DivSqrtRecFN_small.scala 383:22]
  assign io_rawOut_sExp = sExp_Z; // @[DivSqrtRecFN_small.scala 384:22]
  assign io_rawOut_sig = _T_110 | _GEN_22; // @[DivSqrtRecFN_small.scala 385:22]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  cycleNum = _RAND_0[26:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  majorExc_Z = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  isNaN_Z = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  isInf_Z = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  isZero_Z = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  sign_Z = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  sExp_Z = _RAND_6[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  roundingMode_Z = _RAND_7[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  rem_Z = _RAND_8[25:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  notZeroRem_Z = _RAND_9[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  sigX_Z = _RAND_10[25:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      cycleNum <= 27'h1;
    end else if (_T_52) begin
      cycleNum <= _T_68;
    end
    if (entering) begin
      majorExc_Z <= majorExc_S;
    end
    if (entering) begin
      isNaN_Z <= isNaN_S;
    end
    if (entering) begin
      isInf_Z <= io_a_isInf;
    end
    if (entering) begin
      isZero_Z <= io_a_isZero;
    end
    if (entering) begin
      sign_Z <= io_a_sign;
    end
    if (entering_normalCase) begin
      sExp_Z <= _T_70;
    end
    if (entering_normalCase) begin
      roundingMode_Z <= io_roundingMode;
    end
    rem_Z <= _GEN_10[25:0];
    if (_T_125) begin
      notZeroRem_Z <= _T_126;
    end
    if (_T_125) begin
      sigX_Z <= _T_141;
    end
  end
endmodule
module DivSqrtRecFNToRaw_small(
  input         clock,
  input         reset,
  output        io_inReady,
  input         io_inValid,
  input  [32:0] io_a,
  input  [2:0]  io_roundingMode,
  output        io_rawOutValid_sqrt,
  output [2:0]  io_roundingModeOut,
  output        io_invalidExc,
  output        io_infiniteExc,
  output        io_rawOut_isNaN,
  output        io_rawOut_isInf,
  output        io_rawOut_isZero,
  output        io_rawOut_sign,
  output [9:0]  io_rawOut_sExp,
  output [26:0] io_rawOut_sig
);
  wire  divSqrtRawFN_clock; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_reset; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_inReady; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_inValid; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_a_isNaN; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_a_isInf; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_a_isZero; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_a_sign; // @[DivSqrtRecFN_small.scala 416:15]
  wire [9:0] divSqrtRawFN_io_a_sExp; // @[DivSqrtRecFN_small.scala 416:15]
  wire [24:0] divSqrtRawFN_io_a_sig; // @[DivSqrtRecFN_small.scala 416:15]
  wire [2:0] divSqrtRawFN_io_roundingMode; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_rawOutValid_sqrt; // @[DivSqrtRecFN_small.scala 416:15]
  wire [2:0] divSqrtRawFN_io_roundingModeOut; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_invalidExc; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_infiniteExc; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_rawOut_isNaN; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_rawOut_isInf; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_rawOut_isZero; // @[DivSqrtRecFN_small.scala 416:15]
  wire  divSqrtRawFN_io_rawOut_sign; // @[DivSqrtRecFN_small.scala 416:15]
  wire [9:0] divSqrtRawFN_io_rawOut_sExp; // @[DivSqrtRecFN_small.scala 416:15]
  wire [26:0] divSqrtRawFN_io_rawOut_sig; // @[DivSqrtRecFN_small.scala 416:15]
  wire  _T_2; // @[rawFloatFromRecFN.scala 51:54]
  wire  _T_4; // @[rawFloatFromRecFN.scala 52:54]
  wire [1:0] _T_15; // @[Cat.scala 29:58]
  DivSqrtRawFN_small divSqrtRawFN ( // @[DivSqrtRecFN_small.scala 416:15]
    .clock(divSqrtRawFN_clock),
    .reset(divSqrtRawFN_reset),
    .io_inReady(divSqrtRawFN_io_inReady),
    .io_inValid(divSqrtRawFN_io_inValid),
    .io_a_isNaN(divSqrtRawFN_io_a_isNaN),
    .io_a_isInf(divSqrtRawFN_io_a_isInf),
    .io_a_isZero(divSqrtRawFN_io_a_isZero),
    .io_a_sign(divSqrtRawFN_io_a_sign),
    .io_a_sExp(divSqrtRawFN_io_a_sExp),
    .io_a_sig(divSqrtRawFN_io_a_sig),
    .io_roundingMode(divSqrtRawFN_io_roundingMode),
    .io_rawOutValid_sqrt(divSqrtRawFN_io_rawOutValid_sqrt),
    .io_roundingModeOut(divSqrtRawFN_io_roundingModeOut),
    .io_invalidExc(divSqrtRawFN_io_invalidExc),
    .io_infiniteExc(divSqrtRawFN_io_infiniteExc),
    .io_rawOut_isNaN(divSqrtRawFN_io_rawOut_isNaN),
    .io_rawOut_isInf(divSqrtRawFN_io_rawOut_isInf),
    .io_rawOut_isZero(divSqrtRawFN_io_rawOut_isZero),
    .io_rawOut_sign(divSqrtRawFN_io_rawOut_sign),
    .io_rawOut_sExp(divSqrtRawFN_io_rawOut_sExp),
    .io_rawOut_sig(divSqrtRawFN_io_rawOut_sig)
  );
  assign _T_2 = io_a[31:29] == 3'h0; // @[rawFloatFromRecFN.scala 51:54]
  assign _T_4 = io_a[31:30] == 2'h3; // @[rawFloatFromRecFN.scala 52:54]
  assign _T_15 = {1'h0,~_T_2}; // @[Cat.scala 29:58]
  assign io_inReady = divSqrtRawFN_io_inReady; // @[DivSqrtRecFN_small.scala 418:16]
  assign io_rawOutValid_sqrt = divSqrtRawFN_io_rawOutValid_sqrt; // @[DivSqrtRecFN_small.scala 426:25]
  assign io_roundingModeOut = divSqrtRawFN_io_roundingModeOut; // @[DivSqrtRecFN_small.scala 427:25]
  assign io_invalidExc = divSqrtRawFN_io_invalidExc; // @[DivSqrtRecFN_small.scala 428:25]
  assign io_infiniteExc = divSqrtRawFN_io_infiniteExc; // @[DivSqrtRecFN_small.scala 429:25]
  assign io_rawOut_isNaN = divSqrtRawFN_io_rawOut_isNaN; // @[DivSqrtRecFN_small.scala 430:25]
  assign io_rawOut_isInf = divSqrtRawFN_io_rawOut_isInf; // @[DivSqrtRecFN_small.scala 430:25]
  assign io_rawOut_isZero = divSqrtRawFN_io_rawOut_isZero; // @[DivSqrtRecFN_small.scala 430:25]
  assign io_rawOut_sign = divSqrtRawFN_io_rawOut_sign; // @[DivSqrtRecFN_small.scala 430:25]
  assign io_rawOut_sExp = divSqrtRawFN_io_rawOut_sExp; // @[DivSqrtRecFN_small.scala 430:25]
  assign io_rawOut_sig = divSqrtRawFN_io_rawOut_sig; // @[DivSqrtRecFN_small.scala 430:25]
  assign divSqrtRawFN_clock = clock;
  assign divSqrtRawFN_reset = reset;
  assign divSqrtRawFN_io_inValid = io_inValid; // @[DivSqrtRecFN_small.scala 419:34]
  assign divSqrtRawFN_io_a_isNaN = _T_4 & io_a[29]; // @[DivSqrtRecFN_small.scala 421:34]
  assign divSqrtRawFN_io_a_isInf = _T_4 & ~io_a[29]; // @[DivSqrtRecFN_small.scala 421:34]
  assign divSqrtRawFN_io_a_isZero = io_a[31:29] == 3'h0; // @[DivSqrtRecFN_small.scala 421:34]
  assign divSqrtRawFN_io_a_sign = io_a[32]; // @[DivSqrtRecFN_small.scala 421:34]
  assign divSqrtRawFN_io_a_sExp = {1'b0,$signed(io_a[31:23])}; // @[DivSqrtRecFN_small.scala 421:34]
  assign divSqrtRawFN_io_a_sig = {_T_15,io_a[22:0]}; // @[DivSqrtRecFN_small.scala 421:34]
  assign divSqrtRawFN_io_roundingMode = io_roundingMode; // @[DivSqrtRecFN_small.scala 423:34]
endmodule
module RoundAnyRawFNToRecFN(
  input         io_invalidExc,
  input         io_infiniteExc,
  input         io_in_isNaN,
  input         io_in_isInf,
  input         io_in_isZero,
  input         io_in_sign,
  input  [9:0]  io_in_sExp,
  input  [26:0] io_in_sig,
  input  [2:0]  io_roundingMode,
  input         io_detectTininess,
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
  wire  doShiftSigDown1; // @[RoundAnyRawFNToRecFN.scala 118:61]
  wire  _T_5; // @[primitives.scala 57:25]
  wire  _T_7; // @[primitives.scala 57:25]
  wire  _T_9; // @[primitives.scala 57:25]
  wire [5:0] _T_10; // @[primitives.scala 58:26]
  wire [64:0] _T_11; // @[primitives.scala 77:58]
  wire [15:0] _T_17; // @[Bitwise.scala 102:31]
  wire [15:0] _T_19; // @[Bitwise.scala 102:65]
  wire [15:0] _T_21; // @[Bitwise.scala 102:75]
  wire [15:0] _T_22; // @[Bitwise.scala 102:39]
  wire [15:0] _GEN_0; // @[Bitwise.scala 102:31]
  wire [15:0] _T_27; // @[Bitwise.scala 102:31]
  wire [15:0] _T_29; // @[Bitwise.scala 102:65]
  wire [15:0] _T_31; // @[Bitwise.scala 102:75]
  wire [15:0] _T_32; // @[Bitwise.scala 102:39]
  wire [15:0] _GEN_1; // @[Bitwise.scala 102:31]
  wire [15:0] _T_37; // @[Bitwise.scala 102:31]
  wire [15:0] _T_39; // @[Bitwise.scala 102:65]
  wire [15:0] _T_41; // @[Bitwise.scala 102:75]
  wire [15:0] _T_42; // @[Bitwise.scala 102:39]
  wire [15:0] _GEN_2; // @[Bitwise.scala 102:31]
  wire [15:0] _T_47; // @[Bitwise.scala 102:31]
  wire [15:0] _T_49; // @[Bitwise.scala 102:65]
  wire [15:0] _T_51; // @[Bitwise.scala 102:75]
  wire [15:0] _T_52; // @[Bitwise.scala 102:39]
  wire [21:0] _T_69; // @[Cat.scala 29:58]
  wire [21:0] _T_71; // @[primitives.scala 74:21]
  wire [24:0] _T_73; // @[Cat.scala 29:58]
  wire [2:0] _T_83; // @[Cat.scala 29:58]
  wire [2:0] _T_84; // @[primitives.scala 61:24]
  wire [24:0] _T_85; // @[primitives.scala 66:24]
  wire [24:0] _T_86; // @[primitives.scala 61:24]
  wire [24:0] _GEN_3; // @[RoundAnyRawFNToRecFN.scala 157:23]
  wire [24:0] _T_87; // @[RoundAnyRawFNToRecFN.scala 157:23]
  wire [26:0] _T_88; // @[Cat.scala 29:58]
  wire [26:0] _T_90; // @[Cat.scala 29:58]
  wire [26:0] _T_92; // @[RoundAnyRawFNToRecFN.scala 161:46]
  wire [26:0] _T_93; // @[RoundAnyRawFNToRecFN.scala 162:40]
  wire  _T_94; // @[RoundAnyRawFNToRecFN.scala 162:56]
  wire [26:0] _T_95; // @[RoundAnyRawFNToRecFN.scala 163:42]
  wire  _T_96; // @[RoundAnyRawFNToRecFN.scala 163:62]
  wire  _T_97; // @[RoundAnyRawFNToRecFN.scala 164:36]
  wire  _T_98; // @[RoundAnyRawFNToRecFN.scala 167:38]
  wire  _T_99; // @[RoundAnyRawFNToRecFN.scala 167:67]
  wire  _T_100; // @[RoundAnyRawFNToRecFN.scala 169:29]
  wire  _T_101; // @[RoundAnyRawFNToRecFN.scala 168:31]
  wire [26:0] _T_102; // @[RoundAnyRawFNToRecFN.scala 172:32]
  wire [25:0] _T_104; // @[RoundAnyRawFNToRecFN.scala 172:49]
  wire  _T_105; // @[RoundAnyRawFNToRecFN.scala 173:49]
  wire  _T_107; // @[RoundAnyRawFNToRecFN.scala 173:64]
  wire [25:0] _T_109; // @[RoundAnyRawFNToRecFN.scala 173:25]
  wire [25:0] _T_111; // @[RoundAnyRawFNToRecFN.scala 172:61]
  wire [26:0] _T_113; // @[RoundAnyRawFNToRecFN.scala 178:30]
  wire  _T_115; // @[RoundAnyRawFNToRecFN.scala 179:42]
  wire [25:0] _T_117; // @[RoundAnyRawFNToRecFN.scala 179:24]
  wire [25:0] _GEN_4; // @[RoundAnyRawFNToRecFN.scala 178:47]
  wire [25:0] _T_118; // @[RoundAnyRawFNToRecFN.scala 178:47]
  wire [25:0] _T_119; // @[RoundAnyRawFNToRecFN.scala 171:16]
  wire [2:0] _T_121; // @[RoundAnyRawFNToRecFN.scala 183:69]
  wire [9:0] _GEN_5; // @[RoundAnyRawFNToRecFN.scala 183:40]
  wire [10:0] _T_122; // @[RoundAnyRawFNToRecFN.scala 183:40]
  wire [8:0] common_expOut; // @[RoundAnyRawFNToRecFN.scala 185:37]
  wire [22:0] common_fractOut; // @[RoundAnyRawFNToRecFN.scala 187:16]
  wire [3:0] _T_127; // @[RoundAnyRawFNToRecFN.scala 194:30]
  wire  common_overflow; // @[RoundAnyRawFNToRecFN.scala 194:50]
  wire  common_totalUnderflow; // @[RoundAnyRawFNToRecFN.scala 198:31]
  wire  _T_132; // @[RoundAnyRawFNToRecFN.scala 201:16]
  wire  _T_134; // @[RoundAnyRawFNToRecFN.scala 203:30]
  wire  _T_136; // @[RoundAnyRawFNToRecFN.scala 203:70]
  wire  _T_137; // @[RoundAnyRawFNToRecFN.scala 203:49]
  wire  _T_139; // @[RoundAnyRawFNToRecFN.scala 205:67]
  wire  _T_140; // @[RoundAnyRawFNToRecFN.scala 207:29]
  wire  _T_141; // @[RoundAnyRawFNToRecFN.scala 206:46]
  wire  _T_144; // @[RoundAnyRawFNToRecFN.scala 209:16]
  wire [1:0] _T_145; // @[RoundAnyRawFNToRecFN.scala 218:48]
  wire  _T_146; // @[RoundAnyRawFNToRecFN.scala 218:62]
  wire  _T_147; // @[RoundAnyRawFNToRecFN.scala 218:32]
  wire  _T_150; // @[RoundAnyRawFNToRecFN.scala 219:30]
  wire  _T_151; // @[RoundAnyRawFNToRecFN.scala 218:74]
  wire  _T_155; // @[RoundAnyRawFNToRecFN.scala 221:39]
  wire  _T_157; // @[RoundAnyRawFNToRecFN.scala 220:77]
  wire  _T_158; // @[RoundAnyRawFNToRecFN.scala 224:38]
  wire  _T_159; // @[RoundAnyRawFNToRecFN.scala 225:45]
  wire  _T_160; // @[RoundAnyRawFNToRecFN.scala 225:60]
  wire  _T_162; // @[RoundAnyRawFNToRecFN.scala 219:76]
  wire  common_underflow; // @[RoundAnyRawFNToRecFN.scala 215:40]
  wire  common_inexact; // @[RoundAnyRawFNToRecFN.scala 228:49]
  wire  isNaNOut; // @[RoundAnyRawFNToRecFN.scala 233:34]
  wire  notNaN_isSpecialInfOut; // @[RoundAnyRawFNToRecFN.scala 234:49]
  wire  _T_167; // @[RoundAnyRawFNToRecFN.scala 235:33]
  wire  commonCase; // @[RoundAnyRawFNToRecFN.scala 235:61]
  wire  overflow; // @[RoundAnyRawFNToRecFN.scala 236:32]
  wire  underflow; // @[RoundAnyRawFNToRecFN.scala 237:32]
  wire  _T_169; // @[RoundAnyRawFNToRecFN.scala 238:43]
  wire  inexact; // @[RoundAnyRawFNToRecFN.scala 238:28]
  wire  overflow_roundMagUp; // @[RoundAnyRawFNToRecFN.scala 241:60]
  wire  _T_171; // @[RoundAnyRawFNToRecFN.scala 243:20]
  wire  _T_172; // @[RoundAnyRawFNToRecFN.scala 243:60]
  wire  pegMinNonzeroMagOut; // @[RoundAnyRawFNToRecFN.scala 243:45]
  wire  pegMaxFiniteMagOut; // @[RoundAnyRawFNToRecFN.scala 244:39]
  wire  _T_174; // @[RoundAnyRawFNToRecFN.scala 246:45]
  wire  notNaN_isInfOut; // @[RoundAnyRawFNToRecFN.scala 246:32]
  wire  signOut; // @[RoundAnyRawFNToRecFN.scala 248:22]
  wire  _T_175; // @[RoundAnyRawFNToRecFN.scala 251:32]
  wire [8:0] _T_176; // @[RoundAnyRawFNToRecFN.scala 251:18]
  wire [8:0] _T_178; // @[RoundAnyRawFNToRecFN.scala 250:24]
  wire [8:0] _T_180; // @[RoundAnyRawFNToRecFN.scala 255:18]
  wire [8:0] _T_182; // @[RoundAnyRawFNToRecFN.scala 254:17]
  wire [8:0] _T_183; // @[RoundAnyRawFNToRecFN.scala 259:18]
  wire [8:0] _T_185; // @[RoundAnyRawFNToRecFN.scala 258:17]
  wire [8:0] _T_186; // @[RoundAnyRawFNToRecFN.scala 263:18]
  wire [8:0] _T_188; // @[RoundAnyRawFNToRecFN.scala 262:17]
  wire [8:0] _T_189; // @[RoundAnyRawFNToRecFN.scala 267:16]
  wire [8:0] _T_190; // @[RoundAnyRawFNToRecFN.scala 266:18]
  wire [8:0] _T_191; // @[RoundAnyRawFNToRecFN.scala 271:16]
  wire [8:0] _T_192; // @[RoundAnyRawFNToRecFN.scala 270:15]
  wire [8:0] _T_193; // @[RoundAnyRawFNToRecFN.scala 275:16]
  wire [8:0] _T_194; // @[RoundAnyRawFNToRecFN.scala 274:15]
  wire [8:0] _T_195; // @[RoundAnyRawFNToRecFN.scala 276:16]
  wire [8:0] expOut; // @[RoundAnyRawFNToRecFN.scala 275:77]
  wire  _T_196; // @[RoundAnyRawFNToRecFN.scala 278:22]
  wire  _T_197; // @[RoundAnyRawFNToRecFN.scala 278:38]
  wire [22:0] _T_198; // @[RoundAnyRawFNToRecFN.scala 279:16]
  wire [22:0] _T_199; // @[RoundAnyRawFNToRecFN.scala 278:12]
  wire [22:0] _T_201; // @[Bitwise.scala 71:12]
  wire [22:0] fractOut; // @[RoundAnyRawFNToRecFN.scala 281:11]
  wire [9:0] _T_202; // @[Cat.scala 29:58]
  wire [1:0] _T_204; // @[Cat.scala 29:58]
  wire [2:0] _T_206; // @[Cat.scala 29:58]
  assign roundingMode_near_even = io_roundingMode == 3'h0; // @[RoundAnyRawFNToRecFN.scala 88:53]
  assign roundingMode_min = io_roundingMode == 3'h2; // @[RoundAnyRawFNToRecFN.scala 90:53]
  assign roundingMode_max = io_roundingMode == 3'h3; // @[RoundAnyRawFNToRecFN.scala 91:53]
  assign roundingMode_near_maxMag = io_roundingMode == 3'h4; // @[RoundAnyRawFNToRecFN.scala 92:53]
  assign roundingMode_odd = io_roundingMode == 3'h6; // @[RoundAnyRawFNToRecFN.scala 93:53]
  assign _T = roundingMode_min & io_in_sign; // @[RoundAnyRawFNToRecFN.scala 96:27]
  assign _T_2 = roundingMode_max & ~io_in_sign; // @[RoundAnyRawFNToRecFN.scala 96:63]
  assign roundMagUp = _T | _T_2; // @[RoundAnyRawFNToRecFN.scala 96:42]
  assign doShiftSigDown1 = io_in_sig[26]; // @[RoundAnyRawFNToRecFN.scala 118:61]
  assign _T_5 = ~io_in_sExp[8]; // @[primitives.scala 57:25]
  assign _T_7 = ~io_in_sExp[7]; // @[primitives.scala 57:25]
  assign _T_9 = ~io_in_sExp[6]; // @[primitives.scala 57:25]
  assign _T_10 = ~io_in_sExp[5:0]; // @[primitives.scala 58:26]
  assign _T_11 = -65'sh10000000000000000 >>> _T_10; // @[primitives.scala 77:58]
  assign _T_17 = {{8'd0}, _T_11[57:50]}; // @[Bitwise.scala 102:31]
  assign _T_19 = {_T_11[49:42], 8'h0}; // @[Bitwise.scala 102:65]
  assign _T_21 = _T_19 & 16'hff00; // @[Bitwise.scala 102:75]
  assign _T_22 = _T_17 | _T_21; // @[Bitwise.scala 102:39]
  assign _GEN_0 = {{4'd0}, _T_22[15:4]}; // @[Bitwise.scala 102:31]
  assign _T_27 = _GEN_0 & 16'hf0f; // @[Bitwise.scala 102:31]
  assign _T_29 = {_T_22[11:0], 4'h0}; // @[Bitwise.scala 102:65]
  assign _T_31 = _T_29 & 16'hf0f0; // @[Bitwise.scala 102:75]
  assign _T_32 = _T_27 | _T_31; // @[Bitwise.scala 102:39]
  assign _GEN_1 = {{2'd0}, _T_32[15:2]}; // @[Bitwise.scala 102:31]
  assign _T_37 = _GEN_1 & 16'h3333; // @[Bitwise.scala 102:31]
  assign _T_39 = {_T_32[13:0], 2'h0}; // @[Bitwise.scala 102:65]
  assign _T_41 = _T_39 & 16'hcccc; // @[Bitwise.scala 102:75]
  assign _T_42 = _T_37 | _T_41; // @[Bitwise.scala 102:39]
  assign _GEN_2 = {{1'd0}, _T_42[15:1]}; // @[Bitwise.scala 102:31]
  assign _T_47 = _GEN_2 & 16'h5555; // @[Bitwise.scala 102:31]
  assign _T_49 = {_T_42[14:0], 1'h0}; // @[Bitwise.scala 102:65]
  assign _T_51 = _T_49 & 16'haaaa; // @[Bitwise.scala 102:75]
  assign _T_52 = _T_47 | _T_51; // @[Bitwise.scala 102:39]
  assign _T_69 = {_T_52,_T_11[58],_T_11[59],_T_11[60],_T_11[61],_T_11[62],_T_11[63]}; // @[Cat.scala 29:58]
  assign _T_71 = _T_9 ? 22'h0 : ~_T_69; // @[primitives.scala 74:21]
  assign _T_73 = {~_T_71,3'h7}; // @[Cat.scala 29:58]
  assign _T_83 = {_T_11[0],_T_11[1],_T_11[2]}; // @[Cat.scala 29:58]
  assign _T_84 = _T_9 ? _T_83 : 3'h0; // @[primitives.scala 61:24]
  assign _T_85 = _T_7 ? _T_73 : {{22'd0}, _T_84}; // @[primitives.scala 66:24]
  assign _T_86 = _T_5 ? _T_85 : 25'h0; // @[primitives.scala 61:24]
  assign _GEN_3 = {{24'd0}, doShiftSigDown1}; // @[RoundAnyRawFNToRecFN.scala 157:23]
  assign _T_87 = _T_86 | _GEN_3; // @[RoundAnyRawFNToRecFN.scala 157:23]
  assign _T_88 = {_T_87,2'h3}; // @[Cat.scala 29:58]
  assign _T_90 = {1'h0,_T_88[26:1]}; // @[Cat.scala 29:58]
  assign _T_92 = ~_T_90 & _T_88; // @[RoundAnyRawFNToRecFN.scala 161:46]
  assign _T_93 = io_in_sig & _T_92; // @[RoundAnyRawFNToRecFN.scala 162:40]
  assign _T_94 = _T_93 != 27'h0; // @[RoundAnyRawFNToRecFN.scala 162:56]
  assign _T_95 = io_in_sig & _T_90; // @[RoundAnyRawFNToRecFN.scala 163:42]
  assign _T_96 = _T_95 != 27'h0; // @[RoundAnyRawFNToRecFN.scala 163:62]
  assign _T_97 = _T_94 | _T_96; // @[RoundAnyRawFNToRecFN.scala 164:36]
  assign _T_98 = roundingMode_near_even | roundingMode_near_maxMag; // @[RoundAnyRawFNToRecFN.scala 167:38]
  assign _T_99 = _T_98 & _T_94; // @[RoundAnyRawFNToRecFN.scala 167:67]
  assign _T_100 = roundMagUp & _T_97; // @[RoundAnyRawFNToRecFN.scala 169:29]
  assign _T_101 = _T_99 | _T_100; // @[RoundAnyRawFNToRecFN.scala 168:31]
  assign _T_102 = io_in_sig | _T_88; // @[RoundAnyRawFNToRecFN.scala 172:32]
  assign _T_104 = _T_102[26:2] + 25'h1; // @[RoundAnyRawFNToRecFN.scala 172:49]
  assign _T_105 = roundingMode_near_even & _T_94; // @[RoundAnyRawFNToRecFN.scala 173:49]
  assign _T_107 = _T_105 & ~_T_96; // @[RoundAnyRawFNToRecFN.scala 173:64]
  assign _T_109 = _T_107 ? _T_88[26:1] : 26'h0; // @[RoundAnyRawFNToRecFN.scala 173:25]
  assign _T_111 = _T_104 & ~_T_109; // @[RoundAnyRawFNToRecFN.scala 172:61]
  assign _T_113 = io_in_sig & ~_T_88; // @[RoundAnyRawFNToRecFN.scala 178:30]
  assign _T_115 = roundingMode_odd & _T_97; // @[RoundAnyRawFNToRecFN.scala 179:42]
  assign _T_117 = _T_115 ? _T_92[26:1] : 26'h0; // @[RoundAnyRawFNToRecFN.scala 179:24]
  assign _GEN_4 = {{1'd0}, _T_113[26:2]}; // @[RoundAnyRawFNToRecFN.scala 178:47]
  assign _T_118 = _GEN_4 | _T_117; // @[RoundAnyRawFNToRecFN.scala 178:47]
  assign _T_119 = _T_101 ? _T_111 : _T_118; // @[RoundAnyRawFNToRecFN.scala 171:16]
  assign _T_121 = {1'b0,$signed(_T_119[25:24])}; // @[RoundAnyRawFNToRecFN.scala 183:69]
  assign _GEN_5 = {{7{_T_121[2]}},_T_121}; // @[RoundAnyRawFNToRecFN.scala 183:40]
  assign _T_122 = $signed(io_in_sExp) + $signed(_GEN_5); // @[RoundAnyRawFNToRecFN.scala 183:40]
  assign common_expOut = _T_122[8:0]; // @[RoundAnyRawFNToRecFN.scala 185:37]
  assign common_fractOut = doShiftSigDown1 ? _T_119[23:1] : _T_119[22:0]; // @[RoundAnyRawFNToRecFN.scala 187:16]
  assign _T_127 = _T_122[10:7]; // @[RoundAnyRawFNToRecFN.scala 194:30]
  assign common_overflow = $signed(_T_127) >= 4'sh3; // @[RoundAnyRawFNToRecFN.scala 194:50]
  assign common_totalUnderflow = $signed(_T_122) < 11'sh6b; // @[RoundAnyRawFNToRecFN.scala 198:31]
  assign _T_132 = doShiftSigDown1 ? io_in_sig[2] : io_in_sig[1]; // @[RoundAnyRawFNToRecFN.scala 201:16]
  assign _T_134 = doShiftSigDown1 & io_in_sig[2]; // @[RoundAnyRawFNToRecFN.scala 203:30]
  assign _T_136 = io_in_sig[1:0] != 2'h0; // @[RoundAnyRawFNToRecFN.scala 203:70]
  assign _T_137 = _T_134 | _T_136; // @[RoundAnyRawFNToRecFN.scala 203:49]
  assign _T_139 = _T_98 & _T_132; // @[RoundAnyRawFNToRecFN.scala 205:67]
  assign _T_140 = roundMagUp & _T_137; // @[RoundAnyRawFNToRecFN.scala 207:29]
  assign _T_141 = _T_139 | _T_140; // @[RoundAnyRawFNToRecFN.scala 206:46]
  assign _T_144 = doShiftSigDown1 ? _T_119[25] : _T_119[24]; // @[RoundAnyRawFNToRecFN.scala 209:16]
  assign _T_145 = io_in_sExp[9:8]; // @[RoundAnyRawFNToRecFN.scala 218:48]
  assign _T_146 = $signed(_T_145) <= 2'sh0; // @[RoundAnyRawFNToRecFN.scala 218:62]
  assign _T_147 = _T_97 & _T_146; // @[RoundAnyRawFNToRecFN.scala 218:32]
  assign _T_150 = doShiftSigDown1 ? _T_88[3] : _T_88[2]; // @[RoundAnyRawFNToRecFN.scala 219:30]
  assign _T_151 = _T_147 & _T_150; // @[RoundAnyRawFNToRecFN.scala 218:74]
  assign _T_155 = doShiftSigDown1 ? _T_88[4] : _T_88[3]; // @[RoundAnyRawFNToRecFN.scala 221:39]
  assign _T_157 = io_detectTininess & ~_T_155; // @[RoundAnyRawFNToRecFN.scala 220:77]
  assign _T_158 = _T_157 & _T_144; // @[RoundAnyRawFNToRecFN.scala 224:38]
  assign _T_159 = _T_158 & _T_94; // @[RoundAnyRawFNToRecFN.scala 225:45]
  assign _T_160 = _T_159 & _T_141; // @[RoundAnyRawFNToRecFN.scala 225:60]
  assign _T_162 = _T_151 & ~_T_160; // @[RoundAnyRawFNToRecFN.scala 219:76]
  assign common_underflow = common_totalUnderflow | _T_162; // @[RoundAnyRawFNToRecFN.scala 215:40]
  assign common_inexact = common_totalUnderflow | _T_97; // @[RoundAnyRawFNToRecFN.scala 228:49]
  assign isNaNOut = io_invalidExc | io_in_isNaN; // @[RoundAnyRawFNToRecFN.scala 233:34]
  assign notNaN_isSpecialInfOut = io_infiniteExc | io_in_isInf; // @[RoundAnyRawFNToRecFN.scala 234:49]
  assign _T_167 = ~isNaNOut & ~notNaN_isSpecialInfOut; // @[RoundAnyRawFNToRecFN.scala 235:33]
  assign commonCase = _T_167 & ~io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 235:61]
  assign overflow = commonCase & common_overflow; // @[RoundAnyRawFNToRecFN.scala 236:32]
  assign underflow = commonCase & common_underflow; // @[RoundAnyRawFNToRecFN.scala 237:32]
  assign _T_169 = commonCase & common_inexact; // @[RoundAnyRawFNToRecFN.scala 238:43]
  assign inexact = overflow | _T_169; // @[RoundAnyRawFNToRecFN.scala 238:28]
  assign overflow_roundMagUp = _T_98 | roundMagUp; // @[RoundAnyRawFNToRecFN.scala 241:60]
  assign _T_171 = commonCase & common_totalUnderflow; // @[RoundAnyRawFNToRecFN.scala 243:20]
  assign _T_172 = roundMagUp | roundingMode_odd; // @[RoundAnyRawFNToRecFN.scala 243:60]
  assign pegMinNonzeroMagOut = _T_171 & _T_172; // @[RoundAnyRawFNToRecFN.scala 243:45]
  assign pegMaxFiniteMagOut = overflow & ~overflow_roundMagUp; // @[RoundAnyRawFNToRecFN.scala 244:39]
  assign _T_174 = overflow & overflow_roundMagUp; // @[RoundAnyRawFNToRecFN.scala 246:45]
  assign notNaN_isInfOut = notNaN_isSpecialInfOut | _T_174; // @[RoundAnyRawFNToRecFN.scala 246:32]
  assign signOut = isNaNOut ? 1'h0 : io_in_sign; // @[RoundAnyRawFNToRecFN.scala 248:22]
  assign _T_175 = io_in_isZero | common_totalUnderflow; // @[RoundAnyRawFNToRecFN.scala 251:32]
  assign _T_176 = _T_175 ? 9'h1c0 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 251:18]
  assign _T_178 = common_expOut & ~_T_176; // @[RoundAnyRawFNToRecFN.scala 250:24]
  assign _T_180 = pegMinNonzeroMagOut ? 9'h194 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 255:18]
  assign _T_182 = _T_178 & ~_T_180; // @[RoundAnyRawFNToRecFN.scala 254:17]
  assign _T_183 = pegMaxFiniteMagOut ? 9'h80 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 259:18]
  assign _T_185 = _T_182 & ~_T_183; // @[RoundAnyRawFNToRecFN.scala 258:17]
  assign _T_186 = notNaN_isInfOut ? 9'h40 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 263:18]
  assign _T_188 = _T_185 & ~_T_186; // @[RoundAnyRawFNToRecFN.scala 262:17]
  assign _T_189 = pegMinNonzeroMagOut ? 9'h6b : 9'h0; // @[RoundAnyRawFNToRecFN.scala 267:16]
  assign _T_190 = _T_188 | _T_189; // @[RoundAnyRawFNToRecFN.scala 266:18]
  assign _T_191 = pegMaxFiniteMagOut ? 9'h17f : 9'h0; // @[RoundAnyRawFNToRecFN.scala 271:16]
  assign _T_192 = _T_190 | _T_191; // @[RoundAnyRawFNToRecFN.scala 270:15]
  assign _T_193 = notNaN_isInfOut ? 9'h180 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 275:16]
  assign _T_194 = _T_192 | _T_193; // @[RoundAnyRawFNToRecFN.scala 274:15]
  assign _T_195 = isNaNOut ? 9'h1c0 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 276:16]
  assign expOut = _T_194 | _T_195; // @[RoundAnyRawFNToRecFN.scala 275:77]
  assign _T_196 = isNaNOut | io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 278:22]
  assign _T_197 = _T_196 | common_totalUnderflow; // @[RoundAnyRawFNToRecFN.scala 278:38]
  assign _T_198 = isNaNOut ? 23'h400000 : 23'h0; // @[RoundAnyRawFNToRecFN.scala 279:16]
  assign _T_199 = _T_197 ? _T_198 : common_fractOut; // @[RoundAnyRawFNToRecFN.scala 278:12]
  assign _T_201 = pegMaxFiniteMagOut ? 23'h7fffff : 23'h0; // @[Bitwise.scala 71:12]
  assign fractOut = _T_199 | _T_201; // @[RoundAnyRawFNToRecFN.scala 281:11]
  assign _T_202 = {signOut,expOut}; // @[Cat.scala 29:58]
  assign _T_204 = {underflow,inexact}; // @[Cat.scala 29:58]
  assign _T_206 = {io_invalidExc,io_infiniteExc,overflow}; // @[Cat.scala 29:58]
  assign io_out = {_T_202,fractOut}; // @[RoundAnyRawFNToRecFN.scala 284:12]
  assign io_exceptionFlags = {_T_206,_T_204}; // @[RoundAnyRawFNToRecFN.scala 285:23]
endmodule
module RoundRawFNToRecFN(
  input         io_invalidExc,
  input         io_infiniteExc,
  input         io_in_isNaN,
  input         io_in_isInf,
  input         io_in_isZero,
  input         io_in_sign,
  input  [9:0]  io_in_sExp,
  input  [26:0] io_in_sig,
  input  [2:0]  io_roundingMode,
  input         io_detectTininess,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  roundAnyRawFNToRecFN_io_invalidExc; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_infiniteExc; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_in_isNaN; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_in_isInf; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_in_sign; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire [9:0] roundAnyRawFNToRecFN_io_in_sExp; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire [26:0] roundAnyRawFNToRecFN_io_in_sig; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire [2:0] roundAnyRawFNToRecFN_io_roundingMode; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_detectTininess; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire [32:0] roundAnyRawFNToRecFN_io_out; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire [4:0] roundAnyRawFNToRecFN_io_exceptionFlags; // @[RoundAnyRawFNToRecFN.scala 307:15]
  RoundAnyRawFNToRecFN roundAnyRawFNToRecFN ( // @[RoundAnyRawFNToRecFN.scala 307:15]
    .io_invalidExc(roundAnyRawFNToRecFN_io_invalidExc),
    .io_infiniteExc(roundAnyRawFNToRecFN_io_infiniteExc),
    .io_in_isNaN(roundAnyRawFNToRecFN_io_in_isNaN),
    .io_in_isInf(roundAnyRawFNToRecFN_io_in_isInf),
    .io_in_isZero(roundAnyRawFNToRecFN_io_in_isZero),
    .io_in_sign(roundAnyRawFNToRecFN_io_in_sign),
    .io_in_sExp(roundAnyRawFNToRecFN_io_in_sExp),
    .io_in_sig(roundAnyRawFNToRecFN_io_in_sig),
    .io_roundingMode(roundAnyRawFNToRecFN_io_roundingMode),
    .io_detectTininess(roundAnyRawFNToRecFN_io_detectTininess),
    .io_out(roundAnyRawFNToRecFN_io_out),
    .io_exceptionFlags(roundAnyRawFNToRecFN_io_exceptionFlags)
  );
  assign io_out = roundAnyRawFNToRecFN_io_out; // @[RoundAnyRawFNToRecFN.scala 315:23]
  assign io_exceptionFlags = roundAnyRawFNToRecFN_io_exceptionFlags; // @[RoundAnyRawFNToRecFN.scala 316:23]
  assign roundAnyRawFNToRecFN_io_invalidExc = io_invalidExc; // @[RoundAnyRawFNToRecFN.scala 310:44]
  assign roundAnyRawFNToRecFN_io_infiniteExc = io_infiniteExc; // @[RoundAnyRawFNToRecFN.scala 311:44]
  assign roundAnyRawFNToRecFN_io_in_isNaN = io_in_isNaN; // @[RoundAnyRawFNToRecFN.scala 312:44]
  assign roundAnyRawFNToRecFN_io_in_isInf = io_in_isInf; // @[RoundAnyRawFNToRecFN.scala 312:44]
  assign roundAnyRawFNToRecFN_io_in_isZero = io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 312:44]
  assign roundAnyRawFNToRecFN_io_in_sign = io_in_sign; // @[RoundAnyRawFNToRecFN.scala 312:44]
  assign roundAnyRawFNToRecFN_io_in_sExp = io_in_sExp; // @[RoundAnyRawFNToRecFN.scala 312:44]
  assign roundAnyRawFNToRecFN_io_in_sig = io_in_sig; // @[RoundAnyRawFNToRecFN.scala 312:44]
  assign roundAnyRawFNToRecFN_io_roundingMode = io_roundingMode; // @[RoundAnyRawFNToRecFN.scala 313:44]
  assign roundAnyRawFNToRecFN_io_detectTininess = io_detectTininess; // @[RoundAnyRawFNToRecFN.scala 314:44]
endmodule
module DivSqrtRecFN_small(
  input         clock,
  input         reset,
  output        io_inReady,
  input         io_inValid,
  input  [32:0] io_a,
  input  [2:0]  io_roundingMode,
  input         io_detectTininess,
  output        io_outValid_sqrt,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  divSqrtRecFNToRaw_clock; // @[DivSqrtRecFN_small.scala 462:15]
  wire  divSqrtRecFNToRaw_reset; // @[DivSqrtRecFN_small.scala 462:15]
  wire  divSqrtRecFNToRaw_io_inReady; // @[DivSqrtRecFN_small.scala 462:15]
  wire  divSqrtRecFNToRaw_io_inValid; // @[DivSqrtRecFN_small.scala 462:15]
  wire [32:0] divSqrtRecFNToRaw_io_a; // @[DivSqrtRecFN_small.scala 462:15]
  wire [2:0] divSqrtRecFNToRaw_io_roundingMode; // @[DivSqrtRecFN_small.scala 462:15]
  wire  divSqrtRecFNToRaw_io_rawOutValid_sqrt; // @[DivSqrtRecFN_small.scala 462:15]
  wire [2:0] divSqrtRecFNToRaw_io_roundingModeOut; // @[DivSqrtRecFN_small.scala 462:15]
  wire  divSqrtRecFNToRaw_io_invalidExc; // @[DivSqrtRecFN_small.scala 462:15]
  wire  divSqrtRecFNToRaw_io_infiniteExc; // @[DivSqrtRecFN_small.scala 462:15]
  wire  divSqrtRecFNToRaw_io_rawOut_isNaN; // @[DivSqrtRecFN_small.scala 462:15]
  wire  divSqrtRecFNToRaw_io_rawOut_isInf; // @[DivSqrtRecFN_small.scala 462:15]
  wire  divSqrtRecFNToRaw_io_rawOut_isZero; // @[DivSqrtRecFN_small.scala 462:15]
  wire  divSqrtRecFNToRaw_io_rawOut_sign; // @[DivSqrtRecFN_small.scala 462:15]
  wire [9:0] divSqrtRecFNToRaw_io_rawOut_sExp; // @[DivSqrtRecFN_small.scala 462:15]
  wire [26:0] divSqrtRecFNToRaw_io_rawOut_sig; // @[DivSqrtRecFN_small.scala 462:15]
  wire  roundRawFNToRecFN_io_invalidExc; // @[DivSqrtRecFN_small.scala 477:15]
  wire  roundRawFNToRecFN_io_infiniteExc; // @[DivSqrtRecFN_small.scala 477:15]
  wire  roundRawFNToRecFN_io_in_isNaN; // @[DivSqrtRecFN_small.scala 477:15]
  wire  roundRawFNToRecFN_io_in_isInf; // @[DivSqrtRecFN_small.scala 477:15]
  wire  roundRawFNToRecFN_io_in_isZero; // @[DivSqrtRecFN_small.scala 477:15]
  wire  roundRawFNToRecFN_io_in_sign; // @[DivSqrtRecFN_small.scala 477:15]
  wire [9:0] roundRawFNToRecFN_io_in_sExp; // @[DivSqrtRecFN_small.scala 477:15]
  wire [26:0] roundRawFNToRecFN_io_in_sig; // @[DivSqrtRecFN_small.scala 477:15]
  wire [2:0] roundRawFNToRecFN_io_roundingMode; // @[DivSqrtRecFN_small.scala 477:15]
  wire  roundRawFNToRecFN_io_detectTininess; // @[DivSqrtRecFN_small.scala 477:15]
  wire [32:0] roundRawFNToRecFN_io_out; // @[DivSqrtRecFN_small.scala 477:15]
  wire [4:0] roundRawFNToRecFN_io_exceptionFlags; // @[DivSqrtRecFN_small.scala 477:15]
  DivSqrtRecFNToRaw_small divSqrtRecFNToRaw ( // @[DivSqrtRecFN_small.scala 462:15]
    .clock(divSqrtRecFNToRaw_clock),
    .reset(divSqrtRecFNToRaw_reset),
    .io_inReady(divSqrtRecFNToRaw_io_inReady),
    .io_inValid(divSqrtRecFNToRaw_io_inValid),
    .io_a(divSqrtRecFNToRaw_io_a),
    .io_roundingMode(divSqrtRecFNToRaw_io_roundingMode),
    .io_rawOutValid_sqrt(divSqrtRecFNToRaw_io_rawOutValid_sqrt),
    .io_roundingModeOut(divSqrtRecFNToRaw_io_roundingModeOut),
    .io_invalidExc(divSqrtRecFNToRaw_io_invalidExc),
    .io_infiniteExc(divSqrtRecFNToRaw_io_infiniteExc),
    .io_rawOut_isNaN(divSqrtRecFNToRaw_io_rawOut_isNaN),
    .io_rawOut_isInf(divSqrtRecFNToRaw_io_rawOut_isInf),
    .io_rawOut_isZero(divSqrtRecFNToRaw_io_rawOut_isZero),
    .io_rawOut_sign(divSqrtRecFNToRaw_io_rawOut_sign),
    .io_rawOut_sExp(divSqrtRecFNToRaw_io_rawOut_sExp),
    .io_rawOut_sig(divSqrtRecFNToRaw_io_rawOut_sig)
  );
  RoundRawFNToRecFN roundRawFNToRecFN ( // @[DivSqrtRecFN_small.scala 477:15]
    .io_invalidExc(roundRawFNToRecFN_io_invalidExc),
    .io_infiniteExc(roundRawFNToRecFN_io_infiniteExc),
    .io_in_isNaN(roundRawFNToRecFN_io_in_isNaN),
    .io_in_isInf(roundRawFNToRecFN_io_in_isInf),
    .io_in_isZero(roundRawFNToRecFN_io_in_isZero),
    .io_in_sign(roundRawFNToRecFN_io_in_sign),
    .io_in_sExp(roundRawFNToRecFN_io_in_sExp),
    .io_in_sig(roundRawFNToRecFN_io_in_sig),
    .io_roundingMode(roundRawFNToRecFN_io_roundingMode),
    .io_detectTininess(roundRawFNToRecFN_io_detectTininess),
    .io_out(roundRawFNToRecFN_io_out),
    .io_exceptionFlags(roundRawFNToRecFN_io_exceptionFlags)
  );
  assign io_inReady = divSqrtRecFNToRaw_io_inReady; // @[DivSqrtRecFN_small.scala 464:16]
  assign io_outValid_sqrt = divSqrtRecFNToRaw_io_rawOutValid_sqrt; // @[DivSqrtRecFN_small.scala 474:22]
  assign io_out = roundRawFNToRecFN_io_out; // @[DivSqrtRecFN_small.scala 483:23]
  assign io_exceptionFlags = roundRawFNToRecFN_io_exceptionFlags; // @[DivSqrtRecFN_small.scala 484:23]
  assign divSqrtRecFNToRaw_clock = clock;
  assign divSqrtRecFNToRaw_reset = reset;
  assign divSqrtRecFNToRaw_io_inValid = io_inValid; // @[DivSqrtRecFN_small.scala 465:39]
  assign divSqrtRecFNToRaw_io_a = io_a; // @[DivSqrtRecFN_small.scala 467:39]
  assign divSqrtRecFNToRaw_io_roundingMode = io_roundingMode; // @[DivSqrtRecFN_small.scala 469:39]
  assign roundRawFNToRecFN_io_invalidExc = divSqrtRecFNToRaw_io_invalidExc; // @[DivSqrtRecFN_small.scala 478:39]
  assign roundRawFNToRecFN_io_infiniteExc = divSqrtRecFNToRaw_io_infiniteExc; // @[DivSqrtRecFN_small.scala 479:39]
  assign roundRawFNToRecFN_io_in_isNaN = divSqrtRecFNToRaw_io_rawOut_isNaN; // @[DivSqrtRecFN_small.scala 480:39]
  assign roundRawFNToRecFN_io_in_isInf = divSqrtRecFNToRaw_io_rawOut_isInf; // @[DivSqrtRecFN_small.scala 480:39]
  assign roundRawFNToRecFN_io_in_isZero = divSqrtRecFNToRaw_io_rawOut_isZero; // @[DivSqrtRecFN_small.scala 480:39]
  assign roundRawFNToRecFN_io_in_sign = divSqrtRecFNToRaw_io_rawOut_sign; // @[DivSqrtRecFN_small.scala 480:39]
  assign roundRawFNToRecFN_io_in_sExp = divSqrtRecFNToRaw_io_rawOut_sExp; // @[DivSqrtRecFN_small.scala 480:39]
  assign roundRawFNToRecFN_io_in_sig = divSqrtRecFNToRaw_io_rawOut_sig; // @[DivSqrtRecFN_small.scala 480:39]
  assign roundRawFNToRecFN_io_roundingMode = divSqrtRecFNToRaw_io_roundingModeOut; // @[DivSqrtRecFN_small.scala 481:39]
  assign roundRawFNToRecFN_io_detectTininess = io_detectTininess; // @[DivSqrtRecFN_small.scala 482:41]
endmodule
module QueueCompatibility(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input  [31:0] io_enq_bits_a,
  input  [2:0]  io_enq_bits_roundingMode,
  input         io_enq_bits_detectTininess,
  input  [31:0] io_enq_bits_out,
  input  [4:0]  io_enq_bits_exceptionFlags,
  input         io_deq_ready,
  output        io_deq_valid,
  output [31:0] io_deq_bits_a,
  output [2:0]  io_deq_bits_roundingMode,
  output        io_deq_bits_detectTininess,
  output [31:0] io_deq_bits_out,
  output [4:0]  io_deq_bits_exceptionFlags
);
  reg [31:0] _T_a [0:4]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_0;
  wire [31:0] _T_a__T_18_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_a__T_18_addr; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_1;
  wire [31:0] _T_a__T_10_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_a__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T_a__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T_a__T_10_en; // @[Decoupled.scala 209:24]
  reg [2:0] _T_roundingMode [0:4]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_2;
  wire [2:0] _T_roundingMode__T_18_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_roundingMode__T_18_addr; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_3;
  wire [2:0] _T_roundingMode__T_10_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_roundingMode__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T_roundingMode__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T_roundingMode__T_10_en; // @[Decoupled.scala 209:24]
  reg  _T_detectTininess [0:4]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_4;
  wire  _T_detectTininess__T_18_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_detectTininess__T_18_addr; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_5;
  wire  _T_detectTininess__T_10_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_detectTininess__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T_detectTininess__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T_detectTininess__T_10_en; // @[Decoupled.scala 209:24]
  reg [31:0] _T_out [0:4]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_6;
  wire [31:0] _T_out__T_18_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_out__T_18_addr; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_7;
  wire [31:0] _T_out__T_10_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_out__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T_out__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T_out__T_10_en; // @[Decoupled.scala 209:24]
  reg [4:0] _T_exceptionFlags [0:4]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_8;
  wire [4:0] _T_exceptionFlags__T_18_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_exceptionFlags__T_18_addr; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_9;
  wire [4:0] _T_exceptionFlags__T_10_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_exceptionFlags__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T_exceptionFlags__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T_exceptionFlags__T_10_en; // @[Decoupled.scala 209:24]
  reg [2:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_10;
  reg [2:0] value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_11;
  reg  _T_1; // @[Decoupled.scala 212:35]
  reg [31:0] _RAND_12;
  wire  _T_2; // @[Decoupled.scala 214:41]
  wire  _T_4; // @[Decoupled.scala 215:33]
  wire  _T_5; // @[Decoupled.scala 216:32]
  wire  _T_6; // @[Decoupled.scala 40:37]
  wire  _T_8; // @[Decoupled.scala 40:37]
  wire  wrap; // @[Counter.scala 37:24]
  wire [2:0] _T_12; // @[Counter.scala 38:22]
  wire  wrap_1; // @[Counter.scala 37:24]
  wire [2:0] _T_14; // @[Counter.scala 38:22]
  wire  _T_15; // @[Decoupled.scala 227:16]
  assign _T_a__T_18_addr = value_1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign _T_a__T_18_data = _T_a[_T_a__T_18_addr]; // @[Decoupled.scala 209:24]
  `else
  assign _T_a__T_18_data = _T_a__T_18_addr >= 3'h5 ? _RAND_1[31:0] : _T_a[_T_a__T_18_addr]; // @[Decoupled.scala 209:24]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign _T_a__T_10_data = io_enq_bits_a;
  assign _T_a__T_10_addr = value;
  assign _T_a__T_10_mask = 1'h1;
  assign _T_a__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_roundingMode__T_18_addr = value_1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign _T_roundingMode__T_18_data = _T_roundingMode[_T_roundingMode__T_18_addr]; // @[Decoupled.scala 209:24]
  `else
  assign _T_roundingMode__T_18_data = _T_roundingMode__T_18_addr >= 3'h5 ? _RAND_3[2:0] : _T_roundingMode[_T_roundingMode__T_18_addr]; // @[Decoupled.scala 209:24]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign _T_roundingMode__T_10_data = io_enq_bits_roundingMode;
  assign _T_roundingMode__T_10_addr = value;
  assign _T_roundingMode__T_10_mask = 1'h1;
  assign _T_roundingMode__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_detectTininess__T_18_addr = value_1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign _T_detectTininess__T_18_data = _T_detectTininess[_T_detectTininess__T_18_addr]; // @[Decoupled.scala 209:24]
  `else
  assign _T_detectTininess__T_18_data = _T_detectTininess__T_18_addr >= 3'h5 ? _RAND_5[0:0] : _T_detectTininess[_T_detectTininess__T_18_addr]; // @[Decoupled.scala 209:24]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign _T_detectTininess__T_10_data = io_enq_bits_detectTininess;
  assign _T_detectTininess__T_10_addr = value;
  assign _T_detectTininess__T_10_mask = 1'h1;
  assign _T_detectTininess__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_out__T_18_addr = value_1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign _T_out__T_18_data = _T_out[_T_out__T_18_addr]; // @[Decoupled.scala 209:24]
  `else
  assign _T_out__T_18_data = _T_out__T_18_addr >= 3'h5 ? _RAND_7[31:0] : _T_out[_T_out__T_18_addr]; // @[Decoupled.scala 209:24]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign _T_out__T_10_data = io_enq_bits_out;
  assign _T_out__T_10_addr = value;
  assign _T_out__T_10_mask = 1'h1;
  assign _T_out__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_exceptionFlags__T_18_addr = value_1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign _T_exceptionFlags__T_18_data = _T_exceptionFlags[_T_exceptionFlags__T_18_addr]; // @[Decoupled.scala 209:24]
  `else
  assign _T_exceptionFlags__T_18_data = _T_exceptionFlags__T_18_addr >= 3'h5 ? _RAND_9[4:0] : _T_exceptionFlags[_T_exceptionFlags__T_18_addr]; // @[Decoupled.scala 209:24]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign _T_exceptionFlags__T_10_data = io_enq_bits_exceptionFlags;
  assign _T_exceptionFlags__T_10_addr = value;
  assign _T_exceptionFlags__T_10_mask = 1'h1;
  assign _T_exceptionFlags__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_2 = value == value_1; // @[Decoupled.scala 214:41]
  assign _T_4 = _T_2 & ~_T_1; // @[Decoupled.scala 215:33]
  assign _T_5 = _T_2 & _T_1; // @[Decoupled.scala 216:32]
  assign _T_6 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37]
  assign _T_8 = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37]
  assign wrap = value == 3'h4; // @[Counter.scala 37:24]
  assign _T_12 = value + 3'h1; // @[Counter.scala 38:22]
  assign wrap_1 = value_1 == 3'h4; // @[Counter.scala 37:24]
  assign _T_14 = value_1 + 3'h1; // @[Counter.scala 38:22]
  assign _T_15 = _T_6 != _T_8; // @[Decoupled.scala 227:16]
  assign io_enq_ready = ~_T_5; // @[Decoupled.scala 232:16]
  assign io_deq_valid = ~_T_4; // @[Decoupled.scala 231:16]
  assign io_deq_bits_a = _T_a__T_18_data; // @[Decoupled.scala 233:15]
  assign io_deq_bits_roundingMode = _T_roundingMode__T_18_data; // @[Decoupled.scala 233:15]
  assign io_deq_bits_detectTininess = _T_detectTininess__T_18_data; // @[Decoupled.scala 233:15]
  assign io_deq_bits_out = _T_out__T_18_data; // @[Decoupled.scala 233:15]
  assign io_deq_bits_exceptionFlags = _T_exceptionFlags__T_18_data; // @[Decoupled.scala 233:15]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    _T_a[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_1 = {1{`RANDOM}};
  _RAND_2 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    _T_roundingMode[initvar] = _RAND_2[2:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_3 = {1{`RANDOM}};
  _RAND_4 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    _T_detectTininess[initvar] = _RAND_4[0:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_5 = {1{`RANDOM}};
  _RAND_6 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    _T_out[initvar] = _RAND_6[31:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_7 = {1{`RANDOM}};
  _RAND_8 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    _T_exceptionFlags[initvar] = _RAND_8[4:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_9 = {1{`RANDOM}};
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  value = _RAND_10[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  value_1 = _RAND_11[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  _T_1 = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if(_T_a__T_10_en & _T_a__T_10_mask) begin
      _T_a[_T_a__T_10_addr] <= _T_a__T_10_data; // @[Decoupled.scala 209:24]
    end
    if(_T_roundingMode__T_10_en & _T_roundingMode__T_10_mask) begin
      _T_roundingMode[_T_roundingMode__T_10_addr] <= _T_roundingMode__T_10_data; // @[Decoupled.scala 209:24]
    end
    if(_T_detectTininess__T_10_en & _T_detectTininess__T_10_mask) begin
      _T_detectTininess[_T_detectTininess__T_10_addr] <= _T_detectTininess__T_10_data; // @[Decoupled.scala 209:24]
    end
    if(_T_out__T_10_en & _T_out__T_10_mask) begin
      _T_out[_T_out__T_10_addr] <= _T_out__T_10_data; // @[Decoupled.scala 209:24]
    end
    if(_T_exceptionFlags__T_10_en & _T_exceptionFlags__T_10_mask) begin
      _T_exceptionFlags[_T_exceptionFlags__T_10_addr] <= _T_exceptionFlags__T_10_data; // @[Decoupled.scala 209:24]
    end
    if (reset) begin
      value <= 3'h0;
    end else if (_T_6) begin
      if (wrap) begin
        value <= 3'h0;
      end else begin
        value <= _T_12;
      end
    end
    if (reset) begin
      value_1 <= 3'h0;
    end else if (_T_8) begin
      if (wrap_1) begin
        value_1 <= 3'h0;
      end else begin
        value_1 <= _T_14;
      end
    end
    if (reset) begin
      _T_1 <= 1'h0;
    end else if (_T_15) begin
      _T_1 <= _T_6;
    end
  end
endmodule
module ValExec_DivSqrtRecF32_small_sqrt(
  input         clock,
  input         reset,
  output        io_input_ready,
  input         io_input_valid,
  input  [31:0] io_input_bits_a,
  input  [2:0]  io_input_bits_roundingMode,
  input         io_input_bits_detectTininess,
  input  [31:0] io_input_bits_out,
  input  [4:0]  io_input_bits_exceptionFlags,
  output [31:0] io_output_a,
  output [2:0]  io_output_roundingMode,
  output        io_output_detectTininess,
  output [31:0] io_expected_out,
  output [4:0]  io_expected_exceptionFlags,
  output [32:0] io_expected_recOut,
  output [32:0] io_actual_out,
  output [4:0]  io_actual_exceptionFlags,
  output        io_check,
  output        io_pass
);
  wire  ds_clock; // @[ValExec_DivSqrtRecFN_small.scala 165:20]
  wire  ds_reset; // @[ValExec_DivSqrtRecFN_small.scala 165:20]
  wire  ds_io_inReady; // @[ValExec_DivSqrtRecFN_small.scala 165:20]
  wire  ds_io_inValid; // @[ValExec_DivSqrtRecFN_small.scala 165:20]
  wire [32:0] ds_io_a; // @[ValExec_DivSqrtRecFN_small.scala 165:20]
  wire [2:0] ds_io_roundingMode; // @[ValExec_DivSqrtRecFN_small.scala 165:20]
  wire  ds_io_detectTininess; // @[ValExec_DivSqrtRecFN_small.scala 165:20]
  wire  ds_io_outValid_sqrt; // @[ValExec_DivSqrtRecFN_small.scala 165:20]
  wire [32:0] ds_io_out; // @[ValExec_DivSqrtRecFN_small.scala 165:20]
  wire [4:0] ds_io_exceptionFlags; // @[ValExec_DivSqrtRecFN_small.scala 165:20]
  wire  cq_clock; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire  cq_reset; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire  cq_io_enq_ready; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire  cq_io_enq_valid; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire [31:0] cq_io_enq_bits_a; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire [2:0] cq_io_enq_bits_roundingMode; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire  cq_io_enq_bits_detectTininess; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire [31:0] cq_io_enq_bits_out; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire [4:0] cq_io_enq_bits_exceptionFlags; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire  cq_io_deq_ready; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire  cq_io_deq_valid; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire [31:0] cq_io_deq_bits_a; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire [2:0] cq_io_deq_bits_roundingMode; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire  cq_io_deq_bits_detectTininess; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire [31:0] cq_io_deq_bits_out; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire [4:0] cq_io_deq_bits_exceptionFlags; // @[ValExec_DivSqrtRecFN_small.scala 166:20]
  wire  _T_6; // @[rawFloatFromFN.scala 50:34]
  wire  _T_7; // @[rawFloatFromFN.scala 51:38]
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
  wire [4:0] _T_50; // @[Mux.scala 47:69]
  wire [4:0] _T_51; // @[Mux.scala 47:69]
  wire [4:0] _T_52; // @[Mux.scala 47:69]
  wire [53:0] _GEN_0; // @[rawFloatFromFN.scala 54:36]
  wire [53:0] _T_53; // @[rawFloatFromFN.scala 54:36]
  wire [22:0] _T_55; // @[rawFloatFromFN.scala 54:64]
  wire [8:0] _GEN_1; // @[rawFloatFromFN.scala 57:26]
  wire [8:0] _T_56; // @[rawFloatFromFN.scala 57:26]
  wire [8:0] _T_57; // @[rawFloatFromFN.scala 56:16]
  wire [1:0] _T_58; // @[rawFloatFromFN.scala 60:27]
  wire [7:0] _GEN_2; // @[rawFloatFromFN.scala 60:22]
  wire [7:0] _T_59; // @[rawFloatFromFN.scala 60:22]
  wire [8:0] _GEN_3; // @[rawFloatFromFN.scala 59:15]
  wire [8:0] _T_61; // @[rawFloatFromFN.scala 59:15]
  wire  _T_62; // @[rawFloatFromFN.scala 62:34]
  wire  _T_64; // @[rawFloatFromFN.scala 63:62]
  wire  _T_67; // @[rawFloatFromFN.scala 66:33]
  wire [9:0] _T_70; // @[rawFloatFromFN.scala 70:48]
  wire [22:0] _T_72; // @[rawFloatFromFN.scala 72:42]
  wire [24:0] _T_74; // @[Cat.scala 29:58]
  wire [2:0] _T_76; // @[recFNFromFN.scala 48:16]
  wire [2:0] _GEN_4; // @[recFNFromFN.scala 48:79]
  wire [2:0] _T_78; // @[recFNFromFN.scala 48:79]
  wire [28:0] _T_81; // @[Cat.scala 29:58]
  wire [3:0] _T_82; // @[Cat.scala 29:58]
  wire  _T_87; // @[rawFloatFromFN.scala 50:34]
  wire  _T_88; // @[rawFloatFromFN.scala 51:38]
  wire [4:0] _T_112; // @[Mux.scala 47:69]
  wire [4:0] _T_113; // @[Mux.scala 47:69]
  wire [4:0] _T_114; // @[Mux.scala 47:69]
  wire [4:0] _T_115; // @[Mux.scala 47:69]
  wire [4:0] _T_116; // @[Mux.scala 47:69]
  wire [4:0] _T_117; // @[Mux.scala 47:69]
  wire [4:0] _T_118; // @[Mux.scala 47:69]
  wire [4:0] _T_119; // @[Mux.scala 47:69]
  wire [4:0] _T_120; // @[Mux.scala 47:69]
  wire [4:0] _T_121; // @[Mux.scala 47:69]
  wire [4:0] _T_122; // @[Mux.scala 47:69]
  wire [4:0] _T_123; // @[Mux.scala 47:69]
  wire [4:0] _T_124; // @[Mux.scala 47:69]
  wire [4:0] _T_125; // @[Mux.scala 47:69]
  wire [4:0] _T_126; // @[Mux.scala 47:69]
  wire [4:0] _T_127; // @[Mux.scala 47:69]
  wire [4:0] _T_128; // @[Mux.scala 47:69]
  wire [4:0] _T_129; // @[Mux.scala 47:69]
  wire [4:0] _T_130; // @[Mux.scala 47:69]
  wire [4:0] _T_131; // @[Mux.scala 47:69]
  wire [4:0] _T_132; // @[Mux.scala 47:69]
  wire [4:0] _T_133; // @[Mux.scala 47:69]
  wire [53:0] _GEN_5; // @[rawFloatFromFN.scala 54:36]
  wire [53:0] _T_134; // @[rawFloatFromFN.scala 54:36]
  wire [22:0] _T_136; // @[rawFloatFromFN.scala 54:64]
  wire [8:0] _GEN_6; // @[rawFloatFromFN.scala 57:26]
  wire [8:0] _T_137; // @[rawFloatFromFN.scala 57:26]
  wire [8:0] _T_138; // @[rawFloatFromFN.scala 56:16]
  wire [1:0] _T_139; // @[rawFloatFromFN.scala 60:27]
  wire [7:0] _GEN_7; // @[rawFloatFromFN.scala 60:22]
  wire [7:0] _T_140; // @[rawFloatFromFN.scala 60:22]
  wire [8:0] _GEN_8; // @[rawFloatFromFN.scala 59:15]
  wire [8:0] _T_142; // @[rawFloatFromFN.scala 59:15]
  wire  _T_143; // @[rawFloatFromFN.scala 62:34]
  wire  _T_145; // @[rawFloatFromFN.scala 63:62]
  wire  _T_148; // @[rawFloatFromFN.scala 66:33]
  wire [9:0] _T_151; // @[rawFloatFromFN.scala 70:48]
  wire [22:0] _T_153; // @[rawFloatFromFN.scala 72:42]
  wire [24:0] _T_155; // @[Cat.scala 29:58]
  wire [2:0] _T_157; // @[recFNFromFN.scala 48:16]
  wire [2:0] _GEN_9; // @[recFNFromFN.scala 48:79]
  wire [2:0] _T_159; // @[recFNFromFN.scala 48:79]
  wire [28:0] _T_162; // @[Cat.scala 29:58]
  wire [3:0] _T_163; // @[Cat.scala 29:58]
  wire  _T_168; // @[tests.scala 48:26]
  wire  _T_170; // @[tests.scala 48:55]
  wire  _T_171; // @[tests.scala 48:39]
  wire  _T_172; // @[tests.scala 49:20]
  wire  _T_175; // @[tests.scala 49:54]
  wire  _T_176; // @[tests.scala 49:31]
  wire  _T_178; // @[tests.scala 50:30]
  wire  _T_180; // @[tests.scala 50:66]
  wire  _T_181; // @[tests.scala 50:16]
  wire  _T_182; // @[tests.scala 48:12]
  wire  _T_183; // @[ValExec_DivSqrtRecFN_small.scala 193:25]
  wire  _T_184; // @[ValExec_DivSqrtRecFN_small.scala 195:35]
  DivSqrtRecFN_small ds ( // @[ValExec_DivSqrtRecFN_small.scala 165:20]
    .clock(ds_clock),
    .reset(ds_reset),
    .io_inReady(ds_io_inReady),
    .io_inValid(ds_io_inValid),
    .io_a(ds_io_a),
    .io_roundingMode(ds_io_roundingMode),
    .io_detectTininess(ds_io_detectTininess),
    .io_outValid_sqrt(ds_io_outValid_sqrt),
    .io_out(ds_io_out),
    .io_exceptionFlags(ds_io_exceptionFlags)
  );
  QueueCompatibility cq ( // @[ValExec_DivSqrtRecFN_small.scala 166:20]
    .clock(cq_clock),
    .reset(cq_reset),
    .io_enq_ready(cq_io_enq_ready),
    .io_enq_valid(cq_io_enq_valid),
    .io_enq_bits_a(cq_io_enq_bits_a),
    .io_enq_bits_roundingMode(cq_io_enq_bits_roundingMode),
    .io_enq_bits_detectTininess(cq_io_enq_bits_detectTininess),
    .io_enq_bits_out(cq_io_enq_bits_out),
    .io_enq_bits_exceptionFlags(cq_io_enq_bits_exceptionFlags),
    .io_deq_ready(cq_io_deq_ready),
    .io_deq_valid(cq_io_deq_valid),
    .io_deq_bits_a(cq_io_deq_bits_a),
    .io_deq_bits_roundingMode(cq_io_deq_bits_roundingMode),
    .io_deq_bits_detectTininess(cq_io_deq_bits_detectTininess),
    .io_deq_bits_out(cq_io_deq_bits_out),
    .io_deq_bits_exceptionFlags(cq_io_deq_bits_exceptionFlags)
  );
  assign _T_6 = io_input_bits_a[30:23] == 8'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_7 = io_input_bits_a[22:0] == 23'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_31 = io_input_bits_a[1] ? 5'h15 : 5'h16; // @[Mux.scala 47:69]
  assign _T_32 = io_input_bits_a[2] ? 5'h14 : _T_31; // @[Mux.scala 47:69]
  assign _T_33 = io_input_bits_a[3] ? 5'h13 : _T_32; // @[Mux.scala 47:69]
  assign _T_34 = io_input_bits_a[4] ? 5'h12 : _T_33; // @[Mux.scala 47:69]
  assign _T_35 = io_input_bits_a[5] ? 5'h11 : _T_34; // @[Mux.scala 47:69]
  assign _T_36 = io_input_bits_a[6] ? 5'h10 : _T_35; // @[Mux.scala 47:69]
  assign _T_37 = io_input_bits_a[7] ? 5'hf : _T_36; // @[Mux.scala 47:69]
  assign _T_38 = io_input_bits_a[8] ? 5'he : _T_37; // @[Mux.scala 47:69]
  assign _T_39 = io_input_bits_a[9] ? 5'hd : _T_38; // @[Mux.scala 47:69]
  assign _T_40 = io_input_bits_a[10] ? 5'hc : _T_39; // @[Mux.scala 47:69]
  assign _T_41 = io_input_bits_a[11] ? 5'hb : _T_40; // @[Mux.scala 47:69]
  assign _T_42 = io_input_bits_a[12] ? 5'ha : _T_41; // @[Mux.scala 47:69]
  assign _T_43 = io_input_bits_a[13] ? 5'h9 : _T_42; // @[Mux.scala 47:69]
  assign _T_44 = io_input_bits_a[14] ? 5'h8 : _T_43; // @[Mux.scala 47:69]
  assign _T_45 = io_input_bits_a[15] ? 5'h7 : _T_44; // @[Mux.scala 47:69]
  assign _T_46 = io_input_bits_a[16] ? 5'h6 : _T_45; // @[Mux.scala 47:69]
  assign _T_47 = io_input_bits_a[17] ? 5'h5 : _T_46; // @[Mux.scala 47:69]
  assign _T_48 = io_input_bits_a[18] ? 5'h4 : _T_47; // @[Mux.scala 47:69]
  assign _T_49 = io_input_bits_a[19] ? 5'h3 : _T_48; // @[Mux.scala 47:69]
  assign _T_50 = io_input_bits_a[20] ? 5'h2 : _T_49; // @[Mux.scala 47:69]
  assign _T_51 = io_input_bits_a[21] ? 5'h1 : _T_50; // @[Mux.scala 47:69]
  assign _T_52 = io_input_bits_a[22] ? 5'h0 : _T_51; // @[Mux.scala 47:69]
  assign _GEN_0 = {{31'd0}, io_input_bits_a[22:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_53 = _GEN_0 << _T_52; // @[rawFloatFromFN.scala 54:36]
  assign _T_55 = {_T_53[21:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_1 = {{4'd0}, _T_52}; // @[rawFloatFromFN.scala 57:26]
  assign _T_56 = _GEN_1 ^ 9'h1ff; // @[rawFloatFromFN.scala 57:26]
  assign _T_57 = _T_6 ? _T_56 : {{1'd0}, io_input_bits_a[30:23]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_58 = _T_6 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_2 = {{6'd0}, _T_58}; // @[rawFloatFromFN.scala 60:22]
  assign _T_59 = 8'h80 | _GEN_2; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_3 = {{1'd0}, _T_59}; // @[rawFloatFromFN.scala 59:15]
  assign _T_61 = _T_57 + _GEN_3; // @[rawFloatFromFN.scala 59:15]
  assign _T_62 = _T_6 & _T_7; // @[rawFloatFromFN.scala 62:34]
  assign _T_64 = _T_61[8:7] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_67 = _T_64 & ~_T_7; // @[rawFloatFromFN.scala 66:33]
  assign _T_70 = {1'b0,$signed(_T_61)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_72 = _T_6 ? _T_55 : io_input_bits_a[22:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_74 = {1'h0,~_T_62,_T_72}; // @[Cat.scala 29:58]
  assign _T_76 = _T_62 ? 3'h0 : _T_70[8:6]; // @[recFNFromFN.scala 48:16]
  assign _GEN_4 = {{2'd0}, _T_67}; // @[recFNFromFN.scala 48:79]
  assign _T_78 = _T_76 | _GEN_4; // @[recFNFromFN.scala 48:79]
  assign _T_81 = {_T_70[5:0],_T_74[22:0]}; // @[Cat.scala 29:58]
  assign _T_82 = {io_input_bits_a[31],_T_78}; // @[Cat.scala 29:58]
  assign _T_87 = cq_io_deq_bits_out[30:23] == 8'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_88 = cq_io_deq_bits_out[22:0] == 23'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_112 = cq_io_deq_bits_out[1] ? 5'h15 : 5'h16; // @[Mux.scala 47:69]
  assign _T_113 = cq_io_deq_bits_out[2] ? 5'h14 : _T_112; // @[Mux.scala 47:69]
  assign _T_114 = cq_io_deq_bits_out[3] ? 5'h13 : _T_113; // @[Mux.scala 47:69]
  assign _T_115 = cq_io_deq_bits_out[4] ? 5'h12 : _T_114; // @[Mux.scala 47:69]
  assign _T_116 = cq_io_deq_bits_out[5] ? 5'h11 : _T_115; // @[Mux.scala 47:69]
  assign _T_117 = cq_io_deq_bits_out[6] ? 5'h10 : _T_116; // @[Mux.scala 47:69]
  assign _T_118 = cq_io_deq_bits_out[7] ? 5'hf : _T_117; // @[Mux.scala 47:69]
  assign _T_119 = cq_io_deq_bits_out[8] ? 5'he : _T_118; // @[Mux.scala 47:69]
  assign _T_120 = cq_io_deq_bits_out[9] ? 5'hd : _T_119; // @[Mux.scala 47:69]
  assign _T_121 = cq_io_deq_bits_out[10] ? 5'hc : _T_120; // @[Mux.scala 47:69]
  assign _T_122 = cq_io_deq_bits_out[11] ? 5'hb : _T_121; // @[Mux.scala 47:69]
  assign _T_123 = cq_io_deq_bits_out[12] ? 5'ha : _T_122; // @[Mux.scala 47:69]
  assign _T_124 = cq_io_deq_bits_out[13] ? 5'h9 : _T_123; // @[Mux.scala 47:69]
  assign _T_125 = cq_io_deq_bits_out[14] ? 5'h8 : _T_124; // @[Mux.scala 47:69]
  assign _T_126 = cq_io_deq_bits_out[15] ? 5'h7 : _T_125; // @[Mux.scala 47:69]
  assign _T_127 = cq_io_deq_bits_out[16] ? 5'h6 : _T_126; // @[Mux.scala 47:69]
  assign _T_128 = cq_io_deq_bits_out[17] ? 5'h5 : _T_127; // @[Mux.scala 47:69]
  assign _T_129 = cq_io_deq_bits_out[18] ? 5'h4 : _T_128; // @[Mux.scala 47:69]
  assign _T_130 = cq_io_deq_bits_out[19] ? 5'h3 : _T_129; // @[Mux.scala 47:69]
  assign _T_131 = cq_io_deq_bits_out[20] ? 5'h2 : _T_130; // @[Mux.scala 47:69]
  assign _T_132 = cq_io_deq_bits_out[21] ? 5'h1 : _T_131; // @[Mux.scala 47:69]
  assign _T_133 = cq_io_deq_bits_out[22] ? 5'h0 : _T_132; // @[Mux.scala 47:69]
  assign _GEN_5 = {{31'd0}, cq_io_deq_bits_out[22:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_134 = _GEN_5 << _T_133; // @[rawFloatFromFN.scala 54:36]
  assign _T_136 = {_T_134[21:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_6 = {{4'd0}, _T_133}; // @[rawFloatFromFN.scala 57:26]
  assign _T_137 = _GEN_6 ^ 9'h1ff; // @[rawFloatFromFN.scala 57:26]
  assign _T_138 = _T_87 ? _T_137 : {{1'd0}, cq_io_deq_bits_out[30:23]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_139 = _T_87 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_7 = {{6'd0}, _T_139}; // @[rawFloatFromFN.scala 60:22]
  assign _T_140 = 8'h80 | _GEN_7; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_8 = {{1'd0}, _T_140}; // @[rawFloatFromFN.scala 59:15]
  assign _T_142 = _T_138 + _GEN_8; // @[rawFloatFromFN.scala 59:15]
  assign _T_143 = _T_87 & _T_88; // @[rawFloatFromFN.scala 62:34]
  assign _T_145 = _T_142[8:7] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_148 = _T_145 & ~_T_88; // @[rawFloatFromFN.scala 66:33]
  assign _T_151 = {1'b0,$signed(_T_142)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_153 = _T_87 ? _T_136 : cq_io_deq_bits_out[22:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_155 = {1'h0,~_T_143,_T_153}; // @[Cat.scala 29:58]
  assign _T_157 = _T_143 ? 3'h0 : _T_151[8:6]; // @[recFNFromFN.scala 48:16]
  assign _GEN_9 = {{2'd0}, _T_148}; // @[recFNFromFN.scala 48:79]
  assign _T_159 = _T_157 | _GEN_9; // @[recFNFromFN.scala 48:79]
  assign _T_162 = {_T_151[5:0],_T_155[22:0]}; // @[Cat.scala 29:58]
  assign _T_163 = {cq_io_deq_bits_out[31],_T_159}; // @[Cat.scala 29:58]
  assign _T_168 = io_actual_out[31:29] == 3'h0; // @[tests.scala 48:26]
  assign _T_170 = io_actual_out[31:29] == 3'h7; // @[tests.scala 48:55]
  assign _T_171 = _T_168 | _T_170; // @[tests.scala 48:39]
  assign _T_172 = io_actual_out[32:29] == io_expected_recOut[32:29]; // @[tests.scala 49:20]
  assign _T_175 = io_actual_out[22:0] == io_expected_recOut[22:0]; // @[tests.scala 49:54]
  assign _T_176 = _T_172 & _T_175; // @[tests.scala 49:31]
  assign _T_178 = io_actual_out[31:29] == 3'h6; // @[tests.scala 50:30]
  assign _T_180 = io_actual_out == io_expected_recOut; // @[tests.scala 50:66]
  assign _T_181 = _T_178 ? _T_172 : _T_180; // @[tests.scala 50:16]
  assign _T_182 = _T_171 ? _T_176 : _T_181; // @[tests.scala 48:12]
  assign _T_183 = cq_io_deq_valid & _T_182; // @[ValExec_DivSqrtRecFN_small.scala 193:25]
  assign _T_184 = io_actual_exceptionFlags == io_expected_exceptionFlags; // @[ValExec_DivSqrtRecFN_small.scala 195:35]
  assign io_input_ready = ds_io_inReady & cq_io_enq_ready; // @[ValExec_DivSqrtRecFN_small.scala 171:20]
  assign io_output_a = cq_io_deq_bits_a; // @[ValExec_DivSqrtRecFN_small.scala 178:17]
  assign io_output_roundingMode = cq_io_deq_bits_roundingMode; // @[ValExec_DivSqrtRecFN_small.scala 179:30]
  assign io_output_detectTininess = cq_io_deq_bits_detectTininess; // @[ValExec_DivSqrtRecFN_small.scala 180:30]
  assign io_expected_out = cq_io_deq_bits_out; // @[ValExec_DivSqrtRecFN_small.scala 182:21]
  assign io_expected_exceptionFlags = cq_io_deq_bits_exceptionFlags; // @[ValExec_DivSqrtRecFN_small.scala 183:32]
  assign io_expected_recOut = {_T_163,_T_162}; // @[ValExec_DivSqrtRecFN_small.scala 184:24]
  assign io_actual_out = ds_io_out; // @[ValExec_DivSqrtRecFN_small.scala 187:19]
  assign io_actual_exceptionFlags = ds_io_exceptionFlags; // @[ValExec_DivSqrtRecFN_small.scala 186:30]
  assign io_check = ds_io_outValid_sqrt; // @[ValExec_DivSqrtRecFN_small.scala 191:14]
  assign io_pass = _T_183 & _T_184; // @[ValExec_DivSqrtRecFN_small.scala 192:13]
  assign ds_clock = clock;
  assign ds_reset = reset;
  assign ds_io_inValid = io_input_valid & cq_io_enq_ready; // @[ValExec_DivSqrtRecFN_small.scala 172:19]
  assign ds_io_a = {_T_82,_T_81}; // @[ValExec_DivSqrtRecFN_small.scala 174:13]
  assign ds_io_roundingMode = io_input_bits_roundingMode; // @[ValExec_DivSqrtRecFN_small.scala 175:26]
  assign ds_io_detectTininess = io_input_bits_detectTininess; // @[ValExec_DivSqrtRecFN_small.scala 176:26]
  assign cq_clock = clock;
  assign cq_reset = reset;
  assign cq_io_enq_valid = io_input_valid & ds_io_inReady; // @[ValExec_DivSqrtRecFN_small.scala 168:21]
  assign cq_io_enq_bits_a = io_input_bits_a; // @[ValExec_DivSqrtRecFN_small.scala 169:20]
  assign cq_io_enq_bits_roundingMode = io_input_bits_roundingMode; // @[ValExec_DivSqrtRecFN_small.scala 169:20]
  assign cq_io_enq_bits_detectTininess = io_input_bits_detectTininess; // @[ValExec_DivSqrtRecFN_small.scala 169:20]
  assign cq_io_enq_bits_out = io_input_bits_out; // @[ValExec_DivSqrtRecFN_small.scala 169:20]
  assign cq_io_enq_bits_exceptionFlags = io_input_bits_exceptionFlags; // @[ValExec_DivSqrtRecFN_small.scala 169:20]
  assign cq_io_deq_ready = ds_io_outValid_sqrt; // @[ValExec_DivSqrtRecFN_small.scala 189:21]
endmodule
