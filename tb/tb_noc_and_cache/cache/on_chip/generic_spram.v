module generic_spram (
	clk,
	ce,
	we,
	biten,
	addr,
	din,
	dout
);
	parameter [31:0] w = 8;
	parameter [31:0] p = 8;
	parameter [31:0] d = 8;
	parameter [31:0] log2d = 3;
	parameter [31:0] id = 0;
	parameter RAM_LATENCY = 1;
	parameter RESET = 0;
	parameter RESET_HIGH = 0;
	localparam ADDR_BITS = log2d;
	localparam DATA_BITS = w;
	localparam MASK_BITS = w / p;
	input clk;
	input ce;
	input we;
	input [MASK_BITS - 1:0] biten;
	input [ADDR_BITS - 1:0] addr;
	input [DATA_BITS - 1:0] din;
	output wire [DATA_BITS - 1:0] dout;
	wire [MASK_BITS - 1:0] sim_biten;
	wire [DATA_BITS - 1:0] sim_real_biten;
	genvar i;
	generate
		for (i = 0; i < MASK_BITS; i = i + 1) begin : genblk1
			assign sim_real_biten[i * p+:p] = {p {sim_biten[i]}};
		end
	endgenerate
	assign sim_biten = (we ? biten : 'b0);
	rrv64_generic_ram #(
		.ADDR_BITS(ADDR_BITS),
		.DATA_BITS(DATA_BITS),
		.RAM_LATENCY(RAM_LATENCY),
		.RESET(RESET),
		.RESET_HIGH(RESET_HIGH)
	) generic_ram_u(
		.clk(clk),
		.addr_i(addr),
		.rd_o(dout),
		.wd_i(din),
		.cs_i(ce),
		.we_i(sim_real_biten)
	);
endmodule
