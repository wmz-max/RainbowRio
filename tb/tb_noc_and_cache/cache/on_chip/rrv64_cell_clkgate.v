module rrv64_cell_clkgate (
	clk_i,
	clk_enable_i,
	clk_senable_i,
	clk_gated_o
);
	input wire clk_i;
	input wire clk_enable_i;
	input wire clk_senable_i;
	output wire clk_gated_o;
	wire clk_en;
	reg clk_en_reg;
	assign clk_en = clk_enable_i | clk_senable_i;
	always @(clk_i or clk_en)
		if (clk_i == 1'b0)
			clk_en_reg <= clk_en;
	assign clk_gated_o = clk_i & clk_en_reg;
endmodule
