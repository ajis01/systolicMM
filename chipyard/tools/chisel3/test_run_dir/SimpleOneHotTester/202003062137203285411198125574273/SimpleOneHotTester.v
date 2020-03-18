module SimpleOneHotTester(
  input   clock,
  input   reset
);
  wire  _T_13; // @[OneHotMuxSpec.scala 67:7]
  assign _T_13 = reset == 1'h0; // @[OneHotMuxSpec.scala 67:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_13) begin
          $finish; // @[OneHotMuxSpec.scala 67:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
