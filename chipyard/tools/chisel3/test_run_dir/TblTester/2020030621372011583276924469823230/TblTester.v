module Tbl(
  input        clock,
  input  [3:0] io_wi,
  input  [3:0] io_ri,
  input  [3:0] io_d,
  output [3:0] io_o
);
  reg [3:0] m [0:15]; // @[Tbl.scala 17:14]
  reg [31:0] _RAND_0;
  wire [3:0] m__T_data; // @[Tbl.scala 17:14]
  wire [3:0] m__T_addr; // @[Tbl.scala 17:14]
  wire [3:0] m__T_1_data; // @[Tbl.scala 17:14]
  wire [3:0] m__T_1_addr; // @[Tbl.scala 17:14]
  wire  m__T_1_mask; // @[Tbl.scala 17:14]
  wire  m__T_1_en; // @[Tbl.scala 17:14]
  wire  _T_2; // @[Tbl.scala 21:16]
  assign m__T_addr = io_ri;
  assign m__T_data = m[m__T_addr]; // @[Tbl.scala 17:14]
  assign m__T_1_data = io_d;
  assign m__T_1_addr = io_wi;
  assign m__T_1_mask = 1'h1;
  assign m__T_1_en = 1'h1;
  assign _T_2 = io_ri == io_wi; // @[Tbl.scala 21:16]
  assign io_o = _T_2 ? io_d : m__T_data; // @[Tbl.scala 18:8 Tbl.scala 22:12]
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
  for (initvar = 0; initvar < 16; initvar = initvar+1)
    m[initvar] = _RAND_0[3:0];
  `endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(m__T_1_en & m__T_1_mask) begin
      m[m__T_1_addr] <= m__T_1_data; // @[Tbl.scala 17:14]
    end
  end
endmodule
module TblTester(
  input   clock,
  input   reset
);
  wire  dut_clock; // @[Tbl.scala 29:19]
  wire [3:0] dut_io_wi; // @[Tbl.scala 29:19]
  wire [3:0] dut_io_ri; // @[Tbl.scala 29:19]
  wire [3:0] dut_io_d; // @[Tbl.scala 29:19]
  wire [3:0] dut_io_o; // @[Tbl.scala 29:19]
  reg [2:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  wrap; // @[Counter.scala 37:24]
  wire [2:0] _T_2; // @[Counter.scala 38:22]
  wire [2:0] _T_4; // @[Tbl.scala 32:28]
  wire [3:0] _GEN_2; // @[Tbl.scala 34:13]
  wire [3:0] _GEN_3; // @[Tbl.scala 34:13]
  wire [3:0] _GEN_4; // @[Tbl.scala 34:13]
  wire [3:0] _GEN_5; // @[Tbl.scala 34:13]
  wire [3:0] _GEN_6; // @[Tbl.scala 34:13]
  wire [3:0] _GEN_7; // @[Tbl.scala 34:13]
  wire [3:0] _GEN_8; // @[Tbl.scala 34:13]
  wire [3:0] _GEN_10; // @[Tbl.scala 35:13]
  wire [3:0] _GEN_11; // @[Tbl.scala 35:13]
  wire [3:0] _GEN_12; // @[Tbl.scala 35:13]
  wire [3:0] _GEN_13; // @[Tbl.scala 35:13]
  wire [3:0] _GEN_14; // @[Tbl.scala 35:13]
  wire [3:0] _GEN_15; // @[Tbl.scala 35:13]
  wire [3:0] _GEN_16; // @[Tbl.scala 35:13]
  wire [3:0] _GEN_18; // @[Tbl.scala 37:12]
  wire [3:0] _GEN_19; // @[Tbl.scala 37:12]
  wire [3:0] _GEN_20; // @[Tbl.scala 37:12]
  wire [3:0] _GEN_21; // @[Tbl.scala 37:12]
  wire [3:0] _GEN_22; // @[Tbl.scala 37:12]
  wire [3:0] _GEN_23; // @[Tbl.scala 37:12]
  wire [3:0] _GEN_24; // @[Tbl.scala 37:12]
  wire  _T_7; // @[Tbl.scala 38:13]
  wire  _T_8; // @[Tbl.scala 39:20]
  wire  _T_9; // @[Tbl.scala 40:23]
  wire  _T_11; // @[Tbl.scala 40:13]
  wire  _T_12; // @[Tbl.scala 40:13]
  wire [3:0] _GEN_26; // @[Tbl.scala 42:23]
  wire [3:0] _GEN_27; // @[Tbl.scala 42:23]
  wire [3:0] _GEN_28; // @[Tbl.scala 42:23]
  wire [3:0] _GEN_29; // @[Tbl.scala 42:23]
  wire [3:0] _GEN_30; // @[Tbl.scala 42:23]
  wire [3:0] _GEN_31; // @[Tbl.scala 42:23]
  wire [3:0] _GEN_32; // @[Tbl.scala 42:23]
  wire  _T_13; // @[Tbl.scala 42:23]
  wire  _T_15; // @[Tbl.scala 42:13]
  wire  _T_16; // @[Tbl.scala 42:13]
  wire  _T_18; // @[Tbl.scala 46:9]
  wire  _GEN_33; // @[Tbl.scala 40:13]
  wire  _GEN_35; // @[Tbl.scala 42:13]
  wire  _GEN_36; // @[Tbl.scala 42:13]
  Tbl dut ( // @[Tbl.scala 29:19]
    .clock(dut_clock),
    .io_wi(dut_io_wi),
    .io_ri(dut_io_ri),
    .io_d(dut_io_d),
    .io_o(dut_io_o)
  );
  assign wrap = value == 3'h7; // @[Counter.scala 37:24]
  assign _T_2 = value + 3'h1; // @[Counter.scala 38:22]
  assign _T_4 = value - 3'h1; // @[Tbl.scala 32:28]
  assign _GEN_2 = 3'h1 == value ? 4'h5 : 4'h8; // @[Tbl.scala 34:13]
  assign _GEN_3 = 3'h2 == value ? 4'h2 : _GEN_2; // @[Tbl.scala 34:13]
  assign _GEN_4 = 3'h3 == value ? 4'h6 : _GEN_3; // @[Tbl.scala 34:13]
  assign _GEN_5 = 3'h4 == value ? 4'h1 : _GEN_4; // @[Tbl.scala 34:13]
  assign _GEN_6 = 3'h5 == value ? 4'he : _GEN_5; // @[Tbl.scala 34:13]
  assign _GEN_7 = 3'h6 == value ? 4'h6 : _GEN_6; // @[Tbl.scala 34:13]
  assign _GEN_8 = 3'h7 == value ? 4'h3 : _GEN_7; // @[Tbl.scala 34:13]
  assign _GEN_10 = 3'h1 == _T_4 ? 4'h5 : 4'h8; // @[Tbl.scala 35:13]
  assign _GEN_11 = 3'h2 == _T_4 ? 4'h2 : _GEN_10; // @[Tbl.scala 35:13]
  assign _GEN_12 = 3'h3 == _T_4 ? 4'h6 : _GEN_11; // @[Tbl.scala 35:13]
  assign _GEN_13 = 3'h4 == _T_4 ? 4'h1 : _GEN_12; // @[Tbl.scala 35:13]
  assign _GEN_14 = 3'h5 == _T_4 ? 4'he : _GEN_13; // @[Tbl.scala 35:13]
  assign _GEN_15 = 3'h6 == _T_4 ? 4'h6 : _GEN_14; // @[Tbl.scala 35:13]
  assign _GEN_16 = 3'h7 == _T_4 ? 4'h3 : _GEN_15; // @[Tbl.scala 35:13]
  assign _GEN_18 = 3'h1 == value ? 4'hd : 4'h8; // @[Tbl.scala 37:12]
  assign _GEN_19 = 3'h2 == value ? 4'hd : _GEN_18; // @[Tbl.scala 37:12]
  assign _GEN_20 = 3'h3 == value ? 4'hc : _GEN_19; // @[Tbl.scala 37:12]
  assign _GEN_21 = 3'h4 == value ? 4'h2 : _GEN_20; // @[Tbl.scala 37:12]
  assign _GEN_22 = 3'h5 == value ? 4'h2 : _GEN_21; // @[Tbl.scala 37:12]
  assign _GEN_23 = 3'h6 == value ? 4'hd : _GEN_22; // @[Tbl.scala 37:12]
  assign _GEN_24 = 3'h7 == value ? 4'h8 : _GEN_23; // @[Tbl.scala 37:12]
  assign _T_7 = value > 3'h0; // @[Tbl.scala 38:13]
  assign _T_8 = _GEN_16 == _GEN_8; // @[Tbl.scala 39:20]
  assign _T_9 = dut_io_o == _GEN_24; // @[Tbl.scala 40:23]
  assign _T_11 = _T_9 | reset; // @[Tbl.scala 40:13]
  assign _T_12 = _T_11 == 1'h0; // @[Tbl.scala 40:13]
  assign _GEN_26 = 3'h1 == _T_4 ? 4'hd : 4'h8; // @[Tbl.scala 42:23]
  assign _GEN_27 = 3'h2 == _T_4 ? 4'hd : _GEN_26; // @[Tbl.scala 42:23]
  assign _GEN_28 = 3'h3 == _T_4 ? 4'hc : _GEN_27; // @[Tbl.scala 42:23]
  assign _GEN_29 = 3'h4 == _T_4 ? 4'h2 : _GEN_28; // @[Tbl.scala 42:23]
  assign _GEN_30 = 3'h5 == _T_4 ? 4'h2 : _GEN_29; // @[Tbl.scala 42:23]
  assign _GEN_31 = 3'h6 == _T_4 ? 4'hd : _GEN_30; // @[Tbl.scala 42:23]
  assign _GEN_32 = 3'h7 == _T_4 ? 4'h8 : _GEN_31; // @[Tbl.scala 42:23]
  assign _T_13 = dut_io_o == _GEN_32; // @[Tbl.scala 42:23]
  assign _T_15 = _T_13 | reset; // @[Tbl.scala 42:13]
  assign _T_16 = _T_15 == 1'h0; // @[Tbl.scala 42:13]
  assign _T_18 = reset == 1'h0; // @[Tbl.scala 46:9]
  assign dut_clock = clock;
  assign dut_io_wi = 3'h7 == value ? 4'h3 : _GEN_7; // @[Tbl.scala 34:13]
  assign dut_io_ri = 3'h7 == _T_4 ? 4'h3 : _GEN_15; // @[Tbl.scala 35:13]
  assign dut_io_d = 3'h7 == value ? 4'h8 : _GEN_23; // @[Tbl.scala 37:12]
  assign _GEN_33 = _T_7 & _T_8; // @[Tbl.scala 40:13]
  assign _GEN_35 = _T_8 == 1'h0; // @[Tbl.scala 42:13]
  assign _GEN_36 = _T_7 & _GEN_35; // @[Tbl.scala 42:13]
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
      value <= _T_2;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_33 & _T_12) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Tbl.scala:40 assert(dut.io.o === vvalues(cnt))\n"); // @[Tbl.scala 40:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_33 & _T_12) begin
          $fatal; // @[Tbl.scala 40:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_36 & _T_16) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Tbl.scala:42 assert(dut.io.o === prev_value)\n"); // @[Tbl.scala 42:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_36 & _T_16) begin
          $fatal; // @[Tbl.scala 42:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap & _T_18) begin
          $finish; // @[Tbl.scala 46:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
