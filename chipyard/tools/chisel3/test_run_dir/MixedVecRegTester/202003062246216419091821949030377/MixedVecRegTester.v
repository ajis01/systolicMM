module MixedVecRegTester(
  input   clock,
  input   reset
);
  reg  reg_7; // @[MixedVecSpec.scala 20:16]
  reg [31:0] _RAND_0;
  reg  reg_5; // @[MixedVecSpec.scala 20:16]
  reg [31:0] _RAND_1;
  reg  reg_2; // @[MixedVecSpec.scala 20:16]
  reg [31:0] _RAND_2;
  reg  reg_0; // @[MixedVecSpec.scala 20:16]
  reg [31:0] _RAND_3;
  reg  doneReg; // @[MixedVecSpec.scala 22:24]
  reg [31:0] _RAND_4;
  wire  _T; // @[MixedVecSpec.scala 25:8]
  wire  _T_3; // @[MixedVecSpec.scala 31:13]
  wire  _T_4; // @[MixedVecSpec.scala 31:13]
  wire  _T_11; // @[MixedVecSpec.scala 31:13]
  wire  _T_12; // @[MixedVecSpec.scala 31:13]
  wire  _T_23; // @[MixedVecSpec.scala 31:13]
  wire  _T_24; // @[MixedVecSpec.scala 31:13]
  wire  _T_31; // @[MixedVecSpec.scala 31:13]
  wire  _T_32; // @[MixedVecSpec.scala 31:13]
  wire  _T_34; // @[MixedVecSpec.scala 33:9]
  wire  _GEN_8; // @[MixedVecSpec.scala 31:13]
  assign _T = doneReg == 1'h0; // @[MixedVecSpec.scala 25:8]
  assign _T_3 = reg_0 | reset; // @[MixedVecSpec.scala 31:13]
  assign _T_4 = _T_3 == 1'h0; // @[MixedVecSpec.scala 31:13]
  assign _T_11 = reg_2 | reset; // @[MixedVecSpec.scala 31:13]
  assign _T_12 = _T_11 == 1'h0; // @[MixedVecSpec.scala 31:13]
  assign _T_23 = reg_5 | reset; // @[MixedVecSpec.scala 31:13]
  assign _T_24 = _T_23 == 1'h0; // @[MixedVecSpec.scala 31:13]
  assign _T_31 = reg_7 | reset; // @[MixedVecSpec.scala 31:13]
  assign _T_32 = _T_31 == 1'h0; // @[MixedVecSpec.scala 31:13]
  assign _T_34 = reset == 1'h0; // @[MixedVecSpec.scala 33:9]
  assign _GEN_8 = _T == 1'h0; // @[MixedVecSpec.scala 31:13]
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
  reg_7 = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_5 = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_2 = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_0 = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  doneReg = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    reg_7 <= _T | reg_7;
    reg_5 <= _T | reg_5;
    reg_2 <= _T | reg_2;
    reg_0 <= _T | reg_0;
    if (reset) begin
      doneReg <= 1'h0;
    end else begin
      doneReg <= 1'h1;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_8 & _T_4) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MixedVecSpec.scala:31 assert(a === b.asUInt)\n"); // @[MixedVecSpec.scala 31:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_8 & _T_4) begin
          $fatal; // @[MixedVecSpec.scala 31:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_8 & _T_12) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MixedVecSpec.scala:31 assert(a === b.asUInt)\n"); // @[MixedVecSpec.scala 31:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_8 & _T_12) begin
          $fatal; // @[MixedVecSpec.scala 31:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_8 & _T_24) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MixedVecSpec.scala:31 assert(a === b.asUInt)\n"); // @[MixedVecSpec.scala 31:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_8 & _T_24) begin
          $fatal; // @[MixedVecSpec.scala 31:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_8 & _T_32) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MixedVecSpec.scala:31 assert(a === b.asUInt)\n"); // @[MixedVecSpec.scala 31:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_8 & _T_32) begin
          $fatal; // @[MixedVecSpec.scala 31:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_8 & _T_34) begin
          $finish; // @[MixedVecSpec.scala 33:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
