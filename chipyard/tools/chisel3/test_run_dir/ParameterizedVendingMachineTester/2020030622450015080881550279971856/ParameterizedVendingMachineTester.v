module VendingMachineGenerator(
  input   clock,
  input   reset,
  input   io_inputs_0,
  output  io_dispense
);
  reg [2:0] value; // @[VendingMachineGenerator.scala 56:22]
  reg [31:0] _RAND_0;
  wire  doDispense; // @[VendingMachineGenerator.scala 58:26]
  wire [2:0] incValue; // @[VendingMachineGenerator.scala 67:29]
  wire [2:0] _T_1; // @[VendingMachineGenerator.scala 63:20]
  assign doDispense = value >= 3'h6; // @[VendingMachineGenerator.scala 58:26]
  assign incValue = io_inputs_0 ? 3'h1 : 3'h0; // @[VendingMachineGenerator.scala 67:29]
  assign _T_1 = value + incValue; // @[VendingMachineGenerator.scala 63:20]
  assign io_dispense = value >= 3'h6; // @[VendingMachineGenerator.scala 69:15]
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
  value = _RAND_0[2:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 3'h0;
    end else begin
      if (doDispense) begin
        value <= 3'h0;
      end else begin
        value <= _T_1;
      end
    end
  end
endmodule
module ParameterizedVendingMachineTester(
  input   clock,
  input   reset
);
  wire  dut_clock; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_reset; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_io_inputs_0; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_io_dispense; // @[VendingMachineGenerator.scala 78:19]
  reg [6:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  done; // @[Counter.scala 37:24]
  wire [6:0] _T_2; // @[Counter.scala 38:22]
  wire  _T_4; // @[VendingMachineGenerator.scala 94:21]
  wire  _GEN_3; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_202; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_4; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_203; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_5; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_204; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_6; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_205; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_7; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_8; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_9; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_206; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_10; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_207; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_11; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_208; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_12; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_209; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_13; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_14; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_15; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_210; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_16; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_211; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_17; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_18; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_212; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_19; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_20; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_213; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_21; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_22; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_23; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_24; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_25; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_214; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_26; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_215; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_27; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_216; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_28; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_29; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_217; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_30; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_31; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_218; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_32; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_219; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_33; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_34; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_220; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_35; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_36; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_37; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_221; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_38; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_222; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_39; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_40; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_223; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_41; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_224; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_42; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_43; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_225; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_44; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_45; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_46; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_47; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_48; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_49; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_226; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_50; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_51; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_227; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_52; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_53; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_54; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_228; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_55; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_229; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_56; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_57; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_58; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_59; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_60; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_230; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_61; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_62; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_231; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_63; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_64; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_232; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_65; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_66; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_233; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_67; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_68; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_234; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_69; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_70; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_71; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_72; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_235; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_73; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_236; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_74; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_237; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_75; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_238; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_76; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_77; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_239; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_78; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_240; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_79; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_241; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_80; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_81; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_82; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_83; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_84; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_85; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_242; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_86; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_243; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_87; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_88; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_244; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_89; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_90; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_245; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_91; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_246; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_92; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_93; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_94; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_247; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_95; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_96; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_248; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_97; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_98; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_249; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_99; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_250; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_100; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_251; // @[VendingMachineGenerator.scala 96:34]
  wire  _GEN_112; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_113; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_114; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_115; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_116; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_117; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_118; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_119; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_120; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_121; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_252; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_122; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_123; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_124; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_125; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_126; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_127; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_128; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_129; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_130; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_131; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_132; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_133; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_253; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_134; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_135; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_136; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_137; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_138; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_139; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_140; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_141; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_142; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_143; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_144; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_254; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_145; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_146; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_147; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_148; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_149; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_150; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_151; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_152; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_153; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_154; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_155; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_156; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_157; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_158; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_159; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_160; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_161; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_162; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_163; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_255; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_164; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_165; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_166; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_167; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_168; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_169; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_170; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_171; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_172; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_173; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_174; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_175; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_176; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_177; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_178; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_179; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_180; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_181; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_182; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_183; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_184; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_185; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_186; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_187; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_188; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_189; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_257; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_190; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_191; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_192; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_193; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_194; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_195; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_196; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_197; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_198; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_199; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_200; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_201; // @[VendingMachineGenerator.scala 97:26]
  wire  _T_8; // @[VendingMachineGenerator.scala 97:26]
  wire  _T_10; // @[VendingMachineGenerator.scala 97:9]
  wire  _T_11; // @[VendingMachineGenerator.scala 97:9]
  VendingMachineGenerator dut ( // @[VendingMachineGenerator.scala 78:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_inputs_0(dut_io_inputs_0),
    .io_dispense(dut_io_dispense)
  );
  assign done = value == 7'h64; // @[Counter.scala 37:24]
  assign _T_2 = value + 7'h1; // @[Counter.scala 38:22]
  assign _T_4 = reset == 1'h0; // @[VendingMachineGenerator.scala 94:21]
  assign _GEN_3 = 7'h1 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_202 = 7'h2 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_4 = _GEN_202 | _GEN_3; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_203 = 7'h3 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_5 = _GEN_203 | _GEN_4; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_204 = 7'h4 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_6 = _GEN_204 | _GEN_5; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_205 = 7'h5 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_7 = _GEN_205 | _GEN_6; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_8 = 7'h6 == value ? 1'h0 : _GEN_7; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_9 = 7'h7 == value ? 1'h0 : _GEN_8; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_206 = 7'h8 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_10 = _GEN_206 | _GEN_9; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_207 = 7'h9 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_11 = _GEN_207 | _GEN_10; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_208 = 7'ha == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_12 = _GEN_208 | _GEN_11; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_209 = 7'hb == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_13 = _GEN_209 | _GEN_12; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_14 = 7'hc == value ? 1'h0 : _GEN_13; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_15 = 7'hd == value ? 1'h0 : _GEN_14; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_210 = 7'he == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_16 = _GEN_210 | _GEN_15; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_211 = 7'hf == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_17 = _GEN_211 | _GEN_16; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_18 = 7'h10 == value ? 1'h0 : _GEN_17; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_212 = 7'h11 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_19 = _GEN_212 | _GEN_18; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_20 = 7'h12 == value ? 1'h0 : _GEN_19; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_213 = 7'h13 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_21 = _GEN_213 | _GEN_20; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_22 = 7'h14 == value ? 1'h0 : _GEN_21; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_23 = 7'h15 == value ? 1'h0 : _GEN_22; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_24 = 7'h16 == value ? 1'h0 : _GEN_23; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_25 = 7'h17 == value ? 1'h0 : _GEN_24; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_214 = 7'h18 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_26 = _GEN_214 | _GEN_25; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_215 = 7'h19 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_27 = _GEN_215 | _GEN_26; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_216 = 7'h1a == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_28 = _GEN_216 | _GEN_27; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_29 = 7'h1b == value ? 1'h0 : _GEN_28; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_217 = 7'h1c == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_30 = _GEN_217 | _GEN_29; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_31 = 7'h1d == value ? 1'h0 : _GEN_30; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_218 = 7'h1e == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_32 = _GEN_218 | _GEN_31; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_219 = 7'h1f == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_33 = _GEN_219 | _GEN_32; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_34 = 7'h20 == value ? 1'h0 : _GEN_33; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_220 = 7'h21 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_35 = _GEN_220 | _GEN_34; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_36 = 7'h22 == value ? 1'h0 : _GEN_35; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_37 = 7'h23 == value ? 1'h0 : _GEN_36; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_221 = 7'h24 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_38 = _GEN_221 | _GEN_37; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_222 = 7'h25 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_39 = _GEN_222 | _GEN_38; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_40 = 7'h26 == value ? 1'h0 : _GEN_39; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_223 = 7'h27 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_41 = _GEN_223 | _GEN_40; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_224 = 7'h28 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_42 = _GEN_224 | _GEN_41; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_43 = 7'h29 == value ? 1'h0 : _GEN_42; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_225 = 7'h2a == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_44 = _GEN_225 | _GEN_43; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_45 = 7'h2b == value ? 1'h0 : _GEN_44; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_46 = 7'h2c == value ? 1'h0 : _GEN_45; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_47 = 7'h2d == value ? 1'h0 : _GEN_46; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_48 = 7'h2e == value ? 1'h0 : _GEN_47; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_49 = 7'h2f == value ? 1'h0 : _GEN_48; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_226 = 7'h30 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_50 = _GEN_226 | _GEN_49; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_51 = 7'h31 == value ? 1'h0 : _GEN_50; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_227 = 7'h32 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_52 = _GEN_227 | _GEN_51; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_53 = 7'h33 == value ? 1'h0 : _GEN_52; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_54 = 7'h34 == value ? 1'h0 : _GEN_53; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_228 = 7'h35 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_55 = _GEN_228 | _GEN_54; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_229 = 7'h36 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_56 = _GEN_229 | _GEN_55; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_57 = 7'h37 == value ? 1'h0 : _GEN_56; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_58 = 7'h38 == value ? 1'h0 : _GEN_57; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_59 = 7'h39 == value ? 1'h0 : _GEN_58; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_60 = 7'h3a == value ? 1'h0 : _GEN_59; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_230 = 7'h3b == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_61 = _GEN_230 | _GEN_60; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_62 = 7'h3c == value ? 1'h0 : _GEN_61; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_231 = 7'h3d == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_63 = _GEN_231 | _GEN_62; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_64 = 7'h3e == value ? 1'h0 : _GEN_63; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_232 = 7'h3f == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_65 = _GEN_232 | _GEN_64; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_66 = 7'h40 == value ? 1'h0 : _GEN_65; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_233 = 7'h41 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_67 = _GEN_233 | _GEN_66; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_68 = 7'h42 == value ? 1'h0 : _GEN_67; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_234 = 7'h43 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_69 = _GEN_234 | _GEN_68; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_70 = 7'h44 == value ? 1'h0 : _GEN_69; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_71 = 7'h45 == value ? 1'h0 : _GEN_70; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_72 = 7'h46 == value ? 1'h0 : _GEN_71; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_235 = 7'h47 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_73 = _GEN_235 | _GEN_72; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_236 = 7'h48 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_74 = _GEN_236 | _GEN_73; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_237 = 7'h49 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_75 = _GEN_237 | _GEN_74; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_238 = 7'h4a == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_76 = _GEN_238 | _GEN_75; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_77 = 7'h4b == value ? 1'h0 : _GEN_76; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_239 = 7'h4c == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_78 = _GEN_239 | _GEN_77; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_240 = 7'h4d == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_79 = _GEN_240 | _GEN_78; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_241 = 7'h4e == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_80 = _GEN_241 | _GEN_79; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_81 = 7'h4f == value ? 1'h0 : _GEN_80; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_82 = 7'h50 == value ? 1'h0 : _GEN_81; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_83 = 7'h51 == value ? 1'h0 : _GEN_82; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_84 = 7'h52 == value ? 1'h0 : _GEN_83; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_85 = 7'h53 == value ? 1'h0 : _GEN_84; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_242 = 7'h54 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_86 = _GEN_242 | _GEN_85; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_243 = 7'h55 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_87 = _GEN_243 | _GEN_86; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_88 = 7'h56 == value ? 1'h0 : _GEN_87; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_244 = 7'h57 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_89 = _GEN_244 | _GEN_88; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_90 = 7'h58 == value ? 1'h0 : _GEN_89; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_245 = 7'h59 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_91 = _GEN_245 | _GEN_90; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_246 = 7'h5a == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_92 = _GEN_246 | _GEN_91; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_93 = 7'h5b == value ? 1'h0 : _GEN_92; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_94 = 7'h5c == value ? 1'h0 : _GEN_93; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_247 = 7'h5d == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_95 = _GEN_247 | _GEN_94; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_96 = 7'h5e == value ? 1'h0 : _GEN_95; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_248 = 7'h5f == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_97 = _GEN_248 | _GEN_96; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_98 = 7'h60 == value ? 1'h0 : _GEN_97; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_249 = 7'h61 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_99 = _GEN_249 | _GEN_98; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_250 = 7'h62 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_100 = _GEN_250 | _GEN_99; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_251 = 7'h63 == value; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_112 = 7'ha == value ? 1'h0 : _GEN_207; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_113 = 7'hb == value ? 1'h0 : _GEN_112; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_114 = 7'hc == value ? 1'h0 : _GEN_113; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_115 = 7'hd == value ? 1'h0 : _GEN_114; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_116 = 7'he == value ? 1'h0 : _GEN_115; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_117 = 7'hf == value ? 1'h0 : _GEN_116; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_118 = 7'h10 == value ? 1'h0 : _GEN_117; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_119 = 7'h11 == value ? 1'h0 : _GEN_118; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_120 = 7'h12 == value ? 1'h0 : _GEN_119; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_121 = 7'h13 == value ? 1'h0 : _GEN_120; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_252 = 7'h14 == value; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_122 = _GEN_252 | _GEN_121; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_123 = 7'h15 == value ? 1'h0 : _GEN_122; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_124 = 7'h16 == value ? 1'h0 : _GEN_123; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_125 = 7'h17 == value ? 1'h0 : _GEN_124; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_126 = 7'h18 == value ? 1'h0 : _GEN_125; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_127 = 7'h19 == value ? 1'h0 : _GEN_126; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_128 = 7'h1a == value ? 1'h0 : _GEN_127; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_129 = 7'h1b == value ? 1'h0 : _GEN_128; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_130 = 7'h1c == value ? 1'h0 : _GEN_129; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_131 = 7'h1d == value ? 1'h0 : _GEN_130; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_132 = 7'h1e == value ? 1'h0 : _GEN_131; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_133 = 7'h1f == value ? 1'h0 : _GEN_132; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_253 = 7'h20 == value; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_134 = _GEN_253 | _GEN_133; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_135 = 7'h21 == value ? 1'h0 : _GEN_134; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_136 = 7'h22 == value ? 1'h0 : _GEN_135; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_137 = 7'h23 == value ? 1'h0 : _GEN_136; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_138 = 7'h24 == value ? 1'h0 : _GEN_137; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_139 = 7'h25 == value ? 1'h0 : _GEN_138; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_140 = 7'h26 == value ? 1'h0 : _GEN_139; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_141 = 7'h27 == value ? 1'h0 : _GEN_140; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_142 = 7'h28 == value ? 1'h0 : _GEN_141; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_143 = 7'h29 == value ? 1'h0 : _GEN_142; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_144 = 7'h2a == value ? 1'h0 : _GEN_143; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_254 = 7'h2b == value; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_145 = _GEN_254 | _GEN_144; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_146 = 7'h2c == value ? 1'h0 : _GEN_145; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_147 = 7'h2d == value ? 1'h0 : _GEN_146; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_148 = 7'h2e == value ? 1'h0 : _GEN_147; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_149 = 7'h2f == value ? 1'h0 : _GEN_148; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_150 = 7'h30 == value ? 1'h0 : _GEN_149; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_151 = 7'h31 == value ? 1'h0 : _GEN_150; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_152 = 7'h32 == value ? 1'h0 : _GEN_151; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_153 = 7'h33 == value ? 1'h0 : _GEN_152; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_154 = 7'h34 == value ? 1'h0 : _GEN_153; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_155 = 7'h35 == value ? 1'h0 : _GEN_154; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_156 = 7'h36 == value ? 1'h0 : _GEN_155; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_157 = 7'h37 == value ? 1'h0 : _GEN_156; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_158 = 7'h38 == value ? 1'h0 : _GEN_157; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_159 = 7'h39 == value ? 1'h0 : _GEN_158; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_160 = 7'h3a == value ? 1'h0 : _GEN_159; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_161 = 7'h3b == value ? 1'h0 : _GEN_160; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_162 = 7'h3c == value ? 1'h0 : _GEN_161; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_163 = 7'h3d == value ? 1'h0 : _GEN_162; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_255 = 7'h3e == value; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_164 = _GEN_255 | _GEN_163; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_165 = 7'h3f == value ? 1'h0 : _GEN_164; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_166 = 7'h40 == value ? 1'h0 : _GEN_165; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_167 = 7'h41 == value ? 1'h0 : _GEN_166; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_168 = 7'h42 == value ? 1'h0 : _GEN_167; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_169 = 7'h43 == value ? 1'h0 : _GEN_168; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_170 = 7'h44 == value ? 1'h0 : _GEN_169; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_171 = 7'h45 == value ? 1'h0 : _GEN_170; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_172 = 7'h46 == value ? 1'h0 : _GEN_171; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_173 = 7'h47 == value ? 1'h0 : _GEN_172; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_174 = 7'h48 == value ? 1'h0 : _GEN_173; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_175 = 7'h49 == value ? 1'h0 : _GEN_174; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_176 = _GEN_238 | _GEN_175; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_177 = 7'h4b == value ? 1'h0 : _GEN_176; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_178 = 7'h4c == value ? 1'h0 : _GEN_177; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_179 = 7'h4d == value ? 1'h0 : _GEN_178; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_180 = 7'h4e == value ? 1'h0 : _GEN_179; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_181 = 7'h4f == value ? 1'h0 : _GEN_180; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_182 = 7'h50 == value ? 1'h0 : _GEN_181; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_183 = 7'h51 == value ? 1'h0 : _GEN_182; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_184 = 7'h52 == value ? 1'h0 : _GEN_183; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_185 = 7'h53 == value ? 1'h0 : _GEN_184; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_186 = 7'h54 == value ? 1'h0 : _GEN_185; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_187 = 7'h55 == value ? 1'h0 : _GEN_186; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_188 = 7'h56 == value ? 1'h0 : _GEN_187; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_189 = 7'h57 == value ? 1'h0 : _GEN_188; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_257 = 7'h58 == value; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_190 = _GEN_257 | _GEN_189; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_191 = 7'h59 == value ? 1'h0 : _GEN_190; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_192 = 7'h5a == value ? 1'h0 : _GEN_191; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_193 = 7'h5b == value ? 1'h0 : _GEN_192; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_194 = 7'h5c == value ? 1'h0 : _GEN_193; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_195 = 7'h5d == value ? 1'h0 : _GEN_194; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_196 = 7'h5e == value ? 1'h0 : _GEN_195; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_197 = 7'h5f == value ? 1'h0 : _GEN_196; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_198 = 7'h60 == value ? 1'h0 : _GEN_197; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_199 = 7'h61 == value ? 1'h0 : _GEN_198; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_200 = 7'h62 == value ? 1'h0 : _GEN_199; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_201 = _GEN_251 | _GEN_200; // @[VendingMachineGenerator.scala 97:26]
  assign _T_8 = dut_io_dispense == _GEN_201; // @[VendingMachineGenerator.scala 97:26]
  assign _T_10 = _T_8 | reset; // @[VendingMachineGenerator.scala 97:9]
  assign _T_11 = _T_10 == 1'h0; // @[VendingMachineGenerator.scala 97:9]
  assign dut_clock = clock;
  assign dut_reset = reset;
  assign dut_io_inputs_0 = _GEN_251 | _GEN_100; // @[VendingMachineGenerator.scala 96:17]
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
  value = _RAND_0[6:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 7'h0;
    end else begin
      if (done) begin
        value <= 7'h0;
      end else begin
        value <= _T_2;
      end
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_4) begin
          $finish; // @[VendingMachineGenerator.scala 94:21]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_4) begin
          $finish; // @[VendingMachineGenerator.scala 94:29]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_11) begin
          $fwrite(32'h80000002,"Assertion failed\n    at VendingMachineGenerator.scala:97 assert(dut.io.dispense === expectedVec(idx))\n"); // @[VendingMachineGenerator.scala 97:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_11) begin
          $fatal; // @[VendingMachineGenerator.scala 97:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
