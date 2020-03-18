module ShiftTester(
  input   clock,
  input   reset
);
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  done; // @[Counter.scala 37:24]
  wire [1:0] _T_2; // @[Counter.scala 38:22]
  wire [4:0] _GEN_5; // @[Reg.scala 45:33]
  reg [4:0] _T_5; // @[Reg.scala 15:16]
  reg [31:0] _RAND_1;
  reg [4:0] _T_6; // @[Reg.scala 15:16]
  reg [31:0] _RAND_2;
  reg [4:0] sr; // @[Reg.scala 15:16]
  reg [31:0] _RAND_3;
  wire  _T_7; // @[Reg.scala 47:15]
  wire  _T_9; // @[Reg.scala 47:11]
  wire  _T_10; // @[Reg.scala 47:11]
  wire  _T_12; // @[Reg.scala 48:9]
  assign done = value == 2'h2; // @[Counter.scala 37:24]
  assign _T_2 = value + 2'h1; // @[Counter.scala 38:22]
  assign _GEN_5 = {{3'd0}, value}; // @[Reg.scala 45:33]
  assign _T_7 = sr == 5'h17; // @[Reg.scala 47:15]
  assign _T_9 = _T_7 | reset; // @[Reg.scala 47:11]
  assign _T_10 = _T_9 == 1'h0; // @[Reg.scala 47:11]
  assign _T_12 = reset == 1'h0; // @[Reg.scala 48:9]
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
  _T_5 = _RAND_1[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  _T_6 = _RAND_2[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  sr = _RAND_3[4:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      value <= 2'h0;
    end else begin
      if (done) begin
        value <= 2'h0;
      end else begin
        value <= _T_2;
      end
    end
    _T_5 <= _GEN_5 + 5'h17;
    _T_6 <= _T_5;
    sr <= _T_6;
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (done & _T_10) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Reg.scala:47 assert(sr === start)\n"); // @[Reg.scala 47:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_10) begin
          $fatal; // @[Reg.scala 47:11]
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
          $finish; // @[Reg.scala 48:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
