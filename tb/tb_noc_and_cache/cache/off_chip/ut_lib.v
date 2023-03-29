module LFSR (
	i_Clk,
	i_Enable,
	i_Seed_DV,
	i_Seed_Data,
	o_LFSR_Data,
	o_LFSR_Done
);
	parameter NUM_BITS = 0;
	input i_Clk;
	input i_Enable;
	input i_Seed_DV;
	input [NUM_BITS - 1:0] i_Seed_Data;
	output wire [NUM_BITS - 1:0] o_LFSR_Data;
	output wire o_LFSR_Done;
	reg [NUM_BITS:1] r_LFSR = 0;
	reg r_XNOR;
	always @(posedge i_Clk or negedge i_Enable)
		if (~i_Enable)
			r_LFSR <= i_Seed_Data;
		else if (i_Seed_DV == 1'b1)
			r_LFSR <= i_Seed_Data;
		else
			r_LFSR <= {r_LFSR[NUM_BITS - 1:1], r_XNOR};
	always @(*)
		case (NUM_BITS)
			2: r_XNOR = r_LFSR[2] ^ ~r_LFSR[1];
			3: r_XNOR = r_LFSR[3] ^ ~r_LFSR[2];
			4: r_XNOR = r_LFSR[4] ^ ~r_LFSR[3];
			5: r_XNOR = r_LFSR[5] ^ ~r_LFSR[3];
			6: r_XNOR = r_LFSR[6] ^ ~r_LFSR[5];
			7: r_XNOR = r_LFSR[7] ^ ~r_LFSR[6];
			8: r_XNOR = ((r_LFSR[8] ^ ~r_LFSR[6]) ^ ~r_LFSR[5]) ^ ~r_LFSR[4];
			9: r_XNOR = r_LFSR[9] ^ ~r_LFSR[5];
			10: r_XNOR = r_LFSR[10] ^ ~r_LFSR[7];
			11: r_XNOR = r_LFSR[11] ^ ~r_LFSR[9];
			12: r_XNOR = ((r_LFSR[12] ^ ~r_LFSR[6]) ^ ~r_LFSR[4]) ^ ~r_LFSR[1];
			13: r_XNOR = ((r_LFSR[13] ^ ~r_LFSR[4]) ^ ~r_LFSR[3]) ^ ~r_LFSR[1];
			14: r_XNOR = ((r_LFSR[14] ^ ~r_LFSR[5]) ^ ~r_LFSR[3]) ^ ~r_LFSR[1];
			15: r_XNOR = r_LFSR[15] ^ ~r_LFSR[14];
			16: r_XNOR = ((r_LFSR[16] ^ ~r_LFSR[15]) ^ ~r_LFSR[13]) ^ ~r_LFSR[4];
			default: r_XNOR = 1'sb0;
		endcase
	assign o_LFSR_Data = r_LFSR[NUM_BITS:1];
	assign o_LFSR_Done = (r_LFSR[NUM_BITS:1] == i_Seed_Data ? 1'b1 : 1'b0);
endmodule
