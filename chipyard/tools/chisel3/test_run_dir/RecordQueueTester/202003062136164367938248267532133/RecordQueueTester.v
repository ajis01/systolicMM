module Queue(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  output        io_deq_valid,
  output [31:0] io_deq_bits_bar,
  output [31:0] io_deq_bits_foo
);
  reg [31:0] _T_4_bar [0:3]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_0;
  wire [31:0] _T_4_bar__T_26_data; // @[Decoupled.scala 209:24]
  wire [1:0] _T_4_bar__T_26_addr; // @[Decoupled.scala 209:24]
  wire [31:0] _T_4_bar__T_16_data; // @[Decoupled.scala 209:24]
  wire [1:0] _T_4_bar__T_16_addr; // @[Decoupled.scala 209:24]
  wire  _T_4_bar__T_16_mask; // @[Decoupled.scala 209:24]
  wire  _T_4_bar__T_16_en; // @[Decoupled.scala 209:24]
  reg [31:0] _T_4_foo [0:3]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_1;
  wire [31:0] _T_4_foo__T_26_data; // @[Decoupled.scala 209:24]
  wire [1:0] _T_4_foo__T_26_addr; // @[Decoupled.scala 209:24]
  wire [31:0] _T_4_foo__T_16_data; // @[Decoupled.scala 209:24]
  wire [1:0] _T_4_foo__T_16_addr; // @[Decoupled.scala 209:24]
  wire  _T_4_foo__T_16_mask; // @[Decoupled.scala 209:24]
  wire  _T_4_foo__T_16_en; // @[Decoupled.scala 209:24]
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_2;
  reg [1:0] value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_3;
  reg  _T_5; // @[Decoupled.scala 212:35]
  reg [31:0] _RAND_4;
  wire  _T_6; // @[Decoupled.scala 214:41]
  wire  _T_7; // @[Decoupled.scala 215:36]
  wire  _T_8; // @[Decoupled.scala 215:33]
  wire  _T_9; // @[Decoupled.scala 216:32]
  wire  _T_10; // @[Decoupled.scala 40:37]
  wire [1:0] _T_18; // @[Counter.scala 38:22]
  wire [1:0] _T_20; // @[Counter.scala 38:22]
  wire  _T_21; // @[Decoupled.scala 227:16]
  assign _T_4_bar__T_26_addr = value_1;
  assign _T_4_bar__T_26_data = _T_4_bar[_T_4_bar__T_26_addr]; // @[Decoupled.scala 209:24]
  assign _T_4_bar__T_16_data = 32'h162e;
  assign _T_4_bar__T_16_addr = value;
  assign _T_4_bar__T_16_mask = 1'h1;
  assign _T_4_bar__T_16_en = io_enq_ready & io_enq_valid;
  assign _T_4_foo__T_26_addr = value_1;
  assign _T_4_foo__T_26_data = _T_4_foo[_T_4_foo__T_26_addr]; // @[Decoupled.scala 209:24]
  assign _T_4_foo__T_16_data = 32'h4d2;
  assign _T_4_foo__T_16_addr = value;
  assign _T_4_foo__T_16_mask = 1'h1;
  assign _T_4_foo__T_16_en = io_enq_ready & io_enq_valid;
  assign _T_6 = value == value_1; // @[Decoupled.scala 214:41]
  assign _T_7 = _T_5 == 1'h0; // @[Decoupled.scala 215:36]
  assign _T_8 = _T_6 & _T_7; // @[Decoupled.scala 215:33]
  assign _T_9 = _T_6 & _T_5; // @[Decoupled.scala 216:32]
  assign _T_10 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37]
  assign _T_18 = value + 2'h1; // @[Counter.scala 38:22]
  assign _T_20 = value_1 + 2'h1; // @[Counter.scala 38:22]
  assign _T_21 = _T_10 != io_deq_valid; // @[Decoupled.scala 227:16]
  assign io_enq_ready = _T_9 == 1'h0; // @[Decoupled.scala 232:16]
  assign io_deq_valid = _T_8 == 1'h0; // @[Decoupled.scala 231:16]
  assign io_deq_bits_bar = _T_4_bar__T_26_data; // @[Decoupled.scala 233:15]
  assign io_deq_bits_foo = _T_4_foo__T_26_data; // @[Decoupled.scala 233:15]
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
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    _T_4_bar[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_1 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 4; initvar = initvar+1)
    _T_4_foo[initvar] = _RAND_1[31:0];
  `endif // RANDOMIZE_MEM_INIT
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
  _T_5 = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(_T_4_bar__T_16_en & _T_4_bar__T_16_mask) begin
      _T_4_bar[_T_4_bar__T_16_addr] <= _T_4_bar__T_16_data; // @[Decoupled.scala 209:24]
    end
    if(_T_4_foo__T_16_en & _T_4_foo__T_16_mask) begin
      _T_4_foo[_T_4_foo__T_16_addr] <= _T_4_foo__T_16_data; // @[Decoupled.scala 209:24]
    end
    if (reset) begin
      value <= 2'h0;
    end else begin
      if (_T_10) begin
        value <= _T_18;
      end
    end
    if (reset) begin
      value_1 <= 2'h0;
    end else begin
      if (io_deq_valid) begin
        value_1 <= _T_20;
      end
    end
    if (reset) begin
      _T_5 <= 1'h0;
    end else begin
      if (_T_21) begin
        _T_5 <= _T_10;
      end
    end
  end
endmodule
module RecordQueueTester(
  input   clock,
  input   reset
);
  wire  queue_clock; // @[RecordSpec.scala 63:23]
  wire  queue_reset; // @[RecordSpec.scala 63:23]
  wire  queue_io_enq_ready; // @[RecordSpec.scala 63:23]
  wire  queue_io_enq_valid; // @[RecordSpec.scala 63:23]
  wire  queue_io_deq_valid; // @[RecordSpec.scala 63:23]
  wire [31:0] queue_io_deq_bits_bar; // @[RecordSpec.scala 63:23]
  wire [31:0] queue_io_deq_bits_foo; // @[RecordSpec.scala 63:23]
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  done; // @[Counter.scala 37:24]
  wire [1:0] _T_2; // @[Counter.scala 38:22]
  wire  _T_4; // @[RecordSpec.scala 73:17]
  wire  _T_5; // @[RecordSpec.scala 75:33]
  wire  _T_7; // @[RecordSpec.scala 75:13]
  wire  _T_8; // @[RecordSpec.scala 75:13]
  wire  _T_9; // @[RecordSpec.scala 76:46]
  wire  _T_11; // @[RecordSpec.scala 76:13]
  wire  _T_12; // @[RecordSpec.scala 76:13]
  wire  _T_13; // @[RecordSpec.scala 77:46]
  wire  _T_15; // @[RecordSpec.scala 77:13]
  wire  _T_16; // @[RecordSpec.scala 77:13]
  wire  _T_18; // @[RecordSpec.scala 80:11]
  Queue queue ( // @[RecordSpec.scala 63:23]
    .clock(queue_clock),
    .reset(queue_reset),
    .io_enq_ready(queue_io_enq_ready),
    .io_enq_valid(queue_io_enq_valid),
    .io_deq_valid(queue_io_deq_valid),
    .io_deq_bits_bar(queue_io_deq_bits_bar),
    .io_deq_bits_foo(queue_io_deq_bits_foo)
  );
  assign done = value == 2'h3; // @[Counter.scala 37:24]
  assign _T_2 = value + 2'h1; // @[Counter.scala 38:22]
  assign _T_4 = value == 2'h1; // @[RecordSpec.scala 73:17]
  assign _T_5 = queue_io_deq_valid; // @[RecordSpec.scala 75:33]
  assign _T_7 = _T_5 | reset; // @[RecordSpec.scala 75:13]
  assign _T_8 = _T_7 == 1'h0; // @[RecordSpec.scala 75:13]
  assign _T_9 = queue_io_deq_bits_foo == 32'h4d2; // @[RecordSpec.scala 76:46]
  assign _T_11 = _T_9 | reset; // @[RecordSpec.scala 76:13]
  assign _T_12 = _T_11 == 1'h0; // @[RecordSpec.scala 76:13]
  assign _T_13 = queue_io_deq_bits_bar == 32'h162e; // @[RecordSpec.scala 77:46]
  assign _T_15 = _T_13 | reset; // @[RecordSpec.scala 77:13]
  assign _T_16 = _T_15 == 1'h0; // @[RecordSpec.scala 77:13]
  assign _T_18 = reset == 1'h0; // @[RecordSpec.scala 80:11]
  assign queue_clock = clock;
  assign queue_reset = reset;
  assign queue_io_enq_valid = value == 2'h0; // @[RecordSpec.scala 65:24 RecordSpec.scala 71:26]
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
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 2'h0;
    end else begin
      value <= _T_2;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_4 & _T_8) begin
          $fwrite(32'h80000002,"Assertion failed\n    at RecordSpec.scala:75 assert(queue.io.deq.valid === true.B)\n"); // @[RecordSpec.scala 75:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4 & _T_8) begin
          $fatal; // @[RecordSpec.scala 75:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_4 & _T_12) begin
          $fwrite(32'h80000002,"Assertion failed\n    at RecordSpec.scala:76 assert(queue.io.deq.bits(\"foo\").asUInt === 1234.U)\n"); // @[RecordSpec.scala 76:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4 & _T_12) begin
          $fatal; // @[RecordSpec.scala 76:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_4 & _T_16) begin
          $fwrite(32'h80000002,"Assertion failed\n    at RecordSpec.scala:77 assert(queue.io.deq.bits(\"bar\").asUInt === 5678.U)\n"); // @[RecordSpec.scala 77:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4 & _T_16) begin
          $fatal; // @[RecordSpec.scala 77:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_18) begin
          $finish; // @[RecordSpec.scala 80:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
