module GaloisLFSR(
  input   clock,
  input   reset,
  output  io_out_0,
  output  io_out_1,
  output  io_out_2,
  output  io_out_3
);
  reg  state_0; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_0;
  reg  state_1; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_1;
  reg  state_2; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_2;
  reg  state_3; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_3;
  wire  _T_1; // @[LFSR.scala 20:43]
  wire  _T_2; // @[LFSR.scala 20:39]
  assign _T_1 = state_3 ^ state_0; // @[LFSR.scala 20:43]
  assign _T_2 = _T_1 == 1'h0; // @[LFSR.scala 20:39]
  assign io_out_0 = state_0; // @[PRNG.scala 69:10]
  assign io_out_1 = state_1; // @[PRNG.scala 69:10]
  assign io_out_2 = state_2; // @[PRNG.scala 69:10]
  assign io_out_3 = state_3; // @[PRNG.scala 69:10]
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
      state_2 <= _T_2;
    end
    if (reset) begin
      state_3 <= 1'h0;
    end else begin
      state_3 <= state_0;
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
  wire [1:0] _T; // @[PRNG.scala 86:17]
  wire [1:0] _T_1; // @[PRNG.scala 86:17]
  wire [3:0] rv; // @[PRNG.scala 86:17]
  reg  started; // @[LFSR16.scala 50:24]
  reg [31:0] _RAND_0;
  wire  _T_2; // @[LFSR16.scala 51:24]
  reg [3:0] seed; // @[LFSR16.scala 51:43]
  reg [31:0] _RAND_1;
  reg [3:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_2;
  wire  _T_3; // @[Counter.scala 37:24]
  wire [3:0] _T_5; // @[Counter.scala 38:22]
  wire  wrap; // @[Counter.scala 72:20]
  wire  _T_6; // @[LFSR16.scala 55:12]
  wire  _T_7; // @[LFSR16.scala 55:21]
  wire  _T_9; // @[LFSR16.scala 56:19]
  wire  _T_10; // @[LFSR16.scala 56:19]
  wire  _T_12; // @[LFSR16.scala 57:9]
  reg [3:0] last; // @[LFSR16.scala 60:21]
  reg [31:0] _RAND_3;
  wire  _T_13; // @[LFSR16.scala 61:21]
  wire  _T_15; // @[LFSR16.scala 61:17]
  wire  _T_16; // @[LFSR16.scala 61:17]
  GaloisLFSR GaloisLFSR ( // @[PRNG.scala 82:22]
    .clock(GaloisLFSR_clock),
    .reset(GaloisLFSR_reset),
    .io_out_0(GaloisLFSR_io_out_0),
    .io_out_1(GaloisLFSR_io_out_1),
    .io_out_2(GaloisLFSR_io_out_2),
    .io_out_3(GaloisLFSR_io_out_3)
  );
  assign _T = {GaloisLFSR_io_out_1,GaloisLFSR_io_out_0}; // @[PRNG.scala 86:17]
  assign _T_1 = {GaloisLFSR_io_out_3,GaloisLFSR_io_out_2}; // @[PRNG.scala 86:17]
  assign rv = {GaloisLFSR_io_out_3,GaloisLFSR_io_out_2,GaloisLFSR_io_out_1,GaloisLFSR_io_out_0}; // @[PRNG.scala 86:17]
  assign _T_2 = started == 1'h0; // @[LFSR16.scala 51:24]
  assign _T_3 = value == 4'he; // @[Counter.scala 37:24]
  assign _T_5 = value + 4'h1; // @[Counter.scala 38:22]
  assign wrap = started & _T_3; // @[Counter.scala 72:20]
  assign _T_6 = rv == seed; // @[LFSR16.scala 55:12]
  assign _T_7 = _T_6 & started; // @[LFSR16.scala 55:21]
  assign _T_9 = wrap | reset; // @[LFSR16.scala 56:19]
  assign _T_10 = _T_9 == 1'h0; // @[LFSR16.scala 56:19]
  assign _T_12 = reset == 1'h0; // @[LFSR16.scala 57:9]
  assign _T_13 = rv != last; // @[LFSR16.scala 61:21]
  assign _T_15 = _T_13 | reset; // @[LFSR16.scala 61:17]
  assign _T_16 = _T_15 == 1'h0; // @[LFSR16.scala 61:17]
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
  seed = _RAND_1[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  value = _RAND_2[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  last = _RAND_3[3:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      started <= 1'h0;
    end else begin
      started <= 1'h1;
    end
    if (_T_2) begin
      seed <= rv;
    end
    if (reset) begin
      value <= 4'h0;
    end else begin
      if (started) begin
        if (_T_3) begin
          value <= 4'h0;
        end else begin
          value <= _T_5;
        end
      end
    end
    last <= {_T_1,_T};
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_7 & _T_10) begin
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
        if (_T_7 & _T_10) begin
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
        if (_T_7 & _T_12) begin
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
        if (_T_16) begin
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
        if (_T_16) begin
          $fatal; // @[LFSR16.scala 61:17]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule