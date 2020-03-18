module FixedPointOneHotTester(
  input   clock,
  input   reset
);
  wire  _T_22; // @[OneHotMuxSpec.scala 96:7]
  assign _T_22 = reset == 1'h0; // @[OneHotMuxSpec.scala 96:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_22) begin
          $finish; // @[OneHotMuxSpec.scala 96:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
