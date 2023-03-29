module snoop (
	clk,
	rstn,
	sn_req,
	sn_req_hsk,
	sn_empty,
	sn_resp_valid_o,
	sn_resp_ready_i,
	sn_resp,
	sn_peek_lst_o,
	sn_peek_lst_resp_i,
	sn_peek_tram_o,
	sn_peek_tram_resp_i,
	sn_ewrq_addr_i,
	sn_ewrq_vld_i,
	sn_ewrq_en_o,
	sn_ewrq_ptr_o,
	sn_ewrq_data_i,
	mlfb_i,
	sn_mlfb_en_o,
	sn_mlfb_ptr_o,
	sn_mlfb_data_i,
	sn_peek_dram_en_o,
	sn_peek_dram_index_o,
	sn_peek_dram_way_o,
	sn_peek_dram_resp_i,
	sn_change_lst_en_o,
	sn_change_lst_set_o,
	sn_change_lst_way_o,
	sn_change_lst_type_o,
	sn_ewrq_change_mesi_en_o,
	sn_ewrq_change_ptr_o,
	sn_ewrq_change_mesi_o,
	sn_mlfb_change_mesi_en_o,
	sn_mlfb_change_ptr_o,
	sn_mlfb_change_mesi_o,
	mshr_addr_i,
	mshr_addr_valid_i
);
	input clk;
	input rstn;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE = 512;
	localparam rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH = 6;
	localparam rvh_l1d_pkg_PADDR_WIDTH = 20;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE = 14;
	input wire [17:0] sn_req;
	input sn_req_hsk;
	output wire sn_empty;
	output reg sn_resp_valid_o;
	input wire sn_resp_ready_i;
	localparam rvh_l1d_pkg_MEM_DATA_WIDTH = 64;
	output reg [65:0] sn_resp;
	localparam rvh_l1d_pkg_L1D_BANK_SET_NUM = 4;
	localparam rvh_l1d_pkg_L1D_BANK_SET_INDEX_WIDTH = 2;
	output wire [1:0] sn_peek_lst_o;
	localparam rvh_l1d_pkg_L1D_BANK_WAY_NUM = 4;
	input wire [7:0] sn_peek_lst_resp_i;
	output wire [1:0] sn_peek_tram_o;
	localparam rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH = 12;
	input wire [47:0] sn_peek_tram_resp_i;
	localparam rvh_l1d_pkg_N_MSHR = 4;
	localparam rvh_l1d_pkg_N_EWRQ = rvh_l1d_pkg_N_MSHR;
	input wire [63:0] sn_ewrq_addr_i;
	input wire [3:0] sn_ewrq_vld_i;
	output wire sn_ewrq_en_o;
	output wire [1:0] sn_ewrq_ptr_o;
	input wire [511:0] sn_ewrq_data_i;
	localparam rvh_l1d_pkg_N_MSHR_W = 2;
	input wire [75:0] mlfb_i;
	output wire sn_mlfb_en_o;
	output wire [1:0] sn_mlfb_ptr_o;
	input wire [511:0] sn_mlfb_data_i;
	output wire sn_peek_dram_en_o;
	output wire [1:0] sn_peek_dram_index_o;
	localparam rvh_l1d_pkg_L1D_BANK_WAY_INDEX_WIDTH = 2;
	output wire [1:0] sn_peek_dram_way_o;
	input wire [511:0] sn_peek_dram_resp_i;
	output wire sn_change_lst_en_o;
	output wire [1:0] sn_change_lst_set_o;
	output reg [1:0] sn_change_lst_way_o;
	output wire [1:0] sn_change_lst_type_o;
	output wire sn_ewrq_change_mesi_en_o;
	output wire [1:0] sn_ewrq_change_ptr_o;
	output wire [1:0] sn_ewrq_change_mesi_o;
	output wire sn_mlfb_change_mesi_en_o;
	output wire [1:0] sn_mlfb_change_ptr_o;
	output wire [1:0] sn_mlfb_change_mesi_o;
	input [55:0] mshr_addr_i;
	input [0:3] mshr_addr_valid_i;
	wire sn_req_hsk_ff;
	wire sn_req_hsk_ff_ff;
	wire [3:0] sn_way;
	reg [7:0] sn_peek_lst_resp_save;
	reg [17:0] sn_req_save;
	reg resp_has_data;
	reg [2:0] cnt_d;
	reg [2:0] cnt_q;
	reg [1:0] ewrq_hit_idx;
	reg [1:0] mlfb_hit_idx;
	reg [511:0] sn_resp_data;
	reg [47:0] sn_peek_tram_resp_save;
	reg ewrq_hit;
	reg mlfb_hit;
	reg sn_empty_d;
	reg sn_empty_q;
	reg mshr_hit;
	always @(*) begin
		if (sn_req_hsk)
			sn_peek_lst_resp_save = sn_peek_lst_resp_i;
		if (sn_req_hsk_ff)
			sn_peek_tram_resp_save = sn_peek_tram_resp_i;
		if (sn_req_hsk)
			sn_req_save = sn_req;
	end
	always @(*) begin
		if (ewrq_hit & sn_req_hsk)
			sn_resp_data = sn_ewrq_data_i;
		if ((~ewrq_hit & ~mlfb_hit) & sn_req_hsk_ff_ff)
			sn_resp_data = sn_peek_dram_resp_i;
		if (mlfb_hit & sn_req_hsk)
			sn_resp_data = sn_mlfb_data_i;
	end
	std_dffr #(.WIDTH(1)) U_SN_REQ_HSK(
		.clk(clk),
		.rstn(rstn),
		.d(sn_req_hsk),
		.q(sn_req_hsk_ff)
	);
	std_dffr #(.WIDTH(1)) U_SN_REQ_HSK_FF(
		.clk(clk),
		.rstn(rstn),
		.d(sn_req_hsk_ff),
		.q(sn_req_hsk_ff_ff)
	);
	assign sn_peek_lst_o = (sn_req_hsk ? sn_req[5:4] : {2 {1'sb0}});
	assign sn_peek_tram_o = (sn_req_hsk ? sn_req[5:4] : {2 {1'sb0}});
	always @(*)
		if (sn_req_hsk) begin
			mshr_hit = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < rvh_l1d_pkg_N_MSHR; i = i + 1)
					if (((sn_req_save[3-:4] == 4'd11) & (mshr_addr_i[i * 14+:14] == sn_req_save[17-:14])) & mshr_addr_valid_i[i])
						mshr_hit = 1'b1;
			end
		end
	always @(*)
		if (sn_req_hsk) begin
			ewrq_hit_idx = 1'sb0;
			ewrq_hit = 0;
			begin : sv2v_autoblock_2
				reg signed [31:0] i;
				for (i = 0; i < rvh_l1d_pkg_N_EWRQ; i = i + 1)
					if ((sn_ewrq_addr_i[(i * 16) + 13-:14] == sn_req_save[17-:14]) & sn_ewrq_vld_i[i]) begin
						ewrq_hit_idx = i[1:0];
						ewrq_hit = 1'b1;
					end
			end
		end
	assign sn_ewrq_en_o = ewrq_hit & sn_req_hsk;
	assign sn_ewrq_ptr_o = ewrq_hit_idx;
	always @(*)
		if (sn_req_hsk) begin
			mlfb_hit_idx = 1'sb0;
			mlfb_hit = 0;
			begin : sv2v_autoblock_3
				reg signed [31:0] i;
				for (i = 0; i < rvh_l1d_pkg_N_MSHR; i = i + 1)
					if (mlfb_i[(i * 19) + 14] & (mlfb_i[(i * 19) + 13-:rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE] == sn_req_save[17-:14])) begin
						mlfb_hit_idx = i[1:0];
						mlfb_hit = 1'b1;
					end
			end
		end
	assign sn_mlfb_en_o = mlfb_hit & sn_req_hsk;
	assign sn_mlfb_ptr_o = mlfb_hit_idx;
	genvar i;
	generate
		for (i = 0; i < rvh_l1d_pkg_L1D_BANK_WAY_NUM; i = i + 1) begin : genblk1
			assign sn_way[i] = sn_peek_tram_resp_save[i * 12+:12] == sn_req_save[17:6];
		end
	endgenerate
	reg ok;
	always @(posedge clk) begin
		if (~rstn)
			ok = 1'b0;
		if (sn_req_hsk_ff) begin
			ok = 1'b0;
			begin : sv2v_autoblock_4
				reg signed [31:0] i;
				for (i = 0; i < rvh_l1d_pkg_L1D_BANK_WAY_NUM; i = i + 1)
					if (sn_peek_tram_resp_save[i * 12+:12] == sn_req_save[17:6])
						ok = 1'b1;
			end
			// if ((((ok == 1'b0) & ~mlfb_hit) & ~ewrq_hit) & ~mshr_hit)
				// $finish;
		end
	end
	always @(*) begin
		sn_change_lst_way_o = 1'sb0;
		begin : sv2v_autoblock_5
			reg signed [31:0] i;
			for (i = 0; i < rvh_l1d_pkg_L1D_BANK_WAY_NUM; i = i + 1)
				if (sn_way[i] == 1'b1)
					sn_change_lst_way_o = i[1:0];
		end
	end
	assign sn_change_lst_en_o = ((~ewrq_hit & sn_req_hsk_ff) & ~mlfb_hit) & ~mshr_hit;
	assign sn_change_lst_set_o = sn_req_save[5:4];
	assign sn_change_lst_type_o = (sn_req_save[3-:4] == 4'd8 ? 2'd1 : (sn_req_save[3-:4] == 4'd11 ? 2'd2 : 2'd0));
	assign sn_ewrq_change_mesi_en_o = sn_req_hsk_ff & ewrq_hit;
	assign sn_ewrq_change_ptr_o = ewrq_hit_idx;
	assign sn_ewrq_change_mesi_o = sn_change_lst_type_o;
	assign sn_mlfb_change_mesi_en_o = sn_req_hsk_ff & mlfb_hit;
	assign sn_mlfb_change_ptr_o = mlfb_hit_idx;
	assign sn_mlfb_change_mesi_o = sn_change_lst_type_o;
	assign sn_peek_dram_index_o = sn_change_lst_set_o;
	assign sn_peek_dram_way_o = sn_change_lst_way_o;
	assign sn_peek_dram_en_o = ((~ewrq_hit & sn_req_hsk_ff) & ~mlfb_hit) & ~mshr_hit;
	always @(*) begin
		if (sn_req_hsk) begin
			resp_has_data = 0;
			if (ewrq_hit)
				resp_has_data = ((sn_req_save[3-:4] == 4'd8) & (sn_ewrq_addr_i[(ewrq_hit_idx * 16) + 15-:2] == 2'd3)) | ((sn_req_save[3-:4] == 4'd9) & (sn_ewrq_addr_i[(ewrq_hit_idx * 16) + 15-:2] == 2'd3));
			if (mlfb_hit)
				resp_has_data = ((sn_req_save[3-:4] == 4'd8) & (mlfb_i[(mlfb_hit_idx * 19) + 16-:2] == 2'd3)) | ((sn_req_save[3-:4] == 4'd9) & (mlfb_i[(mlfb_hit_idx * 19) + 16-:2] == 2'd3));
			if (mshr_hit)
				resp_has_data = 1'b1;
		end
		if (sn_req_hsk_ff)
			if ((~ewrq_hit & ~mlfb_hit) & ~mshr_hit)
				resp_has_data = ((sn_req_save[3-:4] == 4'd8) & (sn_peek_lst_resp_save[0 + (sn_change_lst_way_o * 2)+:2] == 2'd3)) | ((sn_req_save[3-:4] == 4'd9) & (sn_peek_lst_resp_save[0 + (sn_change_lst_way_o * 2)+:2] == 2'd3));
	end
	assign sn_empty = sn_empty_q;
	reg [1:0] state_d;
	reg [1:0] state_q;
	always @(*) begin
		sn_resp_valid_o = 1'b0;
		sn_resp[65] = 1'b0;
		sn_resp[64-:64] = 1'sb0;
		sn_resp[0] = 1'b0;
		cnt_d = cnt_q;
		sn_empty_d = sn_empty_q;
		state_d = state_q;
		if (sn_req_hsk)
			sn_empty_d = 1'b0;
		case (state_q)
			2'd0:
				if (sn_req_hsk_ff_ff)
					if (resp_has_data & mshr_hit) begin
						sn_resp_valid_o = 1'b1;
						sn_resp[0] = 1'b1;
						sn_resp[65] = 1'b1;
						sn_empty_d = 1'b1;
					end
					else if (~resp_has_data) begin
						sn_resp_valid_o = 1'b1;
						sn_resp[0] = 1'b1;
						sn_resp[65] = 1'b0;
						sn_empty_d = 1'b1;
					end
					else begin
						sn_resp[65] = 1'b1;
						sn_resp_valid_o = 1'b1;
						sn_resp[64-:64] = sn_resp_data[cnt_q * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
						state_d = 2'd1;
						cnt_d = cnt_q + 1;
					end
			2'd1:
				if (cnt_q == 3'b111) begin
					sn_resp_valid_o = 1'b1;
					sn_resp[65] = 1'b1;
					sn_resp[64-:64] = sn_resp_data[cnt_q * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
					state_d = 2'd0;
					cnt_d = 3'b000;
					sn_empty_d = 1'b1;
				end
				else begin
					sn_resp_valid_o = 1'b1;
					sn_resp[65] = 1'b1;
					sn_resp[64-:64] = sn_resp_data[cnt_q * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
					state_d = 2'd1;
					cnt_d = cnt_q + 1;
				end
		endcase
	end
	always @(posedge clk)
		if (~rstn) begin
			state_q <= 2'd0;
			cnt_q <= 1'sb0;
			sn_empty_q <= 1'sb1;
		end
		else begin
			state_q <= state_d;
			cnt_q <= cnt_d;
			sn_empty_q <= sn_empty_d;
		end
endmodule
