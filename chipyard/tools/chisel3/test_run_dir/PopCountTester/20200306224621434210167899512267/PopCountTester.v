module PopCountTester(
  input   clock,
  input   reset
);
  reg [1:0] x; // @[PopCount.scala 10:18]
  reg [31:0] _RAND_0;
  wire [1:0] _T_1; // @[PopCount.scala 11:10]
  reg  _T_4; // @[PopCount.scala 12:16]
  reg [31:0] _RAND_1;
  wire  _T_6; // @[PopCount.scala 12:41]
  wire  _T_7; // @[PopCount.scala 14:27]
  wire  _T_8; // @[PopCount.scala 14:27]
  wire [1:0] result; // @[Bitwise.scala 47:55]
  wire [1:0] _T_12; // @[PopCount.scala 15:44]
  wire [1:0] _GEN_0; // @[PopCount.scala 15:44]
  wire [2:0] expected; // @[PopCount.scala 15:44]
  wire [2:0] _GEN_1; // @[PopCount.scala 16:17]
  wire  _T_13; // @[PopCount.scala 16:17]
  wire  _T_15; // @[PopCount.scala 16:9]
  wire  _T_16; // @[PopCount.scala 16:9]
  assign _T_1 = x + 2'h1; // @[PopCount.scala 11:10]
  assign _T_6 = reset == 1'h0; // @[PopCount.scala 12:41]
  assign _T_7 = x[0]; // @[PopCount.scala 14:27]
  assign _T_8 = x[1]; // @[PopCount.scala 14:27]
  assign result = _T_7 + _T_8; // @[Bitwise.scala 47:55]
  assign _T_12 = {{1'd0}, _T_7}; // @[PopCount.scala 15:44]
  assign _GEN_0 = {{1'd0}, _T_8}; // @[PopCount.scala 15:44]
  assign expected = _T_12 + _GEN_0; // @[PopCount.scala 15:44]
  assign _GEN_1 = {{1'd0}, result}; // @[PopCount.scala 16:17]
  assign _T_13 = _GEN_1 == expected; // @[PopCount.scala 16:17]
  assign _T_15 = _T_13 | reset; // @[PopCount.scala 16:9]
  assign _T_16 = _T_15 == 1'h0; // @[PopCount.scala 16:9]
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
  x = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  _T_4 = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      x <= 2'h0;
    end else begin
      x <= _T_1;
    end
    _T_4 <= x == 2'h3;
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_4 & _T_6) begin
          $finish; // @[PopCount.scala 12:41]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_16) begin
          $fwrite(32'h80000002,"Assertion failed\n    at PopCount.scala:16 assert(result === expected)\n"); // @[PopCount.scala 16:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_16) begin
          $fatal; // @[PopCount.scala 16:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule