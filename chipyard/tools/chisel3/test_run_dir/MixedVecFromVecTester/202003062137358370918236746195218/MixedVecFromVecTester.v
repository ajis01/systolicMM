module MixedVecFromVecTester(
  input   clock,
  input   reset
);
  wire  _T_14; // @[MixedVecSpec.scala 110:7]
  assign _T_14 = reset == 1'h0; // @[MixedVecSpec.scala 110:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_14) begin
          $finish; // @[MixedVecSpec.scala 110:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
