module ResetAgnosticModule(
  input        clk,
  input        rst,
  output [7:0] out
);
  reg [7:0] reg_; // @[ResetSpec.scala 14:48]
  reg [31:0] _RAND_0;
  wire [7:0] _T_1; // @[ResetSpec.scala 15:14]
  assign _T_1 = reg_ + 8'h1; // @[ResetSpec.scala 15:14]
  assign out = reg_; // @[ResetSpec.scala 16:7]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_ = _RAND_0[7:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clk) begin
    if (rst) begin
      reg_ <= 8'h0;
    end else begin
      reg_ <= _T_1;
    end
  end
endmodule
module _1(
  input        clock,
  input        reset,
  output [7:0] io_out
);
  wire  ResetAgnosticModule_clk; // @[ResetSpec.scala 29:24]
  wire  ResetAgnosticModule_rst; // @[ResetSpec.scala 29:24]
  wire [7:0] ResetAgnosticModule_out; // @[ResetSpec.scala 29:24]
  ResetAgnosticModule ResetAgnosticModule ( // @[ResetSpec.scala 29:24]
    .clk(ResetAgnosticModule_clk),
    .rst(ResetAgnosticModule_rst),
    .out(ResetAgnosticModule_out)
  );
  assign io_out = ResetAgnosticModule_out; // @[ResetSpec.scala 33:14]
  assign ResetAgnosticModule_clk = clock; // @[ResetSpec.scala 30:16]
  assign ResetAgnosticModule_rst = reset; // @[ResetSpec.scala 31:16]
endmodule
