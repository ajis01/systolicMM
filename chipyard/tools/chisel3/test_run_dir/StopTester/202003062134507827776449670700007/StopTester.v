module StopTester(
  input   clock,
  input   reset
);
  wire  _T_1; // @[Stop.scala 9:7]
  assign _T_1 = reset == 1'h0; // @[Stop.scala 9:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1) begin
          $finish; // @[Stop.scala 9:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
