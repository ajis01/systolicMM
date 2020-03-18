module NoneOptionBundleTester(
  input   clock,
  input   reset
);
  wire  _T_5; // @[OptionBundle.scala 36:7]
  assign _T_5 = reset == 1'h0; // @[OptionBundle.scala 36:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5) begin
          $finish; // @[OptionBundle.scala 36:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
