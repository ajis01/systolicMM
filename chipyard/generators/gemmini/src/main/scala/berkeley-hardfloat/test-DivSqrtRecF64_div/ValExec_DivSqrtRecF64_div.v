module DivSqrtRecF64ToRaw_mulAddZ31(
  input          clock,
  input          reset,
  output         io_inReady_div,
  input          io_inValid,
  input  [64:0]  io_a,
  input  [64:0]  io_b,
  input  [2:0]   io_roundingMode,
  output [3:0]   io_usingMulAdd,
  output         io_latchMulAddA_0,
  output [53:0]  io_mulAddA_0,
  output         io_latchMulAddB_0,
  output [53:0]  io_mulAddB_0,
  output [104:0] io_mulAddC_2,
  input  [104:0] io_mulAddResult_3,
  output         io_rawOutValid_div,
  output [2:0]   io_roundingModeOut,
  output         io_invalidExc,
  output         io_infiniteExc,
  output         io_rawOut_isNaN,
  output         io_rawOut_isInf,
  output         io_rawOut_isZero,
  output         io_rawOut_sign,
  output [12:0]  io_rawOut_sExp,
  output [55:0]  io_rawOut_sig
);
  reg [2:0] cycleNum_A; // @[DivSqrtRecF64_mulAddZ31.scala 85:30]
  reg [31:0] _RAND_0;
  reg [3:0] cycleNum_B; // @[DivSqrtRecF64_mulAddZ31.scala 86:30]
  reg [31:0] _RAND_1;
  reg [2:0] cycleNum_C; // @[DivSqrtRecF64_mulAddZ31.scala 87:30]
  reg [31:0] _RAND_2;
  reg [2:0] cycleNum_E; // @[DivSqrtRecF64_mulAddZ31.scala 88:30]
  reg [31:0] _RAND_3;
  reg  valid_PA; // @[DivSqrtRecF64_mulAddZ31.scala 90:30]
  reg [31:0] _RAND_4;
  reg  majorExc_PA; // @[DivSqrtRecF64_mulAddZ31.scala 92:30]
  reg [31:0] _RAND_5;
  reg  isNaN_PA; // @[DivSqrtRecF64_mulAddZ31.scala 94:30]
  reg [31:0] _RAND_6;
  reg  isInf_PA; // @[DivSqrtRecF64_mulAddZ31.scala 95:30]
  reg [31:0] _RAND_7;
  reg  isZero_PA; // @[DivSqrtRecF64_mulAddZ31.scala 96:30]
  reg [31:0] _RAND_8;
  reg  sign_PA; // @[DivSqrtRecF64_mulAddZ31.scala 97:30]
  reg [31:0] _RAND_9;
  reg [12:0] sExp_PA; // @[DivSqrtRecF64_mulAddZ31.scala 98:30]
  reg [31:0] _RAND_10;
  reg [51:0] fractB_PA; // @[DivSqrtRecF64_mulAddZ31.scala 99:30]
  reg [63:0] _RAND_11;
  reg [51:0] fractA_PA; // @[DivSqrtRecF64_mulAddZ31.scala 100:30]
  reg [63:0] _RAND_12;
  reg [2:0] roundingMode_PA; // @[DivSqrtRecF64_mulAddZ31.scala 101:30]
  reg [31:0] _RAND_13;
  reg  valid_PB; // @[DivSqrtRecF64_mulAddZ31.scala 103:30]
  reg [31:0] _RAND_14;
  reg  majorExc_PB; // @[DivSqrtRecF64_mulAddZ31.scala 105:30]
  reg [31:0] _RAND_15;
  reg  isNaN_PB; // @[DivSqrtRecF64_mulAddZ31.scala 107:30]
  reg [31:0] _RAND_16;
  reg  isInf_PB; // @[DivSqrtRecF64_mulAddZ31.scala 108:30]
  reg [31:0] _RAND_17;
  reg  isZero_PB; // @[DivSqrtRecF64_mulAddZ31.scala 109:30]
  reg [31:0] _RAND_18;
  reg  sign_PB; // @[DivSqrtRecF64_mulAddZ31.scala 110:30]
  reg [31:0] _RAND_19;
  reg [12:0] sExp_PB; // @[DivSqrtRecF64_mulAddZ31.scala 111:30]
  reg [31:0] _RAND_20;
  reg  bit0FractA_PB; // @[DivSqrtRecF64_mulAddZ31.scala 112:30]
  reg [31:0] _RAND_21;
  reg [51:0] fractB_PB; // @[DivSqrtRecF64_mulAddZ31.scala 113:30]
  reg [63:0] _RAND_22;
  reg [2:0] roundingMode_PB; // @[DivSqrtRecF64_mulAddZ31.scala 114:30]
  reg [31:0] _RAND_23;
  reg  valid_PC; // @[DivSqrtRecF64_mulAddZ31.scala 116:30]
  reg [31:0] _RAND_24;
  reg  majorExc_PC; // @[DivSqrtRecF64_mulAddZ31.scala 118:30]
  reg [31:0] _RAND_25;
  reg  isNaN_PC; // @[DivSqrtRecF64_mulAddZ31.scala 120:30]
  reg [31:0] _RAND_26;
  reg  isInf_PC; // @[DivSqrtRecF64_mulAddZ31.scala 121:30]
  reg [31:0] _RAND_27;
  reg  isZero_PC; // @[DivSqrtRecF64_mulAddZ31.scala 122:30]
  reg [31:0] _RAND_28;
  reg  sign_PC; // @[DivSqrtRecF64_mulAddZ31.scala 123:30]
  reg [31:0] _RAND_29;
  reg [12:0] sExp_PC; // @[DivSqrtRecF64_mulAddZ31.scala 124:30]
  reg [31:0] _RAND_30;
  reg  bit0FractA_PC; // @[DivSqrtRecF64_mulAddZ31.scala 125:30]
  reg [31:0] _RAND_31;
  reg [51:0] fractB_PC; // @[DivSqrtRecF64_mulAddZ31.scala 126:30]
  reg [63:0] _RAND_32;
  reg [2:0] roundingMode_PC; // @[DivSqrtRecF64_mulAddZ31.scala 127:30]
  reg [31:0] _RAND_33;
  reg [8:0] fractR0_A; // @[DivSqrtRecF64_mulAddZ31.scala 129:30]
  reg [31:0] _RAND_34;
  reg [9:0] hiSqrR0_A_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 131:30]
  reg [31:0] _RAND_35;
  reg [20:0] partNegSigma0_A; // @[DivSqrtRecF64_mulAddZ31.scala 132:30]
  reg [31:0] _RAND_36;
  reg [8:0] nextMulAdd9A_A; // @[DivSqrtRecF64_mulAddZ31.scala 133:30]
  reg [31:0] _RAND_37;
  reg [8:0] nextMulAdd9B_A; // @[DivSqrtRecF64_mulAddZ31.scala 134:30]
  reg [31:0] _RAND_38;
  reg [31:0] ESqrR1_B_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 137:30]
  reg [31:0] _RAND_39;
  reg [57:0] sigX1_B; // @[DivSqrtRecF64_mulAddZ31.scala 138:30]
  reg [63:0] _RAND_40;
  reg [32:0] sqrSigma1_C; // @[DivSqrtRecF64_mulAddZ31.scala 139:30]
  reg [63:0] _RAND_41;
  reg [57:0] sigXN_C; // @[DivSqrtRecF64_mulAddZ31.scala 140:30]
  reg [63:0] _RAND_42;
  reg  E_E_div; // @[DivSqrtRecF64_mulAddZ31.scala 142:30]
  reg [31:0] _RAND_43;
  reg [53:0] sigT_E; // @[DivSqrtRecF64_mulAddZ31.scala 143:30]
  reg [63:0] _RAND_44;
  reg  isNegRemT_E; // @[DivSqrtRecF64_mulAddZ31.scala 144:30]
  reg [31:0] _RAND_45;
  reg  isZeroRemT_E; // @[DivSqrtRecF64_mulAddZ31.scala 145:30]
  reg [31:0] _RAND_46;
  wire  cyc_S_div; // @[DivSqrtRecF64_mulAddZ31.scala 163:38]
  wire  rawA_S_isZero; // @[rawFloatFromRecFN.scala 51:54]
  wire  _T_7; // @[rawFloatFromRecFN.scala 52:54]
  wire  rawA_S_isNaN; // @[rawFloatFromRecFN.scala 55:33]
  wire  rawA_S_isInf; // @[rawFloatFromRecFN.scala 56:33]
  wire  rawA_S_sign; // @[rawFloatFromRecFN.scala 58:25]
  wire [12:0] rawA_S_sExp; // @[rawFloatFromRecFN.scala 59:27]
  wire [53:0] rawA_S_sig; // @[Cat.scala 29:58]
  wire  rawB_S_isZero; // @[rawFloatFromRecFN.scala 51:54]
  wire  _T_23; // @[rawFloatFromRecFN.scala 52:54]
  wire  rawB_S_isNaN; // @[rawFloatFromRecFN.scala 55:33]
  wire  rawB_S_isInf; // @[rawFloatFromRecFN.scala 56:33]
  wire  rawB_S_sign; // @[rawFloatFromRecFN.scala 58:25]
  wire [12:0] rawB_S_sExp; // @[rawFloatFromRecFN.scala 59:27]
  wire [53:0] rawB_S_sig; // @[Cat.scala 29:58]
  wire  _T_35; // @[DivSqrtRecF64_mulAddZ31.scala 171:24]
  wire  _T_36; // @[DivSqrtRecF64_mulAddZ31.scala 171:59]
  wire  notSigNaNIn_invalidExc_S_div; // @[DivSqrtRecF64_mulAddZ31.scala 171:42]
  wire  _T_42; // @[common.scala 81:46]
  wire  _T_46; // @[common.scala 81:46]
  wire  _T_50; // @[DivSqrtRecF64_mulAddZ31.scala 177:38]
  wire  _T_51; // @[DivSqrtRecF64_mulAddZ31.scala 177:66]
  wire  _T_54; // @[DivSqrtRecF64_mulAddZ31.scala 179:33]
  wire  _T_55; // @[DivSqrtRecF64_mulAddZ31.scala 179:51]
  wire  majorExc_S; // @[DivSqrtRecF64_mulAddZ31.scala 178:46]
  wire  _T_58; // @[DivSqrtRecF64_mulAddZ31.scala 184:26]
  wire  isNaN_S; // @[DivSqrtRecF64_mulAddZ31.scala 184:42]
  wire  isInf_S; // @[DivSqrtRecF64_mulAddZ31.scala 186:63]
  wire  isZero_S; // @[DivSqrtRecF64_mulAddZ31.scala 187:64]
  wire  sign_S; // @[DivSqrtRecF64_mulAddZ31.scala 188:47]
  wire  _T_64; // @[DivSqrtRecF64_mulAddZ31.scala 190:39]
  wire  specialCaseA_S; // @[DivSqrtRecF64_mulAddZ31.scala 190:55]
  wire  _T_65; // @[DivSqrtRecF64_mulAddZ31.scala 191:39]
  wire  specialCaseB_S; // @[DivSqrtRecF64_mulAddZ31.scala 191:55]
  wire  normalCase_S_div; // @[DivSqrtRecF64_mulAddZ31.scala 192:45]
  wire [11:0] _T_74; // @[DivSqrtRecF64_mulAddZ31.scala 197:66]
  wire [12:0] _GEN_52; // @[DivSqrtRecF64_mulAddZ31.scala 197:21]
  wire [13:0] sExpQuot_S_div; // @[DivSqrtRecF64_mulAddZ31.scala 197:21]
  wire  _T_75; // @[DivSqrtRecF64_mulAddZ31.scala 200:29]
  wire [3:0] _T_77; // @[DivSqrtRecF64_mulAddZ31.scala 200:16]
  wire [12:0] sSatExpQuot_S_div; // @[DivSqrtRecF64_mulAddZ31.scala 205:11]
  wire  cyc_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 209:50]
  wire  _T_80; // @[DivSqrtRecF64_mulAddZ31.scala 216:49]
  wire  _T_81; // @[DivSqrtRecF64_mulAddZ31.scala 216:34]
  wire [1:0] _T_82; // @[DivSqrtRecF64_mulAddZ31.scala 218:16]
  wire [2:0] _T_84; // @[DivSqrtRecF64_mulAddZ31.scala 218:77]
  wire [2:0] _T_87; // @[DivSqrtRecF64_mulAddZ31.scala 220:57]
  wire [2:0] _T_88; // @[DivSqrtRecF64_mulAddZ31.scala 220:16]
  wire [2:0] _T_89; // @[DivSqrtRecF64_mulAddZ31.scala 219:77]
  wire  cyc_A6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 224:35]
  wire  cyc_A5_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 225:35]
  wire  cyc_A4_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 226:35]
  wire  cyc_A4; // @[DivSqrtRecF64_mulAddZ31.scala 230:30]
  wire  cyc_A3; // @[DivSqrtRecF64_mulAddZ31.scala 231:30]
  wire  cyc_A2; // @[DivSqrtRecF64_mulAddZ31.scala 232:30]
  wire  cyc_A1; // @[DivSqrtRecF64_mulAddZ31.scala 233:30]
  wire  _T_93; // @[DivSqrtRecF64_mulAddZ31.scala 243:33]
  wire  _T_94; // @[DivSqrtRecF64_mulAddZ31.scala 243:18]
  wire [3:0] _T_97; // @[DivSqrtRecF64_mulAddZ31.scala 247:28]
  wire  cyc_B10_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 251:36]
  wire  cyc_B9_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 252:36]
  wire  cyc_B8_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 253:36]
  wire  cyc_B7_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 254:36]
  wire  cyc_B6; // @[DivSqrtRecF64_mulAddZ31.scala 256:30]
  wire  cyc_B5; // @[DivSqrtRecF64_mulAddZ31.scala 257:30]
  wire  cyc_B4; // @[DivSqrtRecF64_mulAddZ31.scala 258:30]
  wire  cyc_B3; // @[DivSqrtRecF64_mulAddZ31.scala 259:30]
  wire  cyc_B2; // @[DivSqrtRecF64_mulAddZ31.scala 260:30]
  wire  cyc_B1; // @[DivSqrtRecF64_mulAddZ31.scala 261:30]
  wire  cyc_B6_div; // @[DivSqrtRecF64_mulAddZ31.scala 263:29]
  wire  cyc_B4_div; // @[DivSqrtRecF64_mulAddZ31.scala 265:29]
  wire  _T_111; // @[DivSqrtRecF64_mulAddZ31.scala 277:33]
  wire  _T_112; // @[DivSqrtRecF64_mulAddZ31.scala 277:18]
  wire [2:0] _T_115; // @[DivSqrtRecF64_mulAddZ31.scala 279:70]
  wire  cyc_C6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 282:35]
  wire  cyc_C5; // @[DivSqrtRecF64_mulAddZ31.scala 284:30]
  wire  cyc_C4; // @[DivSqrtRecF64_mulAddZ31.scala 285:30]
  wire  cyc_C3; // @[DivSqrtRecF64_mulAddZ31.scala 286:30]
  wire  cyc_C2; // @[DivSqrtRecF64_mulAddZ31.scala 287:30]
  wire  cyc_C1; // @[DivSqrtRecF64_mulAddZ31.scala 288:30]
  wire  _T_122; // @[DivSqrtRecF64_mulAddZ31.scala 302:33]
  wire  _T_123; // @[DivSqrtRecF64_mulAddZ31.scala 302:18]
  wire [2:0] _T_125; // @[DivSqrtRecF64_mulAddZ31.scala 303:55]
  wire  cyc_E3; // @[DivSqrtRecF64_mulAddZ31.scala 307:30]
  wire  cyc_E2; // @[DivSqrtRecF64_mulAddZ31.scala 308:30]
  wire  cyc_E1; // @[DivSqrtRecF64_mulAddZ31.scala 309:30]
  wire  _T_165; // @[DivSqrtRecF64_mulAddZ31.scala 383:36]
  wire  normalCase_PB; // @[DivSqrtRecF64_mulAddZ31.scala 383:50]
  wire  _T_187; // @[DivSqrtRecF64_mulAddZ31.scala 417:36]
  wire  normalCase_PC; // @[DivSqrtRecF64_mulAddZ31.scala 417:50]
  wire  valid_leaving_PC; // @[DivSqrtRecF64_mulAddZ31.scala 420:44]
  wire  ready_PC; // @[DivSqrtRecF64_mulAddZ31.scala 422:28]
  wire  valid_leaving_PB; // @[DivSqrtRecF64_mulAddZ31.scala 387:12]
  wire  ready_PB; // @[DivSqrtRecF64_mulAddZ31.scala 389:28]
  wire  _T_132; // @[DivSqrtRecF64_mulAddZ31.scala 324:55]
  wire  _T_133; // @[DivSqrtRecF64_mulAddZ31.scala 324:42]
  wire  entering_PA; // @[DivSqrtRecF64_mulAddZ31.scala 324:32]
  wire  _T_140; // @[DivSqrtRecF64_mulAddZ31.scala 346:36]
  wire  normalCase_PA; // @[DivSqrtRecF64_mulAddZ31.scala 346:50]
  wire  valid_normalCase_leaving_PA; // @[DivSqrtRecF64_mulAddZ31.scala 350:50]
  wire  valid_leaving_PA; // @[DivSqrtRecF64_mulAddZ31.scala 352:12]
  wire  leaving_PA; // @[DivSqrtRecF64_mulAddZ31.scala 353:28]
  wire  _T_134; // @[DivSqrtRecF64_mulAddZ31.scala 326:23]
  wire [52:0] sigA_PA; // @[Cat.scala 29:58]
  wire [52:0] sigB_PA; // @[Cat.scala 29:58]
  wire  ready_PA; // @[DivSqrtRecF64_mulAddZ31.scala 354:28]
  wire  _T_146; // @[DivSqrtRecF64_mulAddZ31.scala 359:15]
  wire  _T_148; // @[DivSqrtRecF64_mulAddZ31.scala 359:33]
  wire  _T_151; // @[DivSqrtRecF64_mulAddZ31.scala 360:40]
  wire  leaving_PB; // @[DivSqrtRecF64_mulAddZ31.scala 388:28]
  wire  _T_152; // @[DivSqrtRecF64_mulAddZ31.scala 360:25]
  wire  entering_PB_S; // @[DivSqrtRecF64_mulAddZ31.scala 359:47]
  wire  _T_153; // @[DivSqrtRecF64_mulAddZ31.scala 362:18]
  wire  entering_PB_normalCase; // @[DivSqrtRecF64_mulAddZ31.scala 362:35]
  wire  entering_PB; // @[DivSqrtRecF64_mulAddZ31.scala 363:37]
  wire  _T_154; // @[DivSqrtRecF64_mulAddZ31.scala 365:23]
  wire  _T_175; // @[DivSqrtRecF64_mulAddZ31.scala 394:47]
  wire  entering_PC_S; // @[DivSqrtRecF64_mulAddZ31.scala 394:61]
  wire  _T_176; // @[DivSqrtRecF64_mulAddZ31.scala 396:18]
  wire  entering_PC_normalCase; // @[DivSqrtRecF64_mulAddZ31.scala 396:35]
  wire  entering_PC; // @[DivSqrtRecF64_mulAddZ31.scala 397:37]
  wire  leaving_PC; // @[DivSqrtRecF64_mulAddZ31.scala 421:28]
  wire  _T_177; // @[DivSqrtRecF64_mulAddZ31.scala 399:23]
  wire [52:0] sigB_PC; // @[Cat.scala 29:58]
  wire  _T_194; // @[DivSqrtRecF64_mulAddZ31.scala 429:18]
  wire  _T_202; // @[DivSqrtRecF64_mulAddZ31.scala 430:27]
  wire  _T_204; // @[DivSqrtRecF64_mulAddZ31.scala 430:39]
  wire  _T_208; // @[DivSqrtRecF64_mulAddZ31.scala 430:68]
  wire [51:0] zFractB_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 439:29]
  wire  _T_223; // @[DivSqrtRecF64_mulAddZ31.scala 441:64]
  wire  zLinPiece_0_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 441:41]
  wire  _T_225; // @[DivSqrtRecF64_mulAddZ31.scala 442:64]
  wire  zLinPiece_1_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 442:41]
  wire  _T_227; // @[DivSqrtRecF64_mulAddZ31.scala 443:64]
  wire  zLinPiece_2_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 443:41]
  wire  _T_229; // @[DivSqrtRecF64_mulAddZ31.scala 444:64]
  wire  zLinPiece_3_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 444:41]
  wire  _T_231; // @[DivSqrtRecF64_mulAddZ31.scala 445:64]
  wire  zLinPiece_4_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 445:41]
  wire  _T_233; // @[DivSqrtRecF64_mulAddZ31.scala 446:64]
  wire  zLinPiece_5_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 446:41]
  wire  _T_235; // @[DivSqrtRecF64_mulAddZ31.scala 447:64]
  wire  zLinPiece_6_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 447:41]
  wire  _T_237; // @[DivSqrtRecF64_mulAddZ31.scala 448:64]
  wire  zLinPiece_7_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 448:41]
  wire [8:0] _T_238; // @[DivSqrtRecF64_mulAddZ31.scala 450:12]
  wire [8:0] _T_239; // @[DivSqrtRecF64_mulAddZ31.scala 451:12]
  wire [8:0] _T_240; // @[DivSqrtRecF64_mulAddZ31.scala 450:56]
  wire [8:0] _T_241; // @[DivSqrtRecF64_mulAddZ31.scala 452:12]
  wire [8:0] _T_242; // @[DivSqrtRecF64_mulAddZ31.scala 451:56]
  wire [7:0] _T_243; // @[DivSqrtRecF64_mulAddZ31.scala 453:12]
  wire [8:0] _GEN_53; // @[DivSqrtRecF64_mulAddZ31.scala 452:56]
  wire [8:0] _T_244; // @[DivSqrtRecF64_mulAddZ31.scala 452:56]
  wire [7:0] _T_245; // @[DivSqrtRecF64_mulAddZ31.scala 454:12]
  wire [8:0] _GEN_54; // @[DivSqrtRecF64_mulAddZ31.scala 453:56]
  wire [8:0] _T_246; // @[DivSqrtRecF64_mulAddZ31.scala 453:56]
  wire [7:0] _T_247; // @[DivSqrtRecF64_mulAddZ31.scala 455:12]
  wire [8:0] _GEN_55; // @[DivSqrtRecF64_mulAddZ31.scala 454:56]
  wire [8:0] _T_248; // @[DivSqrtRecF64_mulAddZ31.scala 454:56]
  wire [7:0] _T_249; // @[DivSqrtRecF64_mulAddZ31.scala 456:12]
  wire [8:0] _GEN_56; // @[DivSqrtRecF64_mulAddZ31.scala 455:56]
  wire [8:0] _T_250; // @[DivSqrtRecF64_mulAddZ31.scala 455:56]
  wire [7:0] _T_251; // @[DivSqrtRecF64_mulAddZ31.scala 457:12]
  wire [8:0] _GEN_57; // @[DivSqrtRecF64_mulAddZ31.scala 456:56]
  wire [8:0] zK1_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 456:56]
  wire [11:0] _T_253; // @[DivSqrtRecF64_mulAddZ31.scala 459:12]
  wire [11:0] _T_255; // @[DivSqrtRecF64_mulAddZ31.scala 460:12]
  wire [11:0] _T_256; // @[DivSqrtRecF64_mulAddZ31.scala 459:61]
  wire [11:0] _T_258; // @[DivSqrtRecF64_mulAddZ31.scala 461:12]
  wire [11:0] _T_259; // @[DivSqrtRecF64_mulAddZ31.scala 460:61]
  wire [11:0] _T_261; // @[DivSqrtRecF64_mulAddZ31.scala 462:12]
  wire [11:0] _T_262; // @[DivSqrtRecF64_mulAddZ31.scala 461:61]
  wire [11:0] _T_264; // @[DivSqrtRecF64_mulAddZ31.scala 463:12]
  wire [11:0] _T_265; // @[DivSqrtRecF64_mulAddZ31.scala 462:61]
  wire [11:0] _T_267; // @[DivSqrtRecF64_mulAddZ31.scala 464:12]
  wire [11:0] _T_268; // @[DivSqrtRecF64_mulAddZ31.scala 463:61]
  wire [11:0] _T_270; // @[DivSqrtRecF64_mulAddZ31.scala 465:12]
  wire [11:0] _T_271; // @[DivSqrtRecF64_mulAddZ31.scala 464:61]
  wire [11:0] _T_273; // @[DivSqrtRecF64_mulAddZ31.scala 466:12]
  wire [11:0] zComplFractK0_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 465:61]
  wire  _T_309; // @[DivSqrtRecF64_mulAddZ31.scala 488:44]
  wire  zQuadPiece_0_A6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 488:60]
  wire  zQuadPiece_1_A6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 489:60]
  wire  _T_317; // @[DivSqrtRecF64_mulAddZ31.scala 490:44]
  wire  zQuadPiece_2_A6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 490:60]
  wire  zQuadPiece_3_A6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 491:60]
  wire [12:0] _T_324; // @[DivSqrtRecF64_mulAddZ31.scala 493:12]
  wire [12:0] _T_326; // @[DivSqrtRecF64_mulAddZ31.scala 494:12]
  wire [12:0] _T_327; // @[DivSqrtRecF64_mulAddZ31.scala 493:64]
  wire [12:0] _T_329; // @[DivSqrtRecF64_mulAddZ31.scala 495:12]
  wire [12:0] _T_330; // @[DivSqrtRecF64_mulAddZ31.scala 494:64]
  wire [12:0] _T_332; // @[DivSqrtRecF64_mulAddZ31.scala 496:12]
  wire [12:0] zComplFractK0_A6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 495:64]
  wire [8:0] _T_336; // @[DivSqrtRecF64_mulAddZ31.scala 500:16]
  wire [8:0] mulAdd9A_A; // @[DivSqrtRecF64_mulAddZ31.scala 499:46]
  wire [8:0] _T_340; // @[DivSqrtRecF64_mulAddZ31.scala 503:16]
  wire [8:0] mulAdd9B_A; // @[DivSqrtRecF64_mulAddZ31.scala 502:46]
  wire [5:0] _T_345; // @[Bitwise.scala 71:12]
  wire [19:0] _T_347; // @[Cat.scala 29:58]
  wire [7:0] _T_350; // @[Bitwise.scala 71:12]
  wire [20:0] _T_352; // @[Cat.scala 29:58]
  wire [20:0] _GEN_58; // @[DivSqrtRecF64_mulAddZ31.scala 507:71]
  wire [20:0] _T_353; // @[DivSqrtRecF64_mulAddZ31.scala 507:71]
  wire [18:0] _T_354; // @[DivSqrtRecF64_mulAddZ31.scala 509:55]
  wire [19:0] _T_355; // @[DivSqrtRecF64_mulAddZ31.scala 509:42]
  wire [19:0] _T_356; // @[DivSqrtRecF64_mulAddZ31.scala 509:12]
  wire [20:0] _GEN_59; // @[DivSqrtRecF64_mulAddZ31.scala 508:71]
  wire [20:0] _T_357; // @[DivSqrtRecF64_mulAddZ31.scala 508:71]
  wire  _T_360; // @[DivSqrtRecF64_mulAddZ31.scala 510:25]
  wire [10:0] _T_361; // @[DivSqrtRecF64_mulAddZ31.scala 510:12]
  wire [20:0] _GEN_60; // @[DivSqrtRecF64_mulAddZ31.scala 509:71]
  wire [20:0] _T_362; // @[DivSqrtRecF64_mulAddZ31.scala 509:71]
  wire  _T_364; // @[DivSqrtRecF64_mulAddZ31.scala 511:26]
  wire  _T_365; // @[DivSqrtRecF64_mulAddZ31.scala 511:48]
  wire [20:0] _T_368; // @[DivSqrtRecF64_mulAddZ31.scala 512:29]
  wire [20:0] _T_369; // @[DivSqrtRecF64_mulAddZ31.scala 511:12]
  wire [20:0] _T_370; // @[DivSqrtRecF64_mulAddZ31.scala 510:71]
  wire [20:0] _T_372; // @[DivSqrtRecF64_mulAddZ31.scala 515:12]
  wire [20:0] _T_373; // @[DivSqrtRecF64_mulAddZ31.scala 514:11]
  wire [24:0] _T_376; // @[DivSqrtRecF64_mulAddZ31.scala 515:62]
  wire [23:0] _T_377; // @[DivSqrtRecF64_mulAddZ31.scala 517:45]
  wire [23:0] _T_378; // @[DivSqrtRecF64_mulAddZ31.scala 517:12]
  wire [24:0] _GEN_61; // @[DivSqrtRecF64_mulAddZ31.scala 516:62]
  wire [24:0] mulAdd9C_A; // @[DivSqrtRecF64_mulAddZ31.scala 516:62]
  wire [17:0] _T_379; // @[DivSqrtRecF64_mulAddZ31.scala 518:37]
  wire [18:0] loMulAdd9Out_A; // @[DivSqrtRecF64_mulAddZ31.scala 518:50]
  wire [6:0] _T_384; // @[DivSqrtRecF64_mulAddZ31.scala 521:36]
  wire [6:0] _T_386; // @[DivSqrtRecF64_mulAddZ31.scala 520:16]
  wire [24:0] mulAdd9Out_A; // @[Cat.scala 29:58]
  wire  _T_389; // @[DivSqrtRecF64_mulAddZ31.scala 528:25]
  wire [14:0] zFractR0_A6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 528:12]
  wire [25:0] _T_393; // @[DivSqrtRecF64_mulAddZ31.scala 532:53]
  wire [25:0] sqrR0_A5_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 532:28]
  wire  _T_395; // @[DivSqrtRecF64_mulAddZ31.scala 534:24]
  wire [13:0] zFractR0_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 534:12]
  wire  _T_399; // @[DivSqrtRecF64_mulAddZ31.scala 536:20]
  wire [22:0] zSigma0_A2; // @[DivSqrtRecF64_mulAddZ31.scala 536:12]
  wire [15:0] r1_A1; // @[DivSqrtRecF64_mulAddZ31.scala 537:29]
  wire  _T_407; // @[DivSqrtRecF64_mulAddZ31.scala 540:23]
  wire [14:0] _GEN_62; // @[DivSqrtRecF64_mulAddZ31.scala 541:39]
  wire [14:0] _T_408; // @[DivSqrtRecF64_mulAddZ31.scala 541:39]
  wire [14:0] _GEN_37; // @[DivSqrtRecF64_mulAddZ31.scala 540:38]
  wire [15:0] _GEN_38; // @[DivSqrtRecF64_mulAddZ31.scala 543:24]
  wire  _T_410; // @[DivSqrtRecF64_mulAddZ31.scala 546:23]
  wire [24:0] _T_412; // @[DivSqrtRecF64_mulAddZ31.scala 547:31]
  wire [24:0] _GEN_39; // @[DivSqrtRecF64_mulAddZ31.scala 546:34]
  wire  _T_414; // @[DivSqrtRecF64_mulAddZ31.scala 550:36]
  wire  _T_415; // @[DivSqrtRecF64_mulAddZ31.scala 550:51]
  wire  _T_416; // @[DivSqrtRecF64_mulAddZ31.scala 550:61]
  wire  _T_417; // @[DivSqrtRecF64_mulAddZ31.scala 550:71]
  wire [8:0] _T_423; // @[DivSqrtRecF64_mulAddZ31.scala 555:16]
  wire [14:0] _GEN_63; // @[DivSqrtRecF64_mulAddZ31.scala 554:68]
  wire [14:0] _T_424; // @[DivSqrtRecF64_mulAddZ31.scala 554:68]
  wire [14:0] _GEN_64; // @[DivSqrtRecF64_mulAddZ31.scala 555:68]
  wire [14:0] _T_426; // @[DivSqrtRecF64_mulAddZ31.scala 555:68]
  wire  _T_427; // @[DivSqrtRecF64_mulAddZ31.scala 557:29]
  wire [8:0] _T_429; // @[DivSqrtRecF64_mulAddZ31.scala 557:16]
  wire [14:0] _GEN_65; // @[DivSqrtRecF64_mulAddZ31.scala 556:68]
  wire [14:0] _T_430; // @[DivSqrtRecF64_mulAddZ31.scala 556:68]
  wire [22:0] _GEN_66; // @[DivSqrtRecF64_mulAddZ31.scala 557:68]
  wire [22:0] _T_431; // @[DivSqrtRecF64_mulAddZ31.scala 557:68]
  wire [22:0] _GEN_40; // @[DivSqrtRecF64_mulAddZ31.scala 551:7]
  wire  _T_435; // @[DivSqrtRecF64_mulAddZ31.scala 560:63]
  wire [8:0] _T_439; // @[DivSqrtRecF64_mulAddZ31.scala 564:16]
  wire [14:0] _GEN_67; // @[DivSqrtRecF64_mulAddZ31.scala 563:73]
  wire [14:0] _T_440; // @[DivSqrtRecF64_mulAddZ31.scala 563:73]
  wire [14:0] _T_441; // @[DivSqrtRecF64_mulAddZ31.scala 564:73]
  wire [8:0] _T_443; // @[DivSqrtRecF64_mulAddZ31.scala 566:16]
  wire [14:0] _GEN_69; // @[DivSqrtRecF64_mulAddZ31.scala 565:73]
  wire [14:0] _T_444; // @[DivSqrtRecF64_mulAddZ31.scala 565:73]
  wire [8:0] _T_446; // @[Cat.scala 29:58]
  wire [8:0] _T_447; // @[DivSqrtRecF64_mulAddZ31.scala 567:16]
  wire [14:0] _GEN_70; // @[DivSqrtRecF64_mulAddZ31.scala 566:73]
  wire [14:0] _T_448; // @[DivSqrtRecF64_mulAddZ31.scala 566:73]
  wire [14:0] _GEN_41; // @[DivSqrtRecF64_mulAddZ31.scala 560:74]
  wire  _T_449; // @[DivSqrtRecF64_mulAddZ31.scala 576:16]
  wire  _T_450; // @[DivSqrtRecF64_mulAddZ31.scala 576:31]
  wire  _T_451; // @[DivSqrtRecF64_mulAddZ31.scala 576:45]
  wire  _T_452; // @[DivSqrtRecF64_mulAddZ31.scala 576:55]
  wire  _T_453; // @[DivSqrtRecF64_mulAddZ31.scala 576:65]
  wire  _T_454; // @[DivSqrtRecF64_mulAddZ31.scala 577:25]
  wire  _T_458; // @[DivSqrtRecF64_mulAddZ31.scala 580:25]
  wire [52:0] _T_459; // @[DivSqrtRecF64_mulAddZ31.scala 580:12]
  wire [52:0] _T_461; // @[DivSqrtRecF64_mulAddZ31.scala 581:12]
  wire [52:0] _T_462; // @[DivSqrtRecF64_mulAddZ31.scala 580:67]
  wire [45:0] zSigma1_B4; // @[DivSqrtRecF64_mulAddZ31.scala 632:22]
  wire [52:0] _GEN_71; // @[DivSqrtRecF64_mulAddZ31.scala 581:67]
  wire [52:0] _T_464; // @[DivSqrtRecF64_mulAddZ31.scala 581:67]
  wire  _T_465; // @[DivSqrtRecF64_mulAddZ31.scala 584:20]
  wire [57:0] sigXNU_B3_CX; // @[DivSqrtRecF64_mulAddZ31.scala 634:38]
  wire [45:0] _T_467; // @[DivSqrtRecF64_mulAddZ31.scala 584:12]
  wire [52:0] _GEN_72; // @[DivSqrtRecF64_mulAddZ31.scala 582:67]
  wire [52:0] _T_468; // @[DivSqrtRecF64_mulAddZ31.scala 582:67]
  wire [45:0] _T_470; // @[DivSqrtRecF64_mulAddZ31.scala 585:51]
  wire [45:0] _T_471; // @[DivSqrtRecF64_mulAddZ31.scala 585:12]
  wire [52:0] _GEN_73; // @[DivSqrtRecF64_mulAddZ31.scala 584:67]
  wire [52:0] _T_472; // @[DivSqrtRecF64_mulAddZ31.scala 584:67]
  wire [52:0] _T_476; // @[DivSqrtRecF64_mulAddZ31.scala 587:12]
  wire [52:0] _T_477; // @[DivSqrtRecF64_mulAddZ31.scala 586:67]
  wire  _T_481; // @[DivSqrtRecF64_mulAddZ31.scala 590:46]
  wire  _T_482; // @[DivSqrtRecF64_mulAddZ31.scala 590:56]
  wire  _T_483; // @[DivSqrtRecF64_mulAddZ31.scala 591:25]
  wire [51:0] _T_485; // @[DivSqrtRecF64_mulAddZ31.scala 593:31]
  wire [51:0] _T_486; // @[DivSqrtRecF64_mulAddZ31.scala 593:12]
  wire [50:0] _T_487; // @[DivSqrtRecF64_mulAddZ31.scala 594:39]
  wire [50:0] _T_488; // @[DivSqrtRecF64_mulAddZ31.scala 594:12]
  wire [51:0] _GEN_74; // @[DivSqrtRecF64_mulAddZ31.scala 593:55]
  wire [51:0] _T_489; // @[DivSqrtRecF64_mulAddZ31.scala 593:55]
  wire [52:0] _T_492; // @[DivSqrtRecF64_mulAddZ31.scala 594:55]
  wire [52:0] _GEN_75; // @[DivSqrtRecF64_mulAddZ31.scala 595:55]
  wire [52:0] _T_493; // @[DivSqrtRecF64_mulAddZ31.scala 595:55]
  wire [29:0] _T_495; // @[DivSqrtRecF64_mulAddZ31.scala 597:12]
  wire [52:0] _GEN_76; // @[DivSqrtRecF64_mulAddZ31.scala 596:55]
  wire [52:0] _T_496; // @[DivSqrtRecF64_mulAddZ31.scala 596:55]
  wire [32:0] _T_497; // @[DivSqrtRecF64_mulAddZ31.scala 598:12]
  wire [52:0] _GEN_77; // @[DivSqrtRecF64_mulAddZ31.scala 597:55]
  wire [52:0] _T_498; // @[DivSqrtRecF64_mulAddZ31.scala 597:55]
  wire  E_C1_div; // @[DivSqrtRecF64_mulAddZ31.scala 635:20]
  wire  _T_571; // @[DivSqrtRecF64_mulAddZ31.scala 637:25]
  wire [53:0] _T_575; // @[DivSqrtRecF64_mulAddZ31.scala 637:12]
  wire  _T_576; // @[DivSqrtRecF64_mulAddZ31.scala 641:24]
  wire [52:0] _T_579; // @[DivSqrtRecF64_mulAddZ31.scala 641:12]
  wire [53:0] _GEN_78; // @[DivSqrtRecF64_mulAddZ31.scala 640:11]
  wire [53:0] zComplSigT_C1; // @[DivSqrtRecF64_mulAddZ31.scala 640:11]
  wire [53:0] _GEN_79; // @[DivSqrtRecF64_mulAddZ31.scala 598:55]
  wire  _T_500; // @[DivSqrtRecF64_mulAddZ31.scala 602:20]
  wire  _T_501; // @[DivSqrtRecF64_mulAddZ31.scala 602:34]
  wire  _T_502; // @[DivSqrtRecF64_mulAddZ31.scala 602:48]
  wire  _T_503; // @[DivSqrtRecF64_mulAddZ31.scala 603:30]
  wire  _T_504; // @[DivSqrtRecF64_mulAddZ31.scala 603:45]
  wire  _T_505; // @[DivSqrtRecF64_mulAddZ31.scala 603:60]
  wire  _T_508; // @[DivSqrtRecF64_mulAddZ31.scala 604:44]
  wire  _T_510; // @[DivSqrtRecF64_mulAddZ31.scala 604:73]
  wire  _T_511; // @[DivSqrtRecF64_mulAddZ31.scala 606:20]
  wire  _T_512; // @[DivSqrtRecF64_mulAddZ31.scala 606:34]
  wire  _T_513; // @[DivSqrtRecF64_mulAddZ31.scala 607:29]
  wire  _T_514; // @[DivSqrtRecF64_mulAddZ31.scala 607:44]
  wire  _T_515; // @[DivSqrtRecF64_mulAddZ31.scala 607:54]
  wire  _T_518; // @[DivSqrtRecF64_mulAddZ31.scala 608:44]
  wire  _T_519; // @[DivSqrtRecF64_mulAddZ31.scala 608:58]
  wire  _T_520; // @[DivSqrtRecF64_mulAddZ31.scala 608:73]
  wire  _T_521; // @[DivSqrtRecF64_mulAddZ31.scala 610:20]
  wire  _T_522; // @[DivSqrtRecF64_mulAddZ31.scala 610:34]
  wire  _T_523; // @[DivSqrtRecF64_mulAddZ31.scala 611:29]
  wire  _T_524; // @[DivSqrtRecF64_mulAddZ31.scala 611:44]
  wire  _T_525; // @[DivSqrtRecF64_mulAddZ31.scala 611:54]
  wire  _T_528; // @[DivSqrtRecF64_mulAddZ31.scala 612:44]
  wire  _T_529; // @[DivSqrtRecF64_mulAddZ31.scala 612:54]
  wire  _T_530; // @[DivSqrtRecF64_mulAddZ31.scala 614:31]
  wire [1:0] _T_532; // @[Cat.scala 29:58]
  wire [1:0] _T_533; // @[Cat.scala 29:58]
  wire [104:0] _T_535; // @[DivSqrtRecF64_mulAddZ31.scala 618:45]
  wire [104:0] _T_536; // @[DivSqrtRecF64_mulAddZ31.scala 618:12]
  wire [103:0] _T_537; // @[DivSqrtRecF64_mulAddZ31.scala 619:45]
  wire [103:0] _T_538; // @[DivSqrtRecF64_mulAddZ31.scala 619:12]
  wire [104:0] _GEN_80; // @[DivSqrtRecF64_mulAddZ31.scala 618:66]
  wire [104:0] _T_539; // @[DivSqrtRecF64_mulAddZ31.scala 618:66]
  wire [104:0] _T_541; // @[DivSqrtRecF64_mulAddZ31.scala 620:45]
  wire [104:0] _T_542; // @[DivSqrtRecF64_mulAddZ31.scala 620:12]
  wire [104:0] _T_543; // @[DivSqrtRecF64_mulAddZ31.scala 619:66]
  wire  _T_545; // @[DivSqrtRecF64_mulAddZ31.scala 621:24]
  wire [53:0] _T_546; // @[DivSqrtRecF64_mulAddZ31.scala 621:51]
  wire [53:0] _T_547; // @[DivSqrtRecF64_mulAddZ31.scala 621:12]
  wire [104:0] _GEN_81; // @[DivSqrtRecF64_mulAddZ31.scala 620:66]
  wire [31:0] ESqrR1_B8_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 631:43]
  wire [32:0] sqrSigma1_B1; // @[DivSqrtRecF64_mulAddZ31.scala 633:41]
  wire [53:0] sigT_C1; // @[DivSqrtRecF64_mulAddZ31.scala 647:19]
  wire [55:0] remT_E2; // @[DivSqrtRecF64_mulAddZ31.scala 648:36]
  wire  _T_584; // @[DivSqrtRecF64_mulAddZ31.scala 660:23]
  wire  _T_591; // @[DivSqrtRecF64_mulAddZ31.scala 674:29]
  wire [12:0] sExpP1_PC; // @[DivSqrtRecF64_mulAddZ31.scala 693:29]
  wire [54:0] sigTP1_E; // @[DivSqrtRecF64_mulAddZ31.scala 694:27]
  wire [12:0] _T_610; // @[DivSqrtRecF64_mulAddZ31.scala 708:12]
  wire [12:0] _T_614; // @[DivSqrtRecF64_mulAddZ31.scala 709:12]
  wire [54:0] _T_622; // @[DivSqrtRecF64_mulAddZ31.scala 711:29]
  assign cyc_S_div = io_inReady_div & io_inValid; // @[DivSqrtRecF64_mulAddZ31.scala 163:38]
  assign rawA_S_isZero = io_a[63:61] == 3'h0; // @[rawFloatFromRecFN.scala 51:54]
  assign _T_7 = io_a[63:62] == 2'h3; // @[rawFloatFromRecFN.scala 52:54]
  assign rawA_S_isNaN = _T_7 & io_a[61]; // @[rawFloatFromRecFN.scala 55:33]
  assign rawA_S_isInf = _T_7 & ~io_a[61]; // @[rawFloatFromRecFN.scala 56:33]
  assign rawA_S_sign = io_a[64]; // @[rawFloatFromRecFN.scala 58:25]
  assign rawA_S_sExp = {1'b0,$signed(io_a[63:52])}; // @[rawFloatFromRecFN.scala 59:27]
  assign rawA_S_sig = {1'h0,~rawA_S_isZero,io_a[51:0]}; // @[Cat.scala 29:58]
  assign rawB_S_isZero = io_b[63:61] == 3'h0; // @[rawFloatFromRecFN.scala 51:54]
  assign _T_23 = io_b[63:62] == 2'h3; // @[rawFloatFromRecFN.scala 52:54]
  assign rawB_S_isNaN = _T_23 & io_b[61]; // @[rawFloatFromRecFN.scala 55:33]
  assign rawB_S_isInf = _T_23 & ~io_b[61]; // @[rawFloatFromRecFN.scala 56:33]
  assign rawB_S_sign = io_b[64]; // @[rawFloatFromRecFN.scala 58:25]
  assign rawB_S_sExp = {1'b0,$signed(io_b[63:52])}; // @[rawFloatFromRecFN.scala 59:27]
  assign rawB_S_sig = {1'h0,~rawB_S_isZero,io_b[51:0]}; // @[Cat.scala 29:58]
  assign _T_35 = rawA_S_isZero & rawB_S_isZero; // @[DivSqrtRecF64_mulAddZ31.scala 171:24]
  assign _T_36 = rawA_S_isInf & rawB_S_isInf; // @[DivSqrtRecF64_mulAddZ31.scala 171:59]
  assign notSigNaNIn_invalidExc_S_div = _T_35 | _T_36; // @[DivSqrtRecF64_mulAddZ31.scala 171:42]
  assign _T_42 = rawB_S_isNaN & ~rawB_S_sig[51]; // @[common.scala 81:46]
  assign _T_46 = rawA_S_isNaN & ~rawA_S_sig[51]; // @[common.scala 81:46]
  assign _T_50 = _T_46 | _T_42; // @[DivSqrtRecF64_mulAddZ31.scala 177:38]
  assign _T_51 = _T_50 | notSigNaNIn_invalidExc_S_div; // @[DivSqrtRecF64_mulAddZ31.scala 177:66]
  assign _T_54 = ~rawA_S_isNaN & ~rawA_S_isInf; // @[DivSqrtRecF64_mulAddZ31.scala 179:33]
  assign _T_55 = _T_54 & rawB_S_isZero; // @[DivSqrtRecF64_mulAddZ31.scala 179:51]
  assign majorExc_S = _T_51 | _T_55; // @[DivSqrtRecF64_mulAddZ31.scala 178:46]
  assign _T_58 = rawA_S_isNaN | rawB_S_isNaN; // @[DivSqrtRecF64_mulAddZ31.scala 184:26]
  assign isNaN_S = _T_58 | notSigNaNIn_invalidExc_S_div; // @[DivSqrtRecF64_mulAddZ31.scala 184:42]
  assign isInf_S = rawA_S_isInf | rawB_S_isZero; // @[DivSqrtRecF64_mulAddZ31.scala 186:63]
  assign isZero_S = rawA_S_isZero | rawB_S_isInf; // @[DivSqrtRecF64_mulAddZ31.scala 187:64]
  assign sign_S = rawA_S_sign ^ rawB_S_sign; // @[DivSqrtRecF64_mulAddZ31.scala 188:47]
  assign _T_64 = rawA_S_isNaN | rawA_S_isInf; // @[DivSqrtRecF64_mulAddZ31.scala 190:39]
  assign specialCaseA_S = _T_64 | rawA_S_isZero; // @[DivSqrtRecF64_mulAddZ31.scala 190:55]
  assign _T_65 = rawB_S_isNaN | rawB_S_isInf; // @[DivSqrtRecF64_mulAddZ31.scala 191:39]
  assign specialCaseB_S = _T_65 | rawB_S_isZero; // @[DivSqrtRecF64_mulAddZ31.scala 191:55]
  assign normalCase_S_div = ~specialCaseA_S & ~specialCaseB_S; // @[DivSqrtRecF64_mulAddZ31.scala 192:45]
  assign _T_74 = {rawB_S_sExp[11],~rawB_S_sExp[10:0]}; // @[DivSqrtRecF64_mulAddZ31.scala 197:66]
  assign _GEN_52 = {{1{_T_74[11]}},_T_74}; // @[DivSqrtRecF64_mulAddZ31.scala 197:21]
  assign sExpQuot_S_div = $signed(rawA_S_sExp) + $signed(_GEN_52); // @[DivSqrtRecF64_mulAddZ31.scala 197:21]
  assign _T_75 = 14'she00 <= $signed(sExpQuot_S_div); // @[DivSqrtRecF64_mulAddZ31.scala 200:29]
  assign _T_77 = _T_75 ? 4'h6 : sExpQuot_S_div[12:9]; // @[DivSqrtRecF64_mulAddZ31.scala 200:16]
  assign sSatExpQuot_S_div = {_T_77,sExpQuot_S_div[8:0]}; // @[DivSqrtRecF64_mulAddZ31.scala 205:11]
  assign cyc_A4_div = cyc_S_div & normalCase_S_div; // @[DivSqrtRecF64_mulAddZ31.scala 209:50]
  assign _T_80 = cycleNum_A != 3'h0; // @[DivSqrtRecF64_mulAddZ31.scala 216:49]
  assign _T_81 = cyc_A4_div | _T_80; // @[DivSqrtRecF64_mulAddZ31.scala 216:34]
  assign _T_82 = cyc_A4_div ? 2'h3 : 2'h0; // @[DivSqrtRecF64_mulAddZ31.scala 218:16]
  assign _T_84 = {{1'd0}, _T_82}; // @[DivSqrtRecF64_mulAddZ31.scala 218:77]
  assign _T_87 = cycleNum_A - 3'h1; // @[DivSqrtRecF64_mulAddZ31.scala 220:57]
  assign _T_88 = cyc_A4_div ? 3'h0 : _T_87; // @[DivSqrtRecF64_mulAddZ31.scala 220:16]
  assign _T_89 = _T_84 | _T_88; // @[DivSqrtRecF64_mulAddZ31.scala 219:77]
  assign cyc_A6_sqrt = cycleNum_A == 3'h6; // @[DivSqrtRecF64_mulAddZ31.scala 224:35]
  assign cyc_A5_sqrt = cycleNum_A == 3'h5; // @[DivSqrtRecF64_mulAddZ31.scala 225:35]
  assign cyc_A4_sqrt = cycleNum_A == 3'h4; // @[DivSqrtRecF64_mulAddZ31.scala 226:35]
  assign cyc_A4 = cyc_A4_sqrt | cyc_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 230:30]
  assign cyc_A3 = cycleNum_A == 3'h3; // @[DivSqrtRecF64_mulAddZ31.scala 231:30]
  assign cyc_A2 = cycleNum_A == 3'h2; // @[DivSqrtRecF64_mulAddZ31.scala 232:30]
  assign cyc_A1 = cycleNum_A == 3'h1; // @[DivSqrtRecF64_mulAddZ31.scala 233:30]
  assign _T_93 = cycleNum_B != 4'h0; // @[DivSqrtRecF64_mulAddZ31.scala 243:33]
  assign _T_94 = cyc_A1 | _T_93; // @[DivSqrtRecF64_mulAddZ31.scala 243:18]
  assign _T_97 = cycleNum_B - 4'h1; // @[DivSqrtRecF64_mulAddZ31.scala 247:28]
  assign cyc_B10_sqrt = cycleNum_B == 4'ha; // @[DivSqrtRecF64_mulAddZ31.scala 251:36]
  assign cyc_B9_sqrt = cycleNum_B == 4'h9; // @[DivSqrtRecF64_mulAddZ31.scala 252:36]
  assign cyc_B8_sqrt = cycleNum_B == 4'h8; // @[DivSqrtRecF64_mulAddZ31.scala 253:36]
  assign cyc_B7_sqrt = cycleNum_B == 4'h7; // @[DivSqrtRecF64_mulAddZ31.scala 254:36]
  assign cyc_B6 = cycleNum_B == 4'h6; // @[DivSqrtRecF64_mulAddZ31.scala 256:30]
  assign cyc_B5 = cycleNum_B == 4'h5; // @[DivSqrtRecF64_mulAddZ31.scala 257:30]
  assign cyc_B4 = cycleNum_B == 4'h4; // @[DivSqrtRecF64_mulAddZ31.scala 258:30]
  assign cyc_B3 = cycleNum_B == 4'h3; // @[DivSqrtRecF64_mulAddZ31.scala 259:30]
  assign cyc_B2 = cycleNum_B == 4'h2; // @[DivSqrtRecF64_mulAddZ31.scala 260:30]
  assign cyc_B1 = cycleNum_B == 4'h1; // @[DivSqrtRecF64_mulAddZ31.scala 261:30]
  assign cyc_B6_div = cyc_B6 & valid_PA; // @[DivSqrtRecF64_mulAddZ31.scala 263:29]
  assign cyc_B4_div = cyc_B4 & valid_PA; // @[DivSqrtRecF64_mulAddZ31.scala 265:29]
  assign _T_111 = cycleNum_C != 3'h0; // @[DivSqrtRecF64_mulAddZ31.scala 277:33]
  assign _T_112 = cyc_B1 | _T_111; // @[DivSqrtRecF64_mulAddZ31.scala 277:18]
  assign _T_115 = cycleNum_C - 3'h1; // @[DivSqrtRecF64_mulAddZ31.scala 279:70]
  assign cyc_C6_sqrt = cycleNum_C == 3'h6; // @[DivSqrtRecF64_mulAddZ31.scala 282:35]
  assign cyc_C5 = cycleNum_C == 3'h5; // @[DivSqrtRecF64_mulAddZ31.scala 284:30]
  assign cyc_C4 = cycleNum_C == 3'h4; // @[DivSqrtRecF64_mulAddZ31.scala 285:30]
  assign cyc_C3 = cycleNum_C == 3'h3; // @[DivSqrtRecF64_mulAddZ31.scala 286:30]
  assign cyc_C2 = cycleNum_C == 3'h2; // @[DivSqrtRecF64_mulAddZ31.scala 287:30]
  assign cyc_C1 = cycleNum_C == 3'h1; // @[DivSqrtRecF64_mulAddZ31.scala 288:30]
  assign _T_122 = cycleNum_E != 3'h0; // @[DivSqrtRecF64_mulAddZ31.scala 302:33]
  assign _T_123 = cyc_C1 | _T_122; // @[DivSqrtRecF64_mulAddZ31.scala 302:18]
  assign _T_125 = cycleNum_E - 3'h1; // @[DivSqrtRecF64_mulAddZ31.scala 303:55]
  assign cyc_E3 = cycleNum_E == 3'h3; // @[DivSqrtRecF64_mulAddZ31.scala 307:30]
  assign cyc_E2 = cycleNum_E == 3'h2; // @[DivSqrtRecF64_mulAddZ31.scala 308:30]
  assign cyc_E1 = cycleNum_E == 3'h1; // @[DivSqrtRecF64_mulAddZ31.scala 309:30]
  assign _T_165 = ~isNaN_PB & ~isInf_PB; // @[DivSqrtRecF64_mulAddZ31.scala 383:36]
  assign normalCase_PB = _T_165 & ~isZero_PB; // @[DivSqrtRecF64_mulAddZ31.scala 383:50]
  assign _T_187 = ~isNaN_PC & ~isInf_PC; // @[DivSqrtRecF64_mulAddZ31.scala 417:36]
  assign normalCase_PC = _T_187 & ~isZero_PC; // @[DivSqrtRecF64_mulAddZ31.scala 417:50]
  assign valid_leaving_PC = ~normalCase_PC | cyc_E1; // @[DivSqrtRecF64_mulAddZ31.scala 420:44]
  assign ready_PC = ~valid_PC | valid_leaving_PC; // @[DivSqrtRecF64_mulAddZ31.scala 422:28]
  assign valid_leaving_PB = normalCase_PB ? cyc_C3 : ready_PC; // @[DivSqrtRecF64_mulAddZ31.scala 387:12]
  assign ready_PB = ~valid_PB | valid_leaving_PB; // @[DivSqrtRecF64_mulAddZ31.scala 389:28]
  assign _T_132 = valid_PA | ~ready_PB; // @[DivSqrtRecF64_mulAddZ31.scala 324:55]
  assign _T_133 = cyc_S_div & _T_132; // @[DivSqrtRecF64_mulAddZ31.scala 324:42]
  assign entering_PA = cyc_A4_div | _T_133; // @[DivSqrtRecF64_mulAddZ31.scala 324:32]
  assign _T_140 = ~isNaN_PA & ~isInf_PA; // @[DivSqrtRecF64_mulAddZ31.scala 346:36]
  assign normalCase_PA = _T_140 & ~isZero_PA; // @[DivSqrtRecF64_mulAddZ31.scala 346:50]
  assign valid_normalCase_leaving_PA = cyc_B4_div | cyc_B7_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 350:50]
  assign valid_leaving_PA = normalCase_PA ? valid_normalCase_leaving_PA : ready_PB; // @[DivSqrtRecF64_mulAddZ31.scala 352:12]
  assign leaving_PA = valid_PA & valid_leaving_PA; // @[DivSqrtRecF64_mulAddZ31.scala 353:28]
  assign _T_134 = entering_PA | leaving_PA; // @[DivSqrtRecF64_mulAddZ31.scala 326:23]
  assign sigA_PA = {1'h1,fractA_PA}; // @[Cat.scala 29:58]
  assign sigB_PA = {1'h1,fractB_PA}; // @[Cat.scala 29:58]
  assign ready_PA = ~valid_PA | valid_leaving_PA; // @[DivSqrtRecF64_mulAddZ31.scala 354:28]
  assign _T_146 = cyc_S_div & ~normalCase_S_div; // @[DivSqrtRecF64_mulAddZ31.scala 359:15]
  assign _T_148 = _T_146 & ~valid_PA; // @[DivSqrtRecF64_mulAddZ31.scala 359:33]
  assign _T_151 = ~valid_PB & ~ready_PC; // @[DivSqrtRecF64_mulAddZ31.scala 360:40]
  assign leaving_PB = valid_PB & valid_leaving_PB; // @[DivSqrtRecF64_mulAddZ31.scala 388:28]
  assign _T_152 = leaving_PB | _T_151; // @[DivSqrtRecF64_mulAddZ31.scala 360:25]
  assign entering_PB_S = _T_148 & _T_152; // @[DivSqrtRecF64_mulAddZ31.scala 359:47]
  assign _T_153 = valid_PA & normalCase_PA; // @[DivSqrtRecF64_mulAddZ31.scala 362:18]
  assign entering_PB_normalCase = _T_153 & valid_normalCase_leaving_PA; // @[DivSqrtRecF64_mulAddZ31.scala 362:35]
  assign entering_PB = entering_PB_S | leaving_PA; // @[DivSqrtRecF64_mulAddZ31.scala 363:37]
  assign _T_154 = entering_PB | leaving_PB; // @[DivSqrtRecF64_mulAddZ31.scala 365:23]
  assign _T_175 = _T_148 & ~valid_PB; // @[DivSqrtRecF64_mulAddZ31.scala 394:47]
  assign entering_PC_S = _T_175 & ready_PC; // @[DivSqrtRecF64_mulAddZ31.scala 394:61]
  assign _T_176 = valid_PB & normalCase_PB; // @[DivSqrtRecF64_mulAddZ31.scala 396:18]
  assign entering_PC_normalCase = _T_176 & cyc_C3; // @[DivSqrtRecF64_mulAddZ31.scala 396:35]
  assign entering_PC = entering_PC_S | leaving_PB; // @[DivSqrtRecF64_mulAddZ31.scala 397:37]
  assign leaving_PC = valid_PC & valid_leaving_PC; // @[DivSqrtRecF64_mulAddZ31.scala 421:28]
  assign _T_177 = entering_PC | leaving_PC; // @[DivSqrtRecF64_mulAddZ31.scala 399:23]
  assign sigB_PC = {1'h1,fractB_PC}; // @[Cat.scala 29:58]
  assign _T_194 = ready_PA & ~cyc_B7_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 429:18]
  assign _T_202 = _T_194 & ~cyc_B3; // @[DivSqrtRecF64_mulAddZ31.scala 430:27]
  assign _T_204 = _T_202 & ~cyc_B2; // @[DivSqrtRecF64_mulAddZ31.scala 430:39]
  assign _T_208 = _T_204 & ~cyc_C5; // @[DivSqrtRecF64_mulAddZ31.scala 430:68]
  assign zFractB_A4_div = cyc_A4_div ? rawB_S_sig[51:0] : 52'h0; // @[DivSqrtRecF64_mulAddZ31.scala 439:29]
  assign _T_223 = rawB_S_sig[51:49] == 3'h0; // @[DivSqrtRecF64_mulAddZ31.scala 441:64]
  assign zLinPiece_0_A4_div = cyc_A4_div & _T_223; // @[DivSqrtRecF64_mulAddZ31.scala 441:41]
  assign _T_225 = rawB_S_sig[51:49] == 3'h1; // @[DivSqrtRecF64_mulAddZ31.scala 442:64]
  assign zLinPiece_1_A4_div = cyc_A4_div & _T_225; // @[DivSqrtRecF64_mulAddZ31.scala 442:41]
  assign _T_227 = rawB_S_sig[51:49] == 3'h2; // @[DivSqrtRecF64_mulAddZ31.scala 443:64]
  assign zLinPiece_2_A4_div = cyc_A4_div & _T_227; // @[DivSqrtRecF64_mulAddZ31.scala 443:41]
  assign _T_229 = rawB_S_sig[51:49] == 3'h3; // @[DivSqrtRecF64_mulAddZ31.scala 444:64]
  assign zLinPiece_3_A4_div = cyc_A4_div & _T_229; // @[DivSqrtRecF64_mulAddZ31.scala 444:41]
  assign _T_231 = rawB_S_sig[51:49] == 3'h4; // @[DivSqrtRecF64_mulAddZ31.scala 445:64]
  assign zLinPiece_4_A4_div = cyc_A4_div & _T_231; // @[DivSqrtRecF64_mulAddZ31.scala 445:41]
  assign _T_233 = rawB_S_sig[51:49] == 3'h5; // @[DivSqrtRecF64_mulAddZ31.scala 446:64]
  assign zLinPiece_5_A4_div = cyc_A4_div & _T_233; // @[DivSqrtRecF64_mulAddZ31.scala 446:41]
  assign _T_235 = rawB_S_sig[51:49] == 3'h6; // @[DivSqrtRecF64_mulAddZ31.scala 447:64]
  assign zLinPiece_6_A4_div = cyc_A4_div & _T_235; // @[DivSqrtRecF64_mulAddZ31.scala 447:41]
  assign _T_237 = rawB_S_sig[51:49] == 3'h7; // @[DivSqrtRecF64_mulAddZ31.scala 448:64]
  assign zLinPiece_7_A4_div = cyc_A4_div & _T_237; // @[DivSqrtRecF64_mulAddZ31.scala 448:41]
  assign _T_238 = zLinPiece_0_A4_div ? 9'h1c7 : 9'h0; // @[DivSqrtRecF64_mulAddZ31.scala 450:12]
  assign _T_239 = zLinPiece_1_A4_div ? 9'h16c : 9'h0; // @[DivSqrtRecF64_mulAddZ31.scala 451:12]
  assign _T_240 = _T_238 | _T_239; // @[DivSqrtRecF64_mulAddZ31.scala 450:56]
  assign _T_241 = zLinPiece_2_A4_div ? 9'h12a : 9'h0; // @[DivSqrtRecF64_mulAddZ31.scala 452:12]
  assign _T_242 = _T_240 | _T_241; // @[DivSqrtRecF64_mulAddZ31.scala 451:56]
  assign _T_243 = zLinPiece_3_A4_div ? 8'hf8 : 8'h0; // @[DivSqrtRecF64_mulAddZ31.scala 453:12]
  assign _GEN_53 = {{1'd0}, _T_243}; // @[DivSqrtRecF64_mulAddZ31.scala 452:56]
  assign _T_244 = _T_242 | _GEN_53; // @[DivSqrtRecF64_mulAddZ31.scala 452:56]
  assign _T_245 = zLinPiece_4_A4_div ? 8'hd2 : 8'h0; // @[DivSqrtRecF64_mulAddZ31.scala 454:12]
  assign _GEN_54 = {{1'd0}, _T_245}; // @[DivSqrtRecF64_mulAddZ31.scala 453:56]
  assign _T_246 = _T_244 | _GEN_54; // @[DivSqrtRecF64_mulAddZ31.scala 453:56]
  assign _T_247 = zLinPiece_5_A4_div ? 8'hb4 : 8'h0; // @[DivSqrtRecF64_mulAddZ31.scala 455:12]
  assign _GEN_55 = {{1'd0}, _T_247}; // @[DivSqrtRecF64_mulAddZ31.scala 454:56]
  assign _T_248 = _T_246 | _GEN_55; // @[DivSqrtRecF64_mulAddZ31.scala 454:56]
  assign _T_249 = zLinPiece_6_A4_div ? 8'h9c : 8'h0; // @[DivSqrtRecF64_mulAddZ31.scala 456:12]
  assign _GEN_56 = {{1'd0}, _T_249}; // @[DivSqrtRecF64_mulAddZ31.scala 455:56]
  assign _T_250 = _T_248 | _GEN_56; // @[DivSqrtRecF64_mulAddZ31.scala 455:56]
  assign _T_251 = zLinPiece_7_A4_div ? 8'h89 : 8'h0; // @[DivSqrtRecF64_mulAddZ31.scala 457:12]
  assign _GEN_57 = {{1'd0}, _T_251}; // @[DivSqrtRecF64_mulAddZ31.scala 456:56]
  assign zK1_A4_div = _T_250 | _GEN_57; // @[DivSqrtRecF64_mulAddZ31.scala 456:56]
  assign _T_253 = zLinPiece_0_A4_div ? 12'h1c : 12'h0; // @[DivSqrtRecF64_mulAddZ31.scala 459:12]
  assign _T_255 = zLinPiece_1_A4_div ? 12'h3a2 : 12'h0; // @[DivSqrtRecF64_mulAddZ31.scala 460:12]
  assign _T_256 = _T_253 | _T_255; // @[DivSqrtRecF64_mulAddZ31.scala 459:61]
  assign _T_258 = zLinPiece_2_A4_div ? 12'h675 : 12'h0; // @[DivSqrtRecF64_mulAddZ31.scala 461:12]
  assign _T_259 = _T_256 | _T_258; // @[DivSqrtRecF64_mulAddZ31.scala 460:61]
  assign _T_261 = zLinPiece_3_A4_div ? 12'h8c6 : 12'h0; // @[DivSqrtRecF64_mulAddZ31.scala 462:12]
  assign _T_262 = _T_259 | _T_261; // @[DivSqrtRecF64_mulAddZ31.scala 461:61]
  assign _T_264 = zLinPiece_4_A4_div ? 12'hab4 : 12'h0; // @[DivSqrtRecF64_mulAddZ31.scala 463:12]
  assign _T_265 = _T_262 | _T_264; // @[DivSqrtRecF64_mulAddZ31.scala 462:61]
  assign _T_267 = zLinPiece_5_A4_div ? 12'hc56 : 12'h0; // @[DivSqrtRecF64_mulAddZ31.scala 464:12]
  assign _T_268 = _T_265 | _T_267; // @[DivSqrtRecF64_mulAddZ31.scala 463:61]
  assign _T_270 = zLinPiece_6_A4_div ? 12'hdbd : 12'h0; // @[DivSqrtRecF64_mulAddZ31.scala 465:12]
  assign _T_271 = _T_268 | _T_270; // @[DivSqrtRecF64_mulAddZ31.scala 464:61]
  assign _T_273 = zLinPiece_7_A4_div ? 12'hef4 : 12'h0; // @[DivSqrtRecF64_mulAddZ31.scala 466:12]
  assign zComplFractK0_A4_div = _T_271 | _T_273; // @[DivSqrtRecF64_mulAddZ31.scala 465:61]
  assign _T_309 = cyc_A6_sqrt & ~sExp_PA[0]; // @[DivSqrtRecF64_mulAddZ31.scala 488:44]
  assign zQuadPiece_0_A6_sqrt = _T_309 & ~sigB_PA[51]; // @[DivSqrtRecF64_mulAddZ31.scala 488:60]
  assign zQuadPiece_1_A6_sqrt = _T_309 & sigB_PA[51]; // @[DivSqrtRecF64_mulAddZ31.scala 489:60]
  assign _T_317 = cyc_A6_sqrt & sExp_PA[0]; // @[DivSqrtRecF64_mulAddZ31.scala 490:44]
  assign zQuadPiece_2_A6_sqrt = _T_317 & ~sigB_PA[51]; // @[DivSqrtRecF64_mulAddZ31.scala 490:60]
  assign zQuadPiece_3_A6_sqrt = _T_317 & sigB_PA[51]; // @[DivSqrtRecF64_mulAddZ31.scala 491:60]
  assign _T_324 = zQuadPiece_0_A6_sqrt ? 13'h1a : 13'h0; // @[DivSqrtRecF64_mulAddZ31.scala 493:12]
  assign _T_326 = zQuadPiece_1_A6_sqrt ? 13'hbca : 13'h0; // @[DivSqrtRecF64_mulAddZ31.scala 494:12]
  assign _T_327 = _T_324 | _T_326; // @[DivSqrtRecF64_mulAddZ31.scala 493:64]
  assign _T_329 = zQuadPiece_2_A6_sqrt ? 13'h12d3 : 13'h0; // @[DivSqrtRecF64_mulAddZ31.scala 495:12]
  assign _T_330 = _T_327 | _T_329; // @[DivSqrtRecF64_mulAddZ31.scala 494:64]
  assign _T_332 = zQuadPiece_3_A6_sqrt ? 13'h1b17 : 13'h0; // @[DivSqrtRecF64_mulAddZ31.scala 496:12]
  assign zComplFractK0_A6_sqrt = _T_330 | _T_332; // @[DivSqrtRecF64_mulAddZ31.scala 495:64]
  assign _T_336 = cyc_S_div ? 9'h0 : nextMulAdd9A_A; // @[DivSqrtRecF64_mulAddZ31.scala 500:16]
  assign mulAdd9A_A = zFractB_A4_div[48:40] | _T_336; // @[DivSqrtRecF64_mulAddZ31.scala 499:46]
  assign _T_340 = cyc_S_div ? 9'h0 : nextMulAdd9B_A; // @[DivSqrtRecF64_mulAddZ31.scala 503:16]
  assign mulAdd9B_A = zK1_A4_div | _T_340; // @[DivSqrtRecF64_mulAddZ31.scala 502:46]
  assign _T_345 = cyc_A6_sqrt ? 6'h3f : 6'h0; // @[Bitwise.scala 71:12]
  assign _T_347 = {cyc_A6_sqrt,zComplFractK0_A6_sqrt,_T_345}; // @[Cat.scala 29:58]
  assign _T_350 = cyc_A4_div ? 8'hff : 8'h0; // @[Bitwise.scala 71:12]
  assign _T_352 = {cyc_A4_div,zComplFractK0_A4_div,_T_350}; // @[Cat.scala 29:58]
  assign _GEN_58 = {{1'd0}, _T_347}; // @[DivSqrtRecF64_mulAddZ31.scala 507:71]
  assign _T_353 = _GEN_58 | _T_352; // @[DivSqrtRecF64_mulAddZ31.scala 507:71]
  assign _T_354 = {fractR0_A, 10'h0}; // @[DivSqrtRecF64_mulAddZ31.scala 509:55]
  assign _T_355 = 19'h40000 + _T_354; // @[DivSqrtRecF64_mulAddZ31.scala 509:42]
  assign _T_356 = cyc_A5_sqrt ? _T_355 : 20'h0; // @[DivSqrtRecF64_mulAddZ31.scala 509:12]
  assign _GEN_59 = {{1'd0}, _T_356}; // @[DivSqrtRecF64_mulAddZ31.scala 508:71]
  assign _T_357 = _T_353 | _GEN_59; // @[DivSqrtRecF64_mulAddZ31.scala 508:71]
  assign _T_360 = cyc_A4_sqrt & ~hiSqrR0_A_sqrt[9]; // @[DivSqrtRecF64_mulAddZ31.scala 510:25]
  assign _T_361 = _T_360 ? 11'h400 : 11'h0; // @[DivSqrtRecF64_mulAddZ31.scala 510:12]
  assign _GEN_60 = {{10'd0}, _T_361}; // @[DivSqrtRecF64_mulAddZ31.scala 509:71]
  assign _T_362 = _T_357 | _GEN_60; // @[DivSqrtRecF64_mulAddZ31.scala 509:71]
  assign _T_364 = cyc_A4_sqrt & hiSqrR0_A_sqrt[9]; // @[DivSqrtRecF64_mulAddZ31.scala 511:26]
  assign _T_365 = _T_364 | cyc_A3; // @[DivSqrtRecF64_mulAddZ31.scala 511:48]
  assign _T_368 = sigB_PA[46:26] + 21'h400; // @[DivSqrtRecF64_mulAddZ31.scala 512:29]
  assign _T_369 = _T_365 ? _T_368 : 21'h0; // @[DivSqrtRecF64_mulAddZ31.scala 511:12]
  assign _T_370 = _T_362 | _T_369; // @[DivSqrtRecF64_mulAddZ31.scala 510:71]
  assign _T_372 = cyc_A2 ? partNegSigma0_A : 21'h0; // @[DivSqrtRecF64_mulAddZ31.scala 515:12]
  assign _T_373 = _T_370 | _T_372; // @[DivSqrtRecF64_mulAddZ31.scala 514:11]
  assign _T_376 = {{4'd0}, _T_373}; // @[DivSqrtRecF64_mulAddZ31.scala 515:62]
  assign _T_377 = {fractR0_A, 15'h0}; // @[DivSqrtRecF64_mulAddZ31.scala 517:45]
  assign _T_378 = cyc_A1 ? _T_377 : 24'h0; // @[DivSqrtRecF64_mulAddZ31.scala 517:12]
  assign _GEN_61 = {{1'd0}, _T_378}; // @[DivSqrtRecF64_mulAddZ31.scala 516:62]
  assign mulAdd9C_A = _T_376 | _GEN_61; // @[DivSqrtRecF64_mulAddZ31.scala 516:62]
  assign _T_379 = mulAdd9A_A * mulAdd9B_A; // @[DivSqrtRecF64_mulAddZ31.scala 518:37]
  assign loMulAdd9Out_A = _T_379 + mulAdd9C_A[17:0]; // @[DivSqrtRecF64_mulAddZ31.scala 518:50]
  assign _T_384 = mulAdd9C_A[24:18] + 7'h1; // @[DivSqrtRecF64_mulAddZ31.scala 521:36]
  assign _T_386 = loMulAdd9Out_A[18] ? _T_384 : mulAdd9C_A[24:18]; // @[DivSqrtRecF64_mulAddZ31.scala 520:16]
  assign mulAdd9Out_A = {_T_386,loMulAdd9Out_A[17:0]}; // @[Cat.scala 29:58]
  assign _T_389 = cyc_A6_sqrt & mulAdd9Out_A[19]; // @[DivSqrtRecF64_mulAddZ31.scala 528:25]
  assign zFractR0_A6_sqrt = _T_389 ? ~mulAdd9Out_A[24:10] : 15'h0; // @[DivSqrtRecF64_mulAddZ31.scala 528:12]
  assign _T_393 = {mulAdd9Out_A, 1'h0}; // @[DivSqrtRecF64_mulAddZ31.scala 532:53]
  assign sqrR0_A5_sqrt = sExp_PA[0] ? _T_393 : {{1'd0}, mulAdd9Out_A}; // @[DivSqrtRecF64_mulAddZ31.scala 532:28]
  assign _T_395 = cyc_A4_div & mulAdd9Out_A[20]; // @[DivSqrtRecF64_mulAddZ31.scala 534:24]
  assign zFractR0_A4_div = _T_395 ? ~mulAdd9Out_A[24:11] : 14'h0; // @[DivSqrtRecF64_mulAddZ31.scala 534:12]
  assign _T_399 = cyc_A2 & mulAdd9Out_A[11]; // @[DivSqrtRecF64_mulAddZ31.scala 536:20]
  assign zSigma0_A2 = _T_399 ? ~mulAdd9Out_A[24:2] : 23'h0; // @[DivSqrtRecF64_mulAddZ31.scala 536:12]
  assign r1_A1 = 16'h8000 | mulAdd9Out_A[24:9]; // @[DivSqrtRecF64_mulAddZ31.scala 537:29]
  assign _T_407 = cyc_A6_sqrt | cyc_A4_div; // @[DivSqrtRecF64_mulAddZ31.scala 540:23]
  assign _GEN_62 = {{1'd0}, zFractR0_A4_div}; // @[DivSqrtRecF64_mulAddZ31.scala 541:39]
  assign _T_408 = zFractR0_A6_sqrt | _GEN_62; // @[DivSqrtRecF64_mulAddZ31.scala 541:39]
  assign _GEN_37 = _T_407 ? _T_408 : {{6'd0}, fractR0_A}; // @[DivSqrtRecF64_mulAddZ31.scala 540:38]
  assign _GEN_38 = cyc_A5_sqrt ? sqrR0_A5_sqrt[25:10] : {{6'd0}, hiSqrR0_A_sqrt}; // @[DivSqrtRecF64_mulAddZ31.scala 543:24]
  assign _T_410 = cyc_A4_sqrt | cyc_A3; // @[DivSqrtRecF64_mulAddZ31.scala 546:23]
  assign _T_412 = cyc_A4_sqrt ? mulAdd9Out_A : {{9'd0}, mulAdd9Out_A[24:9]}; // @[DivSqrtRecF64_mulAddZ31.scala 547:31]
  assign _GEN_39 = _T_410 ? _T_412 : {{4'd0}, partNegSigma0_A}; // @[DivSqrtRecF64_mulAddZ31.scala 546:34]
  assign _T_414 = cyc_A6_sqrt | cyc_A5_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 550:36]
  assign _T_415 = _T_414 | cyc_A4; // @[DivSqrtRecF64_mulAddZ31.scala 550:51]
  assign _T_416 = _T_415 | cyc_A3; // @[DivSqrtRecF64_mulAddZ31.scala 550:61]
  assign _T_417 = _T_416 | cyc_A2; // @[DivSqrtRecF64_mulAddZ31.scala 550:71]
  assign _T_423 = cyc_A4_sqrt ? sigB_PA[43:35] : 9'h0; // @[DivSqrtRecF64_mulAddZ31.scala 555:16]
  assign _GEN_63 = {{6'd0}, _T_423}; // @[DivSqrtRecF64_mulAddZ31.scala 554:68]
  assign _T_424 = zFractR0_A6_sqrt | _GEN_63; // @[DivSqrtRecF64_mulAddZ31.scala 554:68]
  assign _GEN_64 = {{6'd0}, zFractB_A4_div[43:35]}; // @[DivSqrtRecF64_mulAddZ31.scala 555:68]
  assign _T_426 = _T_424 | _GEN_64; // @[DivSqrtRecF64_mulAddZ31.scala 555:68]
  assign _T_427 = cyc_A5_sqrt | cyc_A3; // @[DivSqrtRecF64_mulAddZ31.scala 557:29]
  assign _T_429 = _T_427 ? sigB_PA[52:44] : 9'h0; // @[DivSqrtRecF64_mulAddZ31.scala 557:16]
  assign _GEN_65 = {{6'd0}, _T_429}; // @[DivSqrtRecF64_mulAddZ31.scala 556:68]
  assign _T_430 = _T_426 | _GEN_65; // @[DivSqrtRecF64_mulAddZ31.scala 556:68]
  assign _GEN_66 = {{8'd0}, _T_430}; // @[DivSqrtRecF64_mulAddZ31.scala 557:68]
  assign _T_431 = _GEN_66 | zSigma0_A2; // @[DivSqrtRecF64_mulAddZ31.scala 557:68]
  assign _GEN_40 = _T_417 ? _T_431 : {{14'd0}, nextMulAdd9A_A}; // @[DivSqrtRecF64_mulAddZ31.scala 551:7]
  assign _T_435 = _T_415 | cyc_A2; // @[DivSqrtRecF64_mulAddZ31.scala 560:63]
  assign _T_439 = cyc_A5_sqrt ? sqrR0_A5_sqrt[9:1] : 9'h0; // @[DivSqrtRecF64_mulAddZ31.scala 564:16]
  assign _GEN_67 = {{6'd0}, _T_439}; // @[DivSqrtRecF64_mulAddZ31.scala 563:73]
  assign _T_440 = zFractR0_A6_sqrt | _GEN_67; // @[DivSqrtRecF64_mulAddZ31.scala 563:73]
  assign _T_441 = _T_440 | _GEN_62; // @[DivSqrtRecF64_mulAddZ31.scala 564:73]
  assign _T_443 = cyc_A4_sqrt ? hiSqrR0_A_sqrt[8:0] : 9'h0; // @[DivSqrtRecF64_mulAddZ31.scala 566:16]
  assign _GEN_69 = {{6'd0}, _T_443}; // @[DivSqrtRecF64_mulAddZ31.scala 565:73]
  assign _T_444 = _T_441 | _GEN_69; // @[DivSqrtRecF64_mulAddZ31.scala 565:73]
  assign _T_446 = {1'h1,fractR0_A[8:1]}; // @[Cat.scala 29:58]
  assign _T_447 = cyc_A2 ? _T_446 : 9'h0; // @[DivSqrtRecF64_mulAddZ31.scala 567:16]
  assign _GEN_70 = {{6'd0}, _T_447}; // @[DivSqrtRecF64_mulAddZ31.scala 566:73]
  assign _T_448 = _T_444 | _GEN_70; // @[DivSqrtRecF64_mulAddZ31.scala 566:73]
  assign _GEN_41 = _T_435 ? _T_448 : {{6'd0}, nextMulAdd9B_A}; // @[DivSqrtRecF64_mulAddZ31.scala 560:74]
  assign _T_449 = cyc_A1 | cyc_B7_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 576:16]
  assign _T_450 = _T_449 | cyc_B6_div; // @[DivSqrtRecF64_mulAddZ31.scala 576:31]
  assign _T_451 = _T_450 | cyc_B4; // @[DivSqrtRecF64_mulAddZ31.scala 576:45]
  assign _T_452 = _T_451 | cyc_B3; // @[DivSqrtRecF64_mulAddZ31.scala 576:55]
  assign _T_453 = _T_452 | cyc_C6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 576:65]
  assign _T_454 = _T_453 | cyc_C4; // @[DivSqrtRecF64_mulAddZ31.scala 577:25]
  assign _T_458 = cyc_B7_sqrt | cyc_A1; // @[DivSqrtRecF64_mulAddZ31.scala 580:25]
  assign _T_459 = _T_458 ? sigB_PA : 53'h0; // @[DivSqrtRecF64_mulAddZ31.scala 580:12]
  assign _T_461 = cyc_B6_div ? sigA_PA : 53'h0; // @[DivSqrtRecF64_mulAddZ31.scala 581:12]
  assign _T_462 = _T_459 | _T_461; // @[DivSqrtRecF64_mulAddZ31.scala 580:67]
  assign zSigma1_B4 = cyc_B4 ? ~io_mulAddResult_3[90:45] : 46'h0; // @[DivSqrtRecF64_mulAddZ31.scala 632:22]
  assign _GEN_71 = {{19'd0}, zSigma1_B4[45:12]}; // @[DivSqrtRecF64_mulAddZ31.scala 581:67]
  assign _T_464 = _T_462 | _GEN_71; // @[DivSqrtRecF64_mulAddZ31.scala 581:67]
  assign _T_465 = cyc_B3 | cyc_C6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 584:20]
  assign sigXNU_B3_CX = io_mulAddResult_3[104:47]; // @[DivSqrtRecF64_mulAddZ31.scala 634:38]
  assign _T_467 = _T_465 ? sigXNU_B3_CX[57:12] : 46'h0; // @[DivSqrtRecF64_mulAddZ31.scala 584:12]
  assign _GEN_72 = {{7'd0}, _T_467}; // @[DivSqrtRecF64_mulAddZ31.scala 582:67]
  assign _T_468 = _T_464 | _GEN_72; // @[DivSqrtRecF64_mulAddZ31.scala 582:67]
  assign _T_470 = {sigXN_C[57:25], 13'h0}; // @[DivSqrtRecF64_mulAddZ31.scala 585:51]
  assign _T_471 = cyc_C4 ? _T_470 : 46'h0; // @[DivSqrtRecF64_mulAddZ31.scala 585:12]
  assign _GEN_73 = {{7'd0}, _T_471}; // @[DivSqrtRecF64_mulAddZ31.scala 584:67]
  assign _T_472 = _T_468 | _GEN_73; // @[DivSqrtRecF64_mulAddZ31.scala 584:67]
  assign _T_476 = cyc_C1 ? sigB_PC : 53'h0; // @[DivSqrtRecF64_mulAddZ31.scala 587:12]
  assign _T_477 = _T_472 | _T_476; // @[DivSqrtRecF64_mulAddZ31.scala 586:67]
  assign _T_481 = _T_449 | cyc_B4; // @[DivSqrtRecF64_mulAddZ31.scala 590:46]
  assign _T_482 = _T_481 | cyc_C6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 590:56]
  assign _T_483 = _T_482 | cyc_C4; // @[DivSqrtRecF64_mulAddZ31.scala 591:25]
  assign _T_485 = {r1_A1, 36'h0}; // @[DivSqrtRecF64_mulAddZ31.scala 593:31]
  assign _T_486 = cyc_A1 ? _T_485 : 52'h0; // @[DivSqrtRecF64_mulAddZ31.scala 593:12]
  assign _T_487 = {ESqrR1_B_sqrt, 19'h0}; // @[DivSqrtRecF64_mulAddZ31.scala 594:39]
  assign _T_488 = cyc_B7_sqrt ? _T_487 : 51'h0; // @[DivSqrtRecF64_mulAddZ31.scala 594:12]
  assign _GEN_74 = {{1'd0}, _T_488}; // @[DivSqrtRecF64_mulAddZ31.scala 593:55]
  assign _T_489 = _T_486 | _GEN_74; // @[DivSqrtRecF64_mulAddZ31.scala 593:55]
  assign _T_492 = {{1'd0}, _T_489}; // @[DivSqrtRecF64_mulAddZ31.scala 594:55]
  assign _GEN_75 = {{7'd0}, zSigma1_B4}; // @[DivSqrtRecF64_mulAddZ31.scala 595:55]
  assign _T_493 = _T_492 | _GEN_75; // @[DivSqrtRecF64_mulAddZ31.scala 595:55]
  assign _T_495 = cyc_C6_sqrt ? sqrSigma1_C[30:1] : 30'h0; // @[DivSqrtRecF64_mulAddZ31.scala 597:12]
  assign _GEN_76 = {{23'd0}, _T_495}; // @[DivSqrtRecF64_mulAddZ31.scala 596:55]
  assign _T_496 = _T_493 | _GEN_76; // @[DivSqrtRecF64_mulAddZ31.scala 596:55]
  assign _T_497 = cyc_C4 ? sqrSigma1_C : 33'h0; // @[DivSqrtRecF64_mulAddZ31.scala 598:12]
  assign _GEN_77 = {{20'd0}, _T_497}; // @[DivSqrtRecF64_mulAddZ31.scala 597:55]
  assign _T_498 = _T_496 | _GEN_77; // @[DivSqrtRecF64_mulAddZ31.scala 597:55]
  assign E_C1_div = ~io_mulAddResult_3[104]; // @[DivSqrtRecF64_mulAddZ31.scala 635:20]
  assign _T_571 = cyc_C1 & ~E_C1_div; // @[DivSqrtRecF64_mulAddZ31.scala 637:25]
  assign _T_575 = _T_571 ? ~io_mulAddResult_3[104:51] : 54'h0; // @[DivSqrtRecF64_mulAddZ31.scala 637:12]
  assign _T_576 = cyc_C1 & E_C1_div; // @[DivSqrtRecF64_mulAddZ31.scala 641:24]
  assign _T_579 = _T_576 ? ~io_mulAddResult_3[102:50] : 53'h0; // @[DivSqrtRecF64_mulAddZ31.scala 641:12]
  assign _GEN_78 = {{1'd0}, _T_579}; // @[DivSqrtRecF64_mulAddZ31.scala 640:11]
  assign zComplSigT_C1 = _T_575 | _GEN_78; // @[DivSqrtRecF64_mulAddZ31.scala 640:11]
  assign _GEN_79 = {{1'd0}, _T_498}; // @[DivSqrtRecF64_mulAddZ31.scala 598:55]
  assign _T_500 = cyc_A4 | cyc_A3; // @[DivSqrtRecF64_mulAddZ31.scala 602:20]
  assign _T_501 = _T_500 | cyc_A1; // @[DivSqrtRecF64_mulAddZ31.scala 602:34]
  assign _T_502 = _T_501 | cyc_B10_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 602:48]
  assign _T_503 = _T_502 | cyc_B9_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 603:30]
  assign _T_504 = _T_503 | cyc_B7_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 603:45]
  assign _T_505 = _T_504 | cyc_B6; // @[DivSqrtRecF64_mulAddZ31.scala 603:60]
  assign _T_508 = _T_505 | cyc_B2; // @[DivSqrtRecF64_mulAddZ31.scala 604:44]
  assign _T_510 = _T_508 | cyc_C4; // @[DivSqrtRecF64_mulAddZ31.scala 604:73]
  assign _T_511 = cyc_A3 | cyc_A2; // @[DivSqrtRecF64_mulAddZ31.scala 606:20]
  assign _T_512 = _T_511 | cyc_B9_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 606:34]
  assign _T_513 = _T_512 | cyc_B8_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 607:29]
  assign _T_514 = _T_513 | cyc_B6; // @[DivSqrtRecF64_mulAddZ31.scala 607:44]
  assign _T_515 = _T_514 | cyc_B5; // @[DivSqrtRecF64_mulAddZ31.scala 607:54]
  assign _T_518 = _T_515 | cyc_B1; // @[DivSqrtRecF64_mulAddZ31.scala 608:44]
  assign _T_519 = _T_518 | cyc_C6_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 608:58]
  assign _T_520 = _T_519 | cyc_C3; // @[DivSqrtRecF64_mulAddZ31.scala 608:73]
  assign _T_521 = cyc_A2 | cyc_A1; // @[DivSqrtRecF64_mulAddZ31.scala 610:20]
  assign _T_522 = _T_521 | cyc_B8_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 610:34]
  assign _T_523 = _T_522 | cyc_B7_sqrt; // @[DivSqrtRecF64_mulAddZ31.scala 611:29]
  assign _T_524 = _T_523 | cyc_B5; // @[DivSqrtRecF64_mulAddZ31.scala 611:44]
  assign _T_525 = _T_524 | cyc_B4; // @[DivSqrtRecF64_mulAddZ31.scala 611:54]
  assign _T_528 = _T_525 | cyc_C5; // @[DivSqrtRecF64_mulAddZ31.scala 612:44]
  assign _T_529 = _T_528 | cyc_C2; // @[DivSqrtRecF64_mulAddZ31.scala 612:54]
  assign _T_530 = io_latchMulAddA_0 | cyc_B6; // @[DivSqrtRecF64_mulAddZ31.scala 614:31]
  assign _T_532 = {_T_529,_T_530}; // @[Cat.scala 29:58]
  assign _T_533 = {_T_510,_T_520}; // @[Cat.scala 29:58]
  assign _T_535 = {sigX1_B, 47'h0}; // @[DivSqrtRecF64_mulAddZ31.scala 618:45]
  assign _T_536 = cyc_B1 ? _T_535 : 105'h0; // @[DivSqrtRecF64_mulAddZ31.scala 618:12]
  assign _T_537 = {sigX1_B, 46'h0}; // @[DivSqrtRecF64_mulAddZ31.scala 619:45]
  assign _T_538 = cyc_C6_sqrt ? _T_537 : 104'h0; // @[DivSqrtRecF64_mulAddZ31.scala 619:12]
  assign _GEN_80 = {{1'd0}, _T_538}; // @[DivSqrtRecF64_mulAddZ31.scala 618:66]
  assign _T_539 = _T_536 | _GEN_80; // @[DivSqrtRecF64_mulAddZ31.scala 618:66]
  assign _T_541 = {sigXN_C, 47'h0}; // @[DivSqrtRecF64_mulAddZ31.scala 620:45]
  assign _T_542 = cyc_C2 ? _T_541 : 105'h0; // @[DivSqrtRecF64_mulAddZ31.scala 620:12]
  assign _T_543 = _T_539 | _T_542; // @[DivSqrtRecF64_mulAddZ31.scala 619:66]
  assign _T_545 = cyc_E3 & ~E_E_div; // @[DivSqrtRecF64_mulAddZ31.scala 621:24]
  assign _T_546 = {bit0FractA_PC, 53'h0}; // @[DivSqrtRecF64_mulAddZ31.scala 621:51]
  assign _T_547 = _T_545 ? _T_546 : 54'h0; // @[DivSqrtRecF64_mulAddZ31.scala 621:12]
  assign _GEN_81 = {{51'd0}, _T_547}; // @[DivSqrtRecF64_mulAddZ31.scala 620:66]
  assign ESqrR1_B8_sqrt = io_mulAddResult_3[103:72]; // @[DivSqrtRecF64_mulAddZ31.scala 631:43]
  assign sqrSigma1_B1 = io_mulAddResult_3[79:47]; // @[DivSqrtRecF64_mulAddZ31.scala 633:41]
  assign sigT_C1 = ~zComplSigT_C1; // @[DivSqrtRecF64_mulAddZ31.scala 647:19]
  assign remT_E2 = io_mulAddResult_3[55:0]; // @[DivSqrtRecF64_mulAddZ31.scala 648:36]
  assign _T_584 = cyc_C6_sqrt | cyc_C5; // @[DivSqrtRecF64_mulAddZ31.scala 660:23]
  assign _T_591 = remT_E2[53:0] == 54'h0; // @[DivSqrtRecF64_mulAddZ31.scala 674:29]
  assign sExpP1_PC = $signed(sExp_PC) + 13'sh1; // @[DivSqrtRecF64_mulAddZ31.scala 693:29]
  assign sigTP1_E = sigT_E + 54'h1; // @[DivSqrtRecF64_mulAddZ31.scala 694:27]
  assign _T_610 = E_E_div ? $signed(sExp_PC) : $signed(13'sh0); // @[DivSqrtRecF64_mulAddZ31.scala 708:12]
  assign _T_614 = E_E_div ? $signed(13'sh0) : $signed(sExpP1_PC); // @[DivSqrtRecF64_mulAddZ31.scala 709:12]
  assign _T_622 = isNegRemT_E ? {{1'd0}, sigT_E} : sigTP1_E; // @[DivSqrtRecF64_mulAddZ31.scala 711:29]
  assign io_inReady_div = _T_208 & ~cyc_C4; // @[DivSqrtRecF64_mulAddZ31.scala 427:20]
  assign io_usingMulAdd = {_T_533,_T_532}; // @[DivSqrtRecF64_mulAddZ31.scala 601:20]
  assign io_latchMulAddA_0 = _T_454 | cyc_C1; // @[DivSqrtRecF64_mulAddZ31.scala 575:23]
  assign io_mulAddA_0 = {{1'd0}, _T_477}; // @[DivSqrtRecF64_mulAddZ31.scala 578:18]
  assign io_latchMulAddB_0 = _T_483 | cyc_C1; // @[DivSqrtRecF64_mulAddZ31.scala 589:23]
  assign io_mulAddB_0 = _GEN_79 | zComplSigT_C1; // @[DivSqrtRecF64_mulAddZ31.scala 592:18]
  assign io_mulAddC_2 = _T_543 | _GEN_81; // @[DivSqrtRecF64_mulAddZ31.scala 617:18]
  assign io_rawOutValid_div = valid_PC & valid_leaving_PC; // @[DivSqrtRecF64_mulAddZ31.scala 698:25]
  assign io_roundingModeOut = roundingMode_PC; // @[DivSqrtRecF64_mulAddZ31.scala 700:25]
  assign io_invalidExc = majorExc_PC & isNaN_PC; // @[DivSqrtRecF64_mulAddZ31.scala 701:25]
  assign io_infiniteExc = majorExc_PC & ~isNaN_PC; // @[DivSqrtRecF64_mulAddZ31.scala 702:25]
  assign io_rawOut_isNaN = isNaN_PC; // @[DivSqrtRecF64_mulAddZ31.scala 703:22]
  assign io_rawOut_isInf = isInf_PC; // @[DivSqrtRecF64_mulAddZ31.scala 704:22]
  assign io_rawOut_isZero = isZero_PC; // @[DivSqrtRecF64_mulAddZ31.scala 705:22]
  assign io_rawOut_sign = sign_PC; // @[DivSqrtRecF64_mulAddZ31.scala 706:20]
  assign io_rawOut_sExp = $signed(_T_610) | $signed(_T_614); // @[DivSqrtRecF64_mulAddZ31.scala 707:20]
  assign io_rawOut_sig = {_T_622,~isZeroRemT_E}; // @[DivSqrtRecF64_mulAddZ31.scala 711:19]
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
  cycleNum_A = _RAND_0[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  cycleNum_B = _RAND_1[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  cycleNum_C = _RAND_2[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  cycleNum_E = _RAND_3[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  valid_PA = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  majorExc_PA = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  isNaN_PA = _RAND_6[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  isInf_PA = _RAND_7[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  isZero_PA = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  sign_PA = _RAND_9[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  sExp_PA = _RAND_10[12:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {2{`RANDOM}};
  fractB_PA = _RAND_11[51:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {2{`RANDOM}};
  fractA_PA = _RAND_12[51:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  roundingMode_PA = _RAND_13[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  valid_PB = _RAND_14[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  majorExc_PB = _RAND_15[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  isNaN_PB = _RAND_16[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  isInf_PB = _RAND_17[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  isZero_PB = _RAND_18[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  sign_PB = _RAND_19[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  sExp_PB = _RAND_20[12:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  bit0FractA_PB = _RAND_21[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {2{`RANDOM}};
  fractB_PB = _RAND_22[51:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  roundingMode_PB = _RAND_23[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  valid_PC = _RAND_24[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  majorExc_PC = _RAND_25[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  isNaN_PC = _RAND_26[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  isInf_PC = _RAND_27[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  isZero_PC = _RAND_28[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  sign_PC = _RAND_29[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  sExp_PC = _RAND_30[12:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  bit0FractA_PC = _RAND_31[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_32 = {2{`RANDOM}};
  fractB_PC = _RAND_32[51:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_33 = {1{`RANDOM}};
  roundingMode_PC = _RAND_33[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_34 = {1{`RANDOM}};
  fractR0_A = _RAND_34[8:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_35 = {1{`RANDOM}};
  hiSqrR0_A_sqrt = _RAND_35[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_36 = {1{`RANDOM}};
  partNegSigma0_A = _RAND_36[20:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_37 = {1{`RANDOM}};
  nextMulAdd9A_A = _RAND_37[8:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_38 = {1{`RANDOM}};
  nextMulAdd9B_A = _RAND_38[8:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_39 = {1{`RANDOM}};
  ESqrR1_B_sqrt = _RAND_39[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_40 = {2{`RANDOM}};
  sigX1_B = _RAND_40[57:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_41 = {2{`RANDOM}};
  sqrSigma1_C = _RAND_41[32:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_42 = {2{`RANDOM}};
  sigXN_C = _RAND_42[57:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_43 = {1{`RANDOM}};
  E_E_div = _RAND_43[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_44 = {2{`RANDOM}};
  sigT_E = _RAND_44[53:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_45 = {1{`RANDOM}};
  isNegRemT_E = _RAND_45[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_46 = {1{`RANDOM}};
  isZeroRemT_E = _RAND_46[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      cycleNum_A <= 3'h0;
    end else if (_T_81) begin
      cycleNum_A <= _T_89;
    end
    if (reset) begin
      cycleNum_B <= 4'h0;
    end else if (_T_94) begin
      if (cyc_A1) begin
        cycleNum_B <= 4'h6;
      end else begin
        cycleNum_B <= _T_97;
      end
    end
    if (reset) begin
      cycleNum_C <= 3'h0;
    end else if (_T_112) begin
      if (cyc_B1) begin
        cycleNum_C <= 3'h5;
      end else begin
        cycleNum_C <= _T_115;
      end
    end
    if (reset) begin
      cycleNum_E <= 3'h0;
    end else if (_T_123) begin
      if (cyc_C1) begin
        cycleNum_E <= 3'h4;
      end else begin
        cycleNum_E <= _T_125;
      end
    end
    if (reset) begin
      valid_PA <= 1'h0;
    end else if (_T_134) begin
      valid_PA <= entering_PA;
    end
    if (entering_PA) begin
      majorExc_PA <= majorExc_S;
    end
    if (entering_PA) begin
      isNaN_PA <= isNaN_S;
    end
    if (entering_PA) begin
      isInf_PA <= isInf_S;
    end
    if (entering_PA) begin
      isZero_PA <= isZero_S;
    end
    if (entering_PA) begin
      sign_PA <= sign_S;
    end
    if (cyc_A4_div) begin
      sExp_PA <= sSatExpQuot_S_div;
    end
    if (cyc_A4_div) begin
      fractB_PA <= rawB_S_sig[51:0];
    end
    if (cyc_A4_div) begin
      fractA_PA <= rawA_S_sig[51:0];
    end
    if (cyc_A4_div) begin
      roundingMode_PA <= io_roundingMode;
    end
    if (reset) begin
      valid_PB <= 1'h0;
    end else if (_T_154) begin
      valid_PB <= entering_PB;
    end
    if (entering_PB) begin
      if (valid_PA) begin
        majorExc_PB <= majorExc_PA;
      end else begin
        majorExc_PB <= majorExc_S;
      end
    end
    if (entering_PB) begin
      if (valid_PA) begin
        isNaN_PB <= isNaN_PA;
      end else begin
        isNaN_PB <= isNaN_S;
      end
    end
    if (entering_PB) begin
      if (valid_PA) begin
        isInf_PB <= isInf_PA;
      end else begin
        isInf_PB <= isInf_S;
      end
    end
    if (entering_PB) begin
      if (valid_PA) begin
        isZero_PB <= isZero_PA;
      end else begin
        isZero_PB <= isZero_S;
      end
    end
    if (entering_PB) begin
      if (valid_PA) begin
        sign_PB <= sign_PA;
      end else begin
        sign_PB <= sign_S;
      end
    end
    if (entering_PB_normalCase) begin
      sExp_PB <= sExp_PA;
    end
    if (entering_PB_normalCase) begin
      bit0FractA_PB <= fractA_PA[0];
    end
    if (entering_PB_normalCase) begin
      fractB_PB <= fractB_PA;
    end
    if (entering_PB_normalCase) begin
      if (valid_PA) begin
        roundingMode_PB <= roundingMode_PA;
      end else begin
        roundingMode_PB <= io_roundingMode;
      end
    end
    if (reset) begin
      valid_PC <= 1'h0;
    end else if (_T_177) begin
      valid_PC <= entering_PC;
    end
    if (entering_PC) begin
      if (valid_PB) begin
        majorExc_PC <= majorExc_PB;
      end else begin
        majorExc_PC <= majorExc_S;
      end
    end
    if (entering_PC) begin
      if (valid_PB) begin
        isNaN_PC <= isNaN_PB;
      end else begin
        isNaN_PC <= isNaN_S;
      end
    end
    if (entering_PC) begin
      if (valid_PB) begin
        isInf_PC <= isInf_PB;
      end else begin
        isInf_PC <= isInf_S;
      end
    end
    if (entering_PC) begin
      if (valid_PB) begin
        isZero_PC <= isZero_PB;
      end else begin
        isZero_PC <= isZero_S;
      end
    end
    if (entering_PC) begin
      if (valid_PB) begin
        sign_PC <= sign_PB;
      end else begin
        sign_PC <= sign_S;
      end
    end
    if (entering_PC_normalCase) begin
      sExp_PC <= sExp_PB;
    end
    if (entering_PC_normalCase) begin
      bit0FractA_PC <= bit0FractA_PB;
    end
    if (entering_PC_normalCase) begin
      fractB_PC <= fractB_PB;
    end
    if (entering_PC_normalCase) begin
      if (valid_PB) begin
        roundingMode_PC <= roundingMode_PB;
      end else begin
        roundingMode_PC <= io_roundingMode;
      end
    end
    fractR0_A <= _GEN_37[8:0];
    hiSqrR0_A_sqrt <= _GEN_38[9:0];
    partNegSigma0_A <= _GEN_39[20:0];
    nextMulAdd9A_A <= _GEN_40[8:0];
    nextMulAdd9B_A <= _GEN_41[8:0];
    if (cyc_B8_sqrt) begin
      ESqrR1_B_sqrt <= ESqrR1_B8_sqrt;
    end
    if (cyc_B3) begin
      sigX1_B <= sigXNU_B3_CX;
    end
    if (cyc_B1) begin
      sqrSigma1_C <= sqrSigma1_B1;
    end
    if (_T_584) begin
      sigXN_C <= sigXNU_B3_CX;
    end
    if (cyc_C1) begin
      E_E_div <= E_C1_div;
    end
    if (cyc_C1) begin
      sigT_E <= sigT_C1;
    end
    if (cyc_E2) begin
      isNegRemT_E <= remT_E2[53];
    end
    if (cyc_E2) begin
      isZeroRemT_E <= _T_591;
    end
  end
endmodule
module RoundAnyRawFNToRecFN(
  input         io_invalidExc,
  input         io_infiniteExc,
  input         io_in_isNaN,
  input         io_in_isInf,
  input         io_in_isZero,
  input         io_in_sign,
  input  [12:0] io_in_sExp,
  input  [55:0] io_in_sig,
  input  [2:0]  io_roundingMode,
  input         io_detectTininess,
  output [64:0] io_out,
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
  wire  _T_5; // @[primitives.scala 57:25]
  wire  _T_7; // @[primitives.scala 57:25]
  wire  _T_9; // @[primitives.scala 57:25]
  wire  _T_11; // @[primitives.scala 57:25]
  wire  _T_13; // @[primitives.scala 57:25]
  wire  _T_15; // @[primitives.scala 57:25]
  wire [5:0] _T_16; // @[primitives.scala 58:26]
  wire [64:0] _T_17; // @[primitives.scala 77:58]
  wire [31:0] _T_23; // @[Bitwise.scala 102:31]
  wire [31:0] _T_25; // @[Bitwise.scala 102:65]
  wire [31:0] _T_27; // @[Bitwise.scala 102:75]
  wire [31:0] _T_28; // @[Bitwise.scala 102:39]
  wire [31:0] _GEN_0; // @[Bitwise.scala 102:31]
  wire [31:0] _T_33; // @[Bitwise.scala 102:31]
  wire [31:0] _T_35; // @[Bitwise.scala 102:65]
  wire [31:0] _T_37; // @[Bitwise.scala 102:75]
  wire [31:0] _T_38; // @[Bitwise.scala 102:39]
  wire [31:0] _GEN_1; // @[Bitwise.scala 102:31]
  wire [31:0] _T_43; // @[Bitwise.scala 102:31]
  wire [31:0] _T_45; // @[Bitwise.scala 102:65]
  wire [31:0] _T_47; // @[Bitwise.scala 102:75]
  wire [31:0] _T_48; // @[Bitwise.scala 102:39]
  wire [31:0] _GEN_2; // @[Bitwise.scala 102:31]
  wire [31:0] _T_53; // @[Bitwise.scala 102:31]
  wire [31:0] _T_55; // @[Bitwise.scala 102:65]
  wire [31:0] _T_57; // @[Bitwise.scala 102:75]
  wire [31:0] _T_58; // @[Bitwise.scala 102:39]
  wire [31:0] _GEN_3; // @[Bitwise.scala 102:31]
  wire [31:0] _T_63; // @[Bitwise.scala 102:31]
  wire [31:0] _T_65; // @[Bitwise.scala 102:65]
  wire [31:0] _T_67; // @[Bitwise.scala 102:75]
  wire [31:0] _T_68; // @[Bitwise.scala 102:39]
  wire [15:0] _T_74; // @[Bitwise.scala 102:31]
  wire [15:0] _T_76; // @[Bitwise.scala 102:65]
  wire [15:0] _T_78; // @[Bitwise.scala 102:75]
  wire [15:0] _T_79; // @[Bitwise.scala 102:39]
  wire [15:0] _GEN_4; // @[Bitwise.scala 102:31]
  wire [15:0] _T_84; // @[Bitwise.scala 102:31]
  wire [15:0] _T_86; // @[Bitwise.scala 102:65]
  wire [15:0] _T_88; // @[Bitwise.scala 102:75]
  wire [15:0] _T_89; // @[Bitwise.scala 102:39]
  wire [15:0] _GEN_5; // @[Bitwise.scala 102:31]
  wire [15:0] _T_94; // @[Bitwise.scala 102:31]
  wire [15:0] _T_96; // @[Bitwise.scala 102:65]
  wire [15:0] _T_98; // @[Bitwise.scala 102:75]
  wire [15:0] _T_99; // @[Bitwise.scala 102:39]
  wire [15:0] _GEN_6; // @[Bitwise.scala 102:31]
  wire [15:0] _T_104; // @[Bitwise.scala 102:31]
  wire [15:0] _T_106; // @[Bitwise.scala 102:65]
  wire [15:0] _T_108; // @[Bitwise.scala 102:75]
  wire [15:0] _T_109; // @[Bitwise.scala 102:39]
  wire [50:0] _T_118; // @[Cat.scala 29:58]
  wire [50:0] _T_120; // @[primitives.scala 74:21]
  wire [50:0] _T_123; // @[primitives.scala 74:21]
  wire [50:0] _T_126; // @[primitives.scala 74:21]
  wire [50:0] _T_129; // @[primitives.scala 74:21]
  wire [53:0] _T_131; // @[Cat.scala 29:58]
  wire [2:0] _T_147; // @[Cat.scala 29:58]
  wire [2:0] _T_148; // @[primitives.scala 61:24]
  wire [2:0] _T_149; // @[primitives.scala 61:24]
  wire [2:0] _T_150; // @[primitives.scala 61:24]
  wire [2:0] _T_151; // @[primitives.scala 61:24]
  wire [53:0] _T_152; // @[primitives.scala 66:24]
  wire [53:0] _T_153; // @[primitives.scala 61:24]
  wire [55:0] _T_155; // @[Cat.scala 29:58]
  wire [55:0] _T_157; // @[Cat.scala 29:58]
  wire [55:0] _T_159; // @[RoundAnyRawFNToRecFN.scala 161:46]
  wire [55:0] _T_160; // @[RoundAnyRawFNToRecFN.scala 162:40]
  wire  _T_161; // @[RoundAnyRawFNToRecFN.scala 162:56]
  wire [55:0] _T_162; // @[RoundAnyRawFNToRecFN.scala 163:42]
  wire  _T_163; // @[RoundAnyRawFNToRecFN.scala 163:62]
  wire  _T_164; // @[RoundAnyRawFNToRecFN.scala 164:36]
  wire  _T_165; // @[RoundAnyRawFNToRecFN.scala 167:38]
  wire  _T_166; // @[RoundAnyRawFNToRecFN.scala 167:67]
  wire  _T_167; // @[RoundAnyRawFNToRecFN.scala 169:29]
  wire  _T_168; // @[RoundAnyRawFNToRecFN.scala 168:31]
  wire [55:0] _T_169; // @[RoundAnyRawFNToRecFN.scala 172:32]
  wire [54:0] _T_171; // @[RoundAnyRawFNToRecFN.scala 172:49]
  wire  _T_172; // @[RoundAnyRawFNToRecFN.scala 173:49]
  wire  _T_174; // @[RoundAnyRawFNToRecFN.scala 173:64]
  wire [54:0] _T_176; // @[RoundAnyRawFNToRecFN.scala 173:25]
  wire [54:0] _T_178; // @[RoundAnyRawFNToRecFN.scala 172:61]
  wire [55:0] _T_180; // @[RoundAnyRawFNToRecFN.scala 178:30]
  wire  _T_182; // @[RoundAnyRawFNToRecFN.scala 179:42]
  wire [54:0] _T_184; // @[RoundAnyRawFNToRecFN.scala 179:24]
  wire [54:0] _GEN_7; // @[RoundAnyRawFNToRecFN.scala 178:47]
  wire [54:0] _T_185; // @[RoundAnyRawFNToRecFN.scala 178:47]
  wire [54:0] _T_186; // @[RoundAnyRawFNToRecFN.scala 171:16]
  wire [2:0] _T_188; // @[RoundAnyRawFNToRecFN.scala 183:69]
  wire [12:0] _GEN_8; // @[RoundAnyRawFNToRecFN.scala 183:40]
  wire [13:0] _T_189; // @[RoundAnyRawFNToRecFN.scala 183:40]
  wire [11:0] common_expOut; // @[RoundAnyRawFNToRecFN.scala 185:37]
  wire [51:0] common_fractOut; // @[RoundAnyRawFNToRecFN.scala 189:27]
  wire [3:0] _T_194; // @[RoundAnyRawFNToRecFN.scala 194:30]
  wire  common_overflow; // @[RoundAnyRawFNToRecFN.scala 194:50]
  wire  common_totalUnderflow; // @[RoundAnyRawFNToRecFN.scala 198:31]
  wire  _T_203; // @[RoundAnyRawFNToRecFN.scala 203:70]
  wire  _T_206; // @[RoundAnyRawFNToRecFN.scala 205:67]
  wire  _T_207; // @[RoundAnyRawFNToRecFN.scala 207:29]
  wire  _T_208; // @[RoundAnyRawFNToRecFN.scala 206:46]
  wire [1:0] _T_212; // @[RoundAnyRawFNToRecFN.scala 218:48]
  wire  _T_213; // @[RoundAnyRawFNToRecFN.scala 218:62]
  wire  _T_214; // @[RoundAnyRawFNToRecFN.scala 218:32]
  wire  _T_218; // @[RoundAnyRawFNToRecFN.scala 218:74]
  wire  _T_224; // @[RoundAnyRawFNToRecFN.scala 220:77]
  wire  _T_225; // @[RoundAnyRawFNToRecFN.scala 224:38]
  wire  _T_226; // @[RoundAnyRawFNToRecFN.scala 225:45]
  wire  _T_227; // @[RoundAnyRawFNToRecFN.scala 225:60]
  wire  _T_229; // @[RoundAnyRawFNToRecFN.scala 219:76]
  wire  common_underflow; // @[RoundAnyRawFNToRecFN.scala 215:40]
  wire  common_inexact; // @[RoundAnyRawFNToRecFN.scala 228:49]
  wire  isNaNOut; // @[RoundAnyRawFNToRecFN.scala 233:34]
  wire  notNaN_isSpecialInfOut; // @[RoundAnyRawFNToRecFN.scala 234:49]
  wire  _T_234; // @[RoundAnyRawFNToRecFN.scala 235:33]
  wire  commonCase; // @[RoundAnyRawFNToRecFN.scala 235:61]
  wire  overflow; // @[RoundAnyRawFNToRecFN.scala 236:32]
  wire  underflow; // @[RoundAnyRawFNToRecFN.scala 237:32]
  wire  _T_236; // @[RoundAnyRawFNToRecFN.scala 238:43]
  wire  inexact; // @[RoundAnyRawFNToRecFN.scala 238:28]
  wire  overflow_roundMagUp; // @[RoundAnyRawFNToRecFN.scala 241:60]
  wire  _T_238; // @[RoundAnyRawFNToRecFN.scala 243:20]
  wire  _T_239; // @[RoundAnyRawFNToRecFN.scala 243:60]
  wire  pegMinNonzeroMagOut; // @[RoundAnyRawFNToRecFN.scala 243:45]
  wire  pegMaxFiniteMagOut; // @[RoundAnyRawFNToRecFN.scala 244:39]
  wire  _T_241; // @[RoundAnyRawFNToRecFN.scala 246:45]
  wire  notNaN_isInfOut; // @[RoundAnyRawFNToRecFN.scala 246:32]
  wire  signOut; // @[RoundAnyRawFNToRecFN.scala 248:22]
  wire  _T_242; // @[RoundAnyRawFNToRecFN.scala 251:32]
  wire [11:0] _T_243; // @[RoundAnyRawFNToRecFN.scala 251:18]
  wire [11:0] _T_245; // @[RoundAnyRawFNToRecFN.scala 250:24]
  wire [11:0] _T_247; // @[RoundAnyRawFNToRecFN.scala 255:18]
  wire [11:0] _T_249; // @[RoundAnyRawFNToRecFN.scala 254:17]
  wire [11:0] _T_250; // @[RoundAnyRawFNToRecFN.scala 259:18]
  wire [11:0] _T_252; // @[RoundAnyRawFNToRecFN.scala 258:17]
  wire [11:0] _T_253; // @[RoundAnyRawFNToRecFN.scala 263:18]
  wire [11:0] _T_255; // @[RoundAnyRawFNToRecFN.scala 262:17]
  wire [11:0] _T_256; // @[RoundAnyRawFNToRecFN.scala 267:16]
  wire [11:0] _T_257; // @[RoundAnyRawFNToRecFN.scala 266:18]
  wire [11:0] _T_258; // @[RoundAnyRawFNToRecFN.scala 271:16]
  wire [11:0] _T_259; // @[RoundAnyRawFNToRecFN.scala 270:15]
  wire [11:0] _T_260; // @[RoundAnyRawFNToRecFN.scala 275:16]
  wire [11:0] _T_261; // @[RoundAnyRawFNToRecFN.scala 274:15]
  wire [11:0] _T_262; // @[RoundAnyRawFNToRecFN.scala 276:16]
  wire [11:0] expOut; // @[RoundAnyRawFNToRecFN.scala 275:77]
  wire  _T_263; // @[RoundAnyRawFNToRecFN.scala 278:22]
  wire  _T_264; // @[RoundAnyRawFNToRecFN.scala 278:38]
  wire [51:0] _T_265; // @[RoundAnyRawFNToRecFN.scala 279:16]
  wire [51:0] _T_266; // @[RoundAnyRawFNToRecFN.scala 278:12]
  wire [51:0] _T_268; // @[Bitwise.scala 71:12]
  wire [51:0] fractOut; // @[RoundAnyRawFNToRecFN.scala 281:11]
  wire [12:0] _T_269; // @[Cat.scala 29:58]
  wire [1:0] _T_271; // @[Cat.scala 29:58]
  wire [2:0] _T_273; // @[Cat.scala 29:58]
  assign roundingMode_near_even = io_roundingMode == 3'h0; // @[RoundAnyRawFNToRecFN.scala 88:53]
  assign roundingMode_min = io_roundingMode == 3'h2; // @[RoundAnyRawFNToRecFN.scala 90:53]
  assign roundingMode_max = io_roundingMode == 3'h3; // @[RoundAnyRawFNToRecFN.scala 91:53]
  assign roundingMode_near_maxMag = io_roundingMode == 3'h4; // @[RoundAnyRawFNToRecFN.scala 92:53]
  assign roundingMode_odd = io_roundingMode == 3'h6; // @[RoundAnyRawFNToRecFN.scala 93:53]
  assign _T = roundingMode_min & io_in_sign; // @[RoundAnyRawFNToRecFN.scala 96:27]
  assign _T_2 = roundingMode_max & ~io_in_sign; // @[RoundAnyRawFNToRecFN.scala 96:63]
  assign roundMagUp = _T | _T_2; // @[RoundAnyRawFNToRecFN.scala 96:42]
  assign _T_5 = ~io_in_sExp[11]; // @[primitives.scala 57:25]
  assign _T_7 = ~io_in_sExp[10]; // @[primitives.scala 57:25]
  assign _T_9 = ~io_in_sExp[9]; // @[primitives.scala 57:25]
  assign _T_11 = ~io_in_sExp[8]; // @[primitives.scala 57:25]
  assign _T_13 = ~io_in_sExp[7]; // @[primitives.scala 57:25]
  assign _T_15 = ~io_in_sExp[6]; // @[primitives.scala 57:25]
  assign _T_16 = ~io_in_sExp[5:0]; // @[primitives.scala 58:26]
  assign _T_17 = -65'sh10000000000000000 >>> _T_16; // @[primitives.scala 77:58]
  assign _T_23 = {{16'd0}, _T_17[44:29]}; // @[Bitwise.scala 102:31]
  assign _T_25 = {_T_17[28:13], 16'h0}; // @[Bitwise.scala 102:65]
  assign _T_27 = _T_25 & 32'hffff0000; // @[Bitwise.scala 102:75]
  assign _T_28 = _T_23 | _T_27; // @[Bitwise.scala 102:39]
  assign _GEN_0 = {{8'd0}, _T_28[31:8]}; // @[Bitwise.scala 102:31]
  assign _T_33 = _GEN_0 & 32'hff00ff; // @[Bitwise.scala 102:31]
  assign _T_35 = {_T_28[23:0], 8'h0}; // @[Bitwise.scala 102:65]
  assign _T_37 = _T_35 & 32'hff00ff00; // @[Bitwise.scala 102:75]
  assign _T_38 = _T_33 | _T_37; // @[Bitwise.scala 102:39]
  assign _GEN_1 = {{4'd0}, _T_38[31:4]}; // @[Bitwise.scala 102:31]
  assign _T_43 = _GEN_1 & 32'hf0f0f0f; // @[Bitwise.scala 102:31]
  assign _T_45 = {_T_38[27:0], 4'h0}; // @[Bitwise.scala 102:65]
  assign _T_47 = _T_45 & 32'hf0f0f0f0; // @[Bitwise.scala 102:75]
  assign _T_48 = _T_43 | _T_47; // @[Bitwise.scala 102:39]
  assign _GEN_2 = {{2'd0}, _T_48[31:2]}; // @[Bitwise.scala 102:31]
  assign _T_53 = _GEN_2 & 32'h33333333; // @[Bitwise.scala 102:31]
  assign _T_55 = {_T_48[29:0], 2'h0}; // @[Bitwise.scala 102:65]
  assign _T_57 = _T_55 & 32'hcccccccc; // @[Bitwise.scala 102:75]
  assign _T_58 = _T_53 | _T_57; // @[Bitwise.scala 102:39]
  assign _GEN_3 = {{1'd0}, _T_58[31:1]}; // @[Bitwise.scala 102:31]
  assign _T_63 = _GEN_3 & 32'h55555555; // @[Bitwise.scala 102:31]
  assign _T_65 = {_T_58[30:0], 1'h0}; // @[Bitwise.scala 102:65]
  assign _T_67 = _T_65 & 32'haaaaaaaa; // @[Bitwise.scala 102:75]
  assign _T_68 = _T_63 | _T_67; // @[Bitwise.scala 102:39]
  assign _T_74 = {{8'd0}, _T_17[60:53]}; // @[Bitwise.scala 102:31]
  assign _T_76 = {_T_17[52:45], 8'h0}; // @[Bitwise.scala 102:65]
  assign _T_78 = _T_76 & 16'hff00; // @[Bitwise.scala 102:75]
  assign _T_79 = _T_74 | _T_78; // @[Bitwise.scala 102:39]
  assign _GEN_4 = {{4'd0}, _T_79[15:4]}; // @[Bitwise.scala 102:31]
  assign _T_84 = _GEN_4 & 16'hf0f; // @[Bitwise.scala 102:31]
  assign _T_86 = {_T_79[11:0], 4'h0}; // @[Bitwise.scala 102:65]
  assign _T_88 = _T_86 & 16'hf0f0; // @[Bitwise.scala 102:75]
  assign _T_89 = _T_84 | _T_88; // @[Bitwise.scala 102:39]
  assign _GEN_5 = {{2'd0}, _T_89[15:2]}; // @[Bitwise.scala 102:31]
  assign _T_94 = _GEN_5 & 16'h3333; // @[Bitwise.scala 102:31]
  assign _T_96 = {_T_89[13:0], 2'h0}; // @[Bitwise.scala 102:65]
  assign _T_98 = _T_96 & 16'hcccc; // @[Bitwise.scala 102:75]
  assign _T_99 = _T_94 | _T_98; // @[Bitwise.scala 102:39]
  assign _GEN_6 = {{1'd0}, _T_99[15:1]}; // @[Bitwise.scala 102:31]
  assign _T_104 = _GEN_6 & 16'h5555; // @[Bitwise.scala 102:31]
  assign _T_106 = {_T_99[14:0], 1'h0}; // @[Bitwise.scala 102:65]
  assign _T_108 = _T_106 & 16'haaaa; // @[Bitwise.scala 102:75]
  assign _T_109 = _T_104 | _T_108; // @[Bitwise.scala 102:39]
  assign _T_118 = {_T_68,_T_109,_T_17[61],_T_17[62],_T_17[63]}; // @[Cat.scala 29:58]
  assign _T_120 = _T_15 ? 51'h0 : ~_T_118; // @[primitives.scala 74:21]
  assign _T_123 = _T_13 ? 51'h0 : _T_120[50:0]; // @[primitives.scala 74:21]
  assign _T_126 = _T_11 ? 51'h0 : _T_123[50:0]; // @[primitives.scala 74:21]
  assign _T_129 = _T_9 ? 51'h0 : _T_126[50:0]; // @[primitives.scala 74:21]
  assign _T_131 = {~_T_129,3'h7}; // @[Cat.scala 29:58]
  assign _T_147 = {_T_17[0],_T_17[1],_T_17[2]}; // @[Cat.scala 29:58]
  assign _T_148 = _T_15 ? _T_147 : 3'h0; // @[primitives.scala 61:24]
  assign _T_149 = _T_13 ? _T_148 : 3'h0; // @[primitives.scala 61:24]
  assign _T_150 = _T_11 ? _T_149 : 3'h0; // @[primitives.scala 61:24]
  assign _T_151 = _T_9 ? _T_150 : 3'h0; // @[primitives.scala 61:24]
  assign _T_152 = _T_7 ? _T_131 : {{51'd0}, _T_151}; // @[primitives.scala 66:24]
  assign _T_153 = _T_5 ? _T_152 : 54'h0; // @[primitives.scala 61:24]
  assign _T_155 = {_T_153,2'h3}; // @[Cat.scala 29:58]
  assign _T_157 = {1'h0,_T_155[55:1]}; // @[Cat.scala 29:58]
  assign _T_159 = ~_T_157 & _T_155; // @[RoundAnyRawFNToRecFN.scala 161:46]
  assign _T_160 = io_in_sig & _T_159; // @[RoundAnyRawFNToRecFN.scala 162:40]
  assign _T_161 = _T_160 != 56'h0; // @[RoundAnyRawFNToRecFN.scala 162:56]
  assign _T_162 = io_in_sig & _T_157; // @[RoundAnyRawFNToRecFN.scala 163:42]
  assign _T_163 = _T_162 != 56'h0; // @[RoundAnyRawFNToRecFN.scala 163:62]
  assign _T_164 = _T_161 | _T_163; // @[RoundAnyRawFNToRecFN.scala 164:36]
  assign _T_165 = roundingMode_near_even | roundingMode_near_maxMag; // @[RoundAnyRawFNToRecFN.scala 167:38]
  assign _T_166 = _T_165 & _T_161; // @[RoundAnyRawFNToRecFN.scala 167:67]
  assign _T_167 = roundMagUp & _T_164; // @[RoundAnyRawFNToRecFN.scala 169:29]
  assign _T_168 = _T_166 | _T_167; // @[RoundAnyRawFNToRecFN.scala 168:31]
  assign _T_169 = io_in_sig | _T_155; // @[RoundAnyRawFNToRecFN.scala 172:32]
  assign _T_171 = _T_169[55:2] + 54'h1; // @[RoundAnyRawFNToRecFN.scala 172:49]
  assign _T_172 = roundingMode_near_even & _T_161; // @[RoundAnyRawFNToRecFN.scala 173:49]
  assign _T_174 = _T_172 & ~_T_163; // @[RoundAnyRawFNToRecFN.scala 173:64]
  assign _T_176 = _T_174 ? _T_155[55:1] : 55'h0; // @[RoundAnyRawFNToRecFN.scala 173:25]
  assign _T_178 = _T_171 & ~_T_176; // @[RoundAnyRawFNToRecFN.scala 172:61]
  assign _T_180 = io_in_sig & ~_T_155; // @[RoundAnyRawFNToRecFN.scala 178:30]
  assign _T_182 = roundingMode_odd & _T_164; // @[RoundAnyRawFNToRecFN.scala 179:42]
  assign _T_184 = _T_182 ? _T_159[55:1] : 55'h0; // @[RoundAnyRawFNToRecFN.scala 179:24]
  assign _GEN_7 = {{1'd0}, _T_180[55:2]}; // @[RoundAnyRawFNToRecFN.scala 178:47]
  assign _T_185 = _GEN_7 | _T_184; // @[RoundAnyRawFNToRecFN.scala 178:47]
  assign _T_186 = _T_168 ? _T_178 : _T_185; // @[RoundAnyRawFNToRecFN.scala 171:16]
  assign _T_188 = {1'b0,$signed(_T_186[54:53])}; // @[RoundAnyRawFNToRecFN.scala 183:69]
  assign _GEN_8 = {{10{_T_188[2]}},_T_188}; // @[RoundAnyRawFNToRecFN.scala 183:40]
  assign _T_189 = $signed(io_in_sExp) + $signed(_GEN_8); // @[RoundAnyRawFNToRecFN.scala 183:40]
  assign common_expOut = _T_189[11:0]; // @[RoundAnyRawFNToRecFN.scala 185:37]
  assign common_fractOut = _T_186[51:0]; // @[RoundAnyRawFNToRecFN.scala 189:27]
  assign _T_194 = _T_189[13:10]; // @[RoundAnyRawFNToRecFN.scala 194:30]
  assign common_overflow = $signed(_T_194) >= 4'sh3; // @[RoundAnyRawFNToRecFN.scala 194:50]
  assign common_totalUnderflow = $signed(_T_189) < 14'sh3ce; // @[RoundAnyRawFNToRecFN.scala 198:31]
  assign _T_203 = io_in_sig[1:0] != 2'h0; // @[RoundAnyRawFNToRecFN.scala 203:70]
  assign _T_206 = _T_165 & io_in_sig[1]; // @[RoundAnyRawFNToRecFN.scala 205:67]
  assign _T_207 = roundMagUp & _T_203; // @[RoundAnyRawFNToRecFN.scala 207:29]
  assign _T_208 = _T_206 | _T_207; // @[RoundAnyRawFNToRecFN.scala 206:46]
  assign _T_212 = io_in_sExp[12:11]; // @[RoundAnyRawFNToRecFN.scala 218:48]
  assign _T_213 = $signed(_T_212) <= 2'sh0; // @[RoundAnyRawFNToRecFN.scala 218:62]
  assign _T_214 = _T_164 & _T_213; // @[RoundAnyRawFNToRecFN.scala 218:32]
  assign _T_218 = _T_214 & _T_155[2]; // @[RoundAnyRawFNToRecFN.scala 218:74]
  assign _T_224 = io_detectTininess & ~_T_155[3]; // @[RoundAnyRawFNToRecFN.scala 220:77]
  assign _T_225 = _T_224 & _T_186[53]; // @[RoundAnyRawFNToRecFN.scala 224:38]
  assign _T_226 = _T_225 & _T_161; // @[RoundAnyRawFNToRecFN.scala 225:45]
  assign _T_227 = _T_226 & _T_208; // @[RoundAnyRawFNToRecFN.scala 225:60]
  assign _T_229 = _T_218 & ~_T_227; // @[RoundAnyRawFNToRecFN.scala 219:76]
  assign common_underflow = common_totalUnderflow | _T_229; // @[RoundAnyRawFNToRecFN.scala 215:40]
  assign common_inexact = common_totalUnderflow | _T_164; // @[RoundAnyRawFNToRecFN.scala 228:49]
  assign isNaNOut = io_invalidExc | io_in_isNaN; // @[RoundAnyRawFNToRecFN.scala 233:34]
  assign notNaN_isSpecialInfOut = io_infiniteExc | io_in_isInf; // @[RoundAnyRawFNToRecFN.scala 234:49]
  assign _T_234 = ~isNaNOut & ~notNaN_isSpecialInfOut; // @[RoundAnyRawFNToRecFN.scala 235:33]
  assign commonCase = _T_234 & ~io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 235:61]
  assign overflow = commonCase & common_overflow; // @[RoundAnyRawFNToRecFN.scala 236:32]
  assign underflow = commonCase & common_underflow; // @[RoundAnyRawFNToRecFN.scala 237:32]
  assign _T_236 = commonCase & common_inexact; // @[RoundAnyRawFNToRecFN.scala 238:43]
  assign inexact = overflow | _T_236; // @[RoundAnyRawFNToRecFN.scala 238:28]
  assign overflow_roundMagUp = _T_165 | roundMagUp; // @[RoundAnyRawFNToRecFN.scala 241:60]
  assign _T_238 = commonCase & common_totalUnderflow; // @[RoundAnyRawFNToRecFN.scala 243:20]
  assign _T_239 = roundMagUp | roundingMode_odd; // @[RoundAnyRawFNToRecFN.scala 243:60]
  assign pegMinNonzeroMagOut = _T_238 & _T_239; // @[RoundAnyRawFNToRecFN.scala 243:45]
  assign pegMaxFiniteMagOut = overflow & ~overflow_roundMagUp; // @[RoundAnyRawFNToRecFN.scala 244:39]
  assign _T_241 = overflow & overflow_roundMagUp; // @[RoundAnyRawFNToRecFN.scala 246:45]
  assign notNaN_isInfOut = notNaN_isSpecialInfOut | _T_241; // @[RoundAnyRawFNToRecFN.scala 246:32]
  assign signOut = isNaNOut ? 1'h0 : io_in_sign; // @[RoundAnyRawFNToRecFN.scala 248:22]
  assign _T_242 = io_in_isZero | common_totalUnderflow; // @[RoundAnyRawFNToRecFN.scala 251:32]
  assign _T_243 = _T_242 ? 12'he00 : 12'h0; // @[RoundAnyRawFNToRecFN.scala 251:18]
  assign _T_245 = common_expOut & ~_T_243; // @[RoundAnyRawFNToRecFN.scala 250:24]
  assign _T_247 = pegMinNonzeroMagOut ? 12'hc31 : 12'h0; // @[RoundAnyRawFNToRecFN.scala 255:18]
  assign _T_249 = _T_245 & ~_T_247; // @[RoundAnyRawFNToRecFN.scala 254:17]
  assign _T_250 = pegMaxFiniteMagOut ? 12'h400 : 12'h0; // @[RoundAnyRawFNToRecFN.scala 259:18]
  assign _T_252 = _T_249 & ~_T_250; // @[RoundAnyRawFNToRecFN.scala 258:17]
  assign _T_253 = notNaN_isInfOut ? 12'h200 : 12'h0; // @[RoundAnyRawFNToRecFN.scala 263:18]
  assign _T_255 = _T_252 & ~_T_253; // @[RoundAnyRawFNToRecFN.scala 262:17]
  assign _T_256 = pegMinNonzeroMagOut ? 12'h3ce : 12'h0; // @[RoundAnyRawFNToRecFN.scala 267:16]
  assign _T_257 = _T_255 | _T_256; // @[RoundAnyRawFNToRecFN.scala 266:18]
  assign _T_258 = pegMaxFiniteMagOut ? 12'hbff : 12'h0; // @[RoundAnyRawFNToRecFN.scala 271:16]
  assign _T_259 = _T_257 | _T_258; // @[RoundAnyRawFNToRecFN.scala 270:15]
  assign _T_260 = notNaN_isInfOut ? 12'hc00 : 12'h0; // @[RoundAnyRawFNToRecFN.scala 275:16]
  assign _T_261 = _T_259 | _T_260; // @[RoundAnyRawFNToRecFN.scala 274:15]
  assign _T_262 = isNaNOut ? 12'he00 : 12'h0; // @[RoundAnyRawFNToRecFN.scala 276:16]
  assign expOut = _T_261 | _T_262; // @[RoundAnyRawFNToRecFN.scala 275:77]
  assign _T_263 = isNaNOut | io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 278:22]
  assign _T_264 = _T_263 | common_totalUnderflow; // @[RoundAnyRawFNToRecFN.scala 278:38]
  assign _T_265 = isNaNOut ? 52'h8000000000000 : 52'h0; // @[RoundAnyRawFNToRecFN.scala 279:16]
  assign _T_266 = _T_264 ? _T_265 : common_fractOut; // @[RoundAnyRawFNToRecFN.scala 278:12]
  assign _T_268 = pegMaxFiniteMagOut ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 71:12]
  assign fractOut = _T_266 | _T_268; // @[RoundAnyRawFNToRecFN.scala 281:11]
  assign _T_269 = {signOut,expOut}; // @[Cat.scala 29:58]
  assign _T_271 = {underflow,inexact}; // @[Cat.scala 29:58]
  assign _T_273 = {io_invalidExc,io_infiniteExc,overflow}; // @[Cat.scala 29:58]
  assign io_out = {_T_269,fractOut}; // @[RoundAnyRawFNToRecFN.scala 284:12]
  assign io_exceptionFlags = {_T_273,_T_271}; // @[RoundAnyRawFNToRecFN.scala 285:23]
endmodule
module RoundRawFNToRecFN(
  input         io_invalidExc,
  input         io_infiniteExc,
  input         io_in_isNaN,
  input         io_in_isInf,
  input         io_in_isZero,
  input         io_in_sign,
  input  [12:0] io_in_sExp,
  input  [55:0] io_in_sig,
  input  [2:0]  io_roundingMode,
  input         io_detectTininess,
  output [64:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  roundAnyRawFNToRecFN_io_invalidExc; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_infiniteExc; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_in_isNaN; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_in_isInf; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_in_sign; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire [12:0] roundAnyRawFNToRecFN_io_in_sExp; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire [55:0] roundAnyRawFNToRecFN_io_in_sig; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire [2:0] roundAnyRawFNToRecFN_io_roundingMode; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire  roundAnyRawFNToRecFN_io_detectTininess; // @[RoundAnyRawFNToRecFN.scala 307:15]
  wire [64:0] roundAnyRawFNToRecFN_io_out; // @[RoundAnyRawFNToRecFN.scala 307:15]
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
module DivSqrtRecF64_mulAddZ31(
  input          clock,
  input          reset,
  output         io_inReady_div,
  input          io_inValid,
  input  [64:0]  io_a,
  input  [64:0]  io_b,
  input  [2:0]   io_roundingMode,
  input          io_detectTininess,
  output [3:0]   io_usingMulAdd,
  output         io_latchMulAddA_0,
  output [53:0]  io_mulAddA_0,
  output         io_latchMulAddB_0,
  output [53:0]  io_mulAddB_0,
  output [104:0] io_mulAddC_2,
  input  [104:0] io_mulAddResult_3,
  output         io_outValid_div,
  output [64:0]  io_out,
  output [4:0]   io_exceptionFlags
);
  wire  divSqrtRecF64ToRaw_clock; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_reset; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_io_inReady_div; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_io_inValid; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire [64:0] divSqrtRecF64ToRaw_io_a; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire [64:0] divSqrtRecF64ToRaw_io_b; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire [2:0] divSqrtRecF64ToRaw_io_roundingMode; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire [3:0] divSqrtRecF64ToRaw_io_usingMulAdd; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_io_latchMulAddA_0; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire [53:0] divSqrtRecF64ToRaw_io_mulAddA_0; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_io_latchMulAddB_0; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire [53:0] divSqrtRecF64ToRaw_io_mulAddB_0; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire [104:0] divSqrtRecF64ToRaw_io_mulAddC_2; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire [104:0] divSqrtRecF64ToRaw_io_mulAddResult_3; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_io_rawOutValid_div; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire [2:0] divSqrtRecF64ToRaw_io_roundingModeOut; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_io_invalidExc; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_io_infiniteExc; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_io_rawOut_isNaN; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_io_rawOut_isInf; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_io_rawOut_isZero; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  divSqrtRecF64ToRaw_io_rawOut_sign; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire [12:0] divSqrtRecF64ToRaw_io_rawOut_sExp; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire [55:0] divSqrtRecF64ToRaw_io_rawOut_sig; // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
  wire  roundRawFNToRecFN_io_invalidExc; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  wire  roundRawFNToRecFN_io_infiniteExc; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  wire  roundRawFNToRecFN_io_in_isNaN; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  wire  roundRawFNToRecFN_io_in_isInf; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  wire  roundRawFNToRecFN_io_in_isZero; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  wire  roundRawFNToRecFN_io_in_sign; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  wire [12:0] roundRawFNToRecFN_io_in_sExp; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  wire [55:0] roundRawFNToRecFN_io_in_sig; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  wire [2:0] roundRawFNToRecFN_io_roundingMode; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  wire  roundRawFNToRecFN_io_detectTininess; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  wire [64:0] roundRawFNToRecFN_io_out; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  wire [4:0] roundRawFNToRecFN_io_exceptionFlags; // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
  DivSqrtRecF64ToRaw_mulAddZ31 divSqrtRecF64ToRaw ( // @[DivSqrtRecF64_mulAddZ31.scala 750:36]
    .clock(divSqrtRecF64ToRaw_clock),
    .reset(divSqrtRecF64ToRaw_reset),
    .io_inReady_div(divSqrtRecF64ToRaw_io_inReady_div),
    .io_inValid(divSqrtRecF64ToRaw_io_inValid),
    .io_a(divSqrtRecF64ToRaw_io_a),
    .io_b(divSqrtRecF64ToRaw_io_b),
    .io_roundingMode(divSqrtRecF64ToRaw_io_roundingMode),
    .io_usingMulAdd(divSqrtRecF64ToRaw_io_usingMulAdd),
    .io_latchMulAddA_0(divSqrtRecF64ToRaw_io_latchMulAddA_0),
    .io_mulAddA_0(divSqrtRecF64ToRaw_io_mulAddA_0),
    .io_latchMulAddB_0(divSqrtRecF64ToRaw_io_latchMulAddB_0),
    .io_mulAddB_0(divSqrtRecF64ToRaw_io_mulAddB_0),
    .io_mulAddC_2(divSqrtRecF64ToRaw_io_mulAddC_2),
    .io_mulAddResult_3(divSqrtRecF64ToRaw_io_mulAddResult_3),
    .io_rawOutValid_div(divSqrtRecF64ToRaw_io_rawOutValid_div),
    .io_roundingModeOut(divSqrtRecF64ToRaw_io_roundingModeOut),
    .io_invalidExc(divSqrtRecF64ToRaw_io_invalidExc),
    .io_infiniteExc(divSqrtRecF64ToRaw_io_infiniteExc),
    .io_rawOut_isNaN(divSqrtRecF64ToRaw_io_rawOut_isNaN),
    .io_rawOut_isInf(divSqrtRecF64ToRaw_io_rawOut_isInf),
    .io_rawOut_isZero(divSqrtRecF64ToRaw_io_rawOut_isZero),
    .io_rawOut_sign(divSqrtRecF64ToRaw_io_rawOut_sign),
    .io_rawOut_sExp(divSqrtRecF64ToRaw_io_rawOut_sExp),
    .io_rawOut_sig(divSqrtRecF64ToRaw_io_rawOut_sig)
  );
  RoundRawFNToRecFN roundRawFNToRecFN ( // @[DivSqrtRecF64_mulAddZ31.scala 774:15]
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
  assign io_inReady_div = divSqrtRecF64ToRaw_io_inReady_div; // @[DivSqrtRecF64_mulAddZ31.scala 752:21]
  assign io_usingMulAdd = divSqrtRecF64ToRaw_io_usingMulAdd; // @[DivSqrtRecF64_mulAddZ31.scala 760:23]
  assign io_latchMulAddA_0 = divSqrtRecF64ToRaw_io_latchMulAddA_0; // @[DivSqrtRecF64_mulAddZ31.scala 761:23]
  assign io_mulAddA_0 = divSqrtRecF64ToRaw_io_mulAddA_0; // @[DivSqrtRecF64_mulAddZ31.scala 762:23]
  assign io_latchMulAddB_0 = divSqrtRecF64ToRaw_io_latchMulAddB_0; // @[DivSqrtRecF64_mulAddZ31.scala 763:23]
  assign io_mulAddB_0 = divSqrtRecF64ToRaw_io_mulAddB_0; // @[DivSqrtRecF64_mulAddZ31.scala 764:23]
  assign io_mulAddC_2 = divSqrtRecF64ToRaw_io_mulAddC_2; // @[DivSqrtRecF64_mulAddZ31.scala 765:23]
  assign io_outValid_div = divSqrtRecF64ToRaw_io_rawOutValid_div; // @[DivSqrtRecF64_mulAddZ31.scala 770:22]
  assign io_out = roundRawFNToRecFN_io_out; // @[DivSqrtRecF64_mulAddZ31.scala 780:23]
  assign io_exceptionFlags = roundRawFNToRecFN_io_exceptionFlags; // @[DivSqrtRecF64_mulAddZ31.scala 781:23]
  assign divSqrtRecF64ToRaw_clock = clock;
  assign divSqrtRecF64ToRaw_reset = reset;
  assign divSqrtRecF64ToRaw_io_inValid = io_inValid; // @[DivSqrtRecF64_mulAddZ31.scala 754:40]
  assign divSqrtRecF64ToRaw_io_a = io_a; // @[DivSqrtRecF64_mulAddZ31.scala 756:40]
  assign divSqrtRecF64ToRaw_io_b = io_b; // @[DivSqrtRecF64_mulAddZ31.scala 757:40]
  assign divSqrtRecF64ToRaw_io_roundingMode = io_roundingMode; // @[DivSqrtRecF64_mulAddZ31.scala 758:40]
  assign divSqrtRecF64ToRaw_io_mulAddResult_3 = io_mulAddResult_3; // @[DivSqrtRecF64_mulAddZ31.scala 766:42]
  assign roundRawFNToRecFN_io_invalidExc = divSqrtRecF64ToRaw_io_invalidExc; // @[DivSqrtRecF64_mulAddZ31.scala 775:39]
  assign roundRawFNToRecFN_io_infiniteExc = divSqrtRecF64ToRaw_io_infiniteExc; // @[DivSqrtRecF64_mulAddZ31.scala 776:39]
  assign roundRawFNToRecFN_io_in_isNaN = divSqrtRecF64ToRaw_io_rawOut_isNaN; // @[DivSqrtRecF64_mulAddZ31.scala 777:39]
  assign roundRawFNToRecFN_io_in_isInf = divSqrtRecF64ToRaw_io_rawOut_isInf; // @[DivSqrtRecF64_mulAddZ31.scala 777:39]
  assign roundRawFNToRecFN_io_in_isZero = divSqrtRecF64ToRaw_io_rawOut_isZero; // @[DivSqrtRecF64_mulAddZ31.scala 777:39]
  assign roundRawFNToRecFN_io_in_sign = divSqrtRecF64ToRaw_io_rawOut_sign; // @[DivSqrtRecF64_mulAddZ31.scala 777:39]
  assign roundRawFNToRecFN_io_in_sExp = divSqrtRecF64ToRaw_io_rawOut_sExp; // @[DivSqrtRecF64_mulAddZ31.scala 777:39]
  assign roundRawFNToRecFN_io_in_sig = divSqrtRecF64ToRaw_io_rawOut_sig; // @[DivSqrtRecF64_mulAddZ31.scala 777:39]
  assign roundRawFNToRecFN_io_roundingMode = divSqrtRecF64ToRaw_io_roundingModeOut; // @[DivSqrtRecF64_mulAddZ31.scala 778:39]
  assign roundRawFNToRecFN_io_detectTininess = io_detectTininess; // @[DivSqrtRecF64_mulAddZ31.scala 779:41]
endmodule
module Mul54(
  input          clock,
  input          io_val_s0,
  input          io_latch_a_s0,
  input  [53:0]  io_a_s0,
  input          io_latch_b_s0,
  input  [53:0]  io_b_s0,
  input  [104:0] io_c_s2,
  output [104:0] io_result_s3
);
  reg  val_s1; // @[DivSqrtRecF64.scala 98:21]
  reg [31:0] _RAND_0;
  reg  val_s2; // @[DivSqrtRecF64.scala 99:21]
  reg [31:0] _RAND_1;
  reg [53:0] reg_a_s1; // @[DivSqrtRecF64.scala 100:23]
  reg [63:0] _RAND_2;
  reg [53:0] reg_b_s1; // @[DivSqrtRecF64.scala 101:23]
  reg [63:0] _RAND_3;
  reg [53:0] reg_a_s2; // @[DivSqrtRecF64.scala 102:23]
  reg [63:0] _RAND_4;
  reg [53:0] reg_b_s2; // @[DivSqrtRecF64.scala 103:23]
  reg [63:0] _RAND_5;
  reg [104:0] reg_result_s3; // @[DivSqrtRecF64.scala 104:28]
  reg [127:0] _RAND_6;
  wire [107:0] _T; // @[DivSqrtRecF64.scala 124:36]
  wire [104:0] _T_3; // @[DivSqrtRecF64.scala 124:55]
  assign _T = reg_a_s2 * reg_b_s2; // @[DivSqrtRecF64.scala 124:36]
  assign _T_3 = _T[104:0] + io_c_s2; // @[DivSqrtRecF64.scala 124:55]
  assign io_result_s3 = reg_result_s3; // @[DivSqrtRecF64.scala 127:18]
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
  val_s1 = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  val_s2 = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {2{`RANDOM}};
  reg_a_s1 = _RAND_2[53:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {2{`RANDOM}};
  reg_b_s1 = _RAND_3[53:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {2{`RANDOM}};
  reg_a_s2 = _RAND_4[53:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {2{`RANDOM}};
  reg_b_s2 = _RAND_5[53:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {4{`RANDOM}};
  reg_result_s3 = _RAND_6[104:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    val_s1 <= io_val_s0;
    val_s2 <= val_s1;
    if (io_val_s0) begin
      if (io_latch_a_s0) begin
        reg_a_s1 <= io_a_s0;
      end
    end
    if (io_val_s0) begin
      if (io_latch_b_s0) begin
        reg_b_s1 <= io_b_s0;
      end
    end
    if (val_s1) begin
      reg_a_s2 <= reg_a_s1;
    end
    if (val_s1) begin
      reg_b_s2 <= reg_b_s1;
    end
    if (val_s2) begin
      reg_result_s3 <= _T_3;
    end
  end
endmodule
module DivSqrtRecF64(
  input         clock,
  input         reset,
  output        io_inReady_div,
  input         io_inValid,
  input  [64:0] io_a,
  input  [64:0] io_b,
  input  [2:0]  io_roundingMode,
  input         io_detectTininess,
  output        io_outValid_div,
  output [64:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  ds_clock; // @[DivSqrtRecF64.scala 60:20]
  wire  ds_reset; // @[DivSqrtRecF64.scala 60:20]
  wire  ds_io_inReady_div; // @[DivSqrtRecF64.scala 60:20]
  wire  ds_io_inValid; // @[DivSqrtRecF64.scala 60:20]
  wire [64:0] ds_io_a; // @[DivSqrtRecF64.scala 60:20]
  wire [64:0] ds_io_b; // @[DivSqrtRecF64.scala 60:20]
  wire [2:0] ds_io_roundingMode; // @[DivSqrtRecF64.scala 60:20]
  wire  ds_io_detectTininess; // @[DivSqrtRecF64.scala 60:20]
  wire [3:0] ds_io_usingMulAdd; // @[DivSqrtRecF64.scala 60:20]
  wire  ds_io_latchMulAddA_0; // @[DivSqrtRecF64.scala 60:20]
  wire [53:0] ds_io_mulAddA_0; // @[DivSqrtRecF64.scala 60:20]
  wire  ds_io_latchMulAddB_0; // @[DivSqrtRecF64.scala 60:20]
  wire [53:0] ds_io_mulAddB_0; // @[DivSqrtRecF64.scala 60:20]
  wire [104:0] ds_io_mulAddC_2; // @[DivSqrtRecF64.scala 60:20]
  wire [104:0] ds_io_mulAddResult_3; // @[DivSqrtRecF64.scala 60:20]
  wire  ds_io_outValid_div; // @[DivSqrtRecF64.scala 60:20]
  wire [64:0] ds_io_out; // @[DivSqrtRecF64.scala 60:20]
  wire [4:0] ds_io_exceptionFlags; // @[DivSqrtRecF64.scala 60:20]
  wire  mul_clock; // @[DivSqrtRecF64.scala 75:21]
  wire  mul_io_val_s0; // @[DivSqrtRecF64.scala 75:21]
  wire  mul_io_latch_a_s0; // @[DivSqrtRecF64.scala 75:21]
  wire [53:0] mul_io_a_s0; // @[DivSqrtRecF64.scala 75:21]
  wire  mul_io_latch_b_s0; // @[DivSqrtRecF64.scala 75:21]
  wire [53:0] mul_io_b_s0; // @[DivSqrtRecF64.scala 75:21]
  wire [104:0] mul_io_c_s2; // @[DivSqrtRecF64.scala 75:21]
  wire [104:0] mul_io_result_s3; // @[DivSqrtRecF64.scala 75:21]
  DivSqrtRecF64_mulAddZ31 ds ( // @[DivSqrtRecF64.scala 60:20]
    .clock(ds_clock),
    .reset(ds_reset),
    .io_inReady_div(ds_io_inReady_div),
    .io_inValid(ds_io_inValid),
    .io_a(ds_io_a),
    .io_b(ds_io_b),
    .io_roundingMode(ds_io_roundingMode),
    .io_detectTininess(ds_io_detectTininess),
    .io_usingMulAdd(ds_io_usingMulAdd),
    .io_latchMulAddA_0(ds_io_latchMulAddA_0),
    .io_mulAddA_0(ds_io_mulAddA_0),
    .io_latchMulAddB_0(ds_io_latchMulAddB_0),
    .io_mulAddB_0(ds_io_mulAddB_0),
    .io_mulAddC_2(ds_io_mulAddC_2),
    .io_mulAddResult_3(ds_io_mulAddResult_3),
    .io_outValid_div(ds_io_outValid_div),
    .io_out(ds_io_out),
    .io_exceptionFlags(ds_io_exceptionFlags)
  );
  Mul54 mul ( // @[DivSqrtRecF64.scala 75:21]
    .clock(mul_clock),
    .io_val_s0(mul_io_val_s0),
    .io_latch_a_s0(mul_io_latch_a_s0),
    .io_a_s0(mul_io_a_s0),
    .io_latch_b_s0(mul_io_latch_b_s0),
    .io_b_s0(mul_io_b_s0),
    .io_c_s2(mul_io_c_s2),
    .io_result_s3(mul_io_result_s3)
  );
  assign io_inReady_div = ds_io_inReady_div; // @[DivSqrtRecF64.scala 62:23]
  assign io_outValid_div = ds_io_outValid_div; // @[DivSqrtRecF64.scala 70:23]
  assign io_out = ds_io_out; // @[DivSqrtRecF64.scala 72:23]
  assign io_exceptionFlags = ds_io_exceptionFlags; // @[DivSqrtRecF64.scala 73:23]
  assign ds_clock = clock;
  assign ds_reset = reset;
  assign ds_io_inValid = io_inValid; // @[DivSqrtRecF64.scala 64:26]
  assign ds_io_a = io_a; // @[DivSqrtRecF64.scala 66:26]
  assign ds_io_b = io_b; // @[DivSqrtRecF64.scala 67:26]
  assign ds_io_roundingMode = io_roundingMode; // @[DivSqrtRecF64.scala 68:26]
  assign ds_io_detectTininess = io_detectTininess; // @[DivSqrtRecF64.scala 69:26]
  assign ds_io_mulAddResult_3 = mul_io_result_s3; // @[DivSqrtRecF64.scala 83:26]
  assign mul_clock = clock;
  assign mul_io_val_s0 = ds_io_usingMulAdd[0]; // @[DivSqrtRecF64.scala 77:23]
  assign mul_io_latch_a_s0 = ds_io_latchMulAddA_0; // @[DivSqrtRecF64.scala 78:23]
  assign mul_io_a_s0 = ds_io_mulAddA_0; // @[DivSqrtRecF64.scala 79:23]
  assign mul_io_latch_b_s0 = ds_io_latchMulAddB_0; // @[DivSqrtRecF64.scala 80:23]
  assign mul_io_b_s0 = ds_io_mulAddB_0; // @[DivSqrtRecF64.scala 81:23]
  assign mul_io_c_s2 = ds_io_mulAddC_2; // @[DivSqrtRecF64.scala 82:23]
endmodule
module QueueCompatibility(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input  [63:0] io_enq_bits_a,
  input  [63:0] io_enq_bits_b,
  input  [2:0]  io_enq_bits_roundingMode,
  input         io_enq_bits_detectTininess,
  input  [63:0] io_enq_bits_out,
  input  [4:0]  io_enq_bits_exceptionFlags,
  input         io_deq_ready,
  output        io_deq_valid,
  output [63:0] io_deq_bits_a,
  output [63:0] io_deq_bits_b,
  output [2:0]  io_deq_bits_roundingMode,
  output        io_deq_bits_detectTininess,
  output [63:0] io_deq_bits_out,
  output [4:0]  io_deq_bits_exceptionFlags
);
  reg [63:0] _T_a [0:4]; // @[Decoupled.scala 209:24]
  reg [63:0] _RAND_0;
  wire [63:0] _T_a__T_18_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_a__T_18_addr; // @[Decoupled.scala 209:24]
  reg [63:0] _RAND_1;
  wire [63:0] _T_a__T_10_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_a__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T_a__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T_a__T_10_en; // @[Decoupled.scala 209:24]
  reg [63:0] _T_b [0:4]; // @[Decoupled.scala 209:24]
  reg [63:0] _RAND_2;
  wire [63:0] _T_b__T_18_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_b__T_18_addr; // @[Decoupled.scala 209:24]
  reg [63:0] _RAND_3;
  wire [63:0] _T_b__T_10_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_b__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T_b__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T_b__T_10_en; // @[Decoupled.scala 209:24]
  reg [2:0] _T_roundingMode [0:4]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_4;
  wire [2:0] _T_roundingMode__T_18_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_roundingMode__T_18_addr; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_5;
  wire [2:0] _T_roundingMode__T_10_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_roundingMode__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T_roundingMode__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T_roundingMode__T_10_en; // @[Decoupled.scala 209:24]
  reg  _T_detectTininess [0:4]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_6;
  wire  _T_detectTininess__T_18_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_detectTininess__T_18_addr; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_7;
  wire  _T_detectTininess__T_10_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_detectTininess__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T_detectTininess__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T_detectTininess__T_10_en; // @[Decoupled.scala 209:24]
  reg [63:0] _T_out [0:4]; // @[Decoupled.scala 209:24]
  reg [63:0] _RAND_8;
  wire [63:0] _T_out__T_18_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_out__T_18_addr; // @[Decoupled.scala 209:24]
  reg [63:0] _RAND_9;
  wire [63:0] _T_out__T_10_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_out__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T_out__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T_out__T_10_en; // @[Decoupled.scala 209:24]
  reg [4:0] _T_exceptionFlags [0:4]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_10;
  wire [4:0] _T_exceptionFlags__T_18_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_exceptionFlags__T_18_addr; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_11;
  wire [4:0] _T_exceptionFlags__T_10_data; // @[Decoupled.scala 209:24]
  wire [2:0] _T_exceptionFlags__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T_exceptionFlags__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T_exceptionFlags__T_10_en; // @[Decoupled.scala 209:24]
  reg [2:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_12;
  reg [2:0] value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_13;
  reg  _T_1; // @[Decoupled.scala 212:35]
  reg [31:0] _RAND_14;
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
  assign _T_a__T_18_data = _T_a__T_18_addr >= 3'h5 ? _RAND_1[63:0] : _T_a[_T_a__T_18_addr]; // @[Decoupled.scala 209:24]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign _T_a__T_10_data = io_enq_bits_a;
  assign _T_a__T_10_addr = value;
  assign _T_a__T_10_mask = 1'h1;
  assign _T_a__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_b__T_18_addr = value_1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign _T_b__T_18_data = _T_b[_T_b__T_18_addr]; // @[Decoupled.scala 209:24]
  `else
  assign _T_b__T_18_data = _T_b__T_18_addr >= 3'h5 ? _RAND_3[63:0] : _T_b[_T_b__T_18_addr]; // @[Decoupled.scala 209:24]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign _T_b__T_10_data = io_enq_bits_b;
  assign _T_b__T_10_addr = value;
  assign _T_b__T_10_mask = 1'h1;
  assign _T_b__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_roundingMode__T_18_addr = value_1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign _T_roundingMode__T_18_data = _T_roundingMode[_T_roundingMode__T_18_addr]; // @[Decoupled.scala 209:24]
  `else
  assign _T_roundingMode__T_18_data = _T_roundingMode__T_18_addr >= 3'h5 ? _RAND_5[2:0] : _T_roundingMode[_T_roundingMode__T_18_addr]; // @[Decoupled.scala 209:24]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign _T_roundingMode__T_10_data = io_enq_bits_roundingMode;
  assign _T_roundingMode__T_10_addr = value;
  assign _T_roundingMode__T_10_mask = 1'h1;
  assign _T_roundingMode__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_detectTininess__T_18_addr = value_1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign _T_detectTininess__T_18_data = _T_detectTininess[_T_detectTininess__T_18_addr]; // @[Decoupled.scala 209:24]
  `else
  assign _T_detectTininess__T_18_data = _T_detectTininess__T_18_addr >= 3'h5 ? _RAND_7[0:0] : _T_detectTininess[_T_detectTininess__T_18_addr]; // @[Decoupled.scala 209:24]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign _T_detectTininess__T_10_data = io_enq_bits_detectTininess;
  assign _T_detectTininess__T_10_addr = value;
  assign _T_detectTininess__T_10_mask = 1'h1;
  assign _T_detectTininess__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_out__T_18_addr = value_1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign _T_out__T_18_data = _T_out[_T_out__T_18_addr]; // @[Decoupled.scala 209:24]
  `else
  assign _T_out__T_18_data = _T_out__T_18_addr >= 3'h5 ? _RAND_9[63:0] : _T_out[_T_out__T_18_addr]; // @[Decoupled.scala 209:24]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign _T_out__T_10_data = io_enq_bits_out;
  assign _T_out__T_10_addr = value;
  assign _T_out__T_10_mask = 1'h1;
  assign _T_out__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_exceptionFlags__T_18_addr = value_1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign _T_exceptionFlags__T_18_data = _T_exceptionFlags[_T_exceptionFlags__T_18_addr]; // @[Decoupled.scala 209:24]
  `else
  assign _T_exceptionFlags__T_18_data = _T_exceptionFlags__T_18_addr >= 3'h5 ? _RAND_11[4:0] : _T_exceptionFlags[_T_exceptionFlags__T_18_addr]; // @[Decoupled.scala 209:24]
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
  assign io_deq_bits_b = _T_b__T_18_data; // @[Decoupled.scala 233:15]
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
  _RAND_0 = {2{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    _T_a[initvar] = _RAND_0[63:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_1 = {2{`RANDOM}};
  _RAND_2 = {2{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    _T_b[initvar] = _RAND_2[63:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_3 = {2{`RANDOM}};
  _RAND_4 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    _T_roundingMode[initvar] = _RAND_4[2:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_5 = {1{`RANDOM}};
  _RAND_6 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    _T_detectTininess[initvar] = _RAND_6[0:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_7 = {1{`RANDOM}};
  _RAND_8 = {2{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    _T_out[initvar] = _RAND_8[63:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_9 = {2{`RANDOM}};
  _RAND_10 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    _T_exceptionFlags[initvar] = _RAND_10[4:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_11 = {1{`RANDOM}};
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  value = _RAND_12[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  value_1 = _RAND_13[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  _T_1 = _RAND_14[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if(_T_a__T_10_en & _T_a__T_10_mask) begin
      _T_a[_T_a__T_10_addr] <= _T_a__T_10_data; // @[Decoupled.scala 209:24]
    end
    if(_T_b__T_10_en & _T_b__T_10_mask) begin
      _T_b[_T_b__T_10_addr] <= _T_b__T_10_data; // @[Decoupled.scala 209:24]
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
module ValExec_DivSqrtRecF64_div(
  input         clock,
  input         reset,
  output        io_input_ready,
  input         io_input_valid,
  input  [63:0] io_input_bits_a,
  input  [63:0] io_input_bits_b,
  input  [2:0]  io_input_bits_roundingMode,
  input         io_input_bits_detectTininess,
  input  [63:0] io_input_bits_out,
  input  [4:0]  io_input_bits_exceptionFlags,
  output [63:0] io_output_a,
  output [63:0] io_output_b,
  output [2:0]  io_output_roundingMode,
  output        io_output_detectTininess,
  output [63:0] io_expected_out,
  output [4:0]  io_expected_exceptionFlags,
  output [64:0] io_expected_recOut,
  output [64:0] io_actual_out,
  output [4:0]  io_actual_exceptionFlags,
  output        io_check,
  output        io_pass
);
  wire  ds_clock; // @[ValExec_DivSqrtRecF64.scala 77:20]
  wire  ds_reset; // @[ValExec_DivSqrtRecF64.scala 77:20]
  wire  ds_io_inReady_div; // @[ValExec_DivSqrtRecF64.scala 77:20]
  wire  ds_io_inValid; // @[ValExec_DivSqrtRecF64.scala 77:20]
  wire [64:0] ds_io_a; // @[ValExec_DivSqrtRecF64.scala 77:20]
  wire [64:0] ds_io_b; // @[ValExec_DivSqrtRecF64.scala 77:20]
  wire [2:0] ds_io_roundingMode; // @[ValExec_DivSqrtRecF64.scala 77:20]
  wire  ds_io_detectTininess; // @[ValExec_DivSqrtRecF64.scala 77:20]
  wire  ds_io_outValid_div; // @[ValExec_DivSqrtRecF64.scala 77:20]
  wire [64:0] ds_io_out; // @[ValExec_DivSqrtRecF64.scala 77:20]
  wire [4:0] ds_io_exceptionFlags; // @[ValExec_DivSqrtRecF64.scala 77:20]
  wire  cq_clock; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire  cq_reset; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire  cq_io_enq_ready; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire  cq_io_enq_valid; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire [63:0] cq_io_enq_bits_a; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire [63:0] cq_io_enq_bits_b; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire [2:0] cq_io_enq_bits_roundingMode; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire  cq_io_enq_bits_detectTininess; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire [63:0] cq_io_enq_bits_out; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire [4:0] cq_io_enq_bits_exceptionFlags; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire  cq_io_deq_ready; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire  cq_io_deq_valid; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire [63:0] cq_io_deq_bits_a; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire [63:0] cq_io_deq_bits_b; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire [2:0] cq_io_deq_bits_roundingMode; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire  cq_io_deq_bits_detectTininess; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire [63:0] cq_io_deq_bits_out; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire [4:0] cq_io_deq_bits_exceptionFlags; // @[ValExec_DivSqrtRecF64.scala 78:20]
  wire  _T_6; // @[rawFloatFromFN.scala 50:34]
  wire  _T_7; // @[rawFloatFromFN.scala 51:38]
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
  wire [5:0] _T_108; // @[Mux.scala 47:69]
  wire [5:0] _T_109; // @[Mux.scala 47:69]
  wire [5:0] _T_110; // @[Mux.scala 47:69]
  wire [114:0] _GEN_0; // @[rawFloatFromFN.scala 54:36]
  wire [114:0] _T_111; // @[rawFloatFromFN.scala 54:36]
  wire [51:0] _T_113; // @[rawFloatFromFN.scala 54:64]
  wire [11:0] _GEN_1; // @[rawFloatFromFN.scala 57:26]
  wire [11:0] _T_114; // @[rawFloatFromFN.scala 57:26]
  wire [11:0] _T_115; // @[rawFloatFromFN.scala 56:16]
  wire [1:0] _T_116; // @[rawFloatFromFN.scala 60:27]
  wire [10:0] _GEN_2; // @[rawFloatFromFN.scala 60:22]
  wire [10:0] _T_117; // @[rawFloatFromFN.scala 60:22]
  wire [11:0] _GEN_3; // @[rawFloatFromFN.scala 59:15]
  wire [11:0] _T_119; // @[rawFloatFromFN.scala 59:15]
  wire  _T_120; // @[rawFloatFromFN.scala 62:34]
  wire  _T_122; // @[rawFloatFromFN.scala 63:62]
  wire  _T_125; // @[rawFloatFromFN.scala 66:33]
  wire [12:0] _T_128; // @[rawFloatFromFN.scala 70:48]
  wire [51:0] _T_130; // @[rawFloatFromFN.scala 72:42]
  wire [53:0] _T_132; // @[Cat.scala 29:58]
  wire [2:0] _T_134; // @[recFNFromFN.scala 48:16]
  wire [2:0] _GEN_4; // @[recFNFromFN.scala 48:79]
  wire [2:0] _T_136; // @[recFNFromFN.scala 48:79]
  wire [60:0] _T_139; // @[Cat.scala 29:58]
  wire [3:0] _T_140; // @[Cat.scala 29:58]
  wire  _T_145; // @[rawFloatFromFN.scala 50:34]
  wire  _T_146; // @[rawFloatFromFN.scala 51:38]
  wire [5:0] _T_199; // @[Mux.scala 47:69]
  wire [5:0] _T_200; // @[Mux.scala 47:69]
  wire [5:0] _T_201; // @[Mux.scala 47:69]
  wire [5:0] _T_202; // @[Mux.scala 47:69]
  wire [5:0] _T_203; // @[Mux.scala 47:69]
  wire [5:0] _T_204; // @[Mux.scala 47:69]
  wire [5:0] _T_205; // @[Mux.scala 47:69]
  wire [5:0] _T_206; // @[Mux.scala 47:69]
  wire [5:0] _T_207; // @[Mux.scala 47:69]
  wire [5:0] _T_208; // @[Mux.scala 47:69]
  wire [5:0] _T_209; // @[Mux.scala 47:69]
  wire [5:0] _T_210; // @[Mux.scala 47:69]
  wire [5:0] _T_211; // @[Mux.scala 47:69]
  wire [5:0] _T_212; // @[Mux.scala 47:69]
  wire [5:0] _T_213; // @[Mux.scala 47:69]
  wire [5:0] _T_214; // @[Mux.scala 47:69]
  wire [5:0] _T_215; // @[Mux.scala 47:69]
  wire [5:0] _T_216; // @[Mux.scala 47:69]
  wire [5:0] _T_217; // @[Mux.scala 47:69]
  wire [5:0] _T_218; // @[Mux.scala 47:69]
  wire [5:0] _T_219; // @[Mux.scala 47:69]
  wire [5:0] _T_220; // @[Mux.scala 47:69]
  wire [5:0] _T_221; // @[Mux.scala 47:69]
  wire [5:0] _T_222; // @[Mux.scala 47:69]
  wire [5:0] _T_223; // @[Mux.scala 47:69]
  wire [5:0] _T_224; // @[Mux.scala 47:69]
  wire [5:0] _T_225; // @[Mux.scala 47:69]
  wire [5:0] _T_226; // @[Mux.scala 47:69]
  wire [5:0] _T_227; // @[Mux.scala 47:69]
  wire [5:0] _T_228; // @[Mux.scala 47:69]
  wire [5:0] _T_229; // @[Mux.scala 47:69]
  wire [5:0] _T_230; // @[Mux.scala 47:69]
  wire [5:0] _T_231; // @[Mux.scala 47:69]
  wire [5:0] _T_232; // @[Mux.scala 47:69]
  wire [5:0] _T_233; // @[Mux.scala 47:69]
  wire [5:0] _T_234; // @[Mux.scala 47:69]
  wire [5:0] _T_235; // @[Mux.scala 47:69]
  wire [5:0] _T_236; // @[Mux.scala 47:69]
  wire [5:0] _T_237; // @[Mux.scala 47:69]
  wire [5:0] _T_238; // @[Mux.scala 47:69]
  wire [5:0] _T_239; // @[Mux.scala 47:69]
  wire [5:0] _T_240; // @[Mux.scala 47:69]
  wire [5:0] _T_241; // @[Mux.scala 47:69]
  wire [5:0] _T_242; // @[Mux.scala 47:69]
  wire [5:0] _T_243; // @[Mux.scala 47:69]
  wire [5:0] _T_244; // @[Mux.scala 47:69]
  wire [5:0] _T_245; // @[Mux.scala 47:69]
  wire [5:0] _T_246; // @[Mux.scala 47:69]
  wire [5:0] _T_247; // @[Mux.scala 47:69]
  wire [5:0] _T_248; // @[Mux.scala 47:69]
  wire [5:0] _T_249; // @[Mux.scala 47:69]
  wire [114:0] _GEN_5; // @[rawFloatFromFN.scala 54:36]
  wire [114:0] _T_250; // @[rawFloatFromFN.scala 54:36]
  wire [51:0] _T_252; // @[rawFloatFromFN.scala 54:64]
  wire [11:0] _GEN_6; // @[rawFloatFromFN.scala 57:26]
  wire [11:0] _T_253; // @[rawFloatFromFN.scala 57:26]
  wire [11:0] _T_254; // @[rawFloatFromFN.scala 56:16]
  wire [1:0] _T_255; // @[rawFloatFromFN.scala 60:27]
  wire [10:0] _GEN_7; // @[rawFloatFromFN.scala 60:22]
  wire [10:0] _T_256; // @[rawFloatFromFN.scala 60:22]
  wire [11:0] _GEN_8; // @[rawFloatFromFN.scala 59:15]
  wire [11:0] _T_258; // @[rawFloatFromFN.scala 59:15]
  wire  _T_259; // @[rawFloatFromFN.scala 62:34]
  wire  _T_261; // @[rawFloatFromFN.scala 63:62]
  wire  _T_264; // @[rawFloatFromFN.scala 66:33]
  wire [12:0] _T_267; // @[rawFloatFromFN.scala 70:48]
  wire [51:0] _T_269; // @[rawFloatFromFN.scala 72:42]
  wire [53:0] _T_271; // @[Cat.scala 29:58]
  wire [2:0] _T_273; // @[recFNFromFN.scala 48:16]
  wire [2:0] _GEN_9; // @[recFNFromFN.scala 48:79]
  wire [2:0] _T_275; // @[recFNFromFN.scala 48:79]
  wire [60:0] _T_278; // @[Cat.scala 29:58]
  wire [3:0] _T_279; // @[Cat.scala 29:58]
  wire  _T_284; // @[rawFloatFromFN.scala 50:34]
  wire  _T_285; // @[rawFloatFromFN.scala 51:38]
  wire [5:0] _T_338; // @[Mux.scala 47:69]
  wire [5:0] _T_339; // @[Mux.scala 47:69]
  wire [5:0] _T_340; // @[Mux.scala 47:69]
  wire [5:0] _T_341; // @[Mux.scala 47:69]
  wire [5:0] _T_342; // @[Mux.scala 47:69]
  wire [5:0] _T_343; // @[Mux.scala 47:69]
  wire [5:0] _T_344; // @[Mux.scala 47:69]
  wire [5:0] _T_345; // @[Mux.scala 47:69]
  wire [5:0] _T_346; // @[Mux.scala 47:69]
  wire [5:0] _T_347; // @[Mux.scala 47:69]
  wire [5:0] _T_348; // @[Mux.scala 47:69]
  wire [5:0] _T_349; // @[Mux.scala 47:69]
  wire [5:0] _T_350; // @[Mux.scala 47:69]
  wire [5:0] _T_351; // @[Mux.scala 47:69]
  wire [5:0] _T_352; // @[Mux.scala 47:69]
  wire [5:0] _T_353; // @[Mux.scala 47:69]
  wire [5:0] _T_354; // @[Mux.scala 47:69]
  wire [5:0] _T_355; // @[Mux.scala 47:69]
  wire [5:0] _T_356; // @[Mux.scala 47:69]
  wire [5:0] _T_357; // @[Mux.scala 47:69]
  wire [5:0] _T_358; // @[Mux.scala 47:69]
  wire [5:0] _T_359; // @[Mux.scala 47:69]
  wire [5:0] _T_360; // @[Mux.scala 47:69]
  wire [5:0] _T_361; // @[Mux.scala 47:69]
  wire [5:0] _T_362; // @[Mux.scala 47:69]
  wire [5:0] _T_363; // @[Mux.scala 47:69]
  wire [5:0] _T_364; // @[Mux.scala 47:69]
  wire [5:0] _T_365; // @[Mux.scala 47:69]
  wire [5:0] _T_366; // @[Mux.scala 47:69]
  wire [5:0] _T_367; // @[Mux.scala 47:69]
  wire [5:0] _T_368; // @[Mux.scala 47:69]
  wire [5:0] _T_369; // @[Mux.scala 47:69]
  wire [5:0] _T_370; // @[Mux.scala 47:69]
  wire [5:0] _T_371; // @[Mux.scala 47:69]
  wire [5:0] _T_372; // @[Mux.scala 47:69]
  wire [5:0] _T_373; // @[Mux.scala 47:69]
  wire [5:0] _T_374; // @[Mux.scala 47:69]
  wire [5:0] _T_375; // @[Mux.scala 47:69]
  wire [5:0] _T_376; // @[Mux.scala 47:69]
  wire [5:0] _T_377; // @[Mux.scala 47:69]
  wire [5:0] _T_378; // @[Mux.scala 47:69]
  wire [5:0] _T_379; // @[Mux.scala 47:69]
  wire [5:0] _T_380; // @[Mux.scala 47:69]
  wire [5:0] _T_381; // @[Mux.scala 47:69]
  wire [5:0] _T_382; // @[Mux.scala 47:69]
  wire [5:0] _T_383; // @[Mux.scala 47:69]
  wire [5:0] _T_384; // @[Mux.scala 47:69]
  wire [5:0] _T_385; // @[Mux.scala 47:69]
  wire [5:0] _T_386; // @[Mux.scala 47:69]
  wire [5:0] _T_387; // @[Mux.scala 47:69]
  wire [5:0] _T_388; // @[Mux.scala 47:69]
  wire [114:0] _GEN_10; // @[rawFloatFromFN.scala 54:36]
  wire [114:0] _T_389; // @[rawFloatFromFN.scala 54:36]
  wire [51:0] _T_391; // @[rawFloatFromFN.scala 54:64]
  wire [11:0] _GEN_11; // @[rawFloatFromFN.scala 57:26]
  wire [11:0] _T_392; // @[rawFloatFromFN.scala 57:26]
  wire [11:0] _T_393; // @[rawFloatFromFN.scala 56:16]
  wire [1:0] _T_394; // @[rawFloatFromFN.scala 60:27]
  wire [10:0] _GEN_12; // @[rawFloatFromFN.scala 60:22]
  wire [10:0] _T_395; // @[rawFloatFromFN.scala 60:22]
  wire [11:0] _GEN_13; // @[rawFloatFromFN.scala 59:15]
  wire [11:0] _T_397; // @[rawFloatFromFN.scala 59:15]
  wire  _T_398; // @[rawFloatFromFN.scala 62:34]
  wire  _T_400; // @[rawFloatFromFN.scala 63:62]
  wire  _T_403; // @[rawFloatFromFN.scala 66:33]
  wire [12:0] _T_406; // @[rawFloatFromFN.scala 70:48]
  wire [51:0] _T_408; // @[rawFloatFromFN.scala 72:42]
  wire [53:0] _T_410; // @[Cat.scala 29:58]
  wire [2:0] _T_412; // @[recFNFromFN.scala 48:16]
  wire [2:0] _GEN_14; // @[recFNFromFN.scala 48:79]
  wire [2:0] _T_414; // @[recFNFromFN.scala 48:79]
  wire [60:0] _T_417; // @[Cat.scala 29:58]
  wire [3:0] _T_418; // @[Cat.scala 29:58]
  wire  _T_423; // @[tests.scala 48:26]
  wire  _T_425; // @[tests.scala 48:55]
  wire  _T_426; // @[tests.scala 48:39]
  wire  _T_427; // @[tests.scala 49:20]
  wire  _T_430; // @[tests.scala 49:54]
  wire  _T_431; // @[tests.scala 49:31]
  wire  _T_433; // @[tests.scala 50:30]
  wire  _T_435; // @[tests.scala 50:66]
  wire  _T_436; // @[tests.scala 50:16]
  wire  _T_437; // @[tests.scala 48:12]
  wire  _T_438; // @[ValExec_DivSqrtRecF64.scala 107:25]
  wire  _T_439; // @[ValExec_DivSqrtRecF64.scala 109:35]
  DivSqrtRecF64 ds ( // @[ValExec_DivSqrtRecF64.scala 77:20]
    .clock(ds_clock),
    .reset(ds_reset),
    .io_inReady_div(ds_io_inReady_div),
    .io_inValid(ds_io_inValid),
    .io_a(ds_io_a),
    .io_b(ds_io_b),
    .io_roundingMode(ds_io_roundingMode),
    .io_detectTininess(ds_io_detectTininess),
    .io_outValid_div(ds_io_outValid_div),
    .io_out(ds_io_out),
    .io_exceptionFlags(ds_io_exceptionFlags)
  );
  QueueCompatibility cq ( // @[ValExec_DivSqrtRecF64.scala 78:20]
    .clock(cq_clock),
    .reset(cq_reset),
    .io_enq_ready(cq_io_enq_ready),
    .io_enq_valid(cq_io_enq_valid),
    .io_enq_bits_a(cq_io_enq_bits_a),
    .io_enq_bits_b(cq_io_enq_bits_b),
    .io_enq_bits_roundingMode(cq_io_enq_bits_roundingMode),
    .io_enq_bits_detectTininess(cq_io_enq_bits_detectTininess),
    .io_enq_bits_out(cq_io_enq_bits_out),
    .io_enq_bits_exceptionFlags(cq_io_enq_bits_exceptionFlags),
    .io_deq_ready(cq_io_deq_ready),
    .io_deq_valid(cq_io_deq_valid),
    .io_deq_bits_a(cq_io_deq_bits_a),
    .io_deq_bits_b(cq_io_deq_bits_b),
    .io_deq_bits_roundingMode(cq_io_deq_bits_roundingMode),
    .io_deq_bits_detectTininess(cq_io_deq_bits_detectTininess),
    .io_deq_bits_out(cq_io_deq_bits_out),
    .io_deq_bits_exceptionFlags(cq_io_deq_bits_exceptionFlags)
  );
  assign _T_6 = io_input_bits_a[62:52] == 11'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_7 = io_input_bits_a[51:0] == 52'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_60 = io_input_bits_a[1] ? 6'h32 : 6'h33; // @[Mux.scala 47:69]
  assign _T_61 = io_input_bits_a[2] ? 6'h31 : _T_60; // @[Mux.scala 47:69]
  assign _T_62 = io_input_bits_a[3] ? 6'h30 : _T_61; // @[Mux.scala 47:69]
  assign _T_63 = io_input_bits_a[4] ? 6'h2f : _T_62; // @[Mux.scala 47:69]
  assign _T_64 = io_input_bits_a[5] ? 6'h2e : _T_63; // @[Mux.scala 47:69]
  assign _T_65 = io_input_bits_a[6] ? 6'h2d : _T_64; // @[Mux.scala 47:69]
  assign _T_66 = io_input_bits_a[7] ? 6'h2c : _T_65; // @[Mux.scala 47:69]
  assign _T_67 = io_input_bits_a[8] ? 6'h2b : _T_66; // @[Mux.scala 47:69]
  assign _T_68 = io_input_bits_a[9] ? 6'h2a : _T_67; // @[Mux.scala 47:69]
  assign _T_69 = io_input_bits_a[10] ? 6'h29 : _T_68; // @[Mux.scala 47:69]
  assign _T_70 = io_input_bits_a[11] ? 6'h28 : _T_69; // @[Mux.scala 47:69]
  assign _T_71 = io_input_bits_a[12] ? 6'h27 : _T_70; // @[Mux.scala 47:69]
  assign _T_72 = io_input_bits_a[13] ? 6'h26 : _T_71; // @[Mux.scala 47:69]
  assign _T_73 = io_input_bits_a[14] ? 6'h25 : _T_72; // @[Mux.scala 47:69]
  assign _T_74 = io_input_bits_a[15] ? 6'h24 : _T_73; // @[Mux.scala 47:69]
  assign _T_75 = io_input_bits_a[16] ? 6'h23 : _T_74; // @[Mux.scala 47:69]
  assign _T_76 = io_input_bits_a[17] ? 6'h22 : _T_75; // @[Mux.scala 47:69]
  assign _T_77 = io_input_bits_a[18] ? 6'h21 : _T_76; // @[Mux.scala 47:69]
  assign _T_78 = io_input_bits_a[19] ? 6'h20 : _T_77; // @[Mux.scala 47:69]
  assign _T_79 = io_input_bits_a[20] ? 6'h1f : _T_78; // @[Mux.scala 47:69]
  assign _T_80 = io_input_bits_a[21] ? 6'h1e : _T_79; // @[Mux.scala 47:69]
  assign _T_81 = io_input_bits_a[22] ? 6'h1d : _T_80; // @[Mux.scala 47:69]
  assign _T_82 = io_input_bits_a[23] ? 6'h1c : _T_81; // @[Mux.scala 47:69]
  assign _T_83 = io_input_bits_a[24] ? 6'h1b : _T_82; // @[Mux.scala 47:69]
  assign _T_84 = io_input_bits_a[25] ? 6'h1a : _T_83; // @[Mux.scala 47:69]
  assign _T_85 = io_input_bits_a[26] ? 6'h19 : _T_84; // @[Mux.scala 47:69]
  assign _T_86 = io_input_bits_a[27] ? 6'h18 : _T_85; // @[Mux.scala 47:69]
  assign _T_87 = io_input_bits_a[28] ? 6'h17 : _T_86; // @[Mux.scala 47:69]
  assign _T_88 = io_input_bits_a[29] ? 6'h16 : _T_87; // @[Mux.scala 47:69]
  assign _T_89 = io_input_bits_a[30] ? 6'h15 : _T_88; // @[Mux.scala 47:69]
  assign _T_90 = io_input_bits_a[31] ? 6'h14 : _T_89; // @[Mux.scala 47:69]
  assign _T_91 = io_input_bits_a[32] ? 6'h13 : _T_90; // @[Mux.scala 47:69]
  assign _T_92 = io_input_bits_a[33] ? 6'h12 : _T_91; // @[Mux.scala 47:69]
  assign _T_93 = io_input_bits_a[34] ? 6'h11 : _T_92; // @[Mux.scala 47:69]
  assign _T_94 = io_input_bits_a[35] ? 6'h10 : _T_93; // @[Mux.scala 47:69]
  assign _T_95 = io_input_bits_a[36] ? 6'hf : _T_94; // @[Mux.scala 47:69]
  assign _T_96 = io_input_bits_a[37] ? 6'he : _T_95; // @[Mux.scala 47:69]
  assign _T_97 = io_input_bits_a[38] ? 6'hd : _T_96; // @[Mux.scala 47:69]
  assign _T_98 = io_input_bits_a[39] ? 6'hc : _T_97; // @[Mux.scala 47:69]
  assign _T_99 = io_input_bits_a[40] ? 6'hb : _T_98; // @[Mux.scala 47:69]
  assign _T_100 = io_input_bits_a[41] ? 6'ha : _T_99; // @[Mux.scala 47:69]
  assign _T_101 = io_input_bits_a[42] ? 6'h9 : _T_100; // @[Mux.scala 47:69]
  assign _T_102 = io_input_bits_a[43] ? 6'h8 : _T_101; // @[Mux.scala 47:69]
  assign _T_103 = io_input_bits_a[44] ? 6'h7 : _T_102; // @[Mux.scala 47:69]
  assign _T_104 = io_input_bits_a[45] ? 6'h6 : _T_103; // @[Mux.scala 47:69]
  assign _T_105 = io_input_bits_a[46] ? 6'h5 : _T_104; // @[Mux.scala 47:69]
  assign _T_106 = io_input_bits_a[47] ? 6'h4 : _T_105; // @[Mux.scala 47:69]
  assign _T_107 = io_input_bits_a[48] ? 6'h3 : _T_106; // @[Mux.scala 47:69]
  assign _T_108 = io_input_bits_a[49] ? 6'h2 : _T_107; // @[Mux.scala 47:69]
  assign _T_109 = io_input_bits_a[50] ? 6'h1 : _T_108; // @[Mux.scala 47:69]
  assign _T_110 = io_input_bits_a[51] ? 6'h0 : _T_109; // @[Mux.scala 47:69]
  assign _GEN_0 = {{63'd0}, io_input_bits_a[51:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_111 = _GEN_0 << _T_110; // @[rawFloatFromFN.scala 54:36]
  assign _T_113 = {_T_111[50:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_1 = {{6'd0}, _T_110}; // @[rawFloatFromFN.scala 57:26]
  assign _T_114 = _GEN_1 ^ 12'hfff; // @[rawFloatFromFN.scala 57:26]
  assign _T_115 = _T_6 ? _T_114 : {{1'd0}, io_input_bits_a[62:52]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_116 = _T_6 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_2 = {{9'd0}, _T_116}; // @[rawFloatFromFN.scala 60:22]
  assign _T_117 = 11'h400 | _GEN_2; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_3 = {{1'd0}, _T_117}; // @[rawFloatFromFN.scala 59:15]
  assign _T_119 = _T_115 + _GEN_3; // @[rawFloatFromFN.scala 59:15]
  assign _T_120 = _T_6 & _T_7; // @[rawFloatFromFN.scala 62:34]
  assign _T_122 = _T_119[11:10] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_125 = _T_122 & ~_T_7; // @[rawFloatFromFN.scala 66:33]
  assign _T_128 = {1'b0,$signed(_T_119)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_130 = _T_6 ? _T_113 : io_input_bits_a[51:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_132 = {1'h0,~_T_120,_T_130}; // @[Cat.scala 29:58]
  assign _T_134 = _T_120 ? 3'h0 : _T_128[11:9]; // @[recFNFromFN.scala 48:16]
  assign _GEN_4 = {{2'd0}, _T_125}; // @[recFNFromFN.scala 48:79]
  assign _T_136 = _T_134 | _GEN_4; // @[recFNFromFN.scala 48:79]
  assign _T_139 = {_T_128[8:0],_T_132[51:0]}; // @[Cat.scala 29:58]
  assign _T_140 = {io_input_bits_a[63],_T_136}; // @[Cat.scala 29:58]
  assign _T_145 = io_input_bits_b[62:52] == 11'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_146 = io_input_bits_b[51:0] == 52'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_199 = io_input_bits_b[1] ? 6'h32 : 6'h33; // @[Mux.scala 47:69]
  assign _T_200 = io_input_bits_b[2] ? 6'h31 : _T_199; // @[Mux.scala 47:69]
  assign _T_201 = io_input_bits_b[3] ? 6'h30 : _T_200; // @[Mux.scala 47:69]
  assign _T_202 = io_input_bits_b[4] ? 6'h2f : _T_201; // @[Mux.scala 47:69]
  assign _T_203 = io_input_bits_b[5] ? 6'h2e : _T_202; // @[Mux.scala 47:69]
  assign _T_204 = io_input_bits_b[6] ? 6'h2d : _T_203; // @[Mux.scala 47:69]
  assign _T_205 = io_input_bits_b[7] ? 6'h2c : _T_204; // @[Mux.scala 47:69]
  assign _T_206 = io_input_bits_b[8] ? 6'h2b : _T_205; // @[Mux.scala 47:69]
  assign _T_207 = io_input_bits_b[9] ? 6'h2a : _T_206; // @[Mux.scala 47:69]
  assign _T_208 = io_input_bits_b[10] ? 6'h29 : _T_207; // @[Mux.scala 47:69]
  assign _T_209 = io_input_bits_b[11] ? 6'h28 : _T_208; // @[Mux.scala 47:69]
  assign _T_210 = io_input_bits_b[12] ? 6'h27 : _T_209; // @[Mux.scala 47:69]
  assign _T_211 = io_input_bits_b[13] ? 6'h26 : _T_210; // @[Mux.scala 47:69]
  assign _T_212 = io_input_bits_b[14] ? 6'h25 : _T_211; // @[Mux.scala 47:69]
  assign _T_213 = io_input_bits_b[15] ? 6'h24 : _T_212; // @[Mux.scala 47:69]
  assign _T_214 = io_input_bits_b[16] ? 6'h23 : _T_213; // @[Mux.scala 47:69]
  assign _T_215 = io_input_bits_b[17] ? 6'h22 : _T_214; // @[Mux.scala 47:69]
  assign _T_216 = io_input_bits_b[18] ? 6'h21 : _T_215; // @[Mux.scala 47:69]
  assign _T_217 = io_input_bits_b[19] ? 6'h20 : _T_216; // @[Mux.scala 47:69]
  assign _T_218 = io_input_bits_b[20] ? 6'h1f : _T_217; // @[Mux.scala 47:69]
  assign _T_219 = io_input_bits_b[21] ? 6'h1e : _T_218; // @[Mux.scala 47:69]
  assign _T_220 = io_input_bits_b[22] ? 6'h1d : _T_219; // @[Mux.scala 47:69]
  assign _T_221 = io_input_bits_b[23] ? 6'h1c : _T_220; // @[Mux.scala 47:69]
  assign _T_222 = io_input_bits_b[24] ? 6'h1b : _T_221; // @[Mux.scala 47:69]
  assign _T_223 = io_input_bits_b[25] ? 6'h1a : _T_222; // @[Mux.scala 47:69]
  assign _T_224 = io_input_bits_b[26] ? 6'h19 : _T_223; // @[Mux.scala 47:69]
  assign _T_225 = io_input_bits_b[27] ? 6'h18 : _T_224; // @[Mux.scala 47:69]
  assign _T_226 = io_input_bits_b[28] ? 6'h17 : _T_225; // @[Mux.scala 47:69]
  assign _T_227 = io_input_bits_b[29] ? 6'h16 : _T_226; // @[Mux.scala 47:69]
  assign _T_228 = io_input_bits_b[30] ? 6'h15 : _T_227; // @[Mux.scala 47:69]
  assign _T_229 = io_input_bits_b[31] ? 6'h14 : _T_228; // @[Mux.scala 47:69]
  assign _T_230 = io_input_bits_b[32] ? 6'h13 : _T_229; // @[Mux.scala 47:69]
  assign _T_231 = io_input_bits_b[33] ? 6'h12 : _T_230; // @[Mux.scala 47:69]
  assign _T_232 = io_input_bits_b[34] ? 6'h11 : _T_231; // @[Mux.scala 47:69]
  assign _T_233 = io_input_bits_b[35] ? 6'h10 : _T_232; // @[Mux.scala 47:69]
  assign _T_234 = io_input_bits_b[36] ? 6'hf : _T_233; // @[Mux.scala 47:69]
  assign _T_235 = io_input_bits_b[37] ? 6'he : _T_234; // @[Mux.scala 47:69]
  assign _T_236 = io_input_bits_b[38] ? 6'hd : _T_235; // @[Mux.scala 47:69]
  assign _T_237 = io_input_bits_b[39] ? 6'hc : _T_236; // @[Mux.scala 47:69]
  assign _T_238 = io_input_bits_b[40] ? 6'hb : _T_237; // @[Mux.scala 47:69]
  assign _T_239 = io_input_bits_b[41] ? 6'ha : _T_238; // @[Mux.scala 47:69]
  assign _T_240 = io_input_bits_b[42] ? 6'h9 : _T_239; // @[Mux.scala 47:69]
  assign _T_241 = io_input_bits_b[43] ? 6'h8 : _T_240; // @[Mux.scala 47:69]
  assign _T_242 = io_input_bits_b[44] ? 6'h7 : _T_241; // @[Mux.scala 47:69]
  assign _T_243 = io_input_bits_b[45] ? 6'h6 : _T_242; // @[Mux.scala 47:69]
  assign _T_244 = io_input_bits_b[46] ? 6'h5 : _T_243; // @[Mux.scala 47:69]
  assign _T_245 = io_input_bits_b[47] ? 6'h4 : _T_244; // @[Mux.scala 47:69]
  assign _T_246 = io_input_bits_b[48] ? 6'h3 : _T_245; // @[Mux.scala 47:69]
  assign _T_247 = io_input_bits_b[49] ? 6'h2 : _T_246; // @[Mux.scala 47:69]
  assign _T_248 = io_input_bits_b[50] ? 6'h1 : _T_247; // @[Mux.scala 47:69]
  assign _T_249 = io_input_bits_b[51] ? 6'h0 : _T_248; // @[Mux.scala 47:69]
  assign _GEN_5 = {{63'd0}, io_input_bits_b[51:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_250 = _GEN_5 << _T_249; // @[rawFloatFromFN.scala 54:36]
  assign _T_252 = {_T_250[50:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_6 = {{6'd0}, _T_249}; // @[rawFloatFromFN.scala 57:26]
  assign _T_253 = _GEN_6 ^ 12'hfff; // @[rawFloatFromFN.scala 57:26]
  assign _T_254 = _T_145 ? _T_253 : {{1'd0}, io_input_bits_b[62:52]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_255 = _T_145 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_7 = {{9'd0}, _T_255}; // @[rawFloatFromFN.scala 60:22]
  assign _T_256 = 11'h400 | _GEN_7; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_8 = {{1'd0}, _T_256}; // @[rawFloatFromFN.scala 59:15]
  assign _T_258 = _T_254 + _GEN_8; // @[rawFloatFromFN.scala 59:15]
  assign _T_259 = _T_145 & _T_146; // @[rawFloatFromFN.scala 62:34]
  assign _T_261 = _T_258[11:10] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_264 = _T_261 & ~_T_146; // @[rawFloatFromFN.scala 66:33]
  assign _T_267 = {1'b0,$signed(_T_258)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_269 = _T_145 ? _T_252 : io_input_bits_b[51:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_271 = {1'h0,~_T_259,_T_269}; // @[Cat.scala 29:58]
  assign _T_273 = _T_259 ? 3'h0 : _T_267[11:9]; // @[recFNFromFN.scala 48:16]
  assign _GEN_9 = {{2'd0}, _T_264}; // @[recFNFromFN.scala 48:79]
  assign _T_275 = _T_273 | _GEN_9; // @[recFNFromFN.scala 48:79]
  assign _T_278 = {_T_267[8:0],_T_271[51:0]}; // @[Cat.scala 29:58]
  assign _T_279 = {io_input_bits_b[63],_T_275}; // @[Cat.scala 29:58]
  assign _T_284 = cq_io_deq_bits_out[62:52] == 11'h0; // @[rawFloatFromFN.scala 50:34]
  assign _T_285 = cq_io_deq_bits_out[51:0] == 52'h0; // @[rawFloatFromFN.scala 51:38]
  assign _T_338 = cq_io_deq_bits_out[1] ? 6'h32 : 6'h33; // @[Mux.scala 47:69]
  assign _T_339 = cq_io_deq_bits_out[2] ? 6'h31 : _T_338; // @[Mux.scala 47:69]
  assign _T_340 = cq_io_deq_bits_out[3] ? 6'h30 : _T_339; // @[Mux.scala 47:69]
  assign _T_341 = cq_io_deq_bits_out[4] ? 6'h2f : _T_340; // @[Mux.scala 47:69]
  assign _T_342 = cq_io_deq_bits_out[5] ? 6'h2e : _T_341; // @[Mux.scala 47:69]
  assign _T_343 = cq_io_deq_bits_out[6] ? 6'h2d : _T_342; // @[Mux.scala 47:69]
  assign _T_344 = cq_io_deq_bits_out[7] ? 6'h2c : _T_343; // @[Mux.scala 47:69]
  assign _T_345 = cq_io_deq_bits_out[8] ? 6'h2b : _T_344; // @[Mux.scala 47:69]
  assign _T_346 = cq_io_deq_bits_out[9] ? 6'h2a : _T_345; // @[Mux.scala 47:69]
  assign _T_347 = cq_io_deq_bits_out[10] ? 6'h29 : _T_346; // @[Mux.scala 47:69]
  assign _T_348 = cq_io_deq_bits_out[11] ? 6'h28 : _T_347; // @[Mux.scala 47:69]
  assign _T_349 = cq_io_deq_bits_out[12] ? 6'h27 : _T_348; // @[Mux.scala 47:69]
  assign _T_350 = cq_io_deq_bits_out[13] ? 6'h26 : _T_349; // @[Mux.scala 47:69]
  assign _T_351 = cq_io_deq_bits_out[14] ? 6'h25 : _T_350; // @[Mux.scala 47:69]
  assign _T_352 = cq_io_deq_bits_out[15] ? 6'h24 : _T_351; // @[Mux.scala 47:69]
  assign _T_353 = cq_io_deq_bits_out[16] ? 6'h23 : _T_352; // @[Mux.scala 47:69]
  assign _T_354 = cq_io_deq_bits_out[17] ? 6'h22 : _T_353; // @[Mux.scala 47:69]
  assign _T_355 = cq_io_deq_bits_out[18] ? 6'h21 : _T_354; // @[Mux.scala 47:69]
  assign _T_356 = cq_io_deq_bits_out[19] ? 6'h20 : _T_355; // @[Mux.scala 47:69]
  assign _T_357 = cq_io_deq_bits_out[20] ? 6'h1f : _T_356; // @[Mux.scala 47:69]
  assign _T_358 = cq_io_deq_bits_out[21] ? 6'h1e : _T_357; // @[Mux.scala 47:69]
  assign _T_359 = cq_io_deq_bits_out[22] ? 6'h1d : _T_358; // @[Mux.scala 47:69]
  assign _T_360 = cq_io_deq_bits_out[23] ? 6'h1c : _T_359; // @[Mux.scala 47:69]
  assign _T_361 = cq_io_deq_bits_out[24] ? 6'h1b : _T_360; // @[Mux.scala 47:69]
  assign _T_362 = cq_io_deq_bits_out[25] ? 6'h1a : _T_361; // @[Mux.scala 47:69]
  assign _T_363 = cq_io_deq_bits_out[26] ? 6'h19 : _T_362; // @[Mux.scala 47:69]
  assign _T_364 = cq_io_deq_bits_out[27] ? 6'h18 : _T_363; // @[Mux.scala 47:69]
  assign _T_365 = cq_io_deq_bits_out[28] ? 6'h17 : _T_364; // @[Mux.scala 47:69]
  assign _T_366 = cq_io_deq_bits_out[29] ? 6'h16 : _T_365; // @[Mux.scala 47:69]
  assign _T_367 = cq_io_deq_bits_out[30] ? 6'h15 : _T_366; // @[Mux.scala 47:69]
  assign _T_368 = cq_io_deq_bits_out[31] ? 6'h14 : _T_367; // @[Mux.scala 47:69]
  assign _T_369 = cq_io_deq_bits_out[32] ? 6'h13 : _T_368; // @[Mux.scala 47:69]
  assign _T_370 = cq_io_deq_bits_out[33] ? 6'h12 : _T_369; // @[Mux.scala 47:69]
  assign _T_371 = cq_io_deq_bits_out[34] ? 6'h11 : _T_370; // @[Mux.scala 47:69]
  assign _T_372 = cq_io_deq_bits_out[35] ? 6'h10 : _T_371; // @[Mux.scala 47:69]
  assign _T_373 = cq_io_deq_bits_out[36] ? 6'hf : _T_372; // @[Mux.scala 47:69]
  assign _T_374 = cq_io_deq_bits_out[37] ? 6'he : _T_373; // @[Mux.scala 47:69]
  assign _T_375 = cq_io_deq_bits_out[38] ? 6'hd : _T_374; // @[Mux.scala 47:69]
  assign _T_376 = cq_io_deq_bits_out[39] ? 6'hc : _T_375; // @[Mux.scala 47:69]
  assign _T_377 = cq_io_deq_bits_out[40] ? 6'hb : _T_376; // @[Mux.scala 47:69]
  assign _T_378 = cq_io_deq_bits_out[41] ? 6'ha : _T_377; // @[Mux.scala 47:69]
  assign _T_379 = cq_io_deq_bits_out[42] ? 6'h9 : _T_378; // @[Mux.scala 47:69]
  assign _T_380 = cq_io_deq_bits_out[43] ? 6'h8 : _T_379; // @[Mux.scala 47:69]
  assign _T_381 = cq_io_deq_bits_out[44] ? 6'h7 : _T_380; // @[Mux.scala 47:69]
  assign _T_382 = cq_io_deq_bits_out[45] ? 6'h6 : _T_381; // @[Mux.scala 47:69]
  assign _T_383 = cq_io_deq_bits_out[46] ? 6'h5 : _T_382; // @[Mux.scala 47:69]
  assign _T_384 = cq_io_deq_bits_out[47] ? 6'h4 : _T_383; // @[Mux.scala 47:69]
  assign _T_385 = cq_io_deq_bits_out[48] ? 6'h3 : _T_384; // @[Mux.scala 47:69]
  assign _T_386 = cq_io_deq_bits_out[49] ? 6'h2 : _T_385; // @[Mux.scala 47:69]
  assign _T_387 = cq_io_deq_bits_out[50] ? 6'h1 : _T_386; // @[Mux.scala 47:69]
  assign _T_388 = cq_io_deq_bits_out[51] ? 6'h0 : _T_387; // @[Mux.scala 47:69]
  assign _GEN_10 = {{63'd0}, cq_io_deq_bits_out[51:0]}; // @[rawFloatFromFN.scala 54:36]
  assign _T_389 = _GEN_10 << _T_388; // @[rawFloatFromFN.scala 54:36]
  assign _T_391 = {_T_389[50:0], 1'h0}; // @[rawFloatFromFN.scala 54:64]
  assign _GEN_11 = {{6'd0}, _T_388}; // @[rawFloatFromFN.scala 57:26]
  assign _T_392 = _GEN_11 ^ 12'hfff; // @[rawFloatFromFN.scala 57:26]
  assign _T_393 = _T_284 ? _T_392 : {{1'd0}, cq_io_deq_bits_out[62:52]}; // @[rawFloatFromFN.scala 56:16]
  assign _T_394 = _T_284 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 60:27]
  assign _GEN_12 = {{9'd0}, _T_394}; // @[rawFloatFromFN.scala 60:22]
  assign _T_395 = 11'h400 | _GEN_12; // @[rawFloatFromFN.scala 60:22]
  assign _GEN_13 = {{1'd0}, _T_395}; // @[rawFloatFromFN.scala 59:15]
  assign _T_397 = _T_393 + _GEN_13; // @[rawFloatFromFN.scala 59:15]
  assign _T_398 = _T_284 & _T_285; // @[rawFloatFromFN.scala 62:34]
  assign _T_400 = _T_397[11:10] == 2'h3; // @[rawFloatFromFN.scala 63:62]
  assign _T_403 = _T_400 & ~_T_285; // @[rawFloatFromFN.scala 66:33]
  assign _T_406 = {1'b0,$signed(_T_397)}; // @[rawFloatFromFN.scala 70:48]
  assign _T_408 = _T_284 ? _T_391 : cq_io_deq_bits_out[51:0]; // @[rawFloatFromFN.scala 72:42]
  assign _T_410 = {1'h0,~_T_398,_T_408}; // @[Cat.scala 29:58]
  assign _T_412 = _T_398 ? 3'h0 : _T_406[11:9]; // @[recFNFromFN.scala 48:16]
  assign _GEN_14 = {{2'd0}, _T_403}; // @[recFNFromFN.scala 48:79]
  assign _T_414 = _T_412 | _GEN_14; // @[recFNFromFN.scala 48:79]
  assign _T_417 = {_T_406[8:0],_T_410[51:0]}; // @[Cat.scala 29:58]
  assign _T_418 = {cq_io_deq_bits_out[63],_T_414}; // @[Cat.scala 29:58]
  assign _T_423 = io_actual_out[63:61] == 3'h0; // @[tests.scala 48:26]
  assign _T_425 = io_actual_out[63:61] == 3'h7; // @[tests.scala 48:55]
  assign _T_426 = _T_423 | _T_425; // @[tests.scala 48:39]
  assign _T_427 = io_actual_out[64:61] == io_expected_recOut[64:61]; // @[tests.scala 49:20]
  assign _T_430 = io_actual_out[51:0] == io_expected_recOut[51:0]; // @[tests.scala 49:54]
  assign _T_431 = _T_427 & _T_430; // @[tests.scala 49:31]
  assign _T_433 = io_actual_out[63:61] == 3'h6; // @[tests.scala 50:30]
  assign _T_435 = io_actual_out == io_expected_recOut; // @[tests.scala 50:66]
  assign _T_436 = _T_433 ? _T_427 : _T_435; // @[tests.scala 50:16]
  assign _T_437 = _T_426 ? _T_431 : _T_436; // @[tests.scala 48:12]
  assign _T_438 = cq_io_deq_valid & _T_437; // @[ValExec_DivSqrtRecF64.scala 107:25]
  assign _T_439 = io_actual_exceptionFlags == io_expected_exceptionFlags; // @[ValExec_DivSqrtRecF64.scala 109:35]
  assign io_input_ready = ds_io_inReady_div & cq_io_enq_ready; // @[ValExec_DivSqrtRecF64.scala 83:20]
  assign io_output_a = cq_io_deq_bits_a; // @[ValExec_DivSqrtRecF64.scala 91:17]
  assign io_output_b = cq_io_deq_bits_b; // @[ValExec_DivSqrtRecF64.scala 92:17]
  assign io_output_roundingMode = cq_io_deq_bits_roundingMode; // @[ValExec_DivSqrtRecF64.scala 93:30]
  assign io_output_detectTininess = cq_io_deq_bits_detectTininess; // @[ValExec_DivSqrtRecF64.scala 94:30]
  assign io_expected_out = cq_io_deq_bits_out; // @[ValExec_DivSqrtRecF64.scala 96:21]
  assign io_expected_exceptionFlags = cq_io_deq_bits_exceptionFlags; // @[ValExec_DivSqrtRecF64.scala 97:32]
  assign io_expected_recOut = {_T_418,_T_417}; // @[ValExec_DivSqrtRecF64.scala 98:24]
  assign io_actual_out = ds_io_out; // @[ValExec_DivSqrtRecF64.scala 100:19]
  assign io_actual_exceptionFlags = ds_io_exceptionFlags; // @[ValExec_DivSqrtRecF64.scala 101:30]
  assign io_check = ds_io_outValid_div; // @[ValExec_DivSqrtRecF64.scala 105:14]
  assign io_pass = _T_438 & _T_439; // @[ValExec_DivSqrtRecF64.scala 106:13]
  assign ds_clock = clock;
  assign ds_reset = reset;
  assign ds_io_inValid = io_input_valid & cq_io_enq_ready; // @[ValExec_DivSqrtRecF64.scala 84:19]
  assign ds_io_a = {_T_140,_T_139}; // @[ValExec_DivSqrtRecF64.scala 86:13]
  assign ds_io_b = {_T_279,_T_278}; // @[ValExec_DivSqrtRecF64.scala 87:13]
  assign ds_io_roundingMode = io_input_bits_roundingMode; // @[ValExec_DivSqrtRecF64.scala 88:26]
  assign ds_io_detectTininess = io_input_bits_detectTininess; // @[ValExec_DivSqrtRecF64.scala 89:26]
  assign cq_clock = clock;
  assign cq_reset = reset;
  assign cq_io_enq_valid = io_input_valid & ds_io_inReady_div; // @[ValExec_DivSqrtRecF64.scala 80:21]
  assign cq_io_enq_bits_a = io_input_bits_a; // @[ValExec_DivSqrtRecF64.scala 81:20]
  assign cq_io_enq_bits_b = io_input_bits_b; // @[ValExec_DivSqrtRecF64.scala 81:20]
  assign cq_io_enq_bits_roundingMode = io_input_bits_roundingMode; // @[ValExec_DivSqrtRecF64.scala 81:20]
  assign cq_io_enq_bits_detectTininess = io_input_bits_detectTininess; // @[ValExec_DivSqrtRecF64.scala 81:20]
  assign cq_io_enq_bits_out = io_input_bits_out; // @[ValExec_DivSqrtRecF64.scala 81:20]
  assign cq_io_enq_bits_exceptionFlags = io_input_bits_exceptionFlags; // @[ValExec_DivSqrtRecF64.scala 81:20]
  assign cq_io_deq_ready = ds_io_outValid_div; // @[ValExec_DivSqrtRecF64.scala 103:21]
endmodule
