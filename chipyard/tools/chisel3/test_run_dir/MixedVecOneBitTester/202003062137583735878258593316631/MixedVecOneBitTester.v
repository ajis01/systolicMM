module MixedVecOneBitTester(
  input   clock,
  input   reset
);
  reg  flag; // @[MixedVecSpec.scala 142:21]
  reg [31:0] _RAND_0;
  reg  oneBit_0; // @[MixedVecSpec.scala 144:19]
  reg [31:0] _RAND_1;
  wire  _T; // @[MixedVecSpec.scala 145:9]
  wire  _T_3; // @[MixedVecSpec.scala 149:11]
  wire  _T_4; // @[MixedVecSpec.scala 149:11]
  wire  _T_10; // @[MixedVecSpec.scala 151:9]
  wire  _GEN_1; // @[MixedVecSpec.scala 145:16]
  wire  _GEN_2; // @[MixedVecSpec.scala 149:11]
  assign _T = flag == 1'h0; // @[MixedVecSpec.scala 145:9]
  assign _T_3 = oneBit_0 | reset; // @[MixedVecSpec.scala 149:11]
  assign _T_4 = _T_3 == 1'h0; // @[MixedVecSpec.scala 149:11]
  assign _T_10 = reset == 1'h0; // @[MixedVecSpec.scala 151:9]
  assign _GEN_1 = _T | flag; // @[MixedVecSpec.scala 145:16]
  assign _GEN_2 = _T == 1'h0; // @[MixedVecSpec.scala 149:11]
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
  flag = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  oneBit_0 = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      flag <= 1'h0;
    end else begin
      flag <= _GEN_1;
    end
    oneBit_0 <= _T | oneBit_0;
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_2 & _T_4) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MixedVecSpec.scala:149 assert(oneBit(0) === 1.U)\n"); // @[MixedVecSpec.scala 149:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_2 & _T_4) begin
          $fatal; // @[MixedVecSpec.scala 149:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_2 & _T_4) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MixedVecSpec.scala:150 assert(oneBit.asUInt === 1.U)\n"); // @[MixedVecSpec.scala 150:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_2 & _T_4) begin
          $fatal; // @[MixedVecSpec.scala 150:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_2 & _T_10) begin
          $finish; // @[MixedVecSpec.scala 151:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
