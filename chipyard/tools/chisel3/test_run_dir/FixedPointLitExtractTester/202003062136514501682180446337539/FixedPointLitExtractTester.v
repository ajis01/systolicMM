module FixedPointLitExtractTester(
  input   clock,
  input   reset
);
  wire  _T_41; // @[FixedPointSpec.scala 131:7]
  assign _T_41 = reset == 1'h0; // @[FixedPointSpec.scala 131:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_41) begin
          $finish; // @[FixedPointSpec.scala 131:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
