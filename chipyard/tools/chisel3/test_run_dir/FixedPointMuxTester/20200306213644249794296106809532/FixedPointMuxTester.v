module FixedPointMuxTester(
  input   clock,
  input   reset
);
  wire  _T_21; // @[FixedPointSpec.scala 93:7]
  assign _T_21 = reset == 1'h0; // @[FixedPointSpec.scala 93:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_21) begin
          $finish; // @[FixedPointSpec.scala 93:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
