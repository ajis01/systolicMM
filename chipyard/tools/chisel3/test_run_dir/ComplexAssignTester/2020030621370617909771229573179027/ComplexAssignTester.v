module ComplexAssign(
  input         io_e,
  input  [31:0] io_in_re,
  input  [31:0] io_in_im,
  output [31:0] io_out_re,
  output [31:0] io_out_im
);
  assign io_out_re = io_e ? 32'h365bd8aa : 32'h0; // @[ComplexAssign.scala 24:15 ComplexAssign.scala 27:15]
  assign io_out_im = io_e ? 32'h3194cd7b : 32'h0; // @[ComplexAssign.scala 25:15 ComplexAssign.scala 28:15]
endmodule
module ComplexAssignTester(
  input   clock,
  input   reset
);
  wire  dut_io_e; // @[ComplexAssign.scala 34:19]
  wire [31:0] dut_io_in_re; // @[ComplexAssign.scala 34:19]
  wire [31:0] dut_io_in_im; // @[ComplexAssign.scala 34:19]
  wire [31:0] dut_io_out_re; // @[ComplexAssign.scala 34:19]
  wire [31:0] dut_io_out_im; // @[ComplexAssign.scala 34:19]
  reg  value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  _T_2; // @[Counter.scala 38:22]
  wire [31:0] _T_4; // @[ComplexAssign.scala 38:41]
  wire  re_correct; // @[ComplexAssign.scala 38:34]
  wire [31:0] _T_5; // @[ComplexAssign.scala 39:41]
  wire  im_correct; // @[ComplexAssign.scala 39:34]
  wire  _T_6; // @[ComplexAssign.scala 40:21]
  wire  _T_8; // @[ComplexAssign.scala 40:9]
  wire  _T_9; // @[ComplexAssign.scala 40:9]
  wire  _T_11; // @[ComplexAssign.scala 42:9]
  ComplexAssign dut ( // @[ComplexAssign.scala 34:19]
    .io_e(dut_io_e),
    .io_in_re(dut_io_in_re),
    .io_in_im(dut_io_in_im),
    .io_out_re(dut_io_out_re),
    .io_out_im(dut_io_out_im)
  );
  assign _T_2 = value + 1'h1; // @[Counter.scala 38:22]
  assign _T_4 = dut_io_e ? dut_io_in_re : 32'h0; // @[ComplexAssign.scala 38:41]
  assign re_correct = dut_io_out_re == _T_4; // @[ComplexAssign.scala 38:34]
  assign _T_5 = dut_io_e ? dut_io_in_im : 32'h0; // @[ComplexAssign.scala 39:41]
  assign im_correct = dut_io_out_im == _T_5; // @[ComplexAssign.scala 39:34]
  assign _T_6 = re_correct & im_correct; // @[ComplexAssign.scala 40:21]
  assign _T_8 = _T_6 | reset; // @[ComplexAssign.scala 40:9]
  assign _T_9 = _T_8 == 1'h0; // @[ComplexAssign.scala 40:9]
  assign _T_11 = reset == 1'h0; // @[ComplexAssign.scala 42:9]
  assign dut_io_e = value; // @[ComplexAssign.scala 37:12]
  assign dut_io_in_re = 32'h365bd8aa; // @[ComplexAssign.scala 35:16]
  assign dut_io_in_im = 32'h3194cd7b; // @[ComplexAssign.scala 36:16]
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
  value = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 1'h0;
    end else begin
      value <= _T_2;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_9) begin
          $fwrite(32'h80000002,"Assertion failed\n    at ComplexAssign.scala:40 assert(re_correct && im_correct)\n"); // @[ComplexAssign.scala 40:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_9) begin
          $fatal; // @[ComplexAssign.scala 40:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (value & _T_11) begin
          $finish; // @[ComplexAssign.scala 42:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
