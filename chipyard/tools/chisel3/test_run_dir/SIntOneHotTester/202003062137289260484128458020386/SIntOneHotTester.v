module SIntOneHotTester(
  input   clock,
  input   reset
);
  wire  _T_30; // @[OneHotMuxSpec.scala 81:7]
  assign _T_30 = reset == 1'h0; // @[OneHotMuxSpec.scala 81:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_30) begin
          $finish; // @[OneHotMuxSpec.scala 81:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
