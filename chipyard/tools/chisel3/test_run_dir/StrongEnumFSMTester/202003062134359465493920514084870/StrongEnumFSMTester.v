module StrongEnumFSM(
  input        clock,
  input        reset,
  input        io_in,
  output       io_out,
  output [1:0] io_state
);
  reg [1:0] state; // @[StrongEnum.scala 125:22]
  reg [31:0] _RAND_0;
  wire [1:0] _T_2; // @[Conditional.scala 37:39]
  wire  _T_3; // @[Conditional.scala 37:30]
  wire  _T_6; // @[Conditional.scala 37:30]
  wire  _T_9; // @[Conditional.scala 37:30]
  wire  _T_10; // @[StrongEnum.scala 144:13]
  assign _T_2 = $unsigned(state); // @[Conditional.scala 37:39]
  assign _T_3 = 2'h0 == _T_2; // @[Conditional.scala 37:30]
  assign _T_6 = 2'h1 == _T_2; // @[Conditional.scala 37:30]
  assign _T_9 = 2'h2 == _T_2; // @[Conditional.scala 37:30]
  assign _T_10 = io_in == 1'h0; // @[StrongEnum.scala 144:13]
  assign io_out = state == 2'h2; // @[StrongEnum.scala 127:10]
  assign io_state = state; // @[StrongEnum.scala 128:12]
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
  state = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      state <= 2'h0;
    end else begin
      if (_T_3) begin
        if (io_in) begin
          state <= 2'h1;
        end
      end else begin
        if (_T_6) begin
          if (io_in) begin
            state <= 2'h2;
          end else begin
            state <= 2'h0;
          end
        end else begin
          if (_T_9) begin
            if (_T_10) begin
              state <= 2'h0;
            end
          end
        end
      end
    end
  end
endmodule
module StrongEnumFSMTester(
  input   clock,
  input   reset
);
  wire  dut_clock; // @[StrongEnum.scala 251:19]
  wire  dut_reset; // @[StrongEnum.scala 251:19]
  wire  dut_io_in; // @[StrongEnum.scala 251:19]
  wire  dut_io_out; // @[StrongEnum.scala 251:19]
  wire [1:0] dut_io_state; // @[StrongEnum.scala 251:19]
  reg [3:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  _GEN_1; // @[StrongEnum.scala 261:13]
  wire  _GEN_2; // @[StrongEnum.scala 261:13]
  wire  _GEN_31; // @[StrongEnum.scala 261:13]
  wire  _GEN_3; // @[StrongEnum.scala 261:13]
  wire  _GEN_32; // @[StrongEnum.scala 261:13]
  wire  _GEN_4; // @[StrongEnum.scala 261:13]
  wire  _GEN_33; // @[StrongEnum.scala 261:13]
  wire  _GEN_5; // @[StrongEnum.scala 261:13]
  wire  _GEN_6; // @[StrongEnum.scala 261:13]
  wire  _GEN_34; // @[StrongEnum.scala 261:13]
  wire  _GEN_7; // @[StrongEnum.scala 261:13]
  wire  _GEN_35; // @[StrongEnum.scala 261:13]
  wire  _GEN_8; // @[StrongEnum.scala 261:13]
  wire  _GEN_36; // @[StrongEnum.scala 262:21]
  wire  _GEN_16; // @[StrongEnum.scala 262:21]
  wire  _GEN_17; // @[StrongEnum.scala 262:21]
  wire  _GEN_18; // @[StrongEnum.scala 262:21]
  wire  _GEN_37; // @[StrongEnum.scala 262:21]
  wire  _GEN_19; // @[StrongEnum.scala 262:21]
  wire  _T; // @[StrongEnum.scala 262:21]
  wire  _T_2; // @[StrongEnum.scala 262:9]
  wire  _T_3; // @[StrongEnum.scala 262:9]
  wire [1:0] _GEN_22; // @[StrongEnum.scala 263:23]
  wire [1:0] _GEN_23; // @[StrongEnum.scala 263:23]
  wire [1:0] _GEN_24; // @[StrongEnum.scala 263:23]
  wire [1:0] _GEN_25; // @[StrongEnum.scala 263:23]
  wire [1:0] _GEN_26; // @[StrongEnum.scala 263:23]
  wire [1:0] _GEN_27; // @[StrongEnum.scala 263:23]
  wire [1:0] _GEN_28; // @[StrongEnum.scala 263:23]
  wire [1:0] _GEN_29; // @[StrongEnum.scala 263:23]
  wire  _T_4; // @[StrongEnum.scala 263:23]
  wire  _T_6; // @[StrongEnum.scala 263:9]
  wire  _T_7; // @[StrongEnum.scala 263:9]
  wire  _T_8; // @[Counter.scala 37:24]
  wire [3:0] _T_10; // @[Counter.scala 38:22]
  wire  _T_12; // @[StrongEnum.scala 266:9]
  StrongEnumFSM dut ( // @[StrongEnum.scala 251:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_in(dut_io_in),
    .io_out(dut_io_out),
    .io_state(dut_io_state)
  );
  assign _GEN_1 = 4'h1 == value; // @[StrongEnum.scala 261:13]
  assign _GEN_2 = 4'h2 == value ? 1'h0 : _GEN_1; // @[StrongEnum.scala 261:13]
  assign _GEN_31 = 4'h3 == value; // @[StrongEnum.scala 261:13]
  assign _GEN_3 = _GEN_31 | _GEN_2; // @[StrongEnum.scala 261:13]
  assign _GEN_32 = 4'h4 == value; // @[StrongEnum.scala 261:13]
  assign _GEN_4 = _GEN_32 | _GEN_3; // @[StrongEnum.scala 261:13]
  assign _GEN_33 = 4'h5 == value; // @[StrongEnum.scala 261:13]
  assign _GEN_5 = _GEN_33 | _GEN_4; // @[StrongEnum.scala 261:13]
  assign _GEN_6 = 4'h6 == value ? 1'h0 : _GEN_5; // @[StrongEnum.scala 261:13]
  assign _GEN_34 = 4'h7 == value; // @[StrongEnum.scala 261:13]
  assign _GEN_7 = _GEN_34 | _GEN_6; // @[StrongEnum.scala 261:13]
  assign _GEN_35 = 4'h8 == value; // @[StrongEnum.scala 261:13]
  assign _GEN_8 = _GEN_35 | _GEN_7; // @[StrongEnum.scala 261:13]
  assign _GEN_36 = 4'h6 == value; // @[StrongEnum.scala 262:21]
  assign _GEN_16 = _GEN_36 | _GEN_33; // @[StrongEnum.scala 262:21]
  assign _GEN_17 = 4'h7 == value ? 1'h0 : _GEN_16; // @[StrongEnum.scala 262:21]
  assign _GEN_18 = 4'h8 == value ? 1'h0 : _GEN_17; // @[StrongEnum.scala 262:21]
  assign _GEN_37 = 4'h9 == value; // @[StrongEnum.scala 262:21]
  assign _GEN_19 = _GEN_37 | _GEN_18; // @[StrongEnum.scala 262:21]
  assign _T = dut_io_out == _GEN_19; // @[StrongEnum.scala 262:21]
  assign _T_2 = _T | reset; // @[StrongEnum.scala 262:9]
  assign _T_3 = _T_2 == 1'h0; // @[StrongEnum.scala 262:9]
  assign _GEN_22 = 4'h2 == value ? 2'h1 : 2'h0; // @[StrongEnum.scala 263:23]
  assign _GEN_23 = 4'h3 == value ? 2'h0 : _GEN_22; // @[StrongEnum.scala 263:23]
  assign _GEN_24 = 4'h4 == value ? 2'h1 : _GEN_23; // @[StrongEnum.scala 263:23]
  assign _GEN_25 = 4'h5 == value ? 2'h2 : _GEN_24; // @[StrongEnum.scala 263:23]
  assign _GEN_26 = 4'h6 == value ? 2'h2 : _GEN_25; // @[StrongEnum.scala 263:23]
  assign _GEN_27 = 4'h7 == value ? 2'h0 : _GEN_26; // @[StrongEnum.scala 263:23]
  assign _GEN_28 = 4'h8 == value ? 2'h1 : _GEN_27; // @[StrongEnum.scala 263:23]
  assign _GEN_29 = 4'h9 == value ? 2'h2 : _GEN_28; // @[StrongEnum.scala 263:23]
  assign _T_4 = dut_io_state == _GEN_29; // @[StrongEnum.scala 263:23]
  assign _T_6 = _T_4 | reset; // @[StrongEnum.scala 263:9]
  assign _T_7 = _T_6 == 1'h0; // @[StrongEnum.scala 263:9]
  assign _T_8 = value == 4'h9; // @[Counter.scala 37:24]
  assign _T_10 = value + 4'h1; // @[Counter.scala 38:22]
  assign _T_12 = reset == 1'h0; // @[StrongEnum.scala 266:9]
  assign dut_clock = clock;
  assign dut_reset = reset;
  assign dut_io_in = 4'h9 == value ? 1'h0 : _GEN_8; // @[StrongEnum.scala 261:13]
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
  value = _RAND_0[3:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 4'h0;
    end else begin
      if (_T_8) begin
        value <= 4'h0;
      end else begin
        value <= _T_10;
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:262 assert(dut.io.out === expected(cycle))\n"); // @[StrongEnum.scala 262:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3) begin
          $fatal; // @[StrongEnum.scala 262:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_7) begin
          $fwrite(32'h80000002,"Assertion failed\n    at StrongEnum.scala:263 assert(dut.io.state === expected_state(cycle))\n"); // @[StrongEnum.scala 263:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_7) begin
          $fatal; // @[StrongEnum.scala 263:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_8 & _T_12) begin
          $finish; // @[StrongEnum.scala 266:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
