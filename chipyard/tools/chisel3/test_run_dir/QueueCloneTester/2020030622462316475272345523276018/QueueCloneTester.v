module Queue(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input  [31:0] io_enq_bits,
  input         io_deq_ready,
  output        io_deq_valid,
  output [31:0] io_deq_bits
);
  reg [31:0] _T [0:1]; // @[Decoupled.scala 209:24]
  reg [31:0] _RAND_0;
  wire [31:0] _T__T_18_data; // @[Decoupled.scala 209:24]
  wire  _T__T_18_addr; // @[Decoupled.scala 209:24]
  wire [31:0] _T__T_10_data; // @[Decoupled.scala 209:24]
  wire  _T__T_10_addr; // @[Decoupled.scala 209:24]
  wire  _T__T_10_mask; // @[Decoupled.scala 209:24]
  wire  _T__T_10_en; // @[Decoupled.scala 209:24]
  reg  value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_1;
  reg  value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_2;
  reg  _T_1; // @[Decoupled.scala 212:35]
  reg [31:0] _RAND_3;
  wire  _T_2; // @[Decoupled.scala 214:41]
  wire  _T_3; // @[Decoupled.scala 215:36]
  wire  _T_4; // @[Decoupled.scala 215:33]
  wire  _T_5; // @[Decoupled.scala 216:32]
  wire  _T_6; // @[Decoupled.scala 40:37]
  wire  _T_8; // @[Decoupled.scala 40:37]
  wire  _T_12; // @[Counter.scala 38:22]
  wire  _T_14; // @[Counter.scala 38:22]
  wire  _T_15; // @[Decoupled.scala 227:16]
  assign _T__T_18_addr = value_1;
  assign _T__T_18_data = _T[_T__T_18_addr]; // @[Decoupled.scala 209:24]
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
  assign _T_12 = value + 1'h1; // @[Counter.scala 38:22]
  assign _T_14 = value_1 + 1'h1; // @[Counter.scala 38:22]
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
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    _T[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  value = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  value_1 = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  _T_1 = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(_T__T_10_en & _T__T_10_mask) begin
      _T[_T__T_10_addr] <= _T__T_10_data; // @[Decoupled.scala 209:24]
    end
    if (reset) begin
      value <= 1'h0;
    end else begin
      if (_T_6) begin
        value <= _T_12;
      end
    end
    if (reset) begin
      value_1 <= 1'h0;
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
module QueueClone(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input         io_deq_ready,
  output        io_deq_valid,
  output [31:0] io_deq_bits
);
  wire  Queue_clock; // @[CloneModuleSpec.scala 36:20]
  wire  Queue_reset; // @[CloneModuleSpec.scala 36:20]
  wire  Queue_io_enq_ready; // @[CloneModuleSpec.scala 36:20]
  wire  Queue_io_enq_valid; // @[CloneModuleSpec.scala 36:20]
  wire [31:0] Queue_io_enq_bits; // @[CloneModuleSpec.scala 36:20]
  wire  Queue_io_deq_ready; // @[CloneModuleSpec.scala 36:20]
  wire  Queue_io_deq_valid; // @[CloneModuleSpec.scala 36:20]
  wire [31:0] Queue_io_deq_bits; // @[CloneModuleSpec.scala 36:20]
  wire  _T_clock; // @[CloneModuleSpec.scala 37:36]
  wire  _T_reset; // @[CloneModuleSpec.scala 37:36]
  wire  _T_io_enq_ready; // @[CloneModuleSpec.scala 37:36]
  wire  _T_io_enq_valid; // @[CloneModuleSpec.scala 37:36]
  wire [31:0] _T_io_enq_bits; // @[CloneModuleSpec.scala 37:36]
  wire  _T_io_deq_ready; // @[CloneModuleSpec.scala 37:36]
  wire  _T_io_deq_valid; // @[CloneModuleSpec.scala 37:36]
  wire [31:0] _T_io_deq_bits; // @[CloneModuleSpec.scala 37:36]
  Queue Queue ( // @[CloneModuleSpec.scala 36:20]
    .clock(Queue_clock),
    .reset(Queue_reset),
    .io_enq_ready(Queue_io_enq_ready),
    .io_enq_valid(Queue_io_enq_valid),
    .io_enq_bits(Queue_io_enq_bits),
    .io_deq_ready(Queue_io_deq_ready),
    .io_deq_valid(Queue_io_deq_valid),
    .io_deq_bits(Queue_io_deq_bits)
  );
  Queue _T ( // @[CloneModuleSpec.scala 37:36]
    .clock(_T_clock),
    .reset(_T_reset),
    .io_enq_ready(_T_io_enq_ready),
    .io_enq_valid(_T_io_enq_valid),
    .io_enq_bits(_T_io_enq_bits),
    .io_deq_ready(_T_io_deq_ready),
    .io_deq_valid(_T_io_deq_valid),
    .io_deq_bits(_T_io_deq_bits)
  );
  assign io_enq_ready = Queue_io_enq_ready; // @[CloneModuleSpec.scala 38:15]
  assign io_deq_valid = _T_io_deq_valid; // @[CloneModuleSpec.scala 41:12]
  assign io_deq_bits = _T_io_deq_bits; // @[CloneModuleSpec.scala 41:12]
  assign Queue_clock = clock;
  assign Queue_reset = reset;
  assign Queue_io_enq_valid = io_enq_valid; // @[CloneModuleSpec.scala 38:15]
  assign Queue_io_enq_bits = 32'h63; // @[CloneModuleSpec.scala 38:15]
  assign Queue_io_deq_ready = _T_io_enq_ready; // @[CloneModuleSpec.scala 40:22]
  assign _T_clock = clock; // @[CloneModuleSpec.scala 37:36]
  assign _T_reset = reset; // @[CloneModuleSpec.scala 37:36]
  assign _T_io_enq_valid = Queue_io_deq_valid; // @[CloneModuleSpec.scala 40:22]
  assign _T_io_enq_bits = Queue_io_deq_bits; // @[CloneModuleSpec.scala 40:22]
  assign _T_io_deq_ready = io_deq_ready; // @[CloneModuleSpec.scala 41:12]
endmodule
module QueueCloneTester(
  input   clock,
  input   reset
);
  wire  dut_clock; // @[CloneModuleSpec.scala 47:19]
  wire  dut_reset; // @[CloneModuleSpec.scala 47:19]
  wire  dut_io_enq_ready; // @[CloneModuleSpec.scala 47:19]
  wire  dut_io_enq_valid; // @[CloneModuleSpec.scala 47:19]
  wire  dut_io_deq_ready; // @[CloneModuleSpec.scala 47:19]
  wire  dut_io_deq_valid; // @[CloneModuleSpec.scala 47:19]
  wire [31:0] dut_io_deq_bits; // @[CloneModuleSpec.scala 47:19]
  wire  _T; // @[Decoupled.scala 40:37]
  reg  start; // @[CloneModuleSpec.scala 48:22]
  reg [31:0] _RAND_0;
  reg  accept; // @[CloneModuleSpec.scala 49:23]
  reg [31:0] _RAND_1;
  wire  _T_1; // @[Decoupled.scala 40:37]
  wire  _T_2; // @[CloneModuleSpec.scala 54:28]
  wire  _T_4; // @[CloneModuleSpec.scala 54:11]
  wire  _T_5; // @[CloneModuleSpec.scala 54:11]
  wire  _T_7; // @[CloneModuleSpec.scala 55:9]
  QueueClone dut ( // @[CloneModuleSpec.scala 47:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_enq_ready(dut_io_enq_ready),
    .io_enq_valid(dut_io_enq_valid),
    .io_deq_ready(dut_io_deq_ready),
    .io_deq_valid(dut_io_deq_valid),
    .io_deq_bits(dut_io_deq_bits)
  );
  assign _T = dut_io_enq_ready & dut_io_enq_valid; // @[Decoupled.scala 40:37]
  assign _T_1 = dut_io_deq_ready & dut_io_deq_valid; // @[Decoupled.scala 40:37]
  assign _T_2 = dut_io_deq_bits == 32'h63; // @[CloneModuleSpec.scala 54:28]
  assign _T_4 = _T_2 | reset; // @[CloneModuleSpec.scala 54:11]
  assign _T_5 = _T_4 == 1'h0; // @[CloneModuleSpec.scala 54:11]
  assign _T_7 = reset == 1'h0; // @[CloneModuleSpec.scala 55:9]
  assign dut_clock = clock;
  assign dut_reset = reset;
  assign dut_io_enq_valid = start; // @[CloneModuleSpec.scala 51:20]
  assign dut_io_deq_ready = accept; // @[CloneModuleSpec.scala 52:20]
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
  start = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  accept = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    start <= reset | _T;
    if (reset) begin
      accept <= 1'h0;
    end else begin
      accept <= dut_io_deq_valid;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & _T_5) begin
          $fwrite(32'h80000002,"Assertion failed\n    at CloneModuleSpec.scala:54 assert(dut.io.deq.bits === x.U)\n"); // @[CloneModuleSpec.scala 54:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & _T_5) begin
          $fatal; // @[CloneModuleSpec.scala 54:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & _T_7) begin
          $finish; // @[CloneModuleSpec.scala 55:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
