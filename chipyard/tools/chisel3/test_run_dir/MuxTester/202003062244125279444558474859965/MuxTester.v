module MuxTester(
  input   clock,
  input   reset
);
  wire  _T_25; // @[MuxSpec.scala 20:7]
  assign _T_25 = reset == 1'h0; // @[MuxSpec.scala 20:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_25) begin
          $finish; // @[MuxSpec.scala 20:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
