module rvh_l1d_dec (
	is_ld_req_vld_i,
	is_st_req_vld_i,
	is_ptw_req_vld_i,
	ls_pipe_l1d_ld_req_opcode_i,
	ls_pipe_l1d_st_req_opcode_i,
	req_type_dec_o
);
	input wire is_ld_req_vld_i;
	input wire is_st_req_vld_i;
	input wire is_ptw_req_vld_i;
	localparam [31:0] rvh_l1d_pkg_LDU_OP_WIDTH = 4;
	input wire [3:0] ls_pipe_l1d_ld_req_opcode_i;
	localparam [31:0] rvh_l1d_pkg_STU_OP_WIDTH = 5;
	input wire [4:0] ls_pipe_l1d_st_req_opcode_i;
	output wire [13:0] req_type_dec_o;
	function automatic [3:0] sv2v_cast_90C75;
		input reg [3:0] inp;
		sv2v_cast_90C75 = inp;
	endfunction
	assign req_type_dec_o[13] = is_ld_req_vld_i & (((((((ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(0)) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(3))) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(1))) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(4))) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(2))) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(5))) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(6)));
	assign req_type_dec_o[12] = is_ptw_req_vld_i;
	function automatic [4:0] sv2v_cast_543EA;
		input reg [4:0] inp;
		sv2v_cast_543EA = inp;
	endfunction
	assign req_type_dec_o[11] = is_st_req_vld_i & ((((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(0)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(1))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(2))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(3)));
	assign req_type_dec_o[6] = is_ld_req_vld_i & ((ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(7)) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(8)));
	assign req_type_dec_o[5] = is_st_req_vld_i & ((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(5)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(6)));
	assign req_type_dec_o[10] = is_st_req_vld_i & ((((((((((((((((((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(7)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(8))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(9))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(10))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(11))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(12))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(13))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(14))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(15))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(16))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(17))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(18))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(19))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(20))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(21))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(22))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(23))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(24)));
	assign req_type_dec_o[4] = (is_ld_req_vld_i & ((ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(0)) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(3)))) | (is_st_req_vld_i & (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(0)));
	assign req_type_dec_o[3] = (is_ld_req_vld_i & ((ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(1)) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(4)))) | (is_st_req_vld_i & (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(1)));
	assign req_type_dec_o[2] = (is_ld_req_vld_i & (((ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(2)) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(5))) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(7)))) | (is_st_req_vld_i & (((((((((((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(2)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(5))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(7))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(9))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(11))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(13))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(15))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(17))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(19))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(21))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(23))));
	assign req_type_dec_o[1] = ((is_ld_req_vld_i & ((ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(6)) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(8)))) | (is_st_req_vld_i & (((((((((((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(3)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(6))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(8))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(10))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(12))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(14))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(16))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(18))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(20))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(22))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(24))))) | is_ptw_req_vld_i;
	assign req_type_dec_o[0] = (is_ld_req_vld_i & (((ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(3)) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(4))) | (ls_pipe_l1d_ld_req_opcode_i == sv2v_cast_90C75(5)))) | (is_st_req_vld_i & ((((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(19)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(20))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(23))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(24))));
	assign req_type_dec_o[9-:3] = ((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(7)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(8)) ? 3'd0 : ((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(9)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(10)) ? 3'd1 : ((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(11)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(12)) ? 3'd2 : ((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(13)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(14)) ? 3'd3 : ((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(15)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(16)) ? 3'd4 : ((((ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(17)) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(18))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(19))) | (ls_pipe_l1d_st_req_opcode_i == sv2v_cast_543EA(20)) ? 3'd5 : 3'd6))))));
endmodule
