module freelist (
	enq_vld_i,
	enq_tag_i,
	deq_vld_i,
	deq_tag_o,
	deq_rdy_o,
	flush_i,
	clk,
	rst
);
	parameter [31:0] ENTRY_COUNT = 4;
	localparam [31:0] ENTRY_TAG_WIDTH = $clog2(ENTRY_COUNT);
	localparam [31:0] IS_LOG2 = (2 ** ENTRY_TAG_WIDTH) == ENTRY_COUNT;
	input wire enq_vld_i;
	input wire [ENTRY_TAG_WIDTH - 1:0] enq_tag_i;
	input wire deq_vld_i;
	output wire [ENTRY_TAG_WIDTH - 1:0] deq_tag_o;
	output wire deq_rdy_o;
	input wire flush_i;
	input clk;
	input rst;
	reg [(ENTRY_COUNT * ENTRY_TAG_WIDTH) - 1:0] ram_r;
	reg [(ENTRY_COUNT * ENTRY_TAG_WIDTH) - 1:0] ram_n;
	reg [ENTRY_COUNT - 1:0] ram_clk_en;
	reg [ENTRY_TAG_WIDTH - 1:0] head_r;
	reg [ENTRY_TAG_WIDTH - 1:0] head_n;
	reg head_flag_r;
	reg head_flag_n;
	wire head_clk_en;
	reg [ENTRY_TAG_WIDTH - 1:0] tail_r;
	reg [ENTRY_TAG_WIDTH - 1:0] tail_n;
	reg tail_flag_r;
	reg tail_flag_n;
	wire tail_clk_en;
	wire enq_fire;
	wire deq_fire;
	wire full;
	wire empty;
	wire flag_equal;
	wire tag_equal;
	assign enq_fire = enq_vld_i;
	assign deq_fire = deq_rdy_o & deq_vld_i;
	assign flag_equal = tail_flag_r == head_flag_r;
	assign tag_equal = tail_r == head_r;
	assign full = ~flag_equal & tag_equal;
	assign empty = flag_equal & tag_equal;
	assign deq_tag_o = ram_r[head_r * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH];
	always @(*) begin : ram_update
		ram_n = ram_r;
		ram_n[tail_r * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH] = enq_tag_i;
		if (flush_i) begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < ENTRY_COUNT; i = i + 1)
				ram_n[i * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH] = i[ENTRY_TAG_WIDTH - 1:0];
		end
	end
	always @(*) begin : ram_clk_en_gen
		begin : sv2v_autoblock_2
			reg signed [31:0] i;
			for (i = 0; i < ENTRY_COUNT; i = i + 1)
				ram_clk_en[i] = (enq_fire & (i == tail_r)) | flush_i;
		end
	end
	always @(*) begin : head_update
		if (IS_LOG2)
			{head_flag_n, head_n} = {head_flag_r, head_r} + 1'b1;
		else if (head_r == (ENTRY_COUNT - 1)) begin
			head_n = {ENTRY_COUNT {1'b0}};
			head_flag_n = ~head_flag_r;
		end
		else begin
			head_n = head_r + 1'b1;
			head_flag_n = head_flag_r;
		end
		if (flush_i)
			{head_flag_n, head_n} = {head_flag_r, head_r};
	end
	assign tail_clk_en = enq_fire | flush_i;
	assign deq_rdy_o = ~empty;
	always @(*) begin : tail_update
		if (IS_LOG2)
			{tail_flag_n, tail_n} = {tail_flag_r, tail_r} + 1'b1;
		else if (tail_r == (ENTRY_COUNT - 1)) begin
			tail_n = {ENTRY_TAG_WIDTH {1'b0}};
			tail_flag_n = ~tail_flag_r;
		end
		else begin
			tail_n = tail_r + 1'b1;
			tail_flag_n = tail_flag_r;
		end
		if (flush_i)
			{tail_flag_n, tail_n} = {~head_flag_r, head_r};
	end
	assign head_clk_en = deq_fire | flush_i;
	always @(posedge clk) begin : head_dff
		if (rst)
			{head_flag_r, head_r} <= {ENTRY_TAG_WIDTH + 1 {1'b0}};
		else if (head_clk_en)
			{head_flag_r, head_r} <= {head_flag_n, head_n};
	end
	always @(posedge clk) begin : tail_dff
		if (rst)
			{tail_flag_r, tail_r} <= {1'b1, {ENTRY_TAG_WIDTH {1'b0}}};
		else if (tail_clk_en)
			{tail_flag_r, tail_r} <= {tail_flag_n, tail_n};
	end
	always @(posedge clk) begin : ram_dff
		if (rst) begin : sv2v_autoblock_3
			reg signed [31:0] i;
			for (i = 0; i < ENTRY_COUNT; i = i + 1)
				ram_r[i * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH] <= i[ENTRY_TAG_WIDTH - 1:0];
		end
		else begin : sv2v_autoblock_4
			reg signed [31:0] i;
			for (i = 0; i < ENTRY_COUNT; i = i + 1)
				if (ram_clk_en[i])
					ram_r[i * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH] <= ram_n[i * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH];
		end
	end
endmodule
module input_port_flit_decoder_4FC44 (
	flit_v_i,
	flit_i,
	flit_look_ahead_routing_i,
	flit_dec_o
);
	input wire flit_v_i;
	input wire [255:0] flit_i;
	input wire [2:0] flit_look_ahead_routing_i;
	localparam rvh_noc_pkg_QoS_Value_Width = 4;
	localparam rvh_noc_pkg_TxnID_Width = 12;
	localparam rvh_noc_pkg_NodeID_Device_Port_Width = 2;
	localparam rvh_noc_pkg_NodeID_X_Width = 2;
	localparam rvh_noc_pkg_NodeID_Y_Width = 2;
	output wire [32:0] flit_dec_o;
	localparam rvh_noc_pkg_NodeID_Device_Id_Width = 1;
	localparam rvh_noc_pkg_NodeID_Width = 7;
	assign flit_dec_o[32-:7] = flit_i[10:rvh_noc_pkg_QoS_Value_Width];
	assign flit_dec_o[25-:7] = flit_i[17:11];
	assign flit_dec_o[18-:12] = flit_i[29:18];
	assign flit_dec_o[6-:3] = flit_look_ahead_routing_i;
endmodule
module input_port_226D0 (
	rx_flit_pend_i,
	rx_flit_v_i,
	rx_flit_i,
	rx_flit_vc_id_i,
	rx_flit_look_ahead_routing_i,
	rx_lcrd_v_o,
	rx_lcrd_id_o,
	vc_ctrl_head_vld_o,
	vc_ctrl_head_o,
	vc_data_head_o,
	inport_read_enable_sa_stage_i,
	inport_read_vc_id_sa_stage_i,
	inport_read_enable_st_stage_i,
	inport_read_vc_id_st_stage_i,
	node_id_x_ths_hop_i,
	node_id_y_ths_hop_i,
	clk,
	rstn
);
	parameter VC_NUM = 1;
	parameter VC_DEPTH = 1;
	parameter VC_NUM_IDX_W = (VC_NUM > 1 ? $clog2(VC_NUM) : 1);
	parameter INPUT_PORT_NO = 0;
	input wire rx_flit_pend_i;
	input wire rx_flit_v_i;
	input wire [255:0] rx_flit_i;
	input wire [VC_NUM_IDX_W - 1:0] rx_flit_vc_id_i;
	input wire [2:0] rx_flit_look_ahead_routing_i;
	output wire rx_lcrd_v_o;
	localparam rvh_noc_pkg_CHANNEL_NUM = 4;
	localparam rvh_noc_pkg_INPUT_PORT_NUMBER = 6;
	localparam rvh_noc_pkg_ROUTER_PORT_NUMBER = 4;
	localparam rvh_noc_pkg_LOCAL_PORT_NUMBER = 2;
	localparam rvh_noc_pkg_QOS_VC_NUM_PER_INPUT = 1;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX = 6;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX_W = 3;
	output wire [2:0] rx_lcrd_id_o;
	output wire [VC_NUM - 1:0] vc_ctrl_head_vld_o;
	localparam rvh_noc_pkg_QoS_Value_Width = 4;
	localparam rvh_noc_pkg_TxnID_Width = 12;
	localparam rvh_noc_pkg_NodeID_Device_Port_Width = 2;
	localparam rvh_noc_pkg_NodeID_X_Width = 2;
	localparam rvh_noc_pkg_NodeID_Y_Width = 2;
	output wire [(VC_NUM * 33) - 1:0] vc_ctrl_head_o;
	output wire [(VC_NUM * 256) - 1:0] vc_data_head_o;
	input wire inport_read_enable_sa_stage_i;
	input wire [VC_NUM_IDX_W - 1:0] inport_read_vc_id_sa_stage_i;
	input wire inport_read_enable_st_stage_i;
	input wire [VC_NUM_IDX_W - 1:0] inport_read_vc_id_st_stage_i;
	input wire [1:0] node_id_x_ths_hop_i;
	input wire [1:0] node_id_y_ths_hop_i;
	input wire clk;
	input wire rstn;
	wire [32:0] flit_ctrl_info;
	input_port_flit_decoder_4FC44 input_port_flit_decoder_u(
		.flit_v_i(rx_flit_v_i),
		.flit_i(rx_flit_i),
		.flit_look_ahead_routing_i(rx_flit_look_ahead_routing_i),
		.flit_dec_o(flit_ctrl_info)
	);
	input_port_vc_E2879 #(
		.VC_NUM(VC_NUM),
		.VC_DEPTH(VC_DEPTH)
	) input_port_vc_u(
		.flit_v_i(rx_flit_v_i),
		.flit_i(rx_flit_i),
		.flit_dec_i(flit_ctrl_info),
		.flit_vc_id_i(rx_flit_vc_id_i),
		.lcrd_v_o(rx_lcrd_v_o),
		.lcrd_id_o(rx_lcrd_id_o),
		.vc_ctrl_head_vld_o(vc_ctrl_head_vld_o),
		.vc_ctrl_head_o(vc_ctrl_head_o),
		.vc_data_head_o(vc_data_head_o),
		.inport_read_enable_sa_stage_i(inport_read_enable_sa_stage_i),
		.inport_read_vc_id_sa_stage_i(inport_read_vc_id_sa_stage_i),
		.inport_read_enable_st_stage_i(inport_read_enable_st_stage_i),
		.inport_read_vc_id_st_stage_i(inport_read_vc_id_st_stage_i),
		.clk(clk),
		.rstn(rstn)
	);
endmodule
module input_port_vc_E2879 (
	flit_v_i,
	flit_i,
	flit_dec_i,
	flit_vc_id_i,
	lcrd_v_o,
	lcrd_id_o,
	vc_ctrl_head_vld_o,
	vc_ctrl_head_o,
	vc_data_head_o,
	inport_read_enable_sa_stage_i,
	inport_read_vc_id_sa_stage_i,
	inport_read_enable_st_stage_i,
	inport_read_vc_id_st_stage_i,
	clk,
	rstn
);
	parameter VC_NUM = 1;
	parameter VC_NUM_IDX_W = (VC_NUM > 1 ? $clog2(VC_NUM) : 1);
	parameter VC_DEPTH = 1;
	parameter VC_BUFFER_DEPTH = VC_DEPTH;
	parameter VC_BUFFER_DEPTH_IDX_W = (VC_BUFFER_DEPTH > 1 ? $clog2(VC_BUFFER_DEPTH) : 1);
	input wire flit_v_i;
	input wire [255:0] flit_i;
	localparam rvh_noc_pkg_QoS_Value_Width = 4;
	localparam rvh_noc_pkg_TxnID_Width = 12;
	localparam rvh_noc_pkg_NodeID_Device_Port_Width = 2;
	localparam rvh_noc_pkg_NodeID_X_Width = 2;
	localparam rvh_noc_pkg_NodeID_Y_Width = 2;
	input wire [32:0] flit_dec_i;
	input wire [VC_NUM_IDX_W - 1:0] flit_vc_id_i;
	output wire lcrd_v_o;
	localparam rvh_noc_pkg_CHANNEL_NUM = 4;
	localparam rvh_noc_pkg_INPUT_PORT_NUMBER = 6;
	localparam rvh_noc_pkg_ROUTER_PORT_NUMBER = 4;
	localparam rvh_noc_pkg_LOCAL_PORT_NUMBER = 2;
	localparam rvh_noc_pkg_QOS_VC_NUM_PER_INPUT = 1;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX = 6;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX_W = 3;
	output wire [2:0] lcrd_id_o;
	output wire [VC_NUM - 1:0] vc_ctrl_head_vld_o;
	output wire [(VC_NUM * 33) - 1:0] vc_ctrl_head_o;
	output wire [(VC_NUM * 256) - 1:0] vc_data_head_o;
	input wire inport_read_enable_sa_stage_i;
	input wire [VC_NUM_IDX_W - 1:0] inport_read_vc_id_sa_stage_i;
	input wire inport_read_enable_st_stage_i;
	input wire [VC_NUM_IDX_W - 1:0] inport_read_vc_id_st_stage_i;
	input wire clk;
	input wire rstn;
	genvar i;
	reg [VC_NUM - 1:0] vc_data_tail_we;
	wire [255:0] vc_data_din;
	wire [VC_NUM - 1:0] vc_data_enqueue_rdy;
	reg [VC_NUM - 1:0] vc_ctrl_tail_we;
	wire [32:0] vc_ctrl_din;
	wire [VC_NUM - 1:0] vc_ctrl_enqueue_rdy;
	wire [VC_NUM - 1:0] vc_data_head_vld;
	wire [(VC_NUM * 256) - 1:0] vc_data_head;
	reg [VC_NUM - 1:0] vc_data_head_dequeue_vld;
	wire [VC_NUM - 1:0] vc_ctrl_head_vld;
	wire [(VC_NUM * 33) - 1:0] vc_ctrl_head;
	reg [VC_NUM - 1:0] vc_ctrl_head_dequeue_vld;
	always @(*) begin
		vc_data_tail_we = 1'sb0;
		vc_ctrl_tail_we = 1'sb0;
		if (flit_v_i) begin
			vc_data_tail_we[flit_vc_id_i] = 1'b1;
			vc_ctrl_tail_we[flit_vc_id_i] = 1'b1;
		end
	end
	assign vc_data_din = flit_i;
	assign vc_ctrl_din[32-:7] = flit_dec_i[32-:7];
	assign vc_ctrl_din[25-:7] = flit_dec_i[25-:7];
	assign vc_ctrl_din[18-:12] = flit_dec_i[18-:12];
	assign vc_ctrl_din[6-:3] = flit_dec_i[6-:3];
	always @(*) begin
		vc_ctrl_head_dequeue_vld = 1'sb0;
		vc_ctrl_head_dequeue_vld[inport_read_vc_id_sa_stage_i] = inport_read_enable_sa_stage_i;
	end
	always @(*) begin
		vc_data_head_dequeue_vld = 1'sb0;
		vc_data_head_dequeue_vld[inport_read_vc_id_st_stage_i] = inport_read_enable_st_stage_i;
	end
	generate
		for (i = 0; i < VC_NUM; i = i + 1) begin : gen_vc_data_fifo
			mp_fifo_8192C #(
				.ENQUEUE_WIDTH(1),
				.DEQUEUE_WIDTH(1),
				.DEPTH(VC_BUFFER_DEPTH),
				.MUST_TAKEN_ALL(1)
			) VC_DATA_U(
				.enqueue_vld_i(vc_data_tail_we[i]),
				.enqueue_payload_i(vc_data_din),
				.enqueue_rdy_o(vc_data_enqueue_rdy[i]),
				.dequeue_vld_o(vc_data_head_vld[i]),
				.dequeue_payload_o(vc_data_head[i * 256+:256]),
				.dequeue_rdy_i(vc_data_head_dequeue_vld[i]),
				.flush_i(1'b0),
				.clk(clk),
				.rst(~rstn)
			);
			assign vc_data_head_o[i * 256+:256] = vc_data_head[i * 256+:256];
		end
		for (i = 0; i < VC_NUM; i = i + 1) begin : gen_vc_ctrl_fifo
			mp_fifo_0F478_46EF5 #(
				.payload_t_rvh_noc_pkg_NodeID_Device_Port_Width(rvh_noc_pkg_NodeID_Device_Port_Width),
				.payload_t_rvh_noc_pkg_NodeID_X_Width(rvh_noc_pkg_NodeID_X_Width),
				.payload_t_rvh_noc_pkg_NodeID_Y_Width(rvh_noc_pkg_NodeID_Y_Width),
				.payload_t_rvh_noc_pkg_QoS_Value_Width(rvh_noc_pkg_QoS_Value_Width),
				.payload_t_rvh_noc_pkg_TxnID_Width(rvh_noc_pkg_TxnID_Width),
				.ENQUEUE_WIDTH(1),
				.DEQUEUE_WIDTH(1),
				.DEPTH(VC_DEPTH),
				.MUST_TAKEN_ALL(1)
			) VC_CTRL_U(
				.enqueue_vld_i(vc_ctrl_tail_we[i]),
				.enqueue_payload_i(vc_ctrl_din),
				.enqueue_rdy_o(vc_ctrl_enqueue_rdy[i]),
				.dequeue_vld_o(vc_ctrl_head_vld[i]),
				.dequeue_payload_o(vc_ctrl_head[i * 33+:33]),
				.dequeue_rdy_i(vc_ctrl_head_dequeue_vld[i]),
				.flush_i(1'b0),
				.clk(clk),
				.rst(~rstn)
			);
			assign vc_ctrl_head_vld_o[i] = vc_ctrl_head_vld[i];
			assign vc_ctrl_head_o[i * 33+:33] = vc_ctrl_head[i * 33+:33];
		end
	endgenerate
	assign lcrd_v_o = inport_read_enable_st_stage_i;
	assign lcrd_id_o = {{rvh_noc_pkg_VC_ID_NUM_MAX_W - VC_NUM_IDX_W {1'b0}}, inport_read_vc_id_st_stage_i};
endmodule
module input_to_output (
	sa_global_vld_i,
	sa_global_inport_id_oh_i,
	sa_global_inport_vc_id_i,
	vc_assignment_vld_i,
	vc_assignment_vc_id_i,
	look_ahead_routing_sel_i,
	inport_read_enable_o,
	inport_read_vc_id_o,
	outport_vld_o,
	outport_select_inport_id_o,
	outport_vc_id_o,
	outport_look_ahead_routing_o,
	consume_vc_credit_vld_o,
	consume_vc_credit_vc_id_o
);
	parameter INPUT_PORT_NUM = 5;
	parameter OUTPUT_PORT_NUM = 5;
	parameter LOCAL_PORT_NUM = INPUT_PORT_NUM - 4;
	parameter SA_GLOBAL_INPUT_NUM_N = 4;
	parameter SA_GLOBAL_INPUT_NUM_S = 4;
	parameter SA_GLOBAL_INPUT_NUM_E = 2;
	parameter SA_GLOBAL_INPUT_NUM_W = 2;
	parameter SA_GLOBAL_INPUT_NUM_L = 4;
	parameter SA_GLOBAL_INPUT_NUM_N_W = (SA_GLOBAL_INPUT_NUM_N > 1 ? $clog2(SA_GLOBAL_INPUT_NUM_N) : 1);
	parameter SA_GLOBAL_INPUT_NUM_S_W = (SA_GLOBAL_INPUT_NUM_S > 1 ? $clog2(SA_GLOBAL_INPUT_NUM_S) : 1);
	parameter SA_GLOBAL_INPUT_NUM_E_W = (SA_GLOBAL_INPUT_NUM_E > 1 ? $clog2(SA_GLOBAL_INPUT_NUM_E) : 1);
	parameter SA_GLOBAL_INPUT_NUM_W_W = (SA_GLOBAL_INPUT_NUM_W > 1 ? $clog2(SA_GLOBAL_INPUT_NUM_W) : 1);
	parameter SA_GLOBAL_INPUT_NUM_L_W = (SA_GLOBAL_INPUT_NUM_L > 1 ? $clog2(SA_GLOBAL_INPUT_NUM_L) : 1);
	input wire [OUTPUT_PORT_NUM - 1:0] sa_global_vld_i;
	localparam rvh_noc_pkg_CHANNEL_NUM = 4;
	localparam rvh_noc_pkg_INPUT_PORT_NUMBER = 6;
	localparam rvh_noc_pkg_ROUTER_PORT_NUMBER = 4;
	localparam rvh_noc_pkg_LOCAL_PORT_NUMBER = 2;
	localparam rvh_noc_pkg_SA_GLOBAL_INPUT_NUM_MAX = 5;
	input wire [(OUTPUT_PORT_NUM * 5) - 1:0] sa_global_inport_id_oh_i;
	localparam rvh_noc_pkg_QOS_VC_NUM_PER_INPUT = 1;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX = 6;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX_W = 3;
	input wire [(OUTPUT_PORT_NUM * 3) - 1:0] sa_global_inport_vc_id_i;
	input wire [OUTPUT_PORT_NUM - 1:0] vc_assignment_vld_i;
	input wire [(OUTPUT_PORT_NUM * 3) - 1:0] vc_assignment_vc_id_i;
	input wire [(OUTPUT_PORT_NUM * 3) - 1:0] look_ahead_routing_sel_i;
	output wire [INPUT_PORT_NUM - 1:0] inport_read_enable_o;
	output wire [(INPUT_PORT_NUM * 3) - 1:0] inport_read_vc_id_o;
	output wire [OUTPUT_PORT_NUM - 1:0] outport_vld_o;
	output wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_select_inport_id_o;
	output wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_vc_id_o;
	output wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_look_ahead_routing_o;
	output wire [OUTPUT_PORT_NUM - 1:0] consume_vc_credit_vld_o;
	output wire [(OUTPUT_PORT_NUM * 3) - 1:0] consume_vc_credit_vc_id_o;
	genvar i;
	genvar j;
	genvar k;
	reg [(OUTPUT_PORT_NUM * 3) - 1:0] inport_id_per_outport;
	reg [(OUTPUT_PORT_NUM * INPUT_PORT_NUM) - 1:0] inport_id_oh_per_outport;
	wire [(INPUT_PORT_NUM * OUTPUT_PORT_NUM) - 1:0] outport_id_oh_per_inport;
	generate
		for (i = 0; i < OUTPUT_PORT_NUM; i = i + 1) begin : gen_consume_vc_credit
			assign consume_vc_credit_vld_o[i] = sa_global_vld_i[i] & vc_assignment_vld_i[i];
			assign consume_vc_credit_vc_id_o[i * 3+:3] = vc_assignment_vc_id_i[i * 3+:3];
		end
	endgenerate
	assign outport_vld_o = consume_vc_credit_vld_o;
	assign outport_select_inport_id_o = inport_id_per_outport;
	assign outport_vc_id_o = vc_assignment_vc_id_i;
	assign outport_look_ahead_routing_o = look_ahead_routing_sel_i;
	generate
		for (i = 0; i < INPUT_PORT_NUM; i = i + 1) begin : genblk2
			for (j = 0; j < OUTPUT_PORT_NUM; j = j + 1) begin : genblk1
				assign outport_id_oh_per_inport[(i * OUTPUT_PORT_NUM) + j] = inport_id_oh_per_outport[(j * INPUT_PORT_NUM) + i];
			end
		end
		for (i = 0; i < INPUT_PORT_NUM; i = i + 1) begin : genblk3
			assign inport_read_enable_o[i] = |(outport_id_oh_per_inport[i * OUTPUT_PORT_NUM+:OUTPUT_PORT_NUM] & vc_assignment_vld_i);
		end
	endgenerate
	wire [((OUTPUT_PORT_NUM * INPUT_PORT_NUM) * 3) - 1:0] inport_vc_id_oh_per_outport;
	wire [((INPUT_PORT_NUM * OUTPUT_PORT_NUM) * 3) - 1:0] outport_vc_id_oh_per_inport;
	wire [((INPUT_PORT_NUM * rvh_noc_pkg_VC_ID_NUM_MAX_W) * OUTPUT_PORT_NUM) - 1:0] outport_vc_id_oh_per_inport_mid1;
	wire [(INPUT_PORT_NUM * rvh_noc_pkg_VC_ID_NUM_MAX_W) - 1:0] outport_vc_id_oh_per_inport_mid2;
	generate
		for (i = 0; i < OUTPUT_PORT_NUM; i = i + 1) begin : genblk4
			for (j = 0; j < INPUT_PORT_NUM; j = j + 1) begin : genblk1
				assign inport_vc_id_oh_per_outport[((i * INPUT_PORT_NUM) + j) * 3+:3] = {rvh_noc_pkg_VC_ID_NUM_MAX_W {inport_id_oh_per_outport[(i * INPUT_PORT_NUM) + j]}} & sa_global_inport_vc_id_i[i * 3+:3];
			end
		end
		for (i = 0; i < INPUT_PORT_NUM; i = i + 1) begin : genblk5
			for (j = 0; j < OUTPUT_PORT_NUM; j = j + 1) begin : genblk1
				assign outport_vc_id_oh_per_inport[((i * OUTPUT_PORT_NUM) + j) * 3+:3] = inport_vc_id_oh_per_outport[((j * INPUT_PORT_NUM) + i) * 3+:3];
			end
		end
		for (i = 0; i < INPUT_PORT_NUM; i = i + 1) begin : genblk6
			for (j = 0; j < OUTPUT_PORT_NUM; j = j + 1) begin : genblk1
				for (k = 0; k < rvh_noc_pkg_VC_ID_NUM_MAX_W; k = k + 1) begin : genblk1
					assign outport_vc_id_oh_per_inport_mid1[(((i * rvh_noc_pkg_VC_ID_NUM_MAX_W) + k) * OUTPUT_PORT_NUM) + j] = outport_vc_id_oh_per_inport[(((i * OUTPUT_PORT_NUM) + j) * 3) + k];
				end
			end
		end
		for (i = 0; i < (INPUT_PORT_NUM * rvh_noc_pkg_VC_ID_NUM_MAX_W); i = i + 1) begin : genblk7
			assign outport_vc_id_oh_per_inport_mid2[i] = |outport_vc_id_oh_per_inport_mid1[i * OUTPUT_PORT_NUM+:OUTPUT_PORT_NUM];
		end
		for (i = 0; i < INPUT_PORT_NUM; i = i + 1) begin : genblk8
			for (j = 0; j < rvh_noc_pkg_VC_ID_NUM_MAX_W; j = j + 1) begin : genblk1
				assign inport_read_vc_id_o[(i * 3) + j] = outport_vc_id_oh_per_inport_mid2[(i * rvh_noc_pkg_VC_ID_NUM_MAX_W) + j];
			end
		end
	endgenerate
	always @(*) begin
		inport_id_per_outport[0+:3] = 3'd1;
		inport_id_oh_per_outport[0+:INPUT_PORT_NUM] = 1'sb0;
		case (1'b1)
			sa_global_inport_id_oh_i[0]: begin
				inport_id_per_outport[0+:3] = 3'd1;
				inport_id_oh_per_outport[1] = 1'b1;
			end
			sa_global_inport_id_oh_i[1]: begin
				inport_id_per_outport[0+:3] = 3'd2;
				inport_id_oh_per_outport[2] = 1'b1;
			end
			sa_global_inport_id_oh_i[2]: begin
				inport_id_per_outport[0+:3] = 3'd3;
				inport_id_oh_per_outport[3] = 1'b1;
			end
			sa_global_inport_id_oh_i[3]: begin
				inport_id_per_outport[0+:3] = 3'd4;
				inport_id_oh_per_outport[4] = 1'b1;
			end
			default:
				;
		endcase
	end
	always @(*) begin
		inport_id_per_outport[3+:3] = 3'd0;
		inport_id_oh_per_outport[INPUT_PORT_NUM+:INPUT_PORT_NUM] = 1'sb0;
		case (1'b1)
			sa_global_inport_id_oh_i[5]: begin
				inport_id_per_outport[3+:3] = 3'd0;
				inport_id_oh_per_outport[INPUT_PORT_NUM] = 1'b1;
			end
			sa_global_inport_id_oh_i[6]: begin
				inport_id_per_outport[3+:3] = 3'd2;
				inport_id_oh_per_outport[INPUT_PORT_NUM + 2] = 1'b1;
			end
			sa_global_inport_id_oh_i[7]: begin
				inport_id_per_outport[3+:3] = 3'd3;
				inport_id_oh_per_outport[INPUT_PORT_NUM + 3] = 1'b1;
			end
			sa_global_inport_id_oh_i[8]: begin
				inport_id_per_outport[3+:3] = 3'd4;
				inport_id_oh_per_outport[INPUT_PORT_NUM + 4] = 1'b1;
			end
			default:
				;
		endcase
	end
	always @(*) begin
		inport_id_per_outport[6+:3] = 3'd3;
		inport_id_oh_per_outport[2 * INPUT_PORT_NUM+:INPUT_PORT_NUM] = 1'sb0;
		case (1'b1)
			sa_global_inport_id_oh_i[10]: begin
				inport_id_per_outport[6+:3] = 3'd3;
				inport_id_oh_per_outport[(2 * INPUT_PORT_NUM) + 3] = 1'b1;
			end
			sa_global_inport_id_oh_i[11]: begin
				inport_id_per_outport[6+:3] = 3'd4;
				inport_id_oh_per_outport[(2 * INPUT_PORT_NUM) + 4] = 1'b1;
			end
			default:
				;
		endcase
	end
	always @(*) begin
		inport_id_per_outport[9+:3] = 3'd2;
		inport_id_oh_per_outport[3 * INPUT_PORT_NUM+:INPUT_PORT_NUM] = 1'sb0;
		case (1'b1)
			sa_global_inport_id_oh_i[15]: begin
				inport_id_per_outport[9+:3] = 3'd2;
				inport_id_oh_per_outport[(3 * INPUT_PORT_NUM) + 2] = 1'b1;
			end
			sa_global_inport_id_oh_i[16]: begin
				inport_id_per_outport[9+:3] = 3'd4;
				inport_id_oh_per_outport[(3 * INPUT_PORT_NUM) + 4] = 1'b1;
			end
			default:
				;
		endcase
	end
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_multi_local_port
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_multi_local_port
				always @(*) begin
					inport_id_per_outport[(4 + i) * 3+:3] = 3'd0;
					inport_id_oh_per_outport[(4 + i) * INPUT_PORT_NUM+:INPUT_PORT_NUM] = 1'sb0;
					case (1'b1)
						sa_global_inport_id_oh_i[(4 + i) * 5]: begin
							inport_id_per_outport[(4 + i) * 3+:3] = 3'd0;
							inport_id_oh_per_outport[(4 + i) * INPUT_PORT_NUM] = 1'b1;
						end
						sa_global_inport_id_oh_i[((4 + i) * 5) + 1]: begin
							inport_id_per_outport[(4 + i) * 3+:3] = 3'd1;
							inport_id_oh_per_outport[((4 + i) * INPUT_PORT_NUM) + 1] = 1'b1;
						end
						sa_global_inport_id_oh_i[((4 + i) * 5) + 2]: begin
							inport_id_per_outport[(4 + i) * 3+:3] = 3'd2;
							inport_id_oh_per_outport[((4 + i) * INPUT_PORT_NUM) + 2] = 1'b1;
						end
						sa_global_inport_id_oh_i[((4 + i) * 5) + 3]: begin
							inport_id_per_outport[(4 + i) * 3+:3] = 3'd3;
							inport_id_oh_per_outport[((4 + i) * INPUT_PORT_NUM) + 3] = 1'b1;
						end
						default:
							;
					endcase
				end
			end
		end
	endgenerate
endmodule
module left_circular_rotate (
	ori_vector_i,
	req_left_rotate_num_i,
	roteted_vector_o
);
	parameter N_INPUT = 2;
	localparam [31:0] N_INPUT_WIDTH = (N_INPUT > 1 ? $clog2(N_INPUT) : 1);
	input wire [N_INPUT - 1:0] ori_vector_i;
	input wire [N_INPUT_WIDTH - 1:0] req_left_rotate_num_i;
	output wire [N_INPUT - 1:0] roteted_vector_o;
	wire [(N_INPUT * 2) - 1:0] ori_vector_mid;
	assign ori_vector_mid = {ori_vector_i, ori_vector_i} << req_left_rotate_num_i;
	assign roteted_vector_o = ori_vector_mid[(N_INPUT * 2) - 1-:N_INPUT];
endmodule
module local_port_couple_module (
	node_id_x_tgt_i,
	node_id_y_tgt_i,
	node_id_x_src_i,
	node_id_y_src_i,
	look_ahead_routing_o,
	tx_lcrd_v_i,
	tx_lcrd_id_i,
	flit_vld_i,
	flit_qos_value_i,
	free_credit_vld_o,
	free_credit_vc_id_o,
	clk,
	rstn
);
	parameter VC_NUM_OUTPORT = 2;
	parameter VC_NUM_OUTPORT_IDX_W = (VC_NUM_OUTPORT > 1 ? $clog2(VC_NUM_OUTPORT) : 1);
	parameter VC_DEPTH_OUTPORT = 2;
	parameter VC_DEPTH_OUTPORT_COUNTER_W = $clog2(VC_DEPTH_OUTPORT + 1);
	parameter OUTPUT_TO_N = 0;
	parameter OUTPUT_TO_S = 0;
	parameter OUTPUT_TO_E = 0;
	parameter OUTPUT_TO_W = 0;
	parameter OUTPUT_TO_L = 1;
	localparam rvh_noc_pkg_NodeID_X_Width = 2;
	input wire [1:0] node_id_x_tgt_i;
	localparam rvh_noc_pkg_NodeID_Y_Width = 2;
	input wire [1:0] node_id_y_tgt_i;
	input wire [1:0] node_id_x_src_i;
	input wire [1:0] node_id_y_src_i;
	output wire [2:0] look_ahead_routing_o;
	input wire tx_lcrd_v_i;
	localparam rvh_noc_pkg_CHANNEL_NUM = 4;
	localparam rvh_noc_pkg_INPUT_PORT_NUMBER = 6;
	localparam rvh_noc_pkg_ROUTER_PORT_NUMBER = 4;
	localparam rvh_noc_pkg_LOCAL_PORT_NUMBER = 2;
	localparam rvh_noc_pkg_QOS_VC_NUM_PER_INPUT = 1;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX = 6;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX_W = 3;
	input wire [2:0] tx_lcrd_id_i;
	input wire flit_vld_i;
	localparam rvh_noc_pkg_QoS_Value_Width = 4;
	input wire [3:0] flit_qos_value_i;
	output wire free_credit_vld_o;
	output wire [VC_NUM_OUTPORT_IDX_W - 1:0] free_credit_vc_id_o;
	input wire clk;
	input wire rstn;
	wire [(VC_NUM_OUTPORT * VC_DEPTH_OUTPORT_COUNTER_W) - 1:0] vc_credit_counter;
	wire [VC_NUM_OUTPORT - 1:0] vc_credit_counter_non_zero;
	wire [(VC_NUM_OUTPORT - rvh_noc_pkg_QOS_VC_NUM_PER_INPUT) - 1:0] vc_allocate_common_vc_grt_oh;
	wire [$clog2(VC_NUM_OUTPORT - 1) - 1:0] vc_allocate_common_vc_grt_idx;
	wire [0:0] vc_allocate_rt_vc_grt_oh;
	wire [-1:0] vc_allocate_rt_vc_grt_idx;
	reg [VC_NUM_OUTPORT_IDX_W - 1:0] preferred_vc_id;
	wire flit_buffer_head_rt_vc_en;
	wire free_credit_vld;
	wire flit_buffer_dequeue_vld;
	wire consume_vc_credit_vld;
	wire [VC_NUM_OUTPORT_IDX_W - 1:0] consume_vc_credit_vc_id;
	local_port_look_adead_routing local_port_look_adead_routing_u(
		.node_id_x_tgt_i(node_id_x_tgt_i),
		.node_id_y_tgt_i(node_id_y_tgt_i),
		.node_id_x_src_i(node_id_x_src_i),
		.node_id_y_src_i(node_id_y_src_i),
		.look_ahead_routing_o(look_ahead_routing_o)
	);
	assign flit_buffer_head_rt_vc_en = rvh_noc_pkg_QOS_VC_NUM_PER_INPUT && (flit_qos_value_i == {4 {1'sb1}});
	assign free_credit_vld = ~flit_buffer_head_rt_vc_en & |vc_credit_counter_non_zero[VC_NUM_OUTPORT - 1:rvh_noc_pkg_QOS_VC_NUM_PER_INPUT];
	assign free_credit_vld_o = free_credit_vld;
	assign free_credit_vc_id_o = consume_vc_credit_vc_id;
	assign flit_buffer_dequeue_vld = flit_vld_i & free_credit_vld;
	genvar i;
	generate
		for (i = 0; i < VC_NUM_OUTPORT; i = i + 1) begin : gen_vc_credit_counter_non_zero
			assign vc_credit_counter_non_zero[i] = ~(vc_credit_counter[i * VC_DEPTH_OUTPORT_COUNTER_W+:VC_DEPTH_OUTPORT_COUNTER_W] == {VC_DEPTH_OUTPORT_COUNTER_W * 1 {1'sb0}});
		end
	endgenerate
	one_hot_rr_arb #(.N_INPUT(VC_NUM_OUTPORT - rvh_noc_pkg_QOS_VC_NUM_PER_INPUT)) vc_allocate_common_vc_rr_arb_u(
		.req_i(vc_credit_counter_non_zero[VC_NUM_OUTPORT - 1:rvh_noc_pkg_QOS_VC_NUM_PER_INPUT]),
		.update_i(|vc_credit_counter_non_zero[VC_NUM_OUTPORT - 1:rvh_noc_pkg_QOS_VC_NUM_PER_INPUT]),
		.grt_o(vc_allocate_common_vc_grt_oh),
		.grt_idx_o(vc_allocate_common_vc_grt_idx),
		.rstn(rstn),
		.clk(clk)
	);
	assign vc_allocate_rt_vc_grt_oh = 1'sb0;
	assign vc_allocate_rt_vc_grt_idx = 1'sb0;
	assign consume_vc_credit_vld = flit_buffer_dequeue_vld;
	assign consume_vc_credit_vc_id = (flit_buffer_head_rt_vc_en ? vc_allocate_rt_vc_grt_idx : (vc_credit_counter_non_zero[preferred_vc_id] ? preferred_vc_id : vc_allocate_common_vc_grt_idx + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT));
	output_port_vc_credit_counter #(
		.VC_NUM(VC_NUM_OUTPORT),
		.VC_DEPTH(VC_DEPTH_OUTPORT)
	) output_port_vc_credit_counter_u(
		.free_vc_credit_vld_i(tx_lcrd_v_i),
		.free_vc_credit_vc_id_i(tx_lcrd_id_i),
		.consume_vc_credit_vld_i(consume_vc_credit_vld),
		.consume_vc_credit_vc_id_i(consume_vc_credit_vc_id),
		.vc_credit_counter_o(vc_credit_counter),
		.clk(clk),
		.rstn(rstn)
	);
	generate
		if (OUTPUT_TO_N) begin : gen_output_to_n
			always @(*) begin
				preferred_vc_id = 1'sb0;
				case (look_ahead_routing_o)
					3'd1: preferred_vc_id = 0;
					3'd4: preferred_vc_id = 1;
					default:
						;
				endcase
				preferred_vc_id = preferred_vc_id + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
			end
		end
		if (OUTPUT_TO_S) begin : gen_output_to_s
			always @(*) begin
				preferred_vc_id = 1'sb0;
				case (look_ahead_routing_o)
					3'd0: preferred_vc_id = 0;
					3'd4: preferred_vc_id = 1;
					default:
						;
				endcase
				preferred_vc_id = preferred_vc_id + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
			end
		end
		if (OUTPUT_TO_E) begin : gen_output_to_e
			always @(*) begin
				preferred_vc_id = 1'sb0;
				case (look_ahead_routing_o)
					3'd0: preferred_vc_id = 0;
					3'd1: preferred_vc_id = 1;
					3'd3: preferred_vc_id = 2;
					3'd4: preferred_vc_id = 3;
					default:
						;
				endcase
				preferred_vc_id = preferred_vc_id + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
			end
		end
		if (OUTPUT_TO_W) begin : gen_output_to_w
			always @(*) begin
				preferred_vc_id = 1'sb0;
				case (look_ahead_routing_o)
					3'd0: preferred_vc_id = 0;
					3'd1: preferred_vc_id = 1;
					3'd2: preferred_vc_id = 2;
					3'd4: preferred_vc_id = 3;
					default:
						;
				endcase
				preferred_vc_id = preferred_vc_id + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
			end
		end
		if (OUTPUT_TO_L) begin : gen_output_to_l
			always @(*) begin
				preferred_vc_id = 1'sb0;
				case (look_ahead_routing_o)
					default: preferred_vc_id = 1'sb0;
				endcase
				preferred_vc_id = preferred_vc_id + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
			end
		end
	endgenerate
endmodule
module local_port_look_adead_routing (
	node_id_x_tgt_i,
	node_id_y_tgt_i,
	node_id_x_src_i,
	node_id_y_src_i,
	look_ahead_routing_o
);
	localparam rvh_noc_pkg_NodeID_X_Width = 2;
	input wire [1:0] node_id_x_tgt_i;
	localparam rvh_noc_pkg_NodeID_Y_Width = 2;
	input wire [1:0] node_id_y_tgt_i;
	input wire [1:0] node_id_x_src_i;
	input wire [1:0] node_id_y_src_i;
	output reg [2:0] look_ahead_routing_o;
	wire x_nxt_equal_x_dst;
	wire x_nxt_less_x_dst;
	wire y_nxt_less_y_dst;
	assign x_nxt_equal_x_dst = node_id_x_src_i == node_id_x_tgt_i;
	assign x_nxt_less_x_dst = node_id_x_src_i < node_id_x_tgt_i;
	assign y_nxt_less_y_dst = node_id_y_src_i < node_id_y_tgt_i;
	always @(*)
		if (x_nxt_equal_x_dst) begin
			if (y_nxt_less_y_dst)
				look_ahead_routing_o = 3'd0;
			else
				look_ahead_routing_o = 3'd1;
		end
		else if (x_nxt_less_x_dst)
			look_ahead_routing_o = 3'd2;
		else
			look_ahead_routing_o = 3'd3;
endmodule
module look_ahead_routing (
	vc_ctrl_head_vld_i,
	vc_ctrl_head_i,
	node_id_x_ths_hop_i,
	node_id_y_ths_hop_i,
	look_ahead_routing_o
);
	input wire vc_ctrl_head_vld_i;
	localparam rvh_noc_pkg_QoS_Value_Width = 4;
	localparam rvh_noc_pkg_TxnID_Width = 12;
	localparam rvh_noc_pkg_NodeID_Device_Port_Width = 2;
	localparam rvh_noc_pkg_NodeID_X_Width = 2;
	localparam rvh_noc_pkg_NodeID_Y_Width = 2;
	input wire [32:0] vc_ctrl_head_i;
	input wire [1:0] node_id_x_ths_hop_i;
	input wire [1:0] node_id_y_ths_hop_i;
	output reg [2:0] look_ahead_routing_o;
	reg [1:0] node_id_x_nxt_hop;
	wire [1:0] node_id_x_dst_hop;
	reg [1:0] node_id_y_nxt_hop;
	wire [1:0] node_id_y_dst_hop;
	assign node_id_x_dst_hop = vc_ctrl_head_i[32-:2];
	assign node_id_y_dst_hop = vc_ctrl_head_i[30-:2];
	always @(*) begin
		node_id_x_nxt_hop = node_id_x_ths_hop_i;
		node_id_y_nxt_hop = node_id_y_ths_hop_i;
		case (vc_ctrl_head_i[6-:3])
			3'd0: node_id_y_nxt_hop = node_id_y_ths_hop_i + 1;
			3'd1: node_id_y_nxt_hop = node_id_y_ths_hop_i - 1;
			3'd2: node_id_x_nxt_hop = node_id_x_ths_hop_i + 1;
			3'd3: node_id_x_nxt_hop = node_id_x_ths_hop_i - 1;
			default:
				;
		endcase
	end
	wire x_nxt_equal_x_dst;
	wire x_nxt_less_x_dst;
	wire y_nxt_equal_y_dst;
	wire y_nxt_less_y_dst;
	assign x_nxt_equal_x_dst = node_id_x_nxt_hop == node_id_x_dst_hop;
	assign x_nxt_less_x_dst = node_id_x_nxt_hop < node_id_x_dst_hop;
	assign y_nxt_equal_y_dst = node_id_y_nxt_hop == node_id_y_dst_hop;
	assign y_nxt_less_y_dst = node_id_y_nxt_hop < node_id_y_dst_hop;
	always @(*)
		if (x_nxt_equal_x_dst) begin
			if (y_nxt_equal_y_dst)
				case (vc_ctrl_head_i[28-:2])
					0: look_ahead_routing_o = 3'd4;
					default: look_ahead_routing_o = 3'd4;
				endcase
			else if (y_nxt_less_y_dst)
				look_ahead_routing_o = 3'd0;
			else
				look_ahead_routing_o = 3'd1;
		end
		else if (x_nxt_less_x_dst)
			look_ahead_routing_o = 3'd2;
		else
			look_ahead_routing_o = 3'd3;
endmodule
module mp_fifo_ptr_output (
	enqueue_vld_i,
	enqueue_payload_i,
	enqueue_rdy_o,
	dequeue_vld_o,
	dequeue_payload_o,
	dequeue_rdy_i,
	enq_ptr_o,
	deq_ptr_o,
	flush_i,
	clk,
	rst
);
	parameter [31:0] ENQUEUE_WIDTH = 4;
	parameter [31:0] DEQUEUE_WIDTH = 4;
	parameter [31:0] DEPTH = 16;
	parameter [31:0] MUST_TAKEN_ALL = 1;
	localparam [31:0] ENTRY_PTR_WIDTH = $clog2(DEPTH);
	localparam [31:0] ENTRY_CNT_WIDTH = $clog2(DEPTH + 1);
	input wire [ENQUEUE_WIDTH - 1:0] enqueue_vld_i;
	input wire [(ENQUEUE_WIDTH * 4) - 1:0] enqueue_payload_i;
	output wire [ENQUEUE_WIDTH - 1:0] enqueue_rdy_o;
	output wire [DEQUEUE_WIDTH - 1:0] dequeue_vld_o;
	output wire [(DEQUEUE_WIDTH * 4) - 1:0] dequeue_payload_o;
	input wire [DEQUEUE_WIDTH - 1:0] dequeue_rdy_i;
	output wire [(ENQUEUE_WIDTH * ENTRY_PTR_WIDTH) - 1:0] enq_ptr_o;
	output wire [(DEQUEUE_WIDTH * ENTRY_PTR_WIDTH) - 1:0] deq_ptr_o;
	input wire flush_i;
	input clk;
	input rst;
	wire [(ENQUEUE_WIDTH * ENTRY_PTR_WIDTH) - 1:0] enq_ptr;
	wire [(DEQUEUE_WIDTH * ENTRY_PTR_WIDTH) - 1:0] deq_ptr;
	wire [ENTRY_CNT_WIDTH - 1:0] avail_cnt;
	reg [(DEPTH * 4) - 1:0] payload_dff;
	wire [ENQUEUE_WIDTH - 1:0] enq_fire;
	wire [DEQUEUE_WIDTH - 1:0] deq_fire;
	assign enq_ptr_o = enq_ptr;
	assign deq_ptr_o = deq_ptr;
	assign enq_fire = enqueue_vld_i & enqueue_rdy_o;
	assign deq_fire = dequeue_vld_o & dequeue_rdy_i;
	genvar i;
	generate
		for (i = 0; i < DEQUEUE_WIDTH; i = i + 1) begin : genblk1
			assign dequeue_payload_o[i * 4+:4] = payload_dff[deq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * 4+:4];
			assign dequeue_vld_o[i] = (DEPTH - avail_cnt) > i;
		end
		if (MUST_TAKEN_ALL) begin : genblk2
			assign enqueue_rdy_o = {ENQUEUE_WIDTH {avail_cnt >= ENQUEUE_WIDTH}};
		end
		else begin : genblk2
			genvar i;
			for (i = 0; i < ENQUEUE_WIDTH; i = i + 1) begin : genblk1
				assign enqueue_rdy_o[i] = avail_cnt > i;
			end
		end
	endgenerate
	always @(posedge clk) begin : payload_dff_update
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < ENQUEUE_WIDTH; i = i + 1)
				if (enq_fire[i])
					payload_dff[enq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * 4+:4] <= enqueue_payload_i[i * 4+:4];
		end
	end
	usage_manager #(
		.ENTRY_COUNT(DEPTH),
		.ENQ_WIDTH(ENQUEUE_WIDTH),
		.DEQ_WIDTH(DEQUEUE_WIDTH),
		.FLAG_EN(0),
		.INIT_IS_FULL(0),
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
module mp_fifo_0F478_46EF5 (
	enqueue_vld_i,
	enqueue_payload_i,
	enqueue_rdy_o,
	dequeue_vld_o,
	dequeue_payload_o,
	dequeue_rdy_i,
	flush_i,
	clk,
	rst
);
	parameter signed [31:0] payload_t_rvh_noc_pkg_NodeID_Device_Port_Width = 0;
	parameter signed [31:0] payload_t_rvh_noc_pkg_NodeID_X_Width = 0;
	parameter signed [31:0] payload_t_rvh_noc_pkg_NodeID_Y_Width = 0;
	parameter signed [31:0] payload_t_rvh_noc_pkg_QoS_Value_Width = 0;
	parameter signed [31:0] payload_t_rvh_noc_pkg_TxnID_Width = 0;
	parameter [31:0] ENQUEUE_WIDTH = 4;
	parameter [31:0] DEQUEUE_WIDTH = 4;
	parameter [31:0] DEPTH = 16;
	parameter [31:0] MUST_TAKEN_ALL = 1;
	input wire [ENQUEUE_WIDTH - 1:0] enqueue_vld_i;
	input wire [(ENQUEUE_WIDTH * ((((((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0)) + ((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0))) + payload_t_rvh_noc_pkg_TxnID_Width) + 3) + payload_t_rvh_noc_pkg_QoS_Value_Width)) - 1:0] enqueue_payload_i;
	output wire [ENQUEUE_WIDTH - 1:0] enqueue_rdy_o;
	output wire [DEQUEUE_WIDTH - 1:0] dequeue_vld_o;
	output wire [(DEQUEUE_WIDTH * ((((((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0)) + ((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0))) + payload_t_rvh_noc_pkg_TxnID_Width) + 3) + payload_t_rvh_noc_pkg_QoS_Value_Width)) - 1:0] dequeue_payload_o;
	input wire [DEQUEUE_WIDTH - 1:0] dequeue_rdy_i;
	input wire flush_i;
	input clk;
	input rst;
	localparam [31:0] ENTRY_PTR_WIDTH = $clog2(DEPTH);
	localparam [31:0] ENTRY_CNT_WIDTH = $clog2(DEPTH + 1);
	wire [(ENQUEUE_WIDTH * ENTRY_PTR_WIDTH) - 1:0] enq_ptr;
	wire [(DEQUEUE_WIDTH * ENTRY_PTR_WIDTH) - 1:0] deq_ptr;
	wire [ENTRY_CNT_WIDTH - 1:0] avail_cnt;
	reg [(DEPTH * ((((((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0)) + ((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0))) + payload_t_rvh_noc_pkg_TxnID_Width) + 3) + payload_t_rvh_noc_pkg_QoS_Value_Width)) - 1:0] payload_dff;
	wire [ENQUEUE_WIDTH - 1:0] enq_fire;
	wire [DEQUEUE_WIDTH - 1:0] deq_fire;
	assign enq_fire = enqueue_vld_i & enqueue_rdy_o;
	assign deq_fire = dequeue_vld_o & dequeue_rdy_i;
	genvar i;
	generate
		for (i = 0; i < DEQUEUE_WIDTH; i = i + 1) begin : genblk1
			assign dequeue_payload_o[i * ((((((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0)) + ((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0))) + payload_t_rvh_noc_pkg_TxnID_Width) + 3) + payload_t_rvh_noc_pkg_QoS_Value_Width)+:(((((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0)) + ((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0))) + payload_t_rvh_noc_pkg_TxnID_Width) + 3) + payload_t_rvh_noc_pkg_QoS_Value_Width] = payload_dff[deq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * ((((((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0)) + ((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0))) + payload_t_rvh_noc_pkg_TxnID_Width) + 3) + payload_t_rvh_noc_pkg_QoS_Value_Width)+:(((((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0)) + ((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0))) + payload_t_rvh_noc_pkg_TxnID_Width) + 3) + payload_t_rvh_noc_pkg_QoS_Value_Width];
			assign dequeue_vld_o[i] = (DEPTH - avail_cnt) > i;
		end
		if (MUST_TAKEN_ALL) begin : genblk2
			assign enqueue_rdy_o = {ENQUEUE_WIDTH {avail_cnt >= ENQUEUE_WIDTH}};
		end
		else begin : genblk2
			genvar i;
			for (i = 0; i < ENQUEUE_WIDTH; i = i + 1) begin : genblk1
				assign enqueue_rdy_o[i] = avail_cnt > i;
			end
		end
	endgenerate
	always @(posedge clk) begin : payload_dff_update
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < ENQUEUE_WIDTH; i = i + 1)
				if (enq_fire[i])
					payload_dff[enq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * ((((((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0)) + ((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0))) + payload_t_rvh_noc_pkg_TxnID_Width) + 3) + payload_t_rvh_noc_pkg_QoS_Value_Width)+:(((((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0)) + ((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0))) + payload_t_rvh_noc_pkg_TxnID_Width) + 3) + payload_t_rvh_noc_pkg_QoS_Value_Width] <= enqueue_payload_i[i * ((((((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0)) + ((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0))) + payload_t_rvh_noc_pkg_TxnID_Width) + 3) + payload_t_rvh_noc_pkg_QoS_Value_Width)+:(((((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0)) + ((((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0) >= 0 ? ((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 1 : 1 - (((payload_t_rvh_noc_pkg_NodeID_X_Width + payload_t_rvh_noc_pkg_NodeID_Y_Width) + payload_t_rvh_noc_pkg_NodeID_Device_Port_Width) + 0))) + payload_t_rvh_noc_pkg_TxnID_Width) + 3) + payload_t_rvh_noc_pkg_QoS_Value_Width];
		end
	end
	usage_manager #(
		.ENTRY_COUNT(DEPTH),
		.ENQ_WIDTH(ENQUEUE_WIDTH),
		.DEQ_WIDTH(DEQUEUE_WIDTH),
		.FLAG_EN(0),
		.INIT_IS_FULL(0),
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
module mp_fifo_8192C (
	enqueue_vld_i,
	enqueue_payload_i,
	enqueue_rdy_o,
	dequeue_vld_o,
	dequeue_payload_o,
	dequeue_rdy_i,
	flush_i,
	clk,
	rst
);
	parameter [31:0] ENQUEUE_WIDTH = 4;
	parameter [31:0] DEQUEUE_WIDTH = 4;
	parameter [31:0] DEPTH = 16;
	parameter [31:0] MUST_TAKEN_ALL = 1;
	input wire [ENQUEUE_WIDTH - 1:0] enqueue_vld_i;
	input wire [(ENQUEUE_WIDTH * 256) - 1:0] enqueue_payload_i;
	output wire [ENQUEUE_WIDTH - 1:0] enqueue_rdy_o;
	output wire [DEQUEUE_WIDTH - 1:0] dequeue_vld_o;
	output wire [(DEQUEUE_WIDTH * 256) - 1:0] dequeue_payload_o;
	input wire [DEQUEUE_WIDTH - 1:0] dequeue_rdy_i;
	input wire flush_i;
	input clk;
	input rst;
	localparam [31:0] ENTRY_PTR_WIDTH = $clog2(DEPTH);
	localparam [31:0] ENTRY_CNT_WIDTH = $clog2(DEPTH + 1);
	wire [(ENQUEUE_WIDTH * ENTRY_PTR_WIDTH) - 1:0] enq_ptr;
	wire [(DEQUEUE_WIDTH * ENTRY_PTR_WIDTH) - 1:0] deq_ptr;
	wire [ENTRY_CNT_WIDTH - 1:0] avail_cnt;
	reg [(DEPTH * 256) - 1:0] payload_dff;
	wire [ENQUEUE_WIDTH - 1:0] enq_fire;
	wire [DEQUEUE_WIDTH - 1:0] deq_fire;
	assign enq_fire = enqueue_vld_i & enqueue_rdy_o;
	assign deq_fire = dequeue_vld_o & dequeue_rdy_i;
	genvar i;
	generate
		for (i = 0; i < DEQUEUE_WIDTH; i = i + 1) begin : genblk1
			assign dequeue_payload_o[i * 256+:256] = payload_dff[deq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * 256+:256];
			assign dequeue_vld_o[i] = (DEPTH - avail_cnt) > i;
		end
		if (MUST_TAKEN_ALL) begin : genblk2
			assign enqueue_rdy_o = {ENQUEUE_WIDTH {avail_cnt >= ENQUEUE_WIDTH}};
		end
		else begin : genblk2
			genvar i;
			for (i = 0; i < ENQUEUE_WIDTH; i = i + 1) begin : genblk1
				assign enqueue_rdy_o[i] = avail_cnt > i;
			end
		end
	endgenerate
	always @(posedge clk) begin : payload_dff_update
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < ENQUEUE_WIDTH; i = i + 1)
				if (enq_fire[i])
					payload_dff[enq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * 256+:256] <= enqueue_payload_i[i * 256+:256];
		end
	end
	usage_manager #(
		.ENTRY_COUNT(DEPTH),
		.ENQ_WIDTH(ENQUEUE_WIDTH),
		.DEQ_WIDTH(DEQUEUE_WIDTH),
		.FLAG_EN(0),
		.INIT_IS_FULL(0),
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
module oh2idx (
	oh_i,
	idx_o
);
	parameter [31:0] N_INPUT = 2;
	localparam [31:0] N_INPUT_WIDTH = (N_INPUT > 1 ? $clog2(N_INPUT) : 1);
	input [N_INPUT - 1:0] oh_i;
	output wire [N_INPUT_WIDTH - 1:0] idx_o;
	genvar i;
	genvar j;
	wire [(N_INPUT_WIDTH * N_INPUT) - 1:0] mask;
	generate
		for (i = 0; i < N_INPUT_WIDTH; i = i + 1) begin : gen_mask_i
			for (j = 0; j < N_INPUT; j = j + 1) begin : gen_mask_j
				assign mask[(i * N_INPUT) + j] = (j / (2 ** i)) % 2;
			end
		end
		for (i = 0; i < N_INPUT_WIDTH; i = i + 1) begin : gen_idx_o
			assign idx_o[i] = |(oh_i & mask[i * N_INPUT+:N_INPUT]);
		end
	endgenerate
endmodule
module one_counter (
	data_i,
	cnt_o
);
	parameter [31:0] DATA_WIDTH = 8;
	localparam [31:0] CNT_WIDTH = $clog2(DATA_WIDTH) + 1;
	input wire [DATA_WIDTH - 1:0] data_i;
	output wire [CNT_WIDTH - 1:0] cnt_o;
	localparam [31:0] PADDED_DATA_WIDTH = 1 << $clog2(DATA_WIDTH);
	reg [PADDED_DATA_WIDTH - 1:0] padded_data;
	always @(*) begin
		padded_data = {PADDED_DATA_WIDTH {1'b0}};
		padded_data[DATA_WIDTH - 1:0] = data_i;
	end
	generate
		if (DATA_WIDTH == 1) begin : genblk1
			assign cnt_o = data_i;
		end
		else begin : genblk1
			wire [CNT_WIDTH - 2:0] res_left;
			wire [CNT_WIDTH - 2:0] res_right;
			assign cnt_o = res_left + res_right;
			one_counter #(.DATA_WIDTH(PADDED_DATA_WIDTH / 2)) one_counter_left_u(
				.data_i(padded_data[PADDED_DATA_WIDTH - 1:PADDED_DATA_WIDTH / 2]),
				.cnt_o(res_left)
			);
			one_counter #(.DATA_WIDTH(PADDED_DATA_WIDTH / 2)) one_counter_right_u(
				.data_i(padded_data[(PADDED_DATA_WIDTH / 2) - 1:0]),
				.cnt_o(res_right)
			);
		end
	endgenerate
endmodule
module onehot_mux (
	sel_i,
	data_i,
	data_o
);
	parameter [31:0] SOURCE_COUNT = 2;
	parameter [31:0] DATA_WIDTH = 1;
	input wire [SOURCE_COUNT - 1:0] sel_i;
	input wire [(SOURCE_COUNT * DATA_WIDTH) - 1:0] data_i;
	output wire [DATA_WIDTH - 1:0] data_o;
	wire [(DATA_WIDTH * SOURCE_COUNT) - 1:0] trans_data;
	wire [(DATA_WIDTH * SOURCE_COUNT) - 1:0] select_mat;
	genvar i;
	generate
		for (i = 0; i < DATA_WIDTH; i = i + 1) begin : genblk1
			genvar j;
			for (j = 0; j < SOURCE_COUNT; j = j + 1) begin : genblk1
				assign trans_data[(i * SOURCE_COUNT) + j] = data_i[(j * DATA_WIDTH) + i];
			end
		end
		for (i = 0; i < DATA_WIDTH; i = i + 1) begin : genblk2
			assign select_mat[i * SOURCE_COUNT+:SOURCE_COUNT] = trans_data[i * SOURCE_COUNT+:SOURCE_COUNT] & sel_i;
			assign data_o[i] = |select_mat[i * SOURCE_COUNT+:SOURCE_COUNT];
		end
	endgenerate
endmodule
module one_hot_priority_encoder (
	sel_i,
	sel_o
);
	parameter [31:0] SEL_WIDTH = 8;
	input wire [SEL_WIDTH - 1:0] sel_i;
	output wire [SEL_WIDTH - 1:0] sel_o;
	localparam [31:0] SEL_ID_WIDHT = $clog2(SEL_WIDTH);
	wire [SEL_WIDTH - 1:0] sel_mask;
	assign sel_mask = (~sel_i + 1'b1) & sel_i;
	assign sel_o = sel_mask;
endmodule
module one_hot_rr_arb (
	req_i,
	update_i,
	grt_o,
	grt_idx_o,
	rstn,
	clk
);
	parameter N_INPUT = 2;
	localparam [31:0] N_INPUT_WIDTH = (N_INPUT > 1 ? $clog2(N_INPUT) : 1);
	localparam [31:0] IS_LOG2 = (2 ** N_INPUT_WIDTH) == N_INPUT;
	parameter TIMEOUT_UPDATE_EN = 0;
	parameter TIMEOUT_UPDATE_CYCLE = 10;
	input wire [N_INPUT - 1:0] req_i;
	input wire update_i;
	output wire [N_INPUT - 1:0] grt_o;
	output wire [N_INPUT_WIDTH - 1:0] grt_idx_o;
	input wire rstn;
	input wire clk;
	reg [$clog2(TIMEOUT_UPDATE_CYCLE) - 1:0] timeout_counter_q;
	wire [$clog2(TIMEOUT_UPDATE_CYCLE) - 1:0] timeout_counter_d;
	wire timeout_counter_add;
	wire timeout_counter_clr;
	wire timeout_counter_en;
	wire timeout_en;
	generate
		if (N_INPUT == 1) begin : gen_one_hot_rr_arb_one_input
			assign grt_o = req_i;
			assign grt_idx_o = 0;
		end
		else begin : gen_one_hot_rr_arb_common_input
			wire req_vld;
			wire [(N_INPUT * 2) - 1:0] reversed_dereordered_selected_req_pre_shift;
			wire [(N_INPUT * 2) - 1:0] reversed_dereordered_selected_req_shift;
			wire [N_INPUT - 1:0] reodered_req;
			wire [N_INPUT - 1:0] reordered_selected_req;
			wire [N_INPUT - 1:0] dereordered_selected_req;
			wire [N_INPUT - 1:0] reversed_reordered_selected_req;
			wire [N_INPUT - 1:0] reversed_dereordered_selected_req;
			reg [N_INPUT_WIDTH - 1:0] round_ptr_q;
			wire [N_INPUT_WIDTH - 1:0] round_ptr_d;
			wire [N_INPUT_WIDTH - 1:0] round_ptr_q_comp;
			wire [N_INPUT_WIDTH - 1:0] oh_to_idx;
			wire [N_INPUT_WIDTH - 1:0] selected_req_idx;
			assign req_vld = update_i | timeout_en;
			always @(posedge clk or negedge rstn)
				if (~rstn)
					round_ptr_q <= 1'sb0;
				else if (req_vld)
					round_ptr_q <= round_ptr_d;
			assign round_ptr_q_comp = N_INPUT - round_ptr_q;
			left_circular_rotate #(.N_INPUT(N_INPUT)) left_circular_rotate_reodered_req_u(
				.ori_vector_i(req_i),
				.req_left_rotate_num_i(round_ptr_q),
				.roteted_vector_o(reodered_req)
			);
			one_hot_priority_encoder #(.SEL_WIDTH(N_INPUT)) biased_one_hot_priority_encoder_u(
				.sel_i(reodered_req),
				.sel_o(reordered_selected_req)
			);
			left_circular_rotate #(.N_INPUT(N_INPUT)) left_circular_rotate_dereordered_selected_req_u(
				.ori_vector_i(reordered_selected_req),
				.req_left_rotate_num_i(round_ptr_q_comp),
				.roteted_vector_o(dereordered_selected_req)
			);
			oh2idx #(.N_INPUT(N_INPUT)) oh2idx_u(
				.oh_i(dereordered_selected_req),
				.idx_o(oh_to_idx)
			);
			assign selected_req_idx = oh_to_idx[N_INPUT_WIDTH - 1:0];
			assign round_ptr_d = (selected_req_idx == {N_INPUT_WIDTH {1'sb0}} ? N_INPUT - 1 : (selected_req_idx == (N_INPUT - 1) ? {N_INPUT_WIDTH {1'sb0}} : (N_INPUT - 1) - selected_req_idx));
			assign grt_o = dereordered_selected_req;
			assign grt_idx_o = selected_req_idx;
			if (TIMEOUT_UPDATE_EN) begin : genblk1
				assign timeout_counter_add = |req_i & ~req_vld;
				assign timeout_counter_clr = req_vld;
				assign timeout_counter_d = (timeout_counter_clr ? {$clog2(TIMEOUT_UPDATE_CYCLE) {1'sb0}} : timeout_counter_q + 1);
				assign timeout_counter_en = timeout_counter_add | (timeout_counter_clr & (timeout_counter_q != {$clog2(TIMEOUT_UPDATE_CYCLE) {1'sb0}}));
				always @(posedge clk or negedge rstn)
					if (~rstn)
						timeout_counter_q <= 1'sb0;
					else if (timeout_counter_en)
						timeout_counter_q <= timeout_counter_d;
				assign timeout_en = timeout_counter_q == TIMEOUT_UPDATE_CYCLE;
			end
			else begin : genblk1
				assign timeout_en = 1'sb0;
			end
		end
	endgenerate
endmodule
module output_port_vc_assignment (
	sa_global_vld_i,
	sa_global_inport_id_oh_i,
	look_ahead_routing_i,
	vc_select_vld_i,
	vc_select_vc_id_i,
	vc_assignment_vld_o,
	vc_assignment_vc_id_o,
	look_ahead_routing_sel_o
);
	parameter OUTPUT_VC_NUM = 4;
	parameter OUTPUT_VC_NUM_IDX_W = (OUTPUT_VC_NUM > 1 ? $clog2(OUTPUT_VC_NUM) : 1);
	parameter SA_GLOBAL_INPUT_NUM = 4;
	parameter SA_GLOBAL_INPUT_NUM_IDX_W = (SA_GLOBAL_INPUT_NUM > 1 ? $clog2(SA_GLOBAL_INPUT_NUM) : 1);
	parameter OUTPUT_TO_N = 0;
	parameter OUTPUT_TO_S = 0;
	parameter OUTPUT_TO_E = 0;
	parameter OUTPUT_TO_W = 0;
	parameter OUTPUT_TO_L = 0;
	input wire sa_global_vld_i;
	input wire [SA_GLOBAL_INPUT_NUM - 1:0] sa_global_inport_id_oh_i;
	input wire [(SA_GLOBAL_INPUT_NUM * 3) - 1:0] look_ahead_routing_i;
	input wire [(OUTPUT_VC_NUM * 2) - 1:0] vc_select_vld_i;
	localparam rvh_noc_pkg_CHANNEL_NUM = 4;
	localparam rvh_noc_pkg_INPUT_PORT_NUMBER = 6;
	localparam rvh_noc_pkg_ROUTER_PORT_NUMBER = 4;
	localparam rvh_noc_pkg_LOCAL_PORT_NUMBER = 2;
	localparam rvh_noc_pkg_QOS_VC_NUM_PER_INPUT = 1;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX = 6;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX_W = 3;
	input wire [(OUTPUT_VC_NUM * 6) - 1:0] vc_select_vc_id_i;
	output reg vc_assignment_vld_o;
	output reg [2:0] vc_assignment_vc_id_o;
	output wire [2:0] look_ahead_routing_sel_o;
	genvar i;
	wire [2:0] look_ahead_routing_sel;
	assign look_ahead_routing_sel_o = 1'sb0;
	wire sa_global_sel_rt_vc_flit_en;
	wire [(OUTPUT_VC_NUM - rvh_noc_pkg_QOS_VC_NUM_PER_INPUT) - 1:0] vc_select_vld;
	wire [((OUTPUT_VC_NUM - rvh_noc_pkg_QOS_VC_NUM_PER_INPUT) * 3) - 1:0] vc_select_vc_id;
	assign sa_global_sel_rt_vc_flit_en = 1'sb0;
	generate
		for (i = 0; i < (OUTPUT_VC_NUM - rvh_noc_pkg_QOS_VC_NUM_PER_INPUT); i = i + 1) begin : gen_vc_select_vld
			assign vc_select_vld[i] = (sa_global_sel_rt_vc_flit_en ? vc_select_vld_i[0] : vc_select_vld_i[((i + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT) * 2) + 1]);
		end
		for (i = 0; i < (OUTPUT_VC_NUM - rvh_noc_pkg_QOS_VC_NUM_PER_INPUT); i = i + 1) begin : gen_vc_select_vc_id
			assign vc_select_vc_id[i * 3+:3] = (sa_global_sel_rt_vc_flit_en ? vc_select_vc_id_i[2-:rvh_noc_pkg_VC_ID_NUM_MAX_W] : vc_select_vc_id_i[((i + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT) * 6) + 5-:3]);
		end
		if (OUTPUT_TO_N) begin : gen_output_to_n
			always @(*) begin
				vc_assignment_vld_o = 1'b0;
				vc_assignment_vc_id_o = 1'sb0;
				case (look_ahead_routing_sel)
					3'd0: begin
						vc_assignment_vld_o = vc_select_vld[0];
						vc_assignment_vc_id_o = vc_select_vc_id[0+:3];
					end
					3'd4: begin
						vc_assignment_vld_o = vc_select_vld[1];
						vc_assignment_vc_id_o = vc_select_vc_id[3+:3];
					end
					default:
						;
				endcase
			end
		end
		if (OUTPUT_TO_S) begin : gen_output_to_s
			always @(*) begin
				vc_assignment_vld_o = 1'b0;
				vc_assignment_vc_id_o = 1'sb0;
				case (look_ahead_routing_sel)
					3'd1: begin
						vc_assignment_vld_o = vc_select_vld[0];
						vc_assignment_vc_id_o = vc_select_vc_id[0+:3];
					end
					3'd4: begin
						vc_assignment_vld_o = vc_select_vld[1];
						vc_assignment_vc_id_o = vc_select_vc_id[3+:3];
					end
					default:
						;
				endcase
			end
		end
		if (OUTPUT_TO_E) begin : gen_output_to_e
			always @(*) begin
				vc_assignment_vld_o = 1'b0;
				vc_assignment_vc_id_o = 1'sb0;
				case (look_ahead_routing_sel)
					3'd0: begin
						vc_assignment_vld_o = vc_select_vld[0];
						vc_assignment_vc_id_o = vc_select_vc_id[0+:3];
					end
					3'd1: begin
						vc_assignment_vld_o = vc_select_vld[1];
						vc_assignment_vc_id_o = vc_select_vc_id[3+:3];
					end
					3'd2: begin
						vc_assignment_vld_o = vc_select_vld[2];
						vc_assignment_vc_id_o = vc_select_vc_id[6+:3];
					end
					3'd4: begin
						vc_assignment_vld_o = vc_select_vld[3];
						vc_assignment_vc_id_o = vc_select_vc_id[9+:3];
					end
					default:
						;
				endcase
			end
		end
		if (OUTPUT_TO_W) begin : gen_output_to_w
			always @(*) begin
				vc_assignment_vld_o = 1'b0;
				vc_assignment_vc_id_o = 1'sb0;
				case (look_ahead_routing_sel)
					3'd0: begin
						vc_assignment_vld_o = vc_select_vld[0];
						vc_assignment_vc_id_o = vc_select_vc_id[0+:3];
					end
					3'd1: begin
						vc_assignment_vld_o = vc_select_vld[1];
						vc_assignment_vc_id_o = vc_select_vc_id[3+:3];
					end
					3'd3: begin
						vc_assignment_vld_o = vc_select_vld[2];
						vc_assignment_vc_id_o = vc_select_vc_id[6+:3];
					end
					3'd4: begin
						vc_assignment_vld_o = vc_select_vld[3];
						vc_assignment_vc_id_o = vc_select_vc_id[9+:3];
					end
					default:
						;
				endcase
			end
		end
		if (OUTPUT_TO_L) begin : gen_output_to_l
			always @(*) begin
				vc_assignment_vld_o = 1'b0;
				vc_assignment_vc_id_o = 1'sb0;
				case (look_ahead_routing_sel)
					default: begin
						vc_assignment_vld_o = vc_select_vld_i[1];
						vc_assignment_vc_id_o = vc_select_vc_id_i[5-:3];
					end
				endcase
			end
		end
	endgenerate
endmodule
module output_port_vc_credit_counter (
	free_vc_credit_vld_i,
	free_vc_credit_vc_id_i,
	consume_vc_credit_vld_i,
	consume_vc_credit_vc_id_i,
	vc_credit_counter_o,
	clk,
	rstn
);
	parameter VC_NUM = 4;
	parameter VC_NUM_IDX_W = (VC_NUM > 1 ? $clog2(VC_NUM) : 1);
	parameter VC_DEPTH = 1;
	parameter VC_DEPTH_COUNTER_W = $clog2(VC_DEPTH + 1);
	input wire free_vc_credit_vld_i;
	input wire [VC_NUM_IDX_W - 1:0] free_vc_credit_vc_id_i;
	input wire consume_vc_credit_vld_i;
	input wire [VC_NUM_IDX_W - 1:0] consume_vc_credit_vc_id_i;
	output wire [(VC_NUM * VC_DEPTH_COUNTER_W) - 1:0] vc_credit_counter_o;
	input wire clk;
	input wire rstn;
	genvar i;
	reg [(VC_NUM * VC_DEPTH_COUNTER_W) - 1:0] vc_credit_counter_d;
	wire [(VC_NUM * VC_DEPTH_COUNTER_W) - 1:0] vc_credit_counter_q;
	wire [(VC_NUM * VC_DEPTH_COUNTER_W) - 1:0] vc_credit_counter_q_plus1;
	wire [(VC_NUM * VC_DEPTH_COUNTER_W) - 1:0] vc_credit_counter_q_minus1;
	reg [VC_NUM - 1:0] vc_credit_counter_ena;
	wire [VC_NUM - 1:0] free_vc_credit_vc_id_hit;
	wire [VC_NUM - 1:0] consume_vc_credit_vc_id_hit;
	generate
		for (i = 0; i < VC_NUM; i = i + 1) begin : gen_vc_credit_vc_id_hit
			assign free_vc_credit_vc_id_hit[i] = free_vc_credit_vld_i & (free_vc_credit_vc_id_i == i[VC_NUM_IDX_W - 1:0]);
			assign consume_vc_credit_vc_id_hit[i] = consume_vc_credit_vld_i & (consume_vc_credit_vc_id_i == i[VC_NUM_IDX_W - 1:0]);
		end
		for (i = 0; i < VC_NUM; i = i + 1) begin : gen_vc_credit_counter_q_plus1
			assign vc_credit_counter_q_plus1[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W] = vc_credit_counter_q[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W] + 1;
		end
		for (i = 0; i < VC_NUM; i = i + 1) begin : gen_vc_credit_counter_q_minus1
			assign vc_credit_counter_q_minus1[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W] = vc_credit_counter_q[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W] - 1;
		end
		for (i = 0; i < VC_NUM; i = i + 1) begin : gen_vc_credit_counter_d
			always @(*) begin
				vc_credit_counter_d[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W] = vc_credit_counter_q[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W];
				vc_credit_counter_ena[i] = 1'b0;
				if (free_vc_credit_vc_id_hit[i] & ~consume_vc_credit_vc_id_hit[i]) begin
					vc_credit_counter_d[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W] = vc_credit_counter_q_plus1[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W];
					vc_credit_counter_ena[i] = 1'b1;
				end
				else if (~free_vc_credit_vc_id_hit[i] & consume_vc_credit_vc_id_hit[i]) begin
					vc_credit_counter_d[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W] = vc_credit_counter_q_minus1[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W];
					vc_credit_counter_ena[i] = 1'b1;
				end
			end
		end
		for (i = 0; i < VC_NUM; i = i + 1) begin : gen_vc_credit_counter_q
			std_dffrve #(.WIDTH(VC_DEPTH_COUNTER_W)) U_DAT_VC_CREDIT_CONTER_REG(
				.clk(clk),
				.rstn(rstn),
				.rst_val(VC_DEPTH[VC_DEPTH_COUNTER_W - 1:0]),
				.en(vc_credit_counter_ena[i]),
				.d(vc_credit_counter_d[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W]),
				.q(vc_credit_counter_q[i * VC_DEPTH_COUNTER_W+:VC_DEPTH_COUNTER_W])
			);
		end
	endgenerate
	assign vc_credit_counter_o = vc_credit_counter_q;
endmodule
module output_port_vc_selection (
	vc_credit_counter_i,
	vc_select_vld_o,
	vc_select_vc_id_o
);
	parameter OUTPUT_VC_NUM = 4;
	parameter OUTPUT_VC_NUM_IDX_W = (OUTPUT_VC_NUM > 1 ? $clog2(OUTPUT_VC_NUM) : 1);
	parameter OUTPUT_VC_DEPTH = 1;
	parameter OUTPUT_VC_DEPTH_IDX_W = $clog2(OUTPUT_VC_DEPTH + 1);
	parameter OUTPUT_TO_L = 0;
	input wire [(OUTPUT_VC_NUM * OUTPUT_VC_DEPTH_IDX_W) - 1:0] vc_credit_counter_i;
	output reg [(OUTPUT_VC_NUM * 2) - 1:0] vc_select_vld_o;
	localparam rvh_noc_pkg_CHANNEL_NUM = 4;
	localparam rvh_noc_pkg_INPUT_PORT_NUMBER = 6;
	localparam rvh_noc_pkg_ROUTER_PORT_NUMBER = 4;
	localparam rvh_noc_pkg_LOCAL_PORT_NUMBER = 2;
	localparam rvh_noc_pkg_QOS_VC_NUM_PER_INPUT = 1;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX = 6;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX_W = 3;
	output reg [(OUTPUT_VC_NUM * 6) - 1:0] vc_select_vc_id_o;
	genvar i;
	wire [OUTPUT_VC_NUM - 1:0] vc_credit_counter_not_empty;
	generate
		for (i = 0; i < OUTPUT_VC_NUM; i = i + 1) begin : genblk1
			assign vc_credit_counter_not_empty[i] = |vc_credit_counter_i[i * OUTPUT_VC_DEPTH_IDX_W+:OUTPUT_VC_DEPTH_IDX_W];
		end
		if (!OUTPUT_TO_L) begin : genblk2
			always @(*) begin : comb_common_vc_id
				begin : sv2v_autoblock_1
					reg signed [31:0] i;
					for (i = rvh_noc_pkg_QOS_VC_NUM_PER_INPUT; i < OUTPUT_VC_NUM; i = i + 1)
						begin
							vc_select_vld_o[(i * 2) + 1] = 1'sb0;
							vc_select_vc_id_o[(i * 6) + 5-:3] = 1'sb0;
							vc_select_vld_o[i * 2] = 1'sb0;
							vc_select_vc_id_o[(i * 6) + 2-:rvh_noc_pkg_VC_ID_NUM_MAX_W] = 1'sb0;
							if (vc_credit_counter_not_empty[i]) begin
								vc_select_vld_o[(i * 2) + 1] = 1'b1;
								vc_select_vc_id_o[(i * 6) + 5-:3] = i[2:0];
							end
							else begin : sv2v_autoblock_2
								reg signed [31:0] j;
								for (j = rvh_noc_pkg_QOS_VC_NUM_PER_INPUT; j < OUTPUT_VC_NUM; j = j + 1)
									if (j != i)
										if (vc_credit_counter_not_empty[j]) begin
											vc_select_vld_o[(i * 2) + 1] = 1'b1;
											vc_select_vc_id_o[(i * 6) + 5-:3] = j[2:0];
										end
							end
						end
				end
			end
		end
		else begin : genblk2
			always @(*) begin : sv2v_autoblock_3
				reg signed [31:0] i;
				for (i = 0; i < OUTPUT_VC_NUM; i = i + 1)
					begin
						vc_select_vld_o[(i * 2) + 1] = 1'sb0;
						vc_select_vc_id_o[(i * 6) + 5-:3] = 1'sb0;
						vc_select_vld_o[i * 2] = 1'sb0;
						vc_select_vc_id_o[(i * 6) + 2-:rvh_noc_pkg_VC_ID_NUM_MAX_W] = 1'sb0;
						if (vc_credit_counter_not_empty[i]) begin
							vc_select_vld_o[(i * 2) + 1] = 1'b1;
							vc_select_vc_id_o[(i * 6) + 5-:3] = i[2:0];
						end
						else begin : sv2v_autoblock_4
							reg signed [31:0] j;
							for (j = 0; j < OUTPUT_VC_NUM; j = j + 1)
								if (j != i)
									if (vc_credit_counter_not_empty[j]) begin
										vc_select_vld_o[(i * 2) + 1] = 1'b1;
										vc_select_vc_id_o[(i * 6) + 5-:3] = j[2:0];
									end
						end
					end
			end
		end
	endgenerate
endmodule
module performance_monitor (
	sa_local_vld_i,
	sa_global_inport_read_vld_i,
	vc_credit_counter_toN_i,
	vc_credit_counter_toS_i,
	vc_credit_counter_toE_i,
	vc_credit_counter_toW_i,
	node_id_x_ths_hop_i,
	node_id_y_ths_hop_i,
	clk,
	rstn
);
	parameter INPUT_PORT_NUM = 5;
	parameter OUTPUT_PORT_NUM = 5;
	parameter LOCAL_PORT_NUM = INPUT_PORT_NUM - 4;
	parameter VC_NUM_INPUT_N = 1 + LOCAL_PORT_NUM;
	parameter VC_NUM_INPUT_S = 1 + LOCAL_PORT_NUM;
	parameter VC_NUM_INPUT_E = 3 + LOCAL_PORT_NUM;
	parameter VC_NUM_INPUT_W = 3 + LOCAL_PORT_NUM;
	parameter VC_NUM_INPUT_L = 4;
	parameter VC_DEPTH_INPUT_N = 2;
	parameter VC_DEPTH_INPUT_S = 2;
	parameter VC_DEPTH_INPUT_E = 2;
	parameter VC_DEPTH_INPUT_W = 2;
	parameter VC_DEPTH_INPUT_L = 2;
	parameter VC_DEPTH_INPUT_N_COUNTER_W = $clog2(VC_DEPTH_INPUT_N + 1);
	parameter VC_DEPTH_INPUT_S_COUNTER_W = $clog2(VC_DEPTH_INPUT_S + 1);
	parameter VC_DEPTH_INPUT_E_COUNTER_W = $clog2(VC_DEPTH_INPUT_E + 1);
	parameter VC_DEPTH_INPUT_W_COUNTER_W = $clog2(VC_DEPTH_INPUT_W + 1);
	parameter VC_DEPTH_INPUT_L_COUNTER_W = $clog2(VC_DEPTH_INPUT_L + 1);
	input wire [INPUT_PORT_NUM - 1:0] sa_local_vld_i;
	input wire [INPUT_PORT_NUM - 1:0] sa_global_inport_read_vld_i;
	input wire [(VC_NUM_INPUT_N * VC_DEPTH_INPUT_N_COUNTER_W) - 1:0] vc_credit_counter_toN_i;
	input wire [(VC_NUM_INPUT_S * VC_DEPTH_INPUT_S_COUNTER_W) - 1:0] vc_credit_counter_toS_i;
	input wire [(VC_NUM_INPUT_E * VC_DEPTH_INPUT_E_COUNTER_W) - 1:0] vc_credit_counter_toE_i;
	input wire [(VC_NUM_INPUT_W * VC_DEPTH_INPUT_W_COUNTER_W) - 1:0] vc_credit_counter_toW_i;
	localparam rvh_noc_pkg_NodeID_X_Width = 2;
	input wire [1:0] node_id_x_ths_hop_i;
	localparam rvh_noc_pkg_NodeID_Y_Width = 2;
	input wire [1:0] node_id_y_ths_hop_i;
	input wire clk;
	input wire rstn;
	genvar i;
	reg [(INPUT_PORT_NUM * 64) - 1:0] sa_local_vld_counter_d;
	wire [(INPUT_PORT_NUM * 64) - 1:0] sa_local_vld_counter_q;
	reg [INPUT_PORT_NUM - 1:0] sa_local_vld_counter_ena;
	reg [(INPUT_PORT_NUM * 64) - 1:0] sa_global_inport_read_vld_counter_d;
	wire [(INPUT_PORT_NUM * 64) - 1:0] sa_global_inport_read_vld_counter_q;
	reg [INPUT_PORT_NUM - 1:0] sa_global_inport_read_vld_counter_ena;
	always @(*) begin
		sa_local_vld_counter_d = sa_local_vld_counter_q;
		sa_local_vld_counter_ena = 1'sb0;
		sa_global_inport_read_vld_counter_d = sa_global_inport_read_vld_counter_q;
		sa_global_inport_read_vld_counter_ena = 1'sb0;
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < INPUT_PORT_NUM; i = i + 1)
				begin
					if (sa_local_vld_i[i]) begin
						sa_local_vld_counter_d[i * 64+:64] = sa_local_vld_counter_d[i * 64+:64] + 1;
						sa_local_vld_counter_ena[i] = 1'b1;
					end
					if (sa_global_inport_read_vld_i[i]) begin
						sa_global_inport_read_vld_counter_d[i * 64+:64] = sa_global_inport_read_vld_counter_d[i * 64+:64] + 1;
						sa_global_inport_read_vld_counter_ena[i] = 1'b1;
					end
				end
		end
	end
	generate
		for (i = 0; i < INPUT_PORT_NUM; i = i + 1) begin : genblk1
			std_dffre #(.WIDTH(64)) U_DAT_SA_LOCAL_VLD_COUNTER(
				.clk(clk),
				.rstn(rstn),
				.en(sa_local_vld_counter_ena[i]),
				.d(sa_local_vld_counter_d[i * 64+:64]),
				.q(sa_local_vld_counter_q[i * 64+:64])
			);
			std_dffre #(.WIDTH(64)) U_DAT_SA_GLOBAL_INPORT_READ_VLD_COUNTER(
				.clk(clk),
				.rstn(rstn),
				.en(sa_global_inport_read_vld_counter_ena[i]),
				.d(sa_global_inport_read_vld_counter_d[i * 64+:64]),
				.q(sa_global_inport_read_vld_counter_q[i * 64+:64])
			);
		end
	endgenerate
endmodule
module priority_encoder (
	sel_i,
	id_vld_o,
	id_o
);
	parameter [31:0] SEL_WIDTH = 8;
	localparam [31:0] SEL_ID_WIDHT = (SEL_WIDTH > 1 ? $clog2(SEL_WIDTH) : 1);
	input wire [SEL_WIDTH - 1:0] sel_i;
	output wire id_vld_o;
	output wire [SEL_ID_WIDHT - 1:0] id_o;
	generate
		if (SEL_WIDTH == 1) begin : genblk1
			assign id_vld_o = sel_i;
			assign id_o = 1'b0;
		end
		else begin : genblk1
			wire [SEL_WIDTH - 1:0] sel_mask;
			wire [SEL_ID_WIDHT + 0:0] sel_result;
			assign sel_mask = ((~sel_i + 1'b1) & sel_i) - 1'b1;
			one_counter #(.DATA_WIDTH(SEL_WIDTH)) one_counter_u(
				.data_i(sel_mask),
				.cnt_o(sel_result)
			);
			assign id_o = sel_result[SEL_ID_WIDHT - 1:0];
			assign id_vld_o = |sel_i;
		end
	endgenerate
endmodule
module priority_req_select (
	req_vld_i,
	req_priority_i,
	req_vld_o
);
	parameter INPUT_NUM = 4;
	parameter INPUT_NUM_IDX_W = (INPUT_NUM > 1 ? $clog2(INPUT_NUM) : 1);
	parameter INPUT_PRIORITY_W = 4;
	input wire [INPUT_NUM - 1:0] req_vld_i;
	input wire [(INPUT_NUM * INPUT_PRIORITY_W) - 1:0] req_priority_i;
	output wire [INPUT_NUM - 1:0] req_vld_o;
	genvar i;
	genvar j;
	wire [(INPUT_NUM * INPUT_NUM) - 1:0] priority_compare_vector;
	generate
		for (i = 0; i < INPUT_NUM; i = i + 1) begin : gen_priority_compare_vector_i
			for (j = 0; j < INPUT_NUM; j = j + 1) begin : gen_priority_compare_vector_j
				if (i == j) begin : gen_diagonal
					assign priority_compare_vector[(i * INPUT_NUM) + j] = req_vld_i[i];
				end
				else begin : gen_others
					assign priority_compare_vector[(i * INPUT_NUM) + j] = ~req_vld_i[j] | (req_priority_i[i * INPUT_PRIORITY_W+:INPUT_PRIORITY_W] >= req_priority_i[j * INPUT_PRIORITY_W+:INPUT_PRIORITY_W]);
				end
			end
		end
		for (i = 0; i < INPUT_NUM; i = i + 1) begin : gen_req_vld_o
			assign req_vld_o[i] = &priority_compare_vector[i * INPUT_NUM+:INPUT_NUM];
		end
	endgenerate
endmodule
module sa_global (
	sa_local_vld_i,
	sa_local_vc_id_i,
	sa_local_qos_value_i,
	sa_global_vld_o,
	sa_global_qos_value_o,
	sa_global_inport_id_oh_o,
	sa_global_inport_vc_id_o,
	vc_assignment_vld_i,
	clk,
	rstn
);
	parameter INPUT_NUM = 4;
	parameter INPUT_NUM_IDX_W = (INPUT_NUM > 1 ? $clog2(INPUT_NUM) : 1);
	input wire [INPUT_NUM - 1:0] sa_local_vld_i;
	localparam rvh_noc_pkg_CHANNEL_NUM = 4;
	localparam rvh_noc_pkg_INPUT_PORT_NUMBER = 6;
	localparam rvh_noc_pkg_ROUTER_PORT_NUMBER = 4;
	localparam rvh_noc_pkg_LOCAL_PORT_NUMBER = 2;
	localparam rvh_noc_pkg_QOS_VC_NUM_PER_INPUT = 1;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX = 6;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX_W = 3;
	input wire [(INPUT_NUM * 3) - 1:0] sa_local_vc_id_i;
	localparam rvh_noc_pkg_QoS_Value_Width = 4;
	input wire [(INPUT_NUM * 4) - 1:0] sa_local_qos_value_i;
	output wire sa_global_vld_o;
	output wire [3:0] sa_global_qos_value_o;
	output wire [INPUT_NUM - 1:0] sa_global_inport_id_oh_o;
	output wire [2:0] sa_global_inport_vc_id_o;
	input wire vc_assignment_vld_i;
	input wire clk;
	input wire rstn;
	wire [INPUT_NUM - 1:0] sa_global_grt_oh;
	wire [INPUT_NUM_IDX_W - 1:0] sa_global_grt_idx;
	wire [INPUT_NUM - 1:0] sa_local_vld_join_arb;
	priority_req_select #(
		.INPUT_NUM(INPUT_NUM),
		.INPUT_PRIORITY_W(rvh_noc_pkg_QoS_Value_Width)
	) sa_local_priority_req_select_u(
		.req_vld_i(sa_local_vld_i),
		.req_priority_i(sa_local_qos_value_i),
		.req_vld_o(sa_local_vld_join_arb)
	);
	one_hot_rr_arb #(
		.N_INPUT(INPUT_NUM),
		.TIMEOUT_UPDATE_EN(1),
		.TIMEOUT_UPDATE_CYCLE(10)
	) sa_global_rr_arb_u(
		.req_i(sa_local_vld_join_arb),
		.update_i(vc_assignment_vld_i),
		.grt_o(sa_global_grt_oh),
		.grt_idx_o(sa_global_grt_idx),
		.rstn(rstn),
		.clk(clk)
	);
	assign sa_global_vld_o = |sa_local_vld_join_arb;
	assign sa_global_inport_id_oh_o = sa_global_grt_oh;
	onehot_mux #(
		.SOURCE_COUNT(INPUT_NUM),
		.DATA_WIDTH(rvh_noc_pkg_VC_ID_NUM_MAX_W)
	) onehot_mux_sa_global_inport_vc_id_o_u(
		.sel_i(sa_global_grt_oh),
		.data_i(sa_local_vc_id_i),
		.data_o(sa_global_inport_vc_id_o)
	);
	onehot_mux #(
		.SOURCE_COUNT(INPUT_NUM),
		.DATA_WIDTH(rvh_noc_pkg_QoS_Value_Width)
	) onehot_mux_sa_global_qos_value_o_u(
		.sel_i(sa_global_grt_oh),
		.data_i(sa_local_qos_value_i),
		.data_o(sa_global_qos_value_o)
	);
endmodule
module sa_local (
	vc_ctrl_head_vld_i,
	vc_ctrl_head_i,
	sa_local_vld_to_sa_global_o,
	sa_local_vld_o,
	sa_local_vc_id_o,
	sa_local_vc_id_oh_o,
	sa_local_qos_value_o,
	inport_read_enable_sa_stage_i,
	clk,
	rstn
);
	parameter INPUT_NUM = 4;
	parameter INPUT_NUM_IDX_W = (INPUT_NUM > 1 ? $clog2(INPUT_NUM) : 1);
	input wire [INPUT_NUM - 1:0] vc_ctrl_head_vld_i;
	localparam rvh_noc_pkg_QoS_Value_Width = 4;
	localparam rvh_noc_pkg_TxnID_Width = 12;
	localparam rvh_noc_pkg_NodeID_Device_Port_Width = 2;
	localparam rvh_noc_pkg_NodeID_X_Width = 2;
	localparam rvh_noc_pkg_NodeID_Y_Width = 2;
	input wire [(INPUT_NUM * 33) - 1:0] vc_ctrl_head_i;
	localparam rvh_noc_pkg_OUTPUT_PORT_NUMBER = 6;
	output wire [5:0] sa_local_vld_to_sa_global_o;
	output wire sa_local_vld_o;
	output wire [INPUT_NUM_IDX_W - 1:0] sa_local_vc_id_o;
	output wire [INPUT_NUM - 1:0] sa_local_vc_id_oh_o;
	output wire [3:0] sa_local_qos_value_o;
	input wire inport_read_enable_sa_stage_i;
	input wire clk;
	input wire rstn;
	genvar i;
	genvar j;
	wire [INPUT_NUM - 1:0] sa_local_grt_oh;
	wire [INPUT_NUM_IDX_W - 1:0] sa_local_grt_idx;
	wire [INPUT_NUM - 1:0] vc_ctrl_head_vld_join_arb;
	wire [(INPUT_NUM * 3) - 1:0] vc_ctrl_head_i_look_ahead_routing;
	wire [(INPUT_NUM * 6) - 1:0] vc_ctrl_head_i_look_ahead_routing_match;
	wire [3:0] vc_ctrl_head_i_qos_value_sel;
	wire [32:0] vc_ctrl_head_sel;
	wire [(INPUT_NUM * 4) - 1:0] vc_ctrl_head_qos_value;
	generate
		for (i = 0; i < INPUT_NUM; i = i + 1) begin : gen_vc_ctrl_head_qos_value
			assign vc_ctrl_head_qos_value[i * 4+:4] = vc_ctrl_head_i[(i * 33) + 3-:rvh_noc_pkg_QoS_Value_Width];
		end
	endgenerate
	priority_req_select #(
		.INPUT_NUM(INPUT_NUM),
		.INPUT_PRIORITY_W(rvh_noc_pkg_QoS_Value_Width)
	) sa_local_priority_req_select_u(
		.req_vld_i(vc_ctrl_head_vld_i),
		.req_priority_i(vc_ctrl_head_qos_value),
		.req_vld_o(vc_ctrl_head_vld_join_arb)
	);
	one_hot_rr_arb #(
		.N_INPUT(INPUT_NUM),
		.TIMEOUT_UPDATE_EN(1),
		.TIMEOUT_UPDATE_CYCLE(10)
	) sa_local_rr_arb_u(
		.req_i(vc_ctrl_head_vld_join_arb),
		.update_i(inport_read_enable_sa_stage_i),
		.grt_o(sa_local_grt_oh),
		.grt_idx_o(sa_local_grt_idx),
		.rstn(rstn),
		.clk(clk)
	);
	assign sa_local_vc_id_o = sa_local_grt_idx;
	assign sa_local_vc_id_oh_o = sa_local_grt_oh;
	assign sa_local_qos_value_o = vc_ctrl_head_sel[3-:rvh_noc_pkg_QoS_Value_Width];
	assign sa_local_vld_o = |vc_ctrl_head_vld_join_arb;
	generate
		for (i = 0; i < rvh_noc_pkg_OUTPUT_PORT_NUMBER; i = i + 1) begin : genblk2
			assign sa_local_vld_to_sa_global_o[i] = vc_ctrl_head_vld_join_arb[sa_local_grt_idx] & vc_ctrl_head_i_look_ahead_routing_match[(sa_local_grt_idx * 6) + i];
		end
		for (i = 0; i < INPUT_NUM; i = i + 1) begin : genblk3
			assign vc_ctrl_head_i_look_ahead_routing[i * 3+:3] = vc_ctrl_head_i[(i * 33) + 6-:3];
		end
		for (i = 0; i < INPUT_NUM; i = i + 1) begin : gen_vc_ctrl_head_i_look_ahead_routing_match_i
			for (j = 0; j < rvh_noc_pkg_OUTPUT_PORT_NUMBER; j = j + 1) begin : gen_vc_ctrl_head_i_look_ahead_routing_match_j
				assign vc_ctrl_head_i_look_ahead_routing_match[(i * 6) + j] = vc_ctrl_head_i_look_ahead_routing[i * 3+:3] == j[2:0];
			end
		end
	endgenerate
	onehot_mux #(
		.SOURCE_COUNT(INPUT_NUM),
		.DATA_WIDTH(33)
	) onehot_mux_qos_value_sel_u(
		.sel_i(sa_local_grt_oh),
		.data_i(vc_ctrl_head_i),
		.data_o(vc_ctrl_head_sel)
	);
endmodule
module select_two_from_n_valid (
	sel_i,
	first_id_needed_vld_i,
	second_id_needed_vld_i,
	first_id_vld_o,
	second_id_vld_o,
	first_id_o,
	second_id_o
);
	parameter [31:0] SEL_WIDTH = 8;
	localparam [31:0] SEL_ID_WIDHT = (SEL_WIDTH > 1 ? $clog2(SEL_WIDTH) : 1);
	input wire [SEL_WIDTH - 1:0] sel_i;
	input wire first_id_needed_vld_i;
	input wire second_id_needed_vld_i;
	output wire first_id_vld_o;
	output wire second_id_vld_o;
	output wire [SEL_ID_WIDHT - 1:0] first_id_o;
	output wire [SEL_ID_WIDHT - 1:0] second_id_o;
	genvar i;
	wire [SEL_WIDTH - 1:0] sel_rev;
	wire first_id_vld_mid;
	wire secondid_vld_mid;
	wire [SEL_ID_WIDHT - 1:0] first_id_mid;
	wire [SEL_ID_WIDHT - 1:0] second_id_mid;
	wire [SEL_ID_WIDHT - 1:0] second_id_mid_comp;
	generate
		for (i = 0; i < SEL_WIDTH; i = i + 1) begin : sel_rev_gen
			assign sel_rev[i] = sel_i[(SEL_WIDTH - 1) - i];
		end
	endgenerate
	priority_encoder #(.SEL_WIDTH(SEL_WIDTH)) first_vld_sel_u(
		.sel_i(sel_i),
		.id_vld_o(first_id_vld_mid),
		.id_o(first_id_mid)
	);
	priority_encoder #(.SEL_WIDTH(SEL_WIDTH)) second_vld_sel_u(
		.sel_i(sel_rev),
		.id_vld_o(secondid_vld_mid),
		.id_o(second_id_mid)
	);
	function automatic [SEL_ID_WIDHT - 1:0] sv2v_cast_E21E7;
		input reg [SEL_ID_WIDHT - 1:0] inp;
		sv2v_cast_E21E7 = inp;
	endfunction
	assign second_id_mid_comp = sv2v_cast_E21E7((SEL_WIDTH - 1) - second_id_mid);
	assign first_id_vld_o = first_id_vld_mid & first_id_needed_vld_i;
	assign second_id_vld_o = (secondid_vld_mid & (~(first_id_mid == second_id_mid_comp) | ~first_id_needed_vld_i)) & second_id_needed_vld_i;
	assign first_id_o = first_id_mid;
	assign second_id_o = second_id_mid_comp;
endmodule
module sp_fifo_dat_vld_output (
	enqueue_vld_i,
	enqueue_payload_i,
	enqueue_rdy_o,
	dequeue_vld_o,
	dequeue_payload_o,
	dequeue_rdy_i,
	payload_dff,
	payload_vld_dff,
	flush_i,
	clk,
	rst
);
	parameter [31:0] DEPTH = 16;
	parameter [31:0] MUST_TAKEN_ALL = 1;
	input wire [0:0] enqueue_vld_i;
	input wire [3:0] enqueue_payload_i;
	output wire [0:0] enqueue_rdy_o;
	output wire [0:0] dequeue_vld_o;
	output wire [3:0] dequeue_payload_o;
	input wire [0:0] dequeue_rdy_i;
	output reg [(DEPTH * 4) - 1:0] payload_dff;
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
			assign dequeue_payload_o[i * 4+:4] = payload_dff[deq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * 4+:4];
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
	always @(posedge clk) begin : payload_dff_update
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < 1; i = i + 1)
				if (enq_fire[i])
					payload_dff[enq_ptr[i * ENTRY_PTR_WIDTH+:ENTRY_PTR_WIDTH] * 4+:4] <= enqueue_payload_i[i * 4+:4];
		end
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
		.INIT_IS_FULL(0),
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
module std_dffe (
	clk,
	en,
	d,
	q
);
	parameter WIDTH = 8;
	input clk;
	input en;
	input [WIDTH - 1:0] d;
	output wire [WIDTH - 1:0] q;
	reg [WIDTH - 1:0] dff_q;
	always @(posedge clk)
		if (en)
			dff_q <= d;
	assign q = dff_q;
endmodule
module std_dffre (
	clk,
	rstn,
	en,
	d,
	q
);
	parameter WIDTH = 8;
	input clk;
	input rstn;
	input en;
	input [WIDTH - 1:0] d;
	output wire [WIDTH - 1:0] q;
	reg [WIDTH - 1:0] dff_q;
	always @(posedge clk or negedge rstn)
		if (~rstn)
			dff_q <= {WIDTH {1'b0}};
		else if (en)
			dff_q <= d;
	assign q = dff_q;
endmodule
module std_dffr (
	clk,
	rstn,
	d,
	q
);
	parameter WIDTH = 8;
	input clk;
	input rstn;
	input [WIDTH - 1:0] d;
	output wire [WIDTH - 1:0] q;
	reg [WIDTH - 1:0] dff_q;
	always @(posedge clk or negedge rstn)
		if (~rstn)
			dff_q <= {WIDTH {1'b0}};
		else
			dff_q <= d;
	assign q = dff_q;
endmodule
module std_dffrve (
	clk,
	rstn,
	rst_val,
	en,
	d,
	q
);
	parameter WIDTH = 8;
	input clk;
	input rstn;
	input [WIDTH - 1:0] rst_val;
	input en;
	input [WIDTH - 1:0] d;
	output wire [WIDTH - 1:0] q;
	reg [WIDTH - 1:0] dff_q;
	always @(posedge clk or negedge rstn)
		if (~rstn)
			dff_q <= rst_val;
		else if (en)
			dff_q <= d;
	assign q = dff_q;
endmodule
module std_dff (
	clk,
	d,
	q
);
	parameter WIDTH = 8;
	input clk;
	input [WIDTH - 1:0] d;
	output wire [WIDTH - 1:0] q;
	reg [WIDTH - 1:0] dff_q;
	always @(posedge clk) dff_q <= d;
	assign q = dff_q;
endmodule
module switch_AC76E (
	vc_data_head_fromN_i,
	vc_data_head_fromS_i,
	vc_data_head_fromE_i,
	vc_data_head_fromW_i,
	vc_data_head_fromL_i,
	inport_read_enable_st_stage_i,
	inport_read_vc_id_st_stage_i,
	outport_vld_st_stage_i,
	outport_select_inport_id_st_stage_i,
	outport_vc_id_st_stage_i,
	outport_look_ahead_routing_st_stage_i,
	tx_flit_pend_o,
	tx_flit_v_o,
	tx_flit_o,
	tx_flit_vc_id_o,
	tx_flit_look_ahead_routing_o
);
	parameter INPUT_PORT_NUM = 5;
	parameter OUTPUT_PORT_NUM = 5;
	parameter LOCAL_PORT_NUM = INPUT_PORT_NUM - 4;
	parameter VC_NUM_INPUT_N = 2;
	parameter VC_NUM_INPUT_S = 2;
	parameter VC_NUM_INPUT_E = 4;
	parameter VC_NUM_INPUT_W = 4;
	parameter VC_NUM_INPUT_L = 4;
	parameter VC_NUM_INPUT_N_IDX_W = (VC_NUM_INPUT_N > 1 ? $clog2(VC_NUM_INPUT_N) : 1);
	parameter VC_NUM_INPUT_S_IDX_W = (VC_NUM_INPUT_S > 1 ? $clog2(VC_NUM_INPUT_S) : 1);
	parameter VC_NUM_INPUT_E_IDX_W = (VC_NUM_INPUT_E > 1 ? $clog2(VC_NUM_INPUT_E) : 1);
	parameter VC_NUM_INPUT_W_IDX_W = (VC_NUM_INPUT_W > 1 ? $clog2(VC_NUM_INPUT_W) : 1);
	parameter VC_NUM_INPUT_L_IDX_W = (VC_NUM_INPUT_L > 1 ? $clog2(VC_NUM_INPUT_L) : 1);
	input wire [(VC_NUM_INPUT_N * 256) - 1:0] vc_data_head_fromN_i;
	input wire [(VC_NUM_INPUT_S * 256) - 1:0] vc_data_head_fromS_i;
	input wire [(VC_NUM_INPUT_E * 256) - 1:0] vc_data_head_fromE_i;
	input wire [(VC_NUM_INPUT_W * 256) - 1:0] vc_data_head_fromW_i;
	input wire [((LOCAL_PORT_NUM * VC_NUM_INPUT_L) * 256) - 1:0] vc_data_head_fromL_i;
	input wire [INPUT_PORT_NUM - 1:0] inport_read_enable_st_stage_i;
	localparam rvh_noc_pkg_CHANNEL_NUM = 4;
	localparam rvh_noc_pkg_INPUT_PORT_NUMBER = 6;
	localparam rvh_noc_pkg_ROUTER_PORT_NUMBER = 4;
	localparam rvh_noc_pkg_LOCAL_PORT_NUMBER = 2;
	localparam rvh_noc_pkg_QOS_VC_NUM_PER_INPUT = 1;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX = 6;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX_W = 3;
	input wire [(INPUT_PORT_NUM * 3) - 1:0] inport_read_vc_id_st_stage_i;
	input wire [OUTPUT_PORT_NUM - 1:0] outport_vld_st_stage_i;
	input wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_select_inport_id_st_stage_i;
	input wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_vc_id_st_stage_i;
	input wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_look_ahead_routing_st_stage_i;
	output wire [OUTPUT_PORT_NUM - 1:0] tx_flit_pend_o;
	output wire [OUTPUT_PORT_NUM - 1:0] tx_flit_v_o;
	output reg [(OUTPUT_PORT_NUM * 256) - 1:0] tx_flit_o;
	output wire [(OUTPUT_PORT_NUM * 3) - 1:0] tx_flit_vc_id_o;
	output wire [(OUTPUT_PORT_NUM * 3) - 1:0] tx_flit_look_ahead_routing_o;
	genvar i;
	assign tx_flit_pend_o = 1'sb1;
	wire [(INPUT_PORT_NUM * 256) - 1:0] vc_head_data;
	assign vc_head_data[0+:256] = vc_data_head_fromN_i[inport_read_vc_id_st_stage_i[VC_NUM_INPUT_N_IDX_W - 1-:VC_NUM_INPUT_N_IDX_W] * 256+:256];
	assign vc_head_data[256+:256] = vc_data_head_fromS_i[inport_read_vc_id_st_stage_i[VC_NUM_INPUT_S_IDX_W + 2-:VC_NUM_INPUT_S_IDX_W] * 256+:256];
	assign vc_head_data[512+:256] = vc_data_head_fromE_i[inport_read_vc_id_st_stage_i[VC_NUM_INPUT_E_IDX_W + 5-:VC_NUM_INPUT_E_IDX_W] * 256+:256];
	assign vc_head_data[768+:256] = vc_data_head_fromW_i[inport_read_vc_id_st_stage_i[VC_NUM_INPUT_W_IDX_W + 8-:VC_NUM_INPUT_W_IDX_W] * 256+:256];
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_vc_data_head_fromL_i
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_vc_data_head_fromL_i
				assign vc_head_data[(4 + i) * 256+:256] = vc_data_head_fromL_i[((i * VC_NUM_INPUT_L) + inport_read_vc_id_st_stage_i[((4 + i) * 3) + (VC_NUM_INPUT_L_IDX_W - 1)-:VC_NUM_INPUT_L_IDX_W]) * 256+:256];
			end
		end
	endgenerate
	assign tx_flit_v_o = outport_vld_st_stage_i;
	assign tx_flit_vc_id_o = outport_vc_id_st_stage_i;
	assign tx_flit_look_ahead_routing_o = outport_look_ahead_routing_st_stage_i;
	always @(*)
		case (outport_select_inport_id_st_stage_i[0+:3])
			3'd1: tx_flit_o[0+:256] = vc_head_data[256+:256];
			3'd2: tx_flit_o[0+:256] = vc_head_data[512+:256];
			3'd3: tx_flit_o[0+:256] = vc_head_data[768+:256];
			3'd4: tx_flit_o[0+:256] = vc_head_data[1024+:256];
			3'd5: tx_flit_o[0+:256] = vc_head_data[1280+:256];
			default: tx_flit_o[0+:256] = vc_head_data[256+:256];
		endcase
	always @(*)
		case (outport_select_inport_id_st_stage_i[3+:3])
			3'd0: tx_flit_o[256+:256] = vc_head_data[0+:256];
			3'd2: tx_flit_o[256+:256] = vc_head_data[512+:256];
			3'd3: tx_flit_o[256+:256] = vc_head_data[768+:256];
			3'd4: tx_flit_o[256+:256] = vc_head_data[1024+:256];
			3'd5: tx_flit_o[256+:256] = vc_head_data[1280+:256];
			default: tx_flit_o[256+:256] = vc_head_data[0+:256];
		endcase
	always @(*)
		case (outport_select_inport_id_st_stage_i[6+:3])
			3'd3: tx_flit_o[512+:256] = vc_head_data[768+:256];
			3'd4: tx_flit_o[512+:256] = vc_head_data[1024+:256];
			3'd5: tx_flit_o[512+:256] = vc_head_data[1280+:256];
			default: tx_flit_o[512+:256] = vc_head_data[768+:256];
		endcase
	always @(*)
		case (outport_select_inport_id_st_stage_i[9+:3])
			3'd2: tx_flit_o[768+:256] = vc_head_data[512+:256];
			3'd4: tx_flit_o[768+:256] = vc_head_data[1024+:256];
			3'd5: tx_flit_o[768+:256] = vc_head_data[1280+:256];
			default: tx_flit_o[768+:256] = vc_head_data[512+:256];
		endcase
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_multi_local_port_in_switch
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_multi_local_port_in_switch
				always @(*)
					case (outport_select_inport_id_st_stage_i[(4 + i) * 3+:3])
						3'd0: tx_flit_o[(4 + i) * 256+:256] = vc_head_data[0+:256];
						3'd1: tx_flit_o[(4 + i) * 256+:256] = vc_head_data[256+:256];
						3'd2: tx_flit_o[(4 + i) * 256+:256] = vc_head_data[512+:256];
						3'd3: tx_flit_o[(4 + i) * 256+:256] = vc_head_data[768+:256];
						3'd4: tx_flit_o[(4 + i) * 256+:256] = vc_head_data[1024+:256];
						3'd5: tx_flit_o[(4 + i) * 256+:256] = vc_head_data[1280+:256];
						default: tx_flit_o[(4 + i) * 256+:256] = vc_head_data[0+:256];
					endcase
			end
		end
	endgenerate
endmodule
module tb_mesh (
	tx_flit_pend_o,
	tx_flit_v_o,
	tx_flit_o,
	tx_flit_vc_id_o,
	tx_flit_look_ahead_routing_o,
	rx_flit_pend_i,
	rx_flit_v_i,
	rx_flit_i,
	rx_flit_vc_id_i,
	rx_flit_look_ahead_routing_i,
	tx_lcrd_v_i,
	tx_lcrd_id_i,
	rx_lcrd_v_o,
	rx_lcrd_id_o,
	clk,
	rstn
);
	parameter NODE_NUM_X_DIMESION = 2;
	parameter NODE_NUM_Y_DIMESION = 2;
	localparam rvh_noc_pkg_INPUT_PORT_NUMBER = 6;
	parameter INPUT_PORT_NUM = rvh_noc_pkg_INPUT_PORT_NUMBER;
	localparam rvh_noc_pkg_OUTPUT_PORT_NUMBER = 6;
	parameter OUTPUT_PORT_NUM = rvh_noc_pkg_OUTPUT_PORT_NUMBER;
	parameter LOCAL_PORT_NUM = INPUT_PORT_NUM - 4;
	localparam rvh_noc_pkg_FLIT_LENGTH = 256;
	localparam rvh_noc_pkg_QOS_VC_NUM_PER_INPUT = 1;
	parameter VC_NUM_INPUT_N = (1 + LOCAL_PORT_NUM) + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_INPUT_S = (1 + LOCAL_PORT_NUM) + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_INPUT_E = (3 + LOCAL_PORT_NUM) + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_INPUT_W = (3 + LOCAL_PORT_NUM) + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_INPUT_L = ((4 + LOCAL_PORT_NUM) - 1) + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
	parameter SA_GLOBAL_INPUT_NUM_N = 3 + LOCAL_PORT_NUM;
	parameter SA_GLOBAL_INPUT_NUM_S = 3 + LOCAL_PORT_NUM;
	parameter SA_GLOBAL_INPUT_NUM_E = 1 + LOCAL_PORT_NUM;
	parameter SA_GLOBAL_INPUT_NUM_W = 1 + LOCAL_PORT_NUM;
	parameter SA_GLOBAL_INPUT_NUM_L = (4 + LOCAL_PORT_NUM) - 1;
	parameter VC_NUM_OUTPUT_N = (1 + LOCAL_PORT_NUM) + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_OUTPUT_S = (1 + LOCAL_PORT_NUM) + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_OUTPUT_E = (3 + LOCAL_PORT_NUM) + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_OUTPUT_W = (3 + LOCAL_PORT_NUM) + rvh_noc_pkg_QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_OUTPUT_L = 1;
	localparam rvh_noc_pkg_VC_DEPTH_MAX = 4;
	parameter VC_DEPTH_INPUT_N = rvh_noc_pkg_VC_DEPTH_MAX;
	parameter VC_DEPTH_INPUT_S = rvh_noc_pkg_VC_DEPTH_MAX;
	parameter VC_DEPTH_INPUT_E = rvh_noc_pkg_VC_DEPTH_MAX;
	parameter VC_DEPTH_INPUT_W = rvh_noc_pkg_VC_DEPTH_MAX;
	parameter VC_DEPTH_INPUT_L = rvh_noc_pkg_VC_DEPTH_MAX;
	parameter signed [31:0] V_CPU_DATA_REQ_NUM_PER_CORE_PER_CYCLE = 3;
	parameter signed [31:0] V_CPU_INST_REQ_NUM_PER_CORE_PER_CYCLE = 1;
	parameter real V_L1D_MISS_RATE = 10;
	parameter real V_L1I_MISS_RATE = 10;
	parameter real V_L2_MISS_RATE = 100;
	parameter signed [31:0] V_CORE_NUM = (NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM;
	parameter signed [31:0] V_CACHE_MISS_ALL_CORE_PER_CYCLE = V_CORE_NUM;
	parameter TEST_CASE_MESH_RANDOM = 1;
	parameter TEST_CASE_MESH_DIAGONAL = !TEST_CASE_MESH_RANDOM;
	parameter RANDOM_BIT_NUM = 168;
	parameter SCOREBOARD_TIMEOUT_EN = !TEST_CASE_MESH_DIAGONAL;
	parameter SCOREBOARD_TIMEOUT_THRESHOLD = 16384;
	parameter TEST_CASE_NUM_PER_CYCLE = RANDOM_BIT_NUM / 3;
	parameter SCOREBOARD_ENTRY_NUM_PER_SENDER = 64;
	parameter SENDER_NUM = (NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM;
	parameter SENDER_FLIT_BUFFER_DEPTH = 512;
	parameter SENDER_TIMEOUT_EN = !TEST_CASE_MESH_DIAGONAL;
	parameter SENDER_TIMEOUT_THRESHOLD = 16384;
	parameter RECEIVER_NUM = SENDER_NUM;
	parameter LONGEST_TEST_CYCLE = 100000;
	output wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) - 1:0] tx_flit_pend_o;
	output wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) - 1:0] tx_flit_v_o;
	output wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) * 256) - 1:0] tx_flit_o;
	localparam rvh_noc_pkg_CHANNEL_NUM = 4;
	localparam rvh_noc_pkg_ROUTER_PORT_NUMBER = 4;
	localparam rvh_noc_pkg_LOCAL_PORT_NUMBER = 2;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX = 6;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX_W = 3;
	output wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) * 3) - 1:0] tx_flit_vc_id_o;
	output wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) * 3) - 1:0] tx_flit_look_ahead_routing_o;
	input wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) - 1:0] rx_flit_pend_i;
	input wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) - 1:0] rx_flit_v_i;
	input wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) * 256) - 1:0] rx_flit_i;
	input wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) * 3) - 1:0] rx_flit_vc_id_i;
	input wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) * 3) - 1:0] rx_flit_look_ahead_routing_i;
	input wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) - 1:0] tx_lcrd_v_i;
	input wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) * 3) - 1:0] tx_lcrd_id_i;
	output wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) - 1:0] rx_lcrd_v_o;
	output wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * LOCAL_PORT_NUM) * 3) - 1:0] rx_lcrd_id_o;
	input wire clk;
	input wire rstn;
	genvar i;
	genvar j;
	genvar k;
	wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) - 1:0] tx_flit_pend;
	wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) - 1:0] tx_flit_v;
	wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) * 256) - 1:0] tx_flit;
	wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) * 3) - 1:0] tx_flit_vc_id;
	wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) * 3) - 1:0] tx_flit_look_ahead_routing;
	wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) - 1:0] rx_flit_pend;
	wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) - 1:0] rx_flit_v;
	wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) * 256) - 1:0] rx_flit;
	wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) * 3) - 1:0] rx_flit_vc_id;
	wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) * 3) - 1:0] rx_flit_look_ahead_routing;
	wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * INPUT_PORT_NUM) - 1:0] tx_lcrd_v;
	wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * INPUT_PORT_NUM) * 3) - 1:0] tx_lcrd_id;
	wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * INPUT_PORT_NUM) - 1:0] rx_lcrd_v;
	wire [(((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * INPUT_PORT_NUM) * 3) - 1:0] rx_lcrd_id;
	localparam rvh_noc_pkg_NodeID_X_Width = 2;
	wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * 2) - 1:0] node_id_x;
	localparam rvh_noc_pkg_NodeID_Y_Width = 2;
	wire [((NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION) * 2) - 1:0] node_id_y;
	generate
		for (i = 0; i < NODE_NUM_X_DIMESION; i = i + 1) begin : gen_mesh_routers_x_dimesion
			for (j = 0; j < NODE_NUM_Y_DIMESION; j = j + 1) begin : gen_mesh_routers_y_dimesion
				vnet_router_25D30 #(
					.INPUT_PORT_NUM(INPUT_PORT_NUM),
					.OUTPUT_PORT_NUM(OUTPUT_PORT_NUM),
					.QOS_VC_NUM_PER_INPUT(rvh_noc_pkg_QOS_VC_NUM_PER_INPUT),
					.VC_NUM_INPUT_N(VC_NUM_INPUT_N),
					.VC_NUM_INPUT_S(VC_NUM_INPUT_S),
					.VC_NUM_INPUT_E(VC_NUM_INPUT_E),
					.VC_NUM_INPUT_W(VC_NUM_INPUT_W),
					.VC_NUM_INPUT_L(VC_NUM_INPUT_L),
					.SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N),
					.SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S),
					.SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E),
					.SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W),
					.SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L),
					.VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N),
					.VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S),
					.VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E),
					.VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W),
					.VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L),
					.VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N),
					.VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S),
					.VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E),
					.VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W),
					.VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L)
				) vnet_router_dut(
					.rx_flit_pend_i(rx_flit_pend[((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM+:OUTPUT_PORT_NUM]),
					.rx_flit_v_i(rx_flit_v[((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM+:OUTPUT_PORT_NUM]),
					.rx_flit_i(rx_flit[256 * (((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM)+:256 * OUTPUT_PORT_NUM]),
					.rx_flit_vc_id_i(rx_flit_vc_id[3 * (((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM)+:3 * OUTPUT_PORT_NUM]),
					.rx_flit_look_ahead_routing_i(rx_flit_look_ahead_routing[3 * (((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM)+:3 * OUTPUT_PORT_NUM]),
					.tx_flit_pend_o(tx_flit_pend[((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM+:OUTPUT_PORT_NUM]),
					.tx_flit_v_o(tx_flit_v[((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM+:OUTPUT_PORT_NUM]),
					.tx_flit_o(tx_flit[256 * (((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM)+:256 * OUTPUT_PORT_NUM]),
					.tx_flit_vc_id_o(tx_flit_vc_id[3 * (((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM)+:3 * OUTPUT_PORT_NUM]),
					.tx_flit_look_ahead_routing_o(tx_flit_look_ahead_routing[3 * (((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM)+:3 * OUTPUT_PORT_NUM]),
					.rx_lcrd_v_o(rx_lcrd_v[((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM+:INPUT_PORT_NUM]),
					.rx_lcrd_id_o(rx_lcrd_id[3 * (((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM)+:3 * INPUT_PORT_NUM]),
					.tx_lcrd_v_i(tx_lcrd_v[((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM+:INPUT_PORT_NUM]),
					.tx_lcrd_id_i(tx_lcrd_id[3 * (((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM)+:3 * INPUT_PORT_NUM]),
					.node_id_x_ths_hop_i(node_id_x[((i * NODE_NUM_Y_DIMESION) + j) * 2+:2]),
					.node_id_y_ths_hop_i(node_id_y[((i * NODE_NUM_Y_DIMESION) + j) * 2+:2]),
					.clk(clk),
					.rstn(rstn)
				);
			end
		end
		for (i = 0; i < NODE_NUM_X_DIMESION; i = i + 1) begin : gen_node_id_x_x_dimesion
			for (j = 0; j < NODE_NUM_Y_DIMESION; j = j + 1) begin : gen_node_id_x_y_dimesion
				assign node_id_x[((i * NODE_NUM_Y_DIMESION) + j) * 2+:2] = i;
			end
		end
		for (i = 0; i < NODE_NUM_Y_DIMESION; i = i + 1) begin : gen_node_id_y_y_dimesion
			for (j = 0; j < NODE_NUM_X_DIMESION; j = j + 1) begin : gen_node_id_y_x_dimesion
				assign node_id_y[((j * NODE_NUM_Y_DIMESION) + i) * 2+:2] = i;
			end
		end
		for (i = 0; i < NODE_NUM_X_DIMESION; i = i + 1) begin : gen_connect_routers_ns_x_dimesion
			for (j = 0; j < (NODE_NUM_Y_DIMESION - 1); j = j + 1) begin : gen_connect_routers_ns_y_dimesion
				assign rx_flit_pend[((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM] = tx_flit_pend[(((i * NODE_NUM_Y_DIMESION) + (j + 1)) * OUTPUT_PORT_NUM) + 1];
				assign rx_flit_v[((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM] = tx_flit_v[(((i * NODE_NUM_Y_DIMESION) + (j + 1)) * OUTPUT_PORT_NUM) + 1];
				assign rx_flit[(((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) * 256+:256] = tx_flit[((((i * NODE_NUM_Y_DIMESION) + (j + 1)) * OUTPUT_PORT_NUM) + 1) * 256+:256];
				assign rx_flit_vc_id[(((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) * 3+:3] = tx_flit_vc_id[((((i * NODE_NUM_Y_DIMESION) + (j + 1)) * OUTPUT_PORT_NUM) + 1) * 3+:3];
				assign rx_flit_look_ahead_routing[(((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) * 3+:3] = tx_flit_look_ahead_routing[((((i * NODE_NUM_Y_DIMESION) + (j + 1)) * OUTPUT_PORT_NUM) + 1) * 3+:3];
				assign tx_lcrd_v[((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM] = rx_lcrd_v[(((i * NODE_NUM_Y_DIMESION) + (j + 1)) * INPUT_PORT_NUM) + 1];
				assign tx_lcrd_id[(((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM) * 3+:3] = rx_lcrd_id[((((i * NODE_NUM_Y_DIMESION) + (j + 1)) * INPUT_PORT_NUM) + 1) * 3+:3];
				assign rx_flit_pend[(((i * NODE_NUM_Y_DIMESION) + (j + 1)) * OUTPUT_PORT_NUM) + 1] = tx_flit_pend[((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM];
				assign rx_flit_v[(((i * NODE_NUM_Y_DIMESION) + (j + 1)) * OUTPUT_PORT_NUM) + 1] = tx_flit_v[((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM];
				assign rx_flit[((((i * NODE_NUM_Y_DIMESION) + (j + 1)) * OUTPUT_PORT_NUM) + 1) * 256+:256] = tx_flit[(((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) * 256+:256];
				assign rx_flit_vc_id[((((i * NODE_NUM_Y_DIMESION) + (j + 1)) * OUTPUT_PORT_NUM) + 1) * 3+:3] = tx_flit_vc_id[(((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) * 3+:3];
				assign rx_flit_look_ahead_routing[((((i * NODE_NUM_Y_DIMESION) + (j + 1)) * OUTPUT_PORT_NUM) + 1) * 3+:3] = tx_flit_look_ahead_routing[(((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) * 3+:3];
				assign tx_lcrd_v[(((i * NODE_NUM_Y_DIMESION) + (j + 1)) * INPUT_PORT_NUM) + 1] = rx_lcrd_v[((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM];
				assign tx_lcrd_id[((((i * NODE_NUM_Y_DIMESION) + (j + 1)) * INPUT_PORT_NUM) + 1) * 3+:3] = rx_lcrd_id[(((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM) * 3+:3];
			end
		end
		for (i = 0; i < NODE_NUM_Y_DIMESION; i = i + 1) begin : gen_connect_routers_ew_x_dimesion
			for (j = 0; j < (NODE_NUM_X_DIMESION - 1); j = j + 1) begin : gen_connect_routers_ew_y_dimesion
				assign rx_flit_pend[(((j * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2] = tx_flit_pend[((((j + 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 3];
				assign rx_flit_v[(((j * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2] = tx_flit_v[((((j + 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 3];
				assign rx_flit[((((j * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2) * 256+:256] = tx_flit[(((((j + 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 3) * 256+:256];
				assign rx_flit_vc_id[((((j * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2) * 3+:3] = tx_flit_vc_id[(((((j + 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 3) * 3+:3];
				assign rx_flit_look_ahead_routing[((((j * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2) * 3+:3] = tx_flit_look_ahead_routing[(((((j + 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 3) * 3+:3];
				assign tx_lcrd_v[(((j * NODE_NUM_Y_DIMESION) + i) * INPUT_PORT_NUM) + 2] = rx_lcrd_v[((((j + 1) * NODE_NUM_Y_DIMESION) + i) * INPUT_PORT_NUM) + 3];
				assign tx_lcrd_id[((((j * NODE_NUM_Y_DIMESION) + i) * INPUT_PORT_NUM) + 2) * 3+:3] = rx_lcrd_id[(((((j + 1) * NODE_NUM_Y_DIMESION) + i) * INPUT_PORT_NUM) + 3) * 3+:3];
				assign rx_flit_pend[((((j + 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 3] = tx_flit_pend[(((j * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2];
				assign rx_flit_v[((((j + 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 3] = tx_flit_v[(((j * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2];
				assign rx_flit[(((((j + 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 3) * 256+:256] = tx_flit[((((j * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2) * 256+:256];
				assign rx_flit_vc_id[(((((j + 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 3) * 3+:3] = tx_flit_vc_id[((((j * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2) * 3+:3];
				assign rx_flit_look_ahead_routing[(((((j + 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 3) * 3+:3] = tx_flit_look_ahead_routing[((((j * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2) * 3+:3];
				assign tx_lcrd_v[((((j + 1) * NODE_NUM_Y_DIMESION) + i) * INPUT_PORT_NUM) + 3] = rx_lcrd_v[(((j * NODE_NUM_Y_DIMESION) + i) * INPUT_PORT_NUM) + 2];
				assign tx_lcrd_id[(((((j + 1) * NODE_NUM_Y_DIMESION) + i) * INPUT_PORT_NUM) + 3) * 3+:3] = rx_lcrd_id[((((j * NODE_NUM_Y_DIMESION) + i) * INPUT_PORT_NUM) + 2) * 3+:3];
			end
		end
		for (i = 0; i < NODE_NUM_X_DIMESION; i = i + 1) begin : gen_unused_non_local_ports_x_dimesion
			assign rx_flit_pend[((i * NODE_NUM_Y_DIMESION) + (NODE_NUM_Y_DIMESION - 1)) * OUTPUT_PORT_NUM] = 1'sb0;
			assign rx_flit_v[((i * NODE_NUM_Y_DIMESION) + (NODE_NUM_Y_DIMESION - 1)) * OUTPUT_PORT_NUM] = 1'sb0;
			assign rx_flit[(((i * NODE_NUM_Y_DIMESION) + (NODE_NUM_Y_DIMESION - 1)) * OUTPUT_PORT_NUM) * 256+:256] = 1'sb0;
			assign rx_flit_vc_id[(((i * NODE_NUM_Y_DIMESION) + (NODE_NUM_Y_DIMESION - 1)) * OUTPUT_PORT_NUM) * 3+:3] = 1'sb0;
			assign rx_flit_look_ahead_routing[(((i * NODE_NUM_Y_DIMESION) + (NODE_NUM_Y_DIMESION - 1)) * OUTPUT_PORT_NUM) * 3+:3] = 1'sb0;
			assign tx_lcrd_v[((i * NODE_NUM_Y_DIMESION) + (NODE_NUM_Y_DIMESION - 1)) * INPUT_PORT_NUM] = 1'sb0;
			assign tx_lcrd_id[(((i * NODE_NUM_Y_DIMESION) + (NODE_NUM_Y_DIMESION - 1)) * INPUT_PORT_NUM) * 3+:3] = 1'sb0;
			assign rx_flit_pend[((i * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) + 1] = 1'sb0;
			assign rx_flit_v[((i * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) + 1] = 1'sb0;
			assign rx_flit[(((i * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) + 1) * 256+:256] = 1'sb0;
			assign rx_flit_vc_id[(((i * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) + 1) * 3+:3] = 1'sb0;
			assign rx_flit_look_ahead_routing[(((i * NODE_NUM_Y_DIMESION) * OUTPUT_PORT_NUM) + 1) * 3+:3] = 1'sb0;
			assign tx_lcrd_v[((i * NODE_NUM_Y_DIMESION) * INPUT_PORT_NUM) + 1] = 1'sb0;
			assign tx_lcrd_id[(((i * NODE_NUM_Y_DIMESION) * INPUT_PORT_NUM) + 1) * 3+:3] = 1'sb0;
		end
		for (i = 0; i < NODE_NUM_Y_DIMESION; i = i + 1) begin : gen_unused_non_local_ports_y_dimesion
			assign rx_flit_pend[((((NODE_NUM_X_DIMESION - 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2] = 1'sb0;
			assign rx_flit_v[((((NODE_NUM_X_DIMESION - 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2] = 1'sb0;
			assign rx_flit[(((((NODE_NUM_X_DIMESION - 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2) * 256+:256] = 1'sb0;
			assign rx_flit_vc_id[(((((NODE_NUM_X_DIMESION - 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2) * 3+:3] = 1'sb0;
			assign rx_flit_look_ahead_routing[(((((NODE_NUM_X_DIMESION - 1) * NODE_NUM_Y_DIMESION) + i) * OUTPUT_PORT_NUM) + 2) * 3+:3] = 1'sb0;
			assign tx_lcrd_v[((((NODE_NUM_X_DIMESION - 1) * NODE_NUM_Y_DIMESION) + i) * INPUT_PORT_NUM) + 2] = 1'sb0;
			assign tx_lcrd_id[(((((NODE_NUM_X_DIMESION - 1) * NODE_NUM_Y_DIMESION) + i) * INPUT_PORT_NUM) + 2) * 3+:3] = 1'sb0;
			assign rx_flit_pend[((0 + i) * OUTPUT_PORT_NUM) + 3] = 1'sb0;
			assign rx_flit_v[((0 + i) * OUTPUT_PORT_NUM) + 3] = 1'sb0;
			assign rx_flit[(((0 + i) * OUTPUT_PORT_NUM) + 3) * 256+:256] = 1'sb0;
			assign rx_flit_vc_id[(((0 + i) * OUTPUT_PORT_NUM) + 3) * 3+:3] = 1'sb0;
			assign rx_flit_look_ahead_routing[(((0 + i) * OUTPUT_PORT_NUM) + 3) * 3+:3] = 1'sb0;
			assign tx_lcrd_v[((0 + i) * INPUT_PORT_NUM) + 3] = 1'sb0;
			assign tx_lcrd_id[(((0 + i) * INPUT_PORT_NUM) + 3) * 3+:3] = 1'sb0;
		end
		for (i = 0; i < NODE_NUM_X_DIMESION; i = i + 1) begin : gen_v_sender_x_dimesion
			for (j = 0; j < NODE_NUM_Y_DIMESION; j = j + 1) begin : gen_v_sender_y_dimesion
				for (k = 0; k < LOCAL_PORT_NUM; k = k + 1) begin : gen_v_sender_device_port
					assign rx_flit_pend[(((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) + (4 + k)] = rx_flit_pend_i[(((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k];
					assign rx_flit_v[(((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) + (4 + k)] = rx_flit_v_i[(((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k];
					assign rx_flit[((((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) + (4 + k)) * 256+:256] = rx_flit_i[((((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k) * 256+:256];
					assign rx_flit_vc_id[((((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) + (4 + k)) * 3+:3] = rx_flit_vc_id_i[((((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k) * 3+:3];
					assign rx_flit_look_ahead_routing[((((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) + (4 + k)) * 3+:3] = rx_flit_look_ahead_routing_i[((((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k) * 3+:3];
					assign rx_lcrd_v_o[(((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k] = rx_lcrd_v[(((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM) + (4 + k)];
					assign rx_lcrd_id_o[((((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k) * 3+:3] = rx_lcrd_id[((((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM) + (4 + k)) * 3+:3];
				end
			end
		end
		for (i = 0; i < NODE_NUM_X_DIMESION; i = i + 1) begin : gen_v_receiver_x_dimesion
			for (j = 0; j < NODE_NUM_Y_DIMESION; j = j + 1) begin : gen_v_receiver_y_dimesion
				for (k = 0; k < LOCAL_PORT_NUM; k = k + 1) begin : gen_v_sender_device_port
					assign tx_flit_pend_o[(((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k] = tx_flit_pend[(((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) + (4 + k)];
					assign tx_flit_v_o[(((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k] = tx_flit_v[(((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) + (4 + k)];
					assign tx_flit_o[((((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k) * 256+:256] = tx_flit[((((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) + (4 + k)) * 256+:256];
					assign tx_flit_vc_id_o[((((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k) * 3+:3] = tx_flit_vc_id[((((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) + (4 + k)) * 3+:3];
					assign tx_flit_look_ahead_routing_o[((((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k) * 3+:3] = tx_flit_look_ahead_routing[((((i * NODE_NUM_Y_DIMESION) + j) * OUTPUT_PORT_NUM) + (4 + k)) * 3+:3];
					assign tx_lcrd_v[(((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM) + (4 + k)] = tx_lcrd_v_i[(((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k];
					assign tx_lcrd_id[((((i * NODE_NUM_Y_DIMESION) + j) * INPUT_PORT_NUM) + (4 + k)) * 3+:3] = tx_lcrd_id_i[((((i * NODE_NUM_Y_DIMESION) + j) * LOCAL_PORT_NUM) + k) * 3+:3];
				end
			end
		end
	endgenerate
endmodule
module usage_manager (
	enq_fire_i,
	deq_fire_i,
	head_o,
	tail_o,
	avail_cnt_o,
	flush_i,
	clk,
	rst
);
	parameter [31:0] ENTRY_COUNT = 8;
	parameter [31:0] ENQ_WIDTH = 2;
	parameter [31:0] DEQ_WIDTH = 2;
	parameter [31:0] FLAG_EN = 0;
	parameter [31:0] INIT_IS_FULL = 0;
	parameter [31:0] COMB_ENQ_EN = 0;
	parameter [31:0] COMB_DEQ_EN = 0;
	localparam [31:0] ENTRY_PTR_WIDTH = $clog2(ENTRY_COUNT);
	localparam [31:0] ENTRY_TAG_WIDTH = ENTRY_PTR_WIDTH + FLAG_EN;
	localparam [31:0] USAGE_CNT_WIDTH = $clog2(ENTRY_COUNT + 1);
	input wire [ENQ_WIDTH - 1:0] enq_fire_i;
	input wire [DEQ_WIDTH - 1:0] deq_fire_i;
	output reg [(DEQ_WIDTH * ENTRY_TAG_WIDTH) - 1:0] head_o;
	output reg [(ENQ_WIDTH * ENTRY_TAG_WIDTH) - 1:0] tail_o;
	output wire [USAGE_CNT_WIDTH - 1:0] avail_cnt_o;
	input wire flush_i;
	input clk;
	input rst;
	localparam [31:0] ENQ_CNT_WIDTH = $clog2(ENQ_WIDTH + 1);
	localparam [31:0] DEQ_CNT_WIDTH = $clog2(DEQ_WIDTH + 1);
	localparam [31:0] IS_2N = (2 ** ENTRY_PTR_WIDTH) == ENTRY_COUNT;
	function automatic [ENTRY_TAG_WIDTH - 1:0] head_ptr_plus;
		input reg [ENTRY_TAG_WIDTH - 1:0] head_ptr_i;
		input reg [DEQ_CNT_WIDTH - 1:0] plus_cnt_i;
		reg flag;
		reg [ENTRY_PTR_WIDTH - 1:0] index;
		reg [ENTRY_PTR_WIDTH:0] sum;
		reg [ENTRY_PTR_WIDTH:0] reverse_sum;
		if (IS_2N)
			head_ptr_plus = head_ptr_i + plus_cnt_i;
		else begin
			index = head_ptr_i[ENTRY_PTR_WIDTH - 1:0];
			flag = head_ptr_i[ENTRY_TAG_WIDTH - 1];
			sum = index + plus_cnt_i;
			reverse_sum = sum - ENTRY_COUNT;
			if (FLAG_EN) begin
				if (~reverse_sum[ENTRY_PTR_WIDTH])
					head_ptr_plus = {~flag, reverse_sum[ENTRY_PTR_WIDTH - 1:0]};
				else
					head_ptr_plus = {flag, sum[ENTRY_PTR_WIDTH - 1:0]};
			end
			else if (~reverse_sum[ENTRY_PTR_WIDTH])
				head_ptr_plus = reverse_sum[ENTRY_PTR_WIDTH - 1:0];
			else
				head_ptr_plus = sum[ENTRY_PTR_WIDTH - 1:0];
		end
	endfunction
	function automatic [ENTRY_TAG_WIDTH - 1:0] ptr_plus_one;
		input reg [ENTRY_TAG_WIDTH - 1:0] ptr_i;
		reg flag;
		reg [ENTRY_PTR_WIDTH - 1:0] index;
		reg reverse_flag;
		if (IS_2N)
			ptr_plus_one = ptr_i + 1'b1;
		else begin
			index = ptr_i[ENTRY_PTR_WIDTH - 1:0];
			flag = ptr_i[ENTRY_TAG_WIDTH - 1];
			if (index == (ENTRY_COUNT - 1)) begin
				index = {ENTRY_PTR_WIDTH {1'b0}};
				reverse_flag = ~flag;
			end
			else begin
				index = ptr_i + 1'b1;
				reverse_flag = flag;
			end
			if (FLAG_EN)
				ptr_plus_one = {reverse_flag, index};
			else
				ptr_plus_one = index;
		end
	endfunction
	function automatic [ENTRY_TAG_WIDTH - 1:0] tail_ptr_plus;
		input reg [ENTRY_TAG_WIDTH - 1:0] tail_ptr_i;
		input reg [ENQ_CNT_WIDTH - 1:0] plus_cnt_i;
		reg flag;
		reg [ENTRY_PTR_WIDTH - 1:0] index;
		reg [ENTRY_PTR_WIDTH:0] sum;
		reg [ENTRY_PTR_WIDTH:0] reverse_sum;
		if (IS_2N)
			tail_ptr_plus = tail_ptr_i + plus_cnt_i;
		else begin
			index = tail_ptr_i[ENTRY_PTR_WIDTH - 1:0];
			flag = tail_ptr_i[ENTRY_TAG_WIDTH - 1];
			sum = index + plus_cnt_i;
			reverse_sum = sum - ENTRY_COUNT;
			if (FLAG_EN) begin
				if (~reverse_sum[ENTRY_PTR_WIDTH])
					tail_ptr_plus = {~flag, reverse_sum[ENTRY_PTR_WIDTH - 1:0]};
				else
					tail_ptr_plus = {flag, sum[ENTRY_PTR_WIDTH - 1:0]};
			end
			else if (~reverse_sum[ENTRY_PTR_WIDTH])
				tail_ptr_plus = reverse_sum[ENTRY_PTR_WIDTH - 1:0];
			else
				tail_ptr_plus = sum[ENTRY_PTR_WIDTH - 1:0];
		end
	endfunction
	wire enq_clk_en;
	wire deq_clk_en;
	wire [ENQ_CNT_WIDTH - 1:0] enq_cnt;
	wire [DEQ_CNT_WIDTH - 1:0] deq_cnt;
	reg [ENTRY_TAG_WIDTH - 1:0] head_ptr_d;
	reg [ENTRY_TAG_WIDTH - 1:0] head_ptr_q;
	reg [ENTRY_TAG_WIDTH - 1:0] tail_ptr_d;
	reg [ENTRY_TAG_WIDTH - 1:0] tail_ptr_q;
	reg [USAGE_CNT_WIDTH - 1:0] avail_cnt_d;
	reg [USAGE_CNT_WIDTH - 1:0] avail_cnt_q;
	assign enq_clk_en = |enq_fire_i;
	assign deq_clk_en = |deq_fire_i;
	always @(*) begin : gen_head
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < DEQ_WIDTH; i = i + 1)
				if (i == 0)
					head_o[i * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH] = head_ptr_q;
				else if (COMB_DEQ_EN)
					head_o[i * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH] = (deq_fire_i[i - 1] ? ptr_plus_one(head_o[(i - 1) * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH]) : head_o[(i - 1) * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH]);
				else
					head_o[i * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH] = ptr_plus_one(head_o[(i - 1) * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH]);
		end
	end
	always @(*) begin : gen_tail
		begin : sv2v_autoblock_2
			reg signed [31:0] i;
			for (i = 0; i < ENQ_WIDTH; i = i + 1)
				if (i == 0)
					tail_o[i * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH] = tail_ptr_q;
				else if (COMB_ENQ_EN)
					tail_o[i * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH] = (enq_fire_i[i - 1] ? ptr_plus_one(tail_o[(i - 1) * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH]) : tail_o[(i - 1) * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH]);
				else
					tail_o[i * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH] = ptr_plus_one(tail_o[(i - 1) * ENTRY_TAG_WIDTH+:ENTRY_TAG_WIDTH]);
		end
	end
	assign avail_cnt_o = avail_cnt_q;
	always @(*) begin : head_ptr_update
		head_ptr_d = head_ptr_q;
		if (deq_clk_en)
			head_ptr_d = head_ptr_plus(head_ptr_q, deq_cnt);
		if (flush_i)
			head_ptr_d = head_ptr_q;
	end
	always @(*) begin : tail_ptr_update
		tail_ptr_d = tail_ptr_q;
		if (enq_clk_en)
			tail_ptr_d = tail_ptr_plus(tail_ptr_q, enq_cnt);
		if (flush_i)
			if ((INIT_IS_FULL == 1) && (FLAG_EN == 1))
				tail_ptr_d = {~head_ptr_q[ENTRY_TAG_WIDTH - 1], head_ptr_q[ENTRY_PTR_WIDTH - 1:0]};
			else
				tail_ptr_d = head_ptr_q;
	end
	always @(*) begin : avail_cnt_update
		avail_cnt_d = avail_cnt_q;
		if (enq_clk_en)
			avail_cnt_d = avail_cnt_q - enq_cnt;
		if (deq_clk_en)
			avail_cnt_d = avail_cnt_q + deq_cnt;
		if (enq_clk_en & deq_clk_en)
			avail_cnt_d = (avail_cnt_q + deq_cnt) - enq_cnt;
		if (flush_i)
			if (INIT_IS_FULL)
				avail_cnt_d = {USAGE_CNT_WIDTH {1'b0}};
			else
				avail_cnt_d = ENTRY_COUNT[USAGE_CNT_WIDTH - 1:0];
	end
	always @(posedge clk) begin : head_ptr_dff
		if (rst)
			head_ptr_q <= {ENTRY_TAG_WIDTH {1'b0}};
		else if (deq_clk_en | flush_i)
			head_ptr_q <= head_ptr_d;
	end
	always @(posedge clk) begin : tail_ptr_dff
		if (rst) begin
			if (INIT_IS_FULL & FLAG_EN)
				tail_ptr_q <= {1'b1, {ENTRY_PTR_WIDTH {1'b0}}};
			else
				tail_ptr_q <= {ENTRY_TAG_WIDTH {1'b0}};
		end
		else if (enq_clk_en | flush_i)
			tail_ptr_q <= tail_ptr_d;
	end
	always @(posedge clk) begin : avail_cnt_dff
		if (rst) begin
			if (INIT_IS_FULL)
				avail_cnt_q <= {USAGE_CNT_WIDTH {1'b0}};
			else
				avail_cnt_q <= ENTRY_COUNT[USAGE_CNT_WIDTH - 1:0];
		end
		else if ((enq_clk_en | deq_clk_en) | flush_i)
			avail_cnt_q <= avail_cnt_d;
	end
	one_counter #(.DATA_WIDTH(ENQ_WIDTH)) u_enq_one_counter(
		.data_i(enq_fire_i),
		.cnt_o(enq_cnt)
	);
	one_counter #(.DATA_WIDTH(DEQ_WIDTH)) u_deq_one_counter(
		.data_i(deq_fire_i),
		.cnt_o(deq_cnt)
	);
endmodule
module vnet_router_25D30 (
	rx_flit_pend_i,
	rx_flit_v_i,
	rx_flit_i,
	rx_flit_vc_id_i,
	rx_flit_look_ahead_routing_i,
	tx_flit_pend_o,
	tx_flit_v_o,
	tx_flit_o,
	tx_flit_vc_id_o,
	tx_flit_look_ahead_routing_o,
	rx_lcrd_v_o,
	rx_lcrd_id_o,
	tx_lcrd_v_i,
	tx_lcrd_id_i,
	node_id_x_ths_hop_i,
	node_id_y_ths_hop_i,
	clk,
	rstn
);
	parameter INPUT_PORT_NUM = 5;
	parameter OUTPUT_PORT_NUM = 5;
	parameter LOCAL_PORT_NUM = INPUT_PORT_NUM - 4;
	parameter QOS_VC_NUM_PER_INPUT = 0;
	parameter VC_NUM_INPUT_N = (1 + LOCAL_PORT_NUM) + QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_INPUT_S = (1 + LOCAL_PORT_NUM) + QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_INPUT_E = (3 + LOCAL_PORT_NUM) + QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_INPUT_W = (3 + LOCAL_PORT_NUM) + QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_INPUT_L = ((4 + LOCAL_PORT_NUM) - 1) + QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_INPUT_N_IDX_W = (VC_NUM_INPUT_N > 1 ? $clog2(VC_NUM_INPUT_N) : 1);
	parameter VC_NUM_INPUT_S_IDX_W = (VC_NUM_INPUT_S > 1 ? $clog2(VC_NUM_INPUT_S) : 1);
	parameter VC_NUM_INPUT_E_IDX_W = (VC_NUM_INPUT_E > 1 ? $clog2(VC_NUM_INPUT_E) : 1);
	parameter VC_NUM_INPUT_W_IDX_W = (VC_NUM_INPUT_W > 1 ? $clog2(VC_NUM_INPUT_W) : 1);
	parameter VC_NUM_INPUT_L_IDX_W = (VC_NUM_INPUT_L > 1 ? $clog2(VC_NUM_INPUT_L) : 1);
	parameter SA_GLOBAL_INPUT_NUM_N = 3 + LOCAL_PORT_NUM;
	parameter SA_GLOBAL_INPUT_NUM_S = 3 + LOCAL_PORT_NUM;
	parameter SA_GLOBAL_INPUT_NUM_E = 1 + LOCAL_PORT_NUM;
	parameter SA_GLOBAL_INPUT_NUM_W = 1 + LOCAL_PORT_NUM;
	parameter SA_GLOBAL_INPUT_NUM_L = (4 + LOCAL_PORT_NUM) - 1;
	parameter SA_GLOBAL_INPUT_NUM_N_IDX_W = (SA_GLOBAL_INPUT_NUM_N > 1 ? $clog2(SA_GLOBAL_INPUT_NUM_N) : 1);
	parameter SA_GLOBAL_INPUT_NUM_S_IDX_W = (SA_GLOBAL_INPUT_NUM_S > 1 ? $clog2(SA_GLOBAL_INPUT_NUM_S) : 1);
	parameter SA_GLOBAL_INPUT_NUM_E_IDX_W = (SA_GLOBAL_INPUT_NUM_E > 1 ? $clog2(SA_GLOBAL_INPUT_NUM_E) : 1);
	parameter SA_GLOBAL_INPUT_NUM_W_IDX_W = (SA_GLOBAL_INPUT_NUM_W > 1 ? $clog2(SA_GLOBAL_INPUT_NUM_W) : 1);
	parameter SA_GLOBAL_INPUT_NUM_L_IDX_W = (SA_GLOBAL_INPUT_NUM_L > 1 ? $clog2(SA_GLOBAL_INPUT_NUM_L) : 1);
	parameter VC_NUM_OUTPUT_N = (1 + LOCAL_PORT_NUM) + QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_OUTPUT_S = (1 + LOCAL_PORT_NUM) + QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_OUTPUT_E = (3 + LOCAL_PORT_NUM) + QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_OUTPUT_W = (3 + LOCAL_PORT_NUM) + QOS_VC_NUM_PER_INPUT;
	parameter VC_NUM_OUTPUT_L = 1;
	parameter VC_NUM_OUTPUT_N_IDX_W = (VC_NUM_OUTPUT_N > 1 ? $clog2(VC_NUM_OUTPUT_N) : 1);
	parameter VC_NUM_OUTPUT_S_IDX_W = (VC_NUM_OUTPUT_S > 1 ? $clog2(VC_NUM_OUTPUT_S) : 1);
	parameter VC_NUM_OUTPUT_E_IDX_W = (VC_NUM_OUTPUT_E > 1 ? $clog2(VC_NUM_OUTPUT_E) : 1);
	parameter VC_NUM_OUTPUT_W_IDX_W = (VC_NUM_OUTPUT_W > 1 ? $clog2(VC_NUM_OUTPUT_W) : 1);
	parameter VC_NUM_OUTPUT_L_IDX_W = (VC_NUM_OUTPUT_L > 1 ? $clog2(VC_NUM_OUTPUT_L) : 1);
	parameter VC_DEPTH_INPUT_N = 2;
	parameter VC_DEPTH_INPUT_S = 2;
	parameter VC_DEPTH_INPUT_E = 2;
	parameter VC_DEPTH_INPUT_W = 2;
	parameter VC_DEPTH_INPUT_L = 2;
	parameter VC_DEPTH_OUTPUT_N = VC_DEPTH_INPUT_N;
	parameter VC_DEPTH_OUTPUT_S = VC_DEPTH_INPUT_S;
	parameter VC_DEPTH_OUTPUT_E = VC_DEPTH_INPUT_E;
	parameter VC_DEPTH_OUTPUT_W = VC_DEPTH_INPUT_W;
	parameter VC_DEPTH_OUTPUT_L = VC_DEPTH_INPUT_L;
	parameter VC_DEPTH_OUTPUT_N_COUNTER_W = $clog2(VC_DEPTH_OUTPUT_N + 1);
	parameter VC_DEPTH_OUTPUT_S_COUNTER_W = $clog2(VC_DEPTH_OUTPUT_S + 1);
	parameter VC_DEPTH_OUTPUT_E_COUNTER_W = $clog2(VC_DEPTH_OUTPUT_E + 1);
	parameter VC_DEPTH_OUTPUT_W_COUNTER_W = $clog2(VC_DEPTH_OUTPUT_W + 1);
	parameter VC_DEPTH_OUTPUT_L_COUNTER_W = $clog2(VC_DEPTH_OUTPUT_L + 1);
	input wire [INPUT_PORT_NUM - 1:0] rx_flit_pend_i;
	input wire [INPUT_PORT_NUM - 1:0] rx_flit_v_i;
	input wire [(INPUT_PORT_NUM * 256) - 1:0] rx_flit_i;
	localparam rvh_noc_pkg_CHANNEL_NUM = 4;
	localparam rvh_noc_pkg_INPUT_PORT_NUMBER = 6;
	localparam rvh_noc_pkg_ROUTER_PORT_NUMBER = 4;
	localparam rvh_noc_pkg_LOCAL_PORT_NUMBER = 2;
	localparam rvh_noc_pkg_QOS_VC_NUM_PER_INPUT = 1;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX = 6;
	localparam rvh_noc_pkg_VC_ID_NUM_MAX_W = 3;
	input wire [(INPUT_PORT_NUM * 3) - 1:0] rx_flit_vc_id_i;
	input wire [(INPUT_PORT_NUM * 3) - 1:0] rx_flit_look_ahead_routing_i;
	output wire [OUTPUT_PORT_NUM - 1:0] tx_flit_pend_o;
	output wire [OUTPUT_PORT_NUM - 1:0] tx_flit_v_o;
	output wire [(OUTPUT_PORT_NUM * 256) - 1:0] tx_flit_o;
	output wire [(OUTPUT_PORT_NUM * 3) - 1:0] tx_flit_vc_id_o;
	output wire [(OUTPUT_PORT_NUM * 3) - 1:0] tx_flit_look_ahead_routing_o;
	output wire [INPUT_PORT_NUM - 1:0] rx_lcrd_v_o;
	output wire [(INPUT_PORT_NUM * 3) - 1:0] rx_lcrd_id_o;
	input wire [OUTPUT_PORT_NUM - 1:0] tx_lcrd_v_i;
	input wire [(OUTPUT_PORT_NUM * 3) - 1:0] tx_lcrd_id_i;
	localparam rvh_noc_pkg_NodeID_X_Width = 2;
	input wire [1:0] node_id_x_ths_hop_i;
	localparam rvh_noc_pkg_NodeID_Y_Width = 2;
	input wire [1:0] node_id_y_ths_hop_i;
	input wire clk;
	input wire rstn;
	genvar i;
	genvar j;
	genvar k;
	wire [INPUT_PORT_NUM - 1:0] inport_read_enable_sa_stage;
	wire [(INPUT_PORT_NUM * 3) - 1:0] inport_read_vc_id_sa_stage;
	wire [OUTPUT_PORT_NUM - 1:0] outport_vld_sa_stage;
	wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_select_inport_id_sa_stage;
	wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_vc_id_sa_stage;
	wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_look_ahead_routing_sa_stage;
	wire [OUTPUT_PORT_NUM - 1:0] consume_vc_credit_vld;
	wire [(OUTPUT_PORT_NUM * 3) - 1:0] consume_vc_credit_vc_id;
	wire [INPUT_PORT_NUM - 1:0] inport_read_enable_st_stage;
	wire [(INPUT_PORT_NUM * 3) - 1:0] inport_read_vc_id_st_stage;
	wire [OUTPUT_PORT_NUM - 1:0] outport_vld_st_stage;
	wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_select_inport_id_st_stage;
	wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_vc_id_st_stage;
	wire [(OUTPUT_PORT_NUM * 3) - 1:0] outport_look_ahead_routing_st_stage;
	wire [OUTPUT_PORT_NUM - 1:0] vc_assignment_vld;
	wire [(OUTPUT_PORT_NUM * 3) - 1:0] vc_assignment_vc_id;
	wire [(OUTPUT_PORT_NUM * 3) - 1:0] look_ahead_routing_sel;
	localparam rvh_noc_pkg_OUTPUT_PORT_NUMBER = 6;
	wire [(INPUT_PORT_NUM * 6) - 1:0] sa_local_vld_to_sa_global;
	wire [INPUT_PORT_NUM - 1:0] sa_local_vld;
	wire [(INPUT_PORT_NUM * 3) - 1:0] sa_local_vc_id;
	wire [(INPUT_PORT_NUM * 6) - 1:0] sa_local_vc_id_oh;
	localparam rvh_noc_pkg_QoS_Value_Width = 4;
	wire [(INPUT_PORT_NUM * 4) - 1:0] sa_local_qos_value;
	wire [VC_NUM_INPUT_N - 1:0] vc_ctrl_head_vld_N;
	localparam rvh_noc_pkg_TxnID_Width = 12;
	localparam rvh_noc_pkg_NodeID_Device_Port_Width = 2;
	wire [(VC_NUM_INPUT_N * 33) - 1:0] vc_ctrl_head_N;
	wire [VC_NUM_INPUT_S - 1:0] vc_ctrl_head_vld_S;
	wire [(VC_NUM_INPUT_S * 33) - 1:0] vc_ctrl_head_S;
	wire [VC_NUM_INPUT_E - 1:0] vc_ctrl_head_vld_E;
	wire [(VC_NUM_INPUT_E * 33) - 1:0] vc_ctrl_head_E;
	wire [VC_NUM_INPUT_W - 1:0] vc_ctrl_head_vld_W;
	wire [(VC_NUM_INPUT_W * 33) - 1:0] vc_ctrl_head_W;
	wire [(VC_NUM_INPUT_N * 256) - 1:0] vc_data_head_N;
	wire [(VC_NUM_INPUT_S * 256) - 1:0] vc_data_head_S;
	wire [(VC_NUM_INPUT_E * 256) - 1:0] vc_data_head_E;
	wire [(VC_NUM_INPUT_W * 256) - 1:0] vc_data_head_W;
	wire [(LOCAL_PORT_NUM * VC_NUM_INPUT_L) - 1:0] vc_ctrl_head_vld_L;
	wire [((LOCAL_PORT_NUM * VC_NUM_INPUT_L) * 33) - 1:0] vc_ctrl_head_L;
	wire [((LOCAL_PORT_NUM * VC_NUM_INPUT_L) * 256) - 1:0] vc_data_head_L;
	input_port_226D0 #(
		.VC_NUM(VC_NUM_INPUT_N),
		.VC_DEPTH(VC_DEPTH_INPUT_N),
		.INPUT_PORT_NO(0)
	) input_port_fromN_u(
		.rx_flit_pend_i(rx_flit_pend_i[0]),
		.rx_flit_v_i(rx_flit_v_i[0]),
		.rx_flit_i(rx_flit_i[0+:256]),
		.rx_flit_vc_id_i(rx_flit_vc_id_i[VC_NUM_INPUT_N_IDX_W - 1-:VC_NUM_INPUT_N_IDX_W]),
		.rx_flit_look_ahead_routing_i(rx_flit_look_ahead_routing_i[0+:3]),
		.rx_lcrd_v_o(rx_lcrd_v_o[0]),
		.rx_lcrd_id_o(rx_lcrd_id_o[0+:3]),
		.vc_ctrl_head_vld_o(vc_ctrl_head_vld_N),
		.vc_ctrl_head_o(vc_ctrl_head_N),
		.vc_data_head_o(vc_data_head_N),
		.inport_read_enable_sa_stage_i(inport_read_enable_sa_stage[0]),
		.inport_read_vc_id_sa_stage_i(sa_local_vc_id[VC_NUM_INPUT_N_IDX_W - 1-:VC_NUM_INPUT_N_IDX_W]),
		.inport_read_enable_st_stage_i(inport_read_enable_st_stage[0]),
		.inport_read_vc_id_st_stage_i(inport_read_vc_id_st_stage[VC_NUM_INPUT_N_IDX_W - 1-:VC_NUM_INPUT_N_IDX_W]),
		.node_id_x_ths_hop_i(node_id_x_ths_hop_i),
		.node_id_y_ths_hop_i(node_id_y_ths_hop_i),
		.clk(clk),
		.rstn(rstn)
	);
	input_port_226D0 #(
		.VC_NUM(VC_NUM_INPUT_S),
		.VC_DEPTH(VC_DEPTH_INPUT_S),
		.INPUT_PORT_NO(1)
	) input_port_fromS_u(
		.rx_flit_pend_i(rx_flit_pend_i[1]),
		.rx_flit_v_i(rx_flit_v_i[1]),
		.rx_flit_i(rx_flit_i[256+:256]),
		.rx_flit_vc_id_i(rx_flit_vc_id_i[VC_NUM_INPUT_S_IDX_W + 2-:VC_NUM_INPUT_S_IDX_W]),
		.rx_flit_look_ahead_routing_i(rx_flit_look_ahead_routing_i[3+:3]),
		.rx_lcrd_v_o(rx_lcrd_v_o[1]),
		.rx_lcrd_id_o(rx_lcrd_id_o[3+:3]),
		.vc_ctrl_head_vld_o(vc_ctrl_head_vld_S),
		.vc_ctrl_head_o(vc_ctrl_head_S),
		.vc_data_head_o(vc_data_head_S),
		.inport_read_enable_sa_stage_i(inport_read_enable_sa_stage[1]),
		.inport_read_vc_id_sa_stage_i(sa_local_vc_id[VC_NUM_INPUT_S_IDX_W + 2-:VC_NUM_INPUT_S_IDX_W]),
		.inport_read_enable_st_stage_i(inport_read_enable_st_stage[1]),
		.inport_read_vc_id_st_stage_i(inport_read_vc_id_st_stage[VC_NUM_INPUT_S_IDX_W + 2-:VC_NUM_INPUT_S_IDX_W]),
		.node_id_x_ths_hop_i(node_id_x_ths_hop_i),
		.node_id_y_ths_hop_i(node_id_y_ths_hop_i),
		.clk(clk),
		.rstn(rstn)
	);
	input_port_226D0 #(
		.VC_NUM(VC_NUM_INPUT_E),
		.VC_DEPTH(VC_DEPTH_INPUT_E),
		.INPUT_PORT_NO(2)
	) input_port_fromE_u(
		.rx_flit_pend_i(rx_flit_pend_i[2]),
		.rx_flit_v_i(rx_flit_v_i[2]),
		.rx_flit_i(rx_flit_i[512+:256]),
		.rx_flit_vc_id_i(rx_flit_vc_id_i[VC_NUM_INPUT_E_IDX_W + 5-:VC_NUM_INPUT_E_IDX_W]),
		.rx_flit_look_ahead_routing_i(rx_flit_look_ahead_routing_i[6+:3]),
		.rx_lcrd_v_o(rx_lcrd_v_o[2]),
		.rx_lcrd_id_o(rx_lcrd_id_o[6+:3]),
		.vc_ctrl_head_vld_o(vc_ctrl_head_vld_E),
		.vc_ctrl_head_o(vc_ctrl_head_E),
		.vc_data_head_o(vc_data_head_E),
		.inport_read_enable_sa_stage_i(inport_read_enable_sa_stage[2]),
		.inport_read_vc_id_sa_stage_i(sa_local_vc_id[VC_NUM_INPUT_E_IDX_W + 5-:VC_NUM_INPUT_E_IDX_W]),
		.inport_read_enable_st_stage_i(inport_read_enable_st_stage[2]),
		.inport_read_vc_id_st_stage_i(inport_read_vc_id_st_stage[VC_NUM_INPUT_E_IDX_W + 5-:VC_NUM_INPUT_E_IDX_W]),
		.node_id_x_ths_hop_i(node_id_x_ths_hop_i),
		.node_id_y_ths_hop_i(node_id_y_ths_hop_i),
		.clk(clk),
		.rstn(rstn)
	);
	input_port_226D0 #(
		.VC_NUM(VC_NUM_INPUT_W),
		.VC_DEPTH(VC_DEPTH_INPUT_W),
		.INPUT_PORT_NO(3)
	) input_port_fromW_u(
		.rx_flit_pend_i(rx_flit_pend_i[3]),
		.rx_flit_v_i(rx_flit_v_i[3]),
		.rx_flit_i(rx_flit_i[768+:256]),
		.rx_flit_vc_id_i(rx_flit_vc_id_i[VC_NUM_INPUT_W_IDX_W + 8-:VC_NUM_INPUT_W_IDX_W]),
		.rx_flit_look_ahead_routing_i(rx_flit_look_ahead_routing_i[9+:3]),
		.rx_lcrd_v_o(rx_lcrd_v_o[3]),
		.rx_lcrd_id_o(rx_lcrd_id_o[9+:3]),
		.vc_ctrl_head_vld_o(vc_ctrl_head_vld_W),
		.vc_ctrl_head_o(vc_ctrl_head_W),
		.vc_data_head_o(vc_data_head_W),
		.inport_read_enable_sa_stage_i(inport_read_enable_sa_stage[3]),
		.inport_read_vc_id_sa_stage_i(sa_local_vc_id[VC_NUM_INPUT_W_IDX_W + 8-:VC_NUM_INPUT_W_IDX_W]),
		.inport_read_enable_st_stage_i(inport_read_enable_st_stage[3]),
		.inport_read_vc_id_st_stage_i(inport_read_vc_id_st_stage[VC_NUM_INPUT_W_IDX_W + 8-:VC_NUM_INPUT_W_IDX_W]),
		.node_id_x_ths_hop_i(node_id_x_ths_hop_i),
		.node_id_y_ths_hop_i(node_id_y_ths_hop_i),
		.clk(clk),
		.rstn(rstn)
	);
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_input_port_fromL
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_input_port_fromL
				input_port_226D0 #(
					.VC_NUM(VC_NUM_INPUT_L),
					.VC_DEPTH(VC_DEPTH_INPUT_L),
					.INPUT_PORT_NO(4 + i)
				) input_port_fromL_u(
					.rx_flit_pend_i(rx_flit_pend_i[4 + i]),
					.rx_flit_v_i(rx_flit_v_i[4 + i]),
					.rx_flit_i(rx_flit_i[(4 + i) * 256+:256]),
					.rx_flit_vc_id_i(rx_flit_vc_id_i[((4 + i) * 3) + (VC_NUM_INPUT_L_IDX_W - 1)-:VC_NUM_INPUT_L_IDX_W]),
					.rx_flit_look_ahead_routing_i(rx_flit_look_ahead_routing_i[(4 + i) * 3+:3]),
					.rx_lcrd_v_o(rx_lcrd_v_o[4 + i]),
					.rx_lcrd_id_o(rx_lcrd_id_o[(4 + i) * 3+:3]),
					.vc_ctrl_head_vld_o(vc_ctrl_head_vld_L[i * VC_NUM_INPUT_L+:VC_NUM_INPUT_L]),
					.vc_ctrl_head_o(vc_ctrl_head_L[33 * (i * VC_NUM_INPUT_L)+:33 * VC_NUM_INPUT_L]),
					.vc_data_head_o(vc_data_head_L[256 * (i * VC_NUM_INPUT_L)+:256 * VC_NUM_INPUT_L]),
					.inport_read_enable_sa_stage_i(inport_read_enable_sa_stage[4 + i]),
					.inport_read_vc_id_sa_stage_i(sa_local_vc_id[((4 + i) * 3) + (VC_NUM_INPUT_L_IDX_W - 1)-:VC_NUM_INPUT_L_IDX_W]),
					.inport_read_enable_st_stage_i(inport_read_enable_st_stage[4 + i]),
					.inport_read_vc_id_st_stage_i(inport_read_vc_id_st_stage[((4 + i) * 3) + (VC_NUM_INPUT_L_IDX_W - 1)-:VC_NUM_INPUT_L_IDX_W]),
					.node_id_x_ths_hop_i(node_id_x_ths_hop_i),
					.node_id_y_ths_hop_i(node_id_y_ths_hop_i),
					.clk(clk),
					.rstn(rstn)
				);
			end
		end
	endgenerate
	sa_local #(.INPUT_NUM(VC_NUM_INPUT_N)) sa_local_fromN_u(
		.vc_ctrl_head_vld_i(vc_ctrl_head_vld_N),
		.vc_ctrl_head_i(vc_ctrl_head_N),
		.sa_local_vld_to_sa_global_o(sa_local_vld_to_sa_global[0+:6]),
		.sa_local_vld_o(sa_local_vld[0]),
		.sa_local_vc_id_o(sa_local_vc_id[VC_NUM_INPUT_N_IDX_W - 1-:VC_NUM_INPUT_N_IDX_W]),
		.sa_local_vc_id_oh_o(sa_local_vc_id_oh[VC_NUM_INPUT_N - 1-:VC_NUM_INPUT_N]),
		.sa_local_qos_value_o(sa_local_qos_value[0+:4]),
		.inport_read_enable_sa_stage_i(inport_read_enable_sa_stage[0]),
		.clk(clk),
		.rstn(rstn)
	);
	generate
		if (rvh_noc_pkg_VC_ID_NUM_MAX_W > VC_NUM_INPUT_N_IDX_W) begin : genblk2
			assign sa_local_vc_id[0 + (2 >= VC_NUM_INPUT_N_IDX_W ? 2 : (2 + (2 >= VC_NUM_INPUT_N_IDX_W ? 3 - VC_NUM_INPUT_N_IDX_W : VC_NUM_INPUT_N_IDX_W - 1)) - 1)-:(2 >= VC_NUM_INPUT_N_IDX_W ? 3 - VC_NUM_INPUT_N_IDX_W : VC_NUM_INPUT_N_IDX_W - 1)] = 1'sb0;
		end
	endgenerate
	sa_local #(.INPUT_NUM(VC_NUM_INPUT_S)) sa_local_fromS_u(
		.vc_ctrl_head_vld_i(vc_ctrl_head_vld_S),
		.vc_ctrl_head_i(vc_ctrl_head_S),
		.sa_local_vld_to_sa_global_o(sa_local_vld_to_sa_global[6+:6]),
		.sa_local_vld_o(sa_local_vld[1]),
		.sa_local_vc_id_o(sa_local_vc_id[VC_NUM_INPUT_S_IDX_W + 2-:VC_NUM_INPUT_S_IDX_W]),
		.sa_local_vc_id_oh_o(sa_local_vc_id_oh[VC_NUM_INPUT_S + 5-:VC_NUM_INPUT_S]),
		.sa_local_qos_value_o(sa_local_qos_value[4+:4]),
		.inport_read_enable_sa_stage_i(inport_read_enable_sa_stage[1]),
		.clk(clk),
		.rstn(rstn)
	);
	generate
		if (rvh_noc_pkg_VC_ID_NUM_MAX_W > VC_NUM_INPUT_S_IDX_W) begin : genblk3
			assign sa_local_vc_id[3 + (2 >= VC_NUM_INPUT_S_IDX_W ? 2 : (2 + (2 >= VC_NUM_INPUT_S_IDX_W ? 3 - VC_NUM_INPUT_S_IDX_W : VC_NUM_INPUT_S_IDX_W - 1)) - 1)-:(2 >= VC_NUM_INPUT_S_IDX_W ? 3 - VC_NUM_INPUT_S_IDX_W : VC_NUM_INPUT_S_IDX_W - 1)] = 1'sb0;
		end
	endgenerate
	sa_local #(.INPUT_NUM(VC_NUM_INPUT_E)) sa_local_fromE_u(
		.vc_ctrl_head_vld_i(vc_ctrl_head_vld_E),
		.vc_ctrl_head_i(vc_ctrl_head_E),
		.sa_local_vld_to_sa_global_o(sa_local_vld_to_sa_global[12+:6]),
		.sa_local_vld_o(sa_local_vld[2]),
		.sa_local_vc_id_o(sa_local_vc_id[VC_NUM_INPUT_E_IDX_W + 5-:VC_NUM_INPUT_E_IDX_W]),
		.sa_local_vc_id_oh_o(sa_local_vc_id_oh[VC_NUM_INPUT_E + 11-:VC_NUM_INPUT_E]),
		.sa_local_qos_value_o(sa_local_qos_value[8+:4]),
		.inport_read_enable_sa_stage_i(inport_read_enable_sa_stage[2]),
		.clk(clk),
		.rstn(rstn)
	);
	generate
		if (rvh_noc_pkg_VC_ID_NUM_MAX_W > VC_NUM_INPUT_E_IDX_W) begin : genblk4
			assign sa_local_vc_id[6 + (2 >= VC_NUM_INPUT_E_IDX_W ? 2 : (2 + (2 >= VC_NUM_INPUT_E_IDX_W ? 3 - VC_NUM_INPUT_E_IDX_W : VC_NUM_INPUT_E_IDX_W - 1)) - 1)-:(2 >= VC_NUM_INPUT_E_IDX_W ? 3 - VC_NUM_INPUT_E_IDX_W : VC_NUM_INPUT_E_IDX_W - 1)] = 1'sb0;
		end
	endgenerate
	sa_local #(.INPUT_NUM(VC_NUM_INPUT_W)) sa_local_fromW_u(
		.vc_ctrl_head_vld_i(vc_ctrl_head_vld_W),
		.vc_ctrl_head_i(vc_ctrl_head_W),
		.sa_local_vld_to_sa_global_o(sa_local_vld_to_sa_global[18+:6]),
		.sa_local_vld_o(sa_local_vld[3]),
		.sa_local_vc_id_o(sa_local_vc_id[VC_NUM_INPUT_W_IDX_W + 8-:VC_NUM_INPUT_W_IDX_W]),
		.sa_local_vc_id_oh_o(sa_local_vc_id_oh[VC_NUM_INPUT_W + 17-:VC_NUM_INPUT_W]),
		.sa_local_qos_value_o(sa_local_qos_value[12+:4]),
		.inport_read_enable_sa_stage_i(inport_read_enable_sa_stage[3]),
		.clk(clk),
		.rstn(rstn)
	);
	generate
		if (rvh_noc_pkg_VC_ID_NUM_MAX_W > VC_NUM_INPUT_W_IDX_W) begin : genblk5
			assign sa_local_vc_id[9 + (2 >= VC_NUM_INPUT_W_IDX_W ? 2 : (2 + (2 >= VC_NUM_INPUT_W_IDX_W ? 3 - VC_NUM_INPUT_W_IDX_W : VC_NUM_INPUT_W_IDX_W - 1)) - 1)-:(2 >= VC_NUM_INPUT_W_IDX_W ? 3 - VC_NUM_INPUT_W_IDX_W : VC_NUM_INPUT_W_IDX_W - 1)] = 1'sb0;
		end
		if (LOCAL_PORT_NUM > 0) begin : gen_have_sa_local_fromL
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_sa_local_fromL
				sa_local #(.INPUT_NUM(VC_NUM_INPUT_L)) sa_local_fromL_u(
					.vc_ctrl_head_vld_i(vc_ctrl_head_vld_L[i * VC_NUM_INPUT_L+:VC_NUM_INPUT_L]),
					.vc_ctrl_head_i(vc_ctrl_head_L[33 * (i * VC_NUM_INPUT_L)+:33 * VC_NUM_INPUT_L]),
					.sa_local_vld_to_sa_global_o(sa_local_vld_to_sa_global[(4 + i) * 6+:6]),
					.sa_local_vld_o(sa_local_vld[4 + i]),
					.sa_local_vc_id_o(sa_local_vc_id[((4 + i) * 3) + (VC_NUM_INPUT_L_IDX_W - 1)-:VC_NUM_INPUT_L_IDX_W]),
					.sa_local_vc_id_oh_o(sa_local_vc_id_oh[((4 + i) * 6) + (VC_NUM_INPUT_L - 1)-:VC_NUM_INPUT_L]),
					.sa_local_qos_value_o(sa_local_qos_value[(4 + i) * 4+:4]),
					.inport_read_enable_sa_stage_i(inport_read_enable_sa_stage[4 + i]),
					.clk(clk),
					.rstn(rstn)
				);
				if (rvh_noc_pkg_VC_ID_NUM_MAX_W > VC_NUM_INPUT_L_IDX_W) begin : genblk1
					assign sa_local_vc_id[((4 + i) * 3) + (2 >= VC_NUM_INPUT_L_IDX_W ? 2 : (2 + (2 >= VC_NUM_INPUT_L_IDX_W ? 3 - VC_NUM_INPUT_L_IDX_W : VC_NUM_INPUT_L_IDX_W - 1)) - 1)-:(2 >= VC_NUM_INPUT_L_IDX_W ? 3 - VC_NUM_INPUT_L_IDX_W : VC_NUM_INPUT_L_IDX_W - 1)] = 1'sb0;
				end
			end
		end
	endgenerate
	wire [OUTPUT_PORT_NUM - 1:0] sa_global_vld;
	wire [(OUTPUT_PORT_NUM * 4) - 1:0] sa_global_qos_value;
	localparam rvh_noc_pkg_SA_GLOBAL_INPUT_NUM_MAX = 5;
	wire [(OUTPUT_PORT_NUM * 5) - 1:0] sa_global_inport_id_oh;
	wire [(OUTPUT_PORT_NUM * 3) - 1:0] sa_global_inport_vc_id;
	wire [SA_GLOBAL_INPUT_NUM_N - 1:0] sa_local_vld_to_sa_global_all_inport_toN;
	wire [(SA_GLOBAL_INPUT_NUM_N * 3) - 1:0] sa_local_vc_id_all_inport_toN;
	wire [SA_GLOBAL_INPUT_NUM_S - 1:0] sa_local_vld_to_sa_global_all_inport_toS;
	wire [(SA_GLOBAL_INPUT_NUM_S * 3) - 1:0] sa_local_vc_id_all_inport_toS;
	wire [SA_GLOBAL_INPUT_NUM_E - 1:0] sa_local_vld_to_sa_global_all_inport_toE;
	wire [(SA_GLOBAL_INPUT_NUM_E * 3) - 1:0] sa_local_vc_id_all_inport_toE;
	wire [SA_GLOBAL_INPUT_NUM_W - 1:0] sa_local_vld_to_sa_global_all_inport_toW;
	wire [(SA_GLOBAL_INPUT_NUM_W * 3) - 1:0] sa_local_vc_id_all_inport_toW;
	reg [(LOCAL_PORT_NUM * SA_GLOBAL_INPUT_NUM_L) - 1:0] sa_local_vld_to_sa_global_all_inport_toL;
	reg [((LOCAL_PORT_NUM * SA_GLOBAL_INPUT_NUM_L) * 3) - 1:0] sa_local_vc_id_all_inport_toL;
	reg [((LOCAL_PORT_NUM * SA_GLOBAL_INPUT_NUM_L) * 4) - 1:0] sa_local_qos_value_all_inport_toL;
	wire [(SA_GLOBAL_INPUT_NUM_N * 4) - 1:0] sa_local_qos_value_all_inport_toN;
	wire [(SA_GLOBAL_INPUT_NUM_S * 4) - 1:0] sa_local_qos_value_all_inport_toS;
	wire [(SA_GLOBAL_INPUT_NUM_E * 4) - 1:0] sa_local_qos_value_all_inport_toE;
	wire [(SA_GLOBAL_INPUT_NUM_W * 4) - 1:0] sa_local_qos_value_all_inport_toW;
	assign sa_local_vld_to_sa_global_all_inport_toN[0] = sa_local_vld_to_sa_global[6];
	assign sa_local_vld_to_sa_global_all_inport_toN[1] = sa_local_vld_to_sa_global[12];
	assign sa_local_vld_to_sa_global_all_inport_toN[2] = sa_local_vld_to_sa_global[18];
	assign sa_local_vc_id_all_inport_toN[0+:3] = sa_local_vc_id[3+:3];
	assign sa_local_vc_id_all_inport_toN[3+:3] = sa_local_vc_id[6+:3];
	assign sa_local_vc_id_all_inport_toN[6+:3] = sa_local_vc_id[9+:3];
	assign sa_local_qos_value_all_inport_toN[0+:4] = sa_local_qos_value[4+:4];
	assign sa_local_qos_value_all_inport_toN[4+:4] = sa_local_qos_value[8+:4];
	assign sa_local_qos_value_all_inport_toN[8+:4] = sa_local_qos_value[12+:4];
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_sa_local_vld_to_sa_global_all_inport_toN_fromL_signal
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : genblk1
				assign sa_local_vld_to_sa_global_all_inport_toN[3 + i] = sa_local_vld_to_sa_global[(4 + i) * 6];
				assign sa_local_vc_id_all_inport_toN[(3 + i) * 3+:3] = sa_local_vc_id[(4 + i) * 3+:3];
				assign sa_local_qos_value_all_inport_toN[(3 + i) * 4+:4] = sa_local_qos_value[(4 + i) * 4+:4];
			end
		end
	endgenerate
	sa_global #(.INPUT_NUM(SA_GLOBAL_INPUT_NUM_N)) sa_global_toN_u(
		.sa_local_vld_i(sa_local_vld_to_sa_global_all_inport_toN),
		.sa_local_vc_id_i(sa_local_vc_id_all_inport_toN),
		.sa_local_qos_value_i(sa_local_qos_value_all_inport_toN),
		.sa_global_vld_o(sa_global_vld[0]),
		.sa_global_qos_value_o(sa_global_qos_value[0+:4]),
		.sa_global_inport_id_oh_o(sa_global_inport_id_oh[SA_GLOBAL_INPUT_NUM_N - 1-:SA_GLOBAL_INPUT_NUM_N]),
		.sa_global_inport_vc_id_o(sa_global_inport_vc_id[0+:3]),
		.vc_assignment_vld_i(vc_assignment_vld[0]),
		.clk(clk),
		.rstn(rstn)
	);
	generate
		if (rvh_noc_pkg_SA_GLOBAL_INPUT_NUM_MAX > SA_GLOBAL_INPUT_NUM_N) begin : genblk8
			assign sa_global_inport_id_oh[0 + (4 >= SA_GLOBAL_INPUT_NUM_N ? 4 : (4 + (4 >= SA_GLOBAL_INPUT_NUM_N ? 5 - SA_GLOBAL_INPUT_NUM_N : SA_GLOBAL_INPUT_NUM_N - 3)) - 1)-:(4 >= SA_GLOBAL_INPUT_NUM_N ? 5 - SA_GLOBAL_INPUT_NUM_N : SA_GLOBAL_INPUT_NUM_N - 3)] = 1'sb0;
		end
	endgenerate
	assign sa_local_vld_to_sa_global_all_inport_toS[0] = sa_local_vld_to_sa_global[1];
	assign sa_local_vld_to_sa_global_all_inport_toS[1] = sa_local_vld_to_sa_global[13];
	assign sa_local_vld_to_sa_global_all_inport_toS[2] = sa_local_vld_to_sa_global[19];
	assign sa_local_vc_id_all_inport_toS[0+:3] = sa_local_vc_id[0+:3];
	assign sa_local_vc_id_all_inport_toS[3+:3] = sa_local_vc_id[6+:3];
	assign sa_local_vc_id_all_inport_toS[6+:3] = sa_local_vc_id[9+:3];
	assign sa_local_qos_value_all_inport_toS[0+:4] = sa_local_qos_value[0+:4];
	assign sa_local_qos_value_all_inport_toS[4+:4] = sa_local_qos_value[8+:4];
	assign sa_local_qos_value_all_inport_toS[8+:4] = sa_local_qos_value[12+:4];
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_sa_local_vld_to_sa_global_all_inport_toS_fromL_signal
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : genblk1
				assign sa_local_vld_to_sa_global_all_inport_toS[3 + i] = sa_local_vld_to_sa_global[((4 + i) * 6) + 1];
				assign sa_local_vc_id_all_inport_toS[(3 + i) * 3+:3] = sa_local_vc_id[(4 + i) * 3+:3];
				assign sa_local_qos_value_all_inport_toS[(3 + i) * 4+:4] = sa_local_qos_value[(4 + i) * 4+:4];
			end
		end
	endgenerate
	sa_global #(.INPUT_NUM(SA_GLOBAL_INPUT_NUM_S)) sa_global_toS_u(
		.sa_local_vld_i(sa_local_vld_to_sa_global_all_inport_toS),
		.sa_local_vc_id_i(sa_local_vc_id_all_inport_toS),
		.sa_local_qos_value_i(sa_local_qos_value_all_inport_toS),
		.sa_global_vld_o(sa_global_vld[1]),
		.sa_global_qos_value_o(sa_global_qos_value[4+:4]),
		.sa_global_inport_id_oh_o(sa_global_inport_id_oh[SA_GLOBAL_INPUT_NUM_S + 4-:SA_GLOBAL_INPUT_NUM_S]),
		.sa_global_inport_vc_id_o(sa_global_inport_vc_id[3+:3]),
		.vc_assignment_vld_i(vc_assignment_vld[1]),
		.clk(clk),
		.rstn(rstn)
	);
	generate
		if (rvh_noc_pkg_SA_GLOBAL_INPUT_NUM_MAX > SA_GLOBAL_INPUT_NUM_S) begin : genblk10
			assign sa_global_inport_id_oh[5 + (4 >= SA_GLOBAL_INPUT_NUM_S ? 4 : (4 + (4 >= SA_GLOBAL_INPUT_NUM_S ? 5 - SA_GLOBAL_INPUT_NUM_S : SA_GLOBAL_INPUT_NUM_S - 3)) - 1)-:(4 >= SA_GLOBAL_INPUT_NUM_S ? 5 - SA_GLOBAL_INPUT_NUM_S : SA_GLOBAL_INPUT_NUM_S - 3)] = 1'sb0;
		end
	endgenerate
	assign sa_local_vld_to_sa_global_all_inport_toE[0] = sa_local_vld_to_sa_global[20];
	assign sa_local_vc_id_all_inport_toE[0+:3] = sa_local_vc_id[9+:3];
	assign sa_local_qos_value_all_inport_toE[0+:4] = sa_local_qos_value[12+:4];
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_sa_local_vld_to_sa_global_all_inport_toE_fromL_signal
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : genblk1
				assign sa_local_vld_to_sa_global_all_inport_toE[1 + i] = sa_local_vld_to_sa_global[((4 + i) * 6) + 2];
				assign sa_local_vc_id_all_inport_toE[(1 + i) * 3+:3] = sa_local_vc_id[(4 + i) * 3+:3];
				assign sa_local_qos_value_all_inport_toE[(1 + i) * 4+:4] = sa_local_qos_value[(4 + i) * 4+:4];
			end
		end
	endgenerate
	sa_global #(.INPUT_NUM(SA_GLOBAL_INPUT_NUM_E)) sa_global_toE_u(
		.sa_local_vld_i(sa_local_vld_to_sa_global_all_inport_toE),
		.sa_local_vc_id_i(sa_local_vc_id_all_inport_toE),
		.sa_local_qos_value_i(sa_local_qos_value_all_inport_toE),
		.sa_global_vld_o(sa_global_vld[2]),
		.sa_global_qos_value_o(sa_global_qos_value[8+:4]),
		.sa_global_inport_id_oh_o(sa_global_inport_id_oh[SA_GLOBAL_INPUT_NUM_E + 9-:SA_GLOBAL_INPUT_NUM_E]),
		.sa_global_inport_vc_id_o(sa_global_inport_vc_id[6+:3]),
		.vc_assignment_vld_i(vc_assignment_vld[2]),
		.clk(clk),
		.rstn(rstn)
	);
	generate
		if (rvh_noc_pkg_SA_GLOBAL_INPUT_NUM_MAX > SA_GLOBAL_INPUT_NUM_E) begin : genblk12
			assign sa_global_inport_id_oh[10 + (4 >= SA_GLOBAL_INPUT_NUM_E ? 4 : (4 + (4 >= SA_GLOBAL_INPUT_NUM_E ? 5 - SA_GLOBAL_INPUT_NUM_E : SA_GLOBAL_INPUT_NUM_E - 3)) - 1)-:(4 >= SA_GLOBAL_INPUT_NUM_E ? 5 - SA_GLOBAL_INPUT_NUM_E : SA_GLOBAL_INPUT_NUM_E - 3)] = 1'sb0;
		end
	endgenerate
	assign sa_local_vld_to_sa_global_all_inport_toW[0] = sa_local_vld_to_sa_global[15];
	assign sa_local_vc_id_all_inport_toW[0+:3] = sa_local_vc_id[6+:3];
	assign sa_local_qos_value_all_inport_toW[0+:4] = sa_local_qos_value[8+:4];
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_sa_local_vld_to_sa_global_all_inport_toW_fromL_signal
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : genblk1
				assign sa_local_vld_to_sa_global_all_inport_toW[1 + i] = sa_local_vld_to_sa_global[((4 + i) * 6) + 3];
				assign sa_local_vc_id_all_inport_toW[(1 + i) * 3+:3] = sa_local_vc_id[(4 + i) * 3+:3];
				assign sa_local_qos_value_all_inport_toW[(1 + i) * 4+:4] = sa_local_qos_value[(4 + i) * 4+:4];
			end
		end
	endgenerate
	sa_global #(.INPUT_NUM(SA_GLOBAL_INPUT_NUM_W)) sa_global_toW_u(
		.sa_local_vld_i(sa_local_vld_to_sa_global_all_inport_toW),
		.sa_local_vc_id_i(sa_local_vc_id_all_inport_toW),
		.sa_local_qos_value_i(sa_local_qos_value_all_inport_toW),
		.sa_global_vld_o(sa_global_vld[3]),
		.sa_global_qos_value_o(sa_global_qos_value[12+:4]),
		.sa_global_inport_id_oh_o(sa_global_inport_id_oh[SA_GLOBAL_INPUT_NUM_W + 14-:SA_GLOBAL_INPUT_NUM_W]),
		.sa_global_inport_vc_id_o(sa_global_inport_vc_id[9+:3]),
		.vc_assignment_vld_i(vc_assignment_vld[3]),
		.clk(clk),
		.rstn(rstn)
	);
	generate
		if (rvh_noc_pkg_SA_GLOBAL_INPUT_NUM_MAX > SA_GLOBAL_INPUT_NUM_W) begin : genblk14
			assign sa_global_inport_id_oh[15 + (4 >= SA_GLOBAL_INPUT_NUM_W ? 4 : (4 + (4 >= SA_GLOBAL_INPUT_NUM_W ? 5 - SA_GLOBAL_INPUT_NUM_W : SA_GLOBAL_INPUT_NUM_W - 3)) - 1)-:(4 >= SA_GLOBAL_INPUT_NUM_W ? 5 - SA_GLOBAL_INPUT_NUM_W : SA_GLOBAL_INPUT_NUM_W - 3)] = 1'sb0;
		end
	endgenerate
	always @(*) begin : sv2v_autoblock_1
		reg signed [31:0] k;
		begin : sv2v_autoblock_2
			reg signed [31:0] i;
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1)
				begin
					begin : sv2v_autoblock_3
						reg signed [31:0] j;
						for (j = 0; j < 4; j = j + 1)
							begin
								sa_local_vld_to_sa_global_all_inport_toL[(i * SA_GLOBAL_INPUT_NUM_L) + j] = sa_local_vld_to_sa_global[(j * 6) + (4 + i)];
								sa_local_vc_id_all_inport_toL[((i * SA_GLOBAL_INPUT_NUM_L) + j) * 3+:3] = sa_local_vc_id[j * 3+:3];
								sa_local_qos_value_all_inport_toL[((i * SA_GLOBAL_INPUT_NUM_L) + j) * 4+:4] = sa_local_qos_value[j * 4+:4];
							end
					end
					k = 0;
					begin : sv2v_autoblock_4
						reg signed [31:0] j;
						for (j = 0; j < LOCAL_PORT_NUM; j = j + 1)
							if (i != j) begin
								sa_local_vld_to_sa_global_all_inport_toL[(i * SA_GLOBAL_INPUT_NUM_L) + (4 + k)] = sa_local_vld_to_sa_global[((4 + j) * 6) + (4 + i)];
								sa_local_vc_id_all_inport_toL[((i * SA_GLOBAL_INPUT_NUM_L) + (4 + k)) * 3+:3] = sa_local_vc_id[(4 + j) * 3+:3];
								sa_local_qos_value_all_inport_toL[((i * SA_GLOBAL_INPUT_NUM_L) + (4 + k)) * 4+:4] = sa_local_qos_value[(4 + j) * 4+:4];
								k = k + 1;
							end
					end
				end
		end
	end
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_sa_global_toL
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_sa_global_toL
				sa_global #(.INPUT_NUM(SA_GLOBAL_INPUT_NUM_L)) sa_global_toL_u(
					.sa_local_vld_i(sa_local_vld_to_sa_global_all_inport_toL[i * SA_GLOBAL_INPUT_NUM_L+:SA_GLOBAL_INPUT_NUM_L]),
					.sa_local_vc_id_i(sa_local_vc_id_all_inport_toL[3 * (i * SA_GLOBAL_INPUT_NUM_L)+:3 * SA_GLOBAL_INPUT_NUM_L]),
					.sa_local_qos_value_i(sa_local_qos_value_all_inport_toL[4 * (i * SA_GLOBAL_INPUT_NUM_L)+:4 * SA_GLOBAL_INPUT_NUM_L]),
					.sa_global_vld_o(sa_global_vld[4 + i]),
					.sa_global_qos_value_o(sa_global_qos_value[(4 + i) * 4+:4]),
					.sa_global_inport_id_oh_o(sa_global_inport_id_oh[((4 + i) * 5) + (SA_GLOBAL_INPUT_NUM_L - 1)-:SA_GLOBAL_INPUT_NUM_L]),
					.sa_global_inport_vc_id_o(sa_global_inport_vc_id[(4 + i) * 3+:3]),
					.vc_assignment_vld_i(vc_assignment_vld[4 + i]),
					.clk(clk),
					.rstn(rstn)
				);
				if (rvh_noc_pkg_SA_GLOBAL_INPUT_NUM_MAX > SA_GLOBAL_INPUT_NUM_L) begin : genblk1
					assign sa_global_inport_id_oh[((4 + i) * 5) + (4 >= SA_GLOBAL_INPUT_NUM_L ? 4 : (4 + (4 >= SA_GLOBAL_INPUT_NUM_L ? 5 - SA_GLOBAL_INPUT_NUM_L : SA_GLOBAL_INPUT_NUM_L - 3)) - 1)-:(4 >= SA_GLOBAL_INPUT_NUM_L ? 5 - SA_GLOBAL_INPUT_NUM_L : SA_GLOBAL_INPUT_NUM_L - 3)] = 1'sb0;
				end
			end
		end
	endgenerate
	wire [(INPUT_PORT_NUM * 3) - 1:0] look_ahead_routing;
	wire [(INPUT_PORT_NUM * 33) - 1:0] vc_ctrl_head_sa_local_sel;
	onehot_mux #(
		.SOURCE_COUNT(VC_NUM_INPUT_N),
		.DATA_WIDTH(33)
	) onehot_mux_vc_ctrl_head_sa_local_sel_N_u(
		.sel_i(sa_local_vc_id_oh[VC_NUM_INPUT_N - 1-:VC_NUM_INPUT_N]),
		.data_i(vc_ctrl_head_N),
		.data_o(vc_ctrl_head_sa_local_sel[0+:33])
	);
	look_ahead_routing look_ahead_routing_fromN_u(
		.vc_ctrl_head_vld_i(sa_local_vld[0]),
		.vc_ctrl_head_i(vc_ctrl_head_sa_local_sel[0+:33]),
		.node_id_x_ths_hop_i(node_id_x_ths_hop_i),
		.node_id_y_ths_hop_i(node_id_y_ths_hop_i),
		.look_ahead_routing_o(look_ahead_routing[0+:3])
	);
	onehot_mux #(
		.SOURCE_COUNT(VC_NUM_INPUT_S),
		.DATA_WIDTH(33)
	) onehot_mux_vc_ctrl_head_sa_local_sel_S_u(
		.sel_i(sa_local_vc_id_oh[VC_NUM_INPUT_S + 5-:VC_NUM_INPUT_S]),
		.data_i(vc_ctrl_head_S),
		.data_o(vc_ctrl_head_sa_local_sel[33+:33])
	);
	look_ahead_routing look_ahead_routing_fromS_u(
		.vc_ctrl_head_vld_i(sa_local_vld[1]),
		.vc_ctrl_head_i(vc_ctrl_head_sa_local_sel[33+:33]),
		.node_id_x_ths_hop_i(node_id_x_ths_hop_i),
		.node_id_y_ths_hop_i(node_id_y_ths_hop_i),
		.look_ahead_routing_o(look_ahead_routing[3+:3])
	);
	onehot_mux #(
		.SOURCE_COUNT(VC_NUM_INPUT_E),
		.DATA_WIDTH(33)
	) onehot_mux_vc_ctrl_head_sa_local_sel_E_u(
		.sel_i(sa_local_vc_id_oh[VC_NUM_INPUT_E + 11-:VC_NUM_INPUT_E]),
		.data_i(vc_ctrl_head_E),
		.data_o(vc_ctrl_head_sa_local_sel[66+:33])
	);
	look_ahead_routing look_ahead_routing_fromE_u(
		.vc_ctrl_head_vld_i(sa_local_vld[2]),
		.vc_ctrl_head_i(vc_ctrl_head_sa_local_sel[66+:33]),
		.node_id_x_ths_hop_i(node_id_x_ths_hop_i),
		.node_id_y_ths_hop_i(node_id_y_ths_hop_i),
		.look_ahead_routing_o(look_ahead_routing[6+:3])
	);
	onehot_mux #(
		.SOURCE_COUNT(VC_NUM_INPUT_W),
		.DATA_WIDTH(33)
	) onehot_mux_vc_ctrl_head_sa_local_sel_W_u(
		.sel_i(sa_local_vc_id_oh[VC_NUM_INPUT_W + 17-:VC_NUM_INPUT_W]),
		.data_i(vc_ctrl_head_W),
		.data_o(vc_ctrl_head_sa_local_sel[99+:33])
	);
	look_ahead_routing look_ahead_routing_fromW_u(
		.vc_ctrl_head_vld_i(sa_local_vld[3]),
		.vc_ctrl_head_i(vc_ctrl_head_sa_local_sel[99+:33]),
		.node_id_x_ths_hop_i(node_id_x_ths_hop_i),
		.node_id_y_ths_hop_i(node_id_y_ths_hop_i),
		.look_ahead_routing_o(look_ahead_routing[9+:3])
	);
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_look_ahead_routing_fromL
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_look_ahead_routing_fromL
				onehot_mux #(
					.SOURCE_COUNT(VC_NUM_INPUT_L),
					.DATA_WIDTH(33)
				) onehot_mux_look_ahead_routing_sel_u(
					.sel_i(sa_local_vc_id_oh[((4 + i) * 6) + (VC_NUM_INPUT_L - 1)-:VC_NUM_INPUT_L]),
					.data_i(vc_ctrl_head_L[33 * (i * VC_NUM_INPUT_L)+:33 * VC_NUM_INPUT_L]),
					.data_o(vc_ctrl_head_sa_local_sel[(4 + i) * 33+:33])
				);
				look_ahead_routing look_ahead_routing_fromL_u(
					.vc_ctrl_head_vld_i(sa_local_vld[4 + i]),
					.vc_ctrl_head_i(vc_ctrl_head_sa_local_sel[(4 + i) * 33+:33]),
					.node_id_x_ths_hop_i(node_id_x_ths_hop_i),
					.node_id_y_ths_hop_i(node_id_y_ths_hop_i),
					.look_ahead_routing_o(look_ahead_routing[(4 + i) * 3+:3])
				);
			end
		end
	endgenerate
	wire [(VC_NUM_OUTPUT_N * VC_DEPTH_OUTPUT_N_COUNTER_W) - 1:0] vc_credit_counter_toN;
	wire [(VC_NUM_OUTPUT_S * VC_DEPTH_OUTPUT_S_COUNTER_W) - 1:0] vc_credit_counter_toS;
	wire [(VC_NUM_OUTPUT_E * VC_DEPTH_OUTPUT_E_COUNTER_W) - 1:0] vc_credit_counter_toE;
	wire [(VC_NUM_OUTPUT_W * VC_DEPTH_OUTPUT_W_COUNTER_W) - 1:0] vc_credit_counter_toW;
	wire [((LOCAL_PORT_NUM * VC_NUM_OUTPUT_L) * VC_DEPTH_OUTPUT_L_COUNTER_W) - 1:0] vc_credit_counter_toL;
	output_port_vc_credit_counter #(
		.VC_NUM(VC_NUM_OUTPUT_N),
		.VC_DEPTH(VC_DEPTH_OUTPUT_N)
	) output_port_vc_credit_counter_toN_u(
		.free_vc_credit_vld_i(tx_lcrd_v_i[0]),
		.free_vc_credit_vc_id_i(tx_lcrd_id_i[VC_NUM_OUTPUT_N_IDX_W - 1-:VC_NUM_OUTPUT_N_IDX_W]),
		.consume_vc_credit_vld_i(consume_vc_credit_vld[0]),
		.consume_vc_credit_vc_id_i(consume_vc_credit_vc_id[VC_NUM_OUTPUT_N_IDX_W - 1-:VC_NUM_OUTPUT_N_IDX_W]),
		.vc_credit_counter_o(vc_credit_counter_toN),
		.clk(clk),
		.rstn(rstn)
	);
	output_port_vc_credit_counter #(
		.VC_NUM(VC_NUM_OUTPUT_S),
		.VC_DEPTH(VC_DEPTH_OUTPUT_S)
	) output_port_vc_credit_counter_toS_u(
		.free_vc_credit_vld_i(tx_lcrd_v_i[1]),
		.free_vc_credit_vc_id_i(tx_lcrd_id_i[VC_NUM_OUTPUT_S_IDX_W + 2-:VC_NUM_OUTPUT_S_IDX_W]),
		.consume_vc_credit_vld_i(consume_vc_credit_vld[1]),
		.consume_vc_credit_vc_id_i(consume_vc_credit_vc_id[VC_NUM_OUTPUT_S_IDX_W + 2-:VC_NUM_OUTPUT_S_IDX_W]),
		.vc_credit_counter_o(vc_credit_counter_toS),
		.clk(clk),
		.rstn(rstn)
	);
	output_port_vc_credit_counter #(
		.VC_NUM(VC_NUM_OUTPUT_E),
		.VC_DEPTH(VC_DEPTH_OUTPUT_E)
	) output_port_vc_credit_counter_toE_u(
		.free_vc_credit_vld_i(tx_lcrd_v_i[2]),
		.free_vc_credit_vc_id_i(tx_lcrd_id_i[VC_NUM_OUTPUT_E_IDX_W + 5-:VC_NUM_OUTPUT_E_IDX_W]),
		.consume_vc_credit_vld_i(consume_vc_credit_vld[2]),
		.consume_vc_credit_vc_id_i(consume_vc_credit_vc_id[VC_NUM_OUTPUT_E_IDX_W + 5-:VC_NUM_OUTPUT_E_IDX_W]),
		.vc_credit_counter_o(vc_credit_counter_toE),
		.clk(clk),
		.rstn(rstn)
	);
	output_port_vc_credit_counter #(
		.VC_NUM(VC_NUM_OUTPUT_W),
		.VC_DEPTH(VC_DEPTH_OUTPUT_W)
	) output_port_vc_credit_counter_toW_u(
		.free_vc_credit_vld_i(tx_lcrd_v_i[3]),
		.free_vc_credit_vc_id_i(tx_lcrd_id_i[VC_NUM_OUTPUT_W_IDX_W + 8-:VC_NUM_OUTPUT_W_IDX_W]),
		.consume_vc_credit_vld_i(consume_vc_credit_vld[3]),
		.consume_vc_credit_vc_id_i(consume_vc_credit_vc_id[VC_NUM_OUTPUT_W_IDX_W + 8-:VC_NUM_OUTPUT_W_IDX_W]),
		.vc_credit_counter_o(vc_credit_counter_toW),
		.clk(clk),
		.rstn(rstn)
	);
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_output_port_vc_credit_counter_toL
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_output_port_vc_credit_counter_toL
				output_port_vc_credit_counter #(
					.VC_NUM(VC_NUM_OUTPUT_L),
					.VC_DEPTH(VC_DEPTH_OUTPUT_L)
				) output_port_vc_credit_counter_toL_u(
					.free_vc_credit_vld_i(tx_lcrd_v_i[4 + i]),
					.free_vc_credit_vc_id_i(tx_lcrd_id_i[((4 + i) * 3) + (VC_NUM_OUTPUT_L_IDX_W - 1)-:VC_NUM_OUTPUT_L_IDX_W]),
					.consume_vc_credit_vld_i(consume_vc_credit_vld[4 + i]),
					.consume_vc_credit_vc_id_i(consume_vc_credit_vc_id[((4 + i) * 3) + (VC_NUM_OUTPUT_L_IDX_W - 1)-:VC_NUM_OUTPUT_L_IDX_W]),
					.vc_credit_counter_o(vc_credit_counter_toL[VC_DEPTH_OUTPUT_L_COUNTER_W * (i * VC_NUM_OUTPUT_L)+:VC_DEPTH_OUTPUT_L_COUNTER_W * VC_NUM_OUTPUT_L]),
					.clk(clk),
					.rstn(rstn)
				);
			end
		end
	endgenerate
	wire [(VC_NUM_OUTPUT_N * 2) - 1:0] vc_select_vld_toN;
	wire [(VC_NUM_OUTPUT_N * 6) - 1:0] vc_select_vc_id_toN;
	wire [(VC_NUM_OUTPUT_S * 2) - 1:0] vc_select_vld_toS;
	wire [(VC_NUM_OUTPUT_S * 6) - 1:0] vc_select_vc_id_toS;
	wire [(VC_NUM_OUTPUT_E * 2) - 1:0] vc_select_vld_toE;
	wire [(VC_NUM_OUTPUT_E * 6) - 1:0] vc_select_vc_id_toE;
	wire [(VC_NUM_OUTPUT_W * 2) - 1:0] vc_select_vld_toW;
	wire [(VC_NUM_OUTPUT_W * 6) - 1:0] vc_select_vc_id_toW;
	wire [((LOCAL_PORT_NUM * VC_NUM_OUTPUT_L) * 2) - 1:0] vc_select_vld_toL;
	wire [((LOCAL_PORT_NUM * VC_NUM_OUTPUT_L) * 6) - 1:0] vc_select_vc_id_toL;
	output_port_vc_selection #(
		.OUTPUT_VC_NUM(VC_NUM_OUTPUT_N),
		.OUTPUT_VC_DEPTH(VC_DEPTH_OUTPUT_N)
	) output_port_vc_selection_toN_u(
		.vc_credit_counter_i(vc_credit_counter_toN),
		.vc_select_vld_o(vc_select_vld_toN),
		.vc_select_vc_id_o(vc_select_vc_id_toN)
	);
	output_port_vc_selection #(
		.OUTPUT_VC_NUM(VC_NUM_OUTPUT_S),
		.OUTPUT_VC_DEPTH(VC_DEPTH_OUTPUT_S)
	) output_port_vc_selection_toS_u(
		.vc_credit_counter_i(vc_credit_counter_toS),
		.vc_select_vld_o(vc_select_vld_toS),
		.vc_select_vc_id_o(vc_select_vc_id_toS)
	);
	output_port_vc_selection #(
		.OUTPUT_VC_NUM(VC_NUM_OUTPUT_E),
		.OUTPUT_VC_DEPTH(VC_DEPTH_OUTPUT_E)
	) output_port_vc_selection_toE_u(
		.vc_credit_counter_i(vc_credit_counter_toE),
		.vc_select_vld_o(vc_select_vld_toE),
		.vc_select_vc_id_o(vc_select_vc_id_toE)
	);
	output_port_vc_selection #(
		.OUTPUT_VC_NUM(VC_NUM_OUTPUT_W),
		.OUTPUT_VC_DEPTH(VC_DEPTH_OUTPUT_W)
	) output_port_vc_selection_toW_u(
		.vc_credit_counter_i(vc_credit_counter_toW),
		.vc_select_vld_o(vc_select_vld_toW),
		.vc_select_vc_id_o(vc_select_vc_id_toW)
	);
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_output_port_vc_selection_toL
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_output_port_vc_selection_toL
				output_port_vc_selection #(
					.OUTPUT_VC_NUM(VC_NUM_OUTPUT_L),
					.OUTPUT_VC_DEPTH(VC_DEPTH_OUTPUT_L),
					.OUTPUT_TO_L(1)
				) output_port_vc_selection_toL_u(
					.vc_credit_counter_i(vc_credit_counter_toL[VC_DEPTH_OUTPUT_L_COUNTER_W * (i * VC_NUM_OUTPUT_L)+:VC_DEPTH_OUTPUT_L_COUNTER_W * VC_NUM_OUTPUT_L]),
					.vc_select_vld_o(vc_select_vld_toL[2 * (i * VC_NUM_OUTPUT_L)+:2 * VC_NUM_OUTPUT_L]),
					.vc_select_vc_id_o(vc_select_vc_id_toL[6 * (i * VC_NUM_OUTPUT_L)+:6 * VC_NUM_OUTPUT_L])
				);
			end
		end
	endgenerate
	wire [(SA_GLOBAL_INPUT_NUM_N * 3) - 1:0] look_ahead_routing_all_inport_toN;
	wire [(SA_GLOBAL_INPUT_NUM_S * 3) - 1:0] look_ahead_routing_all_inport_toS;
	wire [(SA_GLOBAL_INPUT_NUM_E * 3) - 1:0] look_ahead_routing_all_inport_toE;
	wire [(SA_GLOBAL_INPUT_NUM_W * 3) - 1:0] look_ahead_routing_all_inport_toW;
	assign look_ahead_routing_all_inport_toN[0+:3] = look_ahead_routing[3+:3];
	assign look_ahead_routing_all_inport_toN[3+:3] = look_ahead_routing[6+:3];
	assign look_ahead_routing_all_inport_toN[6+:3] = look_ahead_routing[9+:3];
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_look_ahead_routing_all_inport_toN
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_look_ahead_routing_all_inport_toN
				assign look_ahead_routing_all_inport_toN[(3 + i) * 3+:3] = look_ahead_routing[(4 + i) * 3+:3];
			end
		end
	endgenerate
	output_port_vc_assignment #(
		.OUTPUT_VC_NUM(VC_NUM_OUTPUT_N),
		.SA_GLOBAL_INPUT_NUM(SA_GLOBAL_INPUT_NUM_N),
		.OUTPUT_TO_N(1)
	) output_port_vc_assignment_toN_u(
		.sa_global_vld_i(sa_global_vld[0]),
		.sa_global_inport_id_oh_i(sa_global_inport_id_oh[SA_GLOBAL_INPUT_NUM_N - 1-:SA_GLOBAL_INPUT_NUM_N]),
		.look_ahead_routing_i(look_ahead_routing_all_inport_toN),
		.vc_select_vld_i(vc_select_vld_toN),
		.vc_select_vc_id_i(vc_select_vc_id_toN),
		.vc_assignment_vld_o(vc_assignment_vld[0]),
		.vc_assignment_vc_id_o(vc_assignment_vc_id[0+:3]),
		.look_ahead_routing_sel_o(look_ahead_routing_sel[0+:3])
	);
	assign look_ahead_routing_all_inport_toS[0+:3] = look_ahead_routing[0+:3];
	assign look_ahead_routing_all_inport_toS[3+:3] = look_ahead_routing[6+:3];
	assign look_ahead_routing_all_inport_toS[6+:3] = look_ahead_routing[9+:3];
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_look_ahead_routing_all_inport_toS
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_look_ahead_routing_all_inport_toS
				assign look_ahead_routing_all_inport_toS[(3 + i) * 3+:3] = look_ahead_routing[(4 + i) * 3+:3];
			end
		end
	endgenerate
	output_port_vc_assignment #(
		.OUTPUT_VC_NUM(VC_NUM_OUTPUT_S),
		.SA_GLOBAL_INPUT_NUM(SA_GLOBAL_INPUT_NUM_S),
		.OUTPUT_TO_S(1)
	) output_port_vc_assignment_toS_u(
		.sa_global_vld_i(sa_global_vld[1]),
		.sa_global_inport_id_oh_i(sa_global_inport_id_oh[SA_GLOBAL_INPUT_NUM_S + 4-:SA_GLOBAL_INPUT_NUM_S]),
		.look_ahead_routing_i(look_ahead_routing_all_inport_toS),
		.vc_select_vld_i(vc_select_vld_toS),
		.vc_select_vc_id_i(vc_select_vc_id_toS),
		.vc_assignment_vld_o(vc_assignment_vld[1]),
		.vc_assignment_vc_id_o(vc_assignment_vc_id[3+:3]),
		.look_ahead_routing_sel_o(look_ahead_routing_sel[3+:3])
	);
	assign look_ahead_routing_all_inport_toE[0+:3] = look_ahead_routing[9+:3];
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_look_ahead_routing_all_inport_toE
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_look_ahead_routing_all_inport_toE
				assign look_ahead_routing_all_inport_toE[(1 + i) * 3+:3] = look_ahead_routing[(4 + i) * 3+:3];
			end
		end
	endgenerate
	output_port_vc_assignment #(
		.OUTPUT_VC_NUM(VC_NUM_OUTPUT_E),
		.SA_GLOBAL_INPUT_NUM(SA_GLOBAL_INPUT_NUM_E),
		.OUTPUT_TO_E(1)
	) output_port_vc_assignment_toE_u(
		.sa_global_vld_i(sa_global_vld[2]),
		.sa_global_inport_id_oh_i(sa_global_inport_id_oh[SA_GLOBAL_INPUT_NUM_E + 9-:SA_GLOBAL_INPUT_NUM_E]),
		.look_ahead_routing_i(look_ahead_routing_all_inport_toE),
		.vc_select_vld_i(vc_select_vld_toE),
		.vc_select_vc_id_i(vc_select_vc_id_toE),
		.vc_assignment_vld_o(vc_assignment_vld[2]),
		.vc_assignment_vc_id_o(vc_assignment_vc_id[6+:3]),
		.look_ahead_routing_sel_o(look_ahead_routing_sel[6+:3])
	);
	assign look_ahead_routing_all_inport_toW[0+:3] = look_ahead_routing[6+:3];
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_look_ahead_routing_all_inport_toW
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_look_ahead_routing_all_inport_toW
				assign look_ahead_routing_all_inport_toW[(1 + i) * 3+:3] = look_ahead_routing[(4 + i) * 3+:3];
			end
		end
	endgenerate
	output_port_vc_assignment #(
		.OUTPUT_VC_NUM(VC_NUM_OUTPUT_W),
		.SA_GLOBAL_INPUT_NUM(SA_GLOBAL_INPUT_NUM_W),
		.OUTPUT_TO_W(1)
	) output_port_vc_assignment_toW_u(
		.sa_global_vld_i(sa_global_vld[3]),
		.sa_global_inport_id_oh_i(sa_global_inport_id_oh[SA_GLOBAL_INPUT_NUM_W + 14-:SA_GLOBAL_INPUT_NUM_W]),
		.look_ahead_routing_i(look_ahead_routing_all_inport_toW),
		.vc_select_vld_i(vc_select_vld_toW),
		.vc_select_vc_id_i(vc_select_vc_id_toW),
		.vc_assignment_vld_o(vc_assignment_vld[3]),
		.vc_assignment_vc_id_o(vc_assignment_vc_id[9+:3]),
		.look_ahead_routing_sel_o(look_ahead_routing_sel[9+:3])
	);
	generate
		if (LOCAL_PORT_NUM > 0) begin : gen_have_output_port_vc_assignment_toL
			for (i = 0; i < LOCAL_PORT_NUM; i = i + 1) begin : gen_output_port_vc_assignment_toL
				output_port_vc_assignment #(
					.OUTPUT_VC_NUM(VC_NUM_OUTPUT_L),
					.SA_GLOBAL_INPUT_NUM(SA_GLOBAL_INPUT_NUM_L),
					.OUTPUT_TO_L(1)
				) output_port_vc_assignment_toL_u(
					.sa_global_vld_i(sa_global_vld[4 + i]),
					.sa_global_inport_id_oh_i(sa_global_inport_id_oh[((4 + i) * 5) + (SA_GLOBAL_INPUT_NUM_L - 1)-:SA_GLOBAL_INPUT_NUM_L]),
					.look_ahead_routing_i({{(SA_GLOBAL_INPUT_NUM_L - 4) * 3 {1'b0}}, look_ahead_routing[9+:3], look_ahead_routing[6+:3], look_ahead_routing[3+:3], look_ahead_routing[0+:3]}),
					.vc_select_vld_i(vc_select_vld_toL[2 * (i * VC_NUM_OUTPUT_L)+:2 * VC_NUM_OUTPUT_L]),
					.vc_select_vc_id_i(vc_select_vc_id_toL[6 * (i * VC_NUM_OUTPUT_L)+:6 * VC_NUM_OUTPUT_L]),
					.vc_assignment_vld_o(vc_assignment_vld[4 + i]),
					.vc_assignment_vc_id_o(vc_assignment_vc_id[(4 + i) * 3+:3]),
					.look_ahead_routing_sel_o(look_ahead_routing_sel[(4 + i) * 3+:3])
				);
			end
		end
	endgenerate
	input_to_output #(
		.INPUT_PORT_NUM(INPUT_PORT_NUM),
		.OUTPUT_PORT_NUM(OUTPUT_PORT_NUM),
		.SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N),
		.SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S),
		.SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E),
		.SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W),
		.SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L)
	) input_to_output_u(
		.sa_global_vld_i(sa_global_vld),
		.sa_global_inport_id_oh_i(sa_global_inport_id_oh),
		.sa_global_inport_vc_id_i(sa_global_inport_vc_id),
		.vc_assignment_vld_i(vc_assignment_vld),
		.vc_assignment_vc_id_i(vc_assignment_vc_id),
		.look_ahead_routing_sel_i(look_ahead_routing_sel),
		.inport_read_enable_o(inport_read_enable_sa_stage),
		.inport_read_vc_id_o(inport_read_vc_id_sa_stage),
		.outport_vld_o(outport_vld_sa_stage),
		.outport_select_inport_id_o(outport_select_inport_id_sa_stage),
		.outport_vc_id_o(outport_vc_id_sa_stage),
		.outport_look_ahead_routing_o(outport_look_ahead_routing_sa_stage),
		.consume_vc_credit_vld_o(consume_vc_credit_vld),
		.consume_vc_credit_vc_id_o(consume_vc_credit_vc_id)
	);
	generate
		for (i = 0; i < INPUT_PORT_NUM; i = i + 1) begin : gen_sa_to_st_reg_inport_angle
			std_dffr #(.WIDTH(1)) U_STA_INPORT_READ_ENABLE_ST_STAGE(
				.clk(clk),
				.rstn(rstn),
				.d(inport_read_enable_sa_stage[i]),
				.q(inport_read_enable_st_stage[i])
			);
			std_dffe #(.WIDTH(rvh_noc_pkg_VC_ID_NUM_MAX_W)) U_DAT_INPORT_READ_VC_ID_ST_STAGE(
				.clk(clk),
				.en(inport_read_enable_sa_stage[i]),
				.d(inport_read_vc_id_sa_stage[i * 3+:3]),
				.q(inport_read_vc_id_st_stage[i * 3+:3])
			);
		end
		for (i = 0; i < OUTPUT_PORT_NUM; i = i + 1) begin : gen_sa_to_st_reg_outport_angle
			std_dffr #(.WIDTH(1)) U_STA_OUTPORT_VLD_ST_STAGE(
				.clk(clk),
				.rstn(rstn),
				.d(outport_vld_sa_stage[i]),
				.q(outport_vld_st_stage[i])
			);
			std_dffe #(.WIDTH(3)) U_DAT_OUTPORT_SELECT_INPORT_ID_ST_STAGE(
				.clk(clk),
				.en(outport_vld_sa_stage[i]),
				.d(outport_select_inport_id_sa_stage[i * 3+:3]),
				.q(outport_select_inport_id_st_stage[i * 3+:3])
			);
			std_dffe #(.WIDTH(rvh_noc_pkg_VC_ID_NUM_MAX_W)) U_DAT_OUTPORT_VC_ID_ST_STAGE(
				.clk(clk),
				.en(outport_vld_sa_stage[i]),
				.d(outport_vc_id_sa_stage[i * 3+:3]),
				.q(outport_vc_id_st_stage[i * 3+:3])
			);
			std_dffe #(.WIDTH(3)) U_DAT_OUTPORT_LOOK_AHEAD_ROUTING_ST_STAGE(
				.clk(clk),
				.en(outport_vld_sa_stage[i]),
				.d(outport_look_ahead_routing_sa_stage[i * 3+:3]),
				.q(outport_look_ahead_routing_st_stage[i * 3+:3])
			);
		end
	endgenerate
	switch_AC76E #(
		.INPUT_PORT_NUM(INPUT_PORT_NUM),
		.OUTPUT_PORT_NUM(OUTPUT_PORT_NUM),
		.VC_NUM_INPUT_N(VC_NUM_INPUT_N),
		.VC_NUM_INPUT_S(VC_NUM_INPUT_S),
		.VC_NUM_INPUT_E(VC_NUM_INPUT_E),
		.VC_NUM_INPUT_W(VC_NUM_INPUT_W),
		.VC_NUM_INPUT_L(VC_NUM_INPUT_L)
	) switch_u(
		.vc_data_head_fromN_i(vc_data_head_N),
		.vc_data_head_fromS_i(vc_data_head_S),
		.vc_data_head_fromE_i(vc_data_head_E),
		.vc_data_head_fromW_i(vc_data_head_W),
		.vc_data_head_fromL_i(vc_data_head_L),
		.inport_read_enable_st_stage_i(inport_read_enable_st_stage),
		.inport_read_vc_id_st_stage_i(inport_read_vc_id_st_stage),
		.outport_vld_st_stage_i(outport_vld_st_stage),
		.outport_select_inport_id_st_stage_i(outport_select_inport_id_st_stage),
		.outport_vc_id_st_stage_i(outport_vc_id_st_stage),
		.outport_look_ahead_routing_st_stage_i(outport_look_ahead_routing_st_stage),
		.tx_flit_pend_o(tx_flit_pend_o),
		.tx_flit_v_o(tx_flit_v_o),
		.tx_flit_o(tx_flit_o),
		.tx_flit_vc_id_o(tx_flit_vc_id_o),
		.tx_flit_look_ahead_routing_o(tx_flit_look_ahead_routing_o)
	);
endmodule
