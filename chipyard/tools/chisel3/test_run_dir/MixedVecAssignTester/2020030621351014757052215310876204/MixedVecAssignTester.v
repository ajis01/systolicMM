module MixedVecAssignTester(
  input   clock,
  input   reset
);
  wire  _T_33; // @[MixedVecSpec.scala 15:7]
  assign _T_33 = reset == 1'h0; // @[MixedVecSpec.scala 15:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_33) begin
          $finish; // @[MixedVecSpec.scala 15:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
