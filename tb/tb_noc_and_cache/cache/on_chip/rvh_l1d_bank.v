module rvh_l1d_bank (
	ls_pipe_l1d_ld_req_vld_i,
	ls_pipe_l1d_ld_req_rob_tag_i,
	ls_pipe_l1d_ld_req_prd_i,
	ls_pipe_l1d_ld_req_opcode_i,
	ls_pipe_l1d_ld_req_lsu_tag_i,
	ls_pipe_l1d_ld_req_ptag_i,
	ls_pipe_l1d_ld_req_idx_i,
	ls_pipe_l1d_ld_req_offset_i,
	ls_pipe_l1d_ld_req_vtag_i,
	stb_l1d_ld_rdy_i,
	ls_pipe_l1d_ld_req_rdy_o,
	ls_pipe_l1d_st_req_vld_i,
	ls_pipe_l1d_st_req_io_region_i,
	ls_pipe_l1d_st_req_rob_tag_i,
	ls_pipe_l1d_st_req_prd_i,
	ls_pipe_l1d_st_req_opcode_i,
	ls_pipe_l1d_st_req_lsu_tag_i,
	ls_pipe_l1d_st_req_paddr_i,
	ls_pipe_l1d_st_req_data_i,
	ls_pipe_l1d_st_req_data_byte_mask_i,
	ls_pipe_l1d_st_req_rdy_o,
	dtlb_l1d_resp_vld_i,
	dtlb_l1d_resp_excp_vld_i,
	dtlb_l1d_resp_hit_i,
	dtlb_l1d_resp_ppn_i,
	dtlb_l1d_resp_rdy_o,
	stb_l1d_bank_ld_bypass_valid_i,
	stb_l1d_bank_ld_bypass_data_i,
	l1d_ls_pipe_replay_vld_o,
	l1d_ls_pipe_mshr_full_o,
	l1d_ls_pipe_replay_lsu_tag_o,
	l1d_rob_wb_vld_o,
	l1d_rob_wb_rob_tag_o,
	l1d_int_prf_wb_vld_o,
	l1d_int_prf_wb_tag_o,
	l1d_int_prf_wb_data_o,
	l1d_int_prf_wb_vld_from_mlfb_o,
	l1d_int_prf_wb_rdy_from_mlfb_i,
	l1d_lsu_lsu_tag_o,
	ptw_walk_req_vld_i,
	ptw_walk_req_id_i,
	ptw_walk_req_addr_i,
	stb_l1d_ptw_walk_req_rdy_i,
	ptw_walk_req_rdy_o,
	ptw_walk_resp_vld_o,
	ptw_walk_resp_id_o,
	ptw_walk_resp_pte_o,
	ptw_walk_resp_rdy_i,
	l2_req_if_arvalid,
	l2_req_if_arready,
	l2_req_if_ar,
	l2_req_if_awvalid,
	l2_req_if_awready,
	l2_req_if_aw,
	l2_req_if_wvalid,
	l2_req_if_wready,
	l2_req_if_w,
	l2_resp_if_rvalid,
	l2_resp_if_rready,
	l2_resp_if_r,
	l2_req_if_snvalid,
	l2_req_if_snready,
	l2_req_if_sn,
	l2_resp_if_snvalid,
	l2_resp_if_snready,
	l2_resp_if_sn,
	rob_flush_i,
	fencei_flush_vld_i,
	fencei_flush_grant_o,
	clk,
	rst
);
	input wire ls_pipe_l1d_ld_req_vld_i;
	localparam rvh_l1d_pkg_ROB_TAG_WIDTH = 4;
	input wire [3:0] ls_pipe_l1d_ld_req_rob_tag_i;
	localparam rvh_l1d_pkg_PREG_TAG_WIDTH = 4;
	input wire [3:0] ls_pipe_l1d_ld_req_prd_i;
	localparam [31:0] rvh_l1d_pkg_LDU_OP_WIDTH = 4;
	input wire [3:0] ls_pipe_l1d_ld_req_opcode_i;
	localparam rvh_l1d_pkg_RUBY_ID = 9;
	input wire [8:0] ls_pipe_l1d_ld_req_lsu_tag_i;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE = 512;
	localparam rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH = 6;
	localparam rvh_l1d_pkg_L1D_BANK_SET_NUM = 4;
	localparam rvh_l1d_pkg_L1D_BANK_SET_INDEX_WIDTH = 2;
	localparam rvh_l1d_pkg_PADDR_WIDTH = 20;
	localparam rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH = 12;
	input wire [11:0] ls_pipe_l1d_ld_req_ptag_i;
	input wire [1:0] ls_pipe_l1d_ld_req_idx_i;
	input wire [5:0] ls_pipe_l1d_ld_req_offset_i;
	localparam rvh_l1d_pkg_L1D_BANK_VTAG = 39;
	input wire [38:0] ls_pipe_l1d_ld_req_vtag_i;
	input wire stb_l1d_ld_rdy_i;
	output wire ls_pipe_l1d_ld_req_rdy_o;
	input wire ls_pipe_l1d_st_req_vld_i;
	input wire ls_pipe_l1d_st_req_io_region_i;
	input wire [3:0] ls_pipe_l1d_st_req_rob_tag_i;
	input wire [3:0] ls_pipe_l1d_st_req_prd_i;
	localparam [31:0] rvh_l1d_pkg_STU_OP_WIDTH = 5;
	input wire [4:0] ls_pipe_l1d_st_req_opcode_i;
	input wire [8:0] ls_pipe_l1d_st_req_lsu_tag_i;
	input wire [19:0] ls_pipe_l1d_st_req_paddr_i;
	localparam rvh_l1d_pkg_L1D_STB_DATA_WIDTH = 512;
	input wire [511:0] ls_pipe_l1d_st_req_data_i;
	input wire [63:0] ls_pipe_l1d_st_req_data_byte_mask_i;
	output wire ls_pipe_l1d_st_req_rdy_o;
	input wire dtlb_l1d_resp_vld_i;
	input wire dtlb_l1d_resp_excp_vld_i;
	input wire dtlb_l1d_resp_hit_i;
	localparam rvh_l1d_pkg_PPN_WIDTH = 20;
	input wire [19:0] dtlb_l1d_resp_ppn_i;
	output wire dtlb_l1d_resp_rdy_o;
	input wire stb_l1d_bank_ld_bypass_valid_i;
	localparam rvh_l1d_pkg_XLEN = 64;
	input wire [63:0] stb_l1d_bank_ld_bypass_data_i;
	output wire l1d_ls_pipe_replay_vld_o;
	output wire l1d_ls_pipe_mshr_full_o;
	localparam rvh_l1d_pkg_RRV64_LSU_ID_WIDTH = 12;
	output wire [11:0] l1d_ls_pipe_replay_lsu_tag_o;
	output wire l1d_rob_wb_vld_o;
	output wire [3:0] l1d_rob_wb_rob_tag_o;
	output wire l1d_int_prf_wb_vld_o;
	output wire [3:0] l1d_int_prf_wb_tag_o;
	output wire [63:0] l1d_int_prf_wb_data_o;
	output wire l1d_int_prf_wb_vld_from_mlfb_o;
	input wire l1d_int_prf_wb_rdy_from_mlfb_i;
	output wire [8:0] l1d_lsu_lsu_tag_o;
	input wire ptw_walk_req_vld_i;
	localparam rvh_l1d_pkg_PTW_ID_WIDTH = 2;
	input wire [1:0] ptw_walk_req_id_i;
	input wire [19:0] ptw_walk_req_addr_i;
	input wire stb_l1d_ptw_walk_req_rdy_i;
	output wire ptw_walk_req_rdy_o;
	output wire ptw_walk_resp_vld_o;
	output wire [1:0] ptw_walk_resp_id_o;
	localparam rvh_l1d_pkg_PTE_WIDTH = 12;
	output wire [11:0] ptw_walk_resp_pte_o;
	input wire ptw_walk_resp_rdy_i;
	output wire l2_req_if_arvalid;
	input wire l2_req_if_arready;
	output wire [25:0] l2_req_if_ar;
	output wire l2_req_if_awvalid;
	input wire l2_req_if_awready;
	output wire [15:0] l2_req_if_aw;
	output wire l2_req_if_wvalid;
	input wire l2_req_if_wready;
	localparam rvh_l1d_pkg_MEM_DATA_WIDTH = 64;
	output wire [63:0] l2_req_if_w;
	input wire l2_resp_if_rvalid;
	output wire l2_resp_if_rready;
	input wire [67:0] l2_resp_if_r;
	input wire l2_req_if_snvalid;
	output wire l2_req_if_snready;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE = 14;
	input wire [17:0] l2_req_if_sn;
	output wire l2_resp_if_snvalid;
	input wire l2_resp_if_snready;
	output wire [65:0] l2_resp_if_sn;
	input wire rob_flush_i;
	input wire fencei_flush_vld_i;
	output wire fencei_flush_grant_o;
	input wire clk;
	input wire rst;
	localparam rvh_l1d_pkg_L1D_BANK_WAY_NUM = 4;
	wire [1297:0] cur;
	wire [1297:0] nxt;
	wire s1_valid;
	wire s2_valid;
	wire s1_nxt_ena;
	wire s2_nxt_ena;
	wire s1_valid_nxt;
	wire s2_valid_nxt;
	wire s1_stall;
	wire s2_stall;
	wire sn_req_hsk_ff;
	wire [13:0] req_type_dec;
	wire cache_rd_valid_tram;
	wire cache_wr_valid_tram;
	wire [3:0] cache_rd_tram_way_en;
	wire [3:0] cache_wr_tram_way_en;
	wire [1:0] cache_idx_tram;
	wire [5:0] cache_offset_tram;
	wire [3:0] tram_cs;
	wire [3:0] tram_wen;
	wire [7:0] tram_addr;
	wire [11:0] cache_wr_dat_tram;
	wire [47:0] tram_wdat;
	wire [47:0] tram_rdat;
	wire cache_rd_valid_dram;
	wire cache_wr_valid_dram;
	wire [1:0] cache_idx_dram;
	wire [5:0] cache_offset_dram;
	localparam rvh_l1d_pkg_L1D_BANK_WAY_INDEX_WIDTH = 2;
	wire [1:0] cache_way_idx_dram;
	wire [1:0] cache_way_idx_dram_s1;
	wire [5:0] cache_offset_dram_s1;
	wire [3:0] cache_way_en_dram_raw;
	wire [3:0] cache_way_en_dram;
	wire [3:0] cache_way_en_dram_seg;
	wire [63:0] cache_way_byte_en_dram_seg;
	wire [63:0] cache_wr_dat_dram;
	wire [3:0] dram_cs;
	wire [63:0] dram_wen_biten;
	wire [15:0] dram_wen_biten_tmp;
	wire [7:0] st_dat_biten;
	wire [3:0] dram_wen;
	wire [3:0] dram_wen_way;
	wire [1:0] dram_addr;
	wire [15:0] dram_addr_ram;
	wire [15:0] dram_addr_by_way;
	wire [3:0] dram_addr_by_offset;
	wire [511:0] dram_wdat;
	wire [511:0] dram_wdat_tmp;
	wire [511:0] dram_wdat_way;
	wire [511:0] dram_rdat;
	wire [511:0] dram_rdat_all;
	wire [511:0] dram_rdat_all_way0;
	wire [511:0] dram_rdat_all_way1;
	wire [511:0] dram_rdat_all_way2;
	wire [511:0] dram_rdat_all_way3;
	wire [511:0] dram_rdat_all_way_seg_realigned;
	wire [511:0] dram_rdat_all_way_selected;
	wire [511:0] dram_rdat_all_way_seg_realigned_offset0;
	wire [511:0] dram_rdat_all_way_seg_realigned_offset1;
	wire [511:0] dram_rdat_all_way_seg_realigned_offset2;
	wire [511:0] dram_rdat_all_way_seg_realigned_offset3;
	wire [511:0] dram_wdat_ram;
	wire [1:0] ls_pipe_l1d_st_req_idx;
	wire [5:0] ls_pipe_l1d_st_req_offset;
	wire [11:0] ls_pipe_l1d_st_req_tag;
	wire plru_rd_en_mlfb_peek;
	wire [1:0] plru_rd_idx_mlfb_peek;
	wire [1:0] plru_rd_dat_mlfb_peek;
	wire [1:0] lst_rd_idx_mlfb_peek;
	wire [1:0] lst_rd_idx_peek;
	wire [1:0] lst_rd_avail_way_mlfb_peek;
	wire [7:0] lst_rd_dat_mlfb_peek;
	wire [1:0] lst_rd_idx_s0_req;
	wire [7:0] lst_rd_dat_s0_req;
	wire mlfb_evict_valid;
	wire mlfb_evict_ready;
	wire mlfb_evict_hsk;
	wire [5:0] mlfb_evict_req;
	wire refill_valid;
	wire refill_ready;
	wire refill_bank_internal_ready;
	wire refill_hsk;
	wire refill_bank_internal_hsk;
	wire [574:0] refill_req;
	wire [1:0] lst_check_set_idx;
	wire [1:0] lst_check_way_idx;
	wire lst_check_valid;
	wire lst_check_ready;
	wire mlfb_mshr_dealloc_valid;
	wire mlfb_mshr_dealloc_ready;
	localparam rvh_l1d_pkg_N_MSHR = 4;
	localparam rvh_l1d_pkg_N_MSHR_W = 2;
	wire [1:0] mlfb_mshr_dealloc_idx;
	wire [1:0] mlfb_mshr_head_rd_idx;
	wire [639:0] mlfb_mshr_head_rd_mshr_entry;
	wire mlfb_mshr_head_rd_mshr_entry_no_resp;
	wire [1:0] mlfb_mshr_head_pending_rd_idx;
	wire [639:0] mlfb_mshr_head_pending_rd_mshr_entry;
	wire [11:0] tag_used_to_compare;
	wire [3:0] s1_tag_compare_hit_per_way;
	wire s1_tag_compare_hit;
	wire mshr_we;
	wire [2559:0] mshr_bank;
	wire [3:0] mshr_bank_valid;
	wire [3:0] mshr_bank_no_resp;
	wire [639:0] new_mshr;
	wire new_mshr_valid;
	wire [1:0] new_mshr_id;
	wire has_free_mshr;
	wire [rvh_l1d_pkg_N_MSHR_W:0] free_mshr_num;
	wire l1d_ewrq_new_ewrq_valid;
	wire [13:0] l1d_ewrq_new_ewrq_addr;
	wire [15:0] l1d_ewrq_new_ewrq_addr_and_mesi;
	wire [511:0] l1d_ewrq_new_ewrq_dat;
	wire l1d_ewrq_new_ewrq_ready;
	localparam rvh_l1d_pkg_N_EWRQ = rvh_l1d_pkg_N_MSHR;
	wire [63:0] ewrq_dat;
	wire [3:0] ewrq_vld;
	wire lst_mesi_wr_en_s0_req_vld;
	wire [1:0] lst_mesi_wr_set_idx_s0_req;
	wire [1:0] lst_mesi_wr_way_idx_s0_req;
	wire [1:0] lst_mesi_wr_dat_s0_req;
	reg [1:0] s1_tag_compare_hit_idx;
	wire l1d_lsu_resp_valid;
	wire l1d_lsu_resp_is_refill;
	wire [511:0] l1d_lsu_resp_dat;
	wire [13:0] l1d_lsu_ld_req_type_dec;
	wire [5:0] l1d_lsu_resp_offset;
	wire [3:0] l1d_lsu_resp_rob_tag;
	wire [3:0] l1d_lsu_resp_prd;
	wire ls_pipe_l1d_ld_req_hsk;
	wire ls_pipe_l1d_st_req_hsk;
	wire ptw_l1d_walk_req_hsk;
	wire dtlb_l1d_resp_hsk;
	wire s1_st_req_tag_hit;
	wire s1_ld_req_tag_hit;
	wire s1_ptw_req_tag_hit;
	wire s1_st_req_tag_miss;
	wire s1_ld_req_tag_miss;
	wire s1_ptw_req_tag_miss;
	wire s1_req_tag_miss;
	wire s2_req_tag_miss;
	wire s1_data_ram_st_hit_wr_ready;
	wire fencei_flush_hsk;
	wire fencei_flush_rdy_internal;
	reg [2:0] l1d_bank_fencei_flush_state_d;
	wire [2:0] l1d_bank_fencei_flush_state_q;
	reg l1d_bank_fencei_flush_state_d_ena;
	wire [1:0] l1d_bank_fencei_flush_way_idx_ptr_d;
	wire [1:0] l1d_bank_fencei_flush_way_idx_ptr_q;
	wire l1d_bank_fencei_flush_way_idx_ptr_d_ena;
	wire [1:0] l1d_bank_fencei_flush_set_idx_ptr_d;
	wire [1:0] l1d_bank_fencei_flush_set_idx_ptr_q;
	wire l1d_bank_fencei_flush_set_idx_ptr_d_ena;
	wire in_fencei_flush;
	wire in_fencei_flush_pending;
	wire in_fencei_flush_s1;
	wire in_fencei_flush_s2;
	wire in_fencei_flush_s3;
	wire in_fencei_finish_flush;
	reg next_way_idx_ptr_en;
	reg next_set_idx_ptr_en;
	wire [2047:0] ewrq_data;
	wire [3:0] ewrq_data_vld;
	wire sn_ewrq_en;
	wire [1:0] sn_ewrq_ptr;
	wire [511:0] sn_ewrq_data;
	wire sn_empty;
	wire sn_req_hsk;
	wire [1:0] sn_peek_stb;
	wire [1:0] sn_peek_tram;
	wire sn_change_stb_en;
	wire [1:0] sn_change_stb_set;
	wire [1:0] sn_change_stb_way;
	wire [1:0] sn_change_stb_type;
	wire [1:0] sn_peek_dram_index;
	wire [1:0] sn_peek_dram_way;
	wire [511:0] sn_peek_dram_resp;
	wire ewrq_change_mesi_en;
	wire [1:0] ewrq_change_ptr;
	wire [1:0] ewrq_change_mesi;
	wire mlfb_change_mesi_en;
	wire [1:0] mlfb_change_ptr;
	wire [1:0] mlfb_change_mesi;
	wire sn_peek_dram_en;
	wire [75:0] mlfb;
	wire mlfb_en;
	wire [1:0] mlfb_ptr;
	wire [511:0] mlfb_data;
	genvar waynum;
	generate
		for (waynum = 0; waynum < rvh_l1d_pkg_L1D_BANK_WAY_NUM; waynum = waynum + 1) begin : genblk1
			assign tram_cs[waynum] = cache_rd_tram_way_en[waynum] | cache_wr_tram_way_en[waynum];
			assign tram_wen[waynum] = cache_wr_tram_way_en[waynum];
			assign tram_addr[waynum * 2+:2] = cache_idx_tram;
			assign tram_wdat[waynum * 12+:12] = cache_wr_dat_tram;
		end
	endgenerate
	function automatic [31:0] sv2v_cast_32;
		input reg [31:0] inp;
		sv2v_cast_32 = inp;
	endfunction
	generate
		for (waynum = 0; waynum < rvh_l1d_pkg_L1D_BANK_WAY_NUM; waynum = waynum + 1) begin : TAG_RAM_GEN
			localparam [31:0] sv2v_uu_U_TAG_RAM_p = rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH;
			localparam [31:0] sv2v_uu_U_TAG_RAM_w = rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH;
			localparam sv2v_uu_U_TAG_RAM_MASK_BITS = sv2v_uu_U_TAG_RAM_w / sv2v_uu_U_TAG_RAM_p;
			localparam [(sv2v_cast_32(rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH) / sv2v_cast_32(rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH)) - 1:0] sv2v_uu_U_TAG_RAM_ext_biten_1 = 1'sb1;
			generic_spram #(
				.w(rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH),
				.p(rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH),
				.d(rvh_l1d_pkg_L1D_BANK_SET_NUM),
				.log2d(2),
				.id(1),
				.RAM_LATENCY(1),
				.RESET(1),
				.RESET_HIGH(0)
			) U_TAG_RAM(
				.clk(clk),
				.ce(tram_cs[waynum]),
				.we(tram_wen[waynum]),
				.addr(tram_addr[waynum * 2+:2]),
				.din(tram_wdat[waynum * 12+:12]),
				.dout(tram_rdat[waynum * 12+:12]),
				.biten(sv2v_uu_U_TAG_RAM_ext_biten_1)
			);
		end
	endgenerate
	reg [63:0] ls_pipe_l1d_st_req_data_byte_mask_per_seg;
	localparam rvh_l1d_pkg_L1D_OFFSET_BIT_DIFF_STB_SEG = 0;
	generate
		if (1) begin : genblk3
			reg [63:0] ls_pipe_l1d_st_req_data_byte_mask_whole_line;
			always @(*) begin : ls_pipe_l1d_st_req_data_byte_mask_whole_line_gen
				ls_pipe_l1d_st_req_data_byte_mask_whole_line = cur[733-:64];
				begin : sv2v_autoblock_1
					reg signed [31:0] i;
					for (i = 0; i < rvh_l1d_pkg_L1D_BANK_WAY_NUM; i = i + 1)
						ls_pipe_l1d_st_req_data_byte_mask_per_seg[i * 16+:16] = ls_pipe_l1d_st_req_data_byte_mask_whole_line[i * 16+:16];
				end
			end
		end
	endgenerate
	assign dram_cs = (cache_way_en_dram & {rvh_l1d_pkg_L1D_BANK_WAY_NUM {cache_wr_valid_dram}}) | {rvh_l1d_pkg_L1D_BANK_WAY_NUM {cache_rd_valid_dram}};
	assign dram_wen = dram_wen_way;
	assign dram_addr = cache_idx_dram;
	assign dram_addr_by_offset = {dram_addr, cache_offset_dram[5:4]};
	assign dram_wdat = (refill_hsk ? refill_req[562-:512] : cur[1245-:512]);
	assign st_dat_biten = cur[733-:64];
	assign dram_wen_biten_tmp = (refill_hsk ? {16 {1'sb1}} : st_dat_biten << cur[1273:1270]);
	genvar jj;
	generate
		for (jj = 0; jj < rvh_l1d_pkg_L1D_BANK_WAY_NUM; jj = jj + 1) begin : DATA_RAM_SIGNAL_GEN
			assign cache_way_en_dram[jj] = (refill_hsk ? 1'b1 : cache_way_en_dram_seg[jj]);
			assign dram_wen_way[jj] = cache_wr_valid_dram & cache_way_en_dram[jj];
			assign dram_wen_biten[jj * 16+:16] = (refill_hsk ? {16 {1'sb1}} : cache_way_byte_en_dram_seg[jj * 16+:16]);
			if (jj == 0) begin : genblk1
				assign cache_way_byte_en_dram_seg[jj * 16+:16] = ((({16 {cache_way_idx_dram == 2'b00}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[0+:16]) | ({16 {cache_way_idx_dram == 2'b11}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[16+:16])) | ({16 {cache_way_idx_dram == 2'b10}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[32+:16])) | ({16 {cache_way_idx_dram == 2'b01}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[48+:16]);
				assign dram_wdat_way[jj * 128+:128] = (cache_way_idx_dram == 2'b00 ? dram_wdat[0+:128] : (cache_way_idx_dram == 2'b01 ? dram_wdat[384+:128] : (cache_way_idx_dram == 2'b10 ? dram_wdat[256+:128] : dram_wdat[128+:128])));
				assign dram_addr_by_way[jj * 4+:4] = ((({4 {cache_way_idx_dram == 2'b00}} & {dram_addr, 2'b00}) | ({4 {cache_way_idx_dram == 2'b01}} & {dram_addr, 2'b11})) | ({4 {cache_way_idx_dram == 2'b10}} & {dram_addr, 2'b10})) | ({4 {cache_way_idx_dram == 2'b11}} & {dram_addr, 2'b01});
			end
			if (jj == 1) begin : genblk2
				assign cache_way_byte_en_dram_seg[jj * 16+:16] = ((({16 {cache_way_idx_dram == 2'b00}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[16+:16]) | ({16 {cache_way_idx_dram == 2'b11}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[32+:16])) | ({16 {cache_way_idx_dram == 2'b10}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[48+:16])) | ({16 {cache_way_idx_dram == 2'b01}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[0+:16]);
				assign dram_wdat_way[jj * 128+:128] = (cache_way_idx_dram == 2'b00 ? dram_wdat[128+:128] : (cache_way_idx_dram == 2'b01 ? dram_wdat[0+:128] : (cache_way_idx_dram == 2'b10 ? dram_wdat[384+:128] : dram_wdat[256+:128])));
				assign dram_addr_by_way[jj * 4+:4] = ((({4 {cache_way_idx_dram == 2'b00}} & {dram_addr, 2'b01}) | ({4 {cache_way_idx_dram == 2'b01}} & {dram_addr, 2'b00})) | ({4 {cache_way_idx_dram == 2'b10}} & {dram_addr, 2'b11})) | ({4 {cache_way_idx_dram == 2'b11}} & {dram_addr, 2'b10});
			end
			if (jj == 2) begin : genblk3
				assign cache_way_byte_en_dram_seg[jj * 16+:16] = ((({16 {cache_way_idx_dram == 2'b00}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[32+:16]) | ({16 {cache_way_idx_dram == 2'b11}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[48+:16])) | ({16 {cache_way_idx_dram == 2'b10}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[0+:16])) | ({16 {cache_way_idx_dram == 2'b01}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[16+:16]);
				assign dram_wdat_way[jj * 128+:128] = (cache_way_idx_dram == 2'b00 ? dram_wdat[256+:128] : (cache_way_idx_dram == 2'b01 ? dram_wdat[128+:128] : (cache_way_idx_dram == 2'b10 ? dram_wdat[0+:128] : dram_wdat[384+:128])));
				assign dram_addr_by_way[jj * 4+:4] = ((({4 {cache_way_idx_dram == 2'b00}} & {dram_addr, 2'b10}) | ({4 {cache_way_idx_dram == 2'b01}} & {dram_addr, 2'b01})) | ({4 {cache_way_idx_dram == 2'b10}} & {dram_addr, 2'b00})) | ({4 {cache_way_idx_dram == 2'b11}} & {dram_addr, 2'b11});
			end
			if (jj == 3) begin : genblk4
				assign cache_way_byte_en_dram_seg[jj * 16+:16] = ((({16 {cache_way_idx_dram == 2'b00}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[48+:16]) | ({16 {cache_way_idx_dram == 2'b11}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[0+:16])) | ({16 {cache_way_idx_dram == 2'b10}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[16+:16])) | ({16 {cache_way_idx_dram == 2'b01}} & ls_pipe_l1d_st_req_data_byte_mask_per_seg[32+:16]);
				assign dram_wdat_way[jj * 128+:128] = (cache_way_idx_dram == 2'b00 ? dram_wdat[384+:128] : (cache_way_idx_dram == 2'b01 ? dram_wdat[256+:128] : (cache_way_idx_dram == 2'b10 ? dram_wdat[128+:128] : dram_wdat[0+:128])));
				assign dram_addr_by_way[jj * 4+:4] = ((({4 {cache_way_idx_dram == 2'b00}} & {dram_addr, 2'b11}) | ({4 {cache_way_idx_dram == 2'b01}} & {dram_addr, 2'b10})) | ({4 {cache_way_idx_dram == 2'b10}} & {dram_addr, 2'b01})) | ({4 {cache_way_idx_dram == 2'b11}} & {dram_addr, 2'b00});
			end
			assign dram_addr_ram[jj * 4+:4] = (((cache_rd_valid_dram & ~mlfb_evict_hsk) & ~in_fencei_flush_s2) & ~sn_peek_dram_en ? dram_addr_by_offset : dram_addr_by_way[jj * 4+:4]);
			assign dram_wdat_ram[jj * 128+:128] = dram_wdat_way[jj * 128+:128];
			assign cache_way_en_dram_seg[jj] = |cache_way_byte_en_dram_seg[jj * 16+:16];
			if (jj == 0) begin : genblk5
				assign dram_rdat_all_way0[0+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way1[384+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way2[256+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way3[128+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset0[0+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset1[384+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset2[256+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset3[128+:128] = dram_rdat[jj * 128+:128];
			end
			if (jj == 1) begin : genblk6
				assign dram_rdat_all_way0[128+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way1[0+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way2[384+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way3[256+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset0[128+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset1[0+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset2[384+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset3[256+:128] = dram_rdat[jj * 128+:128];
			end
			if (jj == 2) begin : genblk7
				assign dram_rdat_all_way0[256+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way1[128+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way2[0+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way3[384+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset0[256+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset1[128+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset2[0+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset3[384+:128] = dram_rdat[jj * 128+:128];
			end
			if (jj == 3) begin : genblk8
				assign dram_rdat_all_way0[384+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way1[256+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way2[128+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way3[0+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset0[384+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset1[256+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset2[128+:128] = dram_rdat[jj * 128+:128];
				assign dram_rdat_all_way_seg_realigned_offset3[0+:128] = dram_rdat[jj * 128+:128];
			end
		end
		for (waynum = 0; waynum < rvh_l1d_pkg_L1D_BANK_WAY_NUM; waynum = waynum + 1) begin : DATA_RAM_GEN
			generic_spram #(
				.w(128),
				.p(8),
				.d(16),
				.log2d(4),
				.id(0),
				.RAM_LATENCY(1),
				.RESET(1),
				.RESET_HIGH(0)
			) U_DATA_RAM(
				.clk(clk),
				.ce(dram_cs[waynum]),
				.we(dram_wen[waynum]),
				.addr(dram_addr_ram[waynum * 4+:4]),
				.din(dram_wdat_ram[waynum * 128+:128]),
				.dout(dram_rdat[waynum * 128+:128]),
				.biten(dram_wen_biten[waynum * 16+:16])
			);
		end
	endgenerate
	rvh_l1d_dec l1dc_dec_u(
		.is_ld_req_vld_i((~ls_pipe_l1d_st_req_vld_i & ~ptw_walk_req_vld_i) & ls_pipe_l1d_ld_req_vld_i),
		.is_st_req_vld_i(ls_pipe_l1d_st_req_vld_i),
		.is_ptw_req_vld_i(~ls_pipe_l1d_st_req_vld_i & ptw_walk_req_vld_i),
		.ls_pipe_l1d_ld_req_opcode_i(ls_pipe_l1d_ld_req_opcode_i),
		.ls_pipe_l1d_st_req_opcode_i(ls_pipe_l1d_st_req_opcode_i),
		.req_type_dec_o(req_type_dec)
	);
	wire [1:0] ls_pipe_l1d_req_idx;
	wire [3:0] ls_pipe_l1d_req_idx_haz_in_mshr_per_entry;
	wire [3:0] ls_pipe_l1d_req_idx_haz_in_ewrq_per_entry;
	wire ls_pipe_l1d_req_idx_haz_in_mshr;
	wire ls_pipe_l1d_req_idx_haz_in_ewrq;
	wire ls_pipe_l1d_req_idx_haz_in_pipe;
	assign ls_pipe_l1d_req_idx = (ls_pipe_l1d_ld_req_vld_i ? ls_pipe_l1d_ld_req_idx_i : (ls_pipe_l1d_st_req_vld_i ? ls_pipe_l1d_st_req_paddr_i[7:rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH] : ptw_walk_req_addr_i[7:rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH]));
	assign ls_pipe_l1d_req_idx_haz_in_pipe = ((ls_pipe_l1d_ld_req_vld_i | ls_pipe_l1d_st_req_vld_i) | ptw_walk_req_vld_i) & ((s1_req_tag_miss & (ls_pipe_l1d_req_idx == cur[1277-:2])) | (s2_req_tag_miss & (ls_pipe_l1d_req_idx == cur[79-:2])));
	genvar i;
	generate
		for (i = 0; i < rvh_l1d_pkg_N_MSHR; i = i + 1) begin : genblk6
			assign ls_pipe_l1d_req_idx_haz_in_mshr_per_entry[i] = mshr_bank_valid[i] & (ls_pipe_l1d_req_idx == mshr_bank[(i * 640) + 604-:2]);
		end
		for (i = 0; i < rvh_l1d_pkg_N_EWRQ; i = i + 1) begin : genblk7
			assign ls_pipe_l1d_req_idx_haz_in_ewrq_per_entry[i] = ewrq_vld[i] & (ls_pipe_l1d_req_idx == ewrq_dat[(i * 16) + 1-:2]);
		end
	endgenerate
	assign ls_pipe_l1d_req_idx_haz_in_mshr = |ls_pipe_l1d_req_idx_haz_in_mshr_per_entry & (ls_pipe_l1d_ld_req_vld_i | ls_pipe_l1d_st_req_vld_i);
	assign ls_pipe_l1d_req_idx_haz_in_ewrq = |ls_pipe_l1d_req_idx_haz_in_ewrq_per_entry & (ls_pipe_l1d_ld_req_vld_i | ls_pipe_l1d_st_req_vld_i);
	assign l2_req_if_snready = ((~s1_stall & ~s1_st_req_tag_hit) & ~rob_flush_i) & sn_empty;
	assign sn_req_hsk = l2_req_if_snready & l2_req_if_snvalid;
	std_dffr #(.WIDTH(1)) U_SN_REQ(
		.clk(clk),
		.rstn(rst),
		.d(sn_req_hsk),
		.q(sn_req_hsk_ff)
	);
	assign sn_peek_dram_resp = dram_rdat_all_way_selected;
	wire [1:0] sn_peek_lst;
	reg [55:0] mshr_addr_i;
	always @(*) begin : sv2v_autoblock_2
		reg signed [31:0] i;
		for (i = 0; i < rvh_l1d_pkg_N_MSHR; i = i + 1)
			mshr_addr_i[i * 14+:14] = {mshr_bank[(i * 640) + 616-:12], mshr_bank[(i * 640) + 604-:2]};
	end
	snoop snoop_u(
		.clk(clk),
		.rstn(rst),
		.sn_req(l2_req_if_sn),
		.sn_req_hsk(sn_req_hsk),
		.sn_empty(sn_empty),
		.sn_resp_valid_o(l2_resp_if_snvalid),
		.sn_resp_ready_i(l2_resp_if_snready),
		.sn_resp(l2_resp_if_sn),
		.sn_peek_lst_o(sn_peek_lst),
		.sn_peek_lst_resp_i(lst_rd_dat_s0_req),
		.sn_ewrq_addr_i(ewrq_dat),
		.sn_ewrq_vld_i(ewrq_vld),
		.sn_ewrq_en_o(sn_ewrq_en),
		.sn_ewrq_ptr_o(sn_ewrq_ptr),
		.sn_ewrq_data_i(sn_ewrq_data),
		.mlfb_i(mlfb),
		.sn_mlfb_en_o(mlfb_en),
		.sn_mlfb_ptr_o(mlfb_ptr),
		.sn_mlfb_data_i(mlfb_data),
		.sn_peek_tram_o(sn_peek_tram),
		.sn_peek_tram_resp_i(tram_rdat),
		.sn_peek_dram_en_o(sn_peek_dram_en),
		.sn_peek_dram_index_o(sn_peek_dram_index),
		.sn_peek_dram_way_o(sn_peek_dram_way),
		.sn_peek_dram_resp_i(sn_peek_dram_resp),
		.sn_change_lst_en_o(sn_change_stb_en),
		.sn_change_lst_set_o(sn_change_stb_set),
		.sn_change_lst_way_o(sn_change_stb_way),
		.sn_change_lst_type_o(sn_change_stb_type),
		.sn_ewrq_change_mesi_en_o(ewrq_change_mesi_en),
		.sn_ewrq_change_ptr_o(ewrq_change_ptr),
		.sn_ewrq_change_mesi_o(ewrq_change_mesi),
		.sn_mlfb_change_mesi_en_o(mlfb_change_mesi_en),
		.sn_mlfb_change_ptr_o(mlfb_change_ptr),
		.sn_mlfb_change_mesi_o(mlfb_change_mesi),
		.mshr_addr_i(mshr_addr_i),
		.mshr_addr_valid_i(mshr_bank_valid)
	);
	assign ls_pipe_l1d_ld_req_rdy_o = (((((((((((~s1_stall & ~ls_pipe_l1d_st_req_vld_i) & ~ptw_walk_req_vld_i) & ~s1_st_req_tag_hit) & ~mlfb_evict_hsk) & ~refill_valid) & ~ls_pipe_l1d_req_idx_haz_in_pipe) & ~ls_pipe_l1d_req_idx_haz_in_mshr) & ~ls_pipe_l1d_req_idx_haz_in_ewrq) & ~sn_req_hsk) & ~(((sn_change_stb_en | sn_peek_dram_en) | mlfb_change_mesi_en) | ewrq_change_mesi_en)) & ~((~has_free_mshr | ((free_mshr_num == 1) & (s1_req_tag_miss | s2_req_tag_miss))) | ((free_mshr_num == 2) & (s1_req_tag_miss & s2_req_tag_miss)))) & ~rob_flush_i;
	assign ls_pipe_l1d_ld_req_hsk = (ls_pipe_l1d_ld_req_vld_i & ls_pipe_l1d_ld_req_rdy_o) & stb_l1d_ld_rdy_i;
	assign ls_pipe_l1d_st_req_rdy_o = (((((((~s1_stall & ~mlfb_evict_hsk) & ~refill_valid) & ~ls_pipe_l1d_req_idx_haz_in_pipe) & ~ls_pipe_l1d_req_idx_haz_in_mshr) & ~ls_pipe_l1d_req_idx_haz_in_ewrq) & ~sn_req_hsk) & ~(((sn_change_stb_en | sn_peek_dram_en) | mlfb_change_mesi_en) | ewrq_change_mesi_en)) & ~((~has_free_mshr | ((free_mshr_num == 1) & (s1_req_tag_miss | s2_req_tag_miss))) | ((free_mshr_num == 2) & (s1_req_tag_miss & s2_req_tag_miss)));
	assign ls_pipe_l1d_st_req_hsk = ls_pipe_l1d_st_req_vld_i & ls_pipe_l1d_st_req_rdy_o;
	wire ls_pipe_l1d_st_req_hsk_ff;
	wire rstn;
	std_dffr #(.WIDTH(1)) U_ST_HSK(
		.clk(clk),
		.rstn(rstn),
		.d(ls_pipe_l1d_st_req_hsk),
		.q(ls_pipe_l1d_st_req_hsk_ff)
	);
	assign ptw_walk_req_rdy_o = ((((((((~s1_stall & ~ls_pipe_l1d_st_req_vld_i) & ~mlfb_evict_hsk) & ~refill_valid) & ~ls_pipe_l1d_req_idx_haz_in_pipe) & ~ls_pipe_l1d_req_idx_haz_in_mshr) & ~ls_pipe_l1d_req_idx_haz_in_ewrq) & ~sn_req_hsk) & ~(((sn_change_stb_en | sn_peek_dram_en) | mlfb_change_mesi_en) | ewrq_change_mesi_en)) & ~((~has_free_mshr | ((free_mshr_num == 1) & (s1_req_tag_miss | s2_req_tag_miss))) | ((free_mshr_num == 2) & (s1_req_tag_miss & s2_req_tag_miss)));
	assign ptw_l1d_walk_req_hsk = (ptw_walk_req_vld_i & ptw_walk_req_rdy_o) & stb_l1d_ptw_walk_req_rdy_i;
	assign mlfb_evict_ready = ((~s1_stall & ~sn_req_hsk) & ~(((sn_change_stb_en | sn_peek_dram_en) | mlfb_change_mesi_en) | ewrq_change_mesi_en)) & ~((((s1_valid & cur[647]) | s1_st_req_tag_hit) | refill_hsk) | ~l1d_ewrq_new_ewrq_ready);
	assign mlfb_evict_hsk = mlfb_evict_valid & mlfb_evict_ready;
	assign refill_bank_internal_ready = (~((s2_valid & (cur[106] | cur[105])) & cur[624]) & ~stb_l1d_bank_ld_bypass_valid_i) & ~s1_st_req_tag_hit;
	assign refill_ready = ((((refill_bank_internal_ready & ~sn_req_hsk) & ~(((sn_change_stb_en | sn_peek_dram_en) | mlfb_change_mesi_en) | ewrq_change_mesi_en)) & ~(((refill_valid & refill_req[41]) & ~refill_req[0]) & ~l1d_int_prf_wb_rdy_from_mlfb_i)) & ~((refill_valid & refill_req[13]) & ~ptw_walk_resp_rdy_i)) & ~(|s1_tag_compare_hit_per_way && (((cur[659] & (cur[662 + (s1_tag_compare_hit_idx * 2)+:2] == 2'd1)) & s1_valid) & ls_pipe_l1d_st_req_hsk_ff));
	assign refill_bank_internal_hsk = refill_valid & refill_bank_internal_ready;
	assign refill_hsk = refill_valid & refill_ready;
	assign fencei_flush_rdy_internal = (~s1_valid & ~s2_valid) & ~(|mshr_bank_valid);
	assign fencei_flush_hsk = (fencei_flush_vld_i | in_fencei_flush_pending) & fencei_flush_rdy_internal;
	assign lst_rd_idx_s0_req = (sn_req_hsk ? sn_peek_lst : (mlfb_evict_hsk ? mlfb_evict_req[5-:2] : cache_idx_tram));
	assign cache_rd_valid_tram = ((((mlfb_evict_hsk | ls_pipe_l1d_ld_req_hsk) | ls_pipe_l1d_st_req_hsk) | ptw_l1d_walk_req_hsk) | sn_req_hsk) | in_fencei_flush_s2;
	assign ls_pipe_l1d_st_req_idx = ls_pipe_l1d_st_req_paddr_i[7:rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH];
	assign ls_pipe_l1d_st_req_offset = ls_pipe_l1d_st_req_paddr_i[5:0];
	assign ls_pipe_l1d_st_req_tag = ls_pipe_l1d_st_req_paddr_i[19:8];
	assign cache_idx_tram = (refill_hsk ? refill_req[50-:2] : (mlfb_evict_hsk ? mlfb_evict_req[5-:2] : (ls_pipe_l1d_ld_req_hsk ? ls_pipe_l1d_ld_req_idx_i : (sn_req_hsk ? sn_peek_tram : (ptw_l1d_walk_req_hsk ? ptw_walk_req_addr_i[7:rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH] : (in_fencei_flush_s2 ? l1d_bank_fencei_flush_set_idx_ptr_q : ls_pipe_l1d_st_req_idx))))));
	assign cache_offset_tram = (mlfb_evict_hsk ? {6 {1'sb0}} : (ls_pipe_l1d_ld_req_hsk ? ls_pipe_l1d_ld_req_offset_i : (ptw_l1d_walk_req_hsk ? ptw_walk_req_addr_i[5:0] : (in_fencei_flush_s2 ? {6 {1'sb0}} : ls_pipe_l1d_st_req_offset))));
	generate
		for (waynum = 0; waynum < rvh_l1d_pkg_L1D_BANK_WAY_NUM; waynum = waynum + 1) begin : genblk8
			assign cache_rd_tram_way_en[waynum] = (mlfb_evict_hsk ? waynum == mlfb_evict_req[3-:rvh_l1d_pkg_L1D_BANK_WAY_NUM] : (ls_pipe_l1d_ld_req_hsk ? 1'b1 : (ls_pipe_l1d_st_req_hsk ? 1'b1 : (ptw_l1d_walk_req_hsk ? 1'b1 : (sn_req_hsk ? 1'b1 : (in_fencei_flush_s2 ? waynum == l1d_bank_fencei_flush_way_idx_ptr_q : 1'b0))))));
		end
	endgenerate
	assign cache_wr_valid_tram = refill_hsk;
	generate
		for (waynum = 0; waynum < rvh_l1d_pkg_L1D_BANK_WAY_NUM; waynum = waynum + 1) begin : genblk9
			assign cache_wr_tram_way_en[waynum] = (refill_hsk ? waynum == refill_req[48-:4] : 1'b0);
		end
	endgenerate
	assign cache_wr_dat_tram = refill_req[574-:12];
	assign cache_rd_valid_dram = (((mlfb_evict_hsk | sn_peek_dram_en) | ls_pipe_l1d_ld_req_hsk) | ptw_l1d_walk_req_hsk) | in_fencei_flush_s2;
	assign cache_wr_valid_dram = refill_hsk | s1_st_req_tag_hit;
	assign cache_idx_dram = (refill_hsk ? refill_req[50-:2] : (sn_peek_dram_en ? sn_peek_dram_index : (mlfb_evict_hsk ? mlfb_evict_req[5-:2] : (ls_pipe_l1d_ld_req_hsk ? ls_pipe_l1d_ld_req_idx_i : (ptw_l1d_walk_req_hsk ? ptw_walk_req_addr_i[7:rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH] : (in_fencei_flush_s2 ? l1d_bank_fencei_flush_set_idx_ptr_q : cur[1277-:2]))))));
	assign cache_offset_dram = (refill_hsk ? {6 {1'sb0}} : (sn_peek_dram_en ? {6 {1'sb0}} : (mlfb_evict_hsk ? {6 {1'sb0}} : (ls_pipe_l1d_ld_req_hsk ? ls_pipe_l1d_ld_req_offset_i : (ptw_l1d_walk_req_hsk ? ptw_walk_req_addr_i[5:0] : (in_fencei_flush_s2 ? {6 {1'sb0}} : cur[1275-:6]))))));
	assign cache_way_idx_dram = (refill_hsk ? refill_req[48-:4] : (sn_peek_dram_en ? sn_peek_dram_way : (mlfb_evict_hsk ? mlfb_evict_req[3-:rvh_l1d_pkg_L1D_BANK_WAY_NUM] : (in_fencei_flush_s2 ? l1d_bank_fencei_flush_way_idx_ptr_q : s1_tag_compare_hit_idx))));
	wire ld_tlb_hit;
	wire [11:0] paddr_tag_from_tlb;
	assign dtlb_l1d_resp_rdy_o = 1'sb1;
	assign dtlb_l1d_resp_hsk = dtlb_l1d_resp_vld_i & dtlb_l1d_resp_rdy_o;
	wire [11:0] paddr_tag_from_tlb_nxt;
	assign paddr_tag_from_tlb_nxt = ls_pipe_l1d_ld_req_ptag_i;
	std_dffr #(.WIDTH(rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH)) U_LD_PADDR(
		.clk(clk),
		.rstn(rst),
		.d(paddr_tag_from_tlb_nxt),
		.q(paddr_tag_from_tlb)
	);
	assign ld_tlb_hit = (dtlb_l1d_resp_hsk & dtlb_l1d_resp_hit_i) & ~dtlb_l1d_resp_excp_vld_i;
	assign tag_used_to_compare = (cur[661] ? paddr_tag_from_tlb : cur[1257-:12]);
	generate
		for (waynum = 0; waynum < rvh_l1d_pkg_L1D_BANK_WAY_NUM; waynum = waynum + 1) begin : genblk10
			assign s1_tag_compare_hit_per_way[waynum] = (tram_rdat[waynum * 12+:12] == tag_used_to_compare) && (((cur[662 + (waynum * 2)+:2] == 2'd2) || (cur[662 + (waynum * 2)+:2] == 2'd3)) || (cur[662 + (waynum * 2)+:2] == 2'd1));
		end
	endgenerate
	assign s1_tag_compare_hit = ((cur[661] ? ld_tlb_hit : 1'b1) && |s1_tag_compare_hit_per_way) && (cur[659] & (cur[662 + (s1_tag_compare_hit_idx * 2)+:2] == 2'd1) ? 1'b0 : 1'b1);
	assign s1_ld_req_tag_hit = ((s1_valid & cur[661]) & ~cur[647]) & s1_tag_compare_hit;
	assign s1_ptw_req_tag_hit = ((s1_valid & cur[660]) & ~cur[647]) & s1_tag_compare_hit;
	assign s1_st_req_tag_hit = ((s1_valid & cur[659]) & ~cur[647]) & s1_tag_compare_hit;
	assign s1_ld_req_tag_miss = ((s1_valid & cur[661]) & ~cur[647]) & ~s1_tag_compare_hit;
	assign s1_ptw_req_tag_miss = ((s1_valid & cur[660]) & ~cur[647]) & ~s1_tag_compare_hit;
	assign s1_st_req_tag_miss = ((s1_valid & cur[659]) & ~cur[647]) & ~s1_tag_compare_hit;
	assign s1_req_tag_miss = ((s1_valid & ((cur[661] | cur[659]) | cur[660])) & ~cur[647]) & ~s1_tag_compare_hit;
	assign s2_req_tag_miss = ((s2_valid & ((cur[106] | cur[104]) | cur[105])) & ~cur[92]) & ~cur[624];
	assign s1_data_ram_st_hit_wr_ready = 1'sb1;
	wire sn_peek_dram_en_ff;
	std_dffr #(.WIDTH(1)) U_SN_PEEK_DRAM(
		.clk(clk),
		.rstn(rst),
		.d(sn_peek_dram_en),
		.q(sn_peek_dram_en_ff)
	);
	assign cache_way_idx_dram_s1 = (in_fencei_flush_s3 ? l1d_bank_fencei_flush_way_idx_ptr_q : (sn_peek_dram_en_ff ? sn_peek_dram_way : cur[646-:2]));
	assign cache_offset_dram_s1 = cur[1275-:6];
	assign dram_rdat_all_way_selected = ((({rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE {cache_way_idx_dram_s1 == 2'b00}} & dram_rdat_all_way0) | ({rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE {cache_way_idx_dram_s1 == 2'b01}} & dram_rdat_all_way1)) | ({rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE {cache_way_idx_dram_s1 == 2'b10}} & dram_rdat_all_way2)) | ({rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE {cache_way_idx_dram_s1 == 2'b11}} & dram_rdat_all_way3);
	assign dram_rdat_all_way_seg_realigned = ((({rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE {cache_offset_dram_s1[5:4] == 2'b00}} & dram_rdat_all_way_seg_realigned_offset0) | ({rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE {cache_offset_dram_s1[5:4] == 2'b01}} & dram_rdat_all_way_seg_realigned_offset1)) | ({rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE {cache_offset_dram_s1[5:4] == 2'b10}} & dram_rdat_all_way_seg_realigned_offset2)) | ({rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE {cache_offset_dram_s1[5:4] == 2'b11}} & dram_rdat_all_way_seg_realigned_offset3);
	assign dram_rdat_all = dram_rdat_all_way_seg_realigned;
	assign l1d_lsu_resp_valid = (((stb_l1d_bank_ld_bypass_valid_i | (s2_valid & cur[624])) | ((refill_bank_internal_hsk & refill_req[41]) & ~refill_req[0])) & ~(rob_flush_i & cur[106])) | (refill_bank_internal_hsk & refill_req[13]);
	assign l1d_lsu_resp_is_refill = refill_bank_internal_hsk;
	assign l1d_lsu_resp_dat = (refill_bank_internal_hsk & (refill_req[41] | refill_req[13]) ? refill_req[562-:512] : cur[618-:512]);
	assign l1d_lsu_ld_req_type_dec = (refill_bank_internal_hsk & (refill_req[41] | refill_req[13]) ? refill_req[14-:14] : cur[106-:14]);
	assign l1d_lsu_resp_offset = (refill_bank_internal_hsk & (refill_req[41] | refill_req[13]) ? refill_req[40-:6] : cur[77-:6]);
	assign l1d_lsu_resp_rob_tag = (refill_bank_internal_hsk & (refill_req[41] | refill_req[13]) ? refill_req[34-:4] : cur[644-:4]);
	assign l1d_lsu_resp_prd = (refill_bank_internal_hsk & (refill_req[41] | refill_req[13]) ? refill_req[30-:4] : cur[640-:4]);
	wire [11:0] l1d_lsu_resp_lsu_tag;
	assign l1d_lsu_resp_lsu_tag = (refill_bank_internal_hsk & (refill_req[41] | refill_req[13]) ? refill_req[26-:12] : cur[636-:12]);
	rvh_l1d_lsu_hit_resp rvh1_l1d_lsu_hit_resp_u(
		.resp_valid_i(l1d_lsu_resp_valid),
		.refill_valid_i(l1d_lsu_resp_is_refill),
		.tag_compare_hit_per_way_i(cur[623-:4]),
		.ld_tlb_hit_i(cur[619]),
		.lsu_ld_dat_i(l1d_lsu_resp_dat),
		.lsu_ld_req_type_dec_i(l1d_lsu_ld_req_type_dec),
		.ls_pipe_l1d_ld_req_rob_tag_i(l1d_lsu_resp_rob_tag),
		.ls_pipe_l1d_ld_req_prd_i(l1d_lsu_resp_prd),
		.ls_pipe_l1d_ld_req_lsu_tag_i(l1d_lsu_resp_lsu_tag),
		.l1d_lsu_lsu_tag_o(l1d_lsu_lsu_tag_o),
		.ls_pipe_l1d_ld_req_offset_i(l1d_lsu_resp_offset),
		.l1d_rob_wb_vld_o(l1d_rob_wb_vld_o),
		.l1d_rob_wb_rob_tag_o(l1d_rob_wb_rob_tag_o),
		.stb_l1d_bank_ld_bypass_valid_i(stb_l1d_bank_ld_bypass_valid_i),
		.stb_l1d_bank_ld_bypass_data_i(stb_l1d_bank_ld_bypass_data_i),
		.l1d_int_prf_wb_vld_o(l1d_int_prf_wb_vld_o),
		.l1d_int_prf_wb_tag_o(l1d_int_prf_wb_tag_o),
		.l1d_int_prf_wb_data_o(l1d_int_prf_wb_data_o),
		.l1d_int_prf_wb_vld_from_mlfb_o(l1d_int_prf_wb_vld_from_mlfb_o),
		.l1d_ptw_walk_vld_o(ptw_walk_resp_vld_o),
		.l1d_ptw_walk_id_o(ptw_walk_resp_id_o),
		.l1d_ptw_walk_pte_o(ptw_walk_resp_pte_o)
	);
	assign mshr_we = (s2_req_tag_miss & ~stb_l1d_bank_ld_bypass_valid_i) & ~(rob_flush_i & cur[106]);
	assign new_mshr_valid = mshr_we & has_free_mshr;
	assign new_mshr[639-:4] = cur[644-:4];
	assign new_mshr[635-:4] = cur[640-:4];
	assign new_mshr[631-:12] = cur[636-:12];
	assign new_mshr[619] = ~cur[106] & ~cur[105];
	assign new_mshr[618] = 1'sb0;
	assign new_mshr[617] = 1'sb0;
	assign new_mshr[616-:12] = cur[91-:12];
	assign new_mshr[604-:2] = cur[79-:2];
	assign new_mshr[602-:6] = cur[77-:6];
	assign new_mshr[596-:2] = 1'sb0;
	assign new_mshr[594-:512] = cur[618-:512];
	assign new_mshr[82-:64] = cur[71-:64];
	assign new_mshr[18-:14] = cur[106-:14];
	assign new_mshr[0] = 1'b0;
	assign new_mshr[4-:4] = (cur[106] | cur[105] ? 4'd0 : (cur[104] && (cur[7-:8] == 2'd1) ? 4'd4 : 4'd1));
	rvh_l1d_mshr_alloc rvh_l1d_mshr_alloc_u(
		.mshr_bank_valid_i(mshr_bank_valid),
		.mshr_id_o(new_mshr_id),
		.has_free_mshr_o(has_free_mshr),
		.free_mshr_num_o(free_mshr_num)
	);
	assign l1d_ls_pipe_replay_vld_o = mshr_we & ~has_free_mshr;
	assign l1d_ls_pipe_mshr_full_o = ~has_free_mshr;
	assign l1d_ls_pipe_replay_lsu_tag_o = new_mshr[631-:12];
	localparam [0:0] sv2v_uu_MSHR_ext_dirty_0 = 1'sb0;
	rvh_l1d_mshr MSHR(
		.new_mshr_valid_i(new_mshr_valid),
		.new_mshr_i(new_mshr),
		.new_mshr_id_i(new_mshr_id),
		.dirty(sv2v_uu_MSHR_ext_dirty_0),
		.mshr_bank_o(mshr_bank),
		.mshr_bank_valid_o(mshr_bank_valid),
		.mshr_bank_no_resp_o(mshr_bank_no_resp),
		.mlfb_mshr_dealloc_valid_i(mlfb_mshr_dealloc_valid),
		.mlfb_mshr_dealloc_idx_i(mlfb_mshr_dealloc_idx),
		.mlfb_mshr_dealloc_ready_o(mlfb_mshr_dealloc_ready),
		.l2_req_if_arvalid(l2_req_if_arvalid),
		.l2_req_if_arready(l2_req_if_arready),
		.l2_req_if_ar(l2_req_if_ar),
		.rob_flush_i(rob_flush_i),
		.clk(clk),
		.rst(rst)
	);
	wire [19:0] s1_paddr;
	wire [19:0] s2_paddr;
	wire [1:0] mlfb_mshr_peek_addr;
	wire [13:0] mlfb_mshr_peek_addr_resp;
	assign s1_paddr = {paddr_tag_from_tlb, cur[1277-:2], cur[1275-:6]};
	assign s2_paddr = {cur[91-:12], cur[79-:2], cur[77-:6]};
	assign mlfb_mshr_head_rd_mshr_entry = mshr_bank[mlfb_mshr_head_rd_idx * 640+:640];
	assign mlfb_mshr_head_rd_mshr_entry_no_resp = mshr_bank_no_resp[mlfb_mshr_head_rd_idx];
	assign mlfb_mshr_peek_addr_resp = {mshr_bank[(mlfb_mshr_peek_addr * 640) + 616-:12], mshr_bank[(mlfb_mshr_peek_addr * 640) + 604-:2]};
	localparam rvh_l1d_pkg_N_MLFB = rvh_l1d_pkg_N_MSHR;
	rvh_l1d_mlfb #(.ENTRY_NUM(rvh_l1d_pkg_N_MLFB)) U_RRV64_L1D_MLFB(
		.clk(clk),
		.rstn(rst),
		.rob_flush_i(rob_flush_i),
		.l1d_l2_rd_resp_valid(l2_resp_if_rvalid),
		.l1d_l2_rd_resp_ready(l2_resp_if_rready),
		.l1d_l2_rd_resp(l2_resp_if_r),
		.mlfb_mshr_dealloc_valid(mlfb_mshr_dealloc_valid),
		.mlfb_mshr_dealloc_ready(mlfb_mshr_dealloc_ready),
		.mlfb_mshr_dealloc_idx(mlfb_mshr_dealloc_idx),
		.mlfb_mshr_head_rd_idx(mlfb_mshr_head_rd_idx),
		.mlfb_mshr_head_rd_mshr_entry(mlfb_mshr_head_rd_mshr_entry),
		.mlfb_mshr_head_rd_mshr_entry_no_resp(mlfb_mshr_head_rd_mshr_entry_no_resp),
		.mlfb_mshr_peek_addr(mlfb_mshr_peek_addr),
		.mlfb_mshr_peek_addr_resp(mlfb_mshr_peek_addr_resp),
		.mlfb_lru_peek_valid(plru_rd_en_mlfb_peek),
		.mlfb_lru_peek_set_idx(plru_rd_idx_mlfb_peek),
		.mlfb_lru_peek_dat(plru_rd_dat_mlfb_peek),
		.mlfb_lst_peek_set_idx(lst_rd_idx_mlfb_peek),
		.mlfb_lst_peek_dat(lst_rd_dat_mlfb_peek),
		.mlfb_lst_peek_avail_way_idx(lst_rd_avail_way_mlfb_peek),
		.mlfb_lst_check_set_idx(lst_check_set_idx),
		.mlfb_lst_check_way_idx(lst_check_way_idx),
		.mlfb_lst_check_valid(lst_check_valid),
		.mlfb_lst_check_ready(lst_check_ready),
		.mlfb_cache_evict_req_valid(mlfb_evict_valid),
		.mlfb_cache_evict_req_ready(mlfb_evict_ready),
		.mlfb_cache_evict_req(mlfb_evict_req),
		.mlfb_cache_refill_req_valid(refill_valid),
		.mlfb_cache_refill_req_ready(refill_ready),
		.mlfb_cache_refill_req(refill_req),
		.mlfb_fifo(mlfb),
		.sn_mlfb_en_i(mlfb_en),
		.sn_mlfb_ptr_i(mlfb_ptr),
		.sn_mlfb_data_o(mlfb_data),
		.sn_mlfb_change_mesi_en_i(mlfb_change_mesi_en),
		.sn_mlfb_change_ptr_i(mlfb_change_ptr),
		.sn_mlfb_change_mesi_i(mlfb_change_mesi),
		.s1_valid(s1_valid),
		.s1_paddr(s1_paddr),
		.s2_valid(s2_valid),
		.s2_paddr(s2_paddr)
	);
	wire [1:0] l1d_ewrq_new_ewrq_mesi;
	assign l1d_ewrq_new_ewrq_valid = (s1_valid & cur[647]) | in_fencei_flush_s3;
	assign l1d_ewrq_new_ewrq_addr = (in_fencei_flush_s3 ? {tram_rdat[l1d_bank_fencei_flush_way_idx_ptr_q * 12+:12], l1d_bank_fencei_flush_set_idx_ptr_q} : {tram_rdat[cur[646-:2] * 12+:12], cur[1277-:2]});
	assign l1d_ewrq_new_ewrq_mesi = cur[662 + (cur[646-:2] * 2)+:2];
	assign l1d_ewrq_new_ewrq_addr_and_mesi = {l1d_ewrq_new_ewrq_mesi, l1d_ewrq_new_ewrq_addr};
	assign l1d_ewrq_new_ewrq_dat = dram_rdat_all_way_selected;
	rvh_l1d_ewrq EWRQ(
		.l1d_ewrq_new_ewrq_valid_i(l1d_ewrq_new_ewrq_valid),
		.l1d_ewrq_new_ewrq_addr_i(l1d_ewrq_new_ewrq_addr_and_mesi),
		.l1d_ewrq_new_ewrq_dat_i(l1d_ewrq_new_ewrq_dat),
		.l1d_ewrq_new_ewrq_ready_o(l1d_ewrq_new_ewrq_ready),
		.ewrq_addr_o(ewrq_dat),
		.ewrq_vld_o(ewrq_vld),
		.sn_ewrq_en_i(sn_ewrq_en),
		.sn_ewrq_ptr_i(sn_ewrq_ptr),
		.sn_ewrq_data_o(sn_ewrq_data),
		.change_mesi_en(ewrq_change_mesi_en),
		.change_ptr(ewrq_change_ptr),
		.change_mesi(ewrq_change_mesi),
		.l2_req_if_awvalid(l2_req_if_awvalid),
		.l2_req_if_awready(l2_req_if_awready),
		.l2_req_if_aw(l2_req_if_aw),
		.l2_req_if_wvalid(l2_req_if_wvalid),
		.l2_req_if_wready(l2_req_if_wready),
		.l2_req_if_w(l2_req_if_w),
		.clk(clk),
		.rst(rst)
	);
	always @(*) begin
		s1_tag_compare_hit_idx = 1'sb0;
		begin : sv2v_autoblock_3
			reg signed [31:0] i;
			for (i = 0; i < rvh_l1d_pkg_L1D_BANK_WAY_NUM; i = i + 1)
				if (s1_tag_compare_hit_per_way[i] == 1'b1)
					s1_tag_compare_hit_idx = i[1:0];
		end
	end
	assign lst_mesi_wr_en_s0_req_vld = (((refill_hsk | s1_st_req_tag_hit) | sn_change_stb_en) | (|s1_tag_compare_hit_per_way && (((cur[659] & (cur[662 + (s1_tag_compare_hit_idx * 2)+:2] == 2'd1)) & s1_valid) & ls_pipe_l1d_st_req_hsk_ff))) | in_fencei_flush_s2;
	assign lst_mesi_wr_set_idx_s0_req = (refill_hsk ? refill_req[50-:2] : (sn_change_stb_en ? sn_change_stb_set : (in_fencei_flush_s2 ? l1d_bank_fencei_flush_set_idx_ptr_q : cur[1277-:2])));
	assign lst_mesi_wr_way_idx_s0_req = (refill_hsk ? refill_req[48-:4] : (sn_change_stb_en ? sn_change_stb_way : (in_fencei_flush_s2 ? l1d_bank_fencei_flush_way_idx_ptr_q : s1_tag_compare_hit_idx)));
	assign lst_mesi_wr_dat_s0_req = (refill_hsk ? refill_req[44-:2] : (sn_change_stb_en ? sn_change_stb_type : (in_fencei_flush_s2 ? 2'd2 : (|s1_tag_compare_hit_per_way && (((cur[659] & (cur[662 + (s1_tag_compare_hit_idx * 2)+:2] == 2'd1)) & s1_valid) & ls_pipe_l1d_st_req_hsk_ff) ? 2'd0 : 2'd3))));
	assign lst_rd_idx_peek = (in_fencei_flush_s1 ? l1d_bank_fencei_flush_set_idx_ptr_q : lst_rd_idx_mlfb_peek);
	localparam [0:0] sv2v_uu_U_L1D_LST_ext_lst_mesi_wr_en_snp_0 = 1'sb0;
	localparam [1:0] sv2v_uu_U_L1D_LST_ext_lst_mesi_wr_set_idx_snp_0 = 1'sb0;
	localparam [1:0] sv2v_uu_U_L1D_LST_ext_lst_mesi_wr_way_idx_snp_0 = 1'sb0;
	localparam [1:0] sv2v_uu_U_L1D_LST_ext_lst_mesi_wr_dat_snp_0 = 1'sb0;
	rvh_l1d_lst #(
		.entry_num(rvh_l1d_pkg_L1D_BANK_SET_NUM),
		.way_num(rvh_l1d_pkg_L1D_BANK_WAY_NUM)
	) U_L1D_LST(
		.clk(clk),
		.rstn(rst),
		.lst_mesi_wr_en_s0_req(lst_mesi_wr_en_s0_req_vld),
		.lst_mesi_wr_set_idx_s0_req(lst_mesi_wr_set_idx_s0_req),
		.lst_mesi_wr_way_idx_s0_req(lst_mesi_wr_way_idx_s0_req),
		.lst_mesi_wr_dat_s0_req(lst_mesi_wr_dat_s0_req),
		.lst_mesi_wr_en_snp(sv2v_uu_U_L1D_LST_ext_lst_mesi_wr_en_snp_0),
		.lst_mesi_wr_set_idx_snp(sv2v_uu_U_L1D_LST_ext_lst_mesi_wr_set_idx_snp_0),
		.lst_mesi_wr_way_idx_snp(sv2v_uu_U_L1D_LST_ext_lst_mesi_wr_way_idx_snp_0),
		.lst_mesi_wr_dat_snp(sv2v_uu_U_L1D_LST_ext_lst_mesi_wr_dat_snp_0),
		.lst_rd_idx_s0_req(lst_rd_idx_s0_req),
		.lst_rd_dat_s0_req(lst_rd_dat_s0_req),
		.lst_rd_idx_mlfb_peek(lst_rd_idx_peek),
		.lst_rd_dat_mlfb_peek(lst_rd_dat_mlfb_peek),
		.lst_avail_way_rd_dat_mlfb_peek(lst_rd_avail_way_mlfb_peek),
		.lst_check_set_idx(lst_check_set_idx),
		.lst_check_way_idx(lst_check_way_idx),
		.lst_check_valid(lst_check_valid),
		.lst_check_ready(lst_check_ready)
	);
	wire plru_upd_en_s1_cache_hit;
	wire [1:0] plru_set_idx_s1_cache_hit;
	wire [1:0] plru_way_idx_s1_cache_hit;
	assign plru_upd_en_s1_cache_hit = (s1_valid & ~s1_stall) & (s1_ld_req_tag_hit | s1_st_req_tag_hit);
	assign plru_set_idx_s1_cache_hit = cur[1277-:2];
	assign plru_way_idx_s1_cache_hit = s1_tag_compare_hit_idx;
	rvh_l1d_plru #(
		.entry_num(rvh_l1d_pkg_L1D_BANK_SET_NUM),
		.way_num(rvh_l1d_pkg_L1D_BANK_WAY_NUM)
	) U_RRV64_L1D_PLRU(
		.clk(clk),
		.rstn(rst),
		.upd_en_hit(plru_upd_en_s1_cache_hit),
		.upd_set_idx_hit(plru_set_idx_s1_cache_hit),
		.upd_way_idx_hit(plru_way_idx_s1_cache_hit),
		.rd_en_refill(plru_rd_en_mlfb_peek),
		.rd_idx_refill(plru_rd_idx_mlfb_peek),
		.rd_dat_refill(plru_rd_dat_mlfb_peek)
	);
	always @(*) begin : case_l1d_bank_fencei_flush_state_d
		l1d_bank_fencei_flush_state_d = 3'd0;
		l1d_bank_fencei_flush_state_d_ena = 1'b0;
		next_way_idx_ptr_en = 1'b0;
		next_set_idx_ptr_en = 1'b0;
		case (l1d_bank_fencei_flush_state_q)
			3'd0:
				if (fencei_flush_hsk) begin
					l1d_bank_fencei_flush_state_d = 3'd2;
					l1d_bank_fencei_flush_state_d_ena = 1'b1;
				end
				else if (fencei_flush_vld_i) begin
					l1d_bank_fencei_flush_state_d = 3'd1;
					l1d_bank_fencei_flush_state_d_ena = 1'b1;
				end
			3'd1:
				if (fencei_flush_hsk) begin
					l1d_bank_fencei_flush_state_d = 3'd2;
					l1d_bank_fencei_flush_state_d_ena = 1'b1;
				end
				else begin
					l1d_bank_fencei_flush_state_d = 3'd1;
					l1d_bank_fencei_flush_state_d_ena = 1'b0;
				end
			3'd2:
				if (lst_rd_dat_mlfb_peek[0 + (l1d_bank_fencei_flush_way_idx_ptr_q * 2)+:2] == 2'd3) begin
					l1d_bank_fencei_flush_state_d = 3'd3;
					l1d_bank_fencei_flush_state_d_ena = 1'b1;
				end
				else if ((l1d_bank_fencei_flush_set_idx_ptr_q == 3) && (l1d_bank_fencei_flush_way_idx_ptr_q == 3)) begin
					l1d_bank_fencei_flush_state_d = 3'd5;
					l1d_bank_fencei_flush_state_d_ena = 1'b1;
				end
				else begin
					l1d_bank_fencei_flush_state_d = 3'd2;
					l1d_bank_fencei_flush_state_d_ena = 1'b0;
					next_way_idx_ptr_en = 1'b1;
					next_set_idx_ptr_en = l1d_bank_fencei_flush_way_idx_ptr_q == {2 {1'sb1}};
				end
			3'd3: begin
				l1d_bank_fencei_flush_state_d = 3'd4;
				l1d_bank_fencei_flush_state_d_ena = 1'b1;
			end
			3'd4:
				if (l1d_ewrq_new_ewrq_ready == 1'b1) begin
					if ((l1d_bank_fencei_flush_set_idx_ptr_q == 3) && (l1d_bank_fencei_flush_way_idx_ptr_q == 3)) begin
						l1d_bank_fencei_flush_state_d = 3'd5;
						l1d_bank_fencei_flush_state_d_ena = 1'b1;
					end
					else begin
						l1d_bank_fencei_flush_state_d = 3'd2;
						l1d_bank_fencei_flush_state_d_ena = 1'b1;
						next_way_idx_ptr_en = 1'b1;
						next_set_idx_ptr_en = l1d_bank_fencei_flush_set_idx_ptr_q == {2 {1'sb1}};
					end
				end
				else begin
					l1d_bank_fencei_flush_state_d = 3'd3;
					l1d_bank_fencei_flush_state_d_ena = 1'b1;
				end
			3'd5:
				if (|ewrq_vld == 1'b0) begin
					l1d_bank_fencei_flush_state_d = 3'd6;
					l1d_bank_fencei_flush_state_d_ena = 1'b1;
				end
				else begin
					l1d_bank_fencei_flush_state_d = 3'd5;
					l1d_bank_fencei_flush_state_d_ena = 1'b0;
				end
			3'd6: begin
				l1d_bank_fencei_flush_state_d = 3'd0;
				l1d_bank_fencei_flush_state_d_ena = 1'b1;
				next_way_idx_ptr_en = 1'b1;
				next_set_idx_ptr_en = 1'b1;
			end
			default: begin
				l1d_bank_fencei_flush_state_d = 3'd0;
				l1d_bank_fencei_flush_state_d_ena = 1'b1;
				next_way_idx_ptr_en = 1'b0;
				next_set_idx_ptr_en = 1'b0;
			end
		endcase
	end
	assign in_fencei_flush_pending = l1d_bank_fencei_flush_state_q == 3'd1;
	assign in_fencei_flush_s1 = l1d_bank_fencei_flush_state_q == 3'd2;
	assign in_fencei_flush_s2 = l1d_bank_fencei_flush_state_q == 3'd3;
	assign in_fencei_flush_s3 = l1d_bank_fencei_flush_state_q == 3'd4;
	assign in_fencei_flush = ((in_fencei_flush_pending | in_fencei_flush_s1) | in_fencei_flush_s2) | in_fencei_flush_s3;
	assign in_fencei_finish_flush = l1d_bank_fencei_flush_state_q == 3'd6;
	assign l1d_bank_fencei_flush_way_idx_ptr_d = (in_fencei_finish_flush ? {2 {1'sb0}} : l1d_bank_fencei_flush_way_idx_ptr_q + 1);
	assign l1d_bank_fencei_flush_set_idx_ptr_d = (in_fencei_finish_flush ? {2 {1'sb0}} : l1d_bank_fencei_flush_set_idx_ptr_q + 1);
	assign l1d_bank_fencei_flush_way_idx_ptr_d_ena = in_fencei_finish_flush | next_way_idx_ptr_en;
	assign l1d_bank_fencei_flush_set_idx_ptr_d_ena = in_fencei_finish_flush | next_set_idx_ptr_en;
	assign fencei_flush_grant_o = in_fencei_finish_flush;
	std_dffrve #(.WIDTH(3)) U_L1D_BANK_FENCEI_STATE_REG(
		.clk(clk),
		.rstn(rst),
		.rst_val(3'd0),
		.en(l1d_bank_fencei_flush_state_d_ena),
		.d(l1d_bank_fencei_flush_state_d),
		.q(l1d_bank_fencei_flush_state_q)
	);
	std_dffre #(.WIDTH(rvh_l1d_pkg_L1D_BANK_WAY_INDEX_WIDTH)) U_L1D_BANK_FENCEI_WAY_IDX_REG(
		.clk(clk),
		.rstn(rst),
		.en(l1d_bank_fencei_flush_way_idx_ptr_d_ena),
		.d(l1d_bank_fencei_flush_way_idx_ptr_d),
		.q(l1d_bank_fencei_flush_way_idx_ptr_q)
	);
	std_dffre #(.WIDTH(rvh_l1d_pkg_L1D_BANK_SET_INDEX_WIDTH)) U_L1D_BANK_FENCEI_SET_IDX_REG(
		.clk(clk),
		.rstn(rst),
		.en(l1d_bank_fencei_flush_set_idx_ptr_d_ena),
		.d(l1d_bank_fencei_flush_set_idx_ptr_d),
		.q(l1d_bank_fencei_flush_set_idx_ptr_q)
	);
	assign s1_stall = s1_valid & (((cur[661] & s1_tag_compare_hit) & s2_stall) | (cur[647] & ~l1d_ewrq_new_ewrq_ready));
	assign s1_valid_nxt = ((ls_pipe_l1d_ld_req_hsk | ls_pipe_l1d_st_req_hsk) | mlfb_evict_hsk) | ptw_l1d_walk_req_hsk;
	assign s1_nxt_ena = s1_valid_nxt & ~s1_stall;
	assign nxt[1297-:4] = (ls_pipe_l1d_ld_req_hsk ? ls_pipe_l1d_ld_req_rob_tag_i : (ptw_l1d_walk_req_hsk ? ptw_walk_req_id_i : ls_pipe_l1d_st_req_rob_tag_i));
	assign nxt[1293-:4] = (ls_pipe_l1d_ld_req_hsk ? ls_pipe_l1d_ld_req_prd_i : ls_pipe_l1d_st_req_prd_i);
	assign nxt[1289-:12] = (ls_pipe_l1d_ld_req_hsk ? ls_pipe_l1d_ld_req_lsu_tag_i : ls_pipe_l1d_st_req_lsu_tag_i);
	assign nxt[1277-:2] = (mlfb_evict_hsk ? mlfb_evict_req[5-:2] : (ls_pipe_l1d_ld_req_hsk ? ls_pipe_l1d_ld_req_idx_i : (ptw_l1d_walk_req_hsk ? ptw_walk_req_addr_i[7:rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH] : ls_pipe_l1d_st_req_idx)));
	assign nxt[1275-:6] = (ls_pipe_l1d_ld_req_hsk ? ls_pipe_l1d_ld_req_offset_i : (ptw_l1d_walk_req_hsk ? ptw_walk_req_addr_i[5:0] : ls_pipe_l1d_st_req_offset));
	assign nxt[1269-:12] = ls_pipe_l1d_ld_req_vtag_i;
	assign nxt[1257-:12] = (ptw_l1d_walk_req_hsk ? ptw_walk_req_addr_i[19:8] : ls_pipe_l1d_st_req_tag);
	assign nxt[1245-:512] = ls_pipe_l1d_st_req_data_i;
	assign nxt[733-:64] = ls_pipe_l1d_st_req_data_byte_mask_i;
	assign nxt[669-:8] = lst_rd_dat_s0_req;
	assign nxt[661-:14] = req_type_dec;
	assign nxt[647] = mlfb_evict_hsk;
	assign nxt[646-:2] = mlfb_evict_req[3-:rvh_l1d_pkg_L1D_BANK_WAY_NUM];
	std_dffr #(.WIDTH(1)) U_STG_VALID_REG_S1(
		.clk(clk),
		.rstn(rst),
		.d(s1_valid_nxt),
		.q(s1_valid)
	);
	std_dffe #(.WIDTH(653)) U_STG_DAT_REG_S1(
		.clk(clk),
		.en(s1_nxt_ena),
		.d(nxt[1297-:653]),
		.q(cur[1297-:653])
	);
	assign s2_stall = 1'b0;
	assign s2_valid_nxt = (((((s1_ld_req_tag_hit | s1_ld_req_tag_miss) & ld_tlb_hit) & ~rob_flush_i) | (s1_ptw_req_tag_hit | s1_ptw_req_tag_miss)) | s1_st_req_tag_miss) & ~cur[647];
	assign s2_nxt_ena = s2_valid_nxt & ~s2_stall;
	assign nxt[624] = s1_tag_compare_hit;
	assign nxt[623-:4] = s1_tag_compare_hit_per_way;
	assign nxt[619] = ld_tlb_hit;
	assign nxt[618-:512] = (cur[661] | cur[660] ? dram_rdat_all : cur[1245-:512]);
	assign nxt[644-:4] = cur[1297-:4];
	assign nxt[640-:4] = cur[1293-:4];
	assign nxt[636-:12] = cur[1289-:12];
	assign nxt[106-:14] = cur[661-:14];
	assign nxt[92] = cur[647];
	assign nxt[91-:12] = (cur[661] ? paddr_tag_from_tlb : cur[1257-:12]);
	assign nxt[79-:2] = cur[1277-:2];
	assign nxt[77-:6] = cur[1275-:6];
	assign nxt[7-:8] = cur[669-:8];
	assign nxt[71-:64] = cur[733-:64];
	std_dffr #(.WIDTH(1)) U_STG_VALID_REG_S2(
		.clk(clk),
		.rstn(rst),
		.d(s2_valid_nxt),
		.q(s2_valid)
	);
	std_dffe #(.WIDTH(645)) U_STG_DAT_REG_S2(
		.clk(clk),
		.en(s2_nxt_ena),
		.d(nxt[644-:645]),
		.q(cur[644-:645])
	);
endmodule
