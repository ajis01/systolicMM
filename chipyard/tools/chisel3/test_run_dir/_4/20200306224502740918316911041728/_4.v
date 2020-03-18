module _4(
  input   clock,
  input   reset
);
  wire  _T_23; // @[MixedVecSpec.scala 175:13]
  assign _T_23 = reset == 1'h0; // @[MixedVecSpec.scala 175:13]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_23) begin
          $finish; // @[MixedVecSpec.scala 175:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
