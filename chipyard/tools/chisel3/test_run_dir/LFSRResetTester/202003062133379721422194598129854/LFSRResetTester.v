module FooLFSR(
  input   clock,
  input   reset,
  input   io_seed_valid,
  output  io_out_0
);
  reg  state_0; // @[PRNG.scala 47:50]
  reg [31:0] _RAND_0;
  wire  _GEN_4; // @[PRNG.scala 65:25]
  assign _GEN_4 = io_seed_valid ? 1'h0 : state_0; // @[PRNG.scala 65:25]
  assign io_out_0 = state_0; // @[PRNG.scala 69:10]
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
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    state_0 <= reset | _GEN_4;
  end
endmodule
module LFSRResetTester(
  input   clock,
  input   reset
);
  wire  lfsr_clock; // @[LFSRSpec.scala 26:20]
  wire  lfsr_reset; // @[LFSRSpec.scala 26:20]
  wire  lfsr_io_seed_valid; // @[LFSRSpec.scala 26:20]
  wire  lfsr_io_out_0; // @[LFSRSpec.scala 26:20]
  reg [2:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  done; // @[Counter.scala 37:24]
  wire [2:0] _T_2; // @[Counter.scala 38:22]
  wire  _T_4; // @[LFSRSpec.scala 37:15]
  wire [3:0] _T_7; // @[LFSRSpec.scala 38:24]
  wire  _T_8; // @[LFSRSpec.scala 38:31]
  wire  _T_10; // @[LFSRSpec.scala 38:11]
  wire  _T_11; // @[LFSRSpec.scala 38:11]
  wire  _T_17; // @[LFSRSpec.scala 44:31]
  wire  _T_19; // @[LFSRSpec.scala 44:11]
  wire  _T_20; // @[LFSRSpec.scala 44:11]
  wire  _T_22; // @[LFSRSpec.scala 48:9]
  FooLFSR lfsr ( // @[LFSRSpec.scala 26:20]
    .clock(lfsr_clock),
    .reset(lfsr_reset),
    .io_seed_valid(lfsr_io_seed_valid),
    .io_out_0(lfsr_io_out_0)
  );
  assign done = value == 3'h4; // @[Counter.scala 37:24]
  assign _T_2 = value + 3'h1; // @[Counter.scala 38:22]
  assign _T_4 = value == 3'h2; // @[LFSRSpec.scala 37:15]
  assign _T_7 = {2'h0,1'h0,lfsr_io_out_0}; // @[LFSRSpec.scala 38:24]
  assign _T_8 = _T_7 == 4'h0; // @[LFSRSpec.scala 38:31]
  assign _T_10 = _T_8 | reset; // @[LFSRSpec.scala 38:11]
  assign _T_11 = _T_10 == 1'h0; // @[LFSRSpec.scala 38:11]
  assign _T_17 = _T_7 != 4'h0; // @[LFSRSpec.scala 44:31]
  assign _T_19 = _T_17 | reset; // @[LFSRSpec.scala 44:11]
  assign _T_20 = _T_19 == 1'h0; // @[LFSRSpec.scala 44:11]
  assign _T_22 = reset == 1'h0; // @[LFSRSpec.scala 48:9]
  assign lfsr_clock = clock;
  assign lfsr_reset = value == 3'h3; // @[LFSRSpec.scala 41:14]
  assign lfsr_io_seed_valid = value == 3'h1; // @[LFSRSpec.scala 27:22 LFSRSpec.scala 33:22]
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
      if (done) begin
        value <= 3'h0;
      end else begin
        value <= _T_2;
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_4 & _T_11) begin
          $fwrite(32'h80000002,"Assertion failed: LFSR is NOT locked up, but should be!\n    at LFSRSpec.scala:38 assert(lfsr.io.out.asUInt === lockUpValue.U, \"LFSR is NOT locked up, but should be!\")\n"); // @[LFSRSpec.scala 38:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4 & _T_11) begin
          $fatal; // @[LFSRSpec.scala 38:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (done & _T_20) begin
          $fwrite(32'h80000002,"Assertion failed: LFSR is locked up, but should not be after reset!\n    at LFSRSpec.scala:44 assert(lfsr.io.out.asUInt =/= lockUpValue.U, \"LFSR is locked up, but should not be after reset!\")\n"); // @[LFSRSpec.scala 44:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_20) begin
          $fatal; // @[LFSRSpec.scala 44:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_22) begin
          $finish; // @[LFSRSpec.scala 48:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
