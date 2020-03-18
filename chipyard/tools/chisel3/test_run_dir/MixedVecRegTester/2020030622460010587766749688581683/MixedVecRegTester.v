module MixedVecRegTester(
  input   clock,
  input   reset
);
  reg  doneReg; // @[MixedVecSpec.scala 22:24]
  reg [31:0] _RAND_0;
  wire  _T; // @[MixedVecSpec.scala 25:8]
  wire  _T_34; // @[MixedVecSpec.scala 33:9]
  wire  _GEN_8; // @[MixedVecSpec.scala 33:9]
  assign _T = doneReg == 1'h0; // @[MixedVecSpec.scala 25:8]
  assign _T_34 = reset == 1'h0; // @[MixedVecSpec.scala 33:9]
  assign _GEN_8 = _T == 1'h0; // @[MixedVecSpec.scala 33:9]
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
  doneReg = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      doneReg <= 1'h0;
    end else begin
      doneReg <= 1'h1;
    end
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
