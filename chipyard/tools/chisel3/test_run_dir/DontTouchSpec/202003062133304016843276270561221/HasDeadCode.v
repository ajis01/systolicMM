module HasDeadCodeChild(
  input  [31:0] io_a,
  output [31:0] io_b,
  output [31:0] io_c_0,
  output [31:0] io_c_1
);
  assign io_b = io_a; // @[DontTouchSpec.scala 13:8]
  assign io_c_0 = 32'h0;
  assign io_c_1 = 32'h0;
endmodule
module HasDeadCode(
  input         clock,
  input         reset,
  input  [31:0] io_a,
  output [31:0] io_b
);
  wire [31:0] inst_io_a; // @[DontTouchSpec.scala 25:20]
  wire [31:0] inst_io_b; // @[DontTouchSpec.scala 25:20]
  wire [31:0] inst_io_c_0; // @[DontTouchSpec.scala 25:20]
  wire [31:0] inst_io_c_1; // @[DontTouchSpec.scala 25:20]
  wire [31:0] _T_1; // @[DontTouchSpec.scala 28:31]
  wire [31:0] dead;
  HasDeadCodeChild inst ( // @[DontTouchSpec.scala 25:20]
    .io_a(inst_io_a),
    .io_b(inst_io_b),
    .io_c_0(inst_io_c_0),
    .io_c_1(inst_io_c_1)
  );
  assign _T_1 = io_a + 32'h1; // @[DontTouchSpec.scala 28:31]
  assign dead = _T_1;
  assign io_b = inst_io_b; // @[DontTouchSpec.scala 27:8]
  assign inst_io_a = io_a; // @[DontTouchSpec.scala 26:13]
endmodule
