module rvh_l1d_mlfb (
	clk,
	rstn,
	rob_flush_i,
	l1d_l2_rd_resp_valid,
	l1d_l2_rd_resp_ready,
	l1d_l2_rd_resp,
	mlfb_mshr_dealloc_valid,
	mlfb_mshr_dealloc_ready,
	mlfb_mshr_dealloc_idx,
	mlfb_mshr_head_rd_idx,
	mlfb_mshr_head_rd_mshr_entry,
	mlfb_mshr_head_rd_mshr_entry_no_resp,
	mlfb_mshr_peek_addr,
	mlfb_mshr_peek_addr_resp,
	mlfb_lru_peek_valid,
	mlfb_lru_peek_set_idx,
	mlfb_lru_peek_dat,
	mlfb_lst_peek_set_idx,
	mlfb_lst_peek_dat,
	mlfb_lst_peek_avail_way_idx,
	mlfb_lst_check_valid,
	mlfb_lst_check_set_idx,
	mlfb_lst_check_way_idx,
	mlfb_lst_check_ready,
	mlfb_cache_evict_req_valid,
	mlfb_cache_evict_req_ready,
	mlfb_cache_evict_req,
	mlfb_cache_refill_req_valid,
	mlfb_cache_refill_req_ready,
	mlfb_cache_refill_req,
	mlfb_fifo,
	sn_mlfb_en_i,
	sn_mlfb_ptr_i,
	sn_mlfb_data_o,
	sn_mlfb_change_mesi_en_i,
	sn_mlfb_change_ptr_i,
	sn_mlfb_change_mesi_i,
	s1_valid,
	s1_paddr,
	s2_valid,
	s2_paddr
);
	parameter ENTRY_NUM = 8;
	parameter ENTRY_IDX = $clog2(ENTRY_NUM);
	input wire clk;
	input wire rstn;
	input wire rob_flush_i;
	input wire l1d_l2_rd_resp_valid;
	output wire l1d_l2_rd_resp_ready;
	localparam rvh_l1d_pkg_MEM_DATA_WIDTH = 64;
	input wire [67:0] l1d_l2_rd_resp;
	output wire mlfb_mshr_dealloc_valid;
	input wire mlfb_mshr_dealloc_ready;
	localparam rvh_l1d_pkg_N_MSHR = 4;
	localparam rvh_l1d_pkg_N_MSHR_W = 2;
	output wire [1:0] mlfb_mshr_dealloc_idx;
	output wire [1:0] mlfb_mshr_head_rd_idx;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE = 512;
	localparam rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH = 6;
	localparam rvh_l1d_pkg_L1D_BANK_SET_NUM = 4;
	localparam rvh_l1d_pkg_L1D_BANK_SET_INDEX_WIDTH = 2;
	localparam rvh_l1d_pkg_PADDR_WIDTH = 20;
	localparam rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH = 12;
	localparam rvh_l1d_pkg_L1D_BANK_WAY_NUM = 4;
	localparam rvh_l1d_pkg_L1D_BANK_WAY_INDEX_WIDTH = 2;
	localparam rvh_l1d_pkg_L1D_STB_DATA_WIDTH = 512;
	localparam rvh_l1d_pkg_PREG_TAG_WIDTH = 4;
	localparam rvh_l1d_pkg_ROB_TAG_WIDTH = 4;
	localparam rvh_l1d_pkg_RRV64_LSU_ID_WIDTH = 12;
	input wire [639:0] mlfb_mshr_head_rd_mshr_entry;
	input wire mlfb_mshr_head_rd_mshr_entry_no_resp;
	output wire [1:0] mlfb_mshr_peek_addr;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE = 14;
	input wire [13:0] mlfb_mshr_peek_addr_resp;
	output wire mlfb_lru_peek_valid;
	output wire [1:0] mlfb_lru_peek_set_idx;
	input [1:0] mlfb_lru_peek_dat;
	output wire [1:0] mlfb_lst_peek_set_idx;
	input wire [7:0] mlfb_lst_peek_dat;
	input [1:0] mlfb_lst_peek_avail_way_idx;
	output wire mlfb_lst_check_valid;
	output wire [1:0] mlfb_lst_check_set_idx;
	output wire [1:0] mlfb_lst_check_way_idx;
	input mlfb_lst_check_ready;
	output wire mlfb_cache_evict_req_valid;
	input wire mlfb_cache_evict_req_ready;
	output wire [5:0] mlfb_cache_evict_req;
	output wire mlfb_cache_refill_req_valid;
	input wire mlfb_cache_refill_req_ready;
	output wire [574:0] mlfb_cache_refill_req;
	output reg [(ENTRY_NUM * 19) - 1:0] mlfb_fifo;
	input sn_mlfb_en_i;
	input [1:0] sn_mlfb_ptr_i;
	output wire [511:0] sn_mlfb_data_o;
	input wire sn_mlfb_change_mesi_en_i;
	localparam rvh_l1d_pkg_N_EWRQ = rvh_l1d_pkg_N_MSHR;
	input [1:0] sn_mlfb_change_ptr_i;
	input [1:0] sn_mlfb_change_mesi_i;
	input s1_valid;
	input wire [19:0] s1_paddr;
	input s2_valid;
	input wire [19:0] s2_paddr;
	localparam rvh_l1d_pkg_BURST_SIZE = 8;
	wire [2:0] line_seg_wr_cnt;
	wire [2:0] line_seg_wr_cnt_nxt;
	wire line_seg_wr_cnt_ena;
	wire [7:0] line_seg_wr_ena;
	wire [ENTRY_NUM - 1:0] mlfb_mshr_info_set;
	wire [(ENTRY_NUM * 2) - 1:0] mlfb_mshr_idx_nxt;
	wire [(ENTRY_NUM * 2) - 1:0] mlfb_mshr_idx;
	wire [ENTRY_NUM - 1:0] mlfb_err_nxt;
	wire [ENTRY_NUM - 1:0] mlfb_err;
	wire [(ENTRY_NUM * 2) - 1:0] mlfb_mesi_sta_nxt;
	wire [(ENTRY_NUM * 2) - 1:0] mlfb_mesi_sta;
	wire [7:0] fifo_head_valid;
	wire [511:0] head_seg_dat;
	wire [511:0] head_full_dat;
	wire [(8 * ENTRY_IDX) - 1:0] tail_idx;
	wire [(8 * ENTRY_IDX) - 1:0] head_idx;
	wire [1162:0] head_buf;
	wire head_buf_valid_set;
	wire head_buf_valid_clr;
	wire head_buf_valid_ena;
	wire head_buf_valid_nxt;
	wire head_buf_valid;
	wire head_buf_peek_done_set;
	wire head_buf_peek_done_clr;
	wire head_buf_peek_done_ena;
	wire head_buf_peek_done_nxt;
	wire head_buf_peek_done;
	wire head_buf_evict_done_set;
	wire head_buf_evict_done_clr;
	wire head_buf_evict_done_ena;
	wire head_buf_evict_done_nxt;
	wire head_buf_evict_done;
	wire head_buf_check_done_set;
	wire head_buf_check_done_clr;
	wire head_buf_check_done_ena;
	wire head_buf_check_done_nxt;
	wire head_buf_check_done;
	wire head_buf_refill_done_set;
	wire head_buf_refill_done_clr;
	wire head_buf_refill_done_ena;
	wire head_buf_refill_done_nxt;
	wire head_buf_refill_done;
	wire [511:0] mlfb_refill_dat_tmp;
	wire [511:0] mlfb_refill_dat_tmp_bit_mask;
	wire head_buf_lsu_resp_done_set;
	wire head_buf_lsu_resp_done_clr;
	wire head_buf_lsu_resp_done_ena;
	wire head_buf_lsu_resp_done_nxt;
	wire head_buf_lsu_resp_done;
	wire head_buf_stb_dat_done_set;
	wire head_buf_stb_dat_done_clr;
	wire head_buf_stb_dat_done_ena;
	wire head_buf_stb_dat_done_nxt;
	wire head_buf_stb_dat_done;
	wire [511:0] head_buf_line_dat_nxt;
	wire [1:0] head_buf_mshr_idx_nxt;
	wire head_buf_err_nxt;
	wire [1:0] head_buf_mesi_sta_nxt;
	wire [13:0] head_buf_lsu_req_type_dec_nxt;
	wire head_buf_l2_hit_nxt;
	wire [19:0] head_buf_paddr_nxt;
	wire [3:0] head_buf_rob_tag_nxt;
	wire [3:0] head_buf_prd_nxt;
	wire [11:0] head_buf_lsu_tag_nxt;
	wire [511:0] head_buf_st_dat_nxt;
	wire [63:0] head_buf_st_data_byte_mask_nxt;
	wire [13:0] head_buf_req_type_dec_nxt;
	wire head_buf_no_resp_nxt;
	wire head_buf_stb_alloc_nxt;
	wire [1:0] head_buf_victim_way_idx_nxt;
	wire [1:0] head_buf_victim_way_idx;
	wire head_buf_victim_set_full_nxt;
	wire head_buf_victim_set_full;
	wire head_buf_victim_way_clean_nxt;
	wire head_buf_victim_way_clean;
	wire [1:0] head_buf_avail_way_idx_nxt;
	wire [1:0] head_buf_avail_way_idx;
	wire [3:0] lst_peek_valid_way;
	wire mlfb_cache_peek_valid;
	wire mlfb_cache_check_valid;
	wire mlfb_cache_evict_valid;
	wire mlfb_cache_evict_bypass;
	wire mlfb_cache_refill_valid;
	wire mlfb_cache_peek_req_hsk;
	wire mlfb_cache_evict_req_hsk;
	wire mlfb_cache_refill_req_hsk;
	wire mlfb_cache_lsu_resp_hsk;
	wire op_b;
	wire op_hw;
	wire op_w;
	wire op_dw;
	wire ld_u;
	wire [5:0] line_offset;
	wire mlfb_pipe_same_addr_haz;
	wire [(ENTRY_NUM * 14) - 1:0] mlfb_fifo_addr_nxt;
	wire [(ENTRY_NUM * 14) - 1:0] mlfb_fifo_addr;
	wire clk_mlfb;
	wire clk_mlfb_en;
	assign clk_mlfb_en = l1d_l2_rd_resp_valid | head_buf_valid_set;
	localparam [0:0] sv2v_uu_U_ICG_MLFB_ext_clk_senable_i_0 = 1'sb0;
	rrv64_cell_clkgate U_ICG_MLFB(
		.clk_i(clk),
		.clk_enable_i(clk_mlfb_en),
		.clk_senable_i(sv2v_uu_U_ICG_MLFB_ext_clk_senable_i_0),
		.clk_gated_o(clk_mlfb)
	);
	wire [13:0] head_buf_paddr_lineaddr;
	wire [1:0] head_buf_paddr_idx;
	wire [11:0] head_buf_paddr_tag;
	wire [5:0] head_buf_paddr_offset;
	assign head_buf_paddr_lineaddr = head_buf[1156:1143];
	assign head_buf_paddr_idx = head_buf[1144:1143];
	assign head_buf_paddr_tag = head_buf[1156-:rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH];
	assign head_buf_paddr_offset = head_buf[1142:1137];
	localparam rvh_l1d_pkg_N_MLFB = rvh_l1d_pkg_N_MSHR;
	reg [1:0] check_entry;
	always @(*)
		if (sn_mlfb_en_i)
			check_entry = sn_mlfb_ptr_i;
	wire [511:0] check_data;
	assign line_seg_wr_cnt_ena = l1d_l2_rd_resp_valid;
	assign line_seg_wr_cnt_nxt = line_seg_wr_cnt + 1'b1;
	std_dffre #(.WIDTH(3)) U_STA_REG_LINE_SEG_RECEIVED(
		.clk(clk),
		.rstn(rstn),
		.en(line_seg_wr_cnt_ena),
		.d(line_seg_wr_cnt_nxt),
		.q(line_seg_wr_cnt)
	);
	genvar ii;
	generate
		for (ii = 0; ii < rvh_l1d_pkg_BURST_SIZE; ii = ii + 1) begin : GEN_MLFB_DATA_SEG
			assign line_seg_wr_ena[ii] = l1d_l2_rd_resp_valid & (line_seg_wr_cnt == ii);
			mp_fifo_ptr_output_29953 #(
				.ENQUEUE_WIDTH(1),
				.DEQUEUE_WIDTH(1),
				.DEPTH(ENTRY_NUM),
				.MUST_TAKEN_ALL(1)
			) U_RRV64_L1D_MLFB_DATA_SEG_FIFO(
				.enqueue_vld_i(line_seg_wr_ena[ii]),
				.enqueue_payload_i(l1d_l2_rd_resp[65-:64]),
				.dequeue_vld_o(fifo_head_valid[ii]),
				.dequeue_payload_o(head_seg_dat[ii * 64+:64]),
				.dequeue_rdy_i(head_buf_valid_set),
				.check_entry_i(check_entry),
				.check_data_o(check_data[ii * 64+:64]),
				.enq_ptr_o(tail_idx[ii * ENTRY_IDX+:ENTRY_IDX]),
				.deq_ptr_o(head_idx[ii * ENTRY_IDX+:ENTRY_IDX]),
				.flush_i(1'b0),
				.clk(clk_mlfb),
				.rst(~rstn)
			);
			assign head_full_dat[rvh_l1d_pkg_MEM_DATA_WIDTH * ii+:rvh_l1d_pkg_MEM_DATA_WIDTH] = head_seg_dat[ii * 64+:64];
			assign sn_mlfb_data_o[rvh_l1d_pkg_MEM_DATA_WIDTH * ii+:rvh_l1d_pkg_MEM_DATA_WIDTH] = check_data[ii * 64+:64];
		end
	endgenerate
	wire [ENTRY_NUM - 1:0] sn_mlfb_set;
	assign mlfb_mshr_peek_addr = l1d_l2_rd_resp[67-:2];
	genvar jj;
	generate
		for (jj = 0; jj < ENTRY_NUM; jj = jj + 1) begin : GEN_MLFB_ENTRY
			assign mlfb_mshr_info_set[jj] = line_seg_wr_ena[0] & (jj == tail_idx[0+:ENTRY_IDX]);
			assign sn_mlfb_set[jj] = sn_mlfb_change_mesi_en_i & (jj == sn_mlfb_change_ptr_i);
			assign mlfb_mshr_idx_nxt[jj * 2+:2] = l1d_l2_rd_resp[67-:2];
			assign mlfb_fifo_addr_nxt[jj * 14+:14] = mlfb_mshr_peek_addr_resp;
			assign mlfb_mesi_sta_nxt[jj * 2+:2] = (sn_mlfb_change_mesi_en_i ? sn_mlfb_change_mesi_i : l1d_l2_rd_resp[1-:2]);
			std_dffe #(.WIDTH(rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE)) U_MLFB_VALID(
				.clk(clk),
				.en(mlfb_mshr_info_set[jj]),
				.d(mlfb_fifo_addr_nxt[jj * 14+:14]),
				.q(mlfb_fifo_addr[jj * 14+:14])
			);
			std_dffe #(.WIDTH(rvh_l1d_pkg_N_MSHR_W)) U_DAT_REG_MSHR_IDX(
				.clk(clk),
				.en(mlfb_mshr_info_set[jj]),
				.d(mlfb_mshr_idx_nxt[jj * 2+:2]),
				.q(mlfb_mshr_idx[jj * 2+:2])
			);
			std_dffe #(.WIDTH(2)) U_DAT_REG_MESI_STA(
				.clk(clk),
				.en(mlfb_mshr_info_set[jj] | sn_mlfb_set[jj]),
				.d(mlfb_mesi_sta_nxt[jj * 2+:2]),
				.q(mlfb_mesi_sta[jj * 2+:2])
			);
			wire [2:1] sv2v_tmp_F2DC0;
			assign sv2v_tmp_F2DC0 = mlfb_mshr_idx[jj * 2+:2];
			always @(*) mlfb_fifo[(jj * 19) + 18-:2] = sv2v_tmp_F2DC0;
			wire [14:1] sv2v_tmp_3EE22;
			assign sv2v_tmp_3EE22 = mlfb_fifo_addr[jj * 14+:14];
			always @(*) mlfb_fifo[(jj * 19) + 13-:rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE] = sv2v_tmp_3EE22;
			wire [2:1] sv2v_tmp_CB5DB;
			assign sv2v_tmp_CB5DB = mlfb_mesi_sta[jj * 2+:2];
			always @(*) mlfb_fifo[(jj * 19) + 16-:2] = sv2v_tmp_CB5DB;
		end
	endgenerate
	always @(*) begin
		if (line_seg_wr_ena[0])
			mlfb_fifo[(tail_idx[0+:ENTRY_IDX] * 19) + 14] = 1'b1;
		if (head_buf_valid_clr)
			mlfb_fifo[(head_idx[0+:ENTRY_IDX] * 19) + 14] = 1'b0;
	end
	assign head_buf_valid_set = (&fifo_head_valid & (~head_buf_valid | head_buf_valid_clr)) & ~rob_flush_i;
	assign head_buf_valid_clr = (head_buf[1162] & head_buf[1113]) & mlfb_mshr_dealloc_ready;
	assign head_buf_valid_ena = head_buf_valid_set | head_buf_valid_clr;
	assign head_buf_valid_nxt = (head_buf_valid_set ? 1'b1 : ~head_buf_valid_clr);
	std_dffre #(.WIDTH(1)) U_STA_REG_HEAD_BUF_VALID(
		.clk(clk),
		.rstn(rstn),
		.en(head_buf_valid_ena),
		.d(head_buf_valid_nxt),
		.q(head_buf_valid)
	);
	assign head_buf[1162] = head_buf_valid;
	assign head_buf_line_dat_nxt = head_full_dat;
	assign head_buf_mshr_idx_nxt = mlfb_fifo[(head_idx[0+:ENTRY_IDX] * 19) + 18-:2];
	assign head_buf_mesi_sta_nxt = mlfb_fifo[(head_idx[0+:ENTRY_IDX] * 19) + 16-:2];
	assign head_buf_paddr_nxt = {mlfb_mshr_head_rd_mshr_entry[616-:12], mlfb_mshr_head_rd_mshr_entry[604-:2], mlfb_mshr_head_rd_mshr_entry[602-:6]};
	assign head_buf_rob_tag_nxt = mlfb_mshr_head_rd_mshr_entry[639-:4];
	assign head_buf_prd_nxt = mlfb_mshr_head_rd_mshr_entry[635-:4];
	assign head_buf_lsu_tag_nxt = mlfb_mshr_head_rd_mshr_entry[631-:12];
	assign head_buf_st_dat_nxt = mlfb_mshr_head_rd_mshr_entry[594-:512];
	assign head_buf_st_data_byte_mask_nxt = mlfb_mshr_head_rd_mshr_entry[82-:64];
	assign head_buf_req_type_dec_nxt = mlfb_mshr_head_rd_mshr_entry[18-:14];
	assign head_buf_no_resp_nxt = mlfb_mshr_head_rd_mshr_entry_no_resp | rob_flush_i;
	generate
		for (ii = 0; ii < 64; ii = ii + 1) begin : genblk3
			assign mlfb_refill_dat_tmp_bit_mask[ii * 8+:8] = {8 {head_buf[25 + ii]}};
		end
	endgenerate
	assign mlfb_refill_dat_tmp = (head_buf[22] ? (head_buf[1112-:512] & ~mlfb_refill_dat_tmp_bit_mask) | (head_buf[600-:512] & mlfb_refill_dat_tmp_bit_mask) : head_buf[1112-:512]);
	std_dffe #(.WIDTH(rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE)) U_DAT_REG_HEAD_BUF_LINE_DAT(
		.clk(clk),
		.en(head_buf_valid_set),
		.d(head_buf_line_dat_nxt),
		.q(head_buf[1112-:512])
	);
	std_dffe #(.WIDTH(rvh_l1d_pkg_N_MSHR_W)) U_DAT_REG_HEAD_BUF_MSHR_IDX(
		.clk(clk),
		.en(head_buf_valid_set),
		.d(head_buf_mshr_idx_nxt),
		.q(head_buf[1161-:2])
	);
	std_dffe #(.WIDTH(2)) U_DAT_REG_MESI_STA(
		.clk(clk),
		.en(head_buf_valid_set),
		.d(head_buf_mesi_sta_nxt),
		.q(head_buf[1158-:2])
	);
	std_dffe #(.WIDTH(20)) U_DAT_REG_HEAD_BUF_PADDR(
		.clk(clk),
		.en(head_buf_valid_set),
		.d(head_buf_paddr_nxt),
		.q(head_buf[1156-:20])
	);
	std_dffe #(.WIDTH(4)) U_DAT_REG_HEAD_BUF_ROB_TAG(
		.clk(clk),
		.en(head_buf_valid_set),
		.d(head_buf_rob_tag_nxt),
		.q(head_buf[1136-:4])
	);
	std_dffe #(.WIDTH(4)) U_DAT_REG_HEAD_BUF_PRD(
		.clk(clk),
		.en(head_buf_valid_set),
		.d(head_buf_prd_nxt),
		.q(head_buf[1132-:4])
	);
	std_dffe #(.WIDTH(12)) U_DAT_REG_HEAD_BUF_LSU_TAG(
		.clk(clk),
		.en(head_buf_valid_set),
		.d(head_buf_lsu_tag_nxt),
		.q(head_buf[1128-:12])
	);
	std_dffe #(.WIDTH(rvh_l1d_pkg_L1D_STB_DATA_WIDTH)) U_DAT_REG_HEAD_BUF_ST_DATA(
		.clk(clk),
		.en(head_buf_valid_set & head_buf_req_type_dec_nxt[11]),
		.d(head_buf_st_dat_nxt),
		.q(head_buf[600-:512])
	);
	std_dffe #(.WIDTH(64)) U_DAT_REG_HEAD_BUF_ST_DATA_BYTE_MASK(
		.clk(clk),
		.en(head_buf_valid_set & head_buf_req_type_dec_nxt[11]),
		.d(head_buf_st_data_byte_mask_nxt),
		.q(head_buf[88-:64])
	);
	std_dffe #(.WIDTH(14)) U_DAT_REG_HEAD_BUF_REQ_TYPE(
		.clk(clk),
		.en(head_buf_valid_set),
		.d(head_buf_req_type_dec_nxt),
		.q(head_buf[24-:14])
	);
	std_dffe #(.WIDTH(1)) U_DAT_REG_HEAD_BUF_NO_RESP(
		.clk(clk),
		.en(head_buf_valid_set | rob_flush_i),
		.d(head_buf_no_resp_nxt),
		.q(head_buf[0])
	);
	assign mlfb_pipe_same_addr_haz = (s1_valid & (s1_paddr[19:rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH] == head_buf_paddr_lineaddr)) | (s2_valid & (s2_paddr[19:rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH] == head_buf_paddr_lineaddr));
	assign head_buf_peek_done_set = mlfb_cache_peek_valid;
	assign head_buf_peek_done_clr = head_buf_valid_clr;
	assign head_buf_peek_done_ena = head_buf_peek_done_set | head_buf_peek_done_clr;
	assign head_buf_peek_done_nxt = head_buf_peek_done_set & ~head_buf_peek_done_clr;
	std_dffre #(.WIDTH(1)) U_STA_REG_PEEK_DONE(
		.clk(clk),
		.rstn(rstn),
		.en(head_buf_peek_done_ena),
		.d(head_buf_peek_done_nxt),
		.q(head_buf_peek_done)
	);
	assign head_buf[1116] = head_buf_peek_done;
	genvar kk;
	generate
		for (kk = 0; kk < rvh_l1d_pkg_L1D_BANK_WAY_NUM; kk = kk + 1) begin : GEN_MLFB_LST_PEEK_STA
			assign lst_peek_valid_way[kk] = mlfb_lst_peek_dat[0 + (kk * 2)+:2] != 2'd0;
		end
	endgenerate
	assign head_buf_avail_way_idx_nxt = mlfb_lst_peek_avail_way_idx;
	assign head_buf_victim_way_idx_nxt = mlfb_lru_peek_dat;
	assign head_buf_victim_set_full_nxt = &lst_peek_valid_way;
	assign head_buf_victim_way_clean_nxt = mlfb_lst_peek_dat[0 + (mlfb_lru_peek_dat * 2)+:2] != 2'd0;
	std_dffe #(.WIDTH(rvh_l1d_pkg_L1D_BANK_WAY_INDEX_WIDTH)) U_STA_REG_PEEK_AVAIL(
		.clk(clk),
		.en(head_buf_peek_done_set),
		.d(head_buf_avail_way_idx_nxt),
		.q(head_buf_avail_way_idx)
	);
	std_dffe #(.WIDTH(rvh_l1d_pkg_L1D_BANK_WAY_INDEX_WIDTH)) U_STA_REG_PEEK_VICTIM(
		.clk(clk),
		.en(head_buf_peek_done_set),
		.d(head_buf_victim_way_idx_nxt),
		.q(head_buf_victim_way_idx)
	);
	std_dffe #(.WIDTH(1)) U_STA_REG_PEEK_SET_FULL(
		.clk(clk),
		.en(head_buf_peek_done_set),
		.d(head_buf_victim_set_full_nxt),
		.q(head_buf_victim_set_full)
	);
	std_dffe #(.WIDTH(1)) U_STA_REG_PEEK_WAY_CLEAN(
		.clk(clk),
		.en(head_buf_peek_done_set),
		.d(head_buf_victim_way_clean_nxt),
		.q(head_buf_victim_way_clean)
	);
	assign head_buf[2] = head_buf_victim_set_full;
	assign head_buf[6-:4] = head_buf_victim_way_idx;
	assign head_buf[10-:4] = head_buf_avail_way_idx;
	assign head_buf[1] = head_buf_victim_way_clean;
	assign head_buf_check_done_set = mlfb_cache_check_valid & |mlfb_lst_check_ready;
	assign head_buf_check_done_clr = head_buf_valid_clr;
	assign head_buf_check_done_ena = head_buf_check_done_set | head_buf_check_done_clr;
	assign head_buf_check_done_nxt = head_buf_check_done_set & ~head_buf_check_done_clr;
	std_dffre #(.WIDTH(1)) U_STA_REG_CHECK_DONE(
		.clk(clk),
		.rstn(rstn),
		.en(head_buf_check_done_ena),
		.d(head_buf_check_done_nxt),
		.q(head_buf_check_done)
	);
	assign head_buf[1115] = head_buf_check_done;
	assign head_buf_evict_done_set = mlfb_cache_evict_req_hsk | mlfb_cache_evict_bypass;
	assign head_buf_evict_done_clr = head_buf_valid_clr;
	assign head_buf_evict_done_ena = head_buf_evict_done_set | head_buf_evict_done_clr;
	assign head_buf_evict_done_nxt = head_buf_evict_done_set & ~head_buf_evict_done_clr;
	std_dffre #(.WIDTH(1)) U_STA_REG_EVICT_DONE(
		.clk(clk),
		.rstn(rstn),
		.en(head_buf_evict_done_ena),
		.d(head_buf_evict_done_nxt),
		.q(head_buf_evict_done)
	);
	assign head_buf[1114] = head_buf_evict_done;
	assign head_buf_refill_done_set = mlfb_cache_refill_req_hsk;
	assign head_buf_refill_done_clr = head_buf_valid_clr;
	assign head_buf_refill_done_ena = head_buf_refill_done_set | head_buf_refill_done_clr;
	assign head_buf_refill_done_nxt = head_buf_refill_done_set & ~head_buf_refill_done_clr;
	std_dffre #(.WIDTH(1)) U_STA_REG_REFILL_DONE(
		.clk(clk),
		.rstn(rstn),
		.en(head_buf_refill_done_ena),
		.d(head_buf_refill_done_nxt),
		.q(head_buf_refill_done)
	);
	assign head_buf[1113] = head_buf_refill_done;
	assign mlfb_mshr_dealloc_valid = head_buf_valid_clr;
	assign mlfb_mshr_dealloc_idx = head_buf[1161-:2];
	assign mlfb_mshr_head_rd_idx = mlfb_fifo[(head_idx[0+:ENTRY_IDX] * 19) + 18-:2];
	assign mlfb_cache_peek_valid = head_buf[1162] & ~head_buf[1116];
	assign mlfb_cache_check_valid = (head_buf[1162] & head_buf[1116]) & ~head_buf[1115];
	assign mlfb_cache_evict_valid = (((head_buf[1162] & head_buf[1115]) & ~head_buf[1114]) & head_buf[2]) & head_buf[1];
	assign mlfb_cache_evict_bypass = ((head_buf[1162] & head_buf[1115]) & ~head_buf[1114]) & (~head_buf[2] | ~head_buf[1]);
	assign mlfb_cache_refill_valid = ((head_buf[1162] & head_buf[1114]) & ~head_buf[1113]) & ~mlfb_pipe_same_addr_haz;
	assign mlfb_lru_peek_set_idx = head_buf_paddr_idx;
	assign mlfb_lst_peek_set_idx = head_buf_paddr_idx;
	assign mlfb_lst_check_set_idx = head_buf_paddr_idx;
	assign mlfb_lst_check_way_idx = (head_buf[2] ? head_buf[6-:4] : head_buf[10-:4]);
	assign mlfb_cache_evict_req_hsk = mlfb_cache_evict_req_valid & mlfb_cache_evict_req_ready;
	assign mlfb_cache_evict_req[5-:2] = head_buf_paddr_idx;
	assign mlfb_cache_evict_req[3-:rvh_l1d_pkg_L1D_BANK_WAY_NUM] = head_buf[6-:4];
	assign mlfb_cache_refill_req_hsk = mlfb_cache_refill_req_valid & mlfb_cache_refill_req_ready;
	assign mlfb_cache_refill_req[50-:2] = head_buf_paddr_idx;
	assign mlfb_cache_refill_req[48-:4] = (head_buf[2] ? head_buf[6-:4] : head_buf[10-:4]);
	assign mlfb_cache_refill_req[574-:12] = head_buf_paddr_tag;
	assign mlfb_cache_refill_req[562-:512] = mlfb_refill_dat_tmp;
	assign mlfb_cache_refill_req[44-:2] = head_buf[1158-:2];
	assign mlfb_cache_refill_req[42] = head_buf[17];
	assign mlfb_cache_refill_req[41] = head_buf[24];
	assign mlfb_cache_refill_req[40-:6] = head_buf_paddr_offset;
	assign mlfb_cache_refill_req[34-:4] = head_buf[1136-:4];
	assign mlfb_cache_refill_req[30-:4] = head_buf[1132-:4];
	assign mlfb_cache_refill_req[26-:12] = head_buf[1128-:12];
	assign mlfb_cache_refill_req[14-:14] = head_buf[24-:14];
	assign mlfb_cache_refill_req[0] = head_buf[0];
	assign mlfb_lru_peek_valid = mlfb_cache_peek_valid;
	assign mlfb_lst_check_valid = mlfb_cache_check_valid;
	assign mlfb_cache_evict_req_valid = mlfb_cache_evict_valid;
	assign mlfb_cache_refill_req_valid = mlfb_cache_refill_valid;
	assign l1d_l2_rd_resp_ready = 1'b1;
	wire mlfb_head_buf_valid;
	assign mlfb_head_buf_valid = head_buf_valid;
endmodule
