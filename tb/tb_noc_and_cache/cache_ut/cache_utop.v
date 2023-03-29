// `timescale 1ns/1ps
// module cache_utop
// ();
// logic clk,rstn;
//   initial begin
//     clk = 1'b1;
//     forever #10 clk = ~clk;
//   end

// initial begin
//   rstn = 1'b0;
//   #200;
//   rstn = 1'b1;
// end


//   initial begin
//     int dumpon = 0;
//     string log;
//     string wav;
//     $value$plusargs("dumpon=%d",dumpon);
//     if ($value$plusargs("sim_log=%s",log)) begin
//         $display("!!!!!!!!!!wave_log= %s",log);
//     end
//     wav = {log,"/waves.fsdb"};
//     $display("!!!!!!wave_log= %s",wav);
//     if(dumpon > 0) begin
//       $fsdbDumpfile(wav);
//       $fsdbDumpvars(0,cache_utop);
//       $fsdbDumpvars("+struct");
//       $fsdbDumpvars("+mda");
//       $fsdbDumpvars("+all");
//       $fsdbDumpon;
//     end
//   end

// initial begin
//   #2000;
//   $finish;
// end

module cache_utop
(
	input clk,
	input rstn
);

	wire [3:0] l2_req_if_arvalid;
	wire [3:0] l2_req_if_arready;
	localparam rvh_l1d_pkg_PADDR_WIDTH = 20;
	wire [103:0] l2_req_if_ar;
	wire [3:0] l2_req_if_awvalid;
	wire [3:0] l2_req_if_awready;
	wire [63:0] l2_req_if_aw;
	wire [3:0] l2_req_if_wvalid;
	wire [3:0] l2_req_if_wready;
	localparam rvh_l1d_pkg_MEM_DATA_WIDTH = 64;
	wire [255:0] l2_req_if_w;
	wire [3:0] l2_resp_if_rvalid;
	wire [3:0] l2_resp_if_rready;
	wire [271:0] l2_resp_if_r;
	wire [3:0] l2_req_if_snvalid;
	wire [3:0] l2_req_if_snready;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_DATA_SIZE = 512;
	localparam rvh_l1d_pkg_L1D_BANK_OFFSET_WIDTH = 6;
	localparam rvh_l1d_pkg_L1D_BANK_LINE_ADDR_SIZE = 14;
	wire [71:0] l2_req_if_sn;
	wire [3:0] l2_resp_if_snvalid;
	wire [3:0] l2_resp_if_snready;
	wire [263:0] l2_resp_if_sn;
	wire [3:0] l3_req_if_arvalid;
	wire [3:0] l3_req_if_arready;
	wire [103:0] l3_req_if_ar;
	wire [3:0] l3_req_if_awvalid;
	wire [3:0] l3_req_if_awready;
	wire [63:0] l3_req_if_aw;
	wire [3:0] l3_req_if_wvalid;
	wire [3:0] l3_req_if_wready;
	wire [255:0] l3_req_if_w;
	wire [3:0] l3_resp_if_rvalid;
	wire [3:0] l3_resp_if_rready;
	wire [271:0] l3_resp_if_r;
	wire [3:0] l3_req_if_snvalid;
	wire [3:0] l3_req_if_snready;
	wire [71:0] l3_req_if_sn;
	wire [3:0] l3_resp_if_snvalid;
	wire [3:0] l3_resp_if_snready;
	wire [263:0] l3_resp_if_sn;
	wire [3:0] out_to_in_switch;
	wire [3:0] in_switch_oen;
	wire [3:0] in_to_out_switch;
	wire [3:0] out_switch_oen;
	localparam [31:0] rvh_l1d_pkg_LDU_OP_WIDTH = 4;
	reg [15:0] ld_req_opcode;
	localparam rvh_l1d_pkg_RUBY_ID = 9;
	reg [35:0] ld_req_lsu_tag;
	localparam rvh_l1d_pkg_L1D_BANK_SET_NUM = 4;
	localparam rvh_l1d_pkg_L1D_BANK_SET_INDEX_WIDTH = 2;
	localparam rvh_l1d_pkg_L1D_BANK_PADDR_TAG_WIDTH = 12;
	reg [47:0] ld_req_ptag;
	reg [7:0] ld_req_idx;
	reg [23:0] ld_req_offset;
	wire [3:0] ld_req_rdy;
	reg [3:0] st_req_vld;
	localparam [31:0] rvh_l1d_pkg_STU_OP_WIDTH = 5;
	reg [19:0] st_req_opcode;
	reg [35:0] st_req_lsu_tag;
	reg [79:0] st_req_paddr;
	localparam rvh_l1d_pkg_L1D_STB_DATA_WIDTH = 512;
	reg [2047:0] st_req_data;
	reg [255:0] st_req_data_byte_mask;
	wire [3:0] st_req_rdy;
	wire [3:0] dtlb_resp_rdy;
	wire [3:0] replay_vld;
	wire [3:0] mshr_full;
	localparam rvh_l1d_pkg_RRV64_LSU_ID_WIDTH = 12;
	wire [47:0] replay_lsu_tag;
	wire [3:0] rob_wb_vld;
	localparam rvh_l1d_pkg_ROB_TAG_WIDTH = 4;
	wire [15:0] rob_wb_rob_tag;
	wire [3:0] l1d_wb_vld;
	localparam rvh_l1d_pkg_PREG_TAG_WIDTH = 4;
	wire [15:0] l1d_wb_tag;
	localparam rvh_l1d_pkg_XLEN = 64;
	wire [255:0] l1d_wb_data;
	wire [3:0] l1d_wb_vld_from_mlfb;
	wire [3:0] l1d_wb_rdy_from_mlfb;
	wire [35:0] l1d_resp_lsu_tag;
	wire [3:0] ptw_walk_req_rdy;
	wire [3:0] ptw_walk_resp_vld;
	localparam rvh_l1d_pkg_PTW_ID_WIDTH = 2;
	wire [7:0] ptw_walk_resp_id;
	localparam rvh_l1d_pkg_PTE_WIDTH = 12;
	wire [47:0] ptw_walk_resp_pte;
	wire rob_flush_i;
	wire fencei_flush_vld_i;
	wire fencei_flush_grant_o;
	wire [14:0] ld_st;
	wire [11:0] tag;
	wire [7:0] core_enable;
	wire [1:0] allocate_tag;
	wire [7:0] st_data;
	wire [7:0] core_index;
	reg [3:0] ld_req_vld;
	wire fencei_flush_bank_vld;
	assign rob_flush_i = 1'b0;
	assign l1d_wb_rdy_from_mlfb = 4'b1111;
	localparam [0:0] sv2v_uu_LD_OR_ST_ext_i_Seed_DV_0 = 1'sb0;
	localparam sv2v_uu_LD_OR_ST_NUM_BITS = 15;
	localparam [14:0] sv2v_uu_LD_OR_ST_ext_i_Seed_Data_0 = 1'sb0;
	LFSR #(.NUM_BITS(15)) LD_OR_ST(
		.i_Clk(clk),
		.i_Enable(rstn),
		.i_Seed_DV(sv2v_uu_LD_OR_ST_ext_i_Seed_DV_0),
		.i_Seed_Data(sv2v_uu_LD_OR_ST_ext_i_Seed_Data_0),
		.o_LFSR_Data(ld_st)
	);
	localparam [0:0] sv2v_uu_TAG_ext_i_Seed_DV_0 = 1'sb0;
	localparam sv2v_uu_TAG_NUM_BITS = 12;
	localparam [11:0] sv2v_uu_TAG_ext_i_Seed_Data_0 = 1'sb0;
	LFSR #(.NUM_BITS(12)) TAG(
		.i_Clk(clk),
		.i_Enable(rstn),
		.i_Seed_DV(sv2v_uu_TAG_ext_i_Seed_DV_0),
		.i_Seed_Data(sv2v_uu_TAG_ext_i_Seed_Data_0),
		.o_LFSR_Data(tag)
	);
	assign core_enable = 8'b00000111;
	assign allocate_tag = 2'b00;
	localparam [0:0] sv2v_uu_ST_DATA_CORE_ext_i_Seed_DV_0 = 1'sb0;
	localparam sv2v_uu_ST_DATA_CORE_NUM_BITS = 8;
	localparam [7:0] sv2v_uu_ST_DATA_CORE_ext_i_Seed_Data_0 = 1'sb0;
	LFSR #(.NUM_BITS(8)) ST_DATA_CORE(
		.i_Clk(clk),
		.i_Enable(rstn),
		.i_Seed_DV(sv2v_uu_ST_DATA_CORE_ext_i_Seed_DV_0),
		.i_Seed_Data(sv2v_uu_ST_DATA_CORE_ext_i_Seed_Data_0),
		.o_LFSR_Data(st_data)
	);
	localparam [0:0] sv2v_uu_CORE_INDEX_ext_i_Seed_DV_0 = 1'sb0;
	localparam sv2v_uu_CORE_INDEX_NUM_BITS = 8;
	localparam [7:0] sv2v_uu_CORE_INDEX_ext_i_Seed_Data_0 = 1'sb0;
	LFSR #(.NUM_BITS(8)) CORE_INDEX(
		.i_Clk(clk),
		.i_Enable(rstn),
		.i_Seed_DV(sv2v_uu_CORE_INDEX_ext_i_Seed_DV_0),
		.i_Seed_Data(sv2v_uu_CORE_INDEX_ext_i_Seed_Data_0),
		.o_LFSR_Data(core_index)
	);
	localparam EBI_WIDTH = 16;
	wire [31:0] state;
	assign state[0+:8] = 8'b00011011;
	assign state[8+:8] = 8'b01101100;
	assign state[16+:8] = 8'b10110001;
	assign state[24+:8] = 8'b11000110;
	wire [47:0] tag_mask;
	assign tag_mask[0+:12] = 12'b111000000000;
	assign tag_mask[12+:12] = 12'b000111000000;
	assign tag_mask[24+:12] = 12'b000000111000;
	assign tag_mask[36+:12] = 12'b000000000111;
	reg [7:0] state_use;
	reg [27:0] cnt_d;
	reg [27:0] cnt_q;
	reg [27:0] cnt_ld_d;
	reg [27:0] cnt_ld_q;
	reg [19:0] cnt_ld_check_d;
	reg [19:0] cnt_ld_check_q;
	reg [511:0] mem [0:16384];
	wire [63:0] in_to_out;
	wire [63:0] out_to_in;
	wire [63:0] in_oen;
	wire [63:0] out_oen;
	reg [3:0] done;
	wire start;
	// assign start = &done;
	assign start = 1'b1;
	reg [4095:0] true_result;
	reg [47:0] fake_tag;
	reg [7:0] state_d;
	reg [7:0] state_q;
	function automatic [3:0] sv2v_cast_6590A;
		input reg [3:0] inp;
		sv2v_cast_6590A = inp;
	endfunction
	function automatic [4:0] sv2v_cast_E68F5;
		input reg [4:0] inp;
		sv2v_cast_E68F5 = inp;
	endfunction

reg [20:0] passs;
always @(posedge clk or negedge rstn) begin
	if(~rstn) begin
		passs <= '0;
	end else begin
		passs <= passs + 1;
		if(passs >= 20000) begin
			$display("muli-cache pass!!!!!!!!");
			$finish;
		end
	end
end

	always @(*) begin : sv2v_autoblock_1
		reg signed [31:0] i;
		for (i = 0; i < 4; i = i + 1)
			begin
				state_d[i * 4+:4] = state_q[i * 4+:4];
				cnt_d[i * 7+:7] = cnt_q[i * 7+:7];
				cnt_ld_d[i * 7+:7] = cnt_ld_q[i * 7+:7];
				cnt_ld_check_d[i * 5+:5] = cnt_ld_check_q[i * 5+:5];
				ld_req_vld[i] = 1'b0;
				st_req_vld[i] = 1'b0;
				case (state_q[i * 4+:4])
					2'd0:
						if ((rstn & start) & core_enable[i]) begin
							state_d[i * 4+:4] = 2'd1;
							cnt_d[i * 7+:7] = 0;
							cnt_ld_d[i * 7+:7] = 0;
							state_use = state[allocate_tag * 8+:8];
							cnt_ld_check_d[i * 5+:5] = 5'b00100;
						end
					2'd1:
						if (cnt_q[i * 7+:7] < 72) begin
							ld_req_opcode[i * rvh_l1d_pkg_LDU_OP_WIDTH+:rvh_l1d_pkg_LDU_OP_WIDTH] = sv2v_cast_6590A(3);
							ld_req_lsu_tag[i * 9+:9] = {i[1:0], cnt_q[i * 7+:7]};
							ld_req_ptag[i * 12+:12] = {tag & tag_mask[state_use[2 * i+:2] * 12+:12]};
							ld_req_vld[i] = ~ld_st[i] & (ld_req_ptag[i * 12+:12] != 12'b000000000000);
							ld_req_idx[i * 2+:2] = core_index[2 * i+:2];
							ld_req_offset[i * 6+:6] = 0;
							if ((ld_req_rdy[i] & ~ld_st[i]) & ld_req_vld[i])
								cnt_d[i * 7+:7] = cnt_q[i * 7+:7] + 1;
							st_req_opcode[i * rvh_l1d_pkg_STU_OP_WIDTH+:rvh_l1d_pkg_STU_OP_WIDTH] = sv2v_cast_E68F5(0);
							st_req_lsu_tag[i * 9+:9] = {i[1:0], cnt_q[i * 7+:7]};
							st_req_paddr[i * 20+:20] = {tag & tag_mask[state_use[2 * i+:2] * 12+:12], core_index[2 * i+:2], 6'b000000};
							st_req_vld[i] = ld_st[i] & (st_req_paddr[(i * 20) + 19-:12] != 12'b000000000000);
							st_req_data[i * 512+:512] = {504'b0, st_data};
							st_req_data_byte_mask[i * 64+:64] = 64'b0000000000000000000000000000000000000000000000000000000000000001;
							if ((st_req_rdy[i] & ld_st[i]) & st_req_vld[i])
								cnt_d[i * 7+:7] = cnt_q[i * 7+:7] + 1;
						end
						else begin
							ld_req_opcode[i * rvh_l1d_pkg_LDU_OP_WIDTH+:rvh_l1d_pkg_LDU_OP_WIDTH] = sv2v_cast_6590A(3);
							ld_req_lsu_tag[i * 9+:9] = {i[1:0], cnt_q[i * 7+:7]};
							fake_tag[i * 12+:12] = 1'sb0;
							fake_tag[(i * 12) + 2-:3] = cnt_ld_check_q[(i * 5) + 4-:3];
							fake_tag[i * 12+:12] = fake_tag[i * 12+:12] << ((3 - state_use[2 * i+:2]) * 3);
							ld_req_ptag[i * 12+:12] = fake_tag[i * 12+:12];
							ld_req_idx[i * 2+:2] = cnt_ld_check_q[(i * 5) + 1-:2];
							ld_req_offset[i * 6+:6] = 0;
							ld_req_vld[i] = 1'b1;
							if (ld_req_rdy[i] & (cnt_q[i * 7+:7] < 100)) begin
								cnt_d[i * 7+:7] = cnt_q[i * 7+:7] + 1;
								cnt_ld_check_d[i * 5+:5] = cnt_ld_check_q[i * 5+:5] + 1;
							end
							if (cnt_d[i * 7+:7] == 100)
								state_d[i * 4+:4] = 2'd0;
						end
				endcase
			end
	end



	reg [63:0] cycle;
	always @(posedge clk or negedge rstn)
		if (~rstn)
			cycle <= 1'sb0;
		else
			cycle <= cycle + 1;
	always @(posedge clk) begin : sv2v_autoblock_2
		reg signed [31:0] i;
		for (i = 0; i < 4; i = i + 1)
			if (~rstn) begin
				state_q[i * 4+:4] <= 2'd0;
				cnt_q[i * 7+:7] <= 1'sb0;
				cnt_ld_q[i * 7+:7] <= 1'sb0;
				cnt_ld_check_q[i * 5+:5] <= 1'sb0;
			end
			else begin
				state_q[i * 4+:4] <= state_d[i * 4+:4];
				cnt_q[i * 7+:7] <= cnt_d[i * 7+:7];
				cnt_ld_q[i * 7+:7] <= cnt_ld_d[i * 7+:7];
				cnt_ld_check_q[i * 5+:5] <= cnt_ld_check_d[i * 5+:5];
			end
	end
	reg [23:0] true_ld;
	always @(posedge clk) begin
		if (~rstn) begin
			begin : sv2v_autoblock_3
				reg signed [31:0] i;
				for (i = 0; i < 16384; i = i + 1)
					mem[i] = 512'b0;
			end
			done = 4'b1111;
			begin : sv2v_autoblock_4
				reg signed [31:0] i;
				for (i = 0; i < 3; i = i + 1)
					true_ld[i * 6+:6] <= 1'sb0;
			end
		end
		begin : sv2v_autoblock_5
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				begin
					if (ld_req_vld[i] & ld_req_rdy[i]) begin
						$display("\n\n====================");
						$display("cycle = %d , cpu %d , load", cycle, i);
						$display("rob tag %d", ld_req_lsu_tag[(i * 9) + 6-:7]);
						$display("ldaddr %x", {ld_req_ptag[i * 12+:12], ld_req_idx[i * 2+:2]});
						done[i] = 1'b0;
						true_result[ld_req_lsu_tag[i * 9+:9] * 8+:8] = mem[{ld_req_ptag[i * 12+:12], ld_req_idx[i * 2+:2]}][7:0];
						$display("cycle = %d, change true result, save %x", cycle, mem[{ld_req_ptag[i * 12+:12], ld_req_idx[i * 2+:2]}][7:0]);
					end
					if (st_req_vld[i] & st_req_rdy[i]) begin
						$display("\n\n====================");
						$display("cycle = %d , cpu %d , store", cycle, i);
						$display("rob tag %d", st_req_lsu_tag[(i * 9) + 6-:7]);
						$display("staddr %x", {st_req_paddr[(i * 20) + 19-:12], st_req_paddr[(i * 20) + 7-:2]});
						$display("st dat %x", st_req_data[(i * 512) + 7-:8]);
						$display("change ut mem, save %x", st_req_data[(i * 512) + 7-:8]);
						done[i] = 1'b0;
						mem[{tag & tag_mask[state_use[2 * i+:2] * 12+:12], core_index[2 * i+:2]}] = st_req_data[i * 512+:512];
					end
					if (l1d_wb_vld[i]) begin
						if (true_result[(l1d_resp_lsu_tag[i * 9+:9] * 8) + 7-:8] != l1d_wb_data[(i * 64) + 7-:8]) begin
							$display("\n\n====================");
							$display("cycle = %d , cpu %d , error", cycle, i);
							$display("rob tag %d", l1d_resp_lsu_tag[(i * 9) + 6-:7]);
							$display("true data %x", true_result[(l1d_resp_lsu_tag[i * 9+:9] * 8) + 7-:8]);
							$display("false data %x", l1d_wb_data[(i * 64) + 7-:8]);
							$finish;
						end
						if (true_ld[i * 6+:6] == 27) begin
							true_ld[i * 6+:6] <= 1'sb0;
							done[i] = 1'b1;
							$display("\n\n====================");
							$display("cycle = %d , cpu %d", cycle, i);
							$display("end check cycle");
						end
						else if ((true_result[(l1d_resp_lsu_tag[i * 9+:9] * 8) + 7-:8] == l1d_wb_data[(i * 64) + 7-:8]) & (l1d_resp_lsu_tag[(i * 9) + 6-:7] > 71))
							true_ld[i * 6+:6] <= true_ld[i * 6+:6] + 1;
					end
				end
		end
	end
	localparam [3:0] sv2v_uu_CORE_1_ext_ls_pipe_l1d_ld_req_rob_tag_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_1_ext_ls_pipe_l1d_ld_req_prd_i_0 = 1'sb0;
	localparam [38:0] sv2v_uu_CORE_1_ext_ls_pipe_l1d_ld_req_vtag_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_1_ext_ls_pipe_l1d_st_req_io_region_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_1_ext_ls_pipe_l1d_st_req_rob_tag_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_1_ext_ls_pipe_l1d_st_req_prd_i_0 = 1'sb0;
	localparam [19:0] sv2v_uu_CORE_1_ext_dtlb_l1d_resp_ppn_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_1_ext_stb_l1d_bank_ld_bypass_valid_i_0 = 1'sb0;
	localparam [63:0] sv2v_uu_CORE_1_ext_stb_l1d_bank_ld_bypass_data_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_1_ext_ptw_walk_req_vld_i_0 = 1'sb0;
	localparam [1:0] sv2v_uu_CORE_1_ext_ptw_walk_req_id_i_0 = 1'sb0;
	localparam [19:0] sv2v_uu_CORE_1_ext_ptw_walk_req_addr_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_1_ext_stb_l1d_ptw_walk_req_rdy_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_1_ext_ptw_walk_resp_rdy_i_0 = 1'sb0;
	wire fencei_flush_grant_per_bank_d;
	rvh_l1d_bank CORE_1(
		.ls_pipe_l1d_ld_req_vld_i(ld_req_vld[0]),
		.ls_pipe_l1d_ld_req_rob_tag_i(sv2v_uu_CORE_1_ext_ls_pipe_l1d_ld_req_rob_tag_i_0),
		.ls_pipe_l1d_ld_req_prd_i(sv2v_uu_CORE_1_ext_ls_pipe_l1d_ld_req_prd_i_0),
		.ls_pipe_l1d_ld_req_opcode_i(ld_req_opcode[0+:rvh_l1d_pkg_LDU_OP_WIDTH]),
		.ls_pipe_l1d_ld_req_lsu_tag_i(ld_req_lsu_tag[0+:9]),
		.ls_pipe_l1d_ld_req_ptag_i(ld_req_ptag[0+:12]),
		.ls_pipe_l1d_ld_req_idx_i(ld_req_idx[0+:2]),
		.ls_pipe_l1d_ld_req_offset_i(ld_req_offset[0+:6]),
		.ls_pipe_l1d_ld_req_vtag_i(sv2v_uu_CORE_1_ext_ls_pipe_l1d_ld_req_vtag_i_0),
		.stb_l1d_ld_rdy_i(1'b1),
		.ls_pipe_l1d_ld_req_rdy_o(ld_req_rdy[0]),
		.ls_pipe_l1d_st_req_vld_i(st_req_vld[0]),
		.ls_pipe_l1d_st_req_io_region_i(sv2v_uu_CORE_1_ext_ls_pipe_l1d_st_req_io_region_i_0),
		.ls_pipe_l1d_st_req_rob_tag_i(sv2v_uu_CORE_1_ext_ls_pipe_l1d_st_req_rob_tag_i_0),
		.ls_pipe_l1d_st_req_prd_i(sv2v_uu_CORE_1_ext_ls_pipe_l1d_st_req_prd_i_0),
		.ls_pipe_l1d_st_req_opcode_i(st_req_opcode[0+:rvh_l1d_pkg_STU_OP_WIDTH]),
		.ls_pipe_l1d_st_req_lsu_tag_i(st_req_lsu_tag[0+:9]),
		.ls_pipe_l1d_st_req_paddr_i(st_req_paddr[0+:20]),
		.ls_pipe_l1d_st_req_data_i(st_req_data[0+:512]),
		.ls_pipe_l1d_st_req_data_byte_mask_i(st_req_data_byte_mask[0+:64]),
		.ls_pipe_l1d_st_req_rdy_o(st_req_rdy[0]),
		.dtlb_l1d_resp_vld_i(1'b1),
		.dtlb_l1d_resp_excp_vld_i(1'b0),
		.dtlb_l1d_resp_hit_i(1'b1),
		.dtlb_l1d_resp_ppn_i(sv2v_uu_CORE_1_ext_dtlb_l1d_resp_ppn_i_0),
		.dtlb_l1d_resp_rdy_o(dtlb_resp_rdy[0]),
		.stb_l1d_bank_ld_bypass_valid_i(sv2v_uu_CORE_1_ext_stb_l1d_bank_ld_bypass_valid_i_0),
		.stb_l1d_bank_ld_bypass_data_i(sv2v_uu_CORE_1_ext_stb_l1d_bank_ld_bypass_data_i_0),
		.l1d_ls_pipe_replay_vld_o(replay_vld[0]),
		.l1d_ls_pipe_mshr_full_o(mshr_full[0]),
		.l1d_ls_pipe_replay_lsu_tag_o(replay_lsu_tag[0+:12]),
		.l1d_rob_wb_vld_o(rob_wb_vld[0]),
		.l1d_rob_wb_rob_tag_o(rob_wb_rob_tag[0+:4]),
		.l1d_int_prf_wb_vld_o(l1d_wb_vld[0]),
		.l1d_int_prf_wb_tag_o(l1d_wb_tag[0+:4]),
		.l1d_int_prf_wb_data_o(l1d_wb_data[0+:64]),
		.l1d_int_prf_wb_vld_from_mlfb_o(l1d_wb_vld_from_mlfb[0]),
		.l1d_int_prf_wb_rdy_from_mlfb_i(l1d_wb_rdy_from_mlfb[0]),
		.l1d_lsu_lsu_tag_o(l1d_resp_lsu_tag[0+:9]),
		.ptw_walk_req_vld_i(sv2v_uu_CORE_1_ext_ptw_walk_req_vld_i_0),
		.ptw_walk_req_id_i(sv2v_uu_CORE_1_ext_ptw_walk_req_id_i_0),
		.ptw_walk_req_addr_i(sv2v_uu_CORE_1_ext_ptw_walk_req_addr_i_0),
		.stb_l1d_ptw_walk_req_rdy_i(sv2v_uu_CORE_1_ext_stb_l1d_ptw_walk_req_rdy_i_0),
		.ptw_walk_req_rdy_o(ptw_walk_req_rdy[0]),
		.ptw_walk_resp_vld_o(ptw_walk_resp_vld[0]),
		.ptw_walk_resp_id_o(ptw_walk_resp_id[0+:2]),
		.ptw_walk_resp_pte_o(ptw_walk_resp_pte[0+:12]),
		.ptw_walk_resp_rdy_i(sv2v_uu_CORE_1_ext_ptw_walk_resp_rdy_i_0),
		.l2_req_if_arvalid(l2_req_if_arvalid[0]),
		.l2_req_if_arready(l2_req_if_arready[0]),
		.l2_req_if_ar(l2_req_if_ar[0+:26]),
		.l2_req_if_awvalid(l2_req_if_awvalid[0]),
		.l2_req_if_awready(l2_req_if_awready[0]),
		.l2_req_if_aw(l2_req_if_aw[0+:16]),
		.l2_req_if_wvalid(l2_req_if_wvalid[0]),
		.l2_req_if_wready(l2_req_if_wready[0]),
		.l2_req_if_w(l2_req_if_w[0+:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.l2_resp_if_rvalid(l2_resp_if_rvalid[0]),
		.l2_resp_if_rready(l2_resp_if_rready[0]),
		.l2_resp_if_r(l2_resp_if_r[0+:68]),
		.l2_req_if_snvalid(l2_req_if_snvalid[0]),
		.l2_req_if_snready(l2_req_if_snready[0]),
		.l2_req_if_sn(l2_req_if_sn[0+:18]),
		.l2_resp_if_snvalid(l2_resp_if_snvalid[0]),
		.l2_resp_if_snready(l2_resp_if_snready[0]),
		.l2_resp_if_sn(l2_resp_if_sn[0+:66]),
		.rob_flush_i(rob_flush_i),
		.fencei_flush_vld_i(fencei_flush_bank_vld),
		.fencei_flush_grant_o(fencei_flush_grant_per_bank_d),
		.clk(clk),
		.rst(rstn)
	);
	inner_ebi #(
		.DATA_WIDTH(64),
		.PADDR_WIDTH(32),
		.CACHELINE_LENGTH(512),
		.EBI_WIDTH(16)
	) inner_ebi_1(
		.clk(clk),
		.rst(~rstn),
		.l2_req_if_arready_o(l2_req_if_arready[0]),
		.l2_req_if_arvalid_i(l2_req_if_arvalid[0]),
		.arid_i(l2_req_if_ar[25-:2]),
		.araddr_i({12'b000000000000, l2_req_if_ar[23-:20]}),
		.arsnoop_i(l2_req_if_ar[3-:4]),
		.l2_req_if_awready_o(l2_req_if_awready[0]),
		.l2_req_if_awvalid_i(l2_req_if_awvalid[0]),
		.awaddr_i({12'b000000000000, l2_req_if_aw[15-:14]}),
		.awmesi_i(l2_req_if_aw[1-:2]),
		.l2_req_if_wready_o(l2_req_if_wready[0]),
		.dff_l2_req_if_wvalid_i(l2_req_if_wvalid[0]),
		.dff_wdata_i(l2_req_if_w[63-:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.l2_resp_if_rvalid_o(l2_resp_if_rvalid[0]),
		.l2_resp_if_rready_i(l2_resp_if_rready[0]),
		.rid_o(l2_resp_if_r[67-:2]),
		.rdata_o(l2_resp_if_r[65-:64]),
		.mesi_sta_o(l2_resp_if_r[1-:2]),
		.l2_req_if_snready_i(l2_req_if_snready[0]),
		.l2_req_if_snvalid_o(l2_req_if_snvalid[0]),
		.sn_req_addr(l2_req_if_sn[17-:14]),
		.sn_req_snoop(l2_req_if_sn[3-:4]),
		.l2_resp_if_snready_o(l2_resp_if_snready[0]),
		.l2_resp_if_snvalid_i(l2_resp_if_snvalid[0]),
		.sn_resp_has_data(l2_resp_if_sn[65]),
		.sn_resp_dat(l2_resp_if_sn[64-:64]),
		.ack(l2_resp_if_sn[0]),
		.ebi_i(out_to_in[0+:16]),
		.ebi_o(in_to_out[0+:16]),
		.ebi_oen(in_oen[0+:16]),
		.bus_switch_i(out_to_in_switch[0]),
		.bus_switch_o(in_to_out_switch[0]),
		.bus_switch_oen(in_switch_oen[0])
	);
	outer_ebi #(
		.DATA_WIDTH(64),
		.PADDR_WIDTH(32),
		.CACHELINE_LENGTH(512),
		.EBI_WIDTH(16)
	) outer_ebi_1(
		.clk(clk),
		.rst(~rstn),
		.l2_req_if_arready_i(l3_req_if_arready[0]),
		.l2_req_if_arvalid_o(l3_req_if_arvalid[0]),
		.arid_o(l3_req_if_ar[25-:2]),
		.araddr_o(l3_req_if_ar[23-:20]),
		.arsnoop_o(l3_req_if_ar[3-:4]),
		.l2_req_if_awready_i(l3_req_if_awready[0]),
		.l2_req_if_awvalid_o(l3_req_if_awvalid[0]),
		.awaddr_o(l3_req_if_aw[15-:14]),
		.awmesi_o(l3_req_if_aw[1-:2]),
		.l2_req_if_wready_i(l3_req_if_wready[0]),
		.l2_req_if_wvalid_o(l3_req_if_wvalid[0]),
		.wdata_o(l3_req_if_w[63-:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.dff_l2_resp_if_rvalid_i(l3_resp_if_rvalid[0]),
		.l2_resp_if_rready_o(l3_resp_if_rready[0]),
		.dff_rid_i(l3_resp_if_r[67-:2]),
		.dff_rdata_i(l3_resp_if_r[65-:64]),
		.dff_mesi_sta_i(l3_resp_if_r[1-:2]),
		.l2_req_if_snready_o(l3_req_if_snready[0]),
		.l2_req_if_snvalid_i(l3_req_if_snvalid[0]),
		.sn_req_addr({18'b000000000000000000, l2_req_if_sn[17-:14]}),
		.sn_req_snoop(l3_req_if_sn[3-:4]),
		.l2_resp_if_snready_i(l3_resp_if_snready[0]),
		.l2_resp_if_snvalid_o(l3_resp_if_snvalid[0]),
		.sn_resp_has_data(l3_resp_if_sn[65]),
		.sn_resp_dat(l3_resp_if_sn[64-:64]),
		.ack(l3_resp_if_sn[0]),
		.ebi_i(in_to_out[0+:16]),
		.ebi_o(out_to_in[0+:16]),
		.ebi_oen(out_oen[0+:16]),
		.bus_switch_i(in_to_out_switch[0]),
		.bus_switch_o(out_to_in_switch[0]),
		.bus_switch_oen(out_switch_oen[0])
	);
	localparam [3:0] sv2v_uu_CORE_2_ext_ls_pipe_l1d_ld_req_rob_tag_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_2_ext_ls_pipe_l1d_ld_req_prd_i_0 = 1'sb0;
	localparam [38:0] sv2v_uu_CORE_2_ext_ls_pipe_l1d_ld_req_vtag_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_2_ext_ls_pipe_l1d_st_req_io_region_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_2_ext_ls_pipe_l1d_st_req_rob_tag_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_2_ext_ls_pipe_l1d_st_req_prd_i_0 = 1'sb0;
	localparam [19:0] sv2v_uu_CORE_2_ext_dtlb_l1d_resp_ppn_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_2_ext_stb_l1d_bank_ld_bypass_valid_i_0 = 1'sb0;
	localparam [63:0] sv2v_uu_CORE_2_ext_stb_l1d_bank_ld_bypass_data_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_2_ext_ptw_walk_req_vld_i_0 = 1'sb0;
	localparam [1:0] sv2v_uu_CORE_2_ext_ptw_walk_req_id_i_0 = 1'sb0;
	localparam [19:0] sv2v_uu_CORE_2_ext_ptw_walk_req_addr_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_2_ext_stb_l1d_ptw_walk_req_rdy_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_2_ext_ptw_walk_resp_rdy_i_0 = 1'sb0;
	rvh_l1d_bank CORE_2(
		.ls_pipe_l1d_ld_req_vld_i(ld_req_vld[1]),
		.ls_pipe_l1d_ld_req_rob_tag_i(sv2v_uu_CORE_2_ext_ls_pipe_l1d_ld_req_rob_tag_i_0),
		.ls_pipe_l1d_ld_req_prd_i(sv2v_uu_CORE_2_ext_ls_pipe_l1d_ld_req_prd_i_0),
		.ls_pipe_l1d_ld_req_opcode_i(ld_req_opcode[rvh_l1d_pkg_LDU_OP_WIDTH+:rvh_l1d_pkg_LDU_OP_WIDTH]),
		.ls_pipe_l1d_ld_req_lsu_tag_i(ld_req_lsu_tag[9+:9]),
		.ls_pipe_l1d_ld_req_ptag_i(ld_req_ptag[12+:12]),
		.ls_pipe_l1d_ld_req_idx_i(ld_req_idx[2+:2]),
		.ls_pipe_l1d_ld_req_offset_i(ld_req_offset[6+:6]),
		.ls_pipe_l1d_ld_req_vtag_i(sv2v_uu_CORE_2_ext_ls_pipe_l1d_ld_req_vtag_i_0),
		.stb_l1d_ld_rdy_i(1'b1),
		.ls_pipe_l1d_ld_req_rdy_o(ld_req_rdy[1]),
		.ls_pipe_l1d_st_req_vld_i(st_req_vld[1]),
		.ls_pipe_l1d_st_req_io_region_i(sv2v_uu_CORE_2_ext_ls_pipe_l1d_st_req_io_region_i_0),
		.ls_pipe_l1d_st_req_rob_tag_i(sv2v_uu_CORE_2_ext_ls_pipe_l1d_st_req_rob_tag_i_0),
		.ls_pipe_l1d_st_req_prd_i(sv2v_uu_CORE_2_ext_ls_pipe_l1d_st_req_prd_i_0),
		.ls_pipe_l1d_st_req_opcode_i(st_req_opcode[rvh_l1d_pkg_STU_OP_WIDTH+:rvh_l1d_pkg_STU_OP_WIDTH]),
		.ls_pipe_l1d_st_req_lsu_tag_i(st_req_lsu_tag[9+:9]),
		.ls_pipe_l1d_st_req_paddr_i(st_req_paddr[20+:20]),
		.ls_pipe_l1d_st_req_data_i(st_req_data[512+:512]),
		.ls_pipe_l1d_st_req_data_byte_mask_i(st_req_data_byte_mask[64+:64]),
		.ls_pipe_l1d_st_req_rdy_o(st_req_rdy[1]),
		.dtlb_l1d_resp_vld_i(1'b1),
		.dtlb_l1d_resp_excp_vld_i(1'b0),
		.dtlb_l1d_resp_hit_i(1'b1),
		.dtlb_l1d_resp_ppn_i(sv2v_uu_CORE_2_ext_dtlb_l1d_resp_ppn_i_0),
		.dtlb_l1d_resp_rdy_o(dtlb_resp_rdy[1]),
		.stb_l1d_bank_ld_bypass_valid_i(sv2v_uu_CORE_2_ext_stb_l1d_bank_ld_bypass_valid_i_0),
		.stb_l1d_bank_ld_bypass_data_i(sv2v_uu_CORE_2_ext_stb_l1d_bank_ld_bypass_data_i_0),
		.l1d_ls_pipe_replay_vld_o(replay_vld[1]),
		.l1d_ls_pipe_mshr_full_o(mshr_full[1]),
		.l1d_ls_pipe_replay_lsu_tag_o(replay_lsu_tag[12+:12]),
		.l1d_rob_wb_vld_o(rob_wb_vld[1]),
		.l1d_rob_wb_rob_tag_o(rob_wb_rob_tag[4+:4]),
		.l1d_int_prf_wb_vld_o(l1d_wb_vld[1]),
		.l1d_int_prf_wb_tag_o(l1d_wb_tag[4+:4]),
		.l1d_int_prf_wb_data_o(l1d_wb_data[64+:64]),
		.l1d_int_prf_wb_vld_from_mlfb_o(l1d_wb_vld_from_mlfb[1]),
		.l1d_int_prf_wb_rdy_from_mlfb_i(l1d_wb_rdy_from_mlfb[1]),
		.l1d_lsu_lsu_tag_o(l1d_resp_lsu_tag[9+:9]),
		.ptw_walk_req_vld_i(sv2v_uu_CORE_2_ext_ptw_walk_req_vld_i_0),
		.ptw_walk_req_id_i(sv2v_uu_CORE_2_ext_ptw_walk_req_id_i_0),
		.ptw_walk_req_addr_i(sv2v_uu_CORE_2_ext_ptw_walk_req_addr_i_0),
		.stb_l1d_ptw_walk_req_rdy_i(sv2v_uu_CORE_2_ext_stb_l1d_ptw_walk_req_rdy_i_0),
		.ptw_walk_req_rdy_o(ptw_walk_req_rdy[1]),
		.ptw_walk_resp_vld_o(ptw_walk_resp_vld[1]),
		.ptw_walk_resp_id_o(ptw_walk_resp_id[2+:2]),
		.ptw_walk_resp_pte_o(ptw_walk_resp_pte[12+:12]),
		.ptw_walk_resp_rdy_i(sv2v_uu_CORE_2_ext_ptw_walk_resp_rdy_i_0),
		.l2_req_if_arvalid(l2_req_if_arvalid[1]),
		.l2_req_if_arready(l2_req_if_arready[1]),
		.l2_req_if_ar(l2_req_if_ar[26+:26]),
		.l2_req_if_awvalid(l2_req_if_awvalid[1]),
		.l2_req_if_awready(l2_req_if_awready[1]),
		.l2_req_if_aw(l2_req_if_aw[16+:16]),
		.l2_req_if_wvalid(l2_req_if_wvalid[1]),
		.l2_req_if_wready(l2_req_if_wready[1]),
		.l2_req_if_w(l2_req_if_w[rvh_l1d_pkg_MEM_DATA_WIDTH+:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.l2_resp_if_rvalid(l2_resp_if_rvalid[1]),
		.l2_resp_if_rready(l2_resp_if_rready[1]),
		.l2_resp_if_r(l2_resp_if_r[68+:68]),
		.l2_req_if_snvalid(l2_req_if_snvalid[1]),
		.l2_req_if_snready(l2_req_if_snready[1]),
		.l2_req_if_sn(l2_req_if_sn[18+:18]),
		.l2_resp_if_snvalid(l2_resp_if_snvalid[1]),
		.l2_resp_if_snready(l2_resp_if_snready[1]),
		.l2_resp_if_sn(l2_resp_if_sn[66+:66]),
		.rob_flush_i(rob_flush_i),
		.fencei_flush_vld_i(fencei_flush_bank_vld),
		.fencei_flush_grant_o(fencei_flush_grant_per_bank_d),
		.clk(clk),
		.rst(rstn)
	);
	inner_ebi #(
		.DATA_WIDTH(64),
		.PADDR_WIDTH(32),
		.CACHELINE_LENGTH(512),
		.EBI_WIDTH(16)
	) inner_ebi_2(
		.clk(clk),
		.rst(~rstn),
		.l2_req_if_arready_o(l2_req_if_arready[1]),
		.l2_req_if_arvalid_i(l2_req_if_arvalid[1]),
		.arid_i(l2_req_if_ar[51-:2]),
		.araddr_i({12'b000000000000, l2_req_if_ar[49-:20]}),
		.arsnoop_i(l2_req_if_ar[29-:4]),
		.l2_req_if_awready_o(l2_req_if_awready[1]),
		.l2_req_if_awvalid_i(l2_req_if_awvalid[1]),
		.awaddr_i({12'b000000000000, l2_req_if_aw[31-:14]}),
		.awmesi_i(l2_req_if_aw[17-:2]),
		.l2_req_if_wready_o(l2_req_if_wready[1]),
		.dff_l2_req_if_wvalid_i(l2_req_if_wvalid[1]),
		.dff_wdata_i(l2_req_if_w[127-:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.l2_resp_if_rvalid_o(l2_resp_if_rvalid[1]),
		.l2_resp_if_rready_i(l2_resp_if_rready[1]),
		.rid_o(l2_resp_if_r[135-:2]),
		.rdata_o(l2_resp_if_r[133-:64]),
		.mesi_sta_o(l2_resp_if_r[69-:2]),
		.l2_req_if_snready_i(l2_req_if_snready[1]),
		.l2_req_if_snvalid_o(l2_req_if_snvalid[1]),
		.sn_req_addr(l2_req_if_sn[35-:14]),
		.sn_req_snoop(l2_req_if_sn[21-:4]),
		.l2_resp_if_snready_o(l2_resp_if_snready[1]),
		.l2_resp_if_snvalid_i(l2_resp_if_snvalid[1]),
		.sn_resp_has_data(l2_resp_if_sn[131]),
		.sn_resp_dat(l2_resp_if_sn[130-:64]),
		.ack(l2_resp_if_sn[66]),
		.ebi_i(out_to_in[16+:16]),
		.ebi_o(in_to_out[16+:16]),
		.ebi_oen(in_oen[16+:16]),
		.bus_switch_i(out_to_in_switch[1]),
		.bus_switch_o(in_to_out_switch[1]),
		.bus_switch_oen(in_switch_oen[1])
	);
	outer_ebi #(
		.DATA_WIDTH(64),
		.PADDR_WIDTH(32),
		.CACHELINE_LENGTH(512),
		.EBI_WIDTH(16)
	) outer_ebi_2(
		.clk(clk),
		.rst(~rstn),
		.l2_req_if_arready_i(l3_req_if_arready[1]),
		.l2_req_if_arvalid_o(l3_req_if_arvalid[1]),
		.arid_o(l3_req_if_ar[51-:2]),
		.araddr_o(l3_req_if_ar[49-:20]),
		.arsnoop_o(l3_req_if_ar[29-:4]),
		.l2_req_if_awready_i(l3_req_if_awready[1]),
		.l2_req_if_awvalid_o(l3_req_if_awvalid[1]),
		.awaddr_o(l3_req_if_aw[31-:14]),
		.awmesi_o(l3_req_if_aw[17-:2]),
		.l2_req_if_wready_i(l3_req_if_wready[1]),
		.l2_req_if_wvalid_o(l3_req_if_wvalid[1]),
		.wdata_o(l3_req_if_w[127-:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.dff_l2_resp_if_rvalid_i(l3_resp_if_rvalid[1]),
		.l2_resp_if_rready_o(l3_resp_if_rready[1]),
		.dff_rid_i(l3_resp_if_r[135-:2]),
		.dff_rdata_i(l3_resp_if_r[133-:64]),
		.dff_mesi_sta_i(l3_resp_if_r[69-:2]),
		.l2_req_if_snready_o(l3_req_if_snready[1]),
		.l2_req_if_snvalid_i(l3_req_if_snvalid[1]),
		.sn_req_addr({18'b000000000000000000, l2_req_if_sn[35-:14]}),
		.sn_req_snoop(l3_req_if_sn[21-:4]),
		.l2_resp_if_snready_i(l3_resp_if_snready[1]),
		.l2_resp_if_snvalid_o(l3_resp_if_snvalid[1]),
		.sn_resp_has_data(l3_resp_if_sn[131]),
		.sn_resp_dat(l3_resp_if_sn[130-:64]),
		.ack(l3_resp_if_sn[66]),
		.ebi_i(in_to_out[16+:16]),
		.ebi_o(out_to_in[16+:16]),
		.ebi_oen(out_oen[16+:16]),
		.bus_switch_i(in_to_out_switch[1]),
		.bus_switch_o(out_to_in_switch[1]),
		.bus_switch_oen(out_switch_oen[1])
	);
	localparam [3:0] sv2v_uu_CORE_3_ext_ls_pipe_l1d_ld_req_rob_tag_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_3_ext_ls_pipe_l1d_ld_req_prd_i_0 = 1'sb0;
	localparam [38:0] sv2v_uu_CORE_3_ext_ls_pipe_l1d_ld_req_vtag_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_3_ext_ls_pipe_l1d_st_req_io_region_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_3_ext_ls_pipe_l1d_st_req_rob_tag_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_3_ext_ls_pipe_l1d_st_req_prd_i_0 = 1'sb0;
	localparam [19:0] sv2v_uu_CORE_3_ext_dtlb_l1d_resp_ppn_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_3_ext_stb_l1d_bank_ld_bypass_valid_i_0 = 1'sb0;
	localparam [63:0] sv2v_uu_CORE_3_ext_stb_l1d_bank_ld_bypass_data_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_3_ext_ptw_walk_req_vld_i_0 = 1'sb0;
	localparam [1:0] sv2v_uu_CORE_3_ext_ptw_walk_req_id_i_0 = 1'sb0;
	localparam [19:0] sv2v_uu_CORE_3_ext_ptw_walk_req_addr_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_3_ext_stb_l1d_ptw_walk_req_rdy_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_3_ext_ptw_walk_resp_rdy_i_0 = 1'sb0;
	rvh_l1d_bank CORE_3(
		.ls_pipe_l1d_ld_req_vld_i(ld_req_vld[2]),
		.ls_pipe_l1d_ld_req_rob_tag_i(sv2v_uu_CORE_3_ext_ls_pipe_l1d_ld_req_rob_tag_i_0),
		.ls_pipe_l1d_ld_req_prd_i(sv2v_uu_CORE_3_ext_ls_pipe_l1d_ld_req_prd_i_0),
		.ls_pipe_l1d_ld_req_opcode_i(ld_req_opcode[8+:rvh_l1d_pkg_LDU_OP_WIDTH]),
		.ls_pipe_l1d_ld_req_lsu_tag_i(ld_req_lsu_tag[18+:9]),
		.ls_pipe_l1d_ld_req_ptag_i(ld_req_ptag[24+:12]),
		.ls_pipe_l1d_ld_req_idx_i(ld_req_idx[4+:2]),
		.ls_pipe_l1d_ld_req_offset_i(ld_req_offset[12+:6]),
		.ls_pipe_l1d_ld_req_vtag_i(sv2v_uu_CORE_3_ext_ls_pipe_l1d_ld_req_vtag_i_0),
		.stb_l1d_ld_rdy_i(1'b1),
		.ls_pipe_l1d_ld_req_rdy_o(ld_req_rdy[2]),
		.ls_pipe_l1d_st_req_vld_i(st_req_vld[2]),
		.ls_pipe_l1d_st_req_io_region_i(sv2v_uu_CORE_3_ext_ls_pipe_l1d_st_req_io_region_i_0),
		.ls_pipe_l1d_st_req_rob_tag_i(sv2v_uu_CORE_3_ext_ls_pipe_l1d_st_req_rob_tag_i_0),
		.ls_pipe_l1d_st_req_prd_i(sv2v_uu_CORE_3_ext_ls_pipe_l1d_st_req_prd_i_0),
		.ls_pipe_l1d_st_req_opcode_i(st_req_opcode[10+:rvh_l1d_pkg_STU_OP_WIDTH]),
		.ls_pipe_l1d_st_req_lsu_tag_i(st_req_lsu_tag[18+:9]),
		.ls_pipe_l1d_st_req_paddr_i(st_req_paddr[40+:20]),
		.ls_pipe_l1d_st_req_data_i(st_req_data[1024+:512]),
		.ls_pipe_l1d_st_req_data_byte_mask_i(st_req_data_byte_mask[128+:64]),
		.ls_pipe_l1d_st_req_rdy_o(st_req_rdy[2]),
		.dtlb_l1d_resp_vld_i(1'b1),
		.dtlb_l1d_resp_excp_vld_i(1'b0),
		.dtlb_l1d_resp_hit_i(1'b1),
		.dtlb_l1d_resp_ppn_i(sv2v_uu_CORE_3_ext_dtlb_l1d_resp_ppn_i_0),
		.dtlb_l1d_resp_rdy_o(dtlb_resp_rdy[2]),
		.stb_l1d_bank_ld_bypass_valid_i(sv2v_uu_CORE_3_ext_stb_l1d_bank_ld_bypass_valid_i_0),
		.stb_l1d_bank_ld_bypass_data_i(sv2v_uu_CORE_3_ext_stb_l1d_bank_ld_bypass_data_i_0),
		.l1d_ls_pipe_replay_vld_o(replay_vld[2]),
		.l1d_ls_pipe_mshr_full_o(mshr_full[2]),
		.l1d_ls_pipe_replay_lsu_tag_o(replay_lsu_tag[24+:12]),
		.l1d_rob_wb_vld_o(rob_wb_vld[2]),
		.l1d_rob_wb_rob_tag_o(rob_wb_rob_tag[8+:4]),
		.l1d_int_prf_wb_vld_o(l1d_wb_vld[2]),
		.l1d_int_prf_wb_tag_o(l1d_wb_tag[8+:4]),
		.l1d_int_prf_wb_data_o(l1d_wb_data[128+:64]),
		.l1d_int_prf_wb_vld_from_mlfb_o(l1d_wb_vld_from_mlfb[2]),
		.l1d_int_prf_wb_rdy_from_mlfb_i(l1d_wb_rdy_from_mlfb[2]),
		.l1d_lsu_lsu_tag_o(l1d_resp_lsu_tag[18+:9]),
		.ptw_walk_req_vld_i(sv2v_uu_CORE_3_ext_ptw_walk_req_vld_i_0),
		.ptw_walk_req_id_i(sv2v_uu_CORE_3_ext_ptw_walk_req_id_i_0),
		.ptw_walk_req_addr_i(sv2v_uu_CORE_3_ext_ptw_walk_req_addr_i_0),
		.stb_l1d_ptw_walk_req_rdy_i(sv2v_uu_CORE_3_ext_stb_l1d_ptw_walk_req_rdy_i_0),
		.ptw_walk_req_rdy_o(ptw_walk_req_rdy[2]),
		.ptw_walk_resp_vld_o(ptw_walk_resp_vld[2]),
		.ptw_walk_resp_id_o(ptw_walk_resp_id[4+:2]),
		.ptw_walk_resp_pte_o(ptw_walk_resp_pte[24+:12]),
		.ptw_walk_resp_rdy_i(sv2v_uu_CORE_3_ext_ptw_walk_resp_rdy_i_0),
		.l2_req_if_arvalid(l2_req_if_arvalid[2]),
		.l2_req_if_arready(l2_req_if_arready[2]),
		.l2_req_if_ar(l2_req_if_ar[52+:26]),
		.l2_req_if_awvalid(l2_req_if_awvalid[2]),
		.l2_req_if_awready(l2_req_if_awready[2]),
		.l2_req_if_aw(l2_req_if_aw[32+:16]),
		.l2_req_if_wvalid(l2_req_if_wvalid[2]),
		.l2_req_if_wready(l2_req_if_wready[2]),
		.l2_req_if_w(l2_req_if_w[128+:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.l2_resp_if_rvalid(l2_resp_if_rvalid[2]),
		.l2_resp_if_rready(l2_resp_if_rready[2]),
		.l2_resp_if_r(l2_resp_if_r[136+:68]),
		.l2_req_if_snvalid(l2_req_if_snvalid[2]),
		.l2_req_if_snready(l2_req_if_snready[2]),
		.l2_req_if_sn(l2_req_if_sn[36+:18]),
		.l2_resp_if_snvalid(l2_resp_if_snvalid[2]),
		.l2_resp_if_snready(l2_resp_if_snready[2]),
		.l2_resp_if_sn(l2_resp_if_sn[132+:66]),
		.rob_flush_i(rob_flush_i),
		.fencei_flush_vld_i(fencei_flush_bank_vld),
		.fencei_flush_grant_o(fencei_flush_grant_per_bank_d),
		.clk(clk),
		.rst(rstn)
	);
	inner_ebi #(
		.DATA_WIDTH(64),
		.PADDR_WIDTH(32),
		.CACHELINE_LENGTH(512),
		.EBI_WIDTH(16)
	) inner_ebi_3(
		.clk(clk),
		.rst(~rstn),
		.l2_req_if_arready_o(l2_req_if_arready[2]),
		.l2_req_if_arvalid_i(l2_req_if_arvalid[2]),
		.arid_i(l2_req_if_ar[77-:2]),
		.araddr_i({12'b000000000000, l2_req_if_ar[75-:20]}),
		.arsnoop_i(l2_req_if_ar[55-:4]),
		.l2_req_if_awready_o(l2_req_if_awready[2]),
		.l2_req_if_awvalid_i(l2_req_if_awvalid[2]),
		.awaddr_i({12'b000000000000, l2_req_if_aw[47-:14]}),
		.awmesi_i(l2_req_if_aw[33-:2]),
		.l2_req_if_wready_o(l2_req_if_wready[2]),
		.dff_l2_req_if_wvalid_i(l2_req_if_wvalid[2]),
		.dff_wdata_i(l2_req_if_w[191-:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.l2_resp_if_rvalid_o(l2_resp_if_rvalid[2]),
		.l2_resp_if_rready_i(l2_resp_if_rready[2]),
		.rid_o(l2_resp_if_r[203-:2]),
		.rdata_o(l2_resp_if_r[201-:64]),
		.mesi_sta_o(l2_resp_if_r[137-:2]),
		.l2_req_if_snready_i(l2_req_if_snready[2]),
		.l2_req_if_snvalid_o(l2_req_if_snvalid[2]),
		.sn_req_addr(l2_req_if_sn[53-:14]),
		.sn_req_snoop(l2_req_if_sn[39-:4]),
		.l2_resp_if_snready_o(l2_resp_if_snready[2]),
		.l2_resp_if_snvalid_i(l2_resp_if_snvalid[2]),
		.sn_resp_has_data(l2_resp_if_sn[197]),
		.sn_resp_dat(l2_resp_if_sn[196-:64]),
		.ack(l2_resp_if_sn[132]),
		.ebi_i(out_to_in[32+:16]),
		.ebi_o(in_to_out[32+:16]),
		.ebi_oen(in_oen[32+:16]),
		.bus_switch_i(out_to_in_switch[2]),
		.bus_switch_o(in_to_out_switch[2]),
		.bus_switch_oen(in_switch_oen[2])
	);
	outer_ebi #(
		.DATA_WIDTH(64),
		.PADDR_WIDTH(32),
		.CACHELINE_LENGTH(512),
		.EBI_WIDTH(16)
	) outer_ebi_3(
		.clk(clk),
		.rst(~rstn),
		.l2_req_if_arready_i(l3_req_if_arready[2]),
		.l2_req_if_arvalid_o(l3_req_if_arvalid[2]),
		.arid_o(l3_req_if_ar[77-:2]),
		.araddr_o(l3_req_if_ar[75-:20]),
		.arsnoop_o(l3_req_if_ar[55-:4]),
		.l2_req_if_awready_i(l3_req_if_awready[2]),
		.l2_req_if_awvalid_o(l3_req_if_awvalid[2]),
		.awaddr_o(l3_req_if_aw[47-:14]),
		.awmesi_o(l3_req_if_aw[33-:2]),
		.l2_req_if_wready_i(l3_req_if_wready[2]),
		.l2_req_if_wvalid_o(l3_req_if_wvalid[2]),
		.wdata_o(l3_req_if_w[191-:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.dff_l2_resp_if_rvalid_i(l3_resp_if_rvalid[2]),
		.l2_resp_if_rready_o(l3_resp_if_rready[2]),
		.dff_rid_i(l3_resp_if_r[203-:2]),
		.dff_rdata_i(l3_resp_if_r[201-:64]),
		.dff_mesi_sta_i(l3_resp_if_r[137-:2]),
		.l2_req_if_snready_o(l3_req_if_snready[2]),
		.l2_req_if_snvalid_i(l3_req_if_snvalid[2]),
		.sn_req_addr({18'b000000000000000000, l2_req_if_sn[53-:14]}),
		.sn_req_snoop(l3_req_if_sn[39-:4]),
		.l2_resp_if_snready_i(l3_resp_if_snready[2]),
		.l2_resp_if_snvalid_o(l3_resp_if_snvalid[2]),
		.sn_resp_has_data(l3_resp_if_sn[197]),
		.sn_resp_dat(l3_resp_if_sn[196-:64]),
		.ack(l3_resp_if_sn[132]),
		.ebi_i(in_to_out[32+:16]),
		.ebi_o(out_to_in[32+:16]),
		.ebi_oen(out_oen[32+:16]),
		.bus_switch_i(in_to_out_switch[2]),
		.bus_switch_o(out_to_in_switch[2]),
		.bus_switch_oen(out_switch_oen[2])
	);
	localparam [3:0] sv2v_uu_CORE_4_ext_ls_pipe_l1d_ld_req_rob_tag_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_4_ext_ls_pipe_l1d_ld_req_prd_i_0 = 1'sb0;
	localparam [38:0] sv2v_uu_CORE_4_ext_ls_pipe_l1d_ld_req_vtag_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_4_ext_ls_pipe_l1d_st_req_io_region_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_4_ext_ls_pipe_l1d_st_req_rob_tag_i_0 = 1'sb0;
	localparam [3:0] sv2v_uu_CORE_4_ext_ls_pipe_l1d_st_req_prd_i_0 = 1'sb0;
	localparam [19:0] sv2v_uu_CORE_4_ext_dtlb_l1d_resp_ppn_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_4_ext_stb_l1d_bank_ld_bypass_valid_i_0 = 1'sb0;
	localparam [63:0] sv2v_uu_CORE_4_ext_stb_l1d_bank_ld_bypass_data_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_4_ext_ptw_walk_req_vld_i_0 = 1'sb0;
	localparam [1:0] sv2v_uu_CORE_4_ext_ptw_walk_req_id_i_0 = 1'sb0;
	localparam [19:0] sv2v_uu_CORE_4_ext_ptw_walk_req_addr_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_4_ext_stb_l1d_ptw_walk_req_rdy_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_CORE_4_ext_ptw_walk_resp_rdy_i_0 = 1'sb0;
	rvh_l1d_bank CORE_4(
		.ls_pipe_l1d_ld_req_vld_i(ld_req_vld[3]),
		.ls_pipe_l1d_ld_req_rob_tag_i(sv2v_uu_CORE_4_ext_ls_pipe_l1d_ld_req_rob_tag_i_0),
		.ls_pipe_l1d_ld_req_prd_i(sv2v_uu_CORE_4_ext_ls_pipe_l1d_ld_req_prd_i_0),
		.ls_pipe_l1d_ld_req_opcode_i(ld_req_opcode[12+:rvh_l1d_pkg_LDU_OP_WIDTH]),
		.ls_pipe_l1d_ld_req_lsu_tag_i(ld_req_lsu_tag[27+:9]),
		.ls_pipe_l1d_ld_req_ptag_i(ld_req_ptag[36+:12]),
		.ls_pipe_l1d_ld_req_idx_i(ld_req_idx[6+:2]),
		.ls_pipe_l1d_ld_req_offset_i(ld_req_offset[18+:6]),
		.ls_pipe_l1d_ld_req_vtag_i(sv2v_uu_CORE_4_ext_ls_pipe_l1d_ld_req_vtag_i_0),
		.stb_l1d_ld_rdy_i(1'b1),
		.ls_pipe_l1d_ld_req_rdy_o(ld_req_rdy[3]),
		.ls_pipe_l1d_st_req_vld_i(st_req_vld[3]),
		.ls_pipe_l1d_st_req_io_region_i(sv2v_uu_CORE_4_ext_ls_pipe_l1d_st_req_io_region_i_0),
		.ls_pipe_l1d_st_req_rob_tag_i(sv2v_uu_CORE_4_ext_ls_pipe_l1d_st_req_rob_tag_i_0),
		.ls_pipe_l1d_st_req_prd_i(sv2v_uu_CORE_4_ext_ls_pipe_l1d_st_req_prd_i_0),
		.ls_pipe_l1d_st_req_opcode_i(st_req_opcode[15+:rvh_l1d_pkg_STU_OP_WIDTH]),
		.ls_pipe_l1d_st_req_lsu_tag_i(st_req_lsu_tag[27+:9]),
		.ls_pipe_l1d_st_req_paddr_i(st_req_paddr[60+:20]),
		.ls_pipe_l1d_st_req_data_i(st_req_data[1536+:512]),
		.ls_pipe_l1d_st_req_data_byte_mask_i(st_req_data_byte_mask[192+:64]),
		.ls_pipe_l1d_st_req_rdy_o(st_req_rdy[3]),
		.dtlb_l1d_resp_vld_i(1'b1),
		.dtlb_l1d_resp_excp_vld_i(1'b0),
		.dtlb_l1d_resp_hit_i(1'b1),
		.dtlb_l1d_resp_ppn_i(sv2v_uu_CORE_4_ext_dtlb_l1d_resp_ppn_i_0),
		.dtlb_l1d_resp_rdy_o(dtlb_resp_rdy[3]),
		.stb_l1d_bank_ld_bypass_valid_i(sv2v_uu_CORE_4_ext_stb_l1d_bank_ld_bypass_valid_i_0),
		.stb_l1d_bank_ld_bypass_data_i(sv2v_uu_CORE_4_ext_stb_l1d_bank_ld_bypass_data_i_0),
		.l1d_ls_pipe_replay_vld_o(replay_vld[3]),
		.l1d_ls_pipe_mshr_full_o(mshr_full[3]),
		.l1d_ls_pipe_replay_lsu_tag_o(replay_lsu_tag[36+:12]),
		.l1d_rob_wb_vld_o(rob_wb_vld[3]),
		.l1d_rob_wb_rob_tag_o(rob_wb_rob_tag[12+:4]),
		.l1d_int_prf_wb_vld_o(l1d_wb_vld[3]),
		.l1d_int_prf_wb_tag_o(l1d_wb_tag[12+:4]),
		.l1d_int_prf_wb_data_o(l1d_wb_data[192+:64]),
		.l1d_int_prf_wb_vld_from_mlfb_o(l1d_wb_vld_from_mlfb[3]),
		.l1d_int_prf_wb_rdy_from_mlfb_i(l1d_wb_rdy_from_mlfb[3]),
		.l1d_lsu_lsu_tag_o(l1d_resp_lsu_tag[27+:9]),
		.ptw_walk_req_vld_i(sv2v_uu_CORE_4_ext_ptw_walk_req_vld_i_0),
		.ptw_walk_req_id_i(sv2v_uu_CORE_4_ext_ptw_walk_req_id_i_0),
		.ptw_walk_req_addr_i(sv2v_uu_CORE_4_ext_ptw_walk_req_addr_i_0),
		.stb_l1d_ptw_walk_req_rdy_i(sv2v_uu_CORE_4_ext_stb_l1d_ptw_walk_req_rdy_i_0),
		.ptw_walk_req_rdy_o(ptw_walk_req_rdy[3]),
		.ptw_walk_resp_vld_o(ptw_walk_resp_vld[3]),
		.ptw_walk_resp_id_o(ptw_walk_resp_id[6+:2]),
		.ptw_walk_resp_pte_o(ptw_walk_resp_pte[36+:12]),
		.ptw_walk_resp_rdy_i(sv2v_uu_CORE_4_ext_ptw_walk_resp_rdy_i_0),
		.l2_req_if_arvalid(l2_req_if_arvalid[3]),
		.l2_req_if_arready(l2_req_if_arready[3]),
		.l2_req_if_ar(l2_req_if_ar[78+:26]),
		.l2_req_if_awvalid(l2_req_if_awvalid[3]),
		.l2_req_if_awready(l2_req_if_awready[3]),
		.l2_req_if_aw(l2_req_if_aw[48+:16]),
		.l2_req_if_wvalid(l2_req_if_wvalid[3]),
		.l2_req_if_wready(l2_req_if_wready[3]),
		.l2_req_if_w(l2_req_if_w[192+:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.l2_resp_if_rvalid(l2_resp_if_rvalid[3]),
		.l2_resp_if_rready(l2_resp_if_rready[3]),
		.l2_resp_if_r(l2_resp_if_r[204+:68]),
		.l2_req_if_snvalid(l2_req_if_snvalid[3]),
		.l2_req_if_snready(l2_req_if_snready[3]),
		.l2_req_if_sn(l2_req_if_sn[54+:18]),
		.l2_resp_if_snvalid(l2_resp_if_snvalid[3]),
		.l2_resp_if_snready(l2_resp_if_snready[3]),
		.l2_resp_if_sn(l2_resp_if_sn[198+:66]),
		.rob_flush_i(rob_flush_i),
		.fencei_flush_vld_i(fencei_flush_bank_vld),
		.fencei_flush_grant_o(fencei_flush_grant_per_bank_d),
		.clk(clk),
		.rst(rstn)
	);
	inner_ebi #(
		.DATA_WIDTH(64),
		.PADDR_WIDTH(32),
		.CACHELINE_LENGTH(512),
		.EBI_WIDTH(16)
	) inner_ebi_4(
		.clk(clk),
		.rst(~rstn),
		.l2_req_if_arready_o(l2_req_if_arready[3]),
		.l2_req_if_arvalid_i(l2_req_if_arvalid[3]),
		.arid_i(l2_req_if_ar[103-:2]),
		.araddr_i({12'b000000000000, l2_req_if_ar[101-:20]}),
		.arsnoop_i(l2_req_if_ar[81-:4]),
		.l2_req_if_awready_o(l2_req_if_awready[3]),
		.l2_req_if_awvalid_i(l2_req_if_awvalid[3]),
		.awaddr_i({12'b000000000000, l2_req_if_aw[63-:14]}),
		.awmesi_i(l2_req_if_aw[49-:2]),
		.l2_req_if_wready_o(l2_req_if_wready[3]),
		.dff_l2_req_if_wvalid_i(l2_req_if_wvalid[3]),
		.dff_wdata_i(l2_req_if_w[255-:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.l2_resp_if_rvalid_o(l2_resp_if_rvalid[3]),
		.l2_resp_if_rready_i(l2_resp_if_rready[3]),
		.rid_o(l2_resp_if_r[271-:2]),
		.rdata_o(l2_resp_if_r[269-:64]),
		.mesi_sta_o(l2_resp_if_r[205-:2]),
		.l2_req_if_snready_i(l2_req_if_snready[3]),
		.l2_req_if_snvalid_o(l2_req_if_snvalid[3]),
		.sn_req_addr(l2_req_if_sn[71-:14]),
		.sn_req_snoop(l2_req_if_sn[57-:4]),
		.l2_resp_if_snready_o(l2_resp_if_snready[3]),
		.l2_resp_if_snvalid_i(l2_resp_if_snvalid[3]),
		.sn_resp_has_data(l2_resp_if_sn[263]),
		.sn_resp_dat(l2_resp_if_sn[262-:64]),
		.ack(l2_resp_if_sn[198]),
		.ebi_i(out_to_in[48+:16]),
		.ebi_o(in_to_out[48+:16]),
		.ebi_oen(in_oen[48+:16]),
		.bus_switch_i(out_to_in_switch[3]),
		.bus_switch_o(in_to_out_switch[3]),
		.bus_switch_oen(in_switch_oen[3])
	);
	outer_ebi #(
		.DATA_WIDTH(64),
		.PADDR_WIDTH(32),
		.CACHELINE_LENGTH(512),
		.EBI_WIDTH(16)
	) outer_ebi_4(
		.clk(clk),
		.rst(~rstn),
		.l2_req_if_arready_i(l3_req_if_arready[3]),
		.l2_req_if_arvalid_o(l3_req_if_arvalid[3]),
		.arid_o(l3_req_if_ar[103-:2]),
		.araddr_o(l3_req_if_ar[101-:20]),
		.arsnoop_o(l3_req_if_ar[81-:4]),
		.l2_req_if_awready_i(l3_req_if_awready[3]),
		.l2_req_if_awvalid_o(l3_req_if_awvalid[3]),
		.awaddr_o(l3_req_if_aw[63-:14]),
		.awmesi_o(l3_req_if_aw[49-:2]),
		.l2_req_if_wready_i(l3_req_if_wready[3]),
		.l2_req_if_wvalid_o(l3_req_if_wvalid[3]),
		.wdata_o(l3_req_if_w[255-:rvh_l1d_pkg_MEM_DATA_WIDTH]),
		.dff_l2_resp_if_rvalid_i(l3_resp_if_rvalid[3]),
		.l2_resp_if_rready_o(l3_resp_if_rready[3]),
		.dff_rid_i(l3_resp_if_r[271-:2]),
		.dff_rdata_i(l3_resp_if_r[269-:64]),
		.dff_mesi_sta_i(l3_resp_if_r[205-:2]),
		.l2_req_if_snready_o(l3_req_if_snready[3]),
		.l2_req_if_snvalid_i(l3_req_if_snvalid[3]),
		.sn_req_addr({18'b000000000000000000, l2_req_if_sn[71-:14]}),
		.sn_req_snoop(l3_req_if_sn[57-:4]),
		.l2_resp_if_snready_i(l3_resp_if_snready[3]),
		.l2_resp_if_snvalid_o(l3_resp_if_snvalid[3]),
		.sn_resp_has_data(l3_resp_if_sn[263]),
		.sn_resp_dat(l3_resp_if_sn[262-:64]),
		.ack(l3_resp_if_sn[198]),
		.ebi_i(in_to_out[48+:16]),
		.ebi_o(out_to_in[48+:16]),
		.ebi_oen(out_oen[48+:16]),
		.bus_switch_i(in_to_out_switch[3]),
		.bus_switch_o(out_to_in_switch[3]),
		.bus_switch_oen(out_switch_oen[3])
	);
	scu scu_u(
		.clk(clk),
		.rstn(rstn),
		.l2_req_if_arvalid_i(l3_req_if_arvalid),
		.l2_req_if_arready_o(l3_req_if_arready),
		.l2_req_if_ar(l3_req_if_ar),
		.l2_req_if_awvalid_i(l3_req_if_awvalid),
		.l2_req_if_awready_o(l3_req_if_awready),
		.l2_req_if_aw(l3_req_if_aw),
		.l2_req_if_wvalid_i(l3_req_if_wvalid),
		.l2_req_if_wready_o(l3_req_if_wready),
		.l2_req_if_w(l3_req_if_w),
		.l2_resp_if_rvalid_o(l3_resp_if_rvalid),
		.l2_resp_if_rready_i(l3_resp_if_rready),
		.l2_resp_if_r(l3_resp_if_r),
		.l2_req_if_snvalid_o(l3_req_if_snvalid),
		.l2_req_if_snready_i(l3_req_if_snready),
		.l2_req_if_sn(l3_req_if_sn),
		.l2_resp_if_snvalid_i(l3_resp_if_snvalid),
		.l2_resp_if_snready_o(l3_resp_if_snready),
		.l2_resp_if_sn(l3_resp_if_sn)
	);
endmodule
