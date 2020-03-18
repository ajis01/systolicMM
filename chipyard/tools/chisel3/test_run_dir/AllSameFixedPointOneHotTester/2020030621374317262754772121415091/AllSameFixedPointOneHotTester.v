module AllSameFixedPointOneHotTester(
  input   clock,
  input   reset
);
  wire  _T_18; // @[OneHotMuxSpec.scala 111:7]
  assign _T_18 = reset == 1'h0; // @[OneHotMuxSpec.scala 111:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_18) begin
          $finish; // @[OneHotMuxSpec.scala 111:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
