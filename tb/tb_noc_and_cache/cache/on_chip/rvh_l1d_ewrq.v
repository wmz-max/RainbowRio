module rvh_l1d_ewrq (
	l1d_ewrq_new_ewrq_valid_i,
	l1d_ewrq_new_ewrq_addr_i,
	l1d_ewrq_new_ewrq_dat_i,
	l1d_ewrq_new_ewrq_ready_o,
	ewrq_addr_o,
	ewrq_vld_o,
	sn_ewrq_en_i,
	sn_ewrq_ptr_i,
	sn_ewrq_data_o,
	change_mesi_en,
	change_ptr,
	change_mesi,
	l2_req_if_awvalid,
	l2_req_if_awready,
	l2_req_if_aw,
	l2_req_if_wvalid,
	l2_req_if_wready,
	l2_req_if_w,
	rst,
	clk
);
	input wire l1d_ewrq_new_ewrq_valid_i;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE = 512;
	localparam rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH = 6;
	localparam rvh_l1d_pkg_PADDR_WIDTH = 20;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE = 14;
	input wire [15:0] l1d_ewrq_new_ewrq_addr_i;
	input wire [511:0] l1d_ewrq_new_ewrq_dat_i;
	output wire l1d_ewrq_new_ewrq_ready_o;
	localparam rvh_l1d_pkg_N_MSHR = 4;
	localparam rvh_l1d_pkg_N_EWRQ = rvh_l1d_pkg_N_MSHR;
	output wire [63:0] ewrq_addr_o;
	output wire [3:0] ewrq_vld_o;
	input wire sn_ewrq_en_i;
	input wire [1:0] sn_ewrq_ptr_i;
	output reg [511:0] sn_ewrq_data_o;
	input wire change_mesi_en;
	input wire [1:0] change_ptr;
	input wire [1:0] change_mesi;
	output wire l2_req_if_awvalid;
	input wire l2_req_if_awready;
	output wire [15:0] l2_req_if_aw;
	output reg l2_req_if_wvalid;
	input wire l2_req_if_wready;
	localparam rvh_l1d_pkg_MEM_DATA_WIDTH = 64;
	output reg [63:0] l2_req_if_w;
	input wire rst;
	input wire clk;
	localparam rvh_l1d_pkg_BURST_SIZE = 8;
	wire [3:0] mem_req_ff;
	wire [3:0] mem_req_nxt;
	wire wlast_ff;
	wire resp_ram_ready;
	wire req_ram_ready;
	wire is_mshr_word;
	wire aw_fifo_re;
	wire aw_fifo_we;
	wire aw_fifo_empty;
	wire w_fifo_re;
	wire w_fifo_we;
	wire w_fifo_empty;
	reg aw_fifo_re_ff;
	wire w_fifo_re_ff;
	wire [15:0] aw_fifo_din;
	wire [15:0] aw_fifo_dout;
	wire [511:0] w_fifo_din;
	wire [511:0] w_fifo_dout;
	wire [2047:0] ewrq_data_o;
	wire [3:0] ewrq_data_vld_o;
	wire aw_fifo_not_empty;
	wire w_fifo_not_empty;
	wire aw_fifo_enqueue_rdy;
	wire w_fifo_enqueue_rdy;
	assign aw_fifo_empty = ~aw_fifo_not_empty;
	assign w_fifo_empty = ~w_fifo_not_empty;
	assign l1d_ewrq_new_ewrq_ready_o = aw_fifo_enqueue_rdy & w_fifo_enqueue_rdy;
	always @(*)
		if (sn_ewrq_en_i)
			sn_ewrq_data_o = ewrq_data_o[sn_ewrq_ptr_i * 512+:512];
	sp_fifo_dat_vld_output_CABE9 #(
		.DEPTH(rvh_l1d_pkg_N_EWRQ),
		.MUST_TAKEN_ALL(1)
	) AW_FIFO_U(
		.enqueue_vld_i(aw_fifo_we),
		.enqueue_payload_i(aw_fifo_din),
		.enqueue_rdy_o(aw_fifo_enqueue_rdy),
		.dequeue_vld_o(aw_fifo_not_empty),
		.dequeue_payload_o(aw_fifo_dout),
		.dequeue_rdy_i(aw_fifo_re),
		.change_mesi_en(change_mesi_en),
		.change_ptr(change_ptr),
		.change_mesi(change_mesi),
		.payload_dff(ewrq_addr_o),
		.payload_vld_dff(ewrq_vld_o),
		.flush_i(1'b0),
		.clk(clk),
		.rst(~rst)
	);
	localparam [0:0] sv2v_uu_W_FIFO_U_ext_change_mesi_en_0 = 1'sb0;
	localparam [1:0] sv2v_uu_W_FIFO_U_ext_change_ptr_0 = 1'sb0;
	localparam [1:0] sv2v_uu_W_FIFO_U_ext_change_mesi_0 = 1'sb0;
	sp_fifo_dat_vld_output_11245 #(
		.DEPTH(rvh_l1d_pkg_N_EWRQ),
		.MUST_TAKEN_ALL(1)
	) W_FIFO_U(
		.enqueue_vld_i(w_fifo_we),
		.enqueue_payload_i(w_fifo_din),
		.enqueue_rdy_o(w_fifo_enqueue_rdy),
		.dequeue_vld_o(w_fifo_not_empty),
		.dequeue_payload_o(w_fifo_dout),
		.dequeue_rdy_i(w_fifo_re),
		.change_mesi_en(sv2v_uu_W_FIFO_U_ext_change_mesi_en_0),
		.change_ptr(sv2v_uu_W_FIFO_U_ext_change_ptr_0),
		.change_mesi(sv2v_uu_W_FIFO_U_ext_change_mesi_0),
		.payload_dff(ewrq_data_o),
		.payload_vld_dff(ewrq_data_vld_o),
		.flush_i(1'b0),
		.clk(clk),
		.rst(~rst)
	);
	wire aw_w_hsk;
	reg aw_w_hsk_ff;
	reg [2:0] cnt_d;
	reg [2:0] cnt_q;
	reg need_evict_data;
	reg evict_data_done;
	assign aw_w_hsk = l2_req_if_awvalid & l2_req_if_awready;
	assign l2_req_if_awvalid = (aw_fifo_re_ff ? 1'b0 : ~aw_fifo_empty);
	assign aw_fifo_we = l1d_ewrq_new_ewrq_valid_i & w_fifo_enqueue_rdy;
	assign aw_fifo_din = l1d_ewrq_new_ewrq_addr_i;
	assign aw_fifo_re = (aw_w_hsk & ~need_evict_data) | evict_data_done;
	assign w_fifo_we = l1d_ewrq_new_ewrq_valid_i & aw_fifo_enqueue_rdy;
	assign w_fifo_din = l1d_ewrq_new_ewrq_dat_i;
	assign w_fifo_re = (~need_evict_data & aw_w_hsk) | evict_data_done;
	assign l2_req_if_aw[15-:14] = {aw_fifo_dout[13:0]};
	assign l2_req_if_aw[1-:2] = aw_fifo_dout[15:rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE];
	reg [1:0] state_d;
	reg [1:0] state_q;
	always @(*) begin
		cnt_d = cnt_q;
		evict_data_done = 1'b0;
		state_d = state_q;
		l2_req_if_wvalid = 1'b0;
		case (state_q)
			2'd0:
				if (aw_w_hsk & need_evict_data)
					state_d = 2'd1;
			2'd1: begin
				l2_req_if_wvalid = 1'b1;
				if (cnt_q == 3'b111) begin
					state_d = 2'd0;
					cnt_d = 0;
					l2_req_if_w[63-:rvh_l1d_pkg_MEM_DATA_WIDTH] = w_fifo_dout[cnt_q * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
					evict_data_done = 1'b1;
				end
				else begin
					cnt_d = cnt_q + 1;
					state_d = 2'd1;
					l2_req_if_w[63-:rvh_l1d_pkg_MEM_DATA_WIDTH] = w_fifo_dout[cnt_q * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
				end
			end
		endcase
	end
	always @(posedge clk)
		if (~rst) begin
			state_q <= 2'd0;
			cnt_q <= 1'sb0;
		end
		else begin
			state_q <= state_d;
			cnt_q <= cnt_d;
		end
	always @(*)
		if (aw_w_hsk)
			need_evict_data = l2_req_if_aw[1-:2] == 2'd3;
	always @(posedge clk) begin
		aw_w_hsk_ff <= aw_w_hsk;
		aw_fifo_re_ff <= aw_fifo_re;
	end
endmodule
