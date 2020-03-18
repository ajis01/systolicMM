module BundleToUnitTester(
  input   clock,
  input   reset
);
  wire  _T_7; // @[BundleWire.scala 42:7]
  assign _T_7 = reset == 1'h0; // @[BundleWire.scala 42:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_7) begin
          $finish; // @[BundleWire.scala 42:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
