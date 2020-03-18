module Queue(
  input        clock,
  input        reset,
  output       io_enq_ready,
  input        io_enq_valid,
  input        io_deq_ready,
  output       io_deq_valid,
  output [2:0] io_count
);
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  reg [1:0] value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_1;
  reg  _T_1; // @[Decoupled.scala 212:35]
  reg [31:0] _RAND_2;
  wire  _T_2; // @[Decoupled.scala 214:41]
  wire  _T_3; // @[Decoupled.scala 215:36]
  wire  _T_4; // @[Decoupled.scala 215:33]
  wire  _T_5; // @[Decoupled.scala 216:32]
  wire  _T_6; // @[Decoupled.scala 40:37]
  wire  _T_8; // @[Decoupled.scala 40:37]
  wire [1:0] _T_12; // @[Counter.scala 38:22]
  wire [1:0] _T_14; // @[Counter.scala 38:22]
  wire  _T_15; // @[Decoupled.scala 227:16]
  wire [1:0] _T_20; // @[Decoupled.scala 248:40]
  wire  _T_21; // @[Decoupled.scala 250:32]
  wire [2:0] _T_22; // @[Decoupled.scala 250:20]
  wire [2:0] _GEN_14; // @[Decoupled.scala 250:62]
  assign _T_2 = value == value_1; // @[Decoupled.scala 214:41]
  assign _T_3 = _T_1 == 1'h0; // @[Decoupled.scala 215:36]
  assign _T_4 = _T_2 & _T_3; // @[Decoupled.scala 215:33]
  assign _T_5 = _T_2 & _T_1; // @[Decoupled.scala 216:32]
  assign _T_6 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37]
  assign _T_8 = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37]
  assign _T_12 = value + 2'h1; // @[Counter.scala 38:22]
  assign _T_14 = value_1 + 2'h1; // @[Counter.scala 38:22]
  assign _T_15 = _T_6 != _T_8; // @[Decoupled.scala 227:16]
  assign _T_20 = value - value_1; // @[Decoupled.scala 248:40]
  assign _T_21 = _T_1 & _T_2; // @[Decoupled.scala 250:32]
  assign _T_22 = _T_21 ? 3'h4 : 3'h0; // @[Decoupled.scala 250:20]
  assign _GEN_14 = {{1'd0}, _T_20}; // @[Decoupled.scala 250:62]
  assign io_enq_ready = _T_5 == 1'h0; // @[Decoupled.scala 232:16]
  assign io_deq_valid = _T_4 == 1'h0; // @[Decoupled.scala 231:16]
  assign io_count = _T_22 | _GEN_14; // @[Decoupled.scala 250:14]
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
  value = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  value_1 = _RAND_1[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  _T_1 = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 2'h0;
    end else begin
      if (_T_6) begin
        value <= _T_12;
      end
    end
    if (reset) begin
      value_1 <= 2'h0;
    end else begin
      if (_T_8) begin
        value_1 <= _T_14;
      end
    end
    if (reset) begin
      _T_1 <= 1'h0;
    end else begin
      if (_T_15) begin
        _T_1 <= _T_6;
      end
    end
  end
endmodule
module MaxPeriodFibonacciLFSR(
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
  assign _T_1 = state_15 ^ state_13; // @[LFSR.scala 15:41]
  assign _T_2 = _T_1 ^ state_12; // @[LFSR.scala 15:41]
  assign _T_3 = _T_2 ^ state_10; // @[LFSR.scala 15:41]
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
    state_0 <= reset | _T_3;
    if (reset) begin
      state_1 <= 1'h0;
    end else begin
      state_1 <= state_0;
    end
    if (reset) begin
      state_2 <= 1'h0;
    end else begin
      state_2 <= state_1;
    end
    if (reset) begin
      state_3 <= 1'h0;
    end else begin
      state_3 <= state_2;
    end
    if (reset) begin
      state_4 <= 1'h0;
    end else begin
      state_4 <= state_3;
    end
    if (reset) begin
      state_5 <= 1'h0;
    end else begin
      state_5 <= state_4;
    end
    if (reset) begin
      state_6 <= 1'h0;
    end else begin
      state_6 <= state_5;
    end
    if (reset) begin
      state_7 <= 1'h0;
    end else begin
      state_7 <= state_6;
    end
    if (reset) begin
      state_8 <= 1'h0;
    end else begin
      state_8 <= state_7;
    end
    if (reset) begin
      state_9 <= 1'h0;
    end else begin
      state_9 <= state_8;
    end
    if (reset) begin
      state_10 <= 1'h0;
    end else begin
      state_10 <= state_9;
    end
    if (reset) begin
      state_11 <= 1'h0;
    end else begin
      state_11 <= state_10;
    end
    if (reset) begin
      state_12 <= 1'h0;
    end else begin
      state_12 <= state_11;
    end
    if (reset) begin
      state_13 <= 1'h0;
    end else begin
      state_13 <= state_12;
    end
    if (reset) begin
      state_14 <= 1'h0;
    end else begin
      state_14 <= state_13;
    end
    if (reset) begin
      state_15 <= 1'h0;
    end else begin
      state_15 <= state_14;
    end
  end
endmodule
module CountIsCorrectTester(
  input   clock,
  input   reset
);
  wire  q_clock; // @[QueueSpec.scala 66:17]
  wire  q_reset; // @[QueueSpec.scala 66:17]
  wire  q_io_enq_ready; // @[QueueSpec.scala 66:17]
  wire  q_io_enq_valid; // @[QueueSpec.scala 66:17]
  wire  q_io_deq_ready; // @[QueueSpec.scala 66:17]
  wire  q_io_deq_valid; // @[QueueSpec.scala 66:17]
  wire [2:0] q_io_count; // @[QueueSpec.scala 66:17]
  wire  MaxPeriodFibonacciLFSR_clock; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_reset; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_0; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_1; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_2; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_3; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_4; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_5; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_6; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_7; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_8; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_9; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_10; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_11; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_12; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_13; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_14; // @[PRNG.scala 82:22]
  wire  MaxPeriodFibonacciLFSR_io_out_15; // @[PRNG.scala 82:22]
  reg [4:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  reg [4:0] value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_1;
  wire [7:0] _T_7; // @[PRNG.scala 86:17]
  wire [15:0] _T_15; // @[PRNG.scala 86:17]
  wire  _T_17; // @[Decoupled.scala 40:37]
  wire  _T_18; // @[Counter.scala 37:24]
  wire [4:0] _T_20; // @[Counter.scala 38:22]
  wire [4:0] _T_22; // @[QueueSpec.scala 79:40]
  wire [4:0] _GEN_24; // @[QueueSpec.scala 79:23]
  wire  _T_23; // @[QueueSpec.scala 79:23]
  wire  _T_25; // @[QueueSpec.scala 79:11]
  wire  _T_26; // @[QueueSpec.scala 79:11]
  wire  _T_27; // @[Decoupled.scala 40:37]
  wire  _T_28; // @[Counter.scala 37:24]
  wire [4:0] _T_30; // @[Counter.scala 38:22]
  wire  _T_39; // @[QueueSpec.scala 88:9]
  Queue q ( // @[QueueSpec.scala 66:17]
    .clock(q_clock),
    .reset(q_reset),
    .io_enq_ready(q_io_enq_ready),
    .io_enq_valid(q_io_enq_valid),
    .io_deq_ready(q_io_deq_ready),
    .io_deq_valid(q_io_deq_valid),
    .io_count(q_io_count)
  );
  MaxPeriodFibonacciLFSR MaxPeriodFibonacciLFSR ( // @[PRNG.scala 82:22]
    .clock(MaxPeriodFibonacciLFSR_clock),
    .reset(MaxPeriodFibonacciLFSR_reset),
    .io_out_0(MaxPeriodFibonacciLFSR_io_out_0),
    .io_out_1(MaxPeriodFibonacciLFSR_io_out_1),
    .io_out_2(MaxPeriodFibonacciLFSR_io_out_2),
    .io_out_3(MaxPeriodFibonacciLFSR_io_out_3),
    .io_out_4(MaxPeriodFibonacciLFSR_io_out_4),
    .io_out_5(MaxPeriodFibonacciLFSR_io_out_5),
    .io_out_6(MaxPeriodFibonacciLFSR_io_out_6),
    .io_out_7(MaxPeriodFibonacciLFSR_io_out_7),
    .io_out_8(MaxPeriodFibonacciLFSR_io_out_8),
    .io_out_9(MaxPeriodFibonacciLFSR_io_out_9),
    .io_out_10(MaxPeriodFibonacciLFSR_io_out_10),
    .io_out_11(MaxPeriodFibonacciLFSR_io_out_11),
    .io_out_12(MaxPeriodFibonacciLFSR_io_out_12),
    .io_out_13(MaxPeriodFibonacciLFSR_io_out_13),
    .io_out_14(MaxPeriodFibonacciLFSR_io_out_14),
    .io_out_15(MaxPeriodFibonacciLFSR_io_out_15)
  );
  assign _T_7 = {MaxPeriodFibonacciLFSR_io_out_7,MaxPeriodFibonacciLFSR_io_out_6,MaxPeriodFibonacciLFSR_io_out_5,MaxPeriodFibonacciLFSR_io_out_4,MaxPeriodFibonacciLFSR_io_out_3,MaxPeriodFibonacciLFSR_io_out_2,MaxPeriodFibonacciLFSR_io_out_1,MaxPeriodFibonacciLFSR_io_out_0}; // @[PRNG.scala 86:17]
  assign _T_15 = {MaxPeriodFibonacciLFSR_io_out_15,MaxPeriodFibonacciLFSR_io_out_14,MaxPeriodFibonacciLFSR_io_out_13,MaxPeriodFibonacciLFSR_io_out_12,MaxPeriodFibonacciLFSR_io_out_11,MaxPeriodFibonacciLFSR_io_out_10,MaxPeriodFibonacciLFSR_io_out_9,MaxPeriodFibonacciLFSR_io_out_8,_T_7}; // @[PRNG.scala 86:17]
  assign _T_17 = q_io_enq_ready & q_io_enq_valid; // @[Decoupled.scala 40:37]
  assign _T_18 = value == 5'h14; // @[Counter.scala 37:24]
  assign _T_20 = value + 5'h1; // @[Counter.scala 38:22]
  assign _T_22 = value - value_1; // @[QueueSpec.scala 79:40]
  assign _GEN_24 = {{2'd0}, q_io_count}; // @[QueueSpec.scala 79:23]
  assign _T_23 = _GEN_24 == _T_22; // @[QueueSpec.scala 79:23]
  assign _T_25 = _T_23 | reset; // @[QueueSpec.scala 79:11]
  assign _T_26 = _T_25 == 1'h0; // @[QueueSpec.scala 79:11]
  assign _T_27 = q_io_deq_ready & q_io_deq_valid; // @[Decoupled.scala 40:37]
  assign _T_28 = value_1 == 5'h14; // @[Counter.scala 37:24]
  assign _T_30 = value_1 + 5'h1; // @[Counter.scala 38:22]
  assign _T_39 = reset == 1'h0; // @[QueueSpec.scala 88:9]
  assign q_clock = clock;
  assign q_reset = reset;
  assign q_io_enq_valid = value < 5'h14; // @[QueueSpec.scala 73:18]
  assign q_io_deq_ready = _T_15[14]; // @[QueueSpec.scala 74:18]
  assign MaxPeriodFibonacciLFSR_clock = clock;
  assign MaxPeriodFibonacciLFSR_reset = reset;
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
  value = _RAND_0[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  value_1 = _RAND_1[4:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 5'h0;
    end else begin
      if (_T_17) begin
        if (_T_18) begin
          value <= 5'h0;
        end else begin
          value <= _T_20;
        end
      end
    end
    if (reset) begin
      value_1 <= 5'h0;
    end else begin
      if (_T_27) begin
        if (_T_28) begin
          value_1 <= 5'h0;
        end else begin
          value_1 <= _T_30;
        end
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_17 & _T_26) begin
          $fwrite(32'h80000002,"Assertion failed\n    at QueueSpec.scala:79 assert(q.io.count === (inCnt.value - outCnt.value))\n"); // @[QueueSpec.scala 79:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_17 & _T_26) begin
          $fatal; // @[QueueSpec.scala 79:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_27 & _T_26) begin
          $fwrite(32'h80000002,"Assertion failed\n    at QueueSpec.scala:83 assert(q.io.count === (inCnt.value - outCnt.value))\n"); // @[QueueSpec.scala 83:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_27 & _T_26) begin
          $fatal; // @[QueueSpec.scala 83:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_28 & _T_39) begin
          $finish; // @[QueueSpec.scala 88:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
