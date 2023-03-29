module std_dff (
	clk,
	d,
	q
);
	parameter WIDTH = 8;
	input clk;
	input [WIDTH - 1:0] d;
	output wire [WIDTH - 1:0] q;
	reg [WIDTH - 1:0] dff_q;
	always @(posedge clk) dff_q <= d;
	assign q = dff_q;
endmodule
