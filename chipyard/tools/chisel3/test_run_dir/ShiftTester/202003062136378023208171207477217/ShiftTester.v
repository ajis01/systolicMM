module ShiftTester(
  input   clock,
  input   reset
);
  wire  _T_7; // @[Reg.scala 48:9]
  assign _T_7 = reset == 1'h0; // @[Reg.scala 48:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_7) begin
          $finish; // @[Reg.scala 48:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
