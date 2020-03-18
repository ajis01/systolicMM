module ParameterizedOneHotTester(
  input   clock,
  input   reset
);
  wire  _T_7; // @[OneHotMuxSpec.scala 123:7]
  assign _T_7 = reset == 1'h0; // @[OneHotMuxSpec.scala 123:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_7) begin
          $finish; // @[OneHotMuxSpec.scala 123:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
