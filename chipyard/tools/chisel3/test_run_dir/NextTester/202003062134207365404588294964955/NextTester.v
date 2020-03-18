module NextTester(
  input   clock,
  input   reset
);
  wire  _T_71; // @[StrongEnum.scala 235:7]
  assign _T_71 = reset == 1'h0; // @[StrongEnum.scala 235:7]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_71) begin
          $finish; // @[StrongEnum.scala 235:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
