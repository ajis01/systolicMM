module WrapTester(
  input   clock,
  input   reset
);
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  wrap; // @[Counter.scala 37:24]
  wire [1:0] _T_2; // @[Counter.scala 38:22]
  wire  _T_5; // @[Counter.scala 33:11]
  wire  _T_6; // @[Counter.scala 33:11]
  wire  _T_8; // @[Counter.scala 34:9]
  assign wrap = value == 2'h2; // @[Counter.scala 37:24]
  assign _T_2 = value + 2'h1; // @[Counter.scala 38:22]
  assign _T_5 = wrap | reset; // @[Counter.scala 33:11]
  assign _T_6 = _T_5 == 1'h0; // @[Counter.scala 33:11]
  assign _T_8 = reset == 1'h0; // @[Counter.scala 34:9]
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
      if (wrap) begin
        value <= 2'h0;
      end else begin
        value <= _T_2;
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (wrap & _T_6) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Counter.scala:33 assert(cnt === (max - 1).asUInt)\n"); // @[Counter.scala 33:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap & _T_6) begin
          $fatal; // @[Counter.scala 33:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap & _T_8) begin
          $finish; // @[Counter.scala 34:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
