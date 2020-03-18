module ParameterizedAggregateOneHotTester(
  input   clock,
  input   reset
);
  wire  _T_19; // @[OneHotMuxSpec.scala 180:7]
  assign _T_19 = reset == 1'h0; // @[OneHotMuxSpec.scala 180:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_19) begin
          $finish; // @[OneHotMuxSpec.scala 180:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
