module rvh_l1d_mshr_alloc (
	mshr_bank_valid_i,
	mshr_id_o,
	has_free_mshr_o,
	free_mshr_num_o
);
	localparam rvh_l1d_pkg_N_MSHR = 4;
	input wire [3:0] mshr_bank_valid_i;
	localparam rvh_l1d_pkg_N_MSHR_W = 2;
	output wire [1:0] mshr_id_o;
	output wire has_free_mshr_o;
	output wire [2:0] free_mshr_num_o;
	wire [3:0] mshr_bank_invalid;
	assign mshr_bank_invalid = ~mshr_bank_valid_i;
	priority_encoder #(.SEL_WIDTH(rvh_l1d_pkg_N_MSHR)) new_mshr_id_sel(
		.sel_i(mshr_bank_invalid),
		.id_vld_o(has_free_mshr_o),
		.id_o(mshr_id_o)
	);
	one_counter #(.DATA_WIDTH(rvh_l1d_pkg_N_MSHR)) free_mshr_counter_u(
		.data_i(mshr_bank_invalid),
		.cnt_o(free_mshr_num_o)
	);
endmodule
