module Queue_6_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@46999.2]
  input         clock, // @[:example.TestHarness.GemminiRocketConfig.fir@47000.4]
  input         reset, // @[:example.TestHarness.GemminiRocketConfig.fir@47001.4]
  output        io_enq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
  input         io_enq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
  input  [63:0] io_enq_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
  input  [7:0]  io_enq_bits_strb, // @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
  input         io_enq_bits_last, // @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
  input         io_deq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
  output        io_deq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
  output [63:0] io_deq_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
  output [7:0]  io_deq_bits_strb, // @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
  output        io_deq_bits_last // @[:example.TestHarness.GemminiRocketConfig.fir@47002.4]
);
  reg [63:0] _T_data [0:0]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  reg [63:0] _RAND_0;
  wire [63:0] _T_data__T_14_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_data__T_14_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire [63:0] _T_data__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_data__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_data__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_data__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  reg [7:0] _T_strb [0:0]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  reg [31:0] _RAND_1;
  wire [7:0] _T_strb__T_14_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_strb__T_14_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire [7:0] _T_strb__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_strb__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_strb__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_strb__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  reg  _T_last [0:0]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  reg [31:0] _RAND_2;
  wire  _T_last__T_14_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_last__T_14_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_last__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_last__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_last__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  wire  _T_last__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  reg  _T_1; // @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@47005.4]
  reg [31:0] _RAND_3;
  wire  _T_3; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@47007.4]
  wire  _T_6; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@47010.4]
  wire  _T_8; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@47013.4]
  wire  _GEN_9; // @[Decoupled.scala 240:27:example.TestHarness.GemminiRocketConfig.fir@47044.6]
  wire  _GEN_14; // @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@47039.4]
  wire  _GEN_13; // @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@47039.4]
  wire  _T_11; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@47024.4]
  wire  _T_12; // @[Decoupled.scala 231:19:example.TestHarness.GemminiRocketConfig.fir@47028.4]
  assign _T_data__T_14_addr = 1'h0;
  assign _T_data__T_14_data = _T_data[_T_data__T_14_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  assign _T_data__T_10_data = io_enq_bits_data;
  assign _T_data__T_10_addr = 1'h0;
  assign _T_data__T_10_mask = 1'h1;
  assign _T_data__T_10_en = _T_3 ? _GEN_9 : _T_6;
  assign _T_strb__T_14_addr = 1'h0;
  assign _T_strb__T_14_data = _T_strb[_T_strb__T_14_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  assign _T_strb__T_10_data = io_enq_bits_strb;
  assign _T_strb__T_10_addr = 1'h0;
  assign _T_strb__T_10_mask = 1'h1;
  assign _T_strb__T_10_en = _T_3 ? _GEN_9 : _T_6;
  assign _T_last__T_14_addr = 1'h0;
  assign _T_last__T_14_data = _T_last[_T_last__T_14_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
  assign _T_last__T_10_data = io_enq_bits_last;
  assign _T_last__T_10_addr = 1'h0;
  assign _T_last__T_10_mask = 1'h1;
  assign _T_last__T_10_en = _T_3 ? _GEN_9 : _T_6;
  assign _T_3 = _T_1 == 1'h0; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@47007.4]
  assign _T_6 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@47010.4]
  assign _T_8 = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@47013.4]
  assign _GEN_9 = io_deq_ready ? 1'h0 : _T_6; // @[Decoupled.scala 240:27:example.TestHarness.GemminiRocketConfig.fir@47044.6]
  assign _GEN_14 = _T_3 ? _GEN_9 : _T_6; // @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@47039.4]
  assign _GEN_13 = _T_3 ? 1'h0 : _T_8; // @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@47039.4]
  assign _T_11 = _GEN_14 != _GEN_13; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@47024.4]
  assign _T_12 = _T_3 == 1'h0; // @[Decoupled.scala 231:19:example.TestHarness.GemminiRocketConfig.fir@47028.4]
  assign io_enq_ready = _T_1 == 1'h0; // @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@47031.4]
  assign io_deq_valid = io_enq_valid | _T_12; // @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@47029.4 Decoupled.scala 236:40:example.TestHarness.GemminiRocketConfig.fir@47037.6]
  assign io_deq_bits_data = _T_3 ? io_enq_bits_data : _T_data__T_14_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@47035.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@47042.6]
  assign io_deq_bits_strb = _T_3 ? io_enq_bits_strb : _T_strb__T_14_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@47034.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@47041.6]
  assign io_deq_bits_last = _T_3 ? io_enq_bits_last : _T_last__T_14_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@47033.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@47040.6]
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
  _RAND_0 = {2{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    _T_data[initvar] = _RAND_0[63:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_1 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    _T_strb[initvar] = _RAND_1[7:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_2 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    _T_last[initvar] = _RAND_2[0:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  _T_1 = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(_T_data__T_10_en & _T_data__T_10_mask) begin
      _T_data[_T_data__T_10_addr] <= _T_data__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
    end
    if(_T_strb__T_10_en & _T_strb__T_10_mask) begin
      _T_strb[_T_strb__T_10_addr] <= _T_strb__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
    end
    if(_T_last__T_10_en & _T_last__T_10_mask) begin
      _T_last[_T_last__T_10_addr] <= _T_last__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@47004.4]
    end
    if (reset) begin
      _T_1 <= 1'h0;
    end else begin
      if (_T_11) begin
        if (_T_3) begin
          if (io_deq_ready) begin
            _T_1 <= 1'h0;
          end else begin
            _T_1 <= _T_6;
          end
        end else begin
          _T_1 <= _T_6;
        end
      end
    end
  end
endmodule
module Queue_52_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@323662.2]
  input        clock, // @[:example.TestHarness.GemminiRocketConfig.fir@323663.4]
  input        reset, // @[:example.TestHarness.GemminiRocketConfig.fir@323664.4]
  output       io_enq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
  input        io_enq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
  input  [7:0] io_enq_bits, // @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
  input        io_deq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
  output       io_deq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
  output [7:0] io_deq_bits // @[:example.TestHarness.GemminiRocketConfig.fir@323665.4]
);
  reg [7:0] _T [0:127]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@323667.4]
  reg [31:0] _RAND_0;
  wire [7:0] _T__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@323667.4]
  wire [6:0] _T__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@323667.4]
  wire [7:0] _T__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@323667.4]
  wire [6:0] _T__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@323667.4]
  wire  _T__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@323667.4]
  wire  _T__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@323667.4]
  reg [6:0] value; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323668.4]
  reg [31:0] _RAND_1;
  reg [6:0] value_1; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323669.4]
  reg [31:0] _RAND_2;
  reg  _T_1; // @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@323670.4]
  reg [31:0] _RAND_3;
  wire  _T_2; // @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@323671.4]
  wire  _T_3; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@323672.4]
  wire  _T_4; // @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@323673.4]
  wire  _T_5; // @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@323674.4]
  wire  _T_6; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@323675.4]
  wire  _T_8; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@323678.4]
  wire [6:0] _T_12; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323686.6]
  wire [6:0] _T_14; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323692.6]
  wire  _T_15; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@323695.4]
  assign _T__T_18_addr = value_1;
  assign _T__T_18_data = _T[_T__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@323667.4]
  assign _T__T_10_data = io_enq_bits;
  assign _T__T_10_addr = value;
  assign _T__T_10_mask = 1'h1;
  assign _T__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_2 = value == value_1; // @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@323671.4]
  assign _T_3 = _T_1 == 1'h0; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@323672.4]
  assign _T_4 = _T_2 & _T_3; // @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@323673.4]
  assign _T_5 = _T_2 & _T_1; // @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@323674.4]
  assign _T_6 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@323675.4]
  assign _T_8 = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@323678.4]
  assign _T_12 = value + 7'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323686.6]
  assign _T_14 = value_1 + 7'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323692.6]
  assign _T_15 = _T_6 != _T_8; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@323695.4]
  assign io_enq_ready = _T_5 == 1'h0; // @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@323702.4]
  assign io_deq_valid = _T_4 == 1'h0; // @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@323700.4]
  assign io_deq_bits = _T__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@323704.4]
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
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    _T[initvar] = _RAND_0[7:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  value = _RAND_1[6:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  value_1 = _RAND_2[6:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  _T_1 = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(_T__T_10_en & _T__T_10_mask) begin
      _T[_T__T_10_addr] <= _T__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@323667.4]
    end
    if (reset) begin
      value <= 7'h0;
    end else begin
      if (_T_6) begin
        value <= _T_12;
      end
    end
    if (reset) begin
      value_1 <= 7'h0;
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
module UARTAdapter_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@323770.2]
  input   clock, // @[:example.TestHarness.GemminiRocketConfig.fir@323771.4]
  input   reset, // @[:example.TestHarness.GemminiRocketConfig.fir@323772.4]
  input   io_uart_txd, // @[:example.TestHarness.GemminiRocketConfig.fir@323773.4]
  output  io_uart_rxd // @[:example.TestHarness.GemminiRocketConfig.fir@323773.4]
);
  wire  txfifo_clock; // @[UARTAdapter.scala 37:22:example.TestHarness.GemminiRocketConfig.fir@323775.4]
  wire  txfifo_reset; // @[UARTAdapter.scala 37:22:example.TestHarness.GemminiRocketConfig.fir@323775.4]
  wire  txfifo_io_enq_ready; // @[UARTAdapter.scala 37:22:example.TestHarness.GemminiRocketConfig.fir@323775.4]
  wire  txfifo_io_enq_valid; // @[UARTAdapter.scala 37:22:example.TestHarness.GemminiRocketConfig.fir@323775.4]
  wire [7:0] txfifo_io_enq_bits; // @[UARTAdapter.scala 37:22:example.TestHarness.GemminiRocketConfig.fir@323775.4]
  wire  txfifo_io_deq_ready; // @[UARTAdapter.scala 37:22:example.TestHarness.GemminiRocketConfig.fir@323775.4]
  wire  txfifo_io_deq_valid; // @[UARTAdapter.scala 37:22:example.TestHarness.GemminiRocketConfig.fir@323775.4]
  wire [7:0] txfifo_io_deq_bits; // @[UARTAdapter.scala 37:22:example.TestHarness.GemminiRocketConfig.fir@323775.4]
  wire  rxfifo_clock; // @[UARTAdapter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323778.4]
  wire  rxfifo_reset; // @[UARTAdapter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323778.4]
  wire  rxfifo_io_enq_ready; // @[UARTAdapter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323778.4]
  wire  rxfifo_io_enq_valid; // @[UARTAdapter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323778.4]
  wire [7:0] rxfifo_io_enq_bits; // @[UARTAdapter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323778.4]
  wire  rxfifo_io_deq_ready; // @[UARTAdapter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323778.4]
  wire  rxfifo_io_deq_valid; // @[UARTAdapter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323778.4]
  wire [7:0] rxfifo_io_deq_bits; // @[UARTAdapter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323778.4]
  wire  sim_clock; // @[UARTAdapter.scala 113:19:example.TestHarness.GemminiRocketConfig.fir@323917.4]
  wire  sim_reset; // @[UARTAdapter.scala 113:19:example.TestHarness.GemminiRocketConfig.fir@323917.4]
  wire  sim_serial_in_ready; // @[UARTAdapter.scala 113:19:example.TestHarness.GemminiRocketConfig.fir@323917.4]
  wire  sim_serial_in_valid; // @[UARTAdapter.scala 113:19:example.TestHarness.GemminiRocketConfig.fir@323917.4]
  wire [7:0] sim_serial_in_bits; // @[UARTAdapter.scala 113:19:example.TestHarness.GemminiRocketConfig.fir@323917.4]
  wire  sim_serial_out_ready; // @[UARTAdapter.scala 113:19:example.TestHarness.GemminiRocketConfig.fir@323917.4]
  wire  sim_serial_out_valid; // @[UARTAdapter.scala 113:19:example.TestHarness.GemminiRocketConfig.fir@323917.4]
  wire [7:0] sim_serial_out_bits; // @[UARTAdapter.scala 113:19:example.TestHarness.GemminiRocketConfig.fir@323917.4]
  reg [1:0] txState; // @[UARTAdapter.scala 43:24:example.TestHarness.GemminiRocketConfig.fir@323781.4]
  reg [31:0] _RAND_0;
  reg [7:0] txData; // @[UARTAdapter.scala 44:19:example.TestHarness.GemminiRocketConfig.fir@323782.4]
  reg [31:0] _RAND_1;
  wire  _T; // @[UARTAdapter.scala 46:49:example.TestHarness.GemminiRocketConfig.fir@323783.4]
  wire  _T_1; // @[UARTAdapter.scala 46:61:example.TestHarness.GemminiRocketConfig.fir@323784.4]
  reg [2:0] value; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323785.4]
  reg [31:0] _RAND_2;
  wire  _T_2; // @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323787.6]
  wire [2:0] _T_4; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323789.6]
  wire  txDataWrap; // @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323792.4]
  wire  _T_5; // @[UARTAdapter.scala 48:51:example.TestHarness.GemminiRocketConfig.fir@323793.4]
  wire  _T_6; // @[UARTAdapter.scala 48:63:example.TestHarness.GemminiRocketConfig.fir@323794.4]
  reg [9:0] value_1; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323795.4]
  reg [31:0] _RAND_3;
  wire  _T_7; // @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323797.6]
  wire [9:0] _T_9; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323799.6]
  wire  txBaudWrap; // @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323805.4]
  wire  _T_10; // @[UARTAdapter.scala 49:53:example.TestHarness.GemminiRocketConfig.fir@323806.4]
  wire  _T_11; // @[UARTAdapter.scala 49:80:example.TestHarness.GemminiRocketConfig.fir@323807.4]
  wire  _T_12; // @[UARTAdapter.scala 49:65:example.TestHarness.GemminiRocketConfig.fir@323808.4]
  wire  _T_13; // @[UARTAdapter.scala 49:88:example.TestHarness.GemminiRocketConfig.fir@323809.4]
  reg [1:0] value_2; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323810.4]
  reg [31:0] _RAND_4;
  wire  _T_14; // @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323812.6]
  wire [1:0] _T_16; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323814.6]
  wire  txSlackWrap; // @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323817.4]
  wire  _T_17; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323818.4]
  wire  _T_18; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323826.6]
  wire  _T_19; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323833.8]
  wire [7:0] _GEN_30; // @[UARTAdapter.scala 65:41:example.TestHarness.GemminiRocketConfig.fir@323836.12]
  wire [7:0] _T_20; // @[UARTAdapter.scala 65:41:example.TestHarness.GemminiRocketConfig.fir@323836.12]
  wire [7:0] _T_21; // @[UARTAdapter.scala 65:26:example.TestHarness.GemminiRocketConfig.fir@323837.12]
  wire  _T_24; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323851.10]
  wire  _T_26; // @[UARTAdapter.scala 74:32:example.TestHarness.GemminiRocketConfig.fir@323854.12]
  reg [1:0] rxState; // @[UARTAdapter.scala 84:24:example.TestHarness.GemminiRocketConfig.fir@323861.4]
  reg [31:0] _RAND_5;
  reg [9:0] value_3; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323862.4]
  reg [31:0] _RAND_6;
  wire  _T_27; // @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323864.6]
  wire [9:0] _T_29; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323866.6]
  wire  rxBaudWrap; // @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323872.4]
  wire  _T_30; // @[UARTAdapter.scala 88:49:example.TestHarness.GemminiRocketConfig.fir@323873.4]
  wire  _T_31; // @[UARTAdapter.scala 88:61:example.TestHarness.GemminiRocketConfig.fir@323874.4]
  wire  _T_32; // @[UARTAdapter.scala 88:84:example.TestHarness.GemminiRocketConfig.fir@323875.4]
  reg [2:0] value_4; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@323876.4]
  reg [31:0] _RAND_7;
  wire  _T_33; // @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323878.6]
  wire [2:0] _T_35; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323880.6]
  wire  rxDataWrap; // @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323883.4]
  wire  _T_36; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323885.4]
  wire  _T_37; // @[UARTAdapter.scala 94:24:example.TestHarness.GemminiRocketConfig.fir@323888.6]
  wire  _T_38; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323894.6]
  wire  _T_39; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323902.8]
  wire [7:0] _T_40; // @[UARTAdapter.scala 105:42:example.TestHarness.GemminiRocketConfig.fir@323904.10]
  wire  _T_41; // @[UARTAdapter.scala 105:55:example.TestHarness.GemminiRocketConfig.fir@323905.10]
  wire  _T_42; // @[UARTAdapter.scala 106:23:example.TestHarness.GemminiRocketConfig.fir@323907.10]
  wire  _GEN_24; // @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323903.8]
  wire  _GEN_26; // @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323895.6]
  wire  _T_44; // @[UARTAdapter.scala 111:48:example.TestHarness.GemminiRocketConfig.fir@323913.4]
  wire  _T_45; // @[UARTAdapter.scala 111:62:example.TestHarness.GemminiRocketConfig.fir@323914.4]
  Queue_52_inTestHarness txfifo ( // @[UARTAdapter.scala 37:22:example.TestHarness.GemminiRocketConfig.fir@323775.4]
    .clock(txfifo_clock),
    .reset(txfifo_reset),
    .io_enq_ready(txfifo_io_enq_ready),
    .io_enq_valid(txfifo_io_enq_valid),
    .io_enq_bits(txfifo_io_enq_bits),
    .io_deq_ready(txfifo_io_deq_ready),
    .io_deq_valid(txfifo_io_deq_valid),
    .io_deq_bits(txfifo_io_deq_bits)
  );
  Queue_52_inTestHarness rxfifo ( // @[UARTAdapter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323778.4]
    .clock(rxfifo_clock),
    .reset(rxfifo_reset),
    .io_enq_ready(rxfifo_io_enq_ready),
    .io_enq_valid(rxfifo_io_enq_valid),
    .io_enq_bits(rxfifo_io_enq_bits),
    .io_deq_ready(rxfifo_io_deq_ready),
    .io_deq_valid(rxfifo_io_deq_valid),
    .io_deq_bits(rxfifo_io_deq_bits)
  );
  SimUART #(.UARTNO(0)) sim ( // @[UARTAdapter.scala 113:19:example.TestHarness.GemminiRocketConfig.fir@323917.4]
    .clock(sim_clock),
    .reset(sim_reset),
    .serial_in_ready(sim_serial_in_ready),
    .serial_in_valid(sim_serial_in_valid),
    .serial_in_bits(sim_serial_in_bits),
    .serial_out_ready(sim_serial_out_ready),
    .serial_out_valid(sim_serial_out_valid),
    .serial_out_bits(sim_serial_out_bits)
  );
  assign _T = txState == 2'h2; // @[UARTAdapter.scala 46:49:example.TestHarness.GemminiRocketConfig.fir@323783.4]
  assign _T_1 = _T & txfifo_io_enq_ready; // @[UARTAdapter.scala 46:61:example.TestHarness.GemminiRocketConfig.fir@323784.4]
  assign _T_2 = value == 3'h7; // @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323787.6]
  assign _T_4 = value + 3'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323789.6]
  assign txDataWrap = _T_1 & _T_2; // @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323792.4]
  assign _T_5 = txState == 2'h1; // @[UARTAdapter.scala 48:51:example.TestHarness.GemminiRocketConfig.fir@323793.4]
  assign _T_6 = _T_5 & txfifo_io_enq_ready; // @[UARTAdapter.scala 48:63:example.TestHarness.GemminiRocketConfig.fir@323794.4]
  assign _T_7 = value_1 == 10'h363; // @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323797.6]
  assign _T_9 = value_1 + 10'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323799.6]
  assign txBaudWrap = _T_6 & _T_7; // @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323805.4]
  assign _T_10 = txState == 2'h0; // @[UARTAdapter.scala 49:53:example.TestHarness.GemminiRocketConfig.fir@323806.4]
  assign _T_11 = io_uart_txd == 1'h0; // @[UARTAdapter.scala 49:80:example.TestHarness.GemminiRocketConfig.fir@323807.4]
  assign _T_12 = _T_10 & _T_11; // @[UARTAdapter.scala 49:65:example.TestHarness.GemminiRocketConfig.fir@323808.4]
  assign _T_13 = _T_12 & txfifo_io_enq_ready; // @[UARTAdapter.scala 49:88:example.TestHarness.GemminiRocketConfig.fir@323809.4]
  assign _T_14 = value_2 == 2'h3; // @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323812.6]
  assign _T_16 = value_2 + 2'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323814.6]
  assign txSlackWrap = _T_13 & _T_14; // @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323817.4]
  assign _T_17 = 2'h0 == txState; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323818.4]
  assign _T_18 = 2'h1 == txState; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323826.6]
  assign _T_19 = 2'h2 == txState; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323833.8]
  assign _GEN_30 = {{7'd0}, io_uart_txd}; // @[UARTAdapter.scala 65:41:example.TestHarness.GemminiRocketConfig.fir@323836.12]
  assign _T_20 = _GEN_30 << value; // @[UARTAdapter.scala 65:41:example.TestHarness.GemminiRocketConfig.fir@323836.12]
  assign _T_21 = txData | _T_20; // @[UARTAdapter.scala 65:26:example.TestHarness.GemminiRocketConfig.fir@323837.12]
  assign _T_24 = 2'h3 == txState; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323851.10]
  assign _T_26 = io_uart_txd & txfifo_io_enq_ready; // @[UARTAdapter.scala 74:32:example.TestHarness.GemminiRocketConfig.fir@323854.12]
  assign _T_27 = value_3 == 10'h363; // @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323864.6]
  assign _T_29 = value_3 + 10'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323866.6]
  assign rxBaudWrap = txfifo_io_enq_ready & _T_27; // @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323872.4]
  assign _T_30 = rxState == 2'h2; // @[UARTAdapter.scala 88:49:example.TestHarness.GemminiRocketConfig.fir@323873.4]
  assign _T_31 = _T_30 & txfifo_io_enq_ready; // @[UARTAdapter.scala 88:61:example.TestHarness.GemminiRocketConfig.fir@323874.4]
  assign _T_32 = _T_31 & rxBaudWrap; // @[UARTAdapter.scala 88:84:example.TestHarness.GemminiRocketConfig.fir@323875.4]
  assign _T_33 = value_4 == 3'h7; // @[Counter.scala 37:24:example.TestHarness.GemminiRocketConfig.fir@323878.6]
  assign _T_35 = value_4 + 3'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@323880.6]
  assign rxDataWrap = _T_32 & _T_33; // @[Counter.scala 72:20:example.TestHarness.GemminiRocketConfig.fir@323883.4]
  assign _T_36 = 2'h0 == rxState; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323885.4]
  assign _T_37 = rxBaudWrap & rxfifo_io_deq_valid; // @[UARTAdapter.scala 94:24:example.TestHarness.GemminiRocketConfig.fir@323888.6]
  assign _T_38 = 2'h1 == rxState; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323894.6]
  assign _T_39 = 2'h2 == rxState; // @[Conditional.scala 37:30:example.TestHarness.GemminiRocketConfig.fir@323902.8]
  assign _T_40 = rxfifo_io_deq_bits >> value_4; // @[UARTAdapter.scala 105:42:example.TestHarness.GemminiRocketConfig.fir@323904.10]
  assign _T_41 = _T_40[0]; // @[UARTAdapter.scala 105:55:example.TestHarness.GemminiRocketConfig.fir@323905.10]
  assign _T_42 = rxDataWrap & rxBaudWrap; // @[UARTAdapter.scala 106:23:example.TestHarness.GemminiRocketConfig.fir@323907.10]
  assign _GEN_24 = _T_39 ? _T_41 : 1'h1; // @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323903.8]
  assign _GEN_26 = _T_38 ? 1'h0 : _GEN_24; // @[Conditional.scala 39:67:example.TestHarness.GemminiRocketConfig.fir@323895.6]
  assign _T_44 = _T_30 & rxDataWrap; // @[UARTAdapter.scala 111:48:example.TestHarness.GemminiRocketConfig.fir@323913.4]
  assign _T_45 = _T_44 & rxBaudWrap; // @[UARTAdapter.scala 111:62:example.TestHarness.GemminiRocketConfig.fir@323914.4]
  assign io_uart_rxd = _T_36 | _GEN_26; // @[UARTAdapter.scala 90:15:example.TestHarness.GemminiRocketConfig.fir@323884.4 UARTAdapter.scala 93:19:example.TestHarness.GemminiRocketConfig.fir@323887.6 UARTAdapter.scala 99:19:example.TestHarness.GemminiRocketConfig.fir@323896.8 UARTAdapter.scala 105:19:example.TestHarness.GemminiRocketConfig.fir@323906.10]
  assign txfifo_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@323776.4]
  assign txfifo_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@323777.4]
  assign txfifo_io_enq_valid = _T_1 & _T_2; // @[UARTAdapter.scala 81:23:example.TestHarness.GemminiRocketConfig.fir@323860.4]
  assign txfifo_io_enq_bits = txData; // @[UARTAdapter.scala 80:23:example.TestHarness.GemminiRocketConfig.fir@323859.4]
  assign txfifo_io_deq_ready = sim_serial_out_ready; // @[UARTAdapter.scala 120:23:example.TestHarness.GemminiRocketConfig.fir@323926.4]
  assign rxfifo_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@323779.4]
  assign rxfifo_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@323780.4]
  assign rxfifo_io_enq_valid = sim_serial_in_valid; // @[UARTAdapter.scala 123:23:example.TestHarness.GemminiRocketConfig.fir@323928.4]
  assign rxfifo_io_enq_bits = sim_serial_in_bits; // @[UARTAdapter.scala 122:22:example.TestHarness.GemminiRocketConfig.fir@323927.4]
  assign rxfifo_io_deq_ready = _T_45 & txfifo_io_enq_ready; // @[UARTAdapter.scala 111:23:example.TestHarness.GemminiRocketConfig.fir@323916.4]
  assign sim_clock = clock; // @[UARTAdapter.scala 115:16:example.TestHarness.GemminiRocketConfig.fir@323921.4]
  assign sim_reset = $unsigned(reset); // @[UARTAdapter.scala 116:16:example.TestHarness.GemminiRocketConfig.fir@323923.4]
  assign sim_serial_in_ready = rxfifo_io_enq_ready; // @[UARTAdapter.scala 124:26:example.TestHarness.GemminiRocketConfig.fir@323929.4]
  assign sim_serial_out_valid = txfifo_io_deq_valid; // @[UARTAdapter.scala 119:27:example.TestHarness.GemminiRocketConfig.fir@323925.4]
  assign sim_serial_out_bits = txfifo_io_deq_bits; // @[UARTAdapter.scala 118:26:example.TestHarness.GemminiRocketConfig.fir@323924.4]
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
  txState = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  txData = _RAND_1[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  value = _RAND_2[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  value_1 = _RAND_3[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  value_2 = _RAND_4[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  rxState = _RAND_5[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  value_3 = _RAND_6[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  value_4 = _RAND_7[2:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      txState <= 2'h0;
    end else begin
      if (_T_17) begin
        if (txSlackWrap) begin
          txState <= 2'h1;
        end
      end else begin
        if (_T_18) begin
          if (txBaudWrap) begin
            txState <= 2'h2;
          end
        end else begin
          if (_T_19) begin
            if (txDataWrap) begin
              if (io_uart_txd) begin
                txState <= 2'h0;
              end else begin
                txState <= 2'h3;
              end
            end else begin
              if (txfifo_io_enq_ready) begin
                txState <= 2'h1;
              end
            end
          end else begin
            if (_T_24) begin
              if (_T_26) begin
                txState <= 2'h0;
              end
            end
          end
        end
      end
    end
    if (_T_17) begin
      if (txSlackWrap) begin
        txData <= 8'h0;
      end
    end else begin
      if (!(_T_18)) begin
        if (_T_19) begin
          if (txfifo_io_enq_ready) begin
            txData <= _T_21;
          end
        end
      end
    end
    if (reset) begin
      value <= 3'h0;
    end else begin
      if (_T_1) begin
        value <= _T_4;
      end
    end
    if (reset) begin
      value_1 <= 10'h0;
    end else begin
      if (_T_6) begin
        if (_T_7) begin
          value_1 <= 10'h0;
        end else begin
          value_1 <= _T_9;
        end
      end
    end
    if (reset) begin
      value_2 <= 2'h0;
    end else begin
      if (_T_13) begin
        value_2 <= _T_16;
      end
    end
    if (reset) begin
      rxState <= 2'h0;
    end else begin
      if (_T_36) begin
        if (_T_37) begin
          rxState <= 2'h1;
        end
      end else begin
        if (_T_38) begin
          if (rxBaudWrap) begin
            rxState <= 2'h2;
          end
        end else begin
          if (_T_39) begin
            if (_T_42) begin
              rxState <= 2'h0;
            end
          end
        end
      end
    end
    if (reset) begin
      value_3 <= 10'h0;
    end else begin
      if (txfifo_io_enq_ready) begin
        if (_T_27) begin
          value_3 <= 10'h0;
        end else begin
          value_3 <= _T_29;
        end
      end
    end
    if (reset) begin
      value_4 <= 3'h0;
    end else begin
      if (_T_32) begin
        value_4 <= _T_35;
      end
    end
  end
endmodule
module AXI4RAM_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@323931.2]
  input         clock, // @[:example.TestHarness.GemminiRocketConfig.fir@323932.4]
  input         reset, // @[:example.TestHarness.GemminiRocketConfig.fir@323933.4]
  output        auto_in_aw_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input         auto_in_aw_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input  [3:0]  auto_in_aw_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input  [27:0] auto_in_aw_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input         auto_in_aw_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  output        auto_in_w_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input         auto_in_w_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input  [63:0] auto_in_w_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input  [7:0]  auto_in_w_bits_strb, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input         auto_in_b_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  output        auto_in_b_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  output [3:0]  auto_in_b_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  output [1:0]  auto_in_b_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  output        auto_in_b_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  output        auto_in_ar_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input         auto_in_ar_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input  [3:0]  auto_in_ar_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input  [27:0] auto_in_ar_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input         auto_in_ar_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  input         auto_in_r_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  output        auto_in_r_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  output [3:0]  auto_in_r_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  output [63:0] auto_in_r_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  output [1:0]  auto_in_r_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
  output        auto_in_r_bits_user // @[:example.TestHarness.GemminiRocketConfig.fir@323934.4]
);
  wire [24:0] mem_R0_addr; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_R0_en; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_R0_clk; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_R0_data_0; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_R0_data_1; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_R0_data_2; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_R0_data_3; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_R0_data_4; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_R0_data_5; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_R0_data_6; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_R0_data_7; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [24:0] mem_W0_addr; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_W0_en; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_W0_clk; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_W0_data_0; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_W0_data_1; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_W0_data_2; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_W0_data_3; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_W0_data_4; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_W0_data_5; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_W0_data_6; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [7:0] mem_W0_data_7; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_W0_mask_0; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_W0_mask_1; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_W0_mask_2; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_W0_mask_3; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_W0_mask_4; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_W0_mask_5; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_W0_mask_6; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire  mem_W0_mask_7; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
  wire [24:0] _T; // @[SRAM.scala 54:49:example.TestHarness.GemminiRocketConfig.fir@323943.4]
  wire  _T_1; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323944.4]
  wire  _T_2; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323945.4]
  wire  _T_3; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323946.4]
  wire  _T_4; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323947.4]
  wire  _T_5; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323948.4]
  wire  _T_6; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323949.4]
  wire  _T_7; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323950.4]
  wire  _T_8; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323951.4]
  wire  _T_9; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323952.4]
  wire  _T_10; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323953.4]
  wire  _T_11; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323954.4]
  wire  _T_12; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323955.4]
  wire  _T_13; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323956.4]
  wire  _T_14; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323957.4]
  wire  _T_15; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323958.4]
  wire  _T_16; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323959.4]
  wire  _T_17; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323960.4]
  wire  _T_18; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323961.4]
  wire  _T_19; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323962.4]
  wire  _T_20; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323963.4]
  wire  _T_21; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323964.4]
  wire  _T_22; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323965.4]
  wire  _T_23; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323966.4]
  wire  _T_24; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323967.4]
  wire  _T_25; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323968.4]
  wire [5:0] _T_30; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323973.4]
  wire [11:0] _T_36; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323979.4]
  wire [5:0] _T_41; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323984.4]
  wire [12:0] _T_48; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323991.4]
  wire [24:0] _T_49; // @[SRAM.scala 55:49:example.TestHarness.GemminiRocketConfig.fir@323993.4]
  wire  _T_50; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323994.4]
  wire  _T_51; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323995.4]
  wire  _T_52; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323996.4]
  wire  _T_53; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323997.4]
  wire  _T_54; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323998.4]
  wire  _T_55; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323999.4]
  wire  _T_56; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324000.4]
  wire  _T_57; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324001.4]
  wire  _T_58; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324002.4]
  wire  _T_59; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324003.4]
  wire  _T_60; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324004.4]
  wire  _T_61; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324005.4]
  wire  _T_62; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324006.4]
  wire  _T_63; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324007.4]
  wire  _T_64; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324008.4]
  wire  _T_65; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324009.4]
  wire  _T_66; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324010.4]
  wire  _T_67; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324011.4]
  wire  _T_68; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324012.4]
  wire  _T_69; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324013.4]
  wire  _T_70; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324014.4]
  wire  _T_71; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324015.4]
  wire  _T_72; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324016.4]
  wire  _T_73; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324017.4]
  wire  _T_74; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324018.4]
  wire [5:0] _T_79; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324023.4]
  wire [11:0] _T_85; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324029.4]
  wire [5:0] _T_90; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324034.4]
  wire [12:0] _T_97; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324041.4]
  wire [28:0] _T_99; // @[Parameters.scala 125:49:example.TestHarness.GemminiRocketConfig.fir@324044.4]
  wire [28:0] _T_100; // @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324045.4]
  wire [28:0] _T_101; // @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324046.4]
  wire  r_sel0; // @[Parameters.scala 125:67:example.TestHarness.GemminiRocketConfig.fir@324047.4]
  wire [28:0] _T_103; // @[Parameters.scala 125:49:example.TestHarness.GemminiRocketConfig.fir@324049.4]
  wire [28:0] _T_104; // @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324050.4]
  wire [28:0] _T_105; // @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324051.4]
  wire  w_sel0; // @[Parameters.scala 125:67:example.TestHarness.GemminiRocketConfig.fir@324052.4]
  reg  w_full; // @[SRAM.scala 59:25:example.TestHarness.GemminiRocketConfig.fir@324053.4]
  reg [31:0] _RAND_0;
  reg [3:0] w_id; // @[SRAM.scala 60:21:example.TestHarness.GemminiRocketConfig.fir@324054.4]
  reg [31:0] _RAND_1;
  reg  w_user; // @[SRAM.scala 61:21:example.TestHarness.GemminiRocketConfig.fir@324055.4]
  reg [31:0] _RAND_2;
  reg  r_sel1; // @[SRAM.scala 62:21:example.TestHarness.GemminiRocketConfig.fir@324056.4]
  reg [31:0] _RAND_3;
  reg  w_sel1; // @[SRAM.scala 63:21:example.TestHarness.GemminiRocketConfig.fir@324057.4]
  reg [31:0] _RAND_4;
  wire  _T_106; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324058.4]
  wire  _GEN_0; // @[SRAM.scala 65:25:example.TestHarness.GemminiRocketConfig.fir@324059.4]
  wire  _T_128; // @[SRAM.scala 81:50:example.TestHarness.GemminiRocketConfig.fir@324128.4]
  wire  _T_129; // @[SRAM.scala 81:47:example.TestHarness.GemminiRocketConfig.fir@324129.4]
  wire  in_aw_ready; // @[SRAM.scala 81:32:example.TestHarness.GemminiRocketConfig.fir@324130.4]
  wire  _T_107; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324062.4]
  wire  _GEN_1; // @[SRAM.scala 66:25:example.TestHarness.GemminiRocketConfig.fir@324063.4]
  reg  r_full; // @[SRAM.scala 88:25:example.TestHarness.GemminiRocketConfig.fir@324140.4]
  reg [31:0] _RAND_5;
  reg [3:0] r_id; // @[SRAM.scala 89:21:example.TestHarness.GemminiRocketConfig.fir@324141.4]
  reg [31:0] _RAND_6;
  reg  r_user; // @[SRAM.scala 90:21:example.TestHarness.GemminiRocketConfig.fir@324142.4]
  reg [31:0] _RAND_7;
  wire  _T_135; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324143.4]
  wire  _GEN_40; // @[SRAM.scala 92:25:example.TestHarness.GemminiRocketConfig.fir@324144.4]
  wire  _T_144; // @[SRAM.scala 106:34:example.TestHarness.GemminiRocketConfig.fir@324182.4]
  wire  in_ar_ready; // @[SRAM.scala 106:31:example.TestHarness.GemminiRocketConfig.fir@324183.4]
  wire  _T_136; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324147.4]
  wire  _GEN_41; // @[SRAM.scala 93:25:example.TestHarness.GemminiRocketConfig.fir@324148.4]
  reg  _T_142; // @[package.scala 75:91:example.TestHarness.GemminiRocketConfig.fir@324167.4]
  reg [31:0] _RAND_8;
  reg [7:0] _T_143_0; // @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
  reg [31:0] _RAND_9;
  reg [7:0] _T_143_1; // @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
  reg [31:0] _RAND_10;
  reg [7:0] _T_143_2; // @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
  reg [31:0] _RAND_11;
  reg [7:0] _T_143_3; // @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
  reg [31:0] _RAND_12;
  reg [7:0] _T_143_4; // @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
  reg [31:0] _RAND_13;
  reg [7:0] _T_143_5; // @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
  reg [31:0] _RAND_14;
  reg [7:0] _T_143_6; // @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
  reg [31:0] _RAND_15;
  reg [7:0] _T_143_7; // @[Reg.scala 15:16:example.TestHarness.GemminiRocketConfig.fir@324169.4]
  reg [31:0] _RAND_16;
  wire [7:0] _GEN_49; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  wire [7:0] _GEN_50; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  wire [7:0] _GEN_51; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  wire [7:0] _GEN_52; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  wire [7:0] _GEN_53; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  wire [7:0] _GEN_54; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  wire [7:0] _GEN_55; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  wire [7:0] _GEN_56; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  wire [31:0] _T_150; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324191.4]
  wire [31:0] _T_153; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324194.4]
  mem_inTestHarness mem ( // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4]
    .R0_addr(mem_R0_addr),
    .R0_en(mem_R0_en),
    .R0_clk(mem_R0_clk),
    .R0_data_0(mem_R0_data_0),
    .R0_data_1(mem_R0_data_1),
    .R0_data_2(mem_R0_data_2),
    .R0_data_3(mem_R0_data_3),
    .R0_data_4(mem_R0_data_4),
    .R0_data_5(mem_R0_data_5),
    .R0_data_6(mem_R0_data_6),
    .R0_data_7(mem_R0_data_7),
    .W0_addr(mem_W0_addr),
    .W0_en(mem_W0_en),
    .W0_clk(mem_W0_clk),
    .W0_data_0(mem_W0_data_0),
    .W0_data_1(mem_W0_data_1),
    .W0_data_2(mem_W0_data_2),
    .W0_data_3(mem_W0_data_3),
    .W0_data_4(mem_W0_data_4),
    .W0_data_5(mem_W0_data_5),
    .W0_data_6(mem_W0_data_6),
    .W0_data_7(mem_W0_data_7),
    .W0_mask_0(mem_W0_mask_0),
    .W0_mask_1(mem_W0_mask_1),
    .W0_mask_2(mem_W0_mask_2),
    .W0_mask_3(mem_W0_mask_3),
    .W0_mask_4(mem_W0_mask_4),
    .W0_mask_5(mem_W0_mask_5),
    .W0_mask_6(mem_W0_mask_6),
    .W0_mask_7(mem_W0_mask_7)
  );
  assign _T = auto_in_ar_bits_addr[27:3]; // @[SRAM.scala 54:49:example.TestHarness.GemminiRocketConfig.fir@323943.4]
  assign _T_1 = _T[0]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323944.4]
  assign _T_2 = _T[1]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323945.4]
  assign _T_3 = _T[2]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323946.4]
  assign _T_4 = _T[3]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323947.4]
  assign _T_5 = _T[4]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323948.4]
  assign _T_6 = _T[5]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323949.4]
  assign _T_7 = _T[6]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323950.4]
  assign _T_8 = _T[7]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323951.4]
  assign _T_9 = _T[8]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323952.4]
  assign _T_10 = _T[9]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323953.4]
  assign _T_11 = _T[10]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323954.4]
  assign _T_12 = _T[11]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323955.4]
  assign _T_13 = _T[12]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323956.4]
  assign _T_14 = _T[13]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323957.4]
  assign _T_15 = _T[14]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323958.4]
  assign _T_16 = _T[15]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323959.4]
  assign _T_17 = _T[16]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323960.4]
  assign _T_18 = _T[17]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323961.4]
  assign _T_19 = _T[18]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323962.4]
  assign _T_20 = _T[19]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323963.4]
  assign _T_21 = _T[20]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323964.4]
  assign _T_22 = _T[21]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323965.4]
  assign _T_23 = _T[22]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323966.4]
  assign _T_24 = _T[23]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323967.4]
  assign _T_25 = _T[24]; // @[SRAM.scala 54:73:example.TestHarness.GemminiRocketConfig.fir@323968.4]
  assign _T_30 = {_T_6,_T_5,_T_4,_T_3,_T_2,_T_1}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323973.4]
  assign _T_36 = {_T_12,_T_11,_T_10,_T_9,_T_8,_T_7,_T_30}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323979.4]
  assign _T_41 = {_T_18,_T_17,_T_16,_T_15,_T_14,_T_13}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323984.4]
  assign _T_48 = {_T_25,_T_24,_T_23,_T_22,_T_21,_T_20,_T_19,_T_41}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@323991.4]
  assign _T_49 = auto_in_aw_bits_addr[27:3]; // @[SRAM.scala 55:49:example.TestHarness.GemminiRocketConfig.fir@323993.4]
  assign _T_50 = _T_49[0]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323994.4]
  assign _T_51 = _T_49[1]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323995.4]
  assign _T_52 = _T_49[2]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323996.4]
  assign _T_53 = _T_49[3]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323997.4]
  assign _T_54 = _T_49[4]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323998.4]
  assign _T_55 = _T_49[5]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@323999.4]
  assign _T_56 = _T_49[6]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324000.4]
  assign _T_57 = _T_49[7]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324001.4]
  assign _T_58 = _T_49[8]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324002.4]
  assign _T_59 = _T_49[9]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324003.4]
  assign _T_60 = _T_49[10]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324004.4]
  assign _T_61 = _T_49[11]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324005.4]
  assign _T_62 = _T_49[12]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324006.4]
  assign _T_63 = _T_49[13]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324007.4]
  assign _T_64 = _T_49[14]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324008.4]
  assign _T_65 = _T_49[15]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324009.4]
  assign _T_66 = _T_49[16]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324010.4]
  assign _T_67 = _T_49[17]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324011.4]
  assign _T_68 = _T_49[18]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324012.4]
  assign _T_69 = _T_49[19]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324013.4]
  assign _T_70 = _T_49[20]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324014.4]
  assign _T_71 = _T_49[21]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324015.4]
  assign _T_72 = _T_49[22]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324016.4]
  assign _T_73 = _T_49[23]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324017.4]
  assign _T_74 = _T_49[24]; // @[SRAM.scala 55:73:example.TestHarness.GemminiRocketConfig.fir@324018.4]
  assign _T_79 = {_T_55,_T_54,_T_53,_T_52,_T_51,_T_50}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324023.4]
  assign _T_85 = {_T_61,_T_60,_T_59,_T_58,_T_57,_T_56,_T_79}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324029.4]
  assign _T_90 = {_T_67,_T_66,_T_65,_T_64,_T_63,_T_62}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324034.4]
  assign _T_97 = {_T_74,_T_73,_T_72,_T_71,_T_70,_T_69,_T_68,_T_90}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324041.4]
  assign _T_99 = {1'b0,$signed(auto_in_ar_bits_addr)}; // @[Parameters.scala 125:49:example.TestHarness.GemminiRocketConfig.fir@324044.4]
  assign _T_100 = $signed(_T_99) & $signed(-29'sh10000000); // @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324045.4]
  assign _T_101 = $signed(_T_100); // @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324046.4]
  assign r_sel0 = $signed(_T_101) == $signed(29'sh0); // @[Parameters.scala 125:67:example.TestHarness.GemminiRocketConfig.fir@324047.4]
  assign _T_103 = {1'b0,$signed(auto_in_aw_bits_addr)}; // @[Parameters.scala 125:49:example.TestHarness.GemminiRocketConfig.fir@324049.4]
  assign _T_104 = $signed(_T_103) & $signed(-29'sh10000000); // @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324050.4]
  assign _T_105 = $signed(_T_104); // @[Parameters.scala 125:52:example.TestHarness.GemminiRocketConfig.fir@324051.4]
  assign w_sel0 = $signed(_T_105) == $signed(29'sh0); // @[Parameters.scala 125:67:example.TestHarness.GemminiRocketConfig.fir@324052.4]
  assign _T_106 = auto_in_b_ready & w_full; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324058.4]
  assign _GEN_0 = _T_106 ? 1'h0 : w_full; // @[SRAM.scala 65:25:example.TestHarness.GemminiRocketConfig.fir@324059.4]
  assign _T_128 = w_full == 1'h0; // @[SRAM.scala 81:50:example.TestHarness.GemminiRocketConfig.fir@324128.4]
  assign _T_129 = auto_in_b_ready | _T_128; // @[SRAM.scala 81:47:example.TestHarness.GemminiRocketConfig.fir@324129.4]
  assign in_aw_ready = auto_in_w_valid & _T_129; // @[SRAM.scala 81:32:example.TestHarness.GemminiRocketConfig.fir@324130.4]
  assign _T_107 = in_aw_ready & auto_in_aw_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324062.4]
  assign _GEN_1 = _T_107 | _GEN_0; // @[SRAM.scala 66:25:example.TestHarness.GemminiRocketConfig.fir@324063.4]
  assign _T_135 = auto_in_r_ready & r_full; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324143.4]
  assign _GEN_40 = _T_135 ? 1'h0 : r_full; // @[SRAM.scala 92:25:example.TestHarness.GemminiRocketConfig.fir@324144.4]
  assign _T_144 = r_full == 1'h0; // @[SRAM.scala 106:34:example.TestHarness.GemminiRocketConfig.fir@324182.4]
  assign in_ar_ready = auto_in_r_ready | _T_144; // @[SRAM.scala 106:31:example.TestHarness.GemminiRocketConfig.fir@324183.4]
  assign _T_136 = in_ar_ready & auto_in_ar_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324147.4]
  assign _GEN_41 = _T_136 | _GEN_40; // @[SRAM.scala 93:25:example.TestHarness.GemminiRocketConfig.fir@324148.4]
  assign _GEN_49 = _T_142 ? mem_R0_data_0 : _T_143_0; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  assign _GEN_50 = _T_142 ? mem_R0_data_1 : _T_143_1; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  assign _GEN_51 = _T_142 ? mem_R0_data_2 : _T_143_2; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  assign _GEN_52 = _T_142 ? mem_R0_data_3 : _T_143_3; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  assign _GEN_53 = _T_142 ? mem_R0_data_4 : _T_143_4; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  assign _GEN_54 = _T_142 ? mem_R0_data_5 : _T_143_5; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  assign _GEN_55 = _T_142 ? mem_R0_data_6 : _T_143_6; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  assign _GEN_56 = _T_142 ? mem_R0_data_7 : _T_143_7; // @[Reg.scala 16:19:example.TestHarness.GemminiRocketConfig.fir@324170.4]
  assign _T_150 = {_GEN_52,_GEN_51,_GEN_50,_GEN_49}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324191.4]
  assign _T_153 = {_GEN_56,_GEN_55,_GEN_54,_GEN_53}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@324194.4]
  assign auto_in_aw_ready = auto_in_w_valid & _T_129; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign auto_in_w_ready = auto_in_aw_valid & _T_129; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign auto_in_b_valid = w_full; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign auto_in_b_bits_id = w_id; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign auto_in_b_bits_resp = w_sel1 ? 2'h0 : 2'h3; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign auto_in_b_bits_user = w_user; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign auto_in_ar_ready = auto_in_r_ready | _T_144; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign auto_in_r_valid = r_full; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign auto_in_r_bits_id = r_id; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign auto_in_r_bits_data = {_T_153,_T_150}; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign auto_in_r_bits_resp = r_sel1 ? 2'h0 : 2'h3; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign auto_in_r_bits_user = r_user; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@323941.4]
  assign mem_R0_addr = {_T_48,_T_36}; // @[package.scala 75:58:example.TestHarness.GemminiRocketConfig.fir@324165.6]
  assign mem_R0_en = in_ar_ready & auto_in_ar_valid; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4 package.scala 75:58:example.TestHarness.GemminiRocketConfig.fir@324164.6]
  assign mem_R0_clk = clock; // @[package.scala 75:58:example.TestHarness.GemminiRocketConfig.fir@324165.6]
  assign mem_W0_addr = {_T_97,_T_85}; // @[:example.TestHarness.GemminiRocketConfig.fir@324101.6]
  assign mem_W0_en = _T_107 & w_sel0; // @[DescribedSRAM.scala 25:26:example.TestHarness.GemminiRocketConfig.fir@323942.4 :example.TestHarness.GemminiRocketConfig.fir@324101.6]
  assign mem_W0_clk = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@324101.6]
  assign mem_W0_data_0 = auto_in_w_bits_data[7:0]; // @[:example.TestHarness.GemminiRocketConfig.fir@324103.8]
  assign mem_W0_data_1 = auto_in_w_bits_data[15:8]; // @[:example.TestHarness.GemminiRocketConfig.fir@324106.8]
  assign mem_W0_data_2 = auto_in_w_bits_data[23:16]; // @[:example.TestHarness.GemminiRocketConfig.fir@324109.8]
  assign mem_W0_data_3 = auto_in_w_bits_data[31:24]; // @[:example.TestHarness.GemminiRocketConfig.fir@324112.8]
  assign mem_W0_data_4 = auto_in_w_bits_data[39:32]; // @[:example.TestHarness.GemminiRocketConfig.fir@324115.8]
  assign mem_W0_data_5 = auto_in_w_bits_data[47:40]; // @[:example.TestHarness.GemminiRocketConfig.fir@324118.8]
  assign mem_W0_data_6 = auto_in_w_bits_data[55:48]; // @[:example.TestHarness.GemminiRocketConfig.fir@324121.8]
  assign mem_W0_data_7 = auto_in_w_bits_data[63:56]; // @[:example.TestHarness.GemminiRocketConfig.fir@324124.8]
  assign mem_W0_mask_0 = auto_in_w_bits_strb[0]; // @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324103.8]
  assign mem_W0_mask_1 = auto_in_w_bits_strb[1]; // @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324106.8]
  assign mem_W0_mask_2 = auto_in_w_bits_strb[2]; // @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324109.8]
  assign mem_W0_mask_3 = auto_in_w_bits_strb[3]; // @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324112.8]
  assign mem_W0_mask_4 = auto_in_w_bits_strb[4]; // @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324115.8]
  assign mem_W0_mask_5 = auto_in_w_bits_strb[5]; // @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324118.8]
  assign mem_W0_mask_6 = auto_in_w_bits_strb[6]; // @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324121.8]
  assign mem_W0_mask_7 = auto_in_w_bits_strb[7]; // @[:example.TestHarness.GemminiRocketConfig.fir@324101.6 :example.TestHarness.GemminiRocketConfig.fir@324124.8]
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
  w_full = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  w_id = _RAND_1[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  w_user = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  r_sel1 = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  w_sel1 = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  r_full = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  r_id = _RAND_6[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  r_user = _RAND_7[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  _T_142 = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  _T_143_0 = _RAND_9[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  _T_143_1 = _RAND_10[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  _T_143_2 = _RAND_11[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  _T_143_3 = _RAND_12[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  _T_143_4 = _RAND_13[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  _T_143_5 = _RAND_14[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  _T_143_6 = _RAND_15[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  _T_143_7 = _RAND_16[7:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      w_full <= 1'h0;
    end else begin
      w_full <= _GEN_1;
    end
    if (_T_107) begin
      w_id <= auto_in_aw_bits_id;
    end
    if (_T_107) begin
      w_user <= auto_in_aw_bits_user;
    end
    if (_T_136) begin
      r_sel1 <= r_sel0;
    end
    if (_T_107) begin
      w_sel1 <= w_sel0;
    end
    if (reset) begin
      r_full <= 1'h0;
    end else begin
      r_full <= _GEN_41;
    end
    if (_T_136) begin
      r_id <= auto_in_ar_bits_id;
    end
    if (_T_136) begin
      r_user <= auto_in_ar_bits_user;
    end
    _T_142 <= in_ar_ready & auto_in_ar_valid;
    if (_T_142) begin
      _T_143_0 <= mem_R0_data_0;
    end
    if (_T_142) begin
      _T_143_1 <= mem_R0_data_1;
    end
    if (_T_142) begin
      _T_143_2 <= mem_R0_data_2;
    end
    if (_T_142) begin
      _T_143_3 <= mem_R0_data_3;
    end
    if (_T_142) begin
      _T_143_4 <= mem_R0_data_4;
    end
    if (_T_142) begin
      _T_143_5 <= mem_R0_data_5;
    end
    if (_T_142) begin
      _T_143_6 <= mem_R0_data_6;
    end
    if (_T_142) begin
      _T_143_7 <= mem_R0_data_7;
    end
  end
endmodule
module AXI4Xbar_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@324330.2]
  input         clock, // @[:example.TestHarness.GemminiRocketConfig.fir@324331.4]
  input         reset, // @[:example.TestHarness.GemminiRocketConfig.fir@324332.4]
  output        auto_in_aw_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_in_aw_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [3:0]  auto_in_aw_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [27:0] auto_in_aw_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [7:0]  auto_in_aw_bits_len, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [2:0]  auto_in_aw_bits_size, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [1:0]  auto_in_aw_bits_burst, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output        auto_in_w_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_in_w_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [63:0] auto_in_w_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [7:0]  auto_in_w_bits_strb, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_in_w_bits_last, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_in_b_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output        auto_in_b_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [3:0]  auto_in_b_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [1:0]  auto_in_b_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output        auto_in_ar_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_in_ar_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [3:0]  auto_in_ar_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [27:0] auto_in_ar_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [7:0]  auto_in_ar_bits_len, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [2:0]  auto_in_ar_bits_size, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [1:0]  auto_in_ar_bits_burst, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_in_r_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output        auto_in_r_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [3:0]  auto_in_r_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [63:0] auto_in_r_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [1:0]  auto_in_r_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output        auto_in_r_bits_last, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_out_aw_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output        auto_out_aw_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [3:0]  auto_out_aw_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [27:0] auto_out_aw_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [7:0]  auto_out_aw_bits_len, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [2:0]  auto_out_aw_bits_size, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [1:0]  auto_out_aw_bits_burst, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_out_w_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output        auto_out_w_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [63:0] auto_out_w_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [7:0]  auto_out_w_bits_strb, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output        auto_out_w_bits_last, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output        auto_out_b_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_out_b_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [3:0]  auto_out_b_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [1:0]  auto_out_b_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_out_ar_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output        auto_out_ar_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [3:0]  auto_out_ar_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [27:0] auto_out_ar_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [7:0]  auto_out_ar_bits_len, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [2:0]  auto_out_ar_bits_size, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output [1:0]  auto_out_ar_bits_burst, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  output        auto_out_r_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_out_r_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [3:0]  auto_out_r_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [63:0] auto_out_r_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input  [1:0]  auto_out_r_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
  input         auto_out_r_bits_last // @[:example.TestHarness.GemminiRocketConfig.fir@324333.4]
);
  wire  _T_44; // @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324439.4]
  wire  _T_50; // @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324449.4]
  wire  _T_52; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324451.4]
  wire  _T_53; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324452.4]
  wire  _T_65; // @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324485.4]
  wire  _T_71; // @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324495.4]
  wire  _T_73; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324497.4]
  wire  _T_74; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324498.4]
  wire  _T_88; // @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324535.4]
  wire  _T_94; // @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324545.4]
  wire  _T_96; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324547.4]
  wire  _T_97; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324548.4]
  wire  _T_109; // @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324580.4]
  wire  _T_115; // @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324590.4]
  wire  _T_117; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324592.4]
  wire  _T_118; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324593.4]
  assign _T_44 = auto_in_aw_valid == 1'h0; // @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324439.4]
  assign _T_50 = _T_44 | auto_in_aw_valid; // @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324449.4]
  assign _T_52 = _T_50 | reset; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324451.4]
  assign _T_53 = _T_52 == 1'h0; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324452.4]
  assign _T_65 = auto_in_ar_valid == 1'h0; // @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324485.4]
  assign _T_71 = _T_65 | auto_in_ar_valid; // @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324495.4]
  assign _T_73 = _T_71 | reset; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324497.4]
  assign _T_74 = _T_73 == 1'h0; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324498.4]
  assign _T_88 = auto_out_r_valid == 1'h0; // @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324535.4]
  assign _T_94 = _T_88 | auto_out_r_valid; // @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324545.4]
  assign _T_96 = _T_94 | reset; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324547.4]
  assign _T_97 = _T_96 == 1'h0; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324548.4]
  assign _T_109 = auto_out_b_valid == 1'h0; // @[Xbar.scala 256:60:example.TestHarness.GemminiRocketConfig.fir@324580.4]
  assign _T_115 = _T_109 | auto_out_b_valid; // @[Xbar.scala 258:23:example.TestHarness.GemminiRocketConfig.fir@324590.4]
  assign _T_117 = _T_115 | reset; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324592.4]
  assign _T_118 = _T_117 == 1'h0; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324593.4]
  assign auto_in_aw_ready = auto_out_aw_ready; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
  assign auto_in_w_ready = auto_out_w_ready; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
  assign auto_in_b_valid = auto_out_b_valid; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
  assign auto_in_b_bits_id = auto_out_b_bits_id; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
  assign auto_in_b_bits_resp = auto_out_b_bits_resp; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
  assign auto_in_ar_ready = auto_out_ar_ready; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
  assign auto_in_r_valid = auto_out_r_valid; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
  assign auto_in_r_bits_id = auto_out_r_bits_id; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
  assign auto_in_r_bits_data = auto_out_r_bits_data; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
  assign auto_in_r_bits_resp = auto_out_r_bits_resp; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
  assign auto_in_r_bits_last = auto_out_r_bits_last; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324343.4]
  assign auto_out_aw_valid = auto_in_aw_valid; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_aw_bits_id = auto_in_aw_bits_id; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_aw_bits_addr = auto_in_aw_bits_addr; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_aw_bits_len = auto_in_aw_bits_len; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_aw_bits_size = auto_in_aw_bits_size; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_aw_bits_burst = auto_in_aw_bits_burst; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_w_valid = auto_in_w_valid; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_w_bits_data = auto_in_w_bits_data; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_w_bits_strb = auto_in_w_bits_strb; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_w_bits_last = auto_in_w_bits_last; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_b_ready = auto_in_b_ready; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_ar_valid = auto_in_ar_valid; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_ar_bits_id = auto_in_ar_bits_id; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_ar_bits_addr = auto_in_ar_bits_addr; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_ar_bits_len = auto_in_ar_bits_len; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_ar_bits_size = auto_in_ar_bits_size; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_ar_bits_burst = auto_in_ar_bits_burst; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  assign auto_out_r_ready = auto_in_r_ready; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324342.4]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_53) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n"); // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324454.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_53) begin
          $fatal; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324455.6]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_74) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n"); // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324500.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_74) begin
          $fatal; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324501.6]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_97) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n"); // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324550.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_97) begin
          $fatal; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324551.6]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_118) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Xbar.scala:258 assert (!anyValid || winner.reduce(_||_))\n"); // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324595.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_118) begin
          $fatal; // @[Xbar.scala 258:12:example.TestHarness.GemminiRocketConfig.fir@324596.6]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module Queue_54_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@324616.2]
  input         clock, // @[:example.TestHarness.GemminiRocketConfig.fir@324617.4]
  input         reset, // @[:example.TestHarness.GemminiRocketConfig.fir@324618.4]
  output        io_enq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
  input         io_enq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
  input  [3:0]  io_enq_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
  input  [27:0] io_enq_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
  input         io_enq_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
  input         io_deq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
  output        io_deq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
  output [3:0]  io_deq_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
  output [27:0] io_deq_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
  output        io_deq_bits_user // @[:example.TestHarness.GemminiRocketConfig.fir@324619.4]
);
  reg [3:0] _T_id [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  reg [31:0] _RAND_0;
  wire [3:0] _T_id__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_id__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire [3:0] _T_id__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_id__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_id__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_id__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  reg [27:0] _T_addr [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  reg [31:0] _RAND_1;
  wire [27:0] _T_addr__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_addr__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire [27:0] _T_addr__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_addr__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_addr__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_addr__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  reg  _T_user [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  reg [31:0] _RAND_2;
  wire  _T_user__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_user__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_user__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_user__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_user__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  wire  _T_user__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  reg  value; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324622.4]
  reg [31:0] _RAND_3;
  reg  value_1; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324623.4]
  reg [31:0] _RAND_4;
  reg  _T_1; // @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@324624.4]
  reg [31:0] _RAND_5;
  wire  _T_2; // @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324625.4]
  wire  _T_3; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324626.4]
  wire  _T_4; // @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324627.4]
  wire  _T_5; // @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324628.4]
  wire  _T_6; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324629.4]
  wire  _T_8; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324632.4]
  wire  _T_12; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324649.6]
  wire  _T_14; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324655.6]
  wire  _T_15; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324658.4]
  assign _T_id__T_18_addr = value_1;
  assign _T_id__T_18_data = _T_id[_T_id__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  assign _T_id__T_10_data = io_enq_bits_id;
  assign _T_id__T_10_addr = value;
  assign _T_id__T_10_mask = 1'h1;
  assign _T_id__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_addr__T_18_addr = value_1;
  assign _T_addr__T_18_data = _T_addr[_T_addr__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  assign _T_addr__T_10_data = io_enq_bits_addr;
  assign _T_addr__T_10_addr = value;
  assign _T_addr__T_10_mask = 1'h1;
  assign _T_addr__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_user__T_18_addr = value_1;
  assign _T_user__T_18_data = _T_user[_T_user__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
  assign _T_user__T_10_data = io_enq_bits_user;
  assign _T_user__T_10_addr = value;
  assign _T_user__T_10_mask = 1'h1;
  assign _T_user__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_2 = value == value_1; // @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324625.4]
  assign _T_3 = _T_1 == 1'h0; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324626.4]
  assign _T_4 = _T_2 & _T_3; // @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324627.4]
  assign _T_5 = _T_2 & _T_1; // @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324628.4]
  assign _T_6 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324629.4]
  assign _T_8 = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324632.4]
  assign _T_12 = value + 1'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324649.6]
  assign _T_14 = value_1 + 1'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324655.6]
  assign _T_15 = _T_6 != _T_8; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324658.4]
  assign io_enq_ready = _T_5 == 1'h0; // @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@324665.4]
  assign io_deq_valid = _T_4 == 1'h0; // @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@324663.4]
  assign io_deq_bits_id = _T_id__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324676.4]
  assign io_deq_bits_addr = _T_addr__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324675.4]
  assign io_deq_bits_user = _T_user__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324667.4]
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
    _T_id[initvar] = _RAND_0[3:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_1 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    _T_addr[initvar] = _RAND_1[27:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_2 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    _T_user[initvar] = _RAND_2[0:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  value = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  value_1 = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  _T_1 = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(_T_id__T_10_en & _T_id__T_10_mask) begin
      _T_id[_T_id__T_10_addr] <= _T_id__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
    end
    if(_T_addr__T_10_en & _T_addr__T_10_mask) begin
      _T_addr[_T_addr__T_10_addr] <= _T_addr__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
    end
    if(_T_user__T_10_en & _T_user__T_10_mask) begin
      _T_user[_T_user__T_10_addr] <= _T_user__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324621.4]
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
module Queue_55_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@324684.2]
  input         clock, // @[:example.TestHarness.GemminiRocketConfig.fir@324685.4]
  input         reset, // @[:example.TestHarness.GemminiRocketConfig.fir@324686.4]
  output        io_enq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
  input         io_enq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
  input  [63:0] io_enq_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
  input  [7:0]  io_enq_bits_strb, // @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
  input         io_deq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
  output        io_deq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
  output [63:0] io_deq_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
  output [7:0]  io_deq_bits_strb // @[:example.TestHarness.GemminiRocketConfig.fir@324687.4]
);
  reg [63:0] _T_data [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  reg [63:0] _RAND_0;
  wire [63:0] _T_data__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  wire  _T_data__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  wire [63:0] _T_data__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  wire  _T_data__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  wire  _T_data__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  wire  _T_data__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  reg [7:0] _T_strb [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  reg [31:0] _RAND_1;
  wire [7:0] _T_strb__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  wire  _T_strb__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  wire [7:0] _T_strb__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  wire  _T_strb__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  wire  _T_strb__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  wire  _T_strb__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  reg  value; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324690.4]
  reg [31:0] _RAND_2;
  reg  value_1; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324691.4]
  reg [31:0] _RAND_3;
  reg  _T_1; // @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@324692.4]
  reg [31:0] _RAND_4;
  wire  _T_2; // @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324693.4]
  wire  _T_3; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324694.4]
  wire  _T_4; // @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324695.4]
  wire  _T_5; // @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324696.4]
  wire  _T_6; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324697.4]
  wire  _T_8; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324700.4]
  wire  _T_12; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324710.6]
  wire  _T_14; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324716.6]
  wire  _T_15; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324719.4]
  assign _T_data__T_18_addr = value_1;
  assign _T_data__T_18_data = _T_data[_T_data__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  assign _T_data__T_10_data = io_enq_bits_data;
  assign _T_data__T_10_addr = value;
  assign _T_data__T_10_mask = 1'h1;
  assign _T_data__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_strb__T_18_addr = value_1;
  assign _T_strb__T_18_data = _T_strb[_T_strb__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
  assign _T_strb__T_10_data = io_enq_bits_strb;
  assign _T_strb__T_10_addr = value;
  assign _T_strb__T_10_mask = 1'h1;
  assign _T_strb__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_2 = value == value_1; // @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324693.4]
  assign _T_3 = _T_1 == 1'h0; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324694.4]
  assign _T_4 = _T_2 & _T_3; // @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324695.4]
  assign _T_5 = _T_2 & _T_1; // @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324696.4]
  assign _T_6 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324697.4]
  assign _T_8 = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324700.4]
  assign _T_12 = value + 1'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324710.6]
  assign _T_14 = value_1 + 1'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324716.6]
  assign _T_15 = _T_6 != _T_8; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324719.4]
  assign io_enq_ready = _T_5 == 1'h0; // @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@324726.4]
  assign io_deq_valid = _T_4 == 1'h0; // @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@324724.4]
  assign io_deq_bits_data = _T_data__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324730.4]
  assign io_deq_bits_strb = _T_strb__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324729.4]
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
  _RAND_0 = {2{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    _T_data[initvar] = _RAND_0[63:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_1 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    _T_strb[initvar] = _RAND_1[7:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  value = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  value_1 = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  _T_1 = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(_T_data__T_10_en & _T_data__T_10_mask) begin
      _T_data[_T_data__T_10_addr] <= _T_data__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
    end
    if(_T_strb__T_10_en & _T_strb__T_10_mask) begin
      _T_strb[_T_strb__T_10_addr] <= _T_strb__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324689.4]
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
module Queue_56_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@324738.2]
  input        clock, // @[:example.TestHarness.GemminiRocketConfig.fir@324739.4]
  input        reset, // @[:example.TestHarness.GemminiRocketConfig.fir@324740.4]
  output       io_enq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
  input        io_enq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
  input  [3:0] io_enq_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
  input  [1:0] io_enq_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
  input        io_enq_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
  input        io_deq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
  output       io_deq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
  output [3:0] io_deq_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
  output [1:0] io_deq_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
  output       io_deq_bits_user // @[:example.TestHarness.GemminiRocketConfig.fir@324741.4]
);
  reg [3:0] _T_id [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  reg [31:0] _RAND_0;
  wire [3:0] _T_id__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_id__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire [3:0] _T_id__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_id__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_id__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_id__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  reg [1:0] _T_resp [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  reg [31:0] _RAND_1;
  wire [1:0] _T_resp__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_resp__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire [1:0] _T_resp__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_resp__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_resp__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_resp__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  reg  _T_user [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  reg [31:0] _RAND_2;
  wire  _T_user__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_user__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_user__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_user__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_user__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  wire  _T_user__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  reg  value; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324744.4]
  reg [31:0] _RAND_3;
  reg  value_1; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324745.4]
  reg [31:0] _RAND_4;
  reg  _T_1; // @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@324746.4]
  reg [31:0] _RAND_5;
  wire  _T_2; // @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324747.4]
  wire  _T_3; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324748.4]
  wire  _T_4; // @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324749.4]
  wire  _T_5; // @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324750.4]
  wire  _T_6; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324751.4]
  wire  _T_8; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324754.4]
  wire  _T_12; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324764.6]
  wire  _T_14; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324770.6]
  wire  _T_15; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324773.4]
  assign _T_id__T_18_addr = value_1;
  assign _T_id__T_18_data = _T_id[_T_id__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  assign _T_id__T_10_data = io_enq_bits_id;
  assign _T_id__T_10_addr = value;
  assign _T_id__T_10_mask = 1'h1;
  assign _T_id__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_resp__T_18_addr = value_1;
  assign _T_resp__T_18_data = _T_resp[_T_resp__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  assign _T_resp__T_10_data = io_enq_bits_resp;
  assign _T_resp__T_10_addr = value;
  assign _T_resp__T_10_mask = 1'h1;
  assign _T_resp__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_user__T_18_addr = value_1;
  assign _T_user__T_18_data = _T_user[_T_user__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
  assign _T_user__T_10_data = io_enq_bits_user;
  assign _T_user__T_10_addr = value;
  assign _T_user__T_10_mask = 1'h1;
  assign _T_user__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_2 = value == value_1; // @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324747.4]
  assign _T_3 = _T_1 == 1'h0; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324748.4]
  assign _T_4 = _T_2 & _T_3; // @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324749.4]
  assign _T_5 = _T_2 & _T_1; // @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324750.4]
  assign _T_6 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324751.4]
  assign _T_8 = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324754.4]
  assign _T_12 = value + 1'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324764.6]
  assign _T_14 = value_1 + 1'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324770.6]
  assign _T_15 = _T_6 != _T_8; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324773.4]
  assign io_enq_ready = _T_5 == 1'h0; // @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@324780.4]
  assign io_deq_valid = _T_4 == 1'h0; // @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@324778.4]
  assign io_deq_bits_id = _T_id__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324784.4]
  assign io_deq_bits_resp = _T_resp__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324783.4]
  assign io_deq_bits_user = _T_user__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324782.4]
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
    _T_id[initvar] = _RAND_0[3:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_1 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    _T_resp[initvar] = _RAND_1[1:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_2 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    _T_user[initvar] = _RAND_2[0:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  value = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  value_1 = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  _T_1 = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(_T_id__T_10_en & _T_id__T_10_mask) begin
      _T_id[_T_id__T_10_addr] <= _T_id__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
    end
    if(_T_resp__T_10_en & _T_resp__T_10_mask) begin
      _T_resp[_T_resp__T_10_addr] <= _T_resp__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
    end
    if(_T_user__T_10_en & _T_user__T_10_mask) begin
      _T_user[_T_user__T_10_addr] <= _T_user__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324743.4]
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
module Queue_58_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@324860.2]
  input         clock, // @[:example.TestHarness.GemminiRocketConfig.fir@324861.4]
  input         reset, // @[:example.TestHarness.GemminiRocketConfig.fir@324862.4]
  output        io_enq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  input         io_enq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  input  [3:0]  io_enq_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  input  [63:0] io_enq_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  input  [1:0]  io_enq_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  input         io_enq_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  input         io_deq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  output        io_deq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  output [3:0]  io_deq_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  output [63:0] io_deq_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  output [1:0]  io_deq_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  output        io_deq_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
  output        io_deq_bits_last // @[:example.TestHarness.GemminiRocketConfig.fir@324863.4]
);
  reg [3:0] _T_id [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  reg [31:0] _RAND_0;
  wire [3:0] _T_id__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_id__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire [3:0] _T_id__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_id__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_id__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_id__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  reg [63:0] _T_data [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  reg [63:0] _RAND_1;
  wire [63:0] _T_data__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_data__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire [63:0] _T_data__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_data__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_data__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_data__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  reg [1:0] _T_resp [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  reg [31:0] _RAND_2;
  wire [1:0] _T_resp__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_resp__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire [1:0] _T_resp__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_resp__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_resp__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_resp__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  reg  _T_user [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  reg [31:0] _RAND_3;
  wire  _T_user__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_user__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_user__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_user__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_user__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_user__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  reg  _T_last [0:1]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  reg [31:0] _RAND_4;
  wire  _T_last__T_18_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_last__T_18_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_last__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_last__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_last__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  wire  _T_last__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  reg  value; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324866.4]
  reg [31:0] _RAND_5;
  reg  value_1; // @[Counter.scala 29:33:example.TestHarness.GemminiRocketConfig.fir@324867.4]
  reg [31:0] _RAND_6;
  reg  _T_1; // @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@324868.4]
  reg [31:0] _RAND_7;
  wire  _T_2; // @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324869.4]
  wire  _T_3; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324870.4]
  wire  _T_4; // @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324871.4]
  wire  _T_5; // @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324872.4]
  wire  _T_6; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324873.4]
  wire  _T_8; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324876.4]
  wire  _T_12; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324888.6]
  wire  _T_14; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324894.6]
  wire  _T_15; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324897.4]
  assign _T_id__T_18_addr = value_1;
  assign _T_id__T_18_data = _T_id[_T_id__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  assign _T_id__T_10_data = io_enq_bits_id;
  assign _T_id__T_10_addr = value;
  assign _T_id__T_10_mask = 1'h1;
  assign _T_id__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_data__T_18_addr = value_1;
  assign _T_data__T_18_data = _T_data[_T_data__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  assign _T_data__T_10_data = io_enq_bits_data;
  assign _T_data__T_10_addr = value;
  assign _T_data__T_10_mask = 1'h1;
  assign _T_data__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_resp__T_18_addr = value_1;
  assign _T_resp__T_18_data = _T_resp[_T_resp__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  assign _T_resp__T_10_data = io_enq_bits_resp;
  assign _T_resp__T_10_addr = value;
  assign _T_resp__T_10_mask = 1'h1;
  assign _T_resp__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_user__T_18_addr = value_1;
  assign _T_user__T_18_data = _T_user[_T_user__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  assign _T_user__T_10_data = io_enq_bits_user;
  assign _T_user__T_10_addr = value;
  assign _T_user__T_10_mask = 1'h1;
  assign _T_user__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_last__T_18_addr = value_1;
  assign _T_last__T_18_data = _T_last[_T_last__T_18_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
  assign _T_last__T_10_data = 1'h1;
  assign _T_last__T_10_addr = value;
  assign _T_last__T_10_mask = 1'h1;
  assign _T_last__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_2 = value == value_1; // @[Decoupled.scala 214:41:example.TestHarness.GemminiRocketConfig.fir@324869.4]
  assign _T_3 = _T_1 == 1'h0; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@324870.4]
  assign _T_4 = _T_2 & _T_3; // @[Decoupled.scala 215:33:example.TestHarness.GemminiRocketConfig.fir@324871.4]
  assign _T_5 = _T_2 & _T_1; // @[Decoupled.scala 216:32:example.TestHarness.GemminiRocketConfig.fir@324872.4]
  assign _T_6 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324873.4]
  assign _T_8 = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@324876.4]
  assign _T_12 = value + 1'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324888.6]
  assign _T_14 = value_1 + 1'h1; // @[Counter.scala 38:22:example.TestHarness.GemminiRocketConfig.fir@324894.6]
  assign _T_15 = _T_6 != _T_8; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@324897.4]
  assign io_enq_ready = _T_5 == 1'h0; // @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@324904.4]
  assign io_deq_valid = _T_4 == 1'h0; // @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@324902.4]
  assign io_deq_bits_id = _T_id__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324910.4]
  assign io_deq_bits_data = _T_data__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324909.4]
  assign io_deq_bits_resp = _T_resp__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324908.4]
  assign io_deq_bits_user = _T_user__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324907.4]
  assign io_deq_bits_last = _T_last__T_18_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@324906.4]
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
    _T_id[initvar] = _RAND_0[3:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_1 = {2{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    _T_data[initvar] = _RAND_1[63:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_2 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    _T_resp[initvar] = _RAND_2[1:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_3 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    _T_user[initvar] = _RAND_3[0:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_4 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 2; initvar = initvar+1)
    _T_last[initvar] = _RAND_4[0:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  value = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  value_1 = _RAND_6[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  _T_1 = _RAND_7[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(_T_id__T_10_en & _T_id__T_10_mask) begin
      _T_id[_T_id__T_10_addr] <= _T_id__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
    end
    if(_T_data__T_10_en & _T_data__T_10_mask) begin
      _T_data[_T_data__T_10_addr] <= _T_data__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
    end
    if(_T_resp__T_10_en & _T_resp__T_10_mask) begin
      _T_resp[_T_resp__T_10_addr] <= _T_resp__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
    end
    if(_T_user__T_10_en & _T_user__T_10_mask) begin
      _T_user[_T_user__T_10_addr] <= _T_user__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
    end
    if(_T_last__T_10_en & _T_last__T_10_mask) begin
      _T_last[_T_last__T_10_addr] <= _T_last__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@324865.4]
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
module AXI4Buffer_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@324918.2]
  input         clock, // @[:example.TestHarness.GemminiRocketConfig.fir@324919.4]
  input         reset, // @[:example.TestHarness.GemminiRocketConfig.fir@324920.4]
  output        auto_in_aw_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_in_aw_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input  [3:0]  auto_in_aw_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input  [27:0] auto_in_aw_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_in_aw_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_in_w_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_in_w_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input  [63:0] auto_in_w_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input  [7:0]  auto_in_w_bits_strb, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_in_b_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_in_b_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output [3:0]  auto_in_b_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output [1:0]  auto_in_b_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_in_b_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_in_ar_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_in_ar_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input  [3:0]  auto_in_ar_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input  [27:0] auto_in_ar_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_in_ar_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_in_r_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_in_r_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output [3:0]  auto_in_r_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output [63:0] auto_in_r_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output [1:0]  auto_in_r_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_in_r_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_in_r_bits_last, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_out_aw_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_out_aw_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output [3:0]  auto_out_aw_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output [27:0] auto_out_aw_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_out_aw_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_out_w_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_out_w_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output [63:0] auto_out_w_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output [7:0]  auto_out_w_bits_strb, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_out_b_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_out_b_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input  [3:0]  auto_out_b_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input  [1:0]  auto_out_b_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_out_b_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_out_ar_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_out_ar_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output [3:0]  auto_out_ar_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output [27:0] auto_out_ar_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_out_ar_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  output        auto_out_r_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_out_r_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input  [3:0]  auto_out_r_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input  [63:0] auto_out_r_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input  [1:0]  auto_out_r_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
  input         auto_out_r_bits_user // @[:example.TestHarness.GemminiRocketConfig.fir@324921.4]
);
  wire  Queue_clock; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire  Queue_reset; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire  Queue_io_enq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire  Queue_io_enq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire [3:0] Queue_io_enq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire [27:0] Queue_io_enq_bits_addr; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire  Queue_io_enq_bits_user; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire  Queue_io_deq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire  Queue_io_deq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire [3:0] Queue_io_deq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire [27:0] Queue_io_deq_bits_addr; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire  Queue_io_deq_bits_user; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
  wire  Queue_1_clock; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
  wire  Queue_1_reset; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
  wire  Queue_1_io_enq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
  wire  Queue_1_io_enq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
  wire [63:0] Queue_1_io_enq_bits_data; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
  wire [7:0] Queue_1_io_enq_bits_strb; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
  wire  Queue_1_io_deq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
  wire  Queue_1_io_deq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
  wire [63:0] Queue_1_io_deq_bits_data; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
  wire [7:0] Queue_1_io_deq_bits_strb; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
  wire  Queue_2_clock; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire  Queue_2_reset; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire  Queue_2_io_enq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire  Queue_2_io_enq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire [3:0] Queue_2_io_enq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire [1:0] Queue_2_io_enq_bits_resp; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire  Queue_2_io_enq_bits_user; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire  Queue_2_io_deq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire  Queue_2_io_deq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire [3:0] Queue_2_io_deq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire [1:0] Queue_2_io_deq_bits_resp; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire  Queue_2_io_deq_bits_user; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
  wire  Queue_3_clock; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire  Queue_3_reset; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire  Queue_3_io_enq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire  Queue_3_io_enq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire [3:0] Queue_3_io_enq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire [27:0] Queue_3_io_enq_bits_addr; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire  Queue_3_io_enq_bits_user; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire  Queue_3_io_deq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire  Queue_3_io_deq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire [3:0] Queue_3_io_deq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire [27:0] Queue_3_io_deq_bits_addr; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire  Queue_3_io_deq_bits_user; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
  wire  Queue_4_clock; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire  Queue_4_reset; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire  Queue_4_io_enq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire  Queue_4_io_enq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire [3:0] Queue_4_io_enq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire [63:0] Queue_4_io_enq_bits_data; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire [1:0] Queue_4_io_enq_bits_resp; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire  Queue_4_io_enq_bits_user; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire  Queue_4_io_deq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire  Queue_4_io_deq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire [3:0] Queue_4_io_deq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire [63:0] Queue_4_io_deq_bits_data; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire [1:0] Queue_4_io_deq_bits_resp; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire  Queue_4_io_deq_bits_user; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  wire  Queue_4_io_deq_bits_last; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
  Queue_54_inTestHarness Queue ( // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324932.4]
    .clock(Queue_clock),
    .reset(Queue_reset),
    .io_enq_ready(Queue_io_enq_ready),
    .io_enq_valid(Queue_io_enq_valid),
    .io_enq_bits_id(Queue_io_enq_bits_id),
    .io_enq_bits_addr(Queue_io_enq_bits_addr),
    .io_enq_bits_user(Queue_io_enq_bits_user),
    .io_deq_ready(Queue_io_deq_ready),
    .io_deq_valid(Queue_io_deq_valid),
    .io_deq_bits_id(Queue_io_deq_bits_id),
    .io_deq_bits_addr(Queue_io_deq_bits_addr),
    .io_deq_bits_user(Queue_io_deq_bits_user)
  );
  Queue_55_inTestHarness Queue_1 ( // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324961.4]
    .clock(Queue_1_clock),
    .reset(Queue_1_reset),
    .io_enq_ready(Queue_1_io_enq_ready),
    .io_enq_valid(Queue_1_io_enq_valid),
    .io_enq_bits_data(Queue_1_io_enq_bits_data),
    .io_enq_bits_strb(Queue_1_io_enq_bits_strb),
    .io_deq_ready(Queue_1_io_deq_ready),
    .io_deq_valid(Queue_1_io_deq_valid),
    .io_deq_bits_data(Queue_1_io_deq_bits_data),
    .io_deq_bits_strb(Queue_1_io_deq_bits_strb)
  );
  Queue_56_inTestHarness Queue_2 ( // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324976.4]
    .clock(Queue_2_clock),
    .reset(Queue_2_reset),
    .io_enq_ready(Queue_2_io_enq_ready),
    .io_enq_valid(Queue_2_io_enq_valid),
    .io_enq_bits_id(Queue_2_io_enq_bits_id),
    .io_enq_bits_resp(Queue_2_io_enq_bits_resp),
    .io_enq_bits_user(Queue_2_io_enq_bits_user),
    .io_deq_ready(Queue_2_io_deq_ready),
    .io_deq_valid(Queue_2_io_deq_valid),
    .io_deq_bits_id(Queue_2_io_deq_bits_id),
    .io_deq_bits_resp(Queue_2_io_deq_bits_resp),
    .io_deq_bits_user(Queue_2_io_deq_bits_user)
  );
  Queue_54_inTestHarness Queue_3 ( // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@324991.4]
    .clock(Queue_3_clock),
    .reset(Queue_3_reset),
    .io_enq_ready(Queue_3_io_enq_ready),
    .io_enq_valid(Queue_3_io_enq_valid),
    .io_enq_bits_id(Queue_3_io_enq_bits_id),
    .io_enq_bits_addr(Queue_3_io_enq_bits_addr),
    .io_enq_bits_user(Queue_3_io_enq_bits_user),
    .io_deq_ready(Queue_3_io_deq_ready),
    .io_deq_valid(Queue_3_io_deq_valid),
    .io_deq_bits_id(Queue_3_io_deq_bits_id),
    .io_deq_bits_addr(Queue_3_io_deq_bits_addr),
    .io_deq_bits_user(Queue_3_io_deq_bits_user)
  );
  Queue_58_inTestHarness Queue_4 ( // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325020.4]
    .clock(Queue_4_clock),
    .reset(Queue_4_reset),
    .io_enq_ready(Queue_4_io_enq_ready),
    .io_enq_valid(Queue_4_io_enq_valid),
    .io_enq_bits_id(Queue_4_io_enq_bits_id),
    .io_enq_bits_data(Queue_4_io_enq_bits_data),
    .io_enq_bits_resp(Queue_4_io_enq_bits_resp),
    .io_enq_bits_user(Queue_4_io_enq_bits_user),
    .io_deq_ready(Queue_4_io_deq_ready),
    .io_deq_valid(Queue_4_io_deq_valid),
    .io_deq_bits_id(Queue_4_io_deq_bits_id),
    .io_deq_bits_data(Queue_4_io_deq_bits_data),
    .io_deq_bits_resp(Queue_4_io_deq_bits_resp),
    .io_deq_bits_user(Queue_4_io_deq_bits_user),
    .io_deq_bits_last(Queue_4_io_deq_bits_last)
  );
  assign auto_in_aw_ready = Queue_io_enq_ready; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_w_ready = Queue_1_io_enq_ready; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_b_valid = Queue_2_io_deq_valid; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_b_bits_id = Queue_2_io_deq_bits_id; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_b_bits_resp = Queue_2_io_deq_bits_resp; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_b_bits_user = Queue_2_io_deq_bits_user; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_ar_ready = Queue_3_io_enq_ready; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_r_valid = Queue_4_io_deq_valid; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_r_bits_id = Queue_4_io_deq_bits_id; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_r_bits_data = Queue_4_io_deq_bits_data; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_r_bits_resp = Queue_4_io_deq_bits_resp; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_r_bits_user = Queue_4_io_deq_bits_user; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_in_r_bits_last = Queue_4_io_deq_bits_last; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@324931.4]
  assign auto_out_aw_valid = Queue_io_deq_valid; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_aw_bits_id = Queue_io_deq_bits_id; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_aw_bits_addr = Queue_io_deq_bits_addr; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_aw_bits_user = Queue_io_deq_bits_user; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_w_valid = Queue_1_io_deq_valid; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_w_bits_data = Queue_1_io_deq_bits_data; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_w_bits_strb = Queue_1_io_deq_bits_strb; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_b_ready = Queue_2_io_enq_ready; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_ar_valid = Queue_3_io_deq_valid; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_ar_bits_id = Queue_3_io_deq_bits_id; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_ar_bits_addr = Queue_3_io_deq_bits_addr; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_ar_bits_user = Queue_3_io_deq_bits_user; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign auto_out_r_ready = Queue_4_io_enq_ready; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@324930.4]
  assign Queue_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@324933.4]
  assign Queue_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@324934.4]
  assign Queue_io_enq_valid = auto_in_aw_valid; // @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@324935.4]
  assign Queue_io_enq_bits_id = auto_in_aw_bits_id; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324945.4]
  assign Queue_io_enq_bits_addr = auto_in_aw_bits_addr; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324944.4]
  assign Queue_io_enq_bits_user = auto_in_aw_bits_user; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324936.4]
  assign Queue_io_deq_ready = auto_out_aw_ready; // @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@324959.4]
  assign Queue_1_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@324962.4]
  assign Queue_1_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@324963.4]
  assign Queue_1_io_enq_valid = auto_in_w_valid; // @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@324964.4]
  assign Queue_1_io_enq_bits_data = auto_in_w_bits_data; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324967.4]
  assign Queue_1_io_enq_bits_strb = auto_in_w_bits_strb; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324966.4]
  assign Queue_1_io_deq_ready = auto_out_w_ready; // @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@324974.4]
  assign Queue_2_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@324977.4]
  assign Queue_2_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@324978.4]
  assign Queue_2_io_enq_valid = auto_out_b_valid; // @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@324979.4]
  assign Queue_2_io_enq_bits_id = auto_out_b_bits_id; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324982.4]
  assign Queue_2_io_enq_bits_resp = auto_out_b_bits_resp; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324981.4]
  assign Queue_2_io_enq_bits_user = auto_out_b_bits_user; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324980.4]
  assign Queue_2_io_deq_ready = auto_in_b_ready; // @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@324989.4]
  assign Queue_3_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@324992.4]
  assign Queue_3_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@324993.4]
  assign Queue_3_io_enq_valid = auto_in_ar_valid; // @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@324994.4]
  assign Queue_3_io_enq_bits_id = auto_in_ar_bits_id; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325004.4]
  assign Queue_3_io_enq_bits_addr = auto_in_ar_bits_addr; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325003.4]
  assign Queue_3_io_enq_bits_user = auto_in_ar_bits_user; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@324995.4]
  assign Queue_3_io_deq_ready = auto_out_ar_ready; // @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@325018.4]
  assign Queue_4_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@325021.4]
  assign Queue_4_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@325022.4]
  assign Queue_4_io_enq_valid = auto_out_r_valid; // @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@325023.4]
  assign Queue_4_io_enq_bits_id = auto_out_r_bits_id; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325028.4]
  assign Queue_4_io_enq_bits_data = auto_out_r_bits_data; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325027.4]
  assign Queue_4_io_enq_bits_resp = auto_out_r_bits_resp; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325026.4]
  assign Queue_4_io_enq_bits_user = auto_out_r_bits_user; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325025.4]
  assign Queue_4_io_deq_ready = auto_in_r_ready; // @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@325037.4]
endmodule
module Queue_59_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@325040.2]
  input         clock, // @[:example.TestHarness.GemminiRocketConfig.fir@325041.4]
  input         reset, // @[:example.TestHarness.GemminiRocketConfig.fir@325042.4]
  output        io_enq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  input         io_enq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  input  [3:0]  io_enq_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  input  [27:0] io_enq_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  input  [7:0]  io_enq_bits_len, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  input  [2:0]  io_enq_bits_size, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  input  [1:0]  io_enq_bits_burst, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  input         io_deq_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  output        io_deq_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  output [3:0]  io_deq_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  output [27:0] io_deq_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  output [7:0]  io_deq_bits_len, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  output [2:0]  io_deq_bits_size, // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
  output [1:0]  io_deq_bits_burst // @[:example.TestHarness.GemminiRocketConfig.fir@325043.4]
);
  reg [3:0] _T_id [0:0]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  reg [31:0] _RAND_0;
  wire [3:0] _T_id__T_14_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_id__T_14_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire [3:0] _T_id__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_id__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_id__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_id__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  reg [27:0] _T_addr [0:0]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  reg [31:0] _RAND_1;
  wire [27:0] _T_addr__T_14_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_addr__T_14_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire [27:0] _T_addr__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_addr__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_addr__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_addr__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  reg [7:0] _T_len [0:0]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  reg [31:0] _RAND_2;
  wire [7:0] _T_len__T_14_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_len__T_14_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire [7:0] _T_len__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_len__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_len__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_len__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  reg [2:0] _T_size [0:0]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  reg [31:0] _RAND_3;
  wire [2:0] _T_size__T_14_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_size__T_14_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire [2:0] _T_size__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_size__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_size__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_size__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  reg [1:0] _T_burst [0:0]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  reg [31:0] _RAND_4;
  wire [1:0] _T_burst__T_14_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_burst__T_14_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire [1:0] _T_burst__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_burst__T_10_addr; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_burst__T_10_mask; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  wire  _T_burst__T_10_en; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  reg  _T_1; // @[Decoupled.scala 212:35:example.TestHarness.GemminiRocketConfig.fir@325046.4]
  reg [31:0] _RAND_5;
  wire  _T_3; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@325048.4]
  wire  _T_6; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325051.4]
  wire  _T_8; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325054.4]
  wire  _GEN_15; // @[Decoupled.scala 240:27:example.TestHarness.GemminiRocketConfig.fir@325103.6]
  wire  _GEN_26; // @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@325092.4]
  wire  _GEN_25; // @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@325092.4]
  wire  _T_11; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@325071.4]
  wire  _T_12; // @[Decoupled.scala 231:19:example.TestHarness.GemminiRocketConfig.fir@325075.4]
  assign _T_id__T_14_addr = 1'h0;
  assign _T_id__T_14_data = _T_id[_T_id__T_14_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  assign _T_id__T_10_data = io_enq_bits_id;
  assign _T_id__T_10_addr = 1'h0;
  assign _T_id__T_10_mask = 1'h1;
  assign _T_id__T_10_en = _T_3 ? _GEN_15 : _T_6;
  assign _T_addr__T_14_addr = 1'h0;
  assign _T_addr__T_14_data = _T_addr[_T_addr__T_14_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  assign _T_addr__T_10_data = io_enq_bits_addr;
  assign _T_addr__T_10_addr = 1'h0;
  assign _T_addr__T_10_mask = 1'h1;
  assign _T_addr__T_10_en = _T_3 ? _GEN_15 : _T_6;
  assign _T_len__T_14_addr = 1'h0;
  assign _T_len__T_14_data = _T_len[_T_len__T_14_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  assign _T_len__T_10_data = io_enq_bits_len;
  assign _T_len__T_10_addr = 1'h0;
  assign _T_len__T_10_mask = 1'h1;
  assign _T_len__T_10_en = _T_3 ? _GEN_15 : _T_6;
  assign _T_size__T_14_addr = 1'h0;
  assign _T_size__T_14_data = _T_size[_T_size__T_14_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  assign _T_size__T_10_data = io_enq_bits_size;
  assign _T_size__T_10_addr = 1'h0;
  assign _T_size__T_10_mask = 1'h1;
  assign _T_size__T_10_en = _T_3 ? _GEN_15 : _T_6;
  assign _T_burst__T_14_addr = 1'h0;
  assign _T_burst__T_14_data = _T_burst[_T_burst__T_14_addr]; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
  assign _T_burst__T_10_data = io_enq_bits_burst;
  assign _T_burst__T_10_addr = 1'h0;
  assign _T_burst__T_10_mask = 1'h1;
  assign _T_burst__T_10_en = _T_3 ? _GEN_15 : _T_6;
  assign _T_3 = _T_1 == 1'h0; // @[Decoupled.scala 215:36:example.TestHarness.GemminiRocketConfig.fir@325048.4]
  assign _T_6 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325051.4]
  assign _T_8 = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325054.4]
  assign _GEN_15 = io_deq_ready ? 1'h0 : _T_6; // @[Decoupled.scala 240:27:example.TestHarness.GemminiRocketConfig.fir@325103.6]
  assign _GEN_26 = _T_3 ? _GEN_15 : _T_6; // @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@325092.4]
  assign _GEN_25 = _T_3 ? 1'h0 : _T_8; // @[Decoupled.scala 237:18:example.TestHarness.GemminiRocketConfig.fir@325092.4]
  assign _T_11 = _GEN_26 != _GEN_25; // @[Decoupled.scala 227:16:example.TestHarness.GemminiRocketConfig.fir@325071.4]
  assign _T_12 = _T_3 == 1'h0; // @[Decoupled.scala 231:19:example.TestHarness.GemminiRocketConfig.fir@325075.4]
  assign io_enq_ready = _T_1 == 1'h0; // @[Decoupled.scala 232:16:example.TestHarness.GemminiRocketConfig.fir@325078.4]
  assign io_deq_valid = io_enq_valid | _T_12; // @[Decoupled.scala 231:16:example.TestHarness.GemminiRocketConfig.fir@325076.4 Decoupled.scala 236:40:example.TestHarness.GemminiRocketConfig.fir@325090.6]
  assign io_deq_bits_id = _T_3 ? io_enq_bits_id : _T_id__T_14_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@325088.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@325101.6]
  assign io_deq_bits_addr = _T_3 ? io_enq_bits_addr : _T_addr__T_14_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@325087.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@325100.6]
  assign io_deq_bits_len = _T_3 ? io_enq_bits_len : _T_len__T_14_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@325086.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@325099.6]
  assign io_deq_bits_size = _T_3 ? io_enq_bits_size : _T_size__T_14_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@325085.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@325098.6]
  assign io_deq_bits_burst = _T_3 ? io_enq_bits_burst : _T_burst__T_14_data; // @[Decoupled.scala 233:15:example.TestHarness.GemminiRocketConfig.fir@325084.4 Decoupled.scala 238:19:example.TestHarness.GemminiRocketConfig.fir@325097.6]
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
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    _T_id[initvar] = _RAND_0[3:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_1 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    _T_addr[initvar] = _RAND_1[27:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_2 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    _T_len[initvar] = _RAND_2[7:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_3 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    _T_size[initvar] = _RAND_3[2:0];
  `endif // RANDOMIZE_MEM_INIT
  _RAND_4 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    _T_burst[initvar] = _RAND_4[1:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  _T_1 = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(_T_id__T_10_en & _T_id__T_10_mask) begin
      _T_id[_T_id__T_10_addr] <= _T_id__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
    end
    if(_T_addr__T_10_en & _T_addr__T_10_mask) begin
      _T_addr[_T_addr__T_10_addr] <= _T_addr__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
    end
    if(_T_len__T_10_en & _T_len__T_10_mask) begin
      _T_len[_T_len__T_10_addr] <= _T_len__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
    end
    if(_T_size__T_10_en & _T_size__T_10_mask) begin
      _T_size[_T_size__T_10_addr] <= _T_size__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
    end
    if(_T_burst__T_10_en & _T_burst__T_10_mask) begin
      _T_burst[_T_burst__T_10_addr] <= _T_burst__T_10_data; // @[Decoupled.scala 209:24:example.TestHarness.GemminiRocketConfig.fir@325045.4]
    end
    if (reset) begin
      _T_1 <= 1'h0;
    end else begin
      if (_T_11) begin
        if (_T_3) begin
          if (io_deq_ready) begin
            _T_1 <= 1'h0;
          end else begin
            _T_1 <= _T_6;
          end
        end else begin
          _T_1 <= _T_6;
        end
      end
    end
  end
endmodule
module AXI4Fragmenter_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@325244.2]
  input         clock, // @[:example.TestHarness.GemminiRocketConfig.fir@325245.4]
  input         reset, // @[:example.TestHarness.GemminiRocketConfig.fir@325246.4]
  output        auto_in_aw_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_in_aw_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [3:0]  auto_in_aw_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [27:0] auto_in_aw_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [7:0]  auto_in_aw_bits_len, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [2:0]  auto_in_aw_bits_size, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [1:0]  auto_in_aw_bits_burst, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_in_w_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_in_w_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [63:0] auto_in_w_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [7:0]  auto_in_w_bits_strb, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_in_w_bits_last, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_in_b_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_in_b_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output [3:0]  auto_in_b_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output [1:0]  auto_in_b_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_in_ar_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_in_ar_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [3:0]  auto_in_ar_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [27:0] auto_in_ar_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [7:0]  auto_in_ar_bits_len, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [2:0]  auto_in_ar_bits_size, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [1:0]  auto_in_ar_bits_burst, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_in_r_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_in_r_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output [3:0]  auto_in_r_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output [63:0] auto_in_r_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output [1:0]  auto_in_r_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_in_r_bits_last, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_out_aw_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_out_aw_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output [3:0]  auto_out_aw_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output [27:0] auto_out_aw_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_out_aw_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_out_w_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_out_w_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output [63:0] auto_out_w_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output [7:0]  auto_out_w_bits_strb, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_out_b_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_out_b_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [3:0]  auto_out_b_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [1:0]  auto_out_b_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_out_b_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_out_ar_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_out_ar_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output [3:0]  auto_out_ar_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output [27:0] auto_out_ar_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_out_ar_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  output        auto_out_r_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_out_r_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [3:0]  auto_out_r_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [63:0] auto_out_r_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input  [1:0]  auto_out_r_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_out_r_bits_user, // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
  input         auto_out_r_bits_last // @[:example.TestHarness.GemminiRocketConfig.fir@325247.4]
);
  wire  Queue_clock; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire  Queue_reset; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire  Queue_io_enq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire  Queue_io_enq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire [3:0] Queue_io_enq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire [27:0] Queue_io_enq_bits_addr; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire [7:0] Queue_io_enq_bits_len; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire [2:0] Queue_io_enq_bits_size; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire [1:0] Queue_io_enq_bits_burst; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire  Queue_io_deq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire  Queue_io_deq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire [3:0] Queue_io_deq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire [27:0] Queue_io_deq_bits_addr; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire [7:0] Queue_io_deq_bits_len; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire [2:0] Queue_io_deq_bits_size; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire [1:0] Queue_io_deq_bits_burst; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
  wire  Queue_1_clock; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire  Queue_1_reset; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire  Queue_1_io_enq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire  Queue_1_io_enq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire [3:0] Queue_1_io_enq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire [27:0] Queue_1_io_enq_bits_addr; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire [7:0] Queue_1_io_enq_bits_len; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire [2:0] Queue_1_io_enq_bits_size; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire [1:0] Queue_1_io_enq_bits_burst; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire  Queue_1_io_deq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire  Queue_1_io_deq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire [3:0] Queue_1_io_deq_bits_id; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire [27:0] Queue_1_io_deq_bits_addr; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire [7:0] Queue_1_io_deq_bits_len; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire [2:0] Queue_1_io_deq_bits_size; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire [1:0] Queue_1_io_deq_bits_burst; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
  wire  Queue_2_clock; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  wire  Queue_2_reset; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  wire  Queue_2_io_enq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  wire  Queue_2_io_enq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  wire [63:0] Queue_2_io_enq_bits_data; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  wire [7:0] Queue_2_io_enq_bits_strb; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  wire  Queue_2_io_enq_bits_last; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  wire  Queue_2_io_deq_ready; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  wire  Queue_2_io_deq_valid; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  wire [63:0] Queue_2_io_deq_bits_data; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  wire [7:0] Queue_2_io_deq_bits_strb; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  wire  Queue_2_io_deq_bits_last; // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
  reg  _T_4; // @[Fragmenter.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325286.4]
  reg [31:0] _RAND_0;
  reg [27:0] _T_5; // @[Fragmenter.scala 59:25:example.TestHarness.GemminiRocketConfig.fir@325287.4]
  reg [31:0] _RAND_1;
  reg [7:0] _T_6; // @[Fragmenter.scala 60:25:example.TestHarness.GemminiRocketConfig.fir@325288.4]
  reg [31:0] _RAND_2;
  wire [7:0] _T_2_bits_len; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325279.4]
  wire [7:0] _T_7; // @[Fragmenter.scala 62:23:example.TestHarness.GemminiRocketConfig.fir@325289.4]
  wire [27:0] _T_2_bits_addr; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325280.4]
  wire [27:0] _T_8; // @[Fragmenter.scala 63:23:example.TestHarness.GemminiRocketConfig.fir@325290.4]
  wire [1:0] _T_2_bits_burst; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325277.4]
  wire  _T_50; // @[Fragmenter.scala 90:34:example.TestHarness.GemminiRocketConfig.fir@325332.4]
  wire [2:0] _T_2_bits_size; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325278.4]
  wire [15:0] _T_59; // @[Fragmenter.scala 98:38:example.TestHarness.GemminiRocketConfig.fir@325341.4]
  wire [27:0] _GEN_48; // @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325342.4]
  wire [27:0] _T_61; // @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325343.4]
  wire [15:0] _T_62; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@325344.4]
  wire [22:0] _GEN_49; // @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325345.4]
  wire [22:0] _T_63; // @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325345.4]
  wire [14:0] _T_64; // @[Bundles.scala 29:30:example.TestHarness.GemminiRocketConfig.fir@325346.4]
  wire  _T_66; // @[Fragmenter.scala 101:28:example.TestHarness.GemminiRocketConfig.fir@325350.4]
  wire [27:0] _GEN_50; // @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325352.6]
  wire [27:0] _T_67; // @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325352.6]
  wire [27:0] _T_68; // @[Fragmenter.scala 102:49:example.TestHarness.GemminiRocketConfig.fir@325353.6]
  wire [27:0] _T_69; // @[Fragmenter.scala 102:62:example.TestHarness.GemminiRocketConfig.fir@325354.6]
  wire [27:0] _T_70; // @[Fragmenter.scala 102:47:example.TestHarness.GemminiRocketConfig.fir@325355.6]
  wire [27:0] _T_71; // @[Fragmenter.scala 102:45:example.TestHarness.GemminiRocketConfig.fir@325356.6]
  wire  _T_73; // @[Fragmenter.scala 108:27:example.TestHarness.GemminiRocketConfig.fir@325363.4]
  wire [27:0] _T_75; // @[Fragmenter.scala 120:28:example.TestHarness.GemminiRocketConfig.fir@325369.4]
  wire [9:0] _T_77; // @[package.scala 189:77:example.TestHarness.GemminiRocketConfig.fir@325371.4]
  wire [2:0] _T_78; // @[package.scala 189:82:example.TestHarness.GemminiRocketConfig.fir@325372.4]
  wire [2:0] _T_79; // @[package.scala 189:46:example.TestHarness.GemminiRocketConfig.fir@325373.4]
  wire [27:0] _GEN_52; // @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325374.4]
  wire [27:0] _T_80; // @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325374.4]
  wire  _T_2_valid; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 310:15:example.TestHarness.GemminiRocketConfig.fir@325282.4]
  wire  _T_82; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325377.4]
  wire  _T_83; // @[Fragmenter.scala 123:19:example.TestHarness.GemminiRocketConfig.fir@325379.6]
  wire [8:0] _GEN_53; // @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325382.6]
  wire [8:0] _T_85; // @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325383.6]
  wire [8:0] _GEN_4; // @[Fragmenter.scala 122:27:example.TestHarness.GemminiRocketConfig.fir@325378.4]
  reg  _T_88; // @[Fragmenter.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325414.4]
  reg [31:0] _RAND_3;
  reg [27:0] _T_89; // @[Fragmenter.scala 59:25:example.TestHarness.GemminiRocketConfig.fir@325415.4]
  reg [31:0] _RAND_4;
  reg [7:0] _T_90; // @[Fragmenter.scala 60:25:example.TestHarness.GemminiRocketConfig.fir@325416.4]
  reg [31:0] _RAND_5;
  wire [7:0] _T_86_bits_len; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325407.4]
  wire [7:0] _T_91; // @[Fragmenter.scala 62:23:example.TestHarness.GemminiRocketConfig.fir@325417.4]
  wire [27:0] _T_86_bits_addr; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325408.4]
  wire [27:0] _T_92; // @[Fragmenter.scala 63:23:example.TestHarness.GemminiRocketConfig.fir@325418.4]
  wire [1:0] _T_86_bits_burst; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325405.4]
  wire  _T_134; // @[Fragmenter.scala 90:34:example.TestHarness.GemminiRocketConfig.fir@325460.4]
  wire [2:0] _T_86_bits_size; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325406.4]
  wire [15:0] _T_143; // @[Fragmenter.scala 98:38:example.TestHarness.GemminiRocketConfig.fir@325469.4]
  wire [27:0] _GEN_58; // @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325470.4]
  wire [27:0] _T_145; // @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325471.4]
  wire [15:0] _T_146; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@325472.4]
  wire [22:0] _GEN_59; // @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325473.4]
  wire [22:0] _T_147; // @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325473.4]
  wire [14:0] _T_148; // @[Bundles.scala 29:30:example.TestHarness.GemminiRocketConfig.fir@325474.4]
  wire  _T_150; // @[Fragmenter.scala 101:28:example.TestHarness.GemminiRocketConfig.fir@325478.4]
  wire [27:0] _GEN_60; // @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325480.6]
  wire [27:0] _T_151; // @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325480.6]
  wire [27:0] _T_152; // @[Fragmenter.scala 102:49:example.TestHarness.GemminiRocketConfig.fir@325481.6]
  wire [27:0] _T_153; // @[Fragmenter.scala 102:62:example.TestHarness.GemminiRocketConfig.fir@325482.6]
  wire [27:0] _T_154; // @[Fragmenter.scala 102:47:example.TestHarness.GemminiRocketConfig.fir@325483.6]
  wire [27:0] _T_155; // @[Fragmenter.scala 102:45:example.TestHarness.GemminiRocketConfig.fir@325484.6]
  wire  _T_157; // @[Fragmenter.scala 108:27:example.TestHarness.GemminiRocketConfig.fir@325491.4]
  reg [8:0] _T_182; // @[Fragmenter.scala 162:30:example.TestHarness.GemminiRocketConfig.fir@325554.4]
  reg [31:0] _RAND_6;
  wire  _T_183; // @[Fragmenter.scala 163:30:example.TestHarness.GemminiRocketConfig.fir@325555.4]
  reg  _T_171; // @[Fragmenter.scala 148:35:example.TestHarness.GemminiRocketConfig.fir@325530.4]
  reg [31:0] _RAND_7;
  wire  _T_178; // @[Fragmenter.scala 156:52:example.TestHarness.GemminiRocketConfig.fir@325546.4]
  wire  _T_179; // @[Fragmenter.scala 156:35:example.TestHarness.GemminiRocketConfig.fir@325547.4]
  wire [27:0] _T_159; // @[Fragmenter.scala 120:28:example.TestHarness.GemminiRocketConfig.fir@325497.4]
  wire [9:0] _T_161; // @[package.scala 189:77:example.TestHarness.GemminiRocketConfig.fir@325499.4]
  wire [2:0] _T_162; // @[package.scala 189:82:example.TestHarness.GemminiRocketConfig.fir@325500.4]
  wire [2:0] _T_163; // @[package.scala 189:46:example.TestHarness.GemminiRocketConfig.fir@325501.4]
  wire [27:0] _GEN_62; // @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325502.4]
  wire [27:0] _T_164; // @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325502.4]
  wire  _T_86_valid; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 310:15:example.TestHarness.GemminiRocketConfig.fir@325410.4]
  wire  _T_166; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325505.4]
  wire  _T_167; // @[Fragmenter.scala 123:19:example.TestHarness.GemminiRocketConfig.fir@325507.6]
  wire [8:0] _GEN_63; // @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325510.6]
  wire [8:0] _T_169; // @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325511.6]
  wire [8:0] _GEN_9; // @[Fragmenter.scala 122:27:example.TestHarness.GemminiRocketConfig.fir@325506.4]
  wire  _T_180; // @[Fragmenter.scala 157:38:example.TestHarness.GemminiRocketConfig.fir@325549.4]
  wire  _T_181; // @[Fragmenter.scala 157:35:example.TestHarness.GemminiRocketConfig.fir@325550.4]
  wire  _T_174; // @[Fragmenter.scala 151:26:example.TestHarness.GemminiRocketConfig.fir@325535.4]
  wire  _GEN_10; // @[Fragmenter.scala 151:43:example.TestHarness.GemminiRocketConfig.fir@325536.4]
  wire  _T_177; // @[Fragmenter.scala 155:35:example.TestHarness.GemminiRocketConfig.fir@325544.4]
  wire  _T_175; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325539.4]
  wire [8:0] _T_184; // @[Fragmenter.scala 164:35:example.TestHarness.GemminiRocketConfig.fir@325556.4]
  wire [8:0] _T_185; // @[Fragmenter.scala 164:23:example.TestHarness.GemminiRocketConfig.fir@325557.4]
  wire  _T_186; // @[Fragmenter.scala 165:27:example.TestHarness.GemminiRocketConfig.fir@325558.4]
  wire  _T_170_valid; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325522.4 Decoupled.scala 310:15:example.TestHarness.GemminiRocketConfig.fir@325526.4]
  wire  _T_197; // @[Fragmenter.scala 171:37:example.TestHarness.GemminiRocketConfig.fir@325575.4]
  wire  _T_198; // @[Fragmenter.scala 171:51:example.TestHarness.GemminiRocketConfig.fir@325576.4]
  wire  _T_199; // @[Fragmenter.scala 171:33:example.TestHarness.GemminiRocketConfig.fir@325577.4]
  wire  _T_187; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325559.4]
  wire [8:0] _GEN_64; // @[Fragmenter.scala 166:27:example.TestHarness.GemminiRocketConfig.fir@325560.4]
  wire [8:0] _T_189; // @[Fragmenter.scala 166:27:example.TestHarness.GemminiRocketConfig.fir@325561.4]
  wire  _T_191; // @[Fragmenter.scala 167:15:example.TestHarness.GemminiRocketConfig.fir@325564.4]
  wire  _T_192; // @[Fragmenter.scala 167:39:example.TestHarness.GemminiRocketConfig.fir@325565.4]
  wire  _T_193; // @[Fragmenter.scala 167:29:example.TestHarness.GemminiRocketConfig.fir@325566.4]
  wire  _T_195; // @[Fragmenter.scala 167:14:example.TestHarness.GemminiRocketConfig.fir@325568.4]
  wire  _T_196; // @[Fragmenter.scala 167:14:example.TestHarness.GemminiRocketConfig.fir@325569.4]
  wire  _T_203; // @[Fragmenter.scala 176:15:example.TestHarness.GemminiRocketConfig.fir@325585.4]
  wire  _T_170_bits_last; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325522.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325523.4]
  wire  _T_204; // @[Fragmenter.scala 176:31:example.TestHarness.GemminiRocketConfig.fir@325586.4]
  wire  _T_205; // @[Fragmenter.scala 176:28:example.TestHarness.GemminiRocketConfig.fir@325587.4]
  wire  _T_206; // @[Fragmenter.scala 176:47:example.TestHarness.GemminiRocketConfig.fir@325588.4]
  wire  _T_208; // @[Fragmenter.scala 176:14:example.TestHarness.GemminiRocketConfig.fir@325590.4]
  wire  _T_209; // @[Fragmenter.scala 176:14:example.TestHarness.GemminiRocketConfig.fir@325591.4]
  wire  _T_214; // @[Fragmenter.scala 188:36:example.TestHarness.GemminiRocketConfig.fir@325604.4]
  wire  _T_215; // @[Fragmenter.scala 188:33:example.TestHarness.GemminiRocketConfig.fir@325605.4]
  reg [1:0] _T_217_0; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_8;
  reg [1:0] _T_217_1; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_9;
  reg [1:0] _T_217_2; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_10;
  reg [1:0] _T_217_3; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_11;
  reg [1:0] _T_217_4; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_12;
  reg [1:0] _T_217_5; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_13;
  reg [1:0] _T_217_6; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_14;
  reg [1:0] _T_217_7; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_15;
  reg [1:0] _T_217_8; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_16;
  reg [1:0] _T_217_9; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_17;
  reg [1:0] _T_217_10; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_18;
  reg [1:0] _T_217_11; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_19;
  reg [1:0] _T_217_12; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_20;
  reg [1:0] _T_217_13; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_21;
  reg [1:0] _T_217_14; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_22;
  reg [1:0] _T_217_15; // @[Fragmenter.scala 192:26:example.TestHarness.GemminiRocketConfig.fir@325625.4]
  reg [31:0] _RAND_23;
  wire [1:0] _GEN_13; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_14; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_15; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_16; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_17; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_18; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_19; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_20; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_21; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_22; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_23; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_24; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_25; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_26; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [1:0] _GEN_27; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  wire [15:0] _T_220; // @[OneHot.scala 65:12:example.TestHarness.GemminiRocketConfig.fir@325629.4]
  wire  _T_222; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325631.4]
  wire  _T_223; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325632.4]
  wire  _T_224; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325633.4]
  wire  _T_225; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325634.4]
  wire  _T_226; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325635.4]
  wire  _T_227; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325636.4]
  wire  _T_228; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325637.4]
  wire  _T_229; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325638.4]
  wire  _T_230; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325639.4]
  wire  _T_231; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325640.4]
  wire  _T_232; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325641.4]
  wire  _T_233; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325642.4]
  wire  _T_234; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325643.4]
  wire  _T_235; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325644.4]
  wire  _T_236; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325645.4]
  wire  _T_237; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325646.4]
  wire  _T_238; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325647.4]
  wire  _T_239; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325648.4]
  wire [1:0] _T_240; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325650.6]
  wire  _T_243; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325655.4]
  wire [1:0] _T_244; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325657.6]
  wire  _T_247; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325662.4]
  wire [1:0] _T_248; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325664.6]
  wire  _T_251; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325669.4]
  wire [1:0] _T_252; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325671.6]
  wire  _T_255; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325676.4]
  wire [1:0] _T_256; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325678.6]
  wire  _T_259; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325683.4]
  wire [1:0] _T_260; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325685.6]
  wire  _T_263; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325690.4]
  wire [1:0] _T_264; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325692.6]
  wire  _T_267; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325697.4]
  wire [1:0] _T_268; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325699.6]
  wire  _T_271; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325704.4]
  wire [1:0] _T_272; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325706.6]
  wire  _T_275; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325711.4]
  wire [1:0] _T_276; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325713.6]
  wire  _T_279; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325718.4]
  wire [1:0] _T_280; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325720.6]
  wire  _T_283; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325725.4]
  wire [1:0] _T_284; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325727.6]
  wire  _T_287; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325732.4]
  wire [1:0] _T_288; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325734.6]
  wire  _T_291; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325739.4]
  wire [1:0] _T_292; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325741.6]
  wire  _T_295; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325746.4]
  wire [1:0] _T_296; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325748.6]
  wire  _T_299; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325753.4]
  wire [1:0] _T_300; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325755.6]
  Queue_59_inTestHarness Queue ( // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325258.4]
    .clock(Queue_clock),
    .reset(Queue_reset),
    .io_enq_ready(Queue_io_enq_ready),
    .io_enq_valid(Queue_io_enq_valid),
    .io_enq_bits_id(Queue_io_enq_bits_id),
    .io_enq_bits_addr(Queue_io_enq_bits_addr),
    .io_enq_bits_len(Queue_io_enq_bits_len),
    .io_enq_bits_size(Queue_io_enq_bits_size),
    .io_enq_bits_burst(Queue_io_enq_bits_burst),
    .io_deq_ready(Queue_io_deq_ready),
    .io_deq_valid(Queue_io_deq_valid),
    .io_deq_bits_id(Queue_io_deq_bits_id),
    .io_deq_bits_addr(Queue_io_deq_bits_addr),
    .io_deq_bits_len(Queue_io_deq_bits_len),
    .io_deq_bits_size(Queue_io_deq_bits_size),
    .io_deq_bits_burst(Queue_io_deq_bits_burst)
  );
  Queue_59_inTestHarness Queue_1 ( // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325386.4]
    .clock(Queue_1_clock),
    .reset(Queue_1_reset),
    .io_enq_ready(Queue_1_io_enq_ready),
    .io_enq_valid(Queue_1_io_enq_valid),
    .io_enq_bits_id(Queue_1_io_enq_bits_id),
    .io_enq_bits_addr(Queue_1_io_enq_bits_addr),
    .io_enq_bits_len(Queue_1_io_enq_bits_len),
    .io_enq_bits_size(Queue_1_io_enq_bits_size),
    .io_enq_bits_burst(Queue_1_io_enq_bits_burst),
    .io_deq_ready(Queue_1_io_deq_ready),
    .io_deq_valid(Queue_1_io_deq_valid),
    .io_deq_bits_id(Queue_1_io_deq_bits_id),
    .io_deq_bits_addr(Queue_1_io_deq_bits_addr),
    .io_deq_bits_len(Queue_1_io_deq_bits_len),
    .io_deq_bits_size(Queue_1_io_deq_bits_size),
    .io_deq_bits_burst(Queue_1_io_deq_bits_burst)
  );
  Queue_6_inTestHarness Queue_2 ( // @[Decoupled.scala 287:21:example.TestHarness.GemminiRocketConfig.fir@325514.4]
    .clock(Queue_2_clock),
    .reset(Queue_2_reset),
    .io_enq_ready(Queue_2_io_enq_ready),
    .io_enq_valid(Queue_2_io_enq_valid),
    .io_enq_bits_data(Queue_2_io_enq_bits_data),
    .io_enq_bits_strb(Queue_2_io_enq_bits_strb),
    .io_enq_bits_last(Queue_2_io_enq_bits_last),
    .io_deq_ready(Queue_2_io_deq_ready),
    .io_deq_valid(Queue_2_io_deq_valid),
    .io_deq_bits_data(Queue_2_io_deq_bits_data),
    .io_deq_bits_strb(Queue_2_io_deq_bits_strb),
    .io_deq_bits_last(Queue_2_io_deq_bits_last)
  );
  assign _T_2_bits_len = Queue_io_deq_bits_len; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325279.4]
  assign _T_7 = _T_4 ? _T_6 : _T_2_bits_len; // @[Fragmenter.scala 62:23:example.TestHarness.GemminiRocketConfig.fir@325289.4]
  assign _T_2_bits_addr = Queue_io_deq_bits_addr; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325280.4]
  assign _T_8 = _T_4 ? _T_5 : _T_2_bits_addr; // @[Fragmenter.scala 63:23:example.TestHarness.GemminiRocketConfig.fir@325290.4]
  assign _T_2_bits_burst = Queue_io_deq_bits_burst; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325277.4]
  assign _T_50 = _T_2_bits_burst == 2'h0; // @[Fragmenter.scala 90:34:example.TestHarness.GemminiRocketConfig.fir@325332.4]
  assign _T_2_bits_size = Queue_io_deq_bits_size; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325278.4]
  assign _T_59 = 16'h1 << _T_2_bits_size; // @[Fragmenter.scala 98:38:example.TestHarness.GemminiRocketConfig.fir@325341.4]
  assign _GEN_48 = {{12'd0}, _T_59}; // @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325342.4]
  assign _T_61 = _T_8 + _GEN_48; // @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325343.4]
  assign _T_62 = {_T_2_bits_len,8'hff}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@325344.4]
  assign _GEN_49 = {{7'd0}, _T_62}; // @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325345.4]
  assign _T_63 = _GEN_49 << _T_2_bits_size; // @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325345.4]
  assign _T_64 = _T_63[22:8]; // @[Bundles.scala 29:30:example.TestHarness.GemminiRocketConfig.fir@325346.4]
  assign _T_66 = _T_2_bits_burst == 2'h2; // @[Fragmenter.scala 101:28:example.TestHarness.GemminiRocketConfig.fir@325350.4]
  assign _GEN_50 = {{13'd0}, _T_64}; // @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325352.6]
  assign _T_67 = _T_61 & _GEN_50; // @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325352.6]
  assign _T_68 = ~ _T_2_bits_addr; // @[Fragmenter.scala 102:49:example.TestHarness.GemminiRocketConfig.fir@325353.6]
  assign _T_69 = _T_68 | _GEN_50; // @[Fragmenter.scala 102:62:example.TestHarness.GemminiRocketConfig.fir@325354.6]
  assign _T_70 = ~ _T_69; // @[Fragmenter.scala 102:47:example.TestHarness.GemminiRocketConfig.fir@325355.6]
  assign _T_71 = _T_67 | _T_70; // @[Fragmenter.scala 102:45:example.TestHarness.GemminiRocketConfig.fir@325356.6]
  assign _T_73 = 8'h0 == _T_7; // @[Fragmenter.scala 108:27:example.TestHarness.GemminiRocketConfig.fir@325363.4]
  assign _T_75 = ~ _T_8; // @[Fragmenter.scala 120:28:example.TestHarness.GemminiRocketConfig.fir@325369.4]
  assign _T_77 = 10'h7 << _T_2_bits_size; // @[package.scala 189:77:example.TestHarness.GemminiRocketConfig.fir@325371.4]
  assign _T_78 = _T_77[2:0]; // @[package.scala 189:82:example.TestHarness.GemminiRocketConfig.fir@325372.4]
  assign _T_79 = ~ _T_78; // @[package.scala 189:46:example.TestHarness.GemminiRocketConfig.fir@325373.4]
  assign _GEN_52 = {{25'd0}, _T_79}; // @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325374.4]
  assign _T_80 = _T_75 | _GEN_52; // @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325374.4]
  assign _T_2_valid = Queue_io_deq_valid; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325272.4 Decoupled.scala 310:15:example.TestHarness.GemminiRocketConfig.fir@325282.4]
  assign _T_82 = auto_out_ar_ready & _T_2_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325377.4]
  assign _T_83 = _T_73 == 1'h0; // @[Fragmenter.scala 123:19:example.TestHarness.GemminiRocketConfig.fir@325379.6]
  assign _GEN_53 = {{1'd0}, _T_7}; // @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325382.6]
  assign _T_85 = _GEN_53 - 9'h1; // @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325383.6]
  assign _GEN_4 = _T_82 ? _T_85 : {{1'd0}, _T_6}; // @[Fragmenter.scala 122:27:example.TestHarness.GemminiRocketConfig.fir@325378.4]
  assign _T_86_bits_len = Queue_1_io_deq_bits_len; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325407.4]
  assign _T_91 = _T_88 ? _T_90 : _T_86_bits_len; // @[Fragmenter.scala 62:23:example.TestHarness.GemminiRocketConfig.fir@325417.4]
  assign _T_86_bits_addr = Queue_1_io_deq_bits_addr; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325408.4]
  assign _T_92 = _T_88 ? _T_89 : _T_86_bits_addr; // @[Fragmenter.scala 63:23:example.TestHarness.GemminiRocketConfig.fir@325418.4]
  assign _T_86_bits_burst = Queue_1_io_deq_bits_burst; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325405.4]
  assign _T_134 = _T_86_bits_burst == 2'h0; // @[Fragmenter.scala 90:34:example.TestHarness.GemminiRocketConfig.fir@325460.4]
  assign _T_86_bits_size = Queue_1_io_deq_bits_size; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325406.4]
  assign _T_143 = 16'h1 << _T_86_bits_size; // @[Fragmenter.scala 98:38:example.TestHarness.GemminiRocketConfig.fir@325469.4]
  assign _GEN_58 = {{12'd0}, _T_143}; // @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325470.4]
  assign _T_145 = _T_92 + _GEN_58; // @[Fragmenter.scala 98:29:example.TestHarness.GemminiRocketConfig.fir@325471.4]
  assign _T_146 = {_T_86_bits_len,8'hff}; // @[Cat.scala 29:58:example.TestHarness.GemminiRocketConfig.fir@325472.4]
  assign _GEN_59 = {{7'd0}, _T_146}; // @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325473.4]
  assign _T_147 = _GEN_59 << _T_86_bits_size; // @[Bundles.scala 29:21:example.TestHarness.GemminiRocketConfig.fir@325473.4]
  assign _T_148 = _T_147[22:8]; // @[Bundles.scala 29:30:example.TestHarness.GemminiRocketConfig.fir@325474.4]
  assign _T_150 = _T_86_bits_burst == 2'h2; // @[Fragmenter.scala 101:28:example.TestHarness.GemminiRocketConfig.fir@325478.4]
  assign _GEN_60 = {{13'd0}, _T_148}; // @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325480.6]
  assign _T_151 = _T_145 & _GEN_60; // @[Fragmenter.scala 102:33:example.TestHarness.GemminiRocketConfig.fir@325480.6]
  assign _T_152 = ~ _T_86_bits_addr; // @[Fragmenter.scala 102:49:example.TestHarness.GemminiRocketConfig.fir@325481.6]
  assign _T_153 = _T_152 | _GEN_60; // @[Fragmenter.scala 102:62:example.TestHarness.GemminiRocketConfig.fir@325482.6]
  assign _T_154 = ~ _T_153; // @[Fragmenter.scala 102:47:example.TestHarness.GemminiRocketConfig.fir@325483.6]
  assign _T_155 = _T_151 | _T_154; // @[Fragmenter.scala 102:45:example.TestHarness.GemminiRocketConfig.fir@325484.6]
  assign _T_157 = 8'h0 == _T_91; // @[Fragmenter.scala 108:27:example.TestHarness.GemminiRocketConfig.fir@325491.4]
  assign _T_183 = _T_182 == 9'h0; // @[Fragmenter.scala 163:30:example.TestHarness.GemminiRocketConfig.fir@325555.4]
  assign _T_178 = _T_183 | _T_171; // @[Fragmenter.scala 156:52:example.TestHarness.GemminiRocketConfig.fir@325546.4]
  assign _T_179 = auto_out_aw_ready & _T_178; // @[Fragmenter.scala 156:35:example.TestHarness.GemminiRocketConfig.fir@325547.4]
  assign _T_159 = ~ _T_92; // @[Fragmenter.scala 120:28:example.TestHarness.GemminiRocketConfig.fir@325497.4]
  assign _T_161 = 10'h7 << _T_86_bits_size; // @[package.scala 189:77:example.TestHarness.GemminiRocketConfig.fir@325499.4]
  assign _T_162 = _T_161[2:0]; // @[package.scala 189:82:example.TestHarness.GemminiRocketConfig.fir@325500.4]
  assign _T_163 = ~ _T_162; // @[package.scala 189:46:example.TestHarness.GemminiRocketConfig.fir@325501.4]
  assign _GEN_62 = {{25'd0}, _T_163}; // @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325502.4]
  assign _T_164 = _T_159 | _GEN_62; // @[Fragmenter.scala 120:34:example.TestHarness.GemminiRocketConfig.fir@325502.4]
  assign _T_86_valid = Queue_1_io_deq_valid; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325400.4 Decoupled.scala 310:15:example.TestHarness.GemminiRocketConfig.fir@325410.4]
  assign _T_166 = _T_179 & _T_86_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325505.4]
  assign _T_167 = _T_157 == 1'h0; // @[Fragmenter.scala 123:19:example.TestHarness.GemminiRocketConfig.fir@325507.6]
  assign _GEN_63 = {{1'd0}, _T_91}; // @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325510.6]
  assign _T_169 = _GEN_63 - 9'h1; // @[Fragmenter.scala 125:25:example.TestHarness.GemminiRocketConfig.fir@325511.6]
  assign _GEN_9 = _T_166 ? _T_169 : {{1'd0}, _T_90}; // @[Fragmenter.scala 122:27:example.TestHarness.GemminiRocketConfig.fir@325506.4]
  assign _T_180 = _T_171 == 1'h0; // @[Fragmenter.scala 157:38:example.TestHarness.GemminiRocketConfig.fir@325549.4]
  assign _T_181 = _T_86_valid & _T_180; // @[Fragmenter.scala 157:35:example.TestHarness.GemminiRocketConfig.fir@325550.4]
  assign _T_174 = _T_181 & _T_183; // @[Fragmenter.scala 151:26:example.TestHarness.GemminiRocketConfig.fir@325535.4]
  assign _GEN_10 = _T_174 | _T_171; // @[Fragmenter.scala 151:43:example.TestHarness.GemminiRocketConfig.fir@325536.4]
  assign _T_177 = _T_86_valid & _T_178; // @[Fragmenter.scala 155:35:example.TestHarness.GemminiRocketConfig.fir@325544.4]
  assign _T_175 = auto_out_aw_ready & _T_177; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325539.4]
  assign _T_184 = _T_181 ? 9'h1 : 9'h0; // @[Fragmenter.scala 164:35:example.TestHarness.GemminiRocketConfig.fir@325556.4]
  assign _T_185 = _T_183 ? _T_184 : _T_182; // @[Fragmenter.scala 164:23:example.TestHarness.GemminiRocketConfig.fir@325557.4]
  assign _T_186 = _T_185 == 9'h1; // @[Fragmenter.scala 165:27:example.TestHarness.GemminiRocketConfig.fir@325558.4]
  assign _T_170_valid = Queue_2_io_deq_valid; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325522.4 Decoupled.scala 310:15:example.TestHarness.GemminiRocketConfig.fir@325526.4]
  assign _T_197 = _T_183 == 1'h0; // @[Fragmenter.scala 171:37:example.TestHarness.GemminiRocketConfig.fir@325575.4]
  assign _T_198 = _T_197 | _T_181; // @[Fragmenter.scala 171:51:example.TestHarness.GemminiRocketConfig.fir@325576.4]
  assign _T_199 = _T_170_valid & _T_198; // @[Fragmenter.scala 171:33:example.TestHarness.GemminiRocketConfig.fir@325577.4]
  assign _T_187 = auto_out_w_ready & _T_199; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325559.4]
  assign _GEN_64 = {{8'd0}, _T_187}; // @[Fragmenter.scala 166:27:example.TestHarness.GemminiRocketConfig.fir@325560.4]
  assign _T_189 = _T_185 - _GEN_64; // @[Fragmenter.scala 166:27:example.TestHarness.GemminiRocketConfig.fir@325561.4]
  assign _T_191 = _T_187 == 1'h0; // @[Fragmenter.scala 167:15:example.TestHarness.GemminiRocketConfig.fir@325564.4]
  assign _T_192 = _T_185 != 9'h0; // @[Fragmenter.scala 167:39:example.TestHarness.GemminiRocketConfig.fir@325565.4]
  assign _T_193 = _T_191 | _T_192; // @[Fragmenter.scala 167:29:example.TestHarness.GemminiRocketConfig.fir@325566.4]
  assign _T_195 = _T_193 | reset; // @[Fragmenter.scala 167:14:example.TestHarness.GemminiRocketConfig.fir@325568.4]
  assign _T_196 = _T_195 == 1'h0; // @[Fragmenter.scala 167:14:example.TestHarness.GemminiRocketConfig.fir@325569.4]
  assign _T_203 = _T_199 == 1'h0; // @[Fragmenter.scala 176:15:example.TestHarness.GemminiRocketConfig.fir@325585.4]
  assign _T_170_bits_last = Queue_2_io_deq_bits_last; // @[Decoupled.scala 308:19:example.TestHarness.GemminiRocketConfig.fir@325522.4 Decoupled.scala 309:14:example.TestHarness.GemminiRocketConfig.fir@325523.4]
  assign _T_204 = _T_170_bits_last == 1'h0; // @[Fragmenter.scala 176:31:example.TestHarness.GemminiRocketConfig.fir@325586.4]
  assign _T_205 = _T_203 | _T_204; // @[Fragmenter.scala 176:28:example.TestHarness.GemminiRocketConfig.fir@325587.4]
  assign _T_206 = _T_205 | _T_186; // @[Fragmenter.scala 176:47:example.TestHarness.GemminiRocketConfig.fir@325588.4]
  assign _T_208 = _T_206 | reset; // @[Fragmenter.scala 176:14:example.TestHarness.GemminiRocketConfig.fir@325590.4]
  assign _T_209 = _T_208 == 1'h0; // @[Fragmenter.scala 176:14:example.TestHarness.GemminiRocketConfig.fir@325591.4]
  assign _T_214 = auto_out_b_bits_user == 1'h0; // @[Fragmenter.scala 188:36:example.TestHarness.GemminiRocketConfig.fir@325604.4]
  assign _T_215 = auto_in_b_ready | _T_214; // @[Fragmenter.scala 188:33:example.TestHarness.GemminiRocketConfig.fir@325605.4]
  assign _GEN_13 = 4'h1 == auto_out_b_bits_id ? _T_217_1 : _T_217_0; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_14 = 4'h2 == auto_out_b_bits_id ? _T_217_2 : _GEN_13; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_15 = 4'h3 == auto_out_b_bits_id ? _T_217_3 : _GEN_14; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_16 = 4'h4 == auto_out_b_bits_id ? _T_217_4 : _GEN_15; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_17 = 4'h5 == auto_out_b_bits_id ? _T_217_5 : _GEN_16; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_18 = 4'h6 == auto_out_b_bits_id ? _T_217_6 : _GEN_17; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_19 = 4'h7 == auto_out_b_bits_id ? _T_217_7 : _GEN_18; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_20 = 4'h8 == auto_out_b_bits_id ? _T_217_8 : _GEN_19; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_21 = 4'h9 == auto_out_b_bits_id ? _T_217_9 : _GEN_20; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_22 = 4'ha == auto_out_b_bits_id ? _T_217_10 : _GEN_21; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_23 = 4'hb == auto_out_b_bits_id ? _T_217_11 : _GEN_22; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_24 = 4'hc == auto_out_b_bits_id ? _T_217_12 : _GEN_23; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_25 = 4'hd == auto_out_b_bits_id ? _T_217_13 : _GEN_24; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_26 = 4'he == auto_out_b_bits_id ? _T_217_14 : _GEN_25; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _GEN_27 = 4'hf == auto_out_b_bits_id ? _T_217_15 : _GEN_26; // @[Fragmenter.scala 193:41:example.TestHarness.GemminiRocketConfig.fir@325626.4]
  assign _T_220 = 16'h1 << auto_out_b_bits_id; // @[OneHot.scala 65:12:example.TestHarness.GemminiRocketConfig.fir@325629.4]
  assign _T_222 = _T_220[0]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325631.4]
  assign _T_223 = _T_220[1]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325632.4]
  assign _T_224 = _T_220[2]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325633.4]
  assign _T_225 = _T_220[3]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325634.4]
  assign _T_226 = _T_220[4]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325635.4]
  assign _T_227 = _T_220[5]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325636.4]
  assign _T_228 = _T_220[6]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325637.4]
  assign _T_229 = _T_220[7]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325638.4]
  assign _T_230 = _T_220[8]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325639.4]
  assign _T_231 = _T_220[9]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325640.4]
  assign _T_232 = _T_220[10]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325641.4]
  assign _T_233 = _T_220[11]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325642.4]
  assign _T_234 = _T_220[12]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325643.4]
  assign _T_235 = _T_220[13]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325644.4]
  assign _T_236 = _T_220[14]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325645.4]
  assign _T_237 = _T_220[15]; // @[Fragmenter.scala 194:63:example.TestHarness.GemminiRocketConfig.fir@325646.4]
  assign _T_238 = _T_215 & auto_out_b_valid; // @[Decoupled.scala 40:37:example.TestHarness.GemminiRocketConfig.fir@325647.4]
  assign _T_239 = _T_222 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325648.4]
  assign _T_240 = _T_217_0 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325650.6]
  assign _T_243 = _T_223 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325655.4]
  assign _T_244 = _T_217_1 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325657.6]
  assign _T_247 = _T_224 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325662.4]
  assign _T_248 = _T_217_2 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325664.6]
  assign _T_251 = _T_225 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325669.4]
  assign _T_252 = _T_217_3 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325671.6]
  assign _T_255 = _T_226 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325676.4]
  assign _T_256 = _T_217_4 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325678.6]
  assign _T_259 = _T_227 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325683.4]
  assign _T_260 = _T_217_5 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325685.6]
  assign _T_263 = _T_228 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325690.4]
  assign _T_264 = _T_217_6 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325692.6]
  assign _T_267 = _T_229 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325697.4]
  assign _T_268 = _T_217_7 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325699.6]
  assign _T_271 = _T_230 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325704.4]
  assign _T_272 = _T_217_8 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325706.6]
  assign _T_275 = _T_231 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325711.4]
  assign _T_276 = _T_217_9 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325713.6]
  assign _T_279 = _T_232 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325718.4]
  assign _T_280 = _T_217_10 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325720.6]
  assign _T_283 = _T_233 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325725.4]
  assign _T_284 = _T_217_11 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325727.6]
  assign _T_287 = _T_234 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325732.4]
  assign _T_288 = _T_217_12 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325734.6]
  assign _T_291 = _T_235 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325739.4]
  assign _T_292 = _T_217_13 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325741.6]
  assign _T_295 = _T_236 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325746.4]
  assign _T_296 = _T_217_14 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325748.6]
  assign _T_299 = _T_237 & _T_238; // @[Fragmenter.scala 195:19:example.TestHarness.GemminiRocketConfig.fir@325753.4]
  assign _T_300 = _T_217_15 | auto_out_b_bits_resp; // @[Fragmenter.scala 195:70:example.TestHarness.GemminiRocketConfig.fir@325755.6]
  assign auto_in_aw_ready = Queue_1_io_enq_ready; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
  assign auto_in_w_ready = Queue_2_io_enq_ready; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
  assign auto_in_b_valid = auto_out_b_valid & auto_out_b_bits_user; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
  assign auto_in_b_bits_id = auto_out_b_bits_id; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
  assign auto_in_b_bits_resp = auto_out_b_bits_resp | _GEN_27; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
  assign auto_in_ar_ready = Queue_io_enq_ready; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
  assign auto_in_r_valid = auto_out_r_valid; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
  assign auto_in_r_bits_id = auto_out_r_bits_id; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
  assign auto_in_r_bits_data = auto_out_r_bits_data; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
  assign auto_in_r_bits_resp = auto_out_r_bits_resp; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
  assign auto_in_r_bits_last = auto_out_r_bits_last & auto_out_r_bits_user; // @[LazyModule.scala 173:31:example.TestHarness.GemminiRocketConfig.fir@325257.4]
  assign auto_out_aw_valid = _T_86_valid & _T_178; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_aw_bits_id = Queue_1_io_deq_bits_id; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_aw_bits_addr = ~ _T_164; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_aw_bits_user = 8'h0 == _T_91; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_w_valid = _T_170_valid & _T_198; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_w_bits_data = Queue_2_io_deq_bits_data; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_w_bits_strb = Queue_2_io_deq_bits_strb; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_b_ready = auto_in_b_ready | _T_214; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_ar_valid = Queue_io_deq_valid; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_ar_bits_id = Queue_io_deq_bits_id; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_ar_bits_addr = ~ _T_80; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_ar_bits_user = 8'h0 == _T_7; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign auto_out_r_ready = auto_in_r_ready; // @[LazyModule.scala 173:49:example.TestHarness.GemminiRocketConfig.fir@325256.4]
  assign Queue_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@325259.4]
  assign Queue_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@325260.4]
  assign Queue_io_enq_valid = auto_in_ar_valid; // @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@325261.4]
  assign Queue_io_enq_bits_id = auto_in_ar_bits_id; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325270.4]
  assign Queue_io_enq_bits_addr = auto_in_ar_bits_addr; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325269.4]
  assign Queue_io_enq_bits_len = auto_in_ar_bits_len; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325268.4]
  assign Queue_io_enq_bits_size = auto_in_ar_bits_size; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325267.4]
  assign Queue_io_enq_bits_burst = auto_in_ar_bits_burst; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325266.4]
  assign Queue_io_deq_ready = auto_out_ar_ready & _T_73; // @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@325283.4]
  assign Queue_1_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@325387.4]
  assign Queue_1_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@325388.4]
  assign Queue_1_io_enq_valid = auto_in_aw_valid; // @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@325389.4]
  assign Queue_1_io_enq_bits_id = auto_in_aw_bits_id; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325398.4]
  assign Queue_1_io_enq_bits_addr = auto_in_aw_bits_addr; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325397.4]
  assign Queue_1_io_enq_bits_len = auto_in_aw_bits_len; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325396.4]
  assign Queue_1_io_enq_bits_size = auto_in_aw_bits_size; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325395.4]
  assign Queue_1_io_enq_bits_burst = auto_in_aw_bits_burst; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325394.4]
  assign Queue_1_io_deq_ready = _T_179 & _T_157; // @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@325411.4]
  assign Queue_2_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@325515.4]
  assign Queue_2_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@325516.4]
  assign Queue_2_io_enq_valid = auto_in_w_valid; // @[Decoupled.scala 288:22:example.TestHarness.GemminiRocketConfig.fir@325517.4]
  assign Queue_2_io_enq_bits_data = auto_in_w_bits_data; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325520.4]
  assign Queue_2_io_enq_bits_strb = auto_in_w_bits_strb; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325519.4]
  assign Queue_2_io_enq_bits_last = auto_in_w_bits_last; // @[Decoupled.scala 289:21:example.TestHarness.GemminiRocketConfig.fir@325518.4]
  assign Queue_2_io_deq_ready = auto_out_w_ready & _T_198; // @[Decoupled.scala 311:15:example.TestHarness.GemminiRocketConfig.fir@325527.4]
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
  _T_4 = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  _T_5 = _RAND_1[27:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  _T_6 = _RAND_2[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  _T_88 = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  _T_89 = _RAND_4[27:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  _T_90 = _RAND_5[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  _T_182 = _RAND_6[8:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  _T_171 = _RAND_7[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  _T_217_0 = _RAND_8[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  _T_217_1 = _RAND_9[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  _T_217_2 = _RAND_10[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  _T_217_3 = _RAND_11[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  _T_217_4 = _RAND_12[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  _T_217_5 = _RAND_13[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  _T_217_6 = _RAND_14[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  _T_217_7 = _RAND_15[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  _T_217_8 = _RAND_16[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  _T_217_9 = _RAND_17[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  _T_217_10 = _RAND_18[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  _T_217_11 = _RAND_19[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  _T_217_12 = _RAND_20[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  _T_217_13 = _RAND_21[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  _T_217_14 = _RAND_22[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  _T_217_15 = _RAND_23[1:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      _T_4 <= 1'h0;
    end else begin
      if (_T_82) begin
        _T_4 <= _T_83;
      end
    end
    if (_T_82) begin
      if (_T_50) begin
        _T_5 <= _T_2_bits_addr;
      end else begin
        if (_T_66) begin
          _T_5 <= _T_71;
        end else begin
          _T_5 <= _T_61;
        end
      end
    end
    _T_6 <= _GEN_4[7:0];
    if (reset) begin
      _T_88 <= 1'h0;
    end else begin
      if (_T_166) begin
        _T_88 <= _T_167;
      end
    end
    if (_T_166) begin
      if (_T_134) begin
        _T_89 <= _T_86_bits_addr;
      end else begin
        if (_T_150) begin
          _T_89 <= _T_155;
        end else begin
          _T_89 <= _T_145;
        end
      end
    end
    _T_90 <= _GEN_9[7:0];
    if (reset) begin
      _T_182 <= 9'h0;
    end else begin
      _T_182 <= _T_189;
    end
    if (reset) begin
      _T_171 <= 1'h0;
    end else begin
      if (_T_175) begin
        _T_171 <= 1'h0;
      end else begin
        _T_171 <= _GEN_10;
      end
    end
    if (reset) begin
      _T_217_0 <= 2'h0;
    end else begin
      if (_T_239) begin
        if (auto_out_b_bits_user) begin
          _T_217_0 <= 2'h0;
        end else begin
          _T_217_0 <= _T_240;
        end
      end
    end
    if (reset) begin
      _T_217_1 <= 2'h0;
    end else begin
      if (_T_243) begin
        if (auto_out_b_bits_user) begin
          _T_217_1 <= 2'h0;
        end else begin
          _T_217_1 <= _T_244;
        end
      end
    end
    if (reset) begin
      _T_217_2 <= 2'h0;
    end else begin
      if (_T_247) begin
        if (auto_out_b_bits_user) begin
          _T_217_2 <= 2'h0;
        end else begin
          _T_217_2 <= _T_248;
        end
      end
    end
    if (reset) begin
      _T_217_3 <= 2'h0;
    end else begin
      if (_T_251) begin
        if (auto_out_b_bits_user) begin
          _T_217_3 <= 2'h0;
        end else begin
          _T_217_3 <= _T_252;
        end
      end
    end
    if (reset) begin
      _T_217_4 <= 2'h0;
    end else begin
      if (_T_255) begin
        if (auto_out_b_bits_user) begin
          _T_217_4 <= 2'h0;
        end else begin
          _T_217_4 <= _T_256;
        end
      end
    end
    if (reset) begin
      _T_217_5 <= 2'h0;
    end else begin
      if (_T_259) begin
        if (auto_out_b_bits_user) begin
          _T_217_5 <= 2'h0;
        end else begin
          _T_217_5 <= _T_260;
        end
      end
    end
    if (reset) begin
      _T_217_6 <= 2'h0;
    end else begin
      if (_T_263) begin
        if (auto_out_b_bits_user) begin
          _T_217_6 <= 2'h0;
        end else begin
          _T_217_6 <= _T_264;
        end
      end
    end
    if (reset) begin
      _T_217_7 <= 2'h0;
    end else begin
      if (_T_267) begin
        if (auto_out_b_bits_user) begin
          _T_217_7 <= 2'h0;
        end else begin
          _T_217_7 <= _T_268;
        end
      end
    end
    if (reset) begin
      _T_217_8 <= 2'h0;
    end else begin
      if (_T_271) begin
        if (auto_out_b_bits_user) begin
          _T_217_8 <= 2'h0;
        end else begin
          _T_217_8 <= _T_272;
        end
      end
    end
    if (reset) begin
      _T_217_9 <= 2'h0;
    end else begin
      if (_T_275) begin
        if (auto_out_b_bits_user) begin
          _T_217_9 <= 2'h0;
        end else begin
          _T_217_9 <= _T_276;
        end
      end
    end
    if (reset) begin
      _T_217_10 <= 2'h0;
    end else begin
      if (_T_279) begin
        if (auto_out_b_bits_user) begin
          _T_217_10 <= 2'h0;
        end else begin
          _T_217_10 <= _T_280;
        end
      end
    end
    if (reset) begin
      _T_217_11 <= 2'h0;
    end else begin
      if (_T_283) begin
        if (auto_out_b_bits_user) begin
          _T_217_11 <= 2'h0;
        end else begin
          _T_217_11 <= _T_284;
        end
      end
    end
    if (reset) begin
      _T_217_12 <= 2'h0;
    end else begin
      if (_T_287) begin
        if (auto_out_b_bits_user) begin
          _T_217_12 <= 2'h0;
        end else begin
          _T_217_12 <= _T_288;
        end
      end
    end
    if (reset) begin
      _T_217_13 <= 2'h0;
    end else begin
      if (_T_291) begin
        if (auto_out_b_bits_user) begin
          _T_217_13 <= 2'h0;
        end else begin
          _T_217_13 <= _T_292;
        end
      end
    end
    if (reset) begin
      _T_217_14 <= 2'h0;
    end else begin
      if (_T_295) begin
        if (auto_out_b_bits_user) begin
          _T_217_14 <= 2'h0;
        end else begin
          _T_217_14 <= _T_296;
        end
      end
    end
    if (reset) begin
      _T_217_15 <= 2'h0;
    end else begin
      if (_T_299) begin
        if (auto_out_b_bits_user) begin
          _T_217_15 <= 2'h0;
        end else begin
          _T_217_15 <= _T_300;
        end
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_196) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Fragmenter.scala:167 assert (!out.w.fire() || w_todo =/= UInt(0)) // underflow impossible\n"); // @[Fragmenter.scala 167:14:example.TestHarness.GemminiRocketConfig.fir@325571.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_196) begin
          $fatal; // @[Fragmenter.scala 167:14:example.TestHarness.GemminiRocketConfig.fir@325572.6]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Fragmenter.scala:176 assert (!out.w.valid || !in_w.bits.last || w_last)\n"); // @[Fragmenter.scala 176:14:example.TestHarness.GemminiRocketConfig.fir@325593.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_209) begin
          $fatal; // @[Fragmenter.scala 176:14:example.TestHarness.GemminiRocketConfig.fir@325594.6]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module SimAXIMem_inTestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@325760.2]
  input         clock, // @[:example.TestHarness.GemminiRocketConfig.fir@325761.4]
  input         reset, // @[:example.TestHarness.GemminiRocketConfig.fir@325762.4]
  output        io_axi4_0_aw_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input         io_axi4_0_aw_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [3:0]  io_axi4_0_aw_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [27:0] io_axi4_0_aw_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [7:0]  io_axi4_0_aw_bits_len, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [2:0]  io_axi4_0_aw_bits_size, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [1:0]  io_axi4_0_aw_bits_burst, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  output        io_axi4_0_w_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input         io_axi4_0_w_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [63:0] io_axi4_0_w_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [7:0]  io_axi4_0_w_bits_strb, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input         io_axi4_0_w_bits_last, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input         io_axi4_0_b_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  output        io_axi4_0_b_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  output [3:0]  io_axi4_0_b_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  output [1:0]  io_axi4_0_b_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  output        io_axi4_0_ar_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input         io_axi4_0_ar_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [3:0]  io_axi4_0_ar_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [27:0] io_axi4_0_ar_bits_addr, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [7:0]  io_axi4_0_ar_bits_len, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [2:0]  io_axi4_0_ar_bits_size, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input  [1:0]  io_axi4_0_ar_bits_burst, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  input         io_axi4_0_r_ready, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  output        io_axi4_0_r_valid, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  output [3:0]  io_axi4_0_r_bits_id, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  output [63:0] io_axi4_0_r_bits_data, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  output [1:0]  io_axi4_0_r_bits_resp, // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
  output        io_axi4_0_r_bits_last // @[:example.TestHarness.GemminiRocketConfig.fir@325764.4]
);
  wire  srams_clock; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_reset; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_aw_ready; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_aw_valid; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire [3:0] srams_auto_in_aw_bits_id; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire [27:0] srams_auto_in_aw_bits_addr; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_aw_bits_user; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_w_ready; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_w_valid; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire [63:0] srams_auto_in_w_bits_data; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire [7:0] srams_auto_in_w_bits_strb; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_b_ready; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_b_valid; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire [3:0] srams_auto_in_b_bits_id; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire [1:0] srams_auto_in_b_bits_resp; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_b_bits_user; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_ar_ready; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_ar_valid; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire [3:0] srams_auto_in_ar_bits_id; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire [27:0] srams_auto_in_ar_bits_addr; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_ar_bits_user; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_r_ready; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_r_valid; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire [3:0] srams_auto_in_r_bits_id; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire [63:0] srams_auto_in_r_bits_data; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire [1:0] srams_auto_in_r_bits_resp; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  srams_auto_in_r_bits_user; // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
  wire  axi4xbar_clock; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_reset; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_aw_ready; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_aw_valid; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [3:0] axi4xbar_auto_in_aw_bits_id; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [27:0] axi4xbar_auto_in_aw_bits_addr; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [7:0] axi4xbar_auto_in_aw_bits_len; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [2:0] axi4xbar_auto_in_aw_bits_size; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [1:0] axi4xbar_auto_in_aw_bits_burst; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_w_ready; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_w_valid; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [63:0] axi4xbar_auto_in_w_bits_data; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [7:0] axi4xbar_auto_in_w_bits_strb; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_w_bits_last; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_b_ready; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_b_valid; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [3:0] axi4xbar_auto_in_b_bits_id; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [1:0] axi4xbar_auto_in_b_bits_resp; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_ar_ready; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_ar_valid; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [3:0] axi4xbar_auto_in_ar_bits_id; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [27:0] axi4xbar_auto_in_ar_bits_addr; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [7:0] axi4xbar_auto_in_ar_bits_len; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [2:0] axi4xbar_auto_in_ar_bits_size; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [1:0] axi4xbar_auto_in_ar_bits_burst; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_r_ready; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_r_valid; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [3:0] axi4xbar_auto_in_r_bits_id; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [63:0] axi4xbar_auto_in_r_bits_data; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [1:0] axi4xbar_auto_in_r_bits_resp; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_in_r_bits_last; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_aw_ready; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_aw_valid; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [3:0] axi4xbar_auto_out_aw_bits_id; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [27:0] axi4xbar_auto_out_aw_bits_addr; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [7:0] axi4xbar_auto_out_aw_bits_len; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [2:0] axi4xbar_auto_out_aw_bits_size; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [1:0] axi4xbar_auto_out_aw_bits_burst; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_w_ready; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_w_valid; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [63:0] axi4xbar_auto_out_w_bits_data; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [7:0] axi4xbar_auto_out_w_bits_strb; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_w_bits_last; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_b_ready; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_b_valid; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [3:0] axi4xbar_auto_out_b_bits_id; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [1:0] axi4xbar_auto_out_b_bits_resp; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_ar_ready; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_ar_valid; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [3:0] axi4xbar_auto_out_ar_bits_id; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [27:0] axi4xbar_auto_out_ar_bits_addr; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [7:0] axi4xbar_auto_out_ar_bits_len; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [2:0] axi4xbar_auto_out_ar_bits_size; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [1:0] axi4xbar_auto_out_ar_bits_burst; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_r_ready; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_r_valid; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [3:0] axi4xbar_auto_out_r_bits_id; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [63:0] axi4xbar_auto_out_r_bits_data; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire [1:0] axi4xbar_auto_out_r_bits_resp; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4xbar_auto_out_r_bits_last; // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
  wire  axi4buf_clock; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_reset; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_aw_ready; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_aw_valid; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [3:0] axi4buf_auto_in_aw_bits_id; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [27:0] axi4buf_auto_in_aw_bits_addr; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_aw_bits_user; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_w_ready; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_w_valid; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [63:0] axi4buf_auto_in_w_bits_data; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [7:0] axi4buf_auto_in_w_bits_strb; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_b_ready; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_b_valid; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [3:0] axi4buf_auto_in_b_bits_id; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [1:0] axi4buf_auto_in_b_bits_resp; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_b_bits_user; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_ar_ready; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_ar_valid; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [3:0] axi4buf_auto_in_ar_bits_id; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [27:0] axi4buf_auto_in_ar_bits_addr; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_ar_bits_user; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_r_ready; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_r_valid; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [3:0] axi4buf_auto_in_r_bits_id; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [63:0] axi4buf_auto_in_r_bits_data; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [1:0] axi4buf_auto_in_r_bits_resp; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_r_bits_user; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_in_r_bits_last; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_aw_ready; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_aw_valid; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [3:0] axi4buf_auto_out_aw_bits_id; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [27:0] axi4buf_auto_out_aw_bits_addr; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_aw_bits_user; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_w_ready; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_w_valid; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [63:0] axi4buf_auto_out_w_bits_data; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [7:0] axi4buf_auto_out_w_bits_strb; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_b_ready; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_b_valid; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [3:0] axi4buf_auto_out_b_bits_id; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [1:0] axi4buf_auto_out_b_bits_resp; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_b_bits_user; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_ar_ready; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_ar_valid; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [3:0] axi4buf_auto_out_ar_bits_id; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [27:0] axi4buf_auto_out_ar_bits_addr; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_ar_bits_user; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_r_ready; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_r_valid; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [3:0] axi4buf_auto_out_r_bits_id; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [63:0] axi4buf_auto_out_r_bits_data; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire [1:0] axi4buf_auto_out_r_bits_resp; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4buf_auto_out_r_bits_user; // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
  wire  axi4frag_clock; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_reset; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_aw_ready; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_aw_valid; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [3:0] axi4frag_auto_in_aw_bits_id; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [27:0] axi4frag_auto_in_aw_bits_addr; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [7:0] axi4frag_auto_in_aw_bits_len; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [2:0] axi4frag_auto_in_aw_bits_size; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [1:0] axi4frag_auto_in_aw_bits_burst; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_w_ready; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_w_valid; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [63:0] axi4frag_auto_in_w_bits_data; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [7:0] axi4frag_auto_in_w_bits_strb; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_w_bits_last; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_b_ready; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_b_valid; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [3:0] axi4frag_auto_in_b_bits_id; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [1:0] axi4frag_auto_in_b_bits_resp; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_ar_ready; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_ar_valid; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [3:0] axi4frag_auto_in_ar_bits_id; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [27:0] axi4frag_auto_in_ar_bits_addr; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [7:0] axi4frag_auto_in_ar_bits_len; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [2:0] axi4frag_auto_in_ar_bits_size; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [1:0] axi4frag_auto_in_ar_bits_burst; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_r_ready; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_r_valid; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [3:0] axi4frag_auto_in_r_bits_id; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [63:0] axi4frag_auto_in_r_bits_data; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [1:0] axi4frag_auto_in_r_bits_resp; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_in_r_bits_last; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_aw_ready; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_aw_valid; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [3:0] axi4frag_auto_out_aw_bits_id; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [27:0] axi4frag_auto_out_aw_bits_addr; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_aw_bits_user; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_w_ready; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_w_valid; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [63:0] axi4frag_auto_out_w_bits_data; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [7:0] axi4frag_auto_out_w_bits_strb; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_b_ready; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_b_valid; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [3:0] axi4frag_auto_out_b_bits_id; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [1:0] axi4frag_auto_out_b_bits_resp; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_b_bits_user; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_ar_ready; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_ar_valid; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [3:0] axi4frag_auto_out_ar_bits_id; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [27:0] axi4frag_auto_out_ar_bits_addr; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_ar_bits_user; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_r_ready; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_r_valid; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [3:0] axi4frag_auto_out_r_bits_id; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [63:0] axi4frag_auto_out_r_bits_data; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire [1:0] axi4frag_auto_out_r_bits_resp; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_r_bits_user; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  wire  axi4frag_auto_out_r_bits_last; // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
  AXI4RAM_inTestHarness srams ( // @[Ports.scala 221:69:example.TestHarness.GemminiRocketConfig.fir@325770.4]
    .clock(srams_clock),
    .reset(srams_reset),
    .auto_in_aw_ready(srams_auto_in_aw_ready),
    .auto_in_aw_valid(srams_auto_in_aw_valid),
    .auto_in_aw_bits_id(srams_auto_in_aw_bits_id),
    .auto_in_aw_bits_addr(srams_auto_in_aw_bits_addr),
    .auto_in_aw_bits_user(srams_auto_in_aw_bits_user),
    .auto_in_w_ready(srams_auto_in_w_ready),
    .auto_in_w_valid(srams_auto_in_w_valid),
    .auto_in_w_bits_data(srams_auto_in_w_bits_data),
    .auto_in_w_bits_strb(srams_auto_in_w_bits_strb),
    .auto_in_b_ready(srams_auto_in_b_ready),
    .auto_in_b_valid(srams_auto_in_b_valid),
    .auto_in_b_bits_id(srams_auto_in_b_bits_id),
    .auto_in_b_bits_resp(srams_auto_in_b_bits_resp),
    .auto_in_b_bits_user(srams_auto_in_b_bits_user),
    .auto_in_ar_ready(srams_auto_in_ar_ready),
    .auto_in_ar_valid(srams_auto_in_ar_valid),
    .auto_in_ar_bits_id(srams_auto_in_ar_bits_id),
    .auto_in_ar_bits_addr(srams_auto_in_ar_bits_addr),
    .auto_in_ar_bits_user(srams_auto_in_ar_bits_user),
    .auto_in_r_ready(srams_auto_in_r_ready),
    .auto_in_r_valid(srams_auto_in_r_valid),
    .auto_in_r_bits_id(srams_auto_in_r_bits_id),
    .auto_in_r_bits_data(srams_auto_in_r_bits_data),
    .auto_in_r_bits_resp(srams_auto_in_r_bits_resp),
    .auto_in_r_bits_user(srams_auto_in_r_bits_user)
  );
  AXI4Xbar_inTestHarness axi4xbar ( // @[Xbar.scala 211:30:example.TestHarness.GemminiRocketConfig.fir@325776.4]
    .clock(axi4xbar_clock),
    .reset(axi4xbar_reset),
    .auto_in_aw_ready(axi4xbar_auto_in_aw_ready),
    .auto_in_aw_valid(axi4xbar_auto_in_aw_valid),
    .auto_in_aw_bits_id(axi4xbar_auto_in_aw_bits_id),
    .auto_in_aw_bits_addr(axi4xbar_auto_in_aw_bits_addr),
    .auto_in_aw_bits_len(axi4xbar_auto_in_aw_bits_len),
    .auto_in_aw_bits_size(axi4xbar_auto_in_aw_bits_size),
    .auto_in_aw_bits_burst(axi4xbar_auto_in_aw_bits_burst),
    .auto_in_w_ready(axi4xbar_auto_in_w_ready),
    .auto_in_w_valid(axi4xbar_auto_in_w_valid),
    .auto_in_w_bits_data(axi4xbar_auto_in_w_bits_data),
    .auto_in_w_bits_strb(axi4xbar_auto_in_w_bits_strb),
    .auto_in_w_bits_last(axi4xbar_auto_in_w_bits_last),
    .auto_in_b_ready(axi4xbar_auto_in_b_ready),
    .auto_in_b_valid(axi4xbar_auto_in_b_valid),
    .auto_in_b_bits_id(axi4xbar_auto_in_b_bits_id),
    .auto_in_b_bits_resp(axi4xbar_auto_in_b_bits_resp),
    .auto_in_ar_ready(axi4xbar_auto_in_ar_ready),
    .auto_in_ar_valid(axi4xbar_auto_in_ar_valid),
    .auto_in_ar_bits_id(axi4xbar_auto_in_ar_bits_id),
    .auto_in_ar_bits_addr(axi4xbar_auto_in_ar_bits_addr),
    .auto_in_ar_bits_len(axi4xbar_auto_in_ar_bits_len),
    .auto_in_ar_bits_size(axi4xbar_auto_in_ar_bits_size),
    .auto_in_ar_bits_burst(axi4xbar_auto_in_ar_bits_burst),
    .auto_in_r_ready(axi4xbar_auto_in_r_ready),
    .auto_in_r_valid(axi4xbar_auto_in_r_valid),
    .auto_in_r_bits_id(axi4xbar_auto_in_r_bits_id),
    .auto_in_r_bits_data(axi4xbar_auto_in_r_bits_data),
    .auto_in_r_bits_resp(axi4xbar_auto_in_r_bits_resp),
    .auto_in_r_bits_last(axi4xbar_auto_in_r_bits_last),
    .auto_out_aw_ready(axi4xbar_auto_out_aw_ready),
    .auto_out_aw_valid(axi4xbar_auto_out_aw_valid),
    .auto_out_aw_bits_id(axi4xbar_auto_out_aw_bits_id),
    .auto_out_aw_bits_addr(axi4xbar_auto_out_aw_bits_addr),
    .auto_out_aw_bits_len(axi4xbar_auto_out_aw_bits_len),
    .auto_out_aw_bits_size(axi4xbar_auto_out_aw_bits_size),
    .auto_out_aw_bits_burst(axi4xbar_auto_out_aw_bits_burst),
    .auto_out_w_ready(axi4xbar_auto_out_w_ready),
    .auto_out_w_valid(axi4xbar_auto_out_w_valid),
    .auto_out_w_bits_data(axi4xbar_auto_out_w_bits_data),
    .auto_out_w_bits_strb(axi4xbar_auto_out_w_bits_strb),
    .auto_out_w_bits_last(axi4xbar_auto_out_w_bits_last),
    .auto_out_b_ready(axi4xbar_auto_out_b_ready),
    .auto_out_b_valid(axi4xbar_auto_out_b_valid),
    .auto_out_b_bits_id(axi4xbar_auto_out_b_bits_id),
    .auto_out_b_bits_resp(axi4xbar_auto_out_b_bits_resp),
    .auto_out_ar_ready(axi4xbar_auto_out_ar_ready),
    .auto_out_ar_valid(axi4xbar_auto_out_ar_valid),
    .auto_out_ar_bits_id(axi4xbar_auto_out_ar_bits_id),
    .auto_out_ar_bits_addr(axi4xbar_auto_out_ar_bits_addr),
    .auto_out_ar_bits_len(axi4xbar_auto_out_ar_bits_len),
    .auto_out_ar_bits_size(axi4xbar_auto_out_ar_bits_size),
    .auto_out_ar_bits_burst(axi4xbar_auto_out_ar_bits_burst),
    .auto_out_r_ready(axi4xbar_auto_out_r_ready),
    .auto_out_r_valid(axi4xbar_auto_out_r_valid),
    .auto_out_r_bits_id(axi4xbar_auto_out_r_bits_id),
    .auto_out_r_bits_data(axi4xbar_auto_out_r_bits_data),
    .auto_out_r_bits_resp(axi4xbar_auto_out_r_bits_resp),
    .auto_out_r_bits_last(axi4xbar_auto_out_r_bits_last)
  );
  AXI4Buffer_inTestHarness axi4buf ( // @[Buffer.scala 58:29:example.TestHarness.GemminiRocketConfig.fir@325782.4]
    .clock(axi4buf_clock),
    .reset(axi4buf_reset),
    .auto_in_aw_ready(axi4buf_auto_in_aw_ready),
    .auto_in_aw_valid(axi4buf_auto_in_aw_valid),
    .auto_in_aw_bits_id(axi4buf_auto_in_aw_bits_id),
    .auto_in_aw_bits_addr(axi4buf_auto_in_aw_bits_addr),
    .auto_in_aw_bits_user(axi4buf_auto_in_aw_bits_user),
    .auto_in_w_ready(axi4buf_auto_in_w_ready),
    .auto_in_w_valid(axi4buf_auto_in_w_valid),
    .auto_in_w_bits_data(axi4buf_auto_in_w_bits_data),
    .auto_in_w_bits_strb(axi4buf_auto_in_w_bits_strb),
    .auto_in_b_ready(axi4buf_auto_in_b_ready),
    .auto_in_b_valid(axi4buf_auto_in_b_valid),
    .auto_in_b_bits_id(axi4buf_auto_in_b_bits_id),
    .auto_in_b_bits_resp(axi4buf_auto_in_b_bits_resp),
    .auto_in_b_bits_user(axi4buf_auto_in_b_bits_user),
    .auto_in_ar_ready(axi4buf_auto_in_ar_ready),
    .auto_in_ar_valid(axi4buf_auto_in_ar_valid),
    .auto_in_ar_bits_id(axi4buf_auto_in_ar_bits_id),
    .auto_in_ar_bits_addr(axi4buf_auto_in_ar_bits_addr),
    .auto_in_ar_bits_user(axi4buf_auto_in_ar_bits_user),
    .auto_in_r_ready(axi4buf_auto_in_r_ready),
    .auto_in_r_valid(axi4buf_auto_in_r_valid),
    .auto_in_r_bits_id(axi4buf_auto_in_r_bits_id),
    .auto_in_r_bits_data(axi4buf_auto_in_r_bits_data),
    .auto_in_r_bits_resp(axi4buf_auto_in_r_bits_resp),
    .auto_in_r_bits_user(axi4buf_auto_in_r_bits_user),
    .auto_in_r_bits_last(axi4buf_auto_in_r_bits_last),
    .auto_out_aw_ready(axi4buf_auto_out_aw_ready),
    .auto_out_aw_valid(axi4buf_auto_out_aw_valid),
    .auto_out_aw_bits_id(axi4buf_auto_out_aw_bits_id),
    .auto_out_aw_bits_addr(axi4buf_auto_out_aw_bits_addr),
    .auto_out_aw_bits_user(axi4buf_auto_out_aw_bits_user),
    .auto_out_w_ready(axi4buf_auto_out_w_ready),
    .auto_out_w_valid(axi4buf_auto_out_w_valid),
    .auto_out_w_bits_data(axi4buf_auto_out_w_bits_data),
    .auto_out_w_bits_strb(axi4buf_auto_out_w_bits_strb),
    .auto_out_b_ready(axi4buf_auto_out_b_ready),
    .auto_out_b_valid(axi4buf_auto_out_b_valid),
    .auto_out_b_bits_id(axi4buf_auto_out_b_bits_id),
    .auto_out_b_bits_resp(axi4buf_auto_out_b_bits_resp),
    .auto_out_b_bits_user(axi4buf_auto_out_b_bits_user),
    .auto_out_ar_ready(axi4buf_auto_out_ar_ready),
    .auto_out_ar_valid(axi4buf_auto_out_ar_valid),
    .auto_out_ar_bits_id(axi4buf_auto_out_ar_bits_id),
    .auto_out_ar_bits_addr(axi4buf_auto_out_ar_bits_addr),
    .auto_out_ar_bits_user(axi4buf_auto_out_ar_bits_user),
    .auto_out_r_ready(axi4buf_auto_out_r_ready),
    .auto_out_r_valid(axi4buf_auto_out_r_valid),
    .auto_out_r_bits_id(axi4buf_auto_out_r_bits_id),
    .auto_out_r_bits_data(axi4buf_auto_out_r_bits_data),
    .auto_out_r_bits_resp(axi4buf_auto_out_r_bits_resp),
    .auto_out_r_bits_user(axi4buf_auto_out_r_bits_user)
  );
  AXI4Fragmenter_inTestHarness axi4frag ( // @[Fragmenter.scala 205:30:example.TestHarness.GemminiRocketConfig.fir@325788.4]
    .clock(axi4frag_clock),
    .reset(axi4frag_reset),
    .auto_in_aw_ready(axi4frag_auto_in_aw_ready),
    .auto_in_aw_valid(axi4frag_auto_in_aw_valid),
    .auto_in_aw_bits_id(axi4frag_auto_in_aw_bits_id),
    .auto_in_aw_bits_addr(axi4frag_auto_in_aw_bits_addr),
    .auto_in_aw_bits_len(axi4frag_auto_in_aw_bits_len),
    .auto_in_aw_bits_size(axi4frag_auto_in_aw_bits_size),
    .auto_in_aw_bits_burst(axi4frag_auto_in_aw_bits_burst),
    .auto_in_w_ready(axi4frag_auto_in_w_ready),
    .auto_in_w_valid(axi4frag_auto_in_w_valid),
    .auto_in_w_bits_data(axi4frag_auto_in_w_bits_data),
    .auto_in_w_bits_strb(axi4frag_auto_in_w_bits_strb),
    .auto_in_w_bits_last(axi4frag_auto_in_w_bits_last),
    .auto_in_b_ready(axi4frag_auto_in_b_ready),
    .auto_in_b_valid(axi4frag_auto_in_b_valid),
    .auto_in_b_bits_id(axi4frag_auto_in_b_bits_id),
    .auto_in_b_bits_resp(axi4frag_auto_in_b_bits_resp),
    .auto_in_ar_ready(axi4frag_auto_in_ar_ready),
    .auto_in_ar_valid(axi4frag_auto_in_ar_valid),
    .auto_in_ar_bits_id(axi4frag_auto_in_ar_bits_id),
    .auto_in_ar_bits_addr(axi4frag_auto_in_ar_bits_addr),
    .auto_in_ar_bits_len(axi4frag_auto_in_ar_bits_len),
    .auto_in_ar_bits_size(axi4frag_auto_in_ar_bits_size),
    .auto_in_ar_bits_burst(axi4frag_auto_in_ar_bits_burst),
    .auto_in_r_ready(axi4frag_auto_in_r_ready),
    .auto_in_r_valid(axi4frag_auto_in_r_valid),
    .auto_in_r_bits_id(axi4frag_auto_in_r_bits_id),
    .auto_in_r_bits_data(axi4frag_auto_in_r_bits_data),
    .auto_in_r_bits_resp(axi4frag_auto_in_r_bits_resp),
    .auto_in_r_bits_last(axi4frag_auto_in_r_bits_last),
    .auto_out_aw_ready(axi4frag_auto_out_aw_ready),
    .auto_out_aw_valid(axi4frag_auto_out_aw_valid),
    .auto_out_aw_bits_id(axi4frag_auto_out_aw_bits_id),
    .auto_out_aw_bits_addr(axi4frag_auto_out_aw_bits_addr),
    .auto_out_aw_bits_user(axi4frag_auto_out_aw_bits_user),
    .auto_out_w_ready(axi4frag_auto_out_w_ready),
    .auto_out_w_valid(axi4frag_auto_out_w_valid),
    .auto_out_w_bits_data(axi4frag_auto_out_w_bits_data),
    .auto_out_w_bits_strb(axi4frag_auto_out_w_bits_strb),
    .auto_out_b_ready(axi4frag_auto_out_b_ready),
    .auto_out_b_valid(axi4frag_auto_out_b_valid),
    .auto_out_b_bits_id(axi4frag_auto_out_b_bits_id),
    .auto_out_b_bits_resp(axi4frag_auto_out_b_bits_resp),
    .auto_out_b_bits_user(axi4frag_auto_out_b_bits_user),
    .auto_out_ar_ready(axi4frag_auto_out_ar_ready),
    .auto_out_ar_valid(axi4frag_auto_out_ar_valid),
    .auto_out_ar_bits_id(axi4frag_auto_out_ar_bits_id),
    .auto_out_ar_bits_addr(axi4frag_auto_out_ar_bits_addr),
    .auto_out_ar_bits_user(axi4frag_auto_out_ar_bits_user),
    .auto_out_r_ready(axi4frag_auto_out_r_ready),
    .auto_out_r_valid(axi4frag_auto_out_r_valid),
    .auto_out_r_bits_id(axi4frag_auto_out_r_bits_id),
    .auto_out_r_bits_data(axi4frag_auto_out_r_bits_data),
    .auto_out_r_bits_resp(axi4frag_auto_out_r_bits_resp),
    .auto_out_r_bits_user(axi4frag_auto_out_r_bits_user),
    .auto_out_r_bits_last(axi4frag_auto_out_r_bits_last)
  );
  assign io_axi4_0_aw_ready = axi4xbar_auto_in_aw_ready; // @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
  assign io_axi4_0_w_ready = axi4xbar_auto_in_w_ready; // @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
  assign io_axi4_0_b_valid = axi4xbar_auto_in_b_valid; // @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
  assign io_axi4_0_b_bits_id = axi4xbar_auto_in_b_bits_id; // @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
  assign io_axi4_0_b_bits_resp = axi4xbar_auto_in_b_bits_resp; // @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
  assign io_axi4_0_ar_ready = axi4xbar_auto_in_ar_ready; // @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
  assign io_axi4_0_r_valid = axi4xbar_auto_in_r_valid; // @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
  assign io_axi4_0_r_bits_id = axi4xbar_auto_in_r_bits_id; // @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
  assign io_axi4_0_r_bits_data = axi4xbar_auto_in_r_bits_data; // @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
  assign io_axi4_0_r_bits_resp = axi4xbar_auto_in_r_bits_resp; // @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
  assign io_axi4_0_r_bits_last = axi4xbar_auto_in_r_bits_last; // @[Ports.scala 228:71:example.TestHarness.GemminiRocketConfig.fir@325800.4]
  assign srams_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@325774.4]
  assign srams_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@325775.4]
  assign srams_auto_in_aw_valid = axi4buf_auto_out_aw_valid; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_aw_bits_id = axi4buf_auto_out_aw_bits_id; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_aw_bits_addr = axi4buf_auto_out_aw_bits_addr; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_aw_bits_user = axi4buf_auto_out_aw_bits_user; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_w_valid = axi4buf_auto_out_w_valid; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_w_bits_data = axi4buf_auto_out_w_bits_data; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_w_bits_strb = axi4buf_auto_out_w_bits_strb; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_b_ready = axi4buf_auto_out_b_ready; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_ar_valid = axi4buf_auto_out_ar_valid; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_ar_bits_id = axi4buf_auto_out_ar_bits_id; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_ar_bits_addr = axi4buf_auto_out_ar_bits_addr; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_ar_bits_user = axi4buf_auto_out_ar_bits_user; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign srams_auto_in_r_ready = axi4buf_auto_out_r_ready; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4xbar_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@325780.4]
  assign axi4xbar_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@325781.4]
  assign axi4xbar_auto_in_aw_valid = io_axi4_0_aw_valid; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_aw_bits_id = io_axi4_0_aw_bits_id; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_aw_bits_addr = io_axi4_0_aw_bits_addr; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_aw_bits_len = io_axi4_0_aw_bits_len; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_aw_bits_size = io_axi4_0_aw_bits_size; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_aw_bits_burst = io_axi4_0_aw_bits_burst; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_w_valid = io_axi4_0_w_valid; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_w_bits_data = io_axi4_0_w_bits_data; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_w_bits_strb = io_axi4_0_w_bits_strb; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_w_bits_last = io_axi4_0_w_bits_last; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_b_ready = io_axi4_0_b_ready; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_ar_valid = io_axi4_0_ar_valid; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_ar_bits_id = io_axi4_0_ar_bits_id; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_ar_bits_addr = io_axi4_0_ar_bits_addr; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_ar_bits_len = io_axi4_0_ar_bits_len; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_ar_bits_size = io_axi4_0_ar_bits_size; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_ar_bits_burst = io_axi4_0_ar_bits_burst; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_in_r_ready = io_axi4_0_r_ready; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325796.4]
  assign axi4xbar_auto_out_aw_ready = axi4frag_auto_in_aw_ready; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4xbar_auto_out_w_ready = axi4frag_auto_in_w_ready; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4xbar_auto_out_b_valid = axi4frag_auto_in_b_valid; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4xbar_auto_out_b_bits_id = axi4frag_auto_in_b_bits_id; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4xbar_auto_out_b_bits_resp = axi4frag_auto_in_b_bits_resp; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4xbar_auto_out_ar_ready = axi4frag_auto_in_ar_ready; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4xbar_auto_out_r_valid = axi4frag_auto_in_r_valid; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4xbar_auto_out_r_bits_id = axi4frag_auto_in_r_bits_id; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4xbar_auto_out_r_bits_data = axi4frag_auto_in_r_bits_data; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4xbar_auto_out_r_bits_resp = axi4frag_auto_in_r_bits_resp; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4xbar_auto_out_r_bits_last = axi4frag_auto_in_r_bits_last; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4buf_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@325786.4]
  assign axi4buf_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@325787.4]
  assign axi4buf_auto_in_aw_valid = axi4frag_auto_out_aw_valid; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_aw_bits_id = axi4frag_auto_out_aw_bits_id; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_aw_bits_addr = axi4frag_auto_out_aw_bits_addr; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_aw_bits_user = axi4frag_auto_out_aw_bits_user; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_w_valid = axi4frag_auto_out_w_valid; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_w_bits_data = axi4frag_auto_out_w_bits_data; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_w_bits_strb = axi4frag_auto_out_w_bits_strb; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_b_ready = axi4frag_auto_out_b_ready; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_ar_valid = axi4frag_auto_out_ar_valid; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_ar_bits_id = axi4frag_auto_out_ar_bits_id; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_ar_bits_addr = axi4frag_auto_out_ar_bits_addr; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_ar_bits_user = axi4frag_auto_out_ar_bits_user; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_in_r_ready = axi4frag_auto_out_r_ready; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4buf_auto_out_aw_ready = srams_auto_in_aw_ready; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4buf_auto_out_w_ready = srams_auto_in_w_ready; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4buf_auto_out_b_valid = srams_auto_in_b_valid; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4buf_auto_out_b_bits_id = srams_auto_in_b_bits_id; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4buf_auto_out_b_bits_resp = srams_auto_in_b_bits_resp; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4buf_auto_out_b_bits_user = srams_auto_in_b_bits_user; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4buf_auto_out_ar_ready = srams_auto_in_ar_ready; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4buf_auto_out_r_valid = srams_auto_in_r_valid; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4buf_auto_out_r_bits_id = srams_auto_in_r_bits_id; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4buf_auto_out_r_bits_data = srams_auto_in_r_bits_data; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4buf_auto_out_r_bits_resp = srams_auto_in_r_bits_resp; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4buf_auto_out_r_bits_user = srams_auto_in_r_bits_user; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325798.4]
  assign axi4frag_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@325792.4]
  assign axi4frag_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@325793.4]
  assign axi4frag_auto_in_aw_valid = axi4xbar_auto_out_aw_valid; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_aw_bits_id = axi4xbar_auto_out_aw_bits_id; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_aw_bits_addr = axi4xbar_auto_out_aw_bits_addr; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_aw_bits_len = axi4xbar_auto_out_aw_bits_len; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_aw_bits_size = axi4xbar_auto_out_aw_bits_size; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_aw_bits_burst = axi4xbar_auto_out_aw_bits_burst; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_w_valid = axi4xbar_auto_out_w_valid; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_w_bits_data = axi4xbar_auto_out_w_bits_data; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_w_bits_strb = axi4xbar_auto_out_w_bits_strb; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_w_bits_last = axi4xbar_auto_out_w_bits_last; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_b_ready = axi4xbar_auto_out_b_ready; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_ar_valid = axi4xbar_auto_out_ar_valid; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_ar_bits_id = axi4xbar_auto_out_ar_bits_id; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_ar_bits_addr = axi4xbar_auto_out_ar_bits_addr; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_ar_bits_len = axi4xbar_auto_out_ar_bits_len; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_ar_bits_size = axi4xbar_auto_out_ar_bits_size; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_ar_bits_burst = axi4xbar_auto_out_ar_bits_burst; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_in_r_ready = axi4xbar_auto_out_r_ready; // @[LazyModule.scala 167:57:example.TestHarness.GemminiRocketConfig.fir@325797.4]
  assign axi4frag_auto_out_aw_ready = axi4buf_auto_in_aw_ready; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_w_ready = axi4buf_auto_in_w_ready; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_b_valid = axi4buf_auto_in_b_valid; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_b_bits_id = axi4buf_auto_in_b_bits_id; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_b_bits_resp = axi4buf_auto_in_b_bits_resp; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_b_bits_user = axi4buf_auto_in_b_bits_user; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_ar_ready = axi4buf_auto_in_ar_ready; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_r_valid = axi4buf_auto_in_r_valid; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_r_bits_id = axi4buf_auto_in_r_bits_id; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_r_bits_data = axi4buf_auto_in_r_bits_data; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_r_bits_resp = axi4buf_auto_in_r_bits_resp; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_r_bits_user = axi4buf_auto_in_r_bits_user; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
  assign axi4frag_auto_out_r_bits_last = axi4buf_auto_in_r_bits_last; // @[LazyModule.scala 167:31:example.TestHarness.GemminiRocketConfig.fir@325799.4]
endmodule
module TestHarness( // @[:example.TestHarness.GemminiRocketConfig.fir@325802.2]
  input   clock, // @[:example.TestHarness.GemminiRocketConfig.fir@325803.4]
  input   reset, // @[:example.TestHarness.GemminiRocketConfig.fir@325804.4]
  output  io_success // @[:example.TestHarness.GemminiRocketConfig.fir@325805.4]
);
  wire  top_clock; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_reset; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_debug_clockeddmi_dmi_req_ready; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_debug_clockeddmi_dmi_req_valid; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [6:0] top_debug_clockeddmi_dmi_req_bits_addr; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [31:0] top_debug_clockeddmi_dmi_req_bits_data; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [1:0] top_debug_clockeddmi_dmi_req_bits_op; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_debug_clockeddmi_dmi_resp_ready; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_debug_clockeddmi_dmi_resp_valid; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [31:0] top_debug_clockeddmi_dmi_resp_bits_data; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [1:0] top_debug_clockeddmi_dmi_resp_bits_resp; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_debug_clockeddmi_dmiClock; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_debug_clockeddmi_dmiReset; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_debug_ndreset; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_debug_dmactive; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [1:0] top_interrupts; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_aw_ready; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_aw_valid; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [3:0] top_mem_axi4_0_aw_bits_id; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [31:0] top_mem_axi4_0_aw_bits_addr; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [7:0] top_mem_axi4_0_aw_bits_len; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [2:0] top_mem_axi4_0_aw_bits_size; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [1:0] top_mem_axi4_0_aw_bits_burst; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_aw_bits_lock; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [3:0] top_mem_axi4_0_aw_bits_cache; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [2:0] top_mem_axi4_0_aw_bits_prot; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [3:0] top_mem_axi4_0_aw_bits_qos; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_w_ready; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_w_valid; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [63:0] top_mem_axi4_0_w_bits_data; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [7:0] top_mem_axi4_0_w_bits_strb; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_w_bits_last; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_b_ready; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_b_valid; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [3:0] top_mem_axi4_0_b_bits_id; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [1:0] top_mem_axi4_0_b_bits_resp; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_ar_ready; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_ar_valid; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [3:0] top_mem_axi4_0_ar_bits_id; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [31:0] top_mem_axi4_0_ar_bits_addr; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [7:0] top_mem_axi4_0_ar_bits_len; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [2:0] top_mem_axi4_0_ar_bits_size; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [1:0] top_mem_axi4_0_ar_bits_burst; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_ar_bits_lock; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [3:0] top_mem_axi4_0_ar_bits_cache; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [2:0] top_mem_axi4_0_ar_bits_prot; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [3:0] top_mem_axi4_0_ar_bits_qos; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_r_ready; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_r_valid; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [3:0] top_mem_axi4_0_r_bits_id; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [63:0] top_mem_axi4_0_r_bits_data; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [1:0] top_mem_axi4_0_r_bits_resp; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_mem_axi4_0_r_bits_last; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_uart_0_txd; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_uart_0_rxd; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_serial_in_ready; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_serial_in_valid; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [31:0] top_serial_in_bits; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_serial_out_ready; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  top_serial_out_valid; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire [31:0] top_serial_out_bits; // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
  wire  SimSerial_clock; // @[SerialAdapter.scala 224:21:example.TestHarness.GemminiRocketConfig.fir@325824.4]
  wire  SimSerial_reset; // @[SerialAdapter.scala 224:21:example.TestHarness.GemminiRocketConfig.fir@325824.4]
  wire  SimSerial_serial_in_ready; // @[SerialAdapter.scala 224:21:example.TestHarness.GemminiRocketConfig.fir@325824.4]
  wire  SimSerial_serial_in_valid; // @[SerialAdapter.scala 224:21:example.TestHarness.GemminiRocketConfig.fir@325824.4]
  wire [31:0] SimSerial_serial_in_bits; // @[SerialAdapter.scala 224:21:example.TestHarness.GemminiRocketConfig.fir@325824.4]
  wire  SimSerial_serial_out_ready; // @[SerialAdapter.scala 224:21:example.TestHarness.GemminiRocketConfig.fir@325824.4]
  wire  SimSerial_serial_out_valid; // @[SerialAdapter.scala 224:21:example.TestHarness.GemminiRocketConfig.fir@325824.4]
  wire [31:0] SimSerial_serial_out_bits; // @[SerialAdapter.scala 224:21:example.TestHarness.GemminiRocketConfig.fir@325824.4]
  wire  SimSerial_exit; // @[SerialAdapter.scala 224:21:example.TestHarness.GemminiRocketConfig.fir@325824.4]
  wire  UARTAdapter_clock; // @[UARTAdapter.scala 164:28:example.TestHarness.GemminiRocketConfig.fir@325838.4]
  wire  UARTAdapter_reset; // @[UARTAdapter.scala 164:28:example.TestHarness.GemminiRocketConfig.fir@325838.4]
  wire  UARTAdapter_io_uart_txd; // @[UARTAdapter.scala 164:28:example.TestHarness.GemminiRocketConfig.fir@325838.4]
  wire  UARTAdapter_io_uart_rxd; // @[UARTAdapter.scala 164:28:example.TestHarness.GemminiRocketConfig.fir@325838.4]
  wire  mem_clock; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_reset; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_aw_ready; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_aw_valid; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [3:0] mem_io_axi4_0_aw_bits_id; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [27:0] mem_io_axi4_0_aw_bits_addr; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [7:0] mem_io_axi4_0_aw_bits_len; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [2:0] mem_io_axi4_0_aw_bits_size; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [1:0] mem_io_axi4_0_aw_bits_burst; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_w_ready; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_w_valid; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [63:0] mem_io_axi4_0_w_bits_data; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [7:0] mem_io_axi4_0_w_bits_strb; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_w_bits_last; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_b_ready; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_b_valid; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [3:0] mem_io_axi4_0_b_bits_id; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [1:0] mem_io_axi4_0_b_bits_resp; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_ar_ready; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_ar_valid; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [3:0] mem_io_axi4_0_ar_bits_id; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [27:0] mem_io_axi4_0_ar_bits_addr; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [7:0] mem_io_axi4_0_ar_bits_len; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [2:0] mem_io_axi4_0_ar_bits_size; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [1:0] mem_io_axi4_0_ar_bits_burst; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_r_ready; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_r_valid; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [3:0] mem_io_axi4_0_r_bits_id; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [63:0] mem_io_axi4_0_r_bits_data; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire [1:0] mem_io_axi4_0_r_bits_resp; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  wire  mem_io_axi4_0_r_bits_last; // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
  Top top ( // @[TestHarness.scala 24:21:example.TestHarness.GemminiRocketConfig.fir@325808.4]
    .clock(top_clock),
    .reset(top_reset),
    .debug_clockeddmi_dmi_req_ready(top_debug_clockeddmi_dmi_req_ready),
    .debug_clockeddmi_dmi_req_valid(top_debug_clockeddmi_dmi_req_valid),
    .debug_clockeddmi_dmi_req_bits_addr(top_debug_clockeddmi_dmi_req_bits_addr),
    .debug_clockeddmi_dmi_req_bits_data(top_debug_clockeddmi_dmi_req_bits_data),
    .debug_clockeddmi_dmi_req_bits_op(top_debug_clockeddmi_dmi_req_bits_op),
    .debug_clockeddmi_dmi_resp_ready(top_debug_clockeddmi_dmi_resp_ready),
    .debug_clockeddmi_dmi_resp_valid(top_debug_clockeddmi_dmi_resp_valid),
    .debug_clockeddmi_dmi_resp_bits_data(top_debug_clockeddmi_dmi_resp_bits_data),
    .debug_clockeddmi_dmi_resp_bits_resp(top_debug_clockeddmi_dmi_resp_bits_resp),
    .debug_clockeddmi_dmiClock(top_debug_clockeddmi_dmiClock),
    .debug_clockeddmi_dmiReset(top_debug_clockeddmi_dmiReset),
    .debug_ndreset(top_debug_ndreset),
    .debug_dmactive(top_debug_dmactive),
    .interrupts(top_interrupts),
    .mem_axi4_0_aw_ready(top_mem_axi4_0_aw_ready),
    .mem_axi4_0_aw_valid(top_mem_axi4_0_aw_valid),
    .mem_axi4_0_aw_bits_id(top_mem_axi4_0_aw_bits_id),
    .mem_axi4_0_aw_bits_addr(top_mem_axi4_0_aw_bits_addr),
    .mem_axi4_0_aw_bits_len(top_mem_axi4_0_aw_bits_len),
    .mem_axi4_0_aw_bits_size(top_mem_axi4_0_aw_bits_size),
    .mem_axi4_0_aw_bits_burst(top_mem_axi4_0_aw_bits_burst),
    .mem_axi4_0_aw_bits_lock(top_mem_axi4_0_aw_bits_lock),
    .mem_axi4_0_aw_bits_cache(top_mem_axi4_0_aw_bits_cache),
    .mem_axi4_0_aw_bits_prot(top_mem_axi4_0_aw_bits_prot),
    .mem_axi4_0_aw_bits_qos(top_mem_axi4_0_aw_bits_qos),
    .mem_axi4_0_w_ready(top_mem_axi4_0_w_ready),
    .mem_axi4_0_w_valid(top_mem_axi4_0_w_valid),
    .mem_axi4_0_w_bits_data(top_mem_axi4_0_w_bits_data),
    .mem_axi4_0_w_bits_strb(top_mem_axi4_0_w_bits_strb),
    .mem_axi4_0_w_bits_last(top_mem_axi4_0_w_bits_last),
    .mem_axi4_0_b_ready(top_mem_axi4_0_b_ready),
    .mem_axi4_0_b_valid(top_mem_axi4_0_b_valid),
    .mem_axi4_0_b_bits_id(top_mem_axi4_0_b_bits_id),
    .mem_axi4_0_b_bits_resp(top_mem_axi4_0_b_bits_resp),
    .mem_axi4_0_ar_ready(top_mem_axi4_0_ar_ready),
    .mem_axi4_0_ar_valid(top_mem_axi4_0_ar_valid),
    .mem_axi4_0_ar_bits_id(top_mem_axi4_0_ar_bits_id),
    .mem_axi4_0_ar_bits_addr(top_mem_axi4_0_ar_bits_addr),
    .mem_axi4_0_ar_bits_len(top_mem_axi4_0_ar_bits_len),
    .mem_axi4_0_ar_bits_size(top_mem_axi4_0_ar_bits_size),
    .mem_axi4_0_ar_bits_burst(top_mem_axi4_0_ar_bits_burst),
    .mem_axi4_0_ar_bits_lock(top_mem_axi4_0_ar_bits_lock),
    .mem_axi4_0_ar_bits_cache(top_mem_axi4_0_ar_bits_cache),
    .mem_axi4_0_ar_bits_prot(top_mem_axi4_0_ar_bits_prot),
    .mem_axi4_0_ar_bits_qos(top_mem_axi4_0_ar_bits_qos),
    .mem_axi4_0_r_ready(top_mem_axi4_0_r_ready),
    .mem_axi4_0_r_valid(top_mem_axi4_0_r_valid),
    .mem_axi4_0_r_bits_id(top_mem_axi4_0_r_bits_id),
    .mem_axi4_0_r_bits_data(top_mem_axi4_0_r_bits_data),
    .mem_axi4_0_r_bits_resp(top_mem_axi4_0_r_bits_resp),
    .mem_axi4_0_r_bits_last(top_mem_axi4_0_r_bits_last),
    .uart_0_txd(top_uart_0_txd),
    .uart_0_rxd(top_uart_0_rxd),
    .serial_in_ready(top_serial_in_ready),
    .serial_in_valid(top_serial_in_valid),
    .serial_in_bits(top_serial_in_bits),
    .serial_out_ready(top_serial_out_ready),
    .serial_out_valid(top_serial_out_valid),
    .serial_out_bits(top_serial_out_bits)
  );
  SimSerial SimSerial ( // @[SerialAdapter.scala 224:21:example.TestHarness.GemminiRocketConfig.fir@325824.4]
    .clock(SimSerial_clock),
    .reset(SimSerial_reset),
    .serial_in_ready(SimSerial_serial_in_ready),
    .serial_in_valid(SimSerial_serial_in_valid),
    .serial_in_bits(SimSerial_serial_in_bits),
    .serial_out_ready(SimSerial_serial_out_ready),
    .serial_out_valid(SimSerial_serial_out_valid),
    .serial_out_bits(SimSerial_serial_out_bits),
    .exit(SimSerial_exit)
  );
  UARTAdapter_inTestHarness UARTAdapter ( // @[UARTAdapter.scala 164:28:example.TestHarness.GemminiRocketConfig.fir@325838.4]
    .clock(UARTAdapter_clock),
    .reset(UARTAdapter_reset),
    .io_uart_txd(UARTAdapter_io_uart_txd),
    .io_uart_rxd(UARTAdapter_io_uart_rxd)
  );
  SimAXIMem_inTestHarness mem ( // @[Ports.scala 76:15:example.TestHarness.GemminiRocketConfig.fir@325843.4]
    .clock(mem_clock),
    .reset(mem_reset),
    .io_axi4_0_aw_ready(mem_io_axi4_0_aw_ready),
    .io_axi4_0_aw_valid(mem_io_axi4_0_aw_valid),
    .io_axi4_0_aw_bits_id(mem_io_axi4_0_aw_bits_id),
    .io_axi4_0_aw_bits_addr(mem_io_axi4_0_aw_bits_addr),
    .io_axi4_0_aw_bits_len(mem_io_axi4_0_aw_bits_len),
    .io_axi4_0_aw_bits_size(mem_io_axi4_0_aw_bits_size),
    .io_axi4_0_aw_bits_burst(mem_io_axi4_0_aw_bits_burst),
    .io_axi4_0_w_ready(mem_io_axi4_0_w_ready),
    .io_axi4_0_w_valid(mem_io_axi4_0_w_valid),
    .io_axi4_0_w_bits_data(mem_io_axi4_0_w_bits_data),
    .io_axi4_0_w_bits_strb(mem_io_axi4_0_w_bits_strb),
    .io_axi4_0_w_bits_last(mem_io_axi4_0_w_bits_last),
    .io_axi4_0_b_ready(mem_io_axi4_0_b_ready),
    .io_axi4_0_b_valid(mem_io_axi4_0_b_valid),
    .io_axi4_0_b_bits_id(mem_io_axi4_0_b_bits_id),
    .io_axi4_0_b_bits_resp(mem_io_axi4_0_b_bits_resp),
    .io_axi4_0_ar_ready(mem_io_axi4_0_ar_ready),
    .io_axi4_0_ar_valid(mem_io_axi4_0_ar_valid),
    .io_axi4_0_ar_bits_id(mem_io_axi4_0_ar_bits_id),
    .io_axi4_0_ar_bits_addr(mem_io_axi4_0_ar_bits_addr),
    .io_axi4_0_ar_bits_len(mem_io_axi4_0_ar_bits_len),
    .io_axi4_0_ar_bits_size(mem_io_axi4_0_ar_bits_size),
    .io_axi4_0_ar_bits_burst(mem_io_axi4_0_ar_bits_burst),
    .io_axi4_0_r_ready(mem_io_axi4_0_r_ready),
    .io_axi4_0_r_valid(mem_io_axi4_0_r_valid),
    .io_axi4_0_r_bits_id(mem_io_axi4_0_r_bits_id),
    .io_axi4_0_r_bits_data(mem_io_axi4_0_r_bits_data),
    .io_axi4_0_r_bits_resp(mem_io_axi4_0_r_bits_resp),
    .io_axi4_0_r_bits_last(mem_io_axi4_0_r_bits_last)
  );
  assign io_success = SimSerial_exit; // @[ConfigMixins.scala 92:13:example.TestHarness.GemminiRocketConfig.fir@325837.4]
  assign top_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@325809.4]
  assign top_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@325810.4]
  assign top_debug_clockeddmi_dmi_req_valid = 1'h0;
  assign top_debug_clockeddmi_dmi_req_bits_addr = 7'h0;
  assign top_debug_clockeddmi_dmi_req_bits_data = 32'h0;
  assign top_debug_clockeddmi_dmi_req_bits_op = 2'h0;
  assign top_debug_clockeddmi_dmi_resp_ready = 1'h0;
  assign top_debug_clockeddmi_dmiClock = 1'h0;
  assign top_debug_clockeddmi_dmiReset = 1'h0;
  assign top_interrupts = 2'h0; // @[InterruptBus.scala 68:16:example.TestHarness.GemminiRocketConfig.fir@325851.4]
  assign top_mem_axi4_0_aw_ready = mem_io_axi4_0_aw_ready; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign top_mem_axi4_0_w_ready = mem_io_axi4_0_w_ready; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign top_mem_axi4_0_b_valid = mem_io_axi4_0_b_valid; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign top_mem_axi4_0_b_bits_id = mem_io_axi4_0_b_bits_id; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign top_mem_axi4_0_b_bits_resp = mem_io_axi4_0_b_bits_resp; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign top_mem_axi4_0_ar_ready = mem_io_axi4_0_ar_ready; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign top_mem_axi4_0_r_valid = mem_io_axi4_0_r_valid; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign top_mem_axi4_0_r_bits_id = mem_io_axi4_0_r_bits_id; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign top_mem_axi4_0_r_bits_data = mem_io_axi4_0_r_bits_data; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign top_mem_axi4_0_r_bits_resp = mem_io_axi4_0_r_bits_resp; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign top_mem_axi4_0_r_bits_last = mem_io_axi4_0_r_bits_last; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign top_uart_0_rxd = UARTAdapter_io_uart_rxd; // @[UARTAdapter.scala 166:18:example.TestHarness.GemminiRocketConfig.fir@325842.4]
  assign top_serial_in_valid = SimSerial_serial_in_valid; // @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325835.4]
  assign top_serial_in_bits = SimSerial_serial_in_bits; // @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325834.4]
  assign top_serial_out_ready = SimSerial_serial_out_ready; // @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325833.4]
  assign SimSerial_clock = top_clock; // @[SerialAdapter.scala 225:18:example.TestHarness.GemminiRocketConfig.fir@325829.4]
  assign SimSerial_reset = top_reset; // @[SerialAdapter.scala 226:18:example.TestHarness.GemminiRocketConfig.fir@325830.4]
  assign SimSerial_serial_in_ready = top_serial_in_ready; // @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325836.4]
  assign SimSerial_serial_out_valid = top_serial_out_valid; // @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325832.4]
  assign SimSerial_serial_out_bits = top_serial_out_bits; // @[SerialAdapter.scala 227:19:example.TestHarness.GemminiRocketConfig.fir@325831.4]
  assign UARTAdapter_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@325839.4]
  assign UARTAdapter_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@325840.4]
  assign UARTAdapter_io_uart_txd = top_uart_0_txd; // @[UARTAdapter.scala 165:28:example.TestHarness.GemminiRocketConfig.fir@325841.4]
  assign mem_clock = clock; // @[:example.TestHarness.GemminiRocketConfig.fir@325848.4]
  assign mem_reset = reset; // @[:example.TestHarness.GemminiRocketConfig.fir@325849.4]
  assign mem_io_axi4_0_aw_valid = top_mem_axi4_0_aw_valid; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_aw_bits_id = top_mem_axi4_0_aw_bits_id; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_aw_bits_addr = top_mem_axi4_0_aw_bits_addr[27:0]; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_aw_bits_len = top_mem_axi4_0_aw_bits_len; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_aw_bits_size = top_mem_axi4_0_aw_bits_size; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_aw_bits_burst = top_mem_axi4_0_aw_bits_burst; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_w_valid = top_mem_axi4_0_w_valid; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_w_bits_data = top_mem_axi4_0_w_bits_data; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_w_bits_strb = top_mem_axi4_0_w_bits_strb; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_w_bits_last = top_mem_axi4_0_w_bits_last; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_b_ready = top_mem_axi4_0_b_ready; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_ar_valid = top_mem_axi4_0_ar_valid; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_ar_bits_id = top_mem_axi4_0_ar_bits_id; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_ar_bits_addr = top_mem_axi4_0_ar_bits_addr[27:0]; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_ar_bits_len = top_mem_axi4_0_ar_bits_len; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_ar_bits_size = top_mem_axi4_0_ar_bits_size; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_ar_bits_burst = top_mem_axi4_0_ar_bits_burst; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
  assign mem_io_axi4_0_r_ready = top_mem_axi4_0_r_ready; // @[Ports.scala 76:41:example.TestHarness.GemminiRocketConfig.fir@325850.4]
endmodule
module mem_inTestHarness(
  input  [24:0] R0_addr,
  input         R0_en,
  input         R0_clk,
  output [7:0]  R0_data_0,
  output [7:0]  R0_data_1,
  output [7:0]  R0_data_2,
  output [7:0]  R0_data_3,
  output [7:0]  R0_data_4,
  output [7:0]  R0_data_5,
  output [7:0]  R0_data_6,
  output [7:0]  R0_data_7,
  input  [24:0] W0_addr,
  input         W0_en,
  input         W0_clk,
  input  [7:0]  W0_data_0,
  input  [7:0]  W0_data_1,
  input  [7:0]  W0_data_2,
  input  [7:0]  W0_data_3,
  input  [7:0]  W0_data_4,
  input  [7:0]  W0_data_5,
  input  [7:0]  W0_data_6,
  input  [7:0]  W0_data_7,
  input         W0_mask_0,
  input         W0_mask_1,
  input         W0_mask_2,
  input         W0_mask_3,
  input         W0_mask_4,
  input         W0_mask_5,
  input         W0_mask_6,
  input         W0_mask_7
);
  wire [24:0] mem_ext_0_R0_addr;
  wire  mem_ext_0_R0_en;
  wire  mem_ext_0_R0_clk;
  wire [63:0] mem_ext_0_R0_data;
  wire [24:0] mem_ext_0_W0_addr;
  wire  mem_ext_0_W0_en;
  wire  mem_ext_0_W0_clk;
  wire [63:0] mem_ext_0_W0_data;
  wire [7:0] mem_ext_0_W0_mask;
  wire [7:0] _GEN_0;
  wire [7:0] _GEN_1;
  wire [7:0] _GEN_2;
  wire [7:0] _GEN_3;
  wire [7:0] _GEN_4;
  wire [7:0] _GEN_5;
  wire [7:0] _GEN_6;
  wire [7:0] _GEN_7;
  wire [7:0] _GEN_8;
  wire [7:0] _GEN_9;
  wire [7:0] _GEN_10;
  wire [7:0] _GEN_11;
  wire [7:0] _GEN_14;
  wire [7:0] _GEN_15;
  wire [7:0] _GEN_16;
  wire [7:0] _GEN_17;
  wire [31:0] _GEN_20;
  wire [31:0] _GEN_21;
  wire  _GEN_22;
  wire  _GEN_23;
  wire  _GEN_24;
  wire  _GEN_25;
  wire  _GEN_28;
  wire  _GEN_29;
  wire  _GEN_30;
  wire  _GEN_31;
  wire [3:0] _GEN_34;
  wire [3:0] _GEN_35;
  mem_ext_0 mem_ext_0 (
    .R0_addr(mem_ext_0_R0_addr),
    .R0_en(mem_ext_0_R0_en),
    .R0_clk(mem_ext_0_R0_clk),
    .R0_data(mem_ext_0_R0_data),
    .W0_addr(mem_ext_0_W0_addr),
    .W0_en(mem_ext_0_W0_en),
    .W0_clk(mem_ext_0_W0_clk),
    .W0_data(mem_ext_0_W0_data),
    .W0_mask(mem_ext_0_W0_mask)
  );
  assign mem_ext_0_R0_clk = R0_clk;
  assign mem_ext_0_R0_en = R0_en;
  assign mem_ext_0_R0_addr = R0_addr;
  assign _GEN_0 = mem_ext_0_R0_data[7:0];
  assign R0_data_0 = $unsigned(_GEN_0);
  assign _GEN_1 = mem_ext_0_R0_data[15:8];
  assign R0_data_1 = $unsigned(_GEN_1);
  assign _GEN_2 = mem_ext_0_R0_data[23:16];
  assign R0_data_2 = $unsigned(_GEN_2);
  assign _GEN_3 = mem_ext_0_R0_data[31:24];
  assign R0_data_3 = $unsigned(_GEN_3);
  assign _GEN_4 = mem_ext_0_R0_data[39:32];
  assign R0_data_4 = $unsigned(_GEN_4);
  assign _GEN_5 = mem_ext_0_R0_data[47:40];
  assign R0_data_5 = $unsigned(_GEN_5);
  assign _GEN_6 = mem_ext_0_R0_data[55:48];
  assign R0_data_6 = $unsigned(_GEN_6);
  assign _GEN_7 = mem_ext_0_R0_data[63:56];
  assign R0_data_7 = $unsigned(_GEN_7);
  assign mem_ext_0_W0_clk = W0_clk;
  assign mem_ext_0_W0_en = W0_en;
  assign mem_ext_0_W0_addr = W0_addr;
  assign _GEN_8 = $unsigned(W0_data_7);
  assign _GEN_9 = $unsigned(W0_data_6);
  assign _GEN_10 = $unsigned(W0_data_5);
  assign _GEN_11 = $unsigned(W0_data_4);
  assign _GEN_14 = $unsigned(W0_data_3);
  assign _GEN_15 = $unsigned(W0_data_2);
  assign _GEN_16 = $unsigned(W0_data_1);
  assign _GEN_17 = $unsigned(W0_data_0);
  assign _GEN_20 = {_GEN_8,_GEN_9,_GEN_10,_GEN_11};
  assign _GEN_21 = {_GEN_14,_GEN_15,_GEN_16,_GEN_17};
  assign mem_ext_0_W0_data = {_GEN_20,_GEN_21};
  assign _GEN_22 = $unsigned(W0_mask_7);
  assign _GEN_23 = $unsigned(W0_mask_6);
  assign _GEN_24 = $unsigned(W0_mask_5);
  assign _GEN_25 = $unsigned(W0_mask_4);
  assign _GEN_28 = $unsigned(W0_mask_3);
  assign _GEN_29 = $unsigned(W0_mask_2);
  assign _GEN_30 = $unsigned(W0_mask_1);
  assign _GEN_31 = $unsigned(W0_mask_0);
  assign _GEN_34 = {_GEN_22,_GEN_23,_GEN_24,_GEN_25};
  assign _GEN_35 = {_GEN_28,_GEN_29,_GEN_30,_GEN_31};
  assign mem_ext_0_W0_mask = {_GEN_34,_GEN_35};
endmodule
