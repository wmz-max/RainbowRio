module rvh_l1d_lsu_hit_resp (
	resp_valid_i,
	refill_valid_i,
	tag_compare_hit_per_way_i,
	ld_tlb_hit_i,
	lsu_ld_dat_i,
	lsu_ld_req_type_dec_i,
	ls_pipe_l1d_ld_req_rob_tag_i,
	ls_pipe_l1d_ld_req_prd_i,
	ls_pipe_l1d_ld_req_lsu_tag_i,
	ls_pipe_l1d_ld_req_offset_i,
	stb_l1d_bank_ld_bypass_valid_i,
	stb_l1d_bank_ld_bypass_data_i,
	l1d_rob_wb_vld_o,
	l1d_rob_wb_rob_tag_o,
	l1d_int_prf_wb_vld_o,
	l1d_int_prf_wb_tag_o,
	l1d_int_prf_wb_data_o,
	l1d_int_prf_wb_vld_from_mlfb_o,
	l1d_lsu_lsu_tag_o,
	l1d_ptw_walk_vld_o,
	l1d_ptw_walk_id_o,
	l1d_ptw_walk_pte_o
);
	input wire resp_valid_i;
	input wire refill_valid_i;
	localparam rvh_l1d_pkg_L1D_BANK_WAY_NUM = 4;
	input wire [3:0] tag_compare_hit_per_way_i;
	input wire ld_tlb_hit_i;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE = 512;
	input wire [511:0] lsu_ld_dat_i;
	input wire [13:0] lsu_ld_req_type_dec_i;
	localparam rvh_l1d_pkg_ROB_TAG_WIDTH = 4;
	input wire [3:0] ls_pipe_l1d_ld_req_rob_tag_i;
	localparam rvh_l1d_pkg_PREG_TAG_WIDTH = 4;
	input wire [3:0] ls_pipe_l1d_ld_req_prd_i;
	localparam rvh_l1d_pkg_RRV64_LSU_ID_WIDTH = 12;
	input wire [11:0] ls_pipe_l1d_ld_req_lsu_tag_i;
	localparam rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH = 6;
	input wire [5:0] ls_pipe_l1d_ld_req_offset_i;
	input wire stb_l1d_bank_ld_bypass_valid_i;
	localparam rvh_l1d_pkg_XLEN = 64;
	input wire [63:0] stb_l1d_bank_ld_bypass_data_i;
	output wire l1d_rob_wb_vld_o;
	output wire [3:0] l1d_rob_wb_rob_tag_o;
	output wire l1d_int_prf_wb_vld_o;
	output wire [3:0] l1d_int_prf_wb_tag_o;
	output wire [63:0] l1d_int_prf_wb_data_o;
	output wire l1d_int_prf_wb_vld_from_mlfb_o;
	output wire [11:0] l1d_lsu_lsu_tag_o;
	output wire l1d_ptw_walk_vld_o;
	localparam rvh_l1d_pkg_PTW_ID_WIDTH = 2;
	output wire [1:0] l1d_ptw_walk_id_o;
	localparam rvh_l1d_pkg_PTE_WIDTH = 12;
	output wire [11:0] l1d_ptw_walk_pte_o;
	wire [63:0] lsu_ld_hit_dat;
	wire [63:0] lsu_ld_refill_dat;
	wire [63:0] lsu_ld_dat_unmasked;
	wire [63:0] lsu_ld_dat_valid_bit_mask;
	wire [63:0] lsu_ld_dat_sign_ext_bit_mask;
	assign lsu_ld_dat_valid_bit_mask = (lsu_ld_req_type_dec_i[4] ? 64'h00000000000000ff : (lsu_ld_req_type_dec_i[3] ? 64'h000000000000ffff : (lsu_ld_req_type_dec_i[2] ? 64'h00000000ffffffff : (lsu_ld_req_type_dec_i[1] ? 64'hffffffffffffffff : {64 {1'sb0}}))));
	assign lsu_ld_dat_sign_ext_bit_mask = (lsu_ld_req_type_dec_i[0] ? {64 {1'sb0}} : (lsu_ld_req_type_dec_i[4] ? {{56 {lsu_ld_dat_unmasked[7]}}, {8 {1'b0}}} : (lsu_ld_req_type_dec_i[3] ? {{48 {lsu_ld_dat_unmasked[15]}}, {16 {1'b0}}} : (lsu_ld_req_type_dec_i[2] ? {{32 {lsu_ld_dat_unmasked[31]}}, {32 {1'b0}}} : (lsu_ld_req_type_dec_i[1] ? {64 {1'b0}} : {64 {1'sb0}})))));
	assign lsu_ld_dat_unmasked = (stb_l1d_bank_ld_bypass_valid_i ? stb_l1d_bank_ld_bypass_data_i : (refill_valid_i ? lsu_ld_refill_dat : lsu_ld_hit_dat));
	assign l1d_int_prf_wb_data_o = (lsu_ld_dat_valid_bit_mask & lsu_ld_dat_unmasked) | lsu_ld_dat_sign_ext_bit_mask;
	assign l1d_rob_wb_vld_o = (resp_valid_i & lsu_ld_req_type_dec_i[13]) & ((ld_tlb_hit_i | refill_valid_i) | stb_l1d_bank_ld_bypass_valid_i);
	assign l1d_rob_wb_rob_tag_o = ls_pipe_l1d_ld_req_rob_tag_i;
	assign l1d_int_prf_wb_vld_o = (resp_valid_i & lsu_ld_req_type_dec_i[13]) & ((ld_tlb_hit_i | refill_valid_i) | stb_l1d_bank_ld_bypass_valid_i);
	assign l1d_int_prf_wb_vld_from_mlfb_o = (resp_valid_i & lsu_ld_req_type_dec_i[13]) & refill_valid_i;
	assign l1d_int_prf_wb_tag_o = ls_pipe_l1d_ld_req_prd_i;
	assign l1d_lsu_lsu_tag_o = ls_pipe_l1d_ld_req_lsu_tag_i;
	assign l1d_ptw_walk_vld_o = resp_valid_i & lsu_ld_req_type_dec_i[12];
	assign l1d_ptw_walk_id_o = ls_pipe_l1d_ld_req_rob_tag_i;
	assign l1d_ptw_walk_pte_o = lsu_ld_dat_unmasked;
	wire [575:0] lsu_ld_dat_zext;
	wire [63:0] lsu_ld_refill_dat_sel_by_offset;
	assign lsu_ld_dat_zext = {{rvh_l1d_pkg_XLEN {1'b0}}, lsu_ld_dat_i};
	assign lsu_ld_refill_dat_sel_by_offset = lsu_ld_dat_zext[ls_pipe_l1d_ld_req_offset_i * 8+:rvh_l1d_pkg_XLEN];
	assign lsu_ld_refill_dat = lsu_ld_refill_dat_sel_by_offset;
	reg [511:0] lsu_ld_hit_dat_per_way_seg;
	reg [255:0] lsu_ld_hit_dat_per_way_seg_sel_by_offset;
	always @(*) begin : select_way_data
		begin : sv2v_autoblock_1
			reg signed [31:0] waynum;
			for (waynum = 0; waynum < rvh_l1d_pkg_L1D_BANK_WAY_NUM; waynum = waynum + 1)
				begin
					lsu_ld_hit_dat_per_way_seg[waynum * 128+:128] = lsu_ld_dat_i[128 * waynum+:128];
					lsu_ld_hit_dat_per_way_seg_sel_by_offset[waynum * 64+:64] = lsu_ld_hit_dat_per_way_seg[(waynum * 128) + (ls_pipe_l1d_ld_req_offset_i[3] * rvh_l1d_pkg_XLEN)+:rvh_l1d_pkg_XLEN] >> (ls_pipe_l1d_ld_req_offset_i[2:0] * 8);
				end
		end
	end
	onehot_mux #(
		.SOURCE_COUNT(rvh_l1d_pkg_L1D_BANK_WAY_NUM),
		.DATA_WIDTH(rvh_l1d_pkg_XLEN)
	) L1D_RESP_OH_MUX(
		.sel_i(tag_compare_hit_per_way_i),
		.data_i(lsu_ld_hit_dat_per_way_seg_sel_by_offset),
		.data_o(lsu_ld_hit_dat)
	);
endmodule
