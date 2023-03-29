module scu (
	clk,
	rstn,
	l2_req_if_arvalid_i,
	l2_req_if_arready_o,
	l2_req_if_ar,
	l2_req_if_awvalid_i,
	l2_req_if_awready_o,
	l2_req_if_aw,
	l2_req_if_wvalid_i,
	l2_req_if_wready_o,
	l2_req_if_w,
	l2_resp_if_rvalid_o,
	l2_resp_if_rready_i,
	l2_resp_if_r,
	l2_req_if_snvalid_o,
	l2_req_if_snready_i,
	l2_req_if_sn,
	l2_resp_if_snvalid_i,
	l2_resp_if_snready_o,
	l2_resp_if_sn
);
	input wire clk;
	input wire rstn;
	input wire [3:0] l2_req_if_arvalid_i;
	output reg [3:0] l2_req_if_arready_o;
	localparam rvh_l1d_pkg_PADDR_WIDTH = 20;
	input wire [103:0] l2_req_if_ar;
	input wire [3:0] l2_req_if_awvalid_i;
	output reg [3:0] l2_req_if_awready_o;
	input wire [63:0] l2_req_if_aw;
	input wire [3:0] l2_req_if_wvalid_i;
	output reg [3:0] l2_req_if_wready_o;
	localparam rvh_l1d_pkg_MEM_DATA_WIDTH = 64;
	input wire [255:0] l2_req_if_w;
	output reg [3:0] l2_resp_if_rvalid_o;
	input wire [3:0] l2_resp_if_rready_i;
	output reg [271:0] l2_resp_if_r;
	output reg [3:0] l2_req_if_snvalid_o;
	input wire [3:0] l2_req_if_snready_i;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE = 512;
	localparam rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH = 6;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE = 14;
	output reg [71:0] l2_req_if_sn;
	input wire [3:0] l2_resp_if_snvalid_i;
	output reg [3:0] l2_resp_if_snready_o;
	input wire [263:0] l2_resp_if_sn;
	reg [519:0] mem [0:16384];
	reg [16384:0] pending;
	wire ar_snooping;
	reg aw_snooping;
	reg [55:0] aw_mem_index;
	reg [55:0] aw_req_addr_save;
	reg same;
	reg [3:0] aw_has_s;
	reg [7:0] aw_s_num;
	reg [15:0] aw_s_pos;
	wire [7:0] aw_s_ack_num;
	always @(*) begin
		if (~rstn) begin
			aw_has_s = 1'sb0;
			aw_s_num = 1'sb0;
			aw_s_pos = 1'sb0;
		end
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				if (l2_req_if_awready_o[i]) begin
					aw_has_s[i] = 1'sb0;
					aw_s_num[i * 2+:2] = 1'sb0;
					aw_s_pos[2 * (i * 2)+:4] = 1'sb0;
					begin : sv2v_autoblock_2
						reg signed [31:0] j;
						for (j = 0; j < 4; j = j + 1)
							if (mem[aw_mem_index[i * 14+:14]][512 + (j * 2)+:2] == 2'd1) begin
								aw_has_s[i] = 1'b1;
								aw_s_pos[((i * 2) + aw_s_num[i * 2+:2]) * 2+:2] = j[1:0];
								aw_s_num[i * 2+:2] = aw_s_num[i * 2+:2] + 1;
							end
					end
				end
		end
	end
	wire [3:0] aw_lock;
	assign aw_lock[0] = 1'b0;
	assign aw_lock[1] = (l2_req_if_awvalid_i[0] & l2_req_if_awvalid_i[1]) & (l2_req_if_aw[15-:14] == l2_req_if_aw[31-:14]);
	assign aw_lock[2] = ((l2_req_if_awvalid_i[0] & l2_req_if_awvalid_i[2]) & (l2_req_if_aw[15-:14] == l2_req_if_aw[47-:14])) | ((l2_req_if_awvalid_i[1] & l2_req_if_awvalid_i[2]) & (l2_req_if_aw[31-:14] == l2_req_if_aw[47-:14]));
	assign aw_lock[3] = (((l2_req_if_awvalid_i[0] & l2_req_if_awvalid_i[3]) & (l2_req_if_aw[15-:14] == l2_req_if_aw[63-:14])) | ((l2_req_if_awvalid_i[1] & l2_req_if_awvalid_i[3]) & (l2_req_if_aw[31-:14] == l2_req_if_aw[63-:14]))) | ((l2_req_if_awvalid_i[2] & l2_req_if_awvalid_i[3]) & (l2_req_if_aw[47-:14] == l2_req_if_aw[63-:14]));
	reg [11:0] aw_state_d;
	reg [11:0] aw_state_q;
	always @(*) begin : sv2v_autoblock_3
		reg signed [31:0] i;
		for (i = 0; i < 4; i = i + 1)
			if (l2_req_if_awvalid_i[i])
				aw_mem_index[i * 14+:14] = l2_req_if_aw[(i * 16) + 15-:14];
	end
	always @(*) begin : sv2v_autoblock_4
		reg signed [31:0] i;
		for (i = 0; i < 4; i = i + 1)
			if (l2_req_if_awready_o[i])
				aw_req_addr_save[i * 14+:14] = l2_req_if_aw[(i * 16) + 15-:14];
	end
	reg [11:0] aw_cnt_d;
	reg [11:0] aw_cnt_q;
	reg [7:0] aw_sn_pos;
	reg [1:0] ar_scu_dealing;
	reg [3:0] ar_snoop_d;
	reg [3:0] ar_snoop_q;
	reg [11:0] ar_cnt_d;
	reg [11:0] ar_cnt_q;
	assign ar_snooping = |ar_snoop_q;
	reg [25:0] l2_req_if_ar_save;
	reg [19:0] ar_scu_state_q;
	reg [19:0] ar_scu_state_d;
	wire [15:0] ar_state_1;
	wire [15:0] ar_state_2;
	wire [15:0] ar_state_3;
	wire [15:0] ar_state_4;
	reg [15:0] ar_state;
	reg [4:0] counter;
	always @(posedge clk)
		if ((counter == 5'b10011) | ~rstn)
			counter <= 1'sb0;
		else
			counter <= counter + 1;
	assign ar_state_1 = 16'h1234;
	assign ar_state_2 = 16'h2341;
	assign ar_state_3 = 16'h3412;
	assign ar_state_4 = 16'h4123;
	always @(*) begin
		if (counter == 5'b00000)
			ar_state = ar_state_1;
		if (counter == 5'b00101)
			ar_state = ar_state_2;
		if (counter == 5'b01010)
			ar_state = ar_state_3;
		if (counter == 5'b01111)
			ar_state = ar_state_4;
	end
	reg [55:0] ar_mem_index;
	reg [55:0] ar_mem_index_req;
	always @(*) begin
		begin : sv2v_autoblock_5
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				if (l2_req_if_arvalid_i[i])
					ar_mem_index_req[i * 14+:14] = l2_req_if_ar[(i * 26) + 23-:14];
		end
		begin : sv2v_autoblock_6
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				if (l2_req_if_arready_o[i])
					ar_mem_index[i * 14+:14] = l2_req_if_ar[(i * 26) + 23-:14];
		end
	end
	wire [3:0] ar_lock;
	assign ar_lock[0] = ((ar_state[7:4] > ar_state[3:0]) & l2_req_if_arvalid_i[1] ? 1'b1 : ((ar_state[11:8] > ar_state[3:0]) & l2_req_if_arvalid_i[2] ? 1'b1 : ((ar_state[15:12] > ar_state[3:0]) & l2_req_if_arvalid_i[3] ? 1'b1 : 1'b0)));
	assign ar_lock[1] = ((ar_state[3:0] > ar_state[7:4]) & l2_req_if_arvalid_i[0] ? 1'b1 : ((ar_state[11:8] > ar_state[7:4]) & l2_req_if_arvalid_i[2] ? 1'b1 : ((ar_state[15:12] > ar_state[7:4]) & l2_req_if_arvalid_i[3] ? 1'b1 : 1'b0)));
	assign ar_lock[2] = ((ar_state[7:4] > ar_state[11:8]) & l2_req_if_arvalid_i[1] ? 1'b1 : ((ar_state[3:0] > ar_state[11:8]) & l2_req_if_arvalid_i[0] ? 1'b1 : ((ar_state[15:12] > ar_state[11:8]) & l2_req_if_arvalid_i[3] ? 1'b1 : 1'b0)));
	assign ar_lock[3] = ((ar_state[7:4] > ar_state[15:12]) & l2_req_if_arvalid_i[1] ? 1'b1 : ((ar_state[11:8] > ar_state[15:12]) & l2_req_if_arvalid_i[2] ? 1'b1 : ((ar_state[3:0] > ar_state[15:12]) & l2_req_if_arvalid_i[0] ? 1'b1 : 1'b0)));
	reg has_e;
	reg has_s;
	reg [1:0] s_num;
	reg [1:0] add;
	reg [7:0] sum_d;
	reg [7:0] sum_q;
	reg has_m;
	reg [1:0] m_e_pos;
	reg [7:0] s_pos;
	reg [7:0] s_ack_num_d;
	reg [7:0] s_ack_num_q;
	always @(*) begin
		if (~rstn) begin
			has_e = 0;
			has_s = 0;
			s_num = 0;
			has_m = 0;
			m_e_pos = 0;
			s_pos = 0;
		end
		if (|l2_req_if_arready_o) begin
			has_e = 0;
			has_s = 0;
			s_num = 0;
			has_m = 0;
			m_e_pos = 0;
			s_pos = 0;
			begin : sv2v_autoblock_7
				reg signed [31:0] j;
				for (j = 0; j < 4; j = j + 1)
					begin
						if (mem[ar_mem_index[ar_scu_dealing * 14+:14]][512 + (j * 2)+:2] == 2'd2) begin
							has_e = 1'b1;
							m_e_pos = j[1:0];
						end
						if (mem[ar_mem_index[ar_scu_dealing * 14+:14]][512 + (j * 2)+:2] == 2'd3) begin
							has_m = 1'b1;
							m_e_pos = j[1:0];
						end
						if (mem[ar_mem_index[ar_scu_dealing * 14+:14]][512 + (j * 2)+:2] == 2'd1) begin
							has_s = 1'b1;
							s_pos[s_num * 2+:2] = j[1:0];
							s_num = s_num + 1;
						end
					end
			end
		end
	end
	reg [3:0] w_mem_change_mesi_ena;
	reg [3:0] w_mem_change_data_ena;
	reg [55:0] w_mem_change_mesi_index;
	reg [31:0] w_mem_change_mesi_data;
	reg [55:0] w_mem_change_data_index;
	reg [43:0] w_mem_change_data_offset;
	reg [255:0] w_mem_change_data;
	reg [3:0] r_mem_change_mesi_ena;
	reg [3:0] r_mem_change_data_ena;
	reg [55:0] r_mem_change_mesi_index;
	reg [31:0] r_mem_change_mesi_data;
	reg [55:0] r_mem_change_data_index;
	reg [43:0] r_mem_change_data_offset;
	reg [255:0] r_mem_change_data;
	reg [31:0] aw_mesi_tmp;
	reg [31:0] ar_mesi_tmp;
	always @(*) begin
		if (~rstn) begin
			aw_snooping = 1'b0;
			begin : sv2v_autoblock_8
				reg signed [31:0] i;
				for (i = 0; i < 32768; i = i + 1)
					pending[i] = 1'b0;
			end
		end
		begin : sv2v_autoblock_9
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				begin
					l2_resp_if_snready_o[i] = 1'b0;
					l2_req_if_snvalid_o[i] = 1'b0;
					l2_req_if_awready_o[i] = 1'b0;
					l2_req_if_wready_o[i] = 1'b0;
					w_mem_change_mesi_ena[i] = 1'b0;
					w_mem_change_data_ena[i] = 1'b0;
					r_mem_change_mesi_ena[i] = 1'b0;
					r_mem_change_data_ena[i] = 1'b0;
					l2_req_if_arready_o[i] = 1'b0;
					l2_resp_if_rvalid_o[i] = 1'b0;
				end
		end
		begin : sv2v_autoblock_10
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				begin
					aw_state_d[i * 4+:4] = aw_state_q[i * 4+:4];
					ar_scu_state_d[i * 4+:4] = ar_scu_state_q[i * 4+:4];
					ar_snoop_d[i] = ar_snoop_q[i];
					aw_cnt_d[i * 3+:3] = aw_cnt_q[i * 3+:3];
					s_ack_num_d[i * 2+:2] = s_ack_num_q[i * 2+:2];
					sum_d[i * 2+:2] = sum_q[i * 2+:2];
					case (aw_state_q[i * 4+:4])
						3'd0:
							if (((l2_req_if_awvalid_i[i] & ~aw_lock[i]) & ~pending[aw_mem_index[i * 14+:14]]) & ~aw_snooping) begin
								l2_req_if_awready_o[i] = 1'b1;
								if (l2_req_if_aw[(i * 16) + 1-:2] == 2'd2) begin
									w_mem_change_mesi_ena[i] = 1'b1;
									w_mem_change_mesi_index[i * 14+:14] = aw_mem_index[i * 14+:14];
									w_mem_change_mesi_data[i * 8+:8] = 8'b00000000;
									aw_state_d[i * 4+:4] = 3'd0;
								end
								if (l2_req_if_aw[(i * 16) + 1-:2] == 2'd1)
									if (aw_s_num[i * 2+:2] == 2) begin
										aw_sn_pos[i * 2+:2] = (aw_s_pos[(i * 2) * 2+:2] == i ? aw_s_pos[((i * 2) + 1) * 2+:2] : aw_s_pos[(i * 2) * 2+:2]);
										aw_state_d[i * 4+:4] = 3'd3;
									end
									else begin
										aw_state_d[i * 4+:4] = 3'd0;
										w_mem_change_mesi_ena[i] = 1'b1;
										w_mem_change_mesi_index[i * 14+:14] = aw_mem_index[i * 14+:14];
										aw_mesi_tmp[i * 8+:8] = mem[aw_mem_index[i * 14+:14]][519:512];
										aw_mesi_tmp[(i * 8) + (i * 2)+:2] = 2'd0;
										w_mem_change_mesi_data[i * 8+:8] = aw_mesi_tmp[i * 8+:8];
									end
								if (l2_req_if_aw[(i * 16) + 1-:2] == 2'd3) begin
									w_mem_change_mesi_ena[i] = 1'b1;
									w_mem_change_mesi_index[i * 14+:14] = aw_mem_index[i * 14+:14];
									w_mem_change_mesi_data[i * 8+:8] = 8'b00000000;
									aw_state_d[i * 4+:4] = 3'd1;
								end
							end
						3'd1: begin
							l2_req_if_wready_o[i] = 1'b1;
							if (aw_cnt_q[i * 3+:3] == 3'b111) begin
								aw_cnt_d[i * 3+:3] = 0;
								aw_state_d[i * 4+:4] = 3'd4;
								w_mem_change_data_ena[i] = 1'b1;
								w_mem_change_data_index[i * 14+:14] = aw_req_addr_save[i * 14+:14];
								w_mem_change_data_offset[i * 11+:11] = aw_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH;
								w_mem_change_data[i * 64+:64] = l2_req_if_w[(i * rvh_l1d_pkg_MEM_DATA_WIDTH) + 63-:rvh_l1d_pkg_MEM_DATA_WIDTH];
							end
							else begin
								pending[aw_req_addr_save[i * 14+:14]] = 1'b1;
								aw_state_d[i * 4+:4] = 3'd1;
								w_mem_change_data_ena[i] = 1'b1;
								w_mem_change_data_index[i * 14+:14] = aw_req_addr_save[i * 14+:14];
								w_mem_change_data_offset[i * 11+:11] = aw_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH;
								w_mem_change_data[i * 64+:64] = l2_req_if_w[(i * rvh_l1d_pkg_MEM_DATA_WIDTH) + 63-:rvh_l1d_pkg_MEM_DATA_WIDTH];
								aw_cnt_d[i * 3+:3] = aw_cnt_q[i * 3+:3] + 1;
							end
						end
						3'd5: begin
							l2_req_if_snvalid_o[aw_sn_pos[i * 2+:2]] = 1'b1;
							if (l2_resp_if_snvalid_i[aw_sn_pos[i * 2+:2]] & ~l2_resp_if_sn[(aw_sn_pos[i * 2+:2] * 66) + 65]) begin
								l2_resp_if_snready_o[aw_sn_pos[i * 2+:2]] = 1'b1;
								w_mem_change_mesi_ena[i] = 1'b1;
								w_mem_change_mesi_index[i * 14+:14] = aw_req_addr_save[i * 14+:14];
								aw_mesi_tmp[i * 8+:8] = mem[aw_req_addr_save[i * 14+:14]][519:512];
								aw_mesi_tmp[(i * 8) + (i * 2)+:2] = 2'd0;
								aw_mesi_tmp[(i * 8) + (aw_sn_pos[i * 2+:2] * 2)+:2] = 2'd2;
								w_mem_change_mesi_data[i * 8+:8] = aw_mesi_tmp[i * 8+:8];
								aw_state_d[i * 4+:4] = 3'd4;
							end
							else if (l2_resp_if_snvalid_i[aw_sn_pos[i * 2+:2]] & l2_resp_if_sn[(aw_sn_pos[i * 2+:2] * 66) + 65]) begin
								l2_resp_if_snready_o[aw_sn_pos[i * 2+:2]] = 1'b1;
								w_mem_change_mesi_ena[i] = 1'b1;
								w_mem_change_mesi_index[i * 14+:14] = aw_req_addr_save[i * 14+:14];
								aw_mesi_tmp[i * 8+:8] = mem[aw_req_addr_save[i * 14+:14]][519:512];
								aw_mesi_tmp[(i * 8) + (i * 2)+:2] = 2'd0;
								aw_mesi_tmp[(i * 8) + (aw_sn_pos[i * 2+:2] * 2)+:2] = 2'd0;
								w_mem_change_mesi_data[i * 8+:8] = aw_mesi_tmp[i * 8+:8];
								aw_state_d[i * 4+:4] = 3'd4;
							end
							else
								aw_state_d[i * 4+:4] = 3'd5;
						end
						3'd3: begin
							aw_snooping = 1'b1;
							if (~ar_snooping) begin
								pending[aw_req_addr_save[i * 14+:14]] = 1'b1;
								l2_req_if_snvalid_o[aw_sn_pos[i * 2+:2]] = 1'b1;
								l2_req_if_sn[(aw_sn_pos[i * 2+:2] * 18) + 17-:14] = aw_req_addr_save[i * 14+:14];
								l2_req_if_sn[(aw_sn_pos[i * 2+:2] * 18) + 3-:4] = 4'd11;
								aw_state_d[i * 4+:4] = 3'd5;
							end
							else
								aw_state_d[i * 4+:4] = 3'd3;
						end
						3'd4: begin
							aw_snooping = 1'b0;
							pending[aw_req_addr_save[i * 14+:14]] = 1'b0;
							aw_state_d[i * 4+:4] = 3'd0;
						end
					endcase
				end
		end
		begin : sv2v_autoblock_11
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				begin
					ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3];
					case (ar_scu_state_q[i * 4+:4])
						5'd0:
							if (((l2_req_if_arvalid_i[i] & ~ar_lock[i]) & ~aw_snooping) & ~ar_snooping) begin
								l2_req_if_arready_o[i] = 1'b1;
								ar_scu_dealing = i[1:0];
								l2_req_if_ar_save = l2_req_if_ar[0 + (i * 26)+:26];
								ar_snoop_d[i] = 1'b1;
								if (l2_req_if_ar[(i * 26) + 3-:4] == 4'd0) begin
									if ((~has_e & ~has_m) & ~has_s) begin
										l2_resp_if_rvalid_o[i] = 1'b1;
										l2_resp_if_r[(i * 68) + 65-:64] = mem[ar_mem_index[i * 14+:14]][ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
										l2_resp_if_r[(i * 68) + 1-:2] = 2'd2;
										l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
										ar_scu_state_d[i * 4+:4] = 5'd3;
										ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3] + 1;
									end
									if (has_e | has_m) begin
										l2_req_if_snvalid_o[m_e_pos] = 1'b1;
										l2_req_if_sn[(m_e_pos * 18) + 17-:14] = l2_req_if_ar_save[23:10];
										l2_req_if_sn[(m_e_pos * 18) + 3-:4] = 4'd8;
										ar_scu_state_d[i * 4+:4] = 5'd7;
									end
									if (has_s) begin
										l2_resp_if_rvalid_o[i] = 1'b1;
										l2_resp_if_r[(i * 68) + 65-:64] = mem[ar_mem_index[i * 14+:14]][ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
										l2_resp_if_r[(i * 68) + 1-:2] = 2'd1;
										l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
										ar_scu_state_d[i * 4+:4] = 5'd3;
										ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3] + 1;
									end
								end
								if (l2_req_if_ar[(i * 26) + 3-:4] == 4'd1) begin
									if ((~has_e & ~has_m) & ~has_s) begin
										l2_resp_if_rvalid_o[i] = 1'b1;
										l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
										l2_resp_if_r[(i * 68) + 65-:64] = mem[ar_mem_index[i * 14+:14]][ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
										l2_resp_if_r[(i * 68) + 1-:2] = 2'd3;
										ar_scu_state_d[i * 4+:4] = 5'd4;
										ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3] + 1;
									end
									if (has_e | has_m) begin
										l2_req_if_snvalid_o[m_e_pos] = 1'b1;
										l2_req_if_sn[(m_e_pos * 18) + 17-:14] = l2_req_if_ar_save[23:10];
										l2_req_if_sn[(m_e_pos * 18) + 3-:4] = 4'd9;
										ar_scu_state_d[i * 4+:4] = 5'd5;
									end
									if (has_s) begin
										begin : sv2v_autoblock_12
											reg signed [31:0] j;
											for (j = 0; j < s_num; j = j + 1)
												if (s_pos[j * 2+:2] != i) begin
													l2_req_if_snvalid_o[s_pos[j * 2+:2]] = 1'b1;
													l2_req_if_sn[(s_pos[j * 2+:2] * 18) + 17-:14] = l2_req_if_ar_save[23:10];
													l2_req_if_sn[(s_pos[j * 2+:2] * 18) + 3-:4] = 4'd10;
												end
										end
										sum_d[i * 2+:2] = 1'sb0;
										ar_scu_state_d[i * 4+:4] = 5'd1;
									end
								end
							end
						5'd1: begin
							begin : sv2v_autoblock_13
								reg signed [31:0] j;
								for (j = 0; j < s_num; j = j + 1)
									if (s_pos[j * 2+:2] != i) begin
										l2_req_if_snvalid_o[s_pos[j * 2+:2]] = 1'b1;
										l2_req_if_sn[(s_pos[j * 2+:2] * 18) + 17-:14] = l2_req_if_ar_save[23:10];
										l2_req_if_sn[(s_pos[j * 2+:2] * 18) + 3-:4] = 4'd10;
									end
							end
							pending[ar_mem_index[i * 14+:14]] = 1'b1;
							add = 1'sb0;
							same = 1'b0;
							begin : sv2v_autoblock_14
								reg signed [31:0] j;
								for (j = 0; j < s_num; j = j + 1)
									begin
										if (s_pos[j * 2+:2] == i)
											same = 1'b1;
										if (l2_resp_if_snvalid_i[s_pos[j * 2+:2]]) begin
											l2_resp_if_snready_o[s_pos[j * 2+:2]] = 1'b1;
											add = add + 1;
										end
									end
							end
							sum_d[i * 2+:2] = sum_q[i * 2+:2] + add;
							if ((sum_d[i * 2+:2] == s_num) | ((sum_d[i * 2+:2] == (s_num - 1)) && (same == 1'b1)))
								ar_scu_state_d[i * 4+:4] = 5'd4;
						end
						5'd3:
							if (ar_cnt_q[i * 3+:3] == 3'b111) begin
								ar_snoop_d[i] = 1'b0;
								l2_resp_if_rvalid_o[i] = 1'b1;
								l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
								ar_cnt_d[i * 3+:3] = 0;
								l2_resp_if_r[(i * 68) + 65-:64] = mem[ar_mem_index[i * 14+:14]][ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
								l2_resp_if_r[(i * 68) + 1-:2] = (has_e ? 2'd1 : (has_s ? 2'd1 : 2'd2));
								ar_scu_state_d[i * 4+:4] = 5'd11;
								if (has_e) begin
									r_mem_change_mesi_ena[i] = 1'b1;
									r_mem_change_mesi_index[i * 14+:14] = ar_mem_index[i * 14+:14];
									ar_mesi_tmp[i * 8+:8] = mem[ar_mem_index[i * 14+:14]][519:512];
									ar_mesi_tmp[(i * 8) + (i * 2)+:2] = 2'd1;
									ar_mesi_tmp[(i * 8) + (m_e_pos * 2)+:2] = 2'd1;
									r_mem_change_mesi_data[i * 8+:8] = ar_mesi_tmp[i * 8+:8];
								end
								else if (has_s) begin
									r_mem_change_mesi_ena[i] = 1'b1;
									r_mem_change_mesi_index[i * 14+:14] = ar_mem_index[i * 14+:14];
									ar_mesi_tmp[i * 8+:8] = mem[ar_mem_index[i * 14+:14]][519:512];
									ar_mesi_tmp[(i * 8) + (i * 2)+:2] = 2'd1;
									r_mem_change_mesi_data[i * 8+:8] = ar_mesi_tmp[i * 8+:8];
								end
								else begin
									r_mem_change_mesi_ena[i] = 1'b1;
									r_mem_change_mesi_index[i * 14+:14] = ar_mem_index[i * 14+:14];
									ar_mesi_tmp[i * 8+:8] = mem[ar_mem_index[i * 14+:14]][519:512];
									ar_mesi_tmp[(i * 8) + (i * 2)+:2] = 2'd2;
									r_mem_change_mesi_data[i * 8+:8] = ar_mesi_tmp[i * 8+:8];
								end
							end
							else begin
								pending[ar_mem_index[i * 14+:14]] = 1'b1;
								l2_resp_if_rvalid_o[i] = 1'b1;
								l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
								l2_resp_if_r[(i * 68) + 65-:64] = mem[ar_mem_index[i * 14+:14]][ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
								l2_resp_if_r[(i * 68) + 1-:2] = (has_e ? 2'd1 : (has_s ? 2'd1 : 2'd2));
								ar_scu_state_d[i * 4+:4] = 5'd3;
								ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3] + 1;
							end
						5'd4:
							if (ar_cnt_q[i * 3+:3] == 3'b111) begin
								ar_cnt_d[i * 3+:3] = 0;
								l2_resp_if_rvalid_o[i] = 1'b1;
								ar_snoop_d[i] = 1'b0;
								l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
								l2_resp_if_r[(i * 68) + 65-:64] = mem[ar_mem_index[i * 14+:14]][ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
								l2_resp_if_r[(i * 68) + 1-:2] = (has_e ? 2'd3 : (has_s ? 2'd3 : 2'd3));
								ar_scu_state_d[i * 4+:4] = 5'd11;
								if (has_e) begin
									r_mem_change_mesi_ena[i] = 1'b1;
									r_mem_change_mesi_index[i * 14+:14] = ar_mem_index[i * 14+:14];
									ar_mesi_tmp[i * 8+:8] = mem[ar_mem_index[i * 14+:14]][519:512];
									ar_mesi_tmp[(i * 8) + (i * 2)+:2] = 2'd3;
									ar_mesi_tmp[(i * 8) + (m_e_pos * 2)+:2] = 2'd0;
									r_mem_change_mesi_data[i * 8+:8] = ar_mesi_tmp[i * 8+:8];
								end
								else if (has_s) begin
									r_mem_change_mesi_ena[i] = 1'b1;
									r_mem_change_mesi_index[i * 14+:14] = ar_mem_index[i * 14+:14];
									ar_mesi_tmp[i * 8+:8] = mem[ar_mem_index[i * 14+:14]][519:512];
									begin : sv2v_autoblock_15
										reg signed [31:0] j;
										for (j = 0; j < s_num; j = j + 1)
											ar_mesi_tmp[(i * 8) + (s_pos[j * 2+:2] * 2)+:2] = 2'd0;
									end
									ar_mesi_tmp[(i * 8) + (i * 2)+:2] = 2'd3;
									r_mem_change_mesi_data[i * 8+:8] = ar_mesi_tmp[i * 8+:8];
								end
								else begin
									r_mem_change_mesi_ena[i] = 1'b1;
									r_mem_change_mesi_index[i * 14+:14] = ar_mem_index[i * 14+:14];
									ar_mesi_tmp[i * 8+:8] = mem[ar_mem_index[i * 14+:14]][519:512];
									ar_mesi_tmp[(i * 8) + (i * 2)+:2] = 2'd3;
									r_mem_change_mesi_data[i * 8+:8] = ar_mesi_tmp[i * 8+:8];
								end
							end
							else begin
								pending[ar_mem_index[i * 14+:14]] = 1'b1;
								l2_resp_if_rvalid_o[i] = 1'b1;
								l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
								l2_resp_if_r[(i * 68) + 65-:64] = mem[ar_mem_index[i * 14+:14]][ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
								l2_resp_if_r[(i * 68) + 1-:2] = (has_e ? 2'd3 : (has_s ? 2'd3 : 2'd3));
								ar_scu_state_d[i * 4+:4] = 5'd4;
								ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3] + 1;
							end
						5'd5: begin
							l2_req_if_snvalid_o[m_e_pos] = 1'b1;
							if (l2_resp_if_snvalid_i[m_e_pos]) begin
								if (l2_resp_if_sn[(m_e_pos * 66) + 0]) begin
									l2_resp_if_rvalid_o[i] = 1'b1;
									l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
									l2_resp_if_r[(i * 68) + 65-:64] = mem[ar_mem_index[i * 14+:14]][ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
									l2_resp_if_r[(i * 68) + 1-:2] = 2'd3;
									ar_scu_state_d[i * 4+:4] = 5'd4;
									ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3] + 1;
								end
								else begin
									l2_resp_if_rvalid_o[i] = 1'b1;
									l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
									l2_resp_if_r[(i * 68) + 65-:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
									r_mem_change_data_ena[i] = 1'b1;
									r_mem_change_data_index[i * 14+:14] = ar_mem_index[i * 14+:14];
									r_mem_change_data_offset[i * 11+:11] = ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH;
									r_mem_change_data[i * 64+:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
									l2_resp_if_r[(i * 68) + 1-:2] = 2'd3;
									ar_scu_state_d[i * 4+:4] = 5'd10;
									ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3] + 1;
								end
							end
							else
								ar_scu_state_d[i * 4+:4] = 5'd5;
						end
						5'd7: begin
							pending[ar_mem_index[i * 14+:14]] = 1'b1;
							l2_req_if_snvalid_o[m_e_pos] = 1'b1;
							if (l2_resp_if_snvalid_i[m_e_pos]) begin
								if (l2_resp_if_sn[(m_e_pos * 66) + 0]) begin
									l2_resp_if_rvalid_o[i] = 1'b1;
									l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
									l2_resp_if_r[(i * 68) + 65-:64] = mem[ar_mem_index[i * 14+:14]][ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH];
									l2_resp_if_r[(i * 68) + 1-:2] = 2'd1;
									ar_scu_state_d[i * 4+:4] = 5'd3;
									ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3] + 1;
								end
								else begin
									l2_resp_if_rvalid_o[i] = 1'b1;
									l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
									l2_resp_if_r[(i * 68) + 65-:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
									r_mem_change_data_ena[i] = 1'b1;
									r_mem_change_data_index[i * 14+:14] = ar_mem_index[i * 14+:14];
									r_mem_change_data_offset[i * 11+:11] = ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH;
									r_mem_change_data[i * 64+:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
									l2_resp_if_r[(i * 68) + 1-:2] = 2'd1;
									ar_scu_state_d[i * 4+:4] = 5'd9;
									ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3] + 1;
								end
							end
							else
								ar_scu_state_d[i * 4+:4] = 5'd7;
						end
						5'd9:
							if (ar_cnt_q[i * 3+:3] == 3'b111) begin
								ar_cnt_d[i * 3+:3] = 0;
								l2_resp_if_rvalid_o[i] = 1'b1;
								l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
								l2_resp_if_r[(i * 68) + 65-:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
								r_mem_change_data_ena[i] = 1'b1;
								r_mem_change_data_index[i * 14+:14] = ar_mem_index[i * 14+:14];
								r_mem_change_data_offset[i * 11+:11] = ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH;
								r_mem_change_data[i * 64+:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
								l2_resp_if_r[(i * 68) + 1-:2] = 2'd1;
								ar_scu_state_d[i * 4+:4] = 5'd11;
								r_mem_change_mesi_ena[i] = 1'b1;
								r_mem_change_mesi_index[i * 14+:14] = ar_mem_index[i * 14+:14];
								ar_mesi_tmp[i * 8+:8] = mem[ar_mem_index[i * 14+:14]][519:512];
								ar_mesi_tmp[(i * 8) + (i * 2)+:2] = 2'd1;
								ar_mesi_tmp[(i * 8) + (m_e_pos * 2)+:2] = 2'd1;
								r_mem_change_mesi_data[i * 8+:8] = ar_mesi_tmp[i * 8+:8];
							end
							else begin
								l2_resp_if_rvalid_o[i] = 1'b1;
								l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
								l2_resp_if_r[(i * 68) + 65-:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
								l2_resp_if_r[(i * 68) + 1-:2] = 2'd1;
								r_mem_change_data_ena[i] = 1'b1;
								r_mem_change_data_index[i * 14+:14] = ar_mem_index[i * 14+:14];
								r_mem_change_data_offset[i * 11+:11] = ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH;
								r_mem_change_data[i * 64+:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
								ar_scu_state_d[i * 4+:4] = 5'd9;
								ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3] + 1;
							end
						5'd10:
							if (ar_cnt_q[i * 3+:3] == 3'b111) begin
								ar_cnt_d[i * 3+:3] = 0;
								l2_resp_if_rvalid_o[i] = 1'b1;
								l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
								l2_resp_if_r[(i * 68) + 65-:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
								r_mem_change_data_ena[i] = 1'b1;
								r_mem_change_data_index[i * 14+:14] = ar_mem_index[i * 14+:14];
								r_mem_change_data_offset[i * 11+:11] = ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH;
								r_mem_change_data[i * 64+:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
								l2_resp_if_r[(i * 68) + 1-:2] = 2'd3;
								ar_scu_state_d[i * 4+:4] = 5'd11;
								r_mem_change_mesi_ena[i] = 1'b1;
								r_mem_change_mesi_index[i * 14+:14] = ar_mem_index[i * 14+:14];
								ar_mesi_tmp[i * 8+:8] = mem[ar_mem_index[i * 14+:14]][519:512];
								ar_mesi_tmp[(i * 8) + (i * 2)+:2] = 2'd3;
								ar_mesi_tmp[(i * 8) + (m_e_pos * 2)+:2] = 2'd0;
								r_mem_change_mesi_data[i * 8+:8] = ar_mesi_tmp[i * 8+:8];
							end
							else begin
								l2_resp_if_rvalid_o[i] = 1'b1;
								l2_resp_if_r[(i * 68) + 67-:2] = l2_req_if_ar_save[25-:2];
								l2_resp_if_r[(i * 68) + 65-:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
								l2_resp_if_r[(i * 68) + 1-:2] = 2'd3;
								r_mem_change_data_ena[i] = 1'b1;
								r_mem_change_data_index[i * 14+:14] = ar_mem_index[i * 14+:14];
								r_mem_change_data_offset[i * 11+:11] = ar_cnt_q[i * 3+:3] * rvh_l1d_pkg_MEM_DATA_WIDTH;
								r_mem_change_data[i * 64+:64] = l2_resp_if_sn[(m_e_pos * 66) + 64-:64];
								ar_scu_state_d[i * 4+:4] = 5'd10;
								ar_cnt_d[i * 3+:3] = ar_cnt_q[i * 3+:3] + 1;
							end
						5'd11: begin
							pending[ar_mem_index[i * 14+:14]] = 1'b0;
							ar_snoop_d[i] = 1'b0;
							if (ar_scu_state_d[i * 4+:4] == 5'd2)
								ar_scu_state_d[i * 4+:4] = 5'd2;
							else
								ar_scu_state_d[i * 4+:4] = 5'd0;
						end
					endcase
				end
		end
	end
	reg [63:0] cycle;
	always @(posedge clk)
		if (~rstn) begin : sv2v_autoblock_16
			reg signed [31:0] i;
			for (i = 0; i < 32768; i = i + 1)
				mem[i] = 520'b0;
		end
		else begin : sv2v_autoblock_17
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				begin
					if (w_mem_change_mesi_ena[i]) begin
						mem[w_mem_change_mesi_index[i * 14+:14]][519:512] = w_mem_change_mesi_data[i * 8+:8];
						$display("\n\n====================");
						$display("cycle = %d , cpu %d , load", cycle, i);
						$display("aw change mesi %x", w_mem_change_mesi_data[i * 8+:8]);
						$display("awaddr %x", w_mem_change_mesi_index[i * 14+:14]);
					end
					if (w_mem_change_data_ena[i]) begin
						mem[w_mem_change_data_index[i * 14+:14]][w_mem_change_data_offset[i * 11+:11]+:64] = w_mem_change_data[i * 64+:64];
						$display("\n\n====================");
						$display("cycle = %d , cpu %d , load", cycle, i);
						$display("aw change data %x", w_mem_change_data[i * 64+:64]);
						$display("awaddr %x", w_mem_change_data_index[i * 14+:14]);
					end
					if (r_mem_change_mesi_ena[i]) begin
						mem[r_mem_change_mesi_index[i * 14+:14]][519:512] = r_mem_change_mesi_data[i * 8+:8];
						$display("\n\n====================");
						$display("cycle = %d , cpu %d , load", cycle, i);
						$display("ar change mesi %x", r_mem_change_mesi_data[i * 8+:8]);
						$display("araddr %x", r_mem_change_mesi_index[i * 14+:14]);
					end
					if (r_mem_change_data_ena[i]) begin
						mem[r_mem_change_data_index[i * 14+:14]][r_mem_change_data_offset[i * 11+:11]+:64] = r_mem_change_data[i * 64+:64];
						$display("\n\n====================");
						$display("cycle = %d , cpu %d , load", cycle, i);
						$display("ar change data %x", r_mem_change_data[i * 64+:64]);
						$display("araddr %x", r_mem_change_data_index[i * 14+:14]);
					end
				end
		end
	always @(posedge clk) begin
		begin : sv2v_autoblock_18
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				if (~rstn) begin
					ar_scu_state_q[i * 4+:4] <= 5'd0;
					ar_cnt_q[i * 3+:3] <= 1'sb0;
					ar_snoop_q[i] <= 1'b0;
					s_ack_num_q[i * 2+:2] <= 2'b00;
					sum_q <= 2'b00;
				end
				else begin
					ar_scu_state_q[i * 4+:4] <= ar_scu_state_d[i * 4+:4];
					ar_cnt_q[i * 3+:3] <= ar_cnt_d[i * 3+:3];
					ar_snoop_q[i] <= ar_snoop_d[i];
					s_ack_num_q[i * 2+:2] <= s_ack_num_d[i * 2+:2];
					sum_q <= sum_d;
				end
		end
		begin : sv2v_autoblock_19
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				if (~rstn) begin
					aw_state_q[i * 4+:4] <= 3'd0;
					aw_cnt_q[i * 3+:3] <= 1'sb0;
				end
				else begin
					aw_state_q[i * 4+:4] <= aw_state_d[i * 4+:4];
					aw_cnt_q[i * 3+:3] <= aw_cnt_d[i * 3+:3];
				end
		end
	end
	always @(posedge clk or negedge rstn)
		if (~rstn)
			cycle <= 1'sb0;
		else
			cycle <= cycle + 1;
	always @(posedge clk) begin
		begin : sv2v_autoblock_20
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				if (l2_req_if_arvalid_i[i] & l2_req_if_arready_o[i]) begin
					$display("\n\n====================");
					$display("cycle = %d , cpu %d , load", cycle, i);
					$display("arsnoop %x", l2_req_if_ar[(i * 26) + 3-:4]);
					$display("araddr %x", ar_mem_index[i * 14+:14]);
					$display("mesi %x", mem[ar_mem_index[i * 14+:14]][519:512]);
				end
		end
		begin : sv2v_autoblock_21
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				if (l2_req_if_awvalid_i[i] & l2_req_if_awready_o[i]) begin
					$display("\n\n====================");
					$display("cycle = %d , cpu %d , load", cycle, i);
					$display("awsnoop %d", l2_req_if_aw[(i * 16) + 1-:2]);
					$display("awaddr %x", aw_mem_index[i * 14+:14]);
					$display("mesi %x", mem[aw_mem_index[i * 14+:14]][519:512]);
				end
		end
	end
endmodule
