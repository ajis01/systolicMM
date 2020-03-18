module MixedVecUIntDynamicIndexTester(
  input   clock,
  input   reset
);
  reg [1:0] value; // @[Counter.scala 29:33]
  reg [31:0] _RAND_0;
  wire  done; // @[Counter.scala 37:24]
  wire [1:0] _T_2; // @[Counter.scala 38:22]
  wire [15:0] _GEN_2; // @[MixedVecSpec.scala 87:25]
  wire [15:0] _GEN_3; // @[MixedVecSpec.scala 87:25]
  wire [15:0] _GEN_4; // @[MixedVecSpec.scala 87:25]
  wire [15:0] _GEN_5; // @[MixedVecSpec.scala 87:25]
  wire  _T_3; // @[MixedVecSpec.scala 87:25]
  wire  _T_5; // @[MixedVecSpec.scala 87:9]
  wire  _T_6; // @[MixedVecSpec.scala 87:9]
  wire  _T_8; // @[MixedVecSpec.scala 89:21]
  assign done = value == 2'h3; // @[Counter.scala 37:24]
  assign _T_2 = value + 2'h1; // @[Counter.scala 38:22]
  assign _GEN_2 = 2'h1 == value ? 16'h1 : 16'h0; // @[MixedVecSpec.scala 87:25]
  assign _GEN_3 = 2'h2 == value ? 16'h2 : _GEN_2; // @[MixedVecSpec.scala 87:25]
  assign _GEN_4 = 2'h3 == value ? 16'h3 : _GEN_3; // @[MixedVecSpec.scala 87:25]
  assign _GEN_5 = {{14'd0}, value}; // @[MixedVecSpec.scala 87:25]
  assign _T_3 = _GEN_4 == _GEN_5; // @[MixedVecSpec.scala 87:25]
  assign _T_5 = _T_3 | reset; // @[MixedVecSpec.scala 87:9]
  assign _T_6 = _T_5 == 1'h0; // @[MixedVecSpec.scala 87:9]
  assign _T_8 = reset == 1'h0; // @[MixedVecSpec.scala 89:21]
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
        if (_T_6) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MixedVecSpec.scala:87 assert(vecWire(cycle) === cycle)\n"); // @[MixedVecSpec.scala 87:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_6) begin
          $fatal; // @[MixedVecSpec.scala 87:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _T_8) begin
          $finish; // @[MixedVecSpec.scala 89:21]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
