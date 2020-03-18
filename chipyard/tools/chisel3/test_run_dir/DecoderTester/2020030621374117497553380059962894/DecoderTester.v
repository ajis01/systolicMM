module Decoder(
  input  [31:0] io_inst,
  output        io_matched
);
  wire [31:0] _T; // @[Decoder.scala 16:47]
  wire  _T_1; // @[Decoder.scala 16:47]
  wire [31:0] _T_2; // @[Decoder.scala 16:47]
  wire  _T_3; // @[Decoder.scala 16:47]
  wire [31:0] _T_4; // @[Decoder.scala 16:47]
  wire  _T_5; // @[Decoder.scala 16:47]
  wire  _T_9; // @[Decoder.scala 16:69]
  wire  _T_10; // @[Decoder.scala 16:69]
  assign _T = io_inst & 32'hadf0c5a; // @[Decoder.scala 16:47]
  assign _T_1 = 32'h0 == _T; // @[Decoder.scala 16:47]
  assign _T_2 = io_inst & 32'h1e23e2a6; // @[Decoder.scala 16:47]
  assign _T_3 = 32'h1e2042a4 == _T_2; // @[Decoder.scala 16:47]
  assign _T_4 = io_inst & 32'h3bb663; // @[Decoder.scala 16:47]
  assign _T_5 = 32'h30a641 == _T_4; // @[Decoder.scala 16:47]
  assign _T_9 = _T_1 | _T_3; // @[Decoder.scala 16:69]
  assign _T_10 = _T_9 | _T_5; // @[Decoder.scala 16:69]
  assign io_matched = _T_10 | _T_1; // @[Decoder.scala 16:14]
endmodule
module DecoderTester(
  input   clock,
  input   reset
);
  wire [31:0] dut_io_inst; // @[Decoder.scala 22:19]
  wire  dut_io_matched; // @[Decoder.scala 22:19]
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  wrap; // @[Counter.scala 37:24]
  wire [1:0] _T_2; // @[Counter.scala 38:22]
  wire [31:0] _GEN_2; // @[Decoder.scala 23:15]
  wire [31:0] _GEN_3; // @[Decoder.scala 23:15]
  wire  _T_4; // @[Decoder.scala 24:8]
  wire  _T_5; // @[Decoder.scala 25:16]
  wire  _T_7; // @[Decoder.scala 25:11]
  wire  _T_8; // @[Decoder.scala 25:11]
  wire  _T_10; // @[Decoder.scala 26:9]
  Decoder dut ( // @[Decoder.scala 22:19]
    .io_inst(dut_io_inst),
    .io_matched(dut_io_matched)
  );
  assign wrap = value == 2'h3; // @[Counter.scala 37:24]
  assign _T_2 = value + 2'h1; // @[Counter.scala 38:22]
  assign _GEN_2 = 2'h1 == value ? 32'h5fe04eb4 : 32'h80000000; // @[Decoder.scala 23:15]
  assign _GEN_3 = 2'h2 == value ? 32'h70a645 : _GEN_2; // @[Decoder.scala 23:15]
  assign _T_4 = dut_io_matched == 1'h0; // @[Decoder.scala 24:8]
  assign _T_5 = value == 2'h0; // @[Decoder.scala 25:16]
  assign _T_7 = _T_5 | reset; // @[Decoder.scala 25:11]
  assign _T_8 = _T_7 == 1'h0; // @[Decoder.scala 25:11]
  assign _T_10 = reset == 1'h0; // @[Decoder.scala 26:9]
  assign dut_io_inst = 2'h3 == value ? 32'h80000000 : _GEN_3; // @[Decoder.scala 23:15]
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
          $fwrite(32'h80000002,"Assertion failed\n    at Decoder.scala:25 assert(cnt === 0.U)\n"); // @[Decoder.scala 25:11]
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
          $fatal; // @[Decoder.scala 25:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4 & _T_10) begin
          $finish; // @[Decoder.scala 26:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap & _T_10) begin
          $finish; // @[Decoder.scala 29:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
