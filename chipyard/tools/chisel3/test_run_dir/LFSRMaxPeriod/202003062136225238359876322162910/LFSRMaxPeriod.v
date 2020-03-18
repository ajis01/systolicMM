module GaloisLFSR(
  input   clock,
  input   reset,
  output  io_out_0,
  output  io_out_1,
  output  io_out_2,
  output  io_out_3,
  output  io_out_4,
  output  io_out_5,
  output  io_out_6,
  output  io_out_7,
  output  io_out_8,
  output  io_out_9,
  output  io_out_10,
  output  io_out_11,
  output  io_out_12,
  output  io_out_13,
  output  io_out_14,
  output  io_out_15
);
  reg  state_0; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_0;
  reg  state_1; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_1;
  reg  state_2; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_2;
  reg  state_3; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_3;
  reg  state_4; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_4;
  reg  state_5; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_5;
  reg  state_6; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_6;
  reg  state_7; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_7;
  reg  state_8; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_8;
  reg  state_9; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_9;
  reg  state_10; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_10;
  reg  state_11; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_11;
  reg  state_12; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_12;
  reg  state_13; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_13;
  reg  state_14; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_14;
  reg  state_15; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_15;
  wire  _T_1; // @[LFSR.scala 15:41]
  wire  _T_2; // @[LFSR.scala 15:41]
  wire  _T_3; // @[LFSR.scala 15:41]
  assign _T_1 = state_11 ^ state_0; // @[LFSR.scala 15:41]
  assign _T_2 = state_13 ^ state_0; // @[LFSR.scala 15:41]
  assign _T_3 = state_14 ^ state_0; // @[LFSR.scala 15:41]
  assign io_out_0 = state_0; // @[PRNG.scala 69:10]
  assign io_out_1 = state_1; // @[PRNG.scala 69:10]
  assign io_out_2 = state_2; // @[PRNG.scala 69:10]
  assign io_out_3 = state_3; // @[PRNG.scala 69:10]
  assign io_out_4 = state_4; // @[PRNG.scala 69:10]
  assign io_out_5 = state_5; // @[PRNG.scala 69:10]
  assign io_out_6 = state_6; // @[PRNG.scala 69:10]
  assign io_out_7 = state_7; // @[PRNG.scala 69:10]
  assign io_out_8 = state_8; // @[PRNG.scala 69:10]
  assign io_out_9 = state_9; // @[PRNG.scala 69:10]
  assign io_out_10 = state_10; // @[PRNG.scala 69:10]
  assign io_out_11 = state_11; // @[PRNG.scala 69:10]
  assign io_out_12 = state_12; // @[PRNG.scala 69:10]
  assign io_out_13 = state_13; // @[PRNG.scala 69:10]
  assign io_out_14 = state_14; // @[PRNG.scala 69:10]
  assign io_out_15 = state_15; // @[PRNG.scala 69:10]
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
  state_0 = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  state_1 = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  state_2 = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  state_3 = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  state_4 = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  state_5 = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  state_6 = _RAND_6[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  state_7 = _RAND_7[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  state_8 = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  state_9 = _RAND_9[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  state_10 = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  state_11 = _RAND_11[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  state_12 = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  state_13 = _RAND_13[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  state_14 = _RAND_14[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  state_15 = _RAND_15[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    state_0 <= reset | state_1;
    if (reset) begin
      state_1 <= 1'h0;
    end else begin
      state_1 <= state_2;
    end
    if (reset) begin
      state_2 <= 1'h0;
    end else begin
      state_2 <= state_3;
    end
    if (reset) begin
      state_3 <= 1'h0;
    end else begin
      state_3 <= state_4;
    end
    if (reset) begin
      state_4 <= 1'h0;
    end else begin
      state_4 <= state_5;
    end
    if (reset) begin
      state_5 <= 1'h0;
    end else begin
      state_5 <= state_6;
    end
    if (reset) begin
      state_6 <= 1'h0;
    end else begin
      state_6 <= state_7;
    end
    if (reset) begin
      state_7 <= 1'h0;
    end else begin
      state_7 <= state_8;
    end
    if (reset) begin
      state_8 <= 1'h0;
    end else begin
      state_8 <= state_9;
    end
    if (reset) begin
      state_9 <= 1'h0;
    end else begin
      state_9 <= state_10;
    end
    if (reset) begin
      state_10 <= 1'h0;
    end else begin
      state_10 <= _T_1;
    end
    if (reset) begin
      state_11 <= 1'h0;
    end else begin
      state_11 <= state_12;
    end
    if (reset) begin
      state_12 <= 1'h0;
    end else begin
      state_12 <= _T_2;
    end
    if (reset) begin
      state_13 <= 1'h0;
    end else begin
      state_13 <= _T_3;
    end
    if (reset) begin
      state_14 <= 1'h0;
    end else begin
      state_14 <= state_15;
    end
    if (reset) begin
      state_15 <= 1'h0;
    end else begin
      state_15 <= state_0;
    end
  end
endmodule
module LFSRMaxPeriod(
  input   clock,
  input   reset
);
  wire  GaloisLFSR_clock; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_reset; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_0; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_1; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_2; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_3; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_4; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_5; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_6; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_7; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_8; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_9; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_10; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_11; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_12; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_13; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_14; // @[PRNG.scala 82:22]
  wire  GaloisLFSR_io_out_15; // @[PRNG.scala 82:22]
  wire [7:0] _T_6; // @[PRNG.scala 86:17]
  wire [7:0] _T_13; // @[PRNG.scala 86:17]
  wire [15:0] rv; // @[PRNG.scala 86:17]
  reg  started; // @[LFSR16.scala 50:24]
  reg [31:0] _RAND_0;
  wire  _T_14; // @[LFSR16.scala 51:24]
  reg [15:0] seed; // @[LFSR16.scala 51:43]
  reg [31:0] _RAND_1;
  reg [15:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_2;
  wire  _T_15; // @[Counter.scala 37:24]
  wire [15:0] _T_17; // @[Counter.scala 38:22]
  wire  wrap; // @[Counter.scala 72:20]
  wire  _T_18; // @[LFSR16.scala 55:12]
  wire  _T_19; // @[LFSR16.scala 55:21]
  wire  _T_21; // @[LFSR16.scala 56:19]
  wire  _T_22; // @[LFSR16.scala 56:19]
  wire  _T_24; // @[LFSR16.scala 57:9]
  reg [15:0] last; // @[LFSR16.scala 60:21]
  reg [31:0] _RAND_3;
  wire  _T_25; // @[LFSR16.scala 61:21]
  wire  _T_27; // @[LFSR16.scala 61:17]
  wire  _T_28; // @[LFSR16.scala 61:17]
  GaloisLFSR GaloisLFSR ( // @[PRNG.scala 82:22]
    .clock(GaloisLFSR_clock),
    .reset(GaloisLFSR_reset),
    .io_out_0(GaloisLFSR_io_out_0),
    .io_out_1(GaloisLFSR_io_out_1),
    .io_out_2(GaloisLFSR_io_out_2),
    .io_out_3(GaloisLFSR_io_out_3),
    .io_out_4(GaloisLFSR_io_out_4),
    .io_out_5(GaloisLFSR_io_out_5),
    .io_out_6(GaloisLFSR_io_out_6),
    .io_out_7(GaloisLFSR_io_out_7),
    .io_out_8(GaloisLFSR_io_out_8),
    .io_out_9(GaloisLFSR_io_out_9),
    .io_out_10(GaloisLFSR_io_out_10),
    .io_out_11(GaloisLFSR_io_out_11),
    .io_out_12(GaloisLFSR_io_out_12),
    .io_out_13(GaloisLFSR_io_out_13),
    .io_out_14(GaloisLFSR_io_out_14),
    .io_out_15(GaloisLFSR_io_out_15)
  );
  assign _T_6 = {GaloisLFSR_io_out_7,GaloisLFSR_io_out_6,GaloisLFSR_io_out_5,GaloisLFSR_io_out_4,GaloisLFSR_io_out_3,GaloisLFSR_io_out_2,GaloisLFSR_io_out_1,GaloisLFSR_io_out_0}; // @[PRNG.scala 86:17]
  assign _T_13 = {GaloisLFSR_io_out_15,GaloisLFSR_io_out_14,GaloisLFSR_io_out_13,GaloisLFSR_io_out_12,GaloisLFSR_io_out_11,GaloisLFSR_io_out_10,GaloisLFSR_io_out_9,GaloisLFSR_io_out_8}; // @[PRNG.scala 86:17]
  assign rv = {GaloisLFSR_io_out_15,GaloisLFSR_io_out_14,GaloisLFSR_io_out_13,GaloisLFSR_io_out_12,GaloisLFSR_io_out_11,GaloisLFSR_io_out_10,GaloisLFSR_io_out_9,GaloisLFSR_io_out_8,_T_6}; // @[PRNG.scala 86:17]
  assign _T_14 = started == 1'h0; // @[LFSR16.scala 51:24]
  assign _T_15 = value == 16'hfffe; // @[Counter.scala 37:24]
  assign _T_17 = value + 16'h1; // @[Counter.scala 38:22]
  assign wrap = started & _T_15; // @[Counter.scala 72:20]
  assign _T_18 = rv == seed; // @[LFSR16.scala 55:12]
  assign _T_19 = _T_18 & started; // @[LFSR16.scala 55:21]
  assign _T_21 = wrap | reset; // @[LFSR16.scala 56:19]
  assign _T_22 = _T_21 == 1'h0; // @[LFSR16.scala 56:19]
  assign _T_24 = reset == 1'h0; // @[LFSR16.scala 57:9]
  assign _T_25 = rv != last; // @[LFSR16.scala 61:21]
  assign _T_27 = _T_25 | reset; // @[LFSR16.scala 61:17]
  assign _T_28 = _T_27 == 1'h0; // @[LFSR16.scala 61:17]
  assign GaloisLFSR_clock = clock;
  assign GaloisLFSR_reset = reset;
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
  started = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  seed = _RAND_1[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  value = _RAND_2[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  last = _RAND_3[15:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      started <= 1'h0;
    end else begin
      started <= 1'h1;
    end
    if (_T_14) begin
      seed <= rv;
    end
    if (reset) begin
      value <= 16'h0;
    end else begin
      if (started) begin
        if (_T_15) begin
          value <= 16'h0;
        end else begin
          value <= _T_17;
        end
      end
    end
    last <= {_T_13,_T_6};
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_19 & _T_22) begin
          $fwrite(32'h80000002,"Assertion failed\n    at LFSR16.scala:56 chisel3.assert(wrap)\n"); // @[LFSR16.scala 56:19]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_19 & _T_22) begin
          $fatal; // @[LFSR16.scala 56:19]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_19 & _T_24) begin
          $finish; // @[LFSR16.scala 57:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_28) begin
          $fwrite(32'h80000002,"Assertion failed: LFSR last value (0b%b) was equal to current value (0b%b)\n    at LFSR16.scala:61 chisel3.assert(rv =/= last, \"LFSR last value (0b%%b) was equal to current value (0b%%b)\", rv, last)\n",rv,last); // @[LFSR16.scala 61:17]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_28) begin
          $fatal; // @[LFSR16.scala 61:17]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
