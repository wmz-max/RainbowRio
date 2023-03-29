module sp_fifo_dat_vld_output_11245 (
	enqueue_vld_i,
	enqueue_payload_i,
	enqueue_rdy_o,
	dequeue_vld_o,
	dequeue_payload_o,
	dequeue_rdy_i,
	change_mesi_en,
	change_ptr,
	change_mesi,
	payload_dff,
	payload_vld_dff,
	flush_i,
	clk,
	rst
);
	parameter [31:0] DEPTH = 16;
	parameter [31:0] MUST_TAKEN_ALL = 1;
	input wire [0:0] enqueue_vld_i;
	input wire [511:0] enqueue_payload_i;
	output wire [0:0] enqueue_rdy_o;
	output wire [0:0] dequeue_vld_o;
	output wire [511:0] dequeue_payload_o;
	input wire [0:0] dequeue_rdy_i;
	input wire change_mesi_en;
	localparam rvh_l1d_pkg_N_MSHR = 4;
	localparam rvh_l1d_pkg_N_EWRQ = rvh_l1d_pkg_N_MSHR;
	input wire [1:0] change_ptr;
	input wire [1:0] change_mesi;
	output reg [(DEPTH * 512) - 1:0] payload_dff;
	output reg [DEPTH - 1:0] payload_vld_dff;
	input wire flush_i;
	input clk;
	input rst;
	localparam [31:0] ENTRY_PTR_WIDTH = $clog2(DEPTH);
	localparam [31:0] ENTRY_CNT_WIDTH = $clog2(DEPTH + 1);
	wire [ENTRY_PTR_WIDTH - 1:0] enq_ptr;
	wire [ENTRY_PTR_WIDTH - 1:0] deq_ptr;
	wire [ENTRY_CNT_WIDTH - 1:0] avail_cnt;
	wire [0:0] enq_fire;
	wire [0:0] deq_fire;
	assign enq_fire = enqueue_vld_i & enqueue_rdy_o;
	assign deq_fire = dequeue_vld_o & dequeue_rdy_i;
	genvar i;
	generate
		for (i = 0; i < 1; i = i + 1) begin : genblk1
			assign dequeue_payload_o[i * 512+:512] = payload_dff[deq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * 512+:512];
			assign dequeue_vld_o[i] = (DEPTH - avail_cnt) > i;
		end
		if (MUST_TAKEN_ALL) begin : genblk2
			assign enqueue_rdy_o = {avail_cnt >= 32'sd1};
		end
		else begin : genblk2
			genvar i;
			for (i = 0; i < 1; i = i + 1) begin : genblk1
				assign enqueue_rdy_o[i] = avail_cnt > i;
			end
		end
	endgenerate
	localparam rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE = 512;
	localparam rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH = 6;
	localparam rvh_l1d_pkg_PADDR_WIDTH = 20;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE = 14;
	always @(posedge clk) begin : payload_dff_update
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < 1; i = i + 1)
				if (enq_fire[i])
					payload_dff[enq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * 512+:512] <= enqueue_payload_i[i * 512+:512];
		end
		if (change_mesi_en)
			payload_dff[(change_ptr * 512) + 15-:2] = change_mesi;
	end
	always @(posedge clk) begin : payload_vld_dff_update
		if (rst)
			payload_vld_dff <= 1'sb0;
		else begin : sv2v_autoblock_2
			reg signed [31:0] i;
			for (i = 0; i < 1; i = i + 1)
				begin
					if (enq_fire[i])
						payload_vld_dff[enq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH]] <= 1'b1;
					if (deq_fire[i])
						payload_vld_dff[deq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH]] <= 1'b0;
				end
		end
	end
	usage_manager #(
		.ENTRY_COUNT(DEPTH),
		.ENQ_WIDTH(1),
		.DEQ_WIDTH(1),
		.FLAG_EN(0),
		.INIT_IS_FULL(1),
		.COMB_DEQ_EN(0),
		.COMB_ENQ_EN(1)
	) u_usage_manager(
		.enq_fire_i(enq_fire),
		.deq_fire_i(deq_fire),
		.head_o(deq_ptr),
		.tail_o(enq_ptr),
		.avail_cnt_o(avail_cnt),
		.flush_i(flush_i),
		.clk(clk),
		.rst(rst)
	);
endmodule
module sp_fifo_dat_vld_output_CABE9 (
	enqueue_vld_i,
	enqueue_payload_i,
	enqueue_rdy_o,
	dequeue_vld_o,
	dequeue_payload_o,
	dequeue_rdy_i,
	change_mesi_en,
	change_ptr,
	change_mesi,
	payload_dff,
	payload_vld_dff,
	flush_i,
	clk,
	rst
);
	parameter [31:0] DEPTH = 16;
	parameter [31:0] MUST_TAKEN_ALL = 1;
	input wire [0:0] enqueue_vld_i;
	input wire [15:0] enqueue_payload_i;
	output wire [0:0] enqueue_rdy_o;
	output wire [0:0] dequeue_vld_o;
	output wire [15:0] dequeue_payload_o;
	input wire [0:0] dequeue_rdy_i;
	input wire change_mesi_en;
	localparam rvh_l1d_pkg_N_MSHR = 4;
	localparam rvh_l1d_pkg_N_EWRQ = rvh_l1d_pkg_N_MSHR;
	input wire [1:0] change_ptr;
	input wire [1:0] change_mesi;
	output reg [(DEPTH * 16) - 1:0] payload_dff;
	output reg [DEPTH - 1:0] payload_vld_dff;
	input wire flush_i;
	input clk;
	input rst;
	localparam [31:0] ENTRY_PTR_WIDTH = $clog2(DEPTH);
	localparam [31:0] ENTRY_CNT_WIDTH = $clog2(DEPTH + 1);
	wire [ENTRY_PTR_WIDTH - 1:0] enq_ptr;
	wire [ENTRY_PTR_WIDTH - 1:0] deq_ptr;
	wire [ENTRY_CNT_WIDTH - 1:0] avail_cnt;
	wire [0:0] enq_fire;
	wire [0:0] deq_fire;
	assign enq_fire = enqueue_vld_i & enqueue_rdy_o;
	assign deq_fire = dequeue_vld_o & dequeue_rdy_i;
	genvar i;
	generate
		for (i = 0; i < 1; i = i + 1) begin : genblk1
			assign dequeue_payload_o[i * 16+:16] = payload_dff[deq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * 16+:16];
			assign dequeue_vld_o[i] = (DEPTH - avail_cnt) > i;
		end
		if (MUST_TAKEN_ALL) begin : genblk2
			assign enqueue_rdy_o = {avail_cnt >= 32'sd1};
		end
		else begin : genblk2
			genvar i;
			for (i = 0; i < 1; i = i + 1) begin : genblk1
				assign enqueue_rdy_o[i] = avail_cnt > i;
			end
		end
	endgenerate
	localparam rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE = 512;
	localparam rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH = 6;
	localparam rvh_l1d_pkg_PADDR_WIDTH = 20;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE = 14;
	always @(posedge clk) begin : payload_dff_update
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < 1; i = i + 1)
				if (enq_fire[i])
					payload_dff[enq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * 16+:16] <= enqueue_payload_i[i * 16+:16];
		end
		if (change_mesi_en)
			payload_dff[(change_ptr * 16) + 15-:2] <= change_mesi;
	end
	always @(posedge clk) begin : payload_vld_dff_update
		if (rst)
			payload_vld_dff <= 1'sb0;
		else begin : sv2v_autoblock_2
			reg signed [31:0] i;
			for (i = 0; i < 1; i = i + 1)
				begin
					if (enq_fire[i])
						payload_vld_dff[enq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH]] <= 1'b1;
					if (deq_fire[i])
						payload_vld_dff[deq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH]] <= 1'b0;
				end
		end
	end
	usage_manager #(
		.ENTRY_COUNT(DEPTH),
		.ENQ_WIDTH(1),
		.DEQ_WIDTH(1),
		.FLAG_EN(0),
		.INIT_IS_FULL(1),
		.COMB_DEQ_EN(0),
		.COMB_ENQ_EN(1)
	) u_usage_manager(
		.enq_fire_i(enq_fire),
		.deq_fire_i(deq_fire),
		.head_o(deq_ptr),
		.tail_o(enq_ptr),
		.avail_cnt_o(avail_cnt),
		.flush_i(flush_i),
		.clk(clk),
		.rst(rst)
	);
endmodule
