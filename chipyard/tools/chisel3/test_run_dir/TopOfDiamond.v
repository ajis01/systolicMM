module ModC(
  input  [15:0] io_in,
  output [15:0] io_out
);
  assign io_out = io_in; // @[AnnotatingDiamondSpec.scala 64:10]
endmodule
module ModA(
  input  [31:0] io_in,
  output [15:0] io_out
);
  wire [15:0] modC_io_in; // @[AnnotatingDiamondSpec.scala 81:20]
  wire [15:0] modC_io_out; // @[AnnotatingDiamondSpec.scala 81:20]
  ModC modC ( // @[AnnotatingDiamondSpec.scala 81:20]
    .io_in(modC_io_in),
    .io_out(modC_io_out)
  );
  assign io_out = modC_io_out; // @[AnnotatingDiamondSpec.scala 83:10]
  assign modC_io_in = io_in[15:0]; // @[AnnotatingDiamondSpec.scala 82:14]
endmodule
module ModC_1(
  input  [31:0] io_in,
  output [31:0] io_out
);
  assign io_out = io_in; // @[AnnotatingDiamondSpec.scala 64:10]
endmodule
module ModB(
  input  [31:0] io_in,
  output [31:0] io_out
);
  wire [31:0] modC_io_in; // @[AnnotatingDiamondSpec.scala 96:20]
  wire [31:0] modC_io_out; // @[AnnotatingDiamondSpec.scala 96:20]
  ModC_1 modC ( // @[AnnotatingDiamondSpec.scala 96:20]
    .io_in(modC_io_in),
    .io_out(modC_io_out)
  );
  assign io_out = modC_io_out; // @[AnnotatingDiamondSpec.scala 98:10]
  assign modC_io_in = io_in; // @[AnnotatingDiamondSpec.scala 97:14]
endmodule
module TopOfDiamond(
  input         clock,
  input         reset,
  input  [31:0] io_in,
  output [31:0] io_out
);
  wire [31:0] modA_io_in; // @[AnnotatingDiamondSpec.scala 111:20]
  wire [15:0] modA_io_out; // @[AnnotatingDiamondSpec.scala 111:20]
  wire [31:0] modB_io_in; // @[AnnotatingDiamondSpec.scala 112:20]
  wire [31:0] modB_io_out; // @[AnnotatingDiamondSpec.scala 112:20]
  reg [31:0] x; // @[AnnotatingDiamondSpec.scala 108:14]
  reg [31:0] _RAND_0;
  reg [31:0] y; // @[AnnotatingDiamondSpec.scala 109:14]
  reg [31:0] _RAND_1;
  wire [31:0] _GEN_0; // @[AnnotatingDiamondSpec.scala 118:20]
  ModA modA ( // @[AnnotatingDiamondSpec.scala 111:20]
    .io_in(modA_io_in),
    .io_out(modA_io_out)
  );
  ModB modB ( // @[AnnotatingDiamondSpec.scala 112:20]
    .io_in(modB_io_in),
    .io_out(modB_io_out)
  );
  assign _GEN_0 = {{16'd0}, modA_io_out}; // @[AnnotatingDiamondSpec.scala 118:20]
  assign io_out = y; // @[AnnotatingDiamondSpec.scala 119:10]
  assign modA_io_in = x; // @[AnnotatingDiamondSpec.scala 115:14]
  assign modB_io_in = x; // @[AnnotatingDiamondSpec.scala 116:14]
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
  x = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  y = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    x <= io_in;
    y <= _GEN_0 + modB_io_out;
  end
endmodule
