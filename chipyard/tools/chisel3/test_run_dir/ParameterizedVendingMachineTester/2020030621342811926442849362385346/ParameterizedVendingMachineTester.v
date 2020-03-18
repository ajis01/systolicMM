module VendingMachineGenerator(
  input   clock,
  input   reset,
  input   io_inputs_0,
  input   io_inputs_1,
  output  io_dispense
);
  wire  _T; // @[VendingMachineGenerator.scala 38:52]
  wire  _T_1; // @[VendingMachineGenerator.scala 38:15]
  wire  _T_2; // @[VendingMachineGenerator.scala 38:15]
  wire  _T_3; // @[VendingMachineGenerator.scala 38:15]
  wire  _T_4; // @[VendingMachineGenerator.scala 38:52]
  wire  _T_6; // @[VendingMachineGenerator.scala 38:15]
  wire  _T_7; // @[VendingMachineGenerator.scala 38:15]
  reg [9:0] value; // @[VendingMachineGenerator.scala 56:22]
  reg [31:0] _RAND_0;
  wire  doDispense; // @[VendingMachineGenerator.scala 58:26]
  wire [9:0] _GEN_1; // @[VendingMachineGenerator.scala 67:29]
  wire [9:0] incValue; // @[VendingMachineGenerator.scala 67:29]
  wire [9:0] _T_9; // @[VendingMachineGenerator.scala 63:20]
  assign _T = io_inputs_1 == 1'h0; // @[VendingMachineGenerator.scala 38:52]
  assign _T_1 = $unsigned(reset); // @[VendingMachineGenerator.scala 38:15]
  assign _T_2 = _T | _T_1; // @[VendingMachineGenerator.scala 38:15]
  assign _T_3 = _T_2 == 1'h0; // @[VendingMachineGenerator.scala 38:15]
  assign _T_4 = io_inputs_0 == 1'h0; // @[VendingMachineGenerator.scala 38:52]
  assign _T_6 = _T_4 | _T_1; // @[VendingMachineGenerator.scala 38:15]
  assign _T_7 = _T_6 == 1'h0; // @[VendingMachineGenerator.scala 38:15]
  assign doDispense = value >= 10'h1ed; // @[VendingMachineGenerator.scala 58:26]
  assign _GEN_1 = io_inputs_0 ? 10'h1 : 10'h0; // @[VendingMachineGenerator.scala 67:29]
  assign incValue = io_inputs_1 ? 10'h1d : _GEN_1; // @[VendingMachineGenerator.scala 67:29]
  assign _T_9 = value + incValue; // @[VendingMachineGenerator.scala 63:20]
  assign io_dispense = value >= 10'h1ed; // @[VendingMachineGenerator.scala 69:15]
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
  value = _RAND_0[9:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 10'h0;
    end else begin
      if (doDispense) begin
        value <= 10'h0;
      end else begin
        value <= _T_9;
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_inputs_0 & _T_3) begin
          $fwrite(32'h80000002,"Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:38 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _),\n"); // @[VendingMachineGenerator.scala 38:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (io_inputs_0 & _T_3) begin
          $fatal; // @[VendingMachineGenerator.scala 38:15]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_inputs_1 & _T_7) begin
          $fwrite(32'h80000002,"Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:38 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _),\n"); // @[VendingMachineGenerator.scala 38:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (io_inputs_1 & _T_7) begin
          $fatal; // @[VendingMachineGenerator.scala 38:15]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module ParameterizedVendingMachineTester(
  input   clock,
  input   reset
);
  wire  dut_clock; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_reset; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_io_inputs_0; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_io_inputs_1; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_io_dispense; // @[VendingMachineGenerator.scala 78:19]
  reg [6:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  done; // @[Counter.scala 37:24]
  wire [6:0] _T_2; // @[Counter.scala 38:22]
  wire  _T_4; // @[VendingMachineGenerator.scala 94:21]
  wire [1:0] _GEN_3; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_4; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_5; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_6; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_7; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_8; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_9; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_10; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_11; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_12; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_13; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_14; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_15; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_16; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_17; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_18; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_19; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_20; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_21; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_22; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_23; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_24; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_25; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_26; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_27; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_28; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_29; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_30; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_31; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_32; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_33; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_34; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_35; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_36; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_37; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_38; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_39; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_40; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_41; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_42; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_43; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_44; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_45; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_46; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_47; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_48; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_49; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_50; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_51; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_52; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_53; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_54; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_55; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_56; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_57; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_58; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_59; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_60; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_61; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_62; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_63; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_64; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_65; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_66; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_67; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_68; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_69; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_70; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_71; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_72; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_73; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_74; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_75; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_76; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_77; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_78; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_79; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_80; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_81; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_82; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_83; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_84; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_85; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_86; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_87; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_88; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_89; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_90; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_91; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_92; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_93; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_94; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_95; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_96; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_97; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_98; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_99; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_100; // @[VendingMachineGenerator.scala 96:34]
  wire [1:0] _GEN_101; // @[VendingMachineGenerator.scala 96:34]
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
  wire  _GEN_190; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_191; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_192; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_193; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_194; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_195; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_202; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_196; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_197; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_198; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_199; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_200; // @[VendingMachineGenerator.scala 97:26]
  wire  _GEN_201; // @[VendingMachineGenerator.scala 97:26]
  wire  _T_9; // @[VendingMachineGenerator.scala 97:26]
  wire  _T_11; // @[VendingMachineGenerator.scala 97:9]
  wire  _T_12; // @[VendingMachineGenerator.scala 97:9]
  VendingMachineGenerator dut ( // @[VendingMachineGenerator.scala 78:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_inputs_0(dut_io_inputs_0),
    .io_inputs_1(dut_io_inputs_1),
    .io_dispense(dut_io_dispense)
  );
  assign done = value == 7'h64; // @[Counter.scala 37:24]
  assign _T_2 = value + 7'h1; // @[Counter.scala 38:22]
  assign _T_4 = reset == 1'h0; // @[VendingMachineGenerator.scala 94:21]
  assign _GEN_3 = 7'h1 == value ? 2'h1 : 2'h0; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_4 = 7'h2 == value ? 2'h0 : _GEN_3; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_5 = 7'h3 == value ? 2'h2 : _GEN_4; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_6 = 7'h4 == value ? 2'h0 : _GEN_5; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_7 = 7'h5 == value ? 2'h2 : _GEN_6; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_8 = 7'h6 == value ? 2'h1 : _GEN_7; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_9 = 7'h7 == value ? 2'h2 : _GEN_8; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_10 = 7'h8 == value ? 2'h2 : _GEN_9; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_11 = 7'h9 == value ? 2'h0 : _GEN_10; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_12 = 7'ha == value ? 2'h2 : _GEN_11; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_13 = 7'hb == value ? 2'h0 : _GEN_12; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_14 = 7'hc == value ? 2'h2 : _GEN_13; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_15 = 7'hd == value ? 2'h0 : _GEN_14; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_16 = 7'he == value ? 2'h1 : _GEN_15; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_17 = 7'hf == value ? 2'h2 : _GEN_16; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_18 = 7'h10 == value ? 2'h0 : _GEN_17; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_19 = 7'h11 == value ? 2'h1 : _GEN_18; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_20 = 7'h12 == value ? 2'h0 : _GEN_19; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_21 = 7'h13 == value ? 2'h1 : _GEN_20; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_22 = 7'h14 == value ? 2'h2 : _GEN_21; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_23 = 7'h15 == value ? 2'h0 : _GEN_22; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_24 = 7'h16 == value ? 2'h0 : _GEN_23; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_25 = 7'h17 == value ? 2'h1 : _GEN_24; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_26 = 7'h18 == value ? 2'h2 : _GEN_25; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_27 = 7'h19 == value ? 2'h2 : _GEN_26; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_28 = 7'h1a == value ? 2'h1 : _GEN_27; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_29 = 7'h1b == value ? 2'h0 : _GEN_28; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_30 = 7'h1c == value ? 2'h2 : _GEN_29; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_31 = 7'h1d == value ? 2'h2 : _GEN_30; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_32 = 7'h1e == value ? 2'h1 : _GEN_31; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_33 = 7'h1f == value ? 2'h0 : _GEN_32; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_34 = 7'h20 == value ? 2'h1 : _GEN_33; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_35 = 7'h21 == value ? 2'h0 : _GEN_34; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_36 = 7'h22 == value ? 2'h1 : _GEN_35; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_37 = 7'h23 == value ? 2'h2 : _GEN_36; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_38 = 7'h24 == value ? 2'h2 : _GEN_37; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_39 = 7'h25 == value ? 2'h0 : _GEN_38; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_40 = 7'h26 == value ? 2'h2 : _GEN_39; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_41 = 7'h27 == value ? 2'h1 : _GEN_40; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_42 = 7'h28 == value ? 2'h0 : _GEN_41; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_43 = 7'h29 == value ? 2'h0 : _GEN_42; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_44 = 7'h2a == value ? 2'h2 : _GEN_43; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_45 = 7'h2b == value ? 2'h1 : _GEN_44; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_46 = 7'h2c == value ? 2'h2 : _GEN_45; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_47 = 7'h2d == value ? 2'h1 : _GEN_46; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_48 = 7'h2e == value ? 2'h0 : _GEN_47; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_49 = 7'h2f == value ? 2'h2 : _GEN_48; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_50 = 7'h30 == value ? 2'h0 : _GEN_49; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_51 = 7'h31 == value ? 2'h1 : _GEN_50; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_52 = 7'h32 == value ? 2'h0 : _GEN_51; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_53 = 7'h33 == value ? 2'h1 : _GEN_52; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_54 = 7'h34 == value ? 2'h1 : _GEN_53; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_55 = 7'h35 == value ? 2'h2 : _GEN_54; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_56 = 7'h36 == value ? 2'h2 : _GEN_55; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_57 = 7'h37 == value ? 2'h1 : _GEN_56; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_58 = 7'h38 == value ? 2'h0 : _GEN_57; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_59 = 7'h39 == value ? 2'h2 : _GEN_58; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_60 = 7'h3a == value ? 2'h0 : _GEN_59; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_61 = 7'h3b == value ? 2'h2 : _GEN_60; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_62 = 7'h3c == value ? 2'h0 : _GEN_61; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_63 = 7'h3d == value ? 2'h0 : _GEN_62; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_64 = 7'h3e == value ? 2'h0 : _GEN_63; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_65 = 7'h3f == value ? 2'h0 : _GEN_64; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_66 = 7'h40 == value ? 2'h1 : _GEN_65; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_67 = 7'h41 == value ? 2'h2 : _GEN_66; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_68 = 7'h42 == value ? 2'h1 : _GEN_67; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_69 = 7'h43 == value ? 2'h1 : _GEN_68; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_70 = 7'h44 == value ? 2'h0 : _GEN_69; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_71 = 7'h45 == value ? 2'h1 : _GEN_70; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_72 = 7'h46 == value ? 2'h2 : _GEN_71; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_73 = 7'h47 == value ? 2'h2 : _GEN_72; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_74 = 7'h48 == value ? 2'h0 : _GEN_73; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_75 = 7'h49 == value ? 2'h0 : _GEN_74; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_76 = 7'h4a == value ? 2'h1 : _GEN_75; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_77 = 7'h4b == value ? 2'h1 : _GEN_76; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_78 = 7'h4c == value ? 2'h2 : _GEN_77; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_79 = 7'h4d == value ? 2'h2 : _GEN_78; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_80 = 7'h4e == value ? 2'h0 : _GEN_79; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_81 = 7'h4f == value ? 2'h1 : _GEN_80; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_82 = 7'h50 == value ? 2'h2 : _GEN_81; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_83 = 7'h51 == value ? 2'h0 : _GEN_82; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_84 = 7'h52 == value ? 2'h1 : _GEN_83; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_85 = 7'h53 == value ? 2'h1 : _GEN_84; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_86 = 7'h54 == value ? 2'h2 : _GEN_85; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_87 = 7'h55 == value ? 2'h0 : _GEN_86; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_88 = 7'h56 == value ? 2'h2 : _GEN_87; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_89 = 7'h57 == value ? 2'h0 : _GEN_88; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_90 = 7'h58 == value ? 2'h2 : _GEN_89; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_91 = 7'h59 == value ? 2'h0 : _GEN_90; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_92 = 7'h5a == value ? 2'h2 : _GEN_91; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_93 = 7'h5b == value ? 2'h2 : _GEN_92; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_94 = 7'h5c == value ? 2'h0 : _GEN_93; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_95 = 7'h5d == value ? 2'h2 : _GEN_94; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_96 = 7'h5e == value ? 2'h2 : _GEN_95; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_97 = 7'h5f == value ? 2'h1 : _GEN_96; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_98 = 7'h60 == value ? 2'h1 : _GEN_97; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_99 = 7'h61 == value ? 2'h2 : _GEN_98; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_100 = 7'h62 == value ? 2'h2 : _GEN_99; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_101 = 7'h63 == value ? 2'h2 : _GEN_100; // @[VendingMachineGenerator.scala 96:34]
  assign _GEN_147 = 7'h2d == value; // @[VendingMachineGenerator.scala 97:26]
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
  assign _GEN_164 = 7'h3e == value ? 1'h0 : _GEN_163; // @[VendingMachineGenerator.scala 97:26]
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
  assign _GEN_176 = 7'h4a == value ? 1'h0 : _GEN_175; // @[VendingMachineGenerator.scala 97:26]
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
  assign _GEN_190 = 7'h58 == value ? 1'h0 : _GEN_189; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_191 = 7'h59 == value ? 1'h0 : _GEN_190; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_192 = 7'h5a == value ? 1'h0 : _GEN_191; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_193 = 7'h5b == value ? 1'h0 : _GEN_192; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_194 = 7'h5c == value ? 1'h0 : _GEN_193; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_195 = 7'h5d == value ? 1'h0 : _GEN_194; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_202 = 7'h5e == value; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_196 = _GEN_202 | _GEN_195; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_197 = 7'h5f == value ? 1'h0 : _GEN_196; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_198 = 7'h60 == value ? 1'h0 : _GEN_197; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_199 = 7'h61 == value ? 1'h0 : _GEN_198; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_200 = 7'h62 == value ? 1'h0 : _GEN_199; // @[VendingMachineGenerator.scala 97:26]
  assign _GEN_201 = 7'h63 == value ? 1'h0 : _GEN_200; // @[VendingMachineGenerator.scala 97:26]
  assign _T_9 = dut_io_dispense == _GEN_201; // @[VendingMachineGenerator.scala 97:26]
  assign _T_11 = _T_9 | reset; // @[VendingMachineGenerator.scala 97:9]
  assign _T_12 = _T_11 == 1'h0; // @[VendingMachineGenerator.scala 97:9]
  assign dut_clock = clock;
  assign dut_reset = reset;
  assign dut_io_inputs_0 = _GEN_101[0]; // @[VendingMachineGenerator.scala 96:17]
  assign dut_io_inputs_1 = _GEN_101[1]; // @[VendingMachineGenerator.scala 96:17]
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
        if (_T_12) begin
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
        if (_T_12) begin
          $fatal; // @[VendingMachineGenerator.scala 97:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
