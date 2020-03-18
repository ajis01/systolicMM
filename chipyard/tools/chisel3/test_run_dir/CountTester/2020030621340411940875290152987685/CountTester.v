module CountTester(
  input   clock,
  input   reset
);
  wire  _T_2; // @[Counter.scala 13:9]
  assign _T_2 = reset == 1'h0; // @[Counter.scala 13:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_2) begin
          $finish; // @[Counter.scala 13:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
