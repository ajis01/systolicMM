module Queue(
  input        clock,
  input        reset,
  output       io_enq_ready,
  output [2:0] io_count
);
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  reg [1:0] value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_1;
  reg  _T_1; // @[Decoupled.scala 212:35]
  reg [31:0] _RAND_2;
  wire  _T_2; // @[Decoupled.scala 214:41]
  wire  _T_5; // @[Decoupled.scala 216:32]
  wire [1:0] _T_12; // @[Counter.scala 38:22]
  wire [1:0] _T_20; // @[Decoupled.scala 248:40]
  wire  _T_21; // @[Decoupled.scala 250:32]
  wire [2:0] _T_22; // @[Decoupled.scala 250:20]
  wire [2:0] _GEN_14; // @[Decoupled.scala 250:62]
  assign _T_2 = value == value_1; // @[Decoupled.scala 214:41]
  assign _T_5 = _T_2 & _T_1; // @[Decoupled.scala 216:32]
  assign _T_12 = value + 2'h1; // @[Counter.scala 38:22]
  assign _T_20 = value - value_1; // @[Decoupled.scala 248:40]
  assign _T_21 = _T_1 & _T_2; // @[Decoupled.scala 250:32]
  assign _T_22 = _T_21 ? 3'h4 : 3'h0; // @[Decoupled.scala 250:20]
  assign _GEN_14 = {{1'd0}, _T_20}; // @[Decoupled.scala 250:62]
  assign io_enq_ready = _T_5 == 1'h0; // @[Decoupled.scala 232:16]
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
  if (reset) begin
    value = 2'h0;
  end
  if (reset) begin
    value_1 = 2'h0;
  end
  if (reset) begin
    _T_1 = 1'h0;
  end
end
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      value <= 2'h0;
    end else begin
      if (io_enq_ready) begin
        value <= _T_12;
      end
    end
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      value_1 <= 2'h0;
    end
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      _T_1 <= 1'h0;
    end else begin
      if (io_enq_ready) begin
        _T_1 <= io_enq_ready;
      end
    end
  end
endmodule
module AsyncResetQueueTester(
  input   clock,
  input   reset
);
  wire  queue_clock; // @[AsyncResetSpec.scala 101:11]
  wire  queue_reset; // @[AsyncResetSpec.scala 101:11]
  wire  queue_io_enq_ready; // @[AsyncResetSpec.scala 101:11]
  wire [2:0] queue_io_count; // @[AsyncResetSpec.scala 101:11]
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  cDiv; // @[Counter.scala 37:24]
  wire [1:0] _T_2; // @[Counter.scala 38:22]
  reg [3:0] value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_1;
  wire  done; // @[Counter.scala 37:24]
  wire [3:0] _T_5; // @[Counter.scala 38:22]
  reg  asyncResetNext; // @[AsyncResetSpec.scala 97:31]
  reg [31:0] _RAND_2;
  reg  doCheck; // @[AsyncResetSpec.scala 108:24]
  reg [31:0] _RAND_3;
  wire  _T_6; // @[AsyncResetSpec.scala 109:24]
  wire  _T_7; // @[AsyncResetSpec.scala 114:27]
  wire  _T_9; // @[AsyncResetSpec.scala 114:11]
  wire  _T_10; // @[AsyncResetSpec.scala 114:11]
  wire  _T_12; // @[AsyncResetSpec.scala 118:9]
  Queue queue ( // @[AsyncResetSpec.scala 101:11]
    .clock(queue_clock),
    .reset(queue_reset),
    .io_enq_ready(queue_io_enq_ready),
    .io_count(queue_io_count)
  );
  assign cDiv = value == 2'h3; // @[Counter.scala 37:24]
  assign _T_2 = value + 2'h1; // @[Counter.scala 38:22]
  assign done = value_1 == 4'hf; // @[Counter.scala 37:24]
  assign _T_5 = value_1 + 4'h1; // @[Counter.scala 38:22]
  assign _T_6 = queue_io_count == 3'h3; // @[AsyncResetSpec.scala 109:24]
  assign _T_7 = queue_io_count == 3'h0; // @[AsyncResetSpec.scala 114:27]
  assign _T_9 = _T_7 | reset; // @[AsyncResetSpec.scala 114:11]
  assign _T_10 = _T_9 == 1'h0; // @[AsyncResetSpec.scala 114:11]
  assign _T_12 = reset == 1'h0; // @[AsyncResetSpec.scala 118:9]
  assign queue_clock = cDiv;
  assign queue_reset = asyncResetNext;
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
  value_1 = _RAND_1[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  asyncResetNext = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  doCheck = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 2'h0;
    end else begin
      value <= _T_2;
    end
    if (reset) begin
      value_1 <= 4'h0;
    end else begin
      value_1 <= _T_5;
    end
    if (reset) begin
      asyncResetNext <= 1'h0;
    end else begin
      asyncResetNext <= _T_6;
    end
    if (reset) begin
      doCheck <= 1'h0;
    end else begin
      doCheck <= _T_6;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (doCheck & _T_10) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:114 assert(queue.io.count === 0.U)\n"); // @[AsyncResetSpec.scala 114:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (doCheck & _T_10) begin
          $fatal; // @[AsyncResetSpec.scala 114:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_12) begin
          $finish; // @[AsyncResetSpec.scala 118:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
