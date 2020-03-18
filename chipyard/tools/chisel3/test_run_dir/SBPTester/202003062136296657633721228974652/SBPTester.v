module SBPTester(
  input   clock,
  input   reset
);
  wire  _T_9; // @[FixedPointSpec.scala 116:7]
  assign _T_9 = reset == 1'h0; // @[FixedPointSpec.scala 116:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_9) begin
          $finish; // @[FixedPointSpec.scala 116:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
