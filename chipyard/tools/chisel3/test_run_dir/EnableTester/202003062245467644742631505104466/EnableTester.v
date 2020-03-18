module EnableTester(
  input   clock,
  input   reset
);
  reg [28:0] ens; // @[Counter.scala 18:20]
  reg [31:0] _RAND_0;
  wire [27:0] _T; // @[Counter.scala 19:14]
  wire  _T_1; // @[Counter.scala 21:34]
  reg [4:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_1;
  wire [4:0] _T_4; // @[Counter.scala 38:22]
  reg [5:0] value_1; // @[Counter.scala 29:33]
  reg [31:0] _RAND_2;
  wire  done; // @[Counter.scala 37:24]
  wire [5:0] _T_8; // @[Counter.scala 38:22]
  wire  _T_9; // @[Counter.scala 25:21]
  wire  _T_11; // @[Counter.scala 25:11]
  wire  _T_12; // @[Counter.scala 25:11]
  wire  _T_14; // @[Counter.scala 26:9]
  assign _T = ens[28:1]; // @[Counter.scala 19:14]
  assign _T_1 = ens[0]; // @[Counter.scala 21:34]
  assign _T_4 = value + 5'h1; // @[Counter.scala 38:22]
  assign done = value_1 == 6'h20; // @[Counter.scala 37:24]
  assign _T_8 = value_1 + 6'h1; // @[Counter.scala 38:22]
  assign _T_9 = value == 5'h12; // @[Counter.scala 25:21]
  assign _T_11 = _T_9 | reset; // @[Counter.scala 25:11]
  assign _T_12 = _T_11 == 1'h0; // @[Counter.scala 25:11]
  assign _T_14 = reset == 1'h0; // @[Counter.scala 26:9]
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
  ens = _RAND_0[28:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  value = _RAND_1[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  value_1 = _RAND_2[5:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      ens <= 29'h1edeb658;
    end else begin
      ens <= {{1'd0}, _T};
    end
    if (reset) begin
      value <= 5'h0;
    end else begin
      if (_T_1) begin
        value <= _T_4;
      end
    end
    if (reset) begin
      value_1 <= 6'h0;
    end else begin
      if (done) begin
        value_1 <= 6'h0;
      end else begin
        value_1 <= _T_8;
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (done & _T_12) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Counter.scala:25 assert(cntEnVal === popCount(seed).asUInt)\n"); // @[Counter.scala 25:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_12) begin
          $fatal; // @[Counter.scala 25:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_14) begin
          $finish; // @[Counter.scala 26:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
