module UsesBlackBoxAddViaInline(
  input         clock,
  input         reset,
  input  [15:0] io_in,
  output [15:0] io_out
);
  wire [15:0] blackBoxAdd_in; // @[BlackBoxImpl.scala 39:27]
  wire [15:0] blackBoxAdd_out; // @[BlackBoxImpl.scala 39:27]
  BlackBoxAdd blackBoxAdd ( // @[BlackBoxImpl.scala 39:27]
    .in(blackBoxAdd_in),
    .out(blackBoxAdd_out)
  );
  assign io_out = blackBoxAdd_out; // @[BlackBoxImpl.scala 41:10]
  assign blackBoxAdd_in = io_in; // @[BlackBoxImpl.scala 40:21]
endmodule
