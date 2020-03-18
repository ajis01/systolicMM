module Queue(
  input        clock,
  input        reset,
  output       io_enq_ready,
  input        io_enq_valid,
  input  [2:0] io_enq_bits,
  input        io_deq_ready,
  output       io_deq_valid,
  output [2:0] io_deq_bits
);
  reg [2:0] _T [0:2]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_0;
  wire [2:0] _T__T_18_data; // @[Decoupled.scala 209:24]
  wire [1:0] _T__T_18_addr; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_1;
  wire [2:0] _T__T_10_data; // @[Decoupled.scala 209:24]
  wire [1:0] _T__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T__T_10_en; // @[Decoupled.scala 209:24]
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_2;
  reg [1:0] value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_3;
  reg  _T_1; // @[Decoupled.scala 212:35]
  reg [31:0] _RAND_4;
  wire  _T_2; // @[Decoupled.scala 214:41]
  wire  _T_3; // @[Decoupled.scala 215:36]
  wire  _T_4; // @[Decoupled.scala 215:33]
  wire  _T_5; // @[Decoupled.scala 216:32]
  wire  _T_6; // @[Decoupled.scala 40:37]
  wire  _T_8; // @[Decoupled.scala 40:37]
  wire  wrap; // @[Counter.scala 37:24]
  wire [1:0] _T_12; // @[Counter.scala 38:22]
  wire  wrap_1; // @[Counter.scala 37:24]
  wire [1:0] _T_14; // @[Counter.scala 38:22]
  wire  _T_15; // @[Decoupled.scala 227:16]
  assign _T__T_18_addr = value_1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign _T__T_18_data = _T[_T__T_18_addr]; // @[Decoupled.scala 209:24]
  `else
  assign _T__T_18_data = _T__T_18_addr >= 2'h3 ? _RAND_1[2:0] : _T[_T__T_18_addr]; // @[Decoupled.scala 209:24]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign _T__T_10_data = io_enq_bits;
  assign _T__T_10_addr = value;
  assign _T__T_10_mask = 1'h1;
  assign _T__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_2 = value == value_1; // @[Decoupled.scala 214:41]
  assign _T_3 = _T_1 == 1'h0; // @[Decoupled.scala 215:36]
  assign _T_4 = _T_2 & _T_3; // @[Decoupled.scala 215:33]
  assign _T_5 = _T_2 & _T_1; // @[Decoupled.scala 216:32]
  assign _T_6 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37]
  assign _T_8 = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37]
  assign wrap = value == 2'h2; // @[Counter.scala 37:24]
  assign _T_12 = value + 2'h1; // @[Counter.scala 38:22]
  assign wrap_1 = value_1 == 2'h2; // @[Counter.scala 37:24]
  assign _T_14 = value_1 + 2'h1; // @[Counter.scala 38:22]
  assign _T_15 = _T_6 != _T_8; // @[Decoupled.scala 227:16]
  assign io_enq_ready = _T_5 == 1'h0; // @[Decoupled.scala 232:16]
  assign io_deq_valid = _T_4 == 1'h0; // @[Decoupled.scala 231:16]
  assign io_deq_bits = _T__T_18_data; // @[Decoupled.scala 233:15]
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
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 3; initvar = initvar+1)
    _T[initvar] = _RAND_0[2:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_1 = {1{`RANDOM}};
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  value = _RAND_2[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  value_1 = _RAND_3[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  _T_1 = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(_T__T_10_en & _T__T_10_mask) begin
      _T[_T__T_10_addr] <= _T__T_10_data; // @[Decoupled.scala 209:24]
    end
    if (reset) begin
      value <= 2'h0;
    end else begin
      if (_T_6) begin
        if (wrap) begin
          value <= 2'h0;
        end else begin
          value <= _T_12;
        end
      end
    end
    if (reset) begin
      value_1 <= 2'h0;
    end else begin
      if (_T_8) begin
        if (wrap_1) begin
          value_1 <= 2'h0;
        end else begin
          value_1 <= _T_14;
        end
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
module ThingsPassThroughTester(
  input   clock,
  input   reset
);
  wire  q_clock; // @[QueueSpec.scala 13:17]
  wire  q_reset; // @[QueueSpec.scala 13:17]
  wire  q_io_enq_ready; // @[QueueSpec.scala 13:17]
  wire  q_io_enq_valid; // @[QueueSpec.scala 13:17]
  wire [2:0] q_io_enq_bits; // @[QueueSpec.scala 13:17]
  wire  q_io_deq_ready; // @[QueueSpec.scala 13:17]
  wire  q_io_deq_valid; // @[QueueSpec.scala 13:17]
  wire [2:0] q_io_deq_bits; // @[QueueSpec.scala 13:17]
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
  wire [2:0] _GEN_1; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_2; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_3; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_4; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_5; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_6; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_7; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_8; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_9; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_10; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_11; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_12; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_13; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_14; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_15; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_16; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_17; // @[QueueSpec.scala 23:17]
  wire [2:0] _GEN_18; // @[QueueSpec.scala 23:17]
  wire  _T_17; // @[Decoupled.scala 40:37]
  wire  _T_18; // @[Counter.scala 37:24]
  wire [4:0] _T_20; // @[Counter.scala 38:22]
  wire  _T_21; // @[Decoupled.scala 40:37]
  wire [2:0] _GEN_23; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_24; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_25; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_26; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_27; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_28; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_29; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_30; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_31; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_32; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_33; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_34; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_35; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_36; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_37; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_38; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_39; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_40; // @[QueueSpec.scala 29:32]
  wire [2:0] _GEN_41; // @[QueueSpec.scala 29:32]
  wire  _T_22; // @[QueueSpec.scala 29:32]
  wire  _T_24; // @[QueueSpec.scala 29:11]
  wire  _T_25; // @[QueueSpec.scala 29:11]
  wire  _T_26; // @[Counter.scala 37:24]
  wire [4:0] _T_28; // @[Counter.scala 38:22]
  wire  _T_31; // @[QueueSpec.scala 33:9]
  Queue q ( // @[QueueSpec.scala 13:17]
    .clock(q_clock),
    .reset(q_reset),
    .io_enq_ready(q_io_enq_ready),
    .io_enq_valid(q_io_enq_valid),
    .io_enq_bits(q_io_enq_bits),
    .io_deq_ready(q_io_deq_ready),
    .io_deq_valid(q_io_deq_valid),
    .io_deq_bits(q_io_deq_bits)
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
  assign _GEN_1 = 5'h1 == value ? 3'h3 : 3'h7; // @[QueueSpec.scala 23:17]
  assign _GEN_2 = 5'h2 == value ? 3'h6 : _GEN_1; // @[QueueSpec.scala 23:17]
  assign _GEN_3 = 5'h3 == value ? 3'h0 : _GEN_2; // @[QueueSpec.scala 23:17]
  assign _GEN_4 = 5'h4 == value ? 3'h7 : _GEN_3; // @[QueueSpec.scala 23:17]
  assign _GEN_5 = 5'h5 == value ? 3'h0 : _GEN_4; // @[QueueSpec.scala 23:17]
  assign _GEN_6 = 5'h6 == value ? 3'h6 : _GEN_5; // @[QueueSpec.scala 23:17]
  assign _GEN_7 = 5'h7 == value ? 3'h0 : _GEN_6; // @[QueueSpec.scala 23:17]
  assign _GEN_8 = 5'h8 == value ? 3'h7 : _GEN_7; // @[QueueSpec.scala 23:17]
  assign _GEN_9 = 5'h9 == value ? 3'h0 : _GEN_8; // @[QueueSpec.scala 23:17]
  assign _GEN_10 = 5'ha == value ? 3'h0 : _GEN_9; // @[QueueSpec.scala 23:17]
  assign _GEN_11 = 5'hb == value ? 3'h3 : _GEN_10; // @[QueueSpec.scala 23:17]
  assign _GEN_12 = 5'hc == value ? 3'h2 : _GEN_11; // @[QueueSpec.scala 23:17]
  assign _GEN_13 = 5'hd == value ? 3'h0 : _GEN_12; // @[QueueSpec.scala 23:17]
  assign _GEN_14 = 5'he == value ? 3'h6 : _GEN_13; // @[QueueSpec.scala 23:17]
  assign _GEN_15 = 5'hf == value ? 3'h1 : _GEN_14; // @[QueueSpec.scala 23:17]
  assign _GEN_16 = 5'h10 == value ? 3'h4 : _GEN_15; // @[QueueSpec.scala 23:17]
  assign _GEN_17 = 5'h11 == value ? 3'h4 : _GEN_16; // @[QueueSpec.scala 23:17]
  assign _GEN_18 = 5'h12 == value ? 3'h1 : _GEN_17; // @[QueueSpec.scala 23:17]
  assign _T_17 = q_io_enq_ready & q_io_enq_valid; // @[Decoupled.scala 40:37]
  assign _T_18 = value == 5'h14; // @[Counter.scala 37:24]
  assign _T_20 = value + 5'h1; // @[Counter.scala 38:22]
  assign _T_21 = q_io_deq_ready & q_io_deq_valid; // @[Decoupled.scala 40:37]
  assign _GEN_23 = 5'h1 == value_1 ? 3'h3 : 3'h7; // @[QueueSpec.scala 29:32]
  assign _GEN_24 = 5'h2 == value_1 ? 3'h6 : _GEN_23; // @[QueueSpec.scala 29:32]
  assign _GEN_25 = 5'h3 == value_1 ? 3'h0 : _GEN_24; // @[QueueSpec.scala 29:32]
  assign _GEN_26 = 5'h4 == value_1 ? 3'h7 : _GEN_25; // @[QueueSpec.scala 29:32]
  assign _GEN_27 = 5'h5 == value_1 ? 3'h0 : _GEN_26; // @[QueueSpec.scala 29:32]
  assign _GEN_28 = 5'h6 == value_1 ? 3'h6 : _GEN_27; // @[QueueSpec.scala 29:32]
  assign _GEN_29 = 5'h7 == value_1 ? 3'h0 : _GEN_28; // @[QueueSpec.scala 29:32]
  assign _GEN_30 = 5'h8 == value_1 ? 3'h7 : _GEN_29; // @[QueueSpec.scala 29:32]
  assign _GEN_31 = 5'h9 == value_1 ? 3'h0 : _GEN_30; // @[QueueSpec.scala 29:32]
  assign _GEN_32 = 5'ha == value_1 ? 3'h0 : _GEN_31; // @[QueueSpec.scala 29:32]
  assign _GEN_33 = 5'hb == value_1 ? 3'h3 : _GEN_32; // @[QueueSpec.scala 29:32]
  assign _GEN_34 = 5'hc == value_1 ? 3'h2 : _GEN_33; // @[QueueSpec.scala 29:32]
  assign _GEN_35 = 5'hd == value_1 ? 3'h0 : _GEN_34; // @[QueueSpec.scala 29:32]
  assign _GEN_36 = 5'he == value_1 ? 3'h6 : _GEN_35; // @[QueueSpec.scala 29:32]
  assign _GEN_37 = 5'hf == value_1 ? 3'h1 : _GEN_36; // @[QueueSpec.scala 29:32]
  assign _GEN_38 = 5'h10 == value_1 ? 3'h4 : _GEN_37; // @[QueueSpec.scala 29:32]
  assign _GEN_39 = 5'h11 == value_1 ? 3'h4 : _GEN_38; // @[QueueSpec.scala 29:32]
  assign _GEN_40 = 5'h12 == value_1 ? 3'h1 : _GEN_39; // @[QueueSpec.scala 29:32]
  assign _GEN_41 = 5'h13 == value_1 ? 3'h6 : _GEN_40; // @[QueueSpec.scala 29:32]
  assign _T_22 = _GEN_41 == q_io_deq_bits; // @[QueueSpec.scala 29:32]
  assign _T_24 = _T_22 | reset; // @[QueueSpec.scala 29:11]
  assign _T_25 = _T_24 == 1'h0; // @[QueueSpec.scala 29:11]
  assign _T_26 = value_1 == 5'h14; // @[Counter.scala 37:24]
  assign _T_28 = value_1 + 5'h1; // @[Counter.scala 38:22]
  assign _T_31 = reset == 1'h0; // @[QueueSpec.scala 33:9]
  assign q_clock = clock;
  assign q_reset = reset;
  assign q_io_enq_valid = value < 5'h14; // @[QueueSpec.scala 20:18]
  assign q_io_enq_bits = 5'h13 == value ? 3'h6 : _GEN_18; // @[QueueSpec.scala 23:17]
  assign q_io_deq_ready = _T_15[11]; // @[QueueSpec.scala 21:18]
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
      if (_T_21) begin
        if (_T_26) begin
          value_1 <= 5'h0;
        end else begin
          value_1 <= _T_28;
        end
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_21 & _T_25) begin
          $fwrite(32'h80000002,"Assertion failed\n    at QueueSpec.scala:29 assert(elems(outCnt.value) === q.io.deq.bits)\n"); // @[QueueSpec.scala 29:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_21 & _T_25) begin
          $fatal; // @[QueueSpec.scala 29:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & _T_31) begin
          $finish; // @[QueueSpec.scala 33:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
