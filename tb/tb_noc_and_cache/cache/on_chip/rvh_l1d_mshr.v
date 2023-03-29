module rvh_l1d_mshr (
	new_mshr_valid_i,
	new_mshr_i,
	new_mshr_id_i,
	dirty,
	mshr_bank_o,
	mshr_bank_valid_o,
	mshr_bank_no_resp_o,
	mlfb_mshr_dealloc_valid_i,
	mlfb_mshr_dealloc_idx_i,
	mlfb_mshr_dealloc_ready_o,
	l2_req_if_arvalid,
	l2_req_if_arready,
	l2_req_if_ar,
	rob_flush_i,
	rst,
	clk
);
	input wire new_mshr_valid_i;
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
	input wire [639:0] new_mshr_i;
	localparam rvh_l1d_pkg_N_MSHR = 4;
	localparam rvh_l1d_pkg_N_MSHR_W = 2;
	input wire [1:0] new_mshr_id_i;
	input wire dirty;
	output wire [2559:0] mshr_bank_o;
	output wire [3:0] mshr_bank_valid_o;
	output wire [3:0] mshr_bank_no_resp_o;
	input wire mlfb_mshr_dealloc_valid_i;
	input wire [1:0] mlfb_mshr_dealloc_idx_i;
	output wire mlfb_mshr_dealloc_ready_o;
	output wire l2_req_if_arvalid;
	input wire l2_req_if_arready;
	output wire [25:0] l2_req_if_ar;
	input wire rob_flush_i;
	input wire rst;
	input wire clk;
	genvar i;
	wire [2559:0] mshr_bank;
	wire [3:0] mshr_bank_valid;
	reg [3:0] mshr_bank_valid_nxt;
	reg [3:0] mshr_bank_valid_set_nxt;
	reg [3:0] mshr_bank_valid_clr_nxt;
	reg [3:0] mshr_bank_valid_ena;
	wire [3:0] mshr_bank_no_resp;
	reg [3:0] mshr_bank_no_resp_nxt;
	wire resp_ram_ready;
	wire req_ram_ready;
	wire is_mshr_word;
	reg ar_fifo_re;
	wire ar_fifo_dout_vld;
	wire ar_fifo_re_ff;
	wire ar_fifo_we;
	wire [1:0] ar_fifo_din;
	wire [1:0] ar_fifo_dout;
	mp_fifo_727EB #(
		.ENQUEUE_WIDTH(1),
		.DEQUEUE_WIDTH(1),
		.DEPTH(rvh_l1d_pkg_N_MSHR),
		.MUST_TAKEN_ALL(1)
	) AR_FIFO(
		.enqueue_vld_i(ar_fifo_we),
		.enqueue_payload_i(ar_fifo_din),
		.dequeue_vld_o(ar_fifo_dout_vld),
		.dequeue_payload_o(ar_fifo_dout),
		.dequeue_rdy_i(ar_fifo_re),
		.flush_i(1'b0),
		.clk(clk),
		.rst(~rst)
	);
	wire [639:0] mshr_req;
	wire mshr_req_valid;
	assign ar_fifo_we = new_mshr_valid_i & ((new_mshr_i[617] & new_mshr_i[619]) | ~new_mshr_i[618]);
	assign ar_fifo_din = new_mshr_id_i;
	always @(*) ar_fifo_re = (l2_req_if_arvalid & l2_req_if_arready) | ((mshr_req_valid & mshr_req[618]) & ar_fifo_dout_vld);
	assign mshr_req = mshr_bank[ar_fifo_dout * 640+:640];
	assign mshr_req_valid = mshr_bank_valid[ar_fifo_dout] & ar_fifo_dout_vld;
	assign l2_req_if_arvalid = ((ar_fifo_dout_vld & ~mshr_req[617]) & ~mshr_req[618]) & ~ar_fifo_re_ff;
	assign l2_req_if_ar[25-:2] = ar_fifo_dout;
	assign l2_req_if_ar[23-:20] = {mshr_req[616-:12], mshr_req[604-:2], {rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH {1'b0}}};
	assign l2_req_if_ar[3-:4] = mshr_req[4-:4];
	std_dffr #(.WIDTH(1)) U_AR_FIFO_RE_FF(
		.clk(clk),
		.rstn(rst),
		.d(ar_fifo_re),
		.q(ar_fifo_re_ff)
	);
	assign mlfb_mshr_dealloc_ready_o = 1'b1;
	function automatic signed [1:0] sv2v_cast_2_signed;
		input reg signed [1:0] inp;
		sv2v_cast_2_signed = inp;
	endfunction
	always @(*) begin
		mshr_bank_valid_nxt = mshr_bank_valid;
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < rvh_l1d_pkg_N_MSHR; i = i + 1)
				begin
					mshr_bank_valid_set_nxt[i] = new_mshr_valid_i & (new_mshr_id_i == sv2v_cast_2_signed(i));
					mshr_bank_valid_clr_nxt[i] = mlfb_mshr_dealloc_valid_i & (mlfb_mshr_dealloc_idx_i[1:0] == sv2v_cast_2_signed(i));
					mshr_bank_valid_nxt[i] = (mshr_bank_valid[i] | mshr_bank_valid_set_nxt[i]) & ~mshr_bank_valid_clr_nxt[i];
					mshr_bank_valid_ena[i] = mshr_bank_valid_set_nxt[i] | mshr_bank_valid_clr_nxt[i];
				end
		end
	end
	generate
		for (i = 0; i < rvh_l1d_pkg_N_MSHR; i = i + 1) begin : gen_mshr_bank_valid
			std_dffre #(.WIDTH(1)) U_MSHR_BANK_VALID(
				.clk(clk),
				.rstn(rst),
				.en(mshr_bank_valid_ena[i]),
				.d(mshr_bank_valid_nxt[i]),
				.q(mshr_bank_valid[i])
			);
		end
	endgenerate
	wire [3:0] mshr_bank_no_resp_nxt_ena;
	wire [3:0] mshr_bank_no_resp_nxt_set;
	wire [3:0] mshr_bank_no_resp_nxt_clr;
	generate
		for (i = 0; i < rvh_l1d_pkg_N_MSHR; i = i + 1) begin : gen_mshr_bank_no_resp_nxt_ena
			assign mshr_bank_no_resp_nxt_ena[i] = mshr_bank_no_resp_nxt_set[i] | mshr_bank_no_resp_nxt_clr[i];
			assign mshr_bank_no_resp_nxt_set[i] = rob_flush_i;
			assign mshr_bank_no_resp_nxt_clr[i] = new_mshr_valid_i & (new_mshr_id_i == sv2v_cast_2_signed(i));
		end
	endgenerate
	always @(*) begin : sv2v_autoblock_2
		reg signed [31:0] i;
		for (i = 0; i < rvh_l1d_pkg_N_MSHR; i = i + 1)
			begin
				mshr_bank_no_resp_nxt[i] = mshr_bank_no_resp[i];
				if (mshr_bank_no_resp_nxt_ena[i])
					mshr_bank_no_resp_nxt[i] = mshr_bank_no_resp_nxt_set[i] | ~mshr_bank_no_resp_nxt_clr[i];
			end
	end
	generate
		for (i = 0; i < rvh_l1d_pkg_N_MSHR; i = i + 1) begin : gen_mshr_bank_no_resp
			std_dffre #(.WIDTH(1)) U_MSHR_BANK_NO_RESP(
				.clk(clk),
				.rstn(rst),
				.en(mshr_bank_no_resp_nxt_ena[i]),
				.d(mshr_bank_no_resp_nxt[i]),
				.q(mshr_bank_no_resp[i])
			);
		end
		for (i = 0; i < rvh_l1d_pkg_N_MSHR; i = i + 1) begin : gen_mshr_bank
			std_dffre #(.WIDTH(640)) U_MSHR_BANK(
				.clk(clk),
				.rstn(rst),
				.en(mshr_bank_valid_set_nxt[i]),
				.d(new_mshr_i),
				.q(mshr_bank[i * 640+:640])
			);
		end
	endgenerate
	assign mshr_bank_o = mshr_bank;
	assign mshr_bank_valid_o = mshr_bank_valid;
	assign mshr_bank_no_resp_o = mshr_bank_no_resp;
endmodule
