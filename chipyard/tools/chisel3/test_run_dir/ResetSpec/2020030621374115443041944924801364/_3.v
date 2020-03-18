module ResetAgnosticModule(
  input        clk,
  input        rst,
  output [7:0] out
);
  reg [7:0] reg_; // @[ResetSpec.scala 14:48]
  reg [31:0] _RAND_0;
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
  if (rst) begin
    reg_ = 8'h0;
  end
end
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      reg_ <= 8'h0;
    end else begin
      reg_ <= reg_ + 8'h1;
    end
  end
endmodule
module _3(
  input        clock,
  input        reset,
  output [7:0] io_out
);
  wire  ResetAgnosticModule_clk; // @[ResetSpec.scala 41:24]
  wire  ResetAgnosticModule_rst; // @[ResetSpec.scala 41:24]
  wire [7:0] ResetAgnosticModule_out; // @[ResetSpec.scala 41:24]
  ResetAgnosticModule ResetAgnosticModule ( // @[ResetSpec.scala 41:24]
    .clk(ResetAgnosticModule_clk),
    .rst(ResetAgnosticModule_rst),
    .out(ResetAgnosticModule_out)
  );
  assign io_out = ResetAgnosticModule_out; // @[ResetSpec.scala 45:14]
  assign ResetAgnosticModule_clk = clock; // @[ResetSpec.scala 42:16]
  assign ResetAgnosticModule_rst = reset; // @[ResetSpec.scala 43:16]
endmodule
