module noc_top();

logic clk;
logic rst;
localparam QOS_VC_NUM_PER_INPUT = 1;
localparam VC_DEPTH_INPUT_N = 4;
localparam VC_DEPTH_INPUT_S = 4;
localparam VC_DEPTH_INPUT_E = 4;
localparam VC_DEPTH_INPUT_W = 4;
localparam VC_DEPTH_INPUT_L = 1;
localparam type flit_payload_t_chi_req_channel = logic[32-1:0];
localparam type flit_payload_t_chi_resp_channel = logic[64-1:0];
localparam type flit_payload_t_chi_snoop_channel = logic[128-1:0];
localparam type flit_payload_t_chi_data_channel = logic[256-1:0];
VC_ID_NUM_MAX_W = 4;
NodeID_X_Width = 2
NodeID_Y_Width = 2
localparam INPUT_PORT_NUM_0_0 = 6;
localparam OUTPUT_PORT_NUM_0_0 = 6;
localparam VC_NUM_INPUT_N_0_0 = 4;
localparam VC_NUM_INPUT_S_0_0 = 4;
localparam VC_NUM_INPUT_E_0_0 = 6;
localparam VC_NUM_INPUT_W_0_0 = 6;
localparam VC_NUM_INPUT_L_0_0 = 6;
localparam VC_NUM_OUTPUT_N_0_0 = 4;
localparam VC_NUM_OUTPUT_S_0_0 = 4;
localparam VC_NUM_OUTPUT_E_0_0 = 6;
localparam VC_NUM_OUTPUT_W_0_0 = 6;
localparam VC_NUM_OUTPUT_L_0_0 = 1;
localparam SA_GLOBAL_INPUT_NUM_N_0_0 = 5;
localparam SA_GLOBAL_INPUT_NUM_S_0_0 = 5;
localparam SA_GLOBAL_INPUT_NUM_E_0_0 = 3;
localparam SA_GLOBAL_INPUT_NUM_W_0_0 = 3;
localparam SA_GLOBAL_INPUT_NUM_L_0_0 = 5;
localparam INPUT_PORT_NUM_0_1 = 6;
localparam OUTPUT_PORT_NUM_0_1 = 6;
localparam VC_NUM_INPUT_N_0_1 = 4;
localparam VC_NUM_INPUT_S_0_1 = 4;
localparam VC_NUM_INPUT_E_0_1 = 6;
localparam VC_NUM_INPUT_W_0_1 = 6;
localparam VC_NUM_INPUT_L_0_1 = 6;
localparam VC_NUM_OUTPUT_N_0_1 = 4;
localparam VC_NUM_OUTPUT_S_0_1 = 4;
localparam VC_NUM_OUTPUT_E_0_1 = 6;
localparam VC_NUM_OUTPUT_W_0_1 = 6;
localparam VC_NUM_OUTPUT_L_0_1 = 1;
localparam SA_GLOBAL_INPUT_NUM_N_0_1 = 5;
localparam SA_GLOBAL_INPUT_NUM_S_0_1 = 5;
localparam SA_GLOBAL_INPUT_NUM_E_0_1 = 3;
localparam SA_GLOBAL_INPUT_NUM_W_0_1 = 3;
localparam SA_GLOBAL_INPUT_NUM_L_0_1 = 5;
localparam INPUT_PORT_NUM_1_0 = 5;
localparam OUTPUT_PORT_NUM_1_0 = 5;
localparam VC_NUM_INPUT_N_1_0 = 3;
localparam VC_NUM_INPUT_S_1_0 = 3;
localparam VC_NUM_INPUT_E_1_0 = 5;
localparam VC_NUM_INPUT_W_1_0 = 5;
localparam VC_NUM_INPUT_L_1_0 = 5;
localparam VC_NUM_OUTPUT_N_1_0 = 3;
localparam VC_NUM_OUTPUT_S_1_0 = 3;
localparam VC_NUM_OUTPUT_E_1_0 = 5;
localparam VC_NUM_OUTPUT_W_1_0 = 5;
localparam VC_NUM_OUTPUT_L_1_0 = 1;
localparam SA_GLOBAL_INPUT_NUM_N_1_0 = 4;
localparam SA_GLOBAL_INPUT_NUM_S_1_0 = 4;
localparam SA_GLOBAL_INPUT_NUM_E_1_0 = 2;
localparam SA_GLOBAL_INPUT_NUM_W_1_0 = 2;
localparam SA_GLOBAL_INPUT_NUM_L_1_0 = 4;
localparam INPUT_PORT_NUM_1_1 = 7;
localparam OUTPUT_PORT_NUM_1_1 = 7;
localparam VC_NUM_INPUT_N_1_1 = 5;
localparam VC_NUM_INPUT_S_1_1 = 5;
localparam VC_NUM_INPUT_E_1_1 = 7;
localparam VC_NUM_INPUT_W_1_1 = 7;
localparam VC_NUM_INPUT_L_1_1 = 7;
localparam VC_NUM_OUTPUT_N_1_1 = 5;
localparam VC_NUM_OUTPUT_S_1_1 = 5;
localparam VC_NUM_OUTPUT_E_1_1 = 7;
localparam VC_NUM_OUTPUT_W_1_1 = 7;
localparam VC_NUM_OUTPUT_L_1_1 = 1;
localparam SA_GLOBAL_INPUT_NUM_N_1_1 = 6;
localparam SA_GLOBAL_INPUT_NUM_S_1_1 = 6;
localparam SA_GLOBAL_INPUT_NUM_E_1_1 = 4;
localparam SA_GLOBAL_INPUT_NUM_W_1_1 = 4;
localparam SA_GLOBAL_INPUT_NUM_L_1_1 = 6;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_pend_0_0_chi_req_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_v_0_0_chi_req_channel;
flit_payload_t_chi_req_channel        [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_0_0_chi_req_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_0_0_chi_req_channel;
io_port_t                             [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_look_ahead_routing_0_0_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_pend_0_0_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_v_0_0_chi_req_channel;
flit_payload_t_chi_req_channel        [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_0_0_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_0_0_chi_req_channel;
io_port_t                             [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_look_ahead_routing_0_0_chi_req_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_lcrd_v_0_0_chi_req_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_0_0_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_lcrd_v_0_0_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_0_0_chi_req_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_0_0_chi_req_channel = 0;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_0_0_chi_req_channel = 0;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_pend_0_0_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_v_0_0_chi_resp_channel;
flit_payload_t_chi_resp_channel        [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_0_0_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_0_0_chi_resp_channel;
io_port_t                             [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_look_ahead_routing_0_0_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_pend_0_0_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_v_0_0_chi_resp_channel;
flit_payload_t_chi_resp_channel        [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_0_0_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_0_0_chi_resp_channel;
io_port_t                             [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_look_ahead_routing_0_0_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_lcrd_v_0_0_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_0_0_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_lcrd_v_0_0_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_0_0_chi_resp_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_0_0_chi_resp_channel = 0;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_0_0_chi_resp_channel = 0;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_pend_0_0_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_v_0_0_chi_snoop_channel;
flit_payload_t_chi_snoop_channel        [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_0_0_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_0_0_chi_snoop_channel;
io_port_t                             [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_look_ahead_routing_0_0_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_pend_0_0_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_v_0_0_chi_snoop_channel;
flit_payload_t_chi_snoop_channel        [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_0_0_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_0_0_chi_snoop_channel;
io_port_t                             [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_look_ahead_routing_0_0_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_lcrd_v_0_0_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_0_0_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_lcrd_v_0_0_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_0_0_chi_snoop_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_0_0_chi_snoop_channel = 0;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_0_0_chi_snoop_channel = 0;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_pend_0_0_chi_data_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_v_0_0_chi_data_channel;
flit_payload_t_chi_data_channel        [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_0_0_chi_data_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_0_0_chi_data_channel;
io_port_t                             [INPUT_PORT_NUM_0_0 -1:0]                            rx_flit_look_ahead_routing_0_0_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_pend_0_0_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_v_0_0_chi_data_channel;
flit_payload_t_chi_data_channel        [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_0_0_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_0_0_chi_data_channel;
io_port_t                             [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_flit_look_ahead_routing_0_0_chi_data_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0]                            rx_lcrd_v_0_0_chi_data_channel;
logic                                 [INPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_0_0_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0]                           tx_lcrd_v_0_0_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_0_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_0_0_chi_data_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_0_0_chi_data_channel = 0;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_0_0_chi_data_channel = 0;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_pend_0_1_chi_req_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_v_0_1_chi_req_channel;
flit_payload_t_chi_req_channel        [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_0_1_chi_req_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_0_1_chi_req_channel;
io_port_t                             [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_look_ahead_routing_0_1_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_pend_0_1_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_v_0_1_chi_req_channel;
flit_payload_t_chi_req_channel        [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_0_1_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_0_1_chi_req_channel;
io_port_t                             [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_look_ahead_routing_0_1_chi_req_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_lcrd_v_0_1_chi_req_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_0_1_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_lcrd_v_0_1_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_0_1_chi_req_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_0_1_chi_req_channel = 0;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_0_1_chi_req_channel = 1;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_pend_0_1_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_v_0_1_chi_resp_channel;
flit_payload_t_chi_resp_channel        [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_0_1_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_0_1_chi_resp_channel;
io_port_t                             [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_look_ahead_routing_0_1_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_pend_0_1_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_v_0_1_chi_resp_channel;
flit_payload_t_chi_resp_channel        [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_0_1_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_0_1_chi_resp_channel;
io_port_t                             [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_look_ahead_routing_0_1_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_lcrd_v_0_1_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_0_1_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_lcrd_v_0_1_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_0_1_chi_resp_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_0_1_chi_resp_channel = 0;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_0_1_chi_resp_channel = 1;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_pend_0_1_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_v_0_1_chi_snoop_channel;
flit_payload_t_chi_snoop_channel        [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_0_1_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_0_1_chi_snoop_channel;
io_port_t                             [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_look_ahead_routing_0_1_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_pend_0_1_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_v_0_1_chi_snoop_channel;
flit_payload_t_chi_snoop_channel        [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_0_1_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_0_1_chi_snoop_channel;
io_port_t                             [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_look_ahead_routing_0_1_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_lcrd_v_0_1_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_0_1_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_lcrd_v_0_1_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_0_1_chi_snoop_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_0_1_chi_snoop_channel = 0;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_0_1_chi_snoop_channel = 1;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_pend_0_1_chi_data_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_v_0_1_chi_data_channel;
flit_payload_t_chi_data_channel        [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_0_1_chi_data_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_0_1_chi_data_channel;
io_port_t                             [INPUT_PORT_NUM_0_1 -1:0]                            rx_flit_look_ahead_routing_0_1_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_pend_0_1_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_v_0_1_chi_data_channel;
flit_payload_t_chi_data_channel        [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_0_1_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_0_1_chi_data_channel;
io_port_t                             [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_flit_look_ahead_routing_0_1_chi_data_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0]                            rx_lcrd_v_0_1_chi_data_channel;
logic                                 [INPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_0_1_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0]                           tx_lcrd_v_0_1_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_0_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_0_1_chi_data_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_0_1_chi_data_channel = 0;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_0_1_chi_data_channel = 1;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_pend_1_0_chi_req_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_v_1_0_chi_req_channel;
flit_payload_t_chi_req_channel        [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_1_0_chi_req_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_1_0_chi_req_channel;
io_port_t                             [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_look_ahead_routing_1_0_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_pend_1_0_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_v_1_0_chi_req_channel;
flit_payload_t_chi_req_channel        [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_1_0_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_1_0_chi_req_channel;
io_port_t                             [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_look_ahead_routing_1_0_chi_req_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_lcrd_v_1_0_chi_req_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_1_0_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_lcrd_v_1_0_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_1_0_chi_req_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_1_0_chi_req_channel = 1;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_1_0_chi_req_channel = 0;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_pend_1_0_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_v_1_0_chi_resp_channel;
flit_payload_t_chi_resp_channel        [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_1_0_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_1_0_chi_resp_channel;
io_port_t                             [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_look_ahead_routing_1_0_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_pend_1_0_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_v_1_0_chi_resp_channel;
flit_payload_t_chi_resp_channel        [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_1_0_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_1_0_chi_resp_channel;
io_port_t                             [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_look_ahead_routing_1_0_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_lcrd_v_1_0_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_1_0_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_lcrd_v_1_0_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_1_0_chi_resp_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_1_0_chi_resp_channel = 1;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_1_0_chi_resp_channel = 0;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_pend_1_0_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_v_1_0_chi_snoop_channel;
flit_payload_t_chi_snoop_channel        [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_1_0_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_1_0_chi_snoop_channel;
io_port_t                             [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_look_ahead_routing_1_0_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_pend_1_0_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_v_1_0_chi_snoop_channel;
flit_payload_t_chi_snoop_channel        [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_1_0_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_1_0_chi_snoop_channel;
io_port_t                             [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_look_ahead_routing_1_0_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_lcrd_v_1_0_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_1_0_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_lcrd_v_1_0_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_1_0_chi_snoop_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_1_0_chi_snoop_channel = 1;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_1_0_chi_snoop_channel = 0;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_pend_1_0_chi_data_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_v_1_0_chi_data_channel;
flit_payload_t_chi_data_channel        [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_1_0_chi_data_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_1_0_chi_data_channel;
io_port_t                             [INPUT_PORT_NUM_1_0 -1:0]                            rx_flit_look_ahead_routing_1_0_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_pend_1_0_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_v_1_0_chi_data_channel;
flit_payload_t_chi_data_channel        [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_1_0_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_1_0_chi_data_channel;
io_port_t                             [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_flit_look_ahead_routing_1_0_chi_data_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0]                            rx_lcrd_v_1_0_chi_data_channel;
logic                                 [INPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_1_0_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0]                           tx_lcrd_v_1_0_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_1_0 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_1_0_chi_data_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_1_0_chi_data_channel = 1;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_1_0_chi_data_channel = 0;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_pend_1_1_chi_req_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_v_1_1_chi_req_channel;
flit_payload_t_chi_req_channel        [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_1_1_chi_req_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_1_1_chi_req_channel;
io_port_t                             [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_look_ahead_routing_1_1_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_pend_1_1_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_v_1_1_chi_req_channel;
flit_payload_t_chi_req_channel        [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_1_1_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_1_1_chi_req_channel;
io_port_t                             [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_look_ahead_routing_1_1_chi_req_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_lcrd_v_1_1_chi_req_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_1_1_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_lcrd_v_1_1_chi_req_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_1_1_chi_req_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_1_1_chi_req_channel = 1;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_1_1_chi_req_channel = 1;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_pend_1_1_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_v_1_1_chi_resp_channel;
flit_payload_t_chi_resp_channel        [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_1_1_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_1_1_chi_resp_channel;
io_port_t                             [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_look_ahead_routing_1_1_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_pend_1_1_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_v_1_1_chi_resp_channel;
flit_payload_t_chi_resp_channel        [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_1_1_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_1_1_chi_resp_channel;
io_port_t                             [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_look_ahead_routing_1_1_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_lcrd_v_1_1_chi_resp_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_1_1_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_lcrd_v_1_1_chi_resp_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_1_1_chi_resp_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_1_1_chi_resp_channel = 1;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_1_1_chi_resp_channel = 1;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_pend_1_1_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_v_1_1_chi_snoop_channel;
flit_payload_t_chi_snoop_channel        [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_1_1_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_1_1_chi_snoop_channel;
io_port_t                             [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_look_ahead_routing_1_1_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_pend_1_1_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_v_1_1_chi_snoop_channel;
flit_payload_t_chi_snoop_channel        [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_1_1_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_1_1_chi_snoop_channel;
io_port_t                             [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_look_ahead_routing_1_1_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_lcrd_v_1_1_chi_snoop_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_1_1_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_lcrd_v_1_1_chi_snoop_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_1_1_chi_snoop_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_1_1_chi_snoop_channel = 1;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_1_1_chi_snoop_channel = 1;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_pend_1_1_chi_data_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_v_1_1_chi_data_channel;
flit_payload_t_chi_data_channel        [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_1_1_chi_data_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_flit_vc_id_1_1_chi_data_channel;
io_port_t                             [INPUT_PORT_NUM_1_1 -1:0]                            rx_flit_look_ahead_routing_1_1_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_pend_1_1_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_v_1_1_chi_data_channel;
flit_payload_t_chi_data_channel        [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_1_1_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_flit_vc_id_1_1_chi_data_channel;
io_port_t                             [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_flit_look_ahead_routing_1_1_chi_data_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0]                            rx_lcrd_v_1_1_chi_data_channel;
logic                                 [INPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]      rx_lcrd_id_1_1_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0]                           tx_lcrd_v_1_1_chi_data_channel;
logic                                 [OUTPUT_PORT_NUM_1_1 -1:0][VC_ID_NUM_MAX_W -1:0]     tx_lcrd_id_1_1_chi_data_channel;
logic                                 [NodeID_X_Width -1:0]                                node_id_x_1_1_chi_data_channel = 1;
logic                                 [NodeID_Y_Width -1:0]                                node_id_y_1_1_chi_data_channel = 1;
logic router_0_0_device_0_chi_req_channel_valid_o;
logic router_0_0_device_0_chi_req_channel_ready_i;
logic router_0_0_device_0_chi_req_channel_valid_i;
logic router_0_0_device_0_chi_req_channel_ready_o;
logic router_0_0_device_0_chi_resp_channel_valid_o;
logic router_0_0_device_0_chi_resp_channel_ready_i;
logic router_0_0_device_0_chi_resp_channel_valid_i;
logic router_0_0_device_0_chi_resp_channel_ready_o;
logic router_0_0_device_0_chi_snoop_channel_valid_o;
logic router_0_0_device_0_chi_snoop_channel_ready_i;
logic router_0_0_device_0_chi_snoop_channel_valid_i;
logic router_0_0_device_0_chi_snoop_channel_ready_o;
logic router_0_0_device_0_chi_data_channel_valid_o;
logic router_0_0_device_0_chi_data_channel_ready_i;
logic router_0_0_device_0_chi_data_channel_valid_i;
logic router_0_0_device_0_chi_data_channel_ready_o;
logic router_0_0_device_1_chi_req_channel_valid_o;
logic router_0_0_device_1_chi_req_channel_ready_i;
logic router_0_0_device_1_chi_req_channel_valid_i;
logic router_0_0_device_1_chi_req_channel_ready_o;
logic router_0_0_device_1_chi_resp_channel_valid_o;
logic router_0_0_device_1_chi_resp_channel_ready_i;
logic router_0_0_device_1_chi_resp_channel_valid_i;
logic router_0_0_device_1_chi_resp_channel_ready_o;
logic router_0_0_device_1_chi_snoop_channel_valid_o;
logic router_0_0_device_1_chi_snoop_channel_ready_i;
logic router_0_0_device_1_chi_snoop_channel_valid_i;
logic router_0_0_device_1_chi_snoop_channel_ready_o;
logic router_0_0_device_1_chi_data_channel_valid_o;
logic router_0_0_device_1_chi_data_channel_ready_i;
logic router_0_0_device_1_chi_data_channel_valid_i;
logic router_0_0_device_1_chi_data_channel_ready_o;
logic router_0_1_device_0_chi_req_channel_valid_o;
logic router_0_1_device_0_chi_req_channel_ready_i;
logic router_0_1_device_0_chi_req_channel_valid_i;
logic router_0_1_device_0_chi_req_channel_ready_o;
logic router_0_1_device_0_chi_resp_channel_valid_o;
logic router_0_1_device_0_chi_resp_channel_ready_i;
logic router_0_1_device_0_chi_resp_channel_valid_i;
logic router_0_1_device_0_chi_resp_channel_ready_o;
logic router_0_1_device_0_chi_snoop_channel_valid_o;
logic router_0_1_device_0_chi_snoop_channel_ready_i;
logic router_0_1_device_0_chi_snoop_channel_valid_i;
logic router_0_1_device_0_chi_snoop_channel_ready_o;
logic router_0_1_device_0_chi_data_channel_valid_o;
logic router_0_1_device_0_chi_data_channel_ready_i;
logic router_0_1_device_0_chi_data_channel_valid_i;
logic router_0_1_device_0_chi_data_channel_ready_o;
logic router_0_1_device_1_chi_req_channel_valid_o;
logic router_0_1_device_1_chi_req_channel_ready_i;
logic router_0_1_device_1_chi_req_channel_valid_i;
logic router_0_1_device_1_chi_req_channel_ready_o;
logic router_0_1_device_1_chi_resp_channel_valid_o;
logic router_0_1_device_1_chi_resp_channel_ready_i;
logic router_0_1_device_1_chi_resp_channel_valid_i;
logic router_0_1_device_1_chi_resp_channel_ready_o;
logic router_0_1_device_1_chi_snoop_channel_valid_o;
logic router_0_1_device_1_chi_snoop_channel_ready_i;
logic router_0_1_device_1_chi_snoop_channel_valid_i;
logic router_0_1_device_1_chi_snoop_channel_ready_o;
logic router_0_1_device_1_chi_data_channel_valid_o;
logic router_0_1_device_1_chi_data_channel_ready_i;
logic router_0_1_device_1_chi_data_channel_valid_i;
logic router_0_1_device_1_chi_data_channel_ready_o;
logic router_1_0_device_0_chi_req_channel_valid_o;
logic router_1_0_device_0_chi_req_channel_ready_i;
logic router_1_0_device_0_chi_req_channel_valid_i;
logic router_1_0_device_0_chi_req_channel_ready_o;
logic router_1_0_device_0_chi_resp_channel_valid_o;
logic router_1_0_device_0_chi_resp_channel_ready_i;
logic router_1_0_device_0_chi_resp_channel_valid_i;
logic router_1_0_device_0_chi_resp_channel_ready_o;
logic router_1_0_device_0_chi_snoop_channel_valid_o;
logic router_1_0_device_0_chi_snoop_channel_ready_i;
logic router_1_0_device_0_chi_snoop_channel_valid_i;
logic router_1_0_device_0_chi_snoop_channel_ready_o;
logic router_1_0_device_0_chi_data_channel_valid_o;
logic router_1_0_device_0_chi_data_channel_ready_i;
logic router_1_0_device_0_chi_data_channel_valid_i;
logic router_1_0_device_0_chi_data_channel_ready_o;
logic router_1_1_device_0_chi_req_channel_valid_o;
logic router_1_1_device_0_chi_req_channel_ready_i;
logic router_1_1_device_0_chi_req_channel_valid_i;
logic router_1_1_device_0_chi_req_channel_ready_o;
logic router_1_1_device_0_chi_resp_channel_valid_o;
logic router_1_1_device_0_chi_resp_channel_ready_i;
logic router_1_1_device_0_chi_resp_channel_valid_i;
logic router_1_1_device_0_chi_resp_channel_ready_o;
logic router_1_1_device_0_chi_snoop_channel_valid_o;
logic router_1_1_device_0_chi_snoop_channel_ready_i;
logic router_1_1_device_0_chi_snoop_channel_valid_i;
logic router_1_1_device_0_chi_snoop_channel_ready_o;
logic router_1_1_device_0_chi_data_channel_valid_o;
logic router_1_1_device_0_chi_data_channel_ready_i;
logic router_1_1_device_0_chi_data_channel_valid_i;
logic router_1_1_device_0_chi_data_channel_ready_o;
logic router_1_1_device_1_chi_req_channel_valid_o;
logic router_1_1_device_1_chi_req_channel_ready_i;
logic router_1_1_device_1_chi_req_channel_valid_i;
logic router_1_1_device_1_chi_req_channel_ready_o;
logic router_1_1_device_1_chi_resp_channel_valid_o;
logic router_1_1_device_1_chi_resp_channel_ready_i;
logic router_1_1_device_1_chi_resp_channel_valid_i;
logic router_1_1_device_1_chi_resp_channel_ready_o;
logic router_1_1_device_1_chi_snoop_channel_valid_o;
logic router_1_1_device_1_chi_snoop_channel_ready_i;
logic router_1_1_device_1_chi_snoop_channel_valid_i;
logic router_1_1_device_1_chi_snoop_channel_ready_o;
logic router_1_1_device_1_chi_data_channel_valid_o;
logic router_1_1_device_1_chi_data_channel_ready_i;
logic router_1_1_device_1_chi_data_channel_valid_i;
logic router_1_1_device_1_chi_data_channel_ready_o;
logic router_1_1_device_2_chi_req_channel_valid_o;
logic router_1_1_device_2_chi_req_channel_ready_i;
logic router_1_1_device_2_chi_req_channel_valid_i;
logic router_1_1_device_2_chi_req_channel_ready_o;
logic router_1_1_device_2_chi_resp_channel_valid_o;
logic router_1_1_device_2_chi_resp_channel_ready_i;
logic router_1_1_device_2_chi_resp_channel_valid_i;
logic router_1_1_device_2_chi_resp_channel_ready_o;
logic router_1_1_device_2_chi_snoop_channel_valid_o;
logic router_1_1_device_2_chi_snoop_channel_ready_i;
logic router_1_1_device_2_chi_snoop_channel_valid_i;
logic router_1_1_device_2_chi_snoop_channel_ready_o;
logic router_1_1_device_2_chi_data_channel_valid_o;
logic router_1_1_device_2_chi_data_channel_ready_i;
logic router_1_1_device_2_chi_data_channel_valid_i;
logic router_1_1_device_2_chi_data_channel_ready_o;

core router_0_0_device_0(
.chi_req_channel_valid_o (router_0_0_device_0_chi_req_channel_valid_o),
.chi_req_channel_ready_i (router_0_0_device_0_chi_req_channel_ready_i),
.chi_req_channel_flit_o (rx_flit_0_0_chi_req_channel[4]),
.chi_req_channel_valid_i (router_0_0_device_0_chi_req_channel_valid_i),
.chi_req_channel_ready_o (router_0_0_device_0_chi_req_channel_ready_o),
.chi_req_channel_flit_i (tx_flit_0_0_chi_req_channel[4]),
.chi_resp_channel_valid_o (router_0_0_device_0_chi_resp_channel_valid_o),
.chi_resp_channel_ready_i (router_0_0_device_0_chi_resp_channel_ready_i),
.chi_resp_channel_flit_o (rx_flit_0_0_chi_resp_channel[4]),
.chi_resp_channel_valid_i (router_0_0_device_0_chi_resp_channel_valid_i),
.chi_resp_channel_ready_o (router_0_0_device_0_chi_resp_channel_ready_o),
.chi_resp_channel_flit_i (tx_flit_0_0_chi_resp_channel[4]),
.chi_snoop_channel_valid_o (router_0_0_device_0_chi_snoop_channel_valid_o),
.chi_snoop_channel_ready_i (router_0_0_device_0_chi_snoop_channel_ready_i),
.chi_snoop_channel_flit_o (rx_flit_0_0_chi_snoop_channel[4]),
.chi_snoop_channel_valid_i (router_0_0_device_0_chi_snoop_channel_valid_i),
.chi_snoop_channel_ready_o (router_0_0_device_0_chi_snoop_channel_ready_o),
.chi_snoop_channel_flit_i (tx_flit_0_0_chi_snoop_channel[4]),
.chi_data_channel_valid_o (router_0_0_device_0_chi_data_channel_valid_o),
.chi_data_channel_ready_i (router_0_0_device_0_chi_data_channel_ready_i),
.chi_data_channel_flit_o (rx_flit_0_0_chi_data_channel[4]),
.chi_data_channel_valid_i (router_0_0_device_0_chi_data_channel_valid_i),
.chi_data_channel_ready_o (router_0_0_device_0_chi_data_channel_ready_o),
.chi_data_channel_flit_i (tx_flit_0_0_chi_data_channel[4]),
.clk (clk),
.rst (rst)
);
core router_0_0_device_1(
.chi_req_channel_valid_o (router_0_0_device_1_chi_req_channel_valid_o),
.chi_req_channel_ready_i (router_0_0_device_1_chi_req_channel_ready_i),
.chi_req_channel_flit_o (rx_flit_0_0_chi_req_channel[5]),
.chi_req_channel_valid_i (router_0_0_device_1_chi_req_channel_valid_i),
.chi_req_channel_ready_o (router_0_0_device_1_chi_req_channel_ready_o),
.chi_req_channel_flit_i (tx_flit_0_0_chi_req_channel[5]),
.chi_resp_channel_valid_o (router_0_0_device_1_chi_resp_channel_valid_o),
.chi_resp_channel_ready_i (router_0_0_device_1_chi_resp_channel_ready_i),
.chi_resp_channel_flit_o (rx_flit_0_0_chi_resp_channel[5]),
.chi_resp_channel_valid_i (router_0_0_device_1_chi_resp_channel_valid_i),
.chi_resp_channel_ready_o (router_0_0_device_1_chi_resp_channel_ready_o),
.chi_resp_channel_flit_i (tx_flit_0_0_chi_resp_channel[5]),
.chi_snoop_channel_valid_o (router_0_0_device_1_chi_snoop_channel_valid_o),
.chi_snoop_channel_ready_i (router_0_0_device_1_chi_snoop_channel_ready_i),
.chi_snoop_channel_flit_o (rx_flit_0_0_chi_snoop_channel[5]),
.chi_snoop_channel_valid_i (router_0_0_device_1_chi_snoop_channel_valid_i),
.chi_snoop_channel_ready_o (router_0_0_device_1_chi_snoop_channel_ready_o),
.chi_snoop_channel_flit_i (tx_flit_0_0_chi_snoop_channel[5]),
.chi_data_channel_valid_o (router_0_0_device_1_chi_data_channel_valid_o),
.chi_data_channel_ready_i (router_0_0_device_1_chi_data_channel_ready_i),
.chi_data_channel_flit_o (rx_flit_0_0_chi_data_channel[5]),
.chi_data_channel_valid_i (router_0_0_device_1_chi_data_channel_valid_i),
.chi_data_channel_ready_o (router_0_0_device_1_chi_data_channel_ready_o),
.chi_data_channel_flit_i (tx_flit_0_0_chi_data_channel[5]),
.clk (clk),
.rst (rst)
);
core router_0_1_device_0(
.chi_req_channel_valid_o (router_0_1_device_0_chi_req_channel_valid_o),
.chi_req_channel_ready_i (router_0_1_device_0_chi_req_channel_ready_i),
.chi_req_channel_flit_o (rx_flit_0_1_chi_req_channel[4]),
.chi_req_channel_valid_i (router_0_1_device_0_chi_req_channel_valid_i),
.chi_req_channel_ready_o (router_0_1_device_0_chi_req_channel_ready_o),
.chi_req_channel_flit_i (tx_flit_0_1_chi_req_channel[4]),
.chi_resp_channel_valid_o (router_0_1_device_0_chi_resp_channel_valid_o),
.chi_resp_channel_ready_i (router_0_1_device_0_chi_resp_channel_ready_i),
.chi_resp_channel_flit_o (rx_flit_0_1_chi_resp_channel[4]),
.chi_resp_channel_valid_i (router_0_1_device_0_chi_resp_channel_valid_i),
.chi_resp_channel_ready_o (router_0_1_device_0_chi_resp_channel_ready_o),
.chi_resp_channel_flit_i (tx_flit_0_1_chi_resp_channel[4]),
.chi_snoop_channel_valid_o (router_0_1_device_0_chi_snoop_channel_valid_o),
.chi_snoop_channel_ready_i (router_0_1_device_0_chi_snoop_channel_ready_i),
.chi_snoop_channel_flit_o (rx_flit_0_1_chi_snoop_channel[4]),
.chi_snoop_channel_valid_i (router_0_1_device_0_chi_snoop_channel_valid_i),
.chi_snoop_channel_ready_o (router_0_1_device_0_chi_snoop_channel_ready_o),
.chi_snoop_channel_flit_i (tx_flit_0_1_chi_snoop_channel[4]),
.chi_data_channel_valid_o (router_0_1_device_0_chi_data_channel_valid_o),
.chi_data_channel_ready_i (router_0_1_device_0_chi_data_channel_ready_i),
.chi_data_channel_flit_o (rx_flit_0_1_chi_data_channel[4]),
.chi_data_channel_valid_i (router_0_1_device_0_chi_data_channel_valid_i),
.chi_data_channel_ready_o (router_0_1_device_0_chi_data_channel_ready_o),
.chi_data_channel_flit_i (tx_flit_0_1_chi_data_channel[4]),
.clk (clk),
.rst (rst)
);
core router_0_1_device_1(
.chi_req_channel_valid_o (router_0_1_device_1_chi_req_channel_valid_o),
.chi_req_channel_ready_i (router_0_1_device_1_chi_req_channel_ready_i),
.chi_req_channel_flit_o (rx_flit_0_1_chi_req_channel[5]),
.chi_req_channel_valid_i (router_0_1_device_1_chi_req_channel_valid_i),
.chi_req_channel_ready_o (router_0_1_device_1_chi_req_channel_ready_o),
.chi_req_channel_flit_i (tx_flit_0_1_chi_req_channel[5]),
.chi_resp_channel_valid_o (router_0_1_device_1_chi_resp_channel_valid_o),
.chi_resp_channel_ready_i (router_0_1_device_1_chi_resp_channel_ready_i),
.chi_resp_channel_flit_o (rx_flit_0_1_chi_resp_channel[5]),
.chi_resp_channel_valid_i (router_0_1_device_1_chi_resp_channel_valid_i),
.chi_resp_channel_ready_o (router_0_1_device_1_chi_resp_channel_ready_o),
.chi_resp_channel_flit_i (tx_flit_0_1_chi_resp_channel[5]),
.chi_snoop_channel_valid_o (router_0_1_device_1_chi_snoop_channel_valid_o),
.chi_snoop_channel_ready_i (router_0_1_device_1_chi_snoop_channel_ready_i),
.chi_snoop_channel_flit_o (rx_flit_0_1_chi_snoop_channel[5]),
.chi_snoop_channel_valid_i (router_0_1_device_1_chi_snoop_channel_valid_i),
.chi_snoop_channel_ready_o (router_0_1_device_1_chi_snoop_channel_ready_o),
.chi_snoop_channel_flit_i (tx_flit_0_1_chi_snoop_channel[5]),
.chi_data_channel_valid_o (router_0_1_device_1_chi_data_channel_valid_o),
.chi_data_channel_ready_i (router_0_1_device_1_chi_data_channel_ready_i),
.chi_data_channel_flit_o (rx_flit_0_1_chi_data_channel[5]),
.chi_data_channel_valid_i (router_0_1_device_1_chi_data_channel_valid_i),
.chi_data_channel_ready_o (router_0_1_device_1_chi_data_channel_ready_o),
.chi_data_channel_flit_i (tx_flit_0_1_chi_data_channel[5]),
.clk (clk),
.rst (rst)
);
core router_1_0_device_0(
.chi_req_channel_valid_o (router_1_0_device_0_chi_req_channel_valid_o),
.chi_req_channel_ready_i (router_1_0_device_0_chi_req_channel_ready_i),
.chi_req_channel_flit_o (rx_flit_1_0_chi_req_channel[4]),
.chi_req_channel_valid_i (router_1_0_device_0_chi_req_channel_valid_i),
.chi_req_channel_ready_o (router_1_0_device_0_chi_req_channel_ready_o),
.chi_req_channel_flit_i (tx_flit_1_0_chi_req_channel[4]),
.chi_resp_channel_valid_o (router_1_0_device_0_chi_resp_channel_valid_o),
.chi_resp_channel_ready_i (router_1_0_device_0_chi_resp_channel_ready_i),
.chi_resp_channel_flit_o (rx_flit_1_0_chi_resp_channel[4]),
.chi_resp_channel_valid_i (router_1_0_device_0_chi_resp_channel_valid_i),
.chi_resp_channel_ready_o (router_1_0_device_0_chi_resp_channel_ready_o),
.chi_resp_channel_flit_i (tx_flit_1_0_chi_resp_channel[4]),
.chi_snoop_channel_valid_o (router_1_0_device_0_chi_snoop_channel_valid_o),
.chi_snoop_channel_ready_i (router_1_0_device_0_chi_snoop_channel_ready_i),
.chi_snoop_channel_flit_o (rx_flit_1_0_chi_snoop_channel[4]),
.chi_snoop_channel_valid_i (router_1_0_device_0_chi_snoop_channel_valid_i),
.chi_snoop_channel_ready_o (router_1_0_device_0_chi_snoop_channel_ready_o),
.chi_snoop_channel_flit_i (tx_flit_1_0_chi_snoop_channel[4]),
.chi_data_channel_valid_o (router_1_0_device_0_chi_data_channel_valid_o),
.chi_data_channel_ready_i (router_1_0_device_0_chi_data_channel_ready_i),
.chi_data_channel_flit_o (rx_flit_1_0_chi_data_channel[4]),
.chi_data_channel_valid_i (router_1_0_device_0_chi_data_channel_valid_i),
.chi_data_channel_ready_o (router_1_0_device_0_chi_data_channel_ready_o),
.chi_data_channel_flit_i (tx_flit_1_0_chi_data_channel[4]),
.clk (clk),
.rst (rst)
);
core router_1_1_device_0(
.chi_req_channel_valid_o (router_1_1_device_0_chi_req_channel_valid_o),
.chi_req_channel_ready_i (router_1_1_device_0_chi_req_channel_ready_i),
.chi_req_channel_flit_o (rx_flit_1_1_chi_req_channel[4]),
.chi_req_channel_valid_i (router_1_1_device_0_chi_req_channel_valid_i),
.chi_req_channel_ready_o (router_1_1_device_0_chi_req_channel_ready_o),
.chi_req_channel_flit_i (tx_flit_1_1_chi_req_channel[4]),
.chi_resp_channel_valid_o (router_1_1_device_0_chi_resp_channel_valid_o),
.chi_resp_channel_ready_i (router_1_1_device_0_chi_resp_channel_ready_i),
.chi_resp_channel_flit_o (rx_flit_1_1_chi_resp_channel[4]),
.chi_resp_channel_valid_i (router_1_1_device_0_chi_resp_channel_valid_i),
.chi_resp_channel_ready_o (router_1_1_device_0_chi_resp_channel_ready_o),
.chi_resp_channel_flit_i (tx_flit_1_1_chi_resp_channel[4]),
.chi_snoop_channel_valid_o (router_1_1_device_0_chi_snoop_channel_valid_o),
.chi_snoop_channel_ready_i (router_1_1_device_0_chi_snoop_channel_ready_i),
.chi_snoop_channel_flit_o (rx_flit_1_1_chi_snoop_channel[4]),
.chi_snoop_channel_valid_i (router_1_1_device_0_chi_snoop_channel_valid_i),
.chi_snoop_channel_ready_o (router_1_1_device_0_chi_snoop_channel_ready_o),
.chi_snoop_channel_flit_i (tx_flit_1_1_chi_snoop_channel[4]),
.chi_data_channel_valid_o (router_1_1_device_0_chi_data_channel_valid_o),
.chi_data_channel_ready_i (router_1_1_device_0_chi_data_channel_ready_i),
.chi_data_channel_flit_o (rx_flit_1_1_chi_data_channel[4]),
.chi_data_channel_valid_i (router_1_1_device_0_chi_data_channel_valid_i),
.chi_data_channel_ready_o (router_1_1_device_0_chi_data_channel_ready_o),
.chi_data_channel_flit_i (tx_flit_1_1_chi_data_channel[4]),
.clk (clk),
.rst (rst)
);
core router_1_1_device_1(
.chi_req_channel_valid_o (router_1_1_device_1_chi_req_channel_valid_o),
.chi_req_channel_ready_i (router_1_1_device_1_chi_req_channel_ready_i),
.chi_req_channel_flit_o (rx_flit_1_1_chi_req_channel[5]),
.chi_req_channel_valid_i (router_1_1_device_1_chi_req_channel_valid_i),
.chi_req_channel_ready_o (router_1_1_device_1_chi_req_channel_ready_o),
.chi_req_channel_flit_i (tx_flit_1_1_chi_req_channel[5]),
.chi_resp_channel_valid_o (router_1_1_device_1_chi_resp_channel_valid_o),
.chi_resp_channel_ready_i (router_1_1_device_1_chi_resp_channel_ready_i),
.chi_resp_channel_flit_o (rx_flit_1_1_chi_resp_channel[5]),
.chi_resp_channel_valid_i (router_1_1_device_1_chi_resp_channel_valid_i),
.chi_resp_channel_ready_o (router_1_1_device_1_chi_resp_channel_ready_o),
.chi_resp_channel_flit_i (tx_flit_1_1_chi_resp_channel[5]),
.chi_snoop_channel_valid_o (router_1_1_device_1_chi_snoop_channel_valid_o),
.chi_snoop_channel_ready_i (router_1_1_device_1_chi_snoop_channel_ready_i),
.chi_snoop_channel_flit_o (rx_flit_1_1_chi_snoop_channel[5]),
.chi_snoop_channel_valid_i (router_1_1_device_1_chi_snoop_channel_valid_i),
.chi_snoop_channel_ready_o (router_1_1_device_1_chi_snoop_channel_ready_o),
.chi_snoop_channel_flit_i (tx_flit_1_1_chi_snoop_channel[5]),
.chi_data_channel_valid_o (router_1_1_device_1_chi_data_channel_valid_o),
.chi_data_channel_ready_i (router_1_1_device_1_chi_data_channel_ready_i),
.chi_data_channel_flit_o (rx_flit_1_1_chi_data_channel[5]),
.chi_data_channel_valid_i (router_1_1_device_1_chi_data_channel_valid_i),
.chi_data_channel_ready_o (router_1_1_device_1_chi_data_channel_ready_o),
.chi_data_channel_flit_i (tx_flit_1_1_chi_data_channel[5]),
.clk (clk),
.rst (rst)
);
ddr router_1_1_device_2(
.chi_req_channel_valid_o (router_1_1_device_2_chi_req_channel_valid_o),
.chi_req_channel_ready_i (router_1_1_device_2_chi_req_channel_ready_i),
.chi_req_channel_flit_o (rx_flit_1_1_chi_req_channel[6]),
.chi_req_channel_valid_i (router_1_1_device_2_chi_req_channel_valid_i),
.chi_req_channel_ready_o (router_1_1_device_2_chi_req_channel_ready_o),
.chi_req_channel_flit_i (tx_flit_1_1_chi_req_channel[6]),
.chi_resp_channel_valid_o (router_1_1_device_2_chi_resp_channel_valid_o),
.chi_resp_channel_ready_i (router_1_1_device_2_chi_resp_channel_ready_i),
.chi_resp_channel_flit_o (rx_flit_1_1_chi_resp_channel[6]),
.chi_resp_channel_valid_i (router_1_1_device_2_chi_resp_channel_valid_i),
.chi_resp_channel_ready_o (router_1_1_device_2_chi_resp_channel_ready_o),
.chi_resp_channel_flit_i (tx_flit_1_1_chi_resp_channel[6]),
.chi_snoop_channel_valid_o (router_1_1_device_2_chi_snoop_channel_valid_o),
.chi_snoop_channel_ready_i (router_1_1_device_2_chi_snoop_channel_ready_i),
.chi_snoop_channel_flit_o (rx_flit_1_1_chi_snoop_channel[6]),
.chi_snoop_channel_valid_i (router_1_1_device_2_chi_snoop_channel_valid_i),
.chi_snoop_channel_ready_o (router_1_1_device_2_chi_snoop_channel_ready_o),
.chi_snoop_channel_flit_i (tx_flit_1_1_chi_snoop_channel[6]),
.chi_data_channel_valid_o (router_1_1_device_2_chi_data_channel_valid_o),
.chi_data_channel_ready_i (router_1_1_device_2_chi_data_channel_ready_i),
.chi_data_channel_flit_o (rx_flit_1_1_chi_data_channel[6]),
.chi_data_channel_valid_i (router_1_1_device_2_chi_data_channel_valid_i),
.chi_data_channel_ready_o (router_1_1_device_2_chi_data_channel_ready_o),
.chi_data_channel_flit_i (tx_flit_1_1_chi_data_channel[6]),
.clk (clk),
.rst (rst)
);

local_port_to_router router_0_0_device_0_chi_req_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_0_device_0_chi_req_channel_valid_o),
.free_credit_vld_o (router_0_0_device_0_chi_req_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_0_chi_req_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_0_chi_req_channel[4]),
.flit_pend_o (rx_flit_pend_0_0_chi_req_channel[4]),
.flit_v_o (rx_flit_v_0_0_chi_req_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_0_0_chi_req_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_0_0_chi_req_channel[4])
);
router_to_local_port router_0_0_device_0_chi_req_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_0_device_0_chi_req_channel_valid_i),
.free_credit_vld_i (router_0_0_device_0_chi_req_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_0_chi_req_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_0_chi_req_channel[4]),
.flit_pend_i (tx_flit_pend_0_0_chi_req_channel[4]),
.flit_v_i (tx_flit_v_0_0_chi_req_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_0_0_chi_req_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_0_0_chi_req_channel[4])
);
local_port_to_router router_0_0_device_0_chi_resp_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_0_device_0_chi_resp_channel_valid_o),
.free_credit_vld_o (router_0_0_device_0_chi_resp_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_0_chi_resp_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_0_chi_resp_channel[4]),
.flit_pend_o (rx_flit_pend_0_0_chi_resp_channel[4]),
.flit_v_o (rx_flit_v_0_0_chi_resp_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_0_0_chi_resp_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_0_0_chi_resp_channel[4])
);
router_to_local_port router_0_0_device_0_chi_resp_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_0_device_0_chi_resp_channel_valid_i),
.free_credit_vld_i (router_0_0_device_0_chi_resp_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_0_chi_resp_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_0_chi_resp_channel[4]),
.flit_pend_i (tx_flit_pend_0_0_chi_resp_channel[4]),
.flit_v_i (tx_flit_v_0_0_chi_resp_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_0_0_chi_resp_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_0_0_chi_resp_channel[4])
);
local_port_to_router router_0_0_device_0_chi_snoop_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_0_device_0_chi_snoop_channel_valid_o),
.free_credit_vld_o (router_0_0_device_0_chi_snoop_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_0_chi_snoop_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_0_chi_snoop_channel[4]),
.flit_pend_o (rx_flit_pend_0_0_chi_snoop_channel[4]),
.flit_v_o (rx_flit_v_0_0_chi_snoop_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_0_0_chi_snoop_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_0_0_chi_snoop_channel[4])
);
router_to_local_port router_0_0_device_0_chi_snoop_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_0_device_0_chi_snoop_channel_valid_i),
.free_credit_vld_i (router_0_0_device_0_chi_snoop_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_0_chi_snoop_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_0_chi_snoop_channel[4]),
.flit_pend_i (tx_flit_pend_0_0_chi_snoop_channel[4]),
.flit_v_i (tx_flit_v_0_0_chi_snoop_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_0_0_chi_snoop_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_0_0_chi_snoop_channel[4])
);
local_port_to_router router_0_0_device_0_chi_data_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_0_device_0_chi_data_channel_valid_o),
.free_credit_vld_o (router_0_0_device_0_chi_data_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_0_chi_data_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_0_chi_data_channel[4]),
.flit_pend_o (rx_flit_pend_0_0_chi_data_channel[4]),
.flit_v_o (rx_flit_v_0_0_chi_data_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_0_0_chi_data_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_0_0_chi_data_channel[4])
);
router_to_local_port router_0_0_device_0_chi_data_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_0_device_0_chi_data_channel_valid_i),
.free_credit_vld_i (router_0_0_device_0_chi_data_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_0_chi_data_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_0_chi_data_channel[4]),
.flit_pend_i (tx_flit_pend_0_0_chi_data_channel[4]),
.flit_v_i (tx_flit_v_0_0_chi_data_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_0_0_chi_data_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_0_0_chi_data_channel[4])
);
local_port_to_router router_0_0_device_1_chi_req_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_0_device_1_chi_req_channel_valid_o),
.free_credit_vld_o (router_0_0_device_1_chi_req_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_0_chi_req_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_0_chi_req_channel[5]),
.flit_pend_o (rx_flit_pend_0_0_chi_req_channel[5]),
.flit_v_o (rx_flit_v_0_0_chi_req_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_0_0_chi_req_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_0_0_chi_req_channel[5])
);
router_to_local_port router_0_0_device_1_chi_req_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_0_device_1_chi_req_channel_valid_i),
.free_credit_vld_i (router_0_0_device_1_chi_req_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_0_chi_req_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_0_chi_req_channel[5]),
.flit_pend_i (tx_flit_pend_0_0_chi_req_channel[5]),
.flit_v_i (tx_flit_v_0_0_chi_req_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_0_0_chi_req_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_0_0_chi_req_channel[5])
);
local_port_to_router router_0_0_device_1_chi_resp_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_0_device_1_chi_resp_channel_valid_o),
.free_credit_vld_o (router_0_0_device_1_chi_resp_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_0_chi_resp_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_0_chi_resp_channel[5]),
.flit_pend_o (rx_flit_pend_0_0_chi_resp_channel[5]),
.flit_v_o (rx_flit_v_0_0_chi_resp_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_0_0_chi_resp_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_0_0_chi_resp_channel[5])
);
router_to_local_port router_0_0_device_1_chi_resp_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_0_device_1_chi_resp_channel_valid_i),
.free_credit_vld_i (router_0_0_device_1_chi_resp_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_0_chi_resp_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_0_chi_resp_channel[5]),
.flit_pend_i (tx_flit_pend_0_0_chi_resp_channel[5]),
.flit_v_i (tx_flit_v_0_0_chi_resp_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_0_0_chi_resp_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_0_0_chi_resp_channel[5])
);
local_port_to_router router_0_0_device_1_chi_snoop_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_0_device_1_chi_snoop_channel_valid_o),
.free_credit_vld_o (router_0_0_device_1_chi_snoop_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_0_chi_snoop_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_0_chi_snoop_channel[5]),
.flit_pend_o (rx_flit_pend_0_0_chi_snoop_channel[5]),
.flit_v_o (rx_flit_v_0_0_chi_snoop_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_0_0_chi_snoop_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_0_0_chi_snoop_channel[5])
);
router_to_local_port router_0_0_device_1_chi_snoop_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_0_device_1_chi_snoop_channel_valid_i),
.free_credit_vld_i (router_0_0_device_1_chi_snoop_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_0_chi_snoop_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_0_chi_snoop_channel[5]),
.flit_pend_i (tx_flit_pend_0_0_chi_snoop_channel[5]),
.flit_v_i (tx_flit_v_0_0_chi_snoop_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_0_0_chi_snoop_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_0_0_chi_snoop_channel[5])
);
local_port_to_router router_0_0_device_1_chi_data_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_0_device_1_chi_data_channel_valid_o),
.free_credit_vld_o (router_0_0_device_1_chi_data_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_0_chi_data_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_0_chi_data_channel[5]),
.flit_pend_o (rx_flit_pend_0_0_chi_data_channel[5]),
.flit_v_o (rx_flit_v_0_0_chi_data_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_0_0_chi_data_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_0_0_chi_data_channel[5])
);
router_to_local_port router_0_0_device_1_chi_data_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_0_device_1_chi_data_channel_valid_i),
.free_credit_vld_i (router_0_0_device_1_chi_data_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_0_chi_data_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_0_chi_data_channel[5]),
.flit_pend_i (tx_flit_pend_0_0_chi_data_channel[5]),
.flit_v_i (tx_flit_v_0_0_chi_data_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_0_0_chi_data_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_0_0_chi_data_channel[5])
);
local_port_to_router router_0_1_device_0_chi_req_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_1_device_0_chi_req_channel_valid_o),
.free_credit_vld_o (router_0_1_device_0_chi_req_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_1_chi_req_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_1_chi_req_channel[4]),
.flit_pend_o (rx_flit_pend_0_1_chi_req_channel[4]),
.flit_v_o (rx_flit_v_0_1_chi_req_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_0_1_chi_req_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_0_1_chi_req_channel[4])
);
router_to_local_port router_0_1_device_0_chi_req_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_1_device_0_chi_req_channel_valid_i),
.free_credit_vld_i (router_0_1_device_0_chi_req_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_1_chi_req_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_1_chi_req_channel[4]),
.flit_pend_i (tx_flit_pend_0_1_chi_req_channel[4]),
.flit_v_i (tx_flit_v_0_1_chi_req_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_0_1_chi_req_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_0_1_chi_req_channel[4])
);
local_port_to_router router_0_1_device_0_chi_resp_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_1_device_0_chi_resp_channel_valid_o),
.free_credit_vld_o (router_0_1_device_0_chi_resp_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_1_chi_resp_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_1_chi_resp_channel[4]),
.flit_pend_o (rx_flit_pend_0_1_chi_resp_channel[4]),
.flit_v_o (rx_flit_v_0_1_chi_resp_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_0_1_chi_resp_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_0_1_chi_resp_channel[4])
);
router_to_local_port router_0_1_device_0_chi_resp_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_1_device_0_chi_resp_channel_valid_i),
.free_credit_vld_i (router_0_1_device_0_chi_resp_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_1_chi_resp_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_1_chi_resp_channel[4]),
.flit_pend_i (tx_flit_pend_0_1_chi_resp_channel[4]),
.flit_v_i (tx_flit_v_0_1_chi_resp_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_0_1_chi_resp_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_0_1_chi_resp_channel[4])
);
local_port_to_router router_0_1_device_0_chi_snoop_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_1_device_0_chi_snoop_channel_valid_o),
.free_credit_vld_o (router_0_1_device_0_chi_snoop_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_1_chi_snoop_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_1_chi_snoop_channel[4]),
.flit_pend_o (rx_flit_pend_0_1_chi_snoop_channel[4]),
.flit_v_o (rx_flit_v_0_1_chi_snoop_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_0_1_chi_snoop_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_0_1_chi_snoop_channel[4])
);
router_to_local_port router_0_1_device_0_chi_snoop_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_1_device_0_chi_snoop_channel_valid_i),
.free_credit_vld_i (router_0_1_device_0_chi_snoop_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_1_chi_snoop_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_1_chi_snoop_channel[4]),
.flit_pend_i (tx_flit_pend_0_1_chi_snoop_channel[4]),
.flit_v_i (tx_flit_v_0_1_chi_snoop_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_0_1_chi_snoop_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_0_1_chi_snoop_channel[4])
);
local_port_to_router router_0_1_device_0_chi_data_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_1_device_0_chi_data_channel_valid_o),
.free_credit_vld_o (router_0_1_device_0_chi_data_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_1_chi_data_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_1_chi_data_channel[4]),
.flit_pend_o (rx_flit_pend_0_1_chi_data_channel[4]),
.flit_v_o (rx_flit_v_0_1_chi_data_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_0_1_chi_data_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_0_1_chi_data_channel[4])
);
router_to_local_port router_0_1_device_0_chi_data_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_1_device_0_chi_data_channel_valid_i),
.free_credit_vld_i (router_0_1_device_0_chi_data_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_1_chi_data_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_1_chi_data_channel[4]),
.flit_pend_i (tx_flit_pend_0_1_chi_data_channel[4]),
.flit_v_i (tx_flit_v_0_1_chi_data_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_0_1_chi_data_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_0_1_chi_data_channel[4])
);
local_port_to_router router_0_1_device_1_chi_req_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_1_device_1_chi_req_channel_valid_o),
.free_credit_vld_o (router_0_1_device_1_chi_req_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_1_chi_req_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_1_chi_req_channel[5]),
.flit_pend_o (rx_flit_pend_0_1_chi_req_channel[5]),
.flit_v_o (rx_flit_v_0_1_chi_req_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_0_1_chi_req_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_0_1_chi_req_channel[5])
);
router_to_local_port router_0_1_device_1_chi_req_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_1_device_1_chi_req_channel_valid_i),
.free_credit_vld_i (router_0_1_device_1_chi_req_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_1_chi_req_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_1_chi_req_channel[5]),
.flit_pend_i (tx_flit_pend_0_1_chi_req_channel[5]),
.flit_v_i (tx_flit_v_0_1_chi_req_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_0_1_chi_req_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_0_1_chi_req_channel[5])
);
local_port_to_router router_0_1_device_1_chi_resp_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_1_device_1_chi_resp_channel_valid_o),
.free_credit_vld_o (router_0_1_device_1_chi_resp_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_1_chi_resp_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_1_chi_resp_channel[5]),
.flit_pend_o (rx_flit_pend_0_1_chi_resp_channel[5]),
.flit_v_o (rx_flit_v_0_1_chi_resp_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_0_1_chi_resp_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_0_1_chi_resp_channel[5])
);
router_to_local_port router_0_1_device_1_chi_resp_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_1_device_1_chi_resp_channel_valid_i),
.free_credit_vld_i (router_0_1_device_1_chi_resp_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_1_chi_resp_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_1_chi_resp_channel[5]),
.flit_pend_i (tx_flit_pend_0_1_chi_resp_channel[5]),
.flit_v_i (tx_flit_v_0_1_chi_resp_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_0_1_chi_resp_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_0_1_chi_resp_channel[5])
);
local_port_to_router router_0_1_device_1_chi_snoop_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_1_device_1_chi_snoop_channel_valid_o),
.free_credit_vld_o (router_0_1_device_1_chi_snoop_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_1_chi_snoop_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_1_chi_snoop_channel[5]),
.flit_pend_o (rx_flit_pend_0_1_chi_snoop_channel[5]),
.flit_v_o (rx_flit_v_0_1_chi_snoop_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_0_1_chi_snoop_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_0_1_chi_snoop_channel[5])
);
router_to_local_port router_0_1_device_1_chi_snoop_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_1_device_1_chi_snoop_channel_valid_i),
.free_credit_vld_i (router_0_1_device_1_chi_snoop_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_1_chi_snoop_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_1_chi_snoop_channel[5]),
.flit_pend_i (tx_flit_pend_0_1_chi_snoop_channel[5]),
.flit_v_i (tx_flit_v_0_1_chi_snoop_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_0_1_chi_snoop_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_0_1_chi_snoop_channel[5])
);
local_port_to_router router_0_1_device_1_chi_data_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_0_1_device_1_chi_data_channel_valid_o),
.free_credit_vld_o (router_0_1_device_1_chi_data_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_0_1_chi_data_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_0_1_chi_data_channel[5]),
.flit_pend_o (rx_flit_pend_0_1_chi_data_channel[5]),
.flit_v_o (rx_flit_v_0_1_chi_data_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_0_1_chi_data_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_0_1_chi_data_channel[5])
);
router_to_local_port router_0_1_device_1_chi_data_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_0_1_device_1_chi_data_channel_valid_i),
.free_credit_vld_i (router_0_1_device_1_chi_data_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_0_1_chi_data_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_0_1_chi_data_channel[5]),
.flit_pend_i (tx_flit_pend_0_1_chi_data_channel[5]),
.flit_v_i (tx_flit_v_0_1_chi_data_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_0_1_chi_data_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_0_1_chi_data_channel[5])
);
local_port_to_router router_1_0_device_0_chi_req_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_0_device_0_chi_req_channel_valid_o),
.free_credit_vld_o (router_1_0_device_0_chi_req_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_0_chi_req_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_0_chi_req_channel[4]),
.flit_pend_o (rx_flit_pend_1_0_chi_req_channel[4]),
.flit_v_o (rx_flit_v_1_0_chi_req_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_1_0_chi_req_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_1_0_chi_req_channel[4])
);
router_to_local_port router_1_0_device_0_chi_req_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_0_device_0_chi_req_channel_valid_i),
.free_credit_vld_i (router_1_0_device_0_chi_req_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_0_chi_req_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_0_chi_req_channel[4]),
.flit_pend_i (tx_flit_pend_1_0_chi_req_channel[4]),
.flit_v_i (tx_flit_v_1_0_chi_req_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_1_0_chi_req_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_1_0_chi_req_channel[4])
);
local_port_to_router router_1_0_device_0_chi_resp_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_0_device_0_chi_resp_channel_valid_o),
.free_credit_vld_o (router_1_0_device_0_chi_resp_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_0_chi_resp_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_0_chi_resp_channel[4]),
.flit_pend_o (rx_flit_pend_1_0_chi_resp_channel[4]),
.flit_v_o (rx_flit_v_1_0_chi_resp_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_1_0_chi_resp_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_1_0_chi_resp_channel[4])
);
router_to_local_port router_1_0_device_0_chi_resp_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_0_device_0_chi_resp_channel_valid_i),
.free_credit_vld_i (router_1_0_device_0_chi_resp_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_0_chi_resp_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_0_chi_resp_channel[4]),
.flit_pend_i (tx_flit_pend_1_0_chi_resp_channel[4]),
.flit_v_i (tx_flit_v_1_0_chi_resp_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_1_0_chi_resp_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_1_0_chi_resp_channel[4])
);
local_port_to_router router_1_0_device_0_chi_snoop_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_0_device_0_chi_snoop_channel_valid_o),
.free_credit_vld_o (router_1_0_device_0_chi_snoop_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_0_chi_snoop_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_0_chi_snoop_channel[4]),
.flit_pend_o (rx_flit_pend_1_0_chi_snoop_channel[4]),
.flit_v_o (rx_flit_v_1_0_chi_snoop_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_1_0_chi_snoop_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_1_0_chi_snoop_channel[4])
);
router_to_local_port router_1_0_device_0_chi_snoop_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_0_device_0_chi_snoop_channel_valid_i),
.free_credit_vld_i (router_1_0_device_0_chi_snoop_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_0_chi_snoop_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_0_chi_snoop_channel[4]),
.flit_pend_i (tx_flit_pend_1_0_chi_snoop_channel[4]),
.flit_v_i (tx_flit_v_1_0_chi_snoop_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_1_0_chi_snoop_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_1_0_chi_snoop_channel[4])
);
local_port_to_router router_1_0_device_0_chi_data_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_0_device_0_chi_data_channel_valid_o),
.free_credit_vld_o (router_1_0_device_0_chi_data_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_0_chi_data_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_0_chi_data_channel[4]),
.flit_pend_o (rx_flit_pend_1_0_chi_data_channel[4]),
.flit_v_o (rx_flit_v_1_0_chi_data_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_1_0_chi_data_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_1_0_chi_data_channel[4])
);
router_to_local_port router_1_0_device_0_chi_data_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_0_device_0_chi_data_channel_valid_i),
.free_credit_vld_i (router_1_0_device_0_chi_data_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_0_chi_data_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_0_chi_data_channel[4]),
.flit_pend_i (tx_flit_pend_1_0_chi_data_channel[4]),
.flit_v_i (tx_flit_v_1_0_chi_data_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_1_0_chi_data_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_1_0_chi_data_channel[4])
);
local_port_to_router router_1_1_device_0_chi_req_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_0_chi_req_channel_valid_o),
.free_credit_vld_o (router_1_1_device_0_chi_req_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_req_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_req_channel[4]),
.flit_pend_o (rx_flit_pend_1_1_chi_req_channel[4]),
.flit_v_o (rx_flit_v_1_1_chi_req_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_req_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_req_channel[4])
);
router_to_local_port router_1_1_device_0_chi_req_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_0_chi_req_channel_valid_i),
.free_credit_vld_i (router_1_1_device_0_chi_req_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_req_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_req_channel[4]),
.flit_pend_i (tx_flit_pend_1_1_chi_req_channel[4]),
.flit_v_i (tx_flit_v_1_1_chi_req_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_req_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_req_channel[4])
);
local_port_to_router router_1_1_device_0_chi_resp_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_0_chi_resp_channel_valid_o),
.free_credit_vld_o (router_1_1_device_0_chi_resp_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_resp_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_resp_channel[4]),
.flit_pend_o (rx_flit_pend_1_1_chi_resp_channel[4]),
.flit_v_o (rx_flit_v_1_1_chi_resp_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_resp_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_resp_channel[4])
);
router_to_local_port router_1_1_device_0_chi_resp_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_0_chi_resp_channel_valid_i),
.free_credit_vld_i (router_1_1_device_0_chi_resp_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_resp_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_resp_channel[4]),
.flit_pend_i (tx_flit_pend_1_1_chi_resp_channel[4]),
.flit_v_i (tx_flit_v_1_1_chi_resp_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_resp_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_resp_channel[4])
);
local_port_to_router router_1_1_device_0_chi_snoop_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_0_chi_snoop_channel_valid_o),
.free_credit_vld_o (router_1_1_device_0_chi_snoop_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_snoop_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_snoop_channel[4]),
.flit_pend_o (rx_flit_pend_1_1_chi_snoop_channel[4]),
.flit_v_o (rx_flit_v_1_1_chi_snoop_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_snoop_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_snoop_channel[4])
);
router_to_local_port router_1_1_device_0_chi_snoop_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_0_chi_snoop_channel_valid_i),
.free_credit_vld_i (router_1_1_device_0_chi_snoop_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_snoop_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_snoop_channel[4]),
.flit_pend_i (tx_flit_pend_1_1_chi_snoop_channel[4]),
.flit_v_i (tx_flit_v_1_1_chi_snoop_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_snoop_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_snoop_channel[4])
);
local_port_to_router router_1_1_device_0_chi_data_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_0_chi_data_channel_valid_o),
.free_credit_vld_o (router_1_1_device_0_chi_data_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_data_channel[4]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_data_channel[4]),
.flit_pend_o (rx_flit_pend_1_1_chi_data_channel[4]),
.flit_v_o (rx_flit_v_1_1_chi_data_channel[4]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_data_channel[4]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_data_channel[4])
);
router_to_local_port router_1_1_device_0_chi_data_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_0_chi_data_channel_valid_i),
.free_credit_vld_i (router_1_1_device_0_chi_data_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_data_channel[4]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_data_channel[4]),
.flit_pend_i (tx_flit_pend_1_1_chi_data_channel[4]),
.flit_v_i (tx_flit_v_1_1_chi_data_channel[4]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_data_channel[4]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_data_channel[4])
);
local_port_to_router router_1_1_device_1_chi_req_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_1_chi_req_channel_valid_o),
.free_credit_vld_o (router_1_1_device_1_chi_req_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_req_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_req_channel[5]),
.flit_pend_o (rx_flit_pend_1_1_chi_req_channel[5]),
.flit_v_o (rx_flit_v_1_1_chi_req_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_req_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_req_channel[5])
);
router_to_local_port router_1_1_device_1_chi_req_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_1_chi_req_channel_valid_i),
.free_credit_vld_i (router_1_1_device_1_chi_req_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_req_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_req_channel[5]),
.flit_pend_i (tx_flit_pend_1_1_chi_req_channel[5]),
.flit_v_i (tx_flit_v_1_1_chi_req_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_req_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_req_channel[5])
);
local_port_to_router router_1_1_device_1_chi_resp_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_1_chi_resp_channel_valid_o),
.free_credit_vld_o (router_1_1_device_1_chi_resp_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_resp_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_resp_channel[5]),
.flit_pend_o (rx_flit_pend_1_1_chi_resp_channel[5]),
.flit_v_o (rx_flit_v_1_1_chi_resp_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_resp_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_resp_channel[5])
);
router_to_local_port router_1_1_device_1_chi_resp_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_1_chi_resp_channel_valid_i),
.free_credit_vld_i (router_1_1_device_1_chi_resp_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_resp_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_resp_channel[5]),
.flit_pend_i (tx_flit_pend_1_1_chi_resp_channel[5]),
.flit_v_i (tx_flit_v_1_1_chi_resp_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_resp_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_resp_channel[5])
);
local_port_to_router router_1_1_device_1_chi_snoop_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_1_chi_snoop_channel_valid_o),
.free_credit_vld_o (router_1_1_device_1_chi_snoop_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_snoop_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_snoop_channel[5]),
.flit_pend_o (rx_flit_pend_1_1_chi_snoop_channel[5]),
.flit_v_o (rx_flit_v_1_1_chi_snoop_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_snoop_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_snoop_channel[5])
);
router_to_local_port router_1_1_device_1_chi_snoop_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_1_chi_snoop_channel_valid_i),
.free_credit_vld_i (router_1_1_device_1_chi_snoop_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_snoop_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_snoop_channel[5]),
.flit_pend_i (tx_flit_pend_1_1_chi_snoop_channel[5]),
.flit_v_i (tx_flit_v_1_1_chi_snoop_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_snoop_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_snoop_channel[5])
);
local_port_to_router router_1_1_device_1_chi_data_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_1_chi_data_channel_valid_o),
.free_credit_vld_o (router_1_1_device_1_chi_data_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_data_channel[5]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_data_channel[5]),
.flit_pend_o (rx_flit_pend_1_1_chi_data_channel[5]),
.flit_v_o (rx_flit_v_1_1_chi_data_channel[5]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_data_channel[5]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_data_channel[5])
);
router_to_local_port router_1_1_device_1_chi_data_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_1_chi_data_channel_valid_i),
.free_credit_vld_i (router_1_1_device_1_chi_data_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_data_channel[5]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_data_channel[5]),
.flit_pend_i (tx_flit_pend_1_1_chi_data_channel[5]),
.flit_v_i (tx_flit_v_1_1_chi_data_channel[5]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_data_channel[5]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_data_channel[5])
);
local_port_to_router router_1_1_device_2_chi_req_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_2_chi_req_channel_valid_o),
.free_credit_vld_o (router_1_1_device_2_chi_req_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_req_channel[6]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_req_channel[6]),
.flit_pend_o (rx_flit_pend_1_1_chi_req_channel[6]),
.flit_v_o (rx_flit_v_1_1_chi_req_channel[6]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_req_channel[6]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_req_channel[6])
);
router_to_local_port router_1_1_device_2_chi_req_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_2_chi_req_channel_valid_i),
.free_credit_vld_i (router_1_1_device_2_chi_req_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_req_channel[6]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_req_channel[6]),
.flit_pend_i (tx_flit_pend_1_1_chi_req_channel[6]),
.flit_v_i (tx_flit_v_1_1_chi_req_channel[6]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_req_channel[6]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_req_channel[6])
);
local_port_to_router router_1_1_device_2_chi_resp_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_2_chi_resp_channel_valid_o),
.free_credit_vld_o (router_1_1_device_2_chi_resp_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_resp_channel[6]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_resp_channel[6]),
.flit_pend_o (rx_flit_pend_1_1_chi_resp_channel[6]),
.flit_v_o (rx_flit_v_1_1_chi_resp_channel[6]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_resp_channel[6]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_resp_channel[6])
);
router_to_local_port router_1_1_device_2_chi_resp_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_2_chi_resp_channel_valid_i),
.free_credit_vld_i (router_1_1_device_2_chi_resp_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_resp_channel[6]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_resp_channel[6]),
.flit_pend_i (tx_flit_pend_1_1_chi_resp_channel[6]),
.flit_v_i (tx_flit_v_1_1_chi_resp_channel[6]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_resp_channel[6]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_resp_channel[6])
);
local_port_to_router router_1_1_device_2_chi_snoop_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_2_chi_snoop_channel_valid_o),
.free_credit_vld_o (router_1_1_device_2_chi_snoop_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_snoop_channel[6]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_snoop_channel[6]),
.flit_pend_o (rx_flit_pend_1_1_chi_snoop_channel[6]),
.flit_v_o (rx_flit_v_1_1_chi_snoop_channel[6]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_snoop_channel[6]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_snoop_channel[6])
);
router_to_local_port router_1_1_device_2_chi_snoop_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_2_chi_snoop_channel_valid_i),
.free_credit_vld_i (router_1_1_device_2_chi_snoop_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_snoop_channel[6]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_snoop_channel[6]),
.flit_pend_i (tx_flit_pend_1_1_chi_snoop_channel[6]),
.flit_v_i (tx_flit_v_1_1_chi_snoop_channel[6]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_snoop_channel[6]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_snoop_channel[6])
);
local_port_to_router router_1_1_device_2_chi_data_channel_local_port_to_router(
.clk (clk),
.rstn (rst),
.flit_vld_i (router_1_1_device_2_chi_data_channel_valid_o),
.free_credit_vld_o (router_1_1_device_2_chi_data_channel_ready_i),
.free_credit_vc_id_o (rx_flit_vc_id_1_1_chi_data_channel[6]),
.look_ahead_routing_o (rx_flit_look_ahead_routing_1_1_chi_data_channel[6]),
.flit_pend_o (rx_flit_pend_1_1_chi_data_channel[6]),
.flit_v_o (rx_flit_v_1_1_chi_data_channel[6]),
.tx_lcrd_v_i (rx_lcrd_v_1_1_chi_data_channel[6]),
.tx_lcrd_id_i (rx_lcrd_id_1_1_chi_data_channel[6])
);
router_to_local_port router_1_1_device_2_chi_data_channel_router_to_local_port(
.clk (clk),
.rstn (rst),
.flit_vld_o (router_1_1_device_2_chi_data_channel_valid_i),
.free_credit_vld_i (router_1_1_device_2_chi_data_channel_ready_o),
.free_credit_vc_id_i (tx_flit_vc_id_1_1_chi_data_channel[6]),
.look_ahead_routing_i (tx_flit_look_ahead_routing_1_1_chi_data_channel[6]),
.flit_pend_i (tx_flit_pend_1_1_chi_data_channel[6]),
.flit_v_i (tx_flit_v_1_1_chi_data_channel[6]),
.tx_lcrd_v_o (tx_lcrd_v_1_1_chi_data_channel[6]),
.tx_lcrd_id_o (tx_lcrd_id_1_1_chi_data_channel[6])
);

vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_0_0),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_0_0),
  .flit_payload_t(flit_payload_t_chi_req_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_0_0),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_0_0),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_0_0),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_0_0),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_0_0),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_0_0),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_0_0),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_0_0),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_0_0),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_0_0),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_0_0),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_0_0),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_0_0),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_0_0),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_0_0),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_0_0_chi_req_channel(
  .rx_flit_pend_i               (rx_flit_pend_0_0_chi_req_channel),
  .rx_flit_v_i                  (rx_flit_v_0_0_chi_req_channel),
  .rx_flit_i                    (rx_flit_0_0_chi_req_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_0_0_chi_req_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_0_0_chi_req_channel),
  .tx_flit_pend_o               (tx_flit_pend_0_0_chi_req_channel),
  .tx_flit_v_o                  (tx_flit_v_0_0_chi_req_channel),
  .tx_flit_o                    (tx_flit_0_0_chi_req_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_0_0_chi_req_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_0_0_chi_req_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_0_0_chi_req_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_0_0_chi_req_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_0_0_chi_req_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_0_0_chi_req_channel),
  .node_id_x_ths_hop_i          (node_id_x_0_0_chi_req_channel),
  .node_id_y_ths_hop_i          (node_id_y_0_0_chi_req_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_0_0),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_0_0),
  .flit_payload_t(flit_payload_t_chi_resp_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_0_0),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_0_0),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_0_0),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_0_0),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_0_0),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_0_0),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_0_0),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_0_0),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_0_0),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_0_0),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_0_0),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_0_0),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_0_0),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_0_0),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_0_0),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_0_0_chi_resp_channel(
  .rx_flit_pend_i               (rx_flit_pend_0_0_chi_resp_channel),
  .rx_flit_v_i                  (rx_flit_v_0_0_chi_resp_channel),
  .rx_flit_i                    (rx_flit_0_0_chi_resp_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_0_0_chi_resp_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_0_0_chi_resp_channel),
  .tx_flit_pend_o               (tx_flit_pend_0_0_chi_resp_channel),
  .tx_flit_v_o                  (tx_flit_v_0_0_chi_resp_channel),
  .tx_flit_o                    (tx_flit_0_0_chi_resp_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_0_0_chi_resp_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_0_0_chi_resp_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_0_0_chi_resp_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_0_0_chi_resp_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_0_0_chi_resp_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_0_0_chi_resp_channel),
  .node_id_x_ths_hop_i          (node_id_x_0_0_chi_resp_channel),
  .node_id_y_ths_hop_i          (node_id_y_0_0_chi_resp_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_0_0),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_0_0),
  .flit_payload_t(flit_payload_t_chi_snoop_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_0_0),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_0_0),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_0_0),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_0_0),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_0_0),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_0_0),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_0_0),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_0_0),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_0_0),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_0_0),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_0_0),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_0_0),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_0_0),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_0_0),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_0_0),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_0_0_chi_snoop_channel(
  .rx_flit_pend_i               (rx_flit_pend_0_0_chi_snoop_channel),
  .rx_flit_v_i                  (rx_flit_v_0_0_chi_snoop_channel),
  .rx_flit_i                    (rx_flit_0_0_chi_snoop_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_0_0_chi_snoop_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_0_0_chi_snoop_channel),
  .tx_flit_pend_o               (tx_flit_pend_0_0_chi_snoop_channel),
  .tx_flit_v_o                  (tx_flit_v_0_0_chi_snoop_channel),
  .tx_flit_o                    (tx_flit_0_0_chi_snoop_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_0_0_chi_snoop_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_0_0_chi_snoop_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_0_0_chi_snoop_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_0_0_chi_snoop_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_0_0_chi_snoop_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_0_0_chi_snoop_channel),
  .node_id_x_ths_hop_i          (node_id_x_0_0_chi_snoop_channel),
  .node_id_y_ths_hop_i          (node_id_y_0_0_chi_snoop_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_0_0),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_0_0),
  .flit_payload_t(flit_payload_t_chi_data_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_0_0),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_0_0),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_0_0),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_0_0),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_0_0),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_0_0),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_0_0),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_0_0),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_0_0),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_0_0),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_0_0),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_0_0),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_0_0),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_0_0),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_0_0),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_0_0_chi_data_channel(
  .rx_flit_pend_i               (rx_flit_pend_0_0_chi_data_channel),
  .rx_flit_v_i                  (rx_flit_v_0_0_chi_data_channel),
  .rx_flit_i                    (rx_flit_0_0_chi_data_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_0_0_chi_data_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_0_0_chi_data_channel),
  .tx_flit_pend_o               (tx_flit_pend_0_0_chi_data_channel),
  .tx_flit_v_o                  (tx_flit_v_0_0_chi_data_channel),
  .tx_flit_o                    (tx_flit_0_0_chi_data_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_0_0_chi_data_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_0_0_chi_data_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_0_0_chi_data_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_0_0_chi_data_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_0_0_chi_data_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_0_0_chi_data_channel),
  .node_id_x_ths_hop_i          (node_id_x_0_0_chi_data_channel),
  .node_id_y_ths_hop_i          (node_id_y_0_0_chi_data_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_0_1),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_0_1),
  .flit_payload_t(flit_payload_t_chi_req_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_0_1),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_0_1),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_0_1),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_0_1),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_0_1),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_0_1),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_0_1),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_0_1),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_0_1),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_0_1),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_0_1),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_0_1),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_0_1),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_0_1),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_0_1),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_0_1_chi_req_channel(
  .rx_flit_pend_i               (rx_flit_pend_0_1_chi_req_channel),
  .rx_flit_v_i                  (rx_flit_v_0_1_chi_req_channel),
  .rx_flit_i                    (rx_flit_0_1_chi_req_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_0_1_chi_req_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_0_1_chi_req_channel),
  .tx_flit_pend_o               (tx_flit_pend_0_1_chi_req_channel),
  .tx_flit_v_o                  (tx_flit_v_0_1_chi_req_channel),
  .tx_flit_o                    (tx_flit_0_1_chi_req_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_0_1_chi_req_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_0_1_chi_req_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_0_1_chi_req_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_0_1_chi_req_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_0_1_chi_req_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_0_1_chi_req_channel),
  .node_id_x_ths_hop_i          (node_id_x_0_1_chi_req_channel),
  .node_id_y_ths_hop_i          (node_id_y_0_1_chi_req_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_0_1),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_0_1),
  .flit_payload_t(flit_payload_t_chi_resp_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_0_1),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_0_1),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_0_1),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_0_1),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_0_1),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_0_1),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_0_1),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_0_1),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_0_1),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_0_1),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_0_1),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_0_1),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_0_1),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_0_1),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_0_1),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_0_1_chi_resp_channel(
  .rx_flit_pend_i               (rx_flit_pend_0_1_chi_resp_channel),
  .rx_flit_v_i                  (rx_flit_v_0_1_chi_resp_channel),
  .rx_flit_i                    (rx_flit_0_1_chi_resp_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_0_1_chi_resp_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_0_1_chi_resp_channel),
  .tx_flit_pend_o               (tx_flit_pend_0_1_chi_resp_channel),
  .tx_flit_v_o                  (tx_flit_v_0_1_chi_resp_channel),
  .tx_flit_o                    (tx_flit_0_1_chi_resp_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_0_1_chi_resp_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_0_1_chi_resp_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_0_1_chi_resp_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_0_1_chi_resp_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_0_1_chi_resp_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_0_1_chi_resp_channel),
  .node_id_x_ths_hop_i          (node_id_x_0_1_chi_resp_channel),
  .node_id_y_ths_hop_i          (node_id_y_0_1_chi_resp_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_0_1),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_0_1),
  .flit_payload_t(flit_payload_t_chi_snoop_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_0_1),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_0_1),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_0_1),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_0_1),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_0_1),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_0_1),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_0_1),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_0_1),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_0_1),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_0_1),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_0_1),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_0_1),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_0_1),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_0_1),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_0_1),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_0_1_chi_snoop_channel(
  .rx_flit_pend_i               (rx_flit_pend_0_1_chi_snoop_channel),
  .rx_flit_v_i                  (rx_flit_v_0_1_chi_snoop_channel),
  .rx_flit_i                    (rx_flit_0_1_chi_snoop_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_0_1_chi_snoop_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_0_1_chi_snoop_channel),
  .tx_flit_pend_o               (tx_flit_pend_0_1_chi_snoop_channel),
  .tx_flit_v_o                  (tx_flit_v_0_1_chi_snoop_channel),
  .tx_flit_o                    (tx_flit_0_1_chi_snoop_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_0_1_chi_snoop_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_0_1_chi_snoop_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_0_1_chi_snoop_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_0_1_chi_snoop_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_0_1_chi_snoop_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_0_1_chi_snoop_channel),
  .node_id_x_ths_hop_i          (node_id_x_0_1_chi_snoop_channel),
  .node_id_y_ths_hop_i          (node_id_y_0_1_chi_snoop_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_0_1),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_0_1),
  .flit_payload_t(flit_payload_t_chi_data_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_0_1),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_0_1),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_0_1),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_0_1),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_0_1),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_0_1),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_0_1),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_0_1),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_0_1),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_0_1),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_0_1),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_0_1),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_0_1),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_0_1),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_0_1),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_0_1_chi_data_channel(
  .rx_flit_pend_i               (rx_flit_pend_0_1_chi_data_channel),
  .rx_flit_v_i                  (rx_flit_v_0_1_chi_data_channel),
  .rx_flit_i                    (rx_flit_0_1_chi_data_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_0_1_chi_data_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_0_1_chi_data_channel),
  .tx_flit_pend_o               (tx_flit_pend_0_1_chi_data_channel),
  .tx_flit_v_o                  (tx_flit_v_0_1_chi_data_channel),
  .tx_flit_o                    (tx_flit_0_1_chi_data_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_0_1_chi_data_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_0_1_chi_data_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_0_1_chi_data_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_0_1_chi_data_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_0_1_chi_data_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_0_1_chi_data_channel),
  .node_id_x_ths_hop_i          (node_id_x_0_1_chi_data_channel),
  .node_id_y_ths_hop_i          (node_id_y_0_1_chi_data_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_1_0),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_1_0),
  .flit_payload_t(flit_payload_t_chi_req_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_1_0),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_1_0),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_1_0),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_1_0),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_1_0),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_1_0),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_1_0),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_1_0),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_1_0),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_1_0),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_1_0),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_1_0),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_1_0),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_1_0),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_1_0),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_1_0_chi_req_channel(
  .rx_flit_pend_i               (rx_flit_pend_1_0_chi_req_channel),
  .rx_flit_v_i                  (rx_flit_v_1_0_chi_req_channel),
  .rx_flit_i                    (rx_flit_1_0_chi_req_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_1_0_chi_req_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_1_0_chi_req_channel),
  .tx_flit_pend_o               (tx_flit_pend_1_0_chi_req_channel),
  .tx_flit_v_o                  (tx_flit_v_1_0_chi_req_channel),
  .tx_flit_o                    (tx_flit_1_0_chi_req_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_1_0_chi_req_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_1_0_chi_req_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_1_0_chi_req_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_1_0_chi_req_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_1_0_chi_req_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_1_0_chi_req_channel),
  .node_id_x_ths_hop_i          (node_id_x_1_0_chi_req_channel),
  .node_id_y_ths_hop_i          (node_id_y_1_0_chi_req_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_1_0),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_1_0),
  .flit_payload_t(flit_payload_t_chi_resp_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_1_0),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_1_0),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_1_0),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_1_0),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_1_0),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_1_0),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_1_0),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_1_0),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_1_0),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_1_0),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_1_0),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_1_0),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_1_0),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_1_0),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_1_0),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_1_0_chi_resp_channel(
  .rx_flit_pend_i               (rx_flit_pend_1_0_chi_resp_channel),
  .rx_flit_v_i                  (rx_flit_v_1_0_chi_resp_channel),
  .rx_flit_i                    (rx_flit_1_0_chi_resp_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_1_0_chi_resp_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_1_0_chi_resp_channel),
  .tx_flit_pend_o               (tx_flit_pend_1_0_chi_resp_channel),
  .tx_flit_v_o                  (tx_flit_v_1_0_chi_resp_channel),
  .tx_flit_o                    (tx_flit_1_0_chi_resp_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_1_0_chi_resp_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_1_0_chi_resp_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_1_0_chi_resp_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_1_0_chi_resp_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_1_0_chi_resp_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_1_0_chi_resp_channel),
  .node_id_x_ths_hop_i          (node_id_x_1_0_chi_resp_channel),
  .node_id_y_ths_hop_i          (node_id_y_1_0_chi_resp_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_1_0),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_1_0),
  .flit_payload_t(flit_payload_t_chi_snoop_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_1_0),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_1_0),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_1_0),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_1_0),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_1_0),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_1_0),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_1_0),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_1_0),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_1_0),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_1_0),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_1_0),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_1_0),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_1_0),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_1_0),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_1_0),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_1_0_chi_snoop_channel(
  .rx_flit_pend_i               (rx_flit_pend_1_0_chi_snoop_channel),
  .rx_flit_v_i                  (rx_flit_v_1_0_chi_snoop_channel),
  .rx_flit_i                    (rx_flit_1_0_chi_snoop_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_1_0_chi_snoop_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_1_0_chi_snoop_channel),
  .tx_flit_pend_o               (tx_flit_pend_1_0_chi_snoop_channel),
  .tx_flit_v_o                  (tx_flit_v_1_0_chi_snoop_channel),
  .tx_flit_o                    (tx_flit_1_0_chi_snoop_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_1_0_chi_snoop_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_1_0_chi_snoop_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_1_0_chi_snoop_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_1_0_chi_snoop_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_1_0_chi_snoop_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_1_0_chi_snoop_channel),
  .node_id_x_ths_hop_i          (node_id_x_1_0_chi_snoop_channel),
  .node_id_y_ths_hop_i          (node_id_y_1_0_chi_snoop_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_1_0),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_1_0),
  .flit_payload_t(flit_payload_t_chi_data_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_1_0),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_1_0),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_1_0),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_1_0),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_1_0),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_1_0),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_1_0),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_1_0),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_1_0),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_1_0),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_1_0),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_1_0),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_1_0),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_1_0),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_1_0),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_1_0_chi_data_channel(
  .rx_flit_pend_i               (rx_flit_pend_1_0_chi_data_channel),
  .rx_flit_v_i                  (rx_flit_v_1_0_chi_data_channel),
  .rx_flit_i                    (rx_flit_1_0_chi_data_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_1_0_chi_data_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_1_0_chi_data_channel),
  .tx_flit_pend_o               (tx_flit_pend_1_0_chi_data_channel),
  .tx_flit_v_o                  (tx_flit_v_1_0_chi_data_channel),
  .tx_flit_o                    (tx_flit_1_0_chi_data_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_1_0_chi_data_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_1_0_chi_data_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_1_0_chi_data_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_1_0_chi_data_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_1_0_chi_data_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_1_0_chi_data_channel),
  .node_id_x_ths_hop_i          (node_id_x_1_0_chi_data_channel),
  .node_id_y_ths_hop_i          (node_id_y_1_0_chi_data_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_1_1),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_1_1),
  .flit_payload_t(flit_payload_t_chi_req_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_1_1),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_1_1),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_1_1),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_1_1),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_1_1),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_1_1),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_1_1),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_1_1),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_1_1),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_1_1),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_1_1),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_1_1),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_1_1),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_1_1),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_1_1),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_1_1_chi_req_channel(
  .rx_flit_pend_i               (rx_flit_pend_1_1_chi_req_channel),
  .rx_flit_v_i                  (rx_flit_v_1_1_chi_req_channel),
  .rx_flit_i                    (rx_flit_1_1_chi_req_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_1_1_chi_req_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_1_1_chi_req_channel),
  .tx_flit_pend_o               (tx_flit_pend_1_1_chi_req_channel),
  .tx_flit_v_o                  (tx_flit_v_1_1_chi_req_channel),
  .tx_flit_o                    (tx_flit_1_1_chi_req_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_1_1_chi_req_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_1_1_chi_req_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_1_1_chi_req_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_1_1_chi_req_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_1_1_chi_req_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_1_1_chi_req_channel),
  .node_id_x_ths_hop_i          (node_id_x_1_1_chi_req_channel),
  .node_id_y_ths_hop_i          (node_id_y_1_1_chi_req_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_1_1),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_1_1),
  .flit_payload_t(flit_payload_t_chi_resp_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_1_1),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_1_1),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_1_1),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_1_1),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_1_1),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_1_1),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_1_1),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_1_1),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_1_1),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_1_1),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_1_1),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_1_1),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_1_1),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_1_1),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_1_1),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_1_1_chi_resp_channel(
  .rx_flit_pend_i               (rx_flit_pend_1_1_chi_resp_channel),
  .rx_flit_v_i                  (rx_flit_v_1_1_chi_resp_channel),
  .rx_flit_i                    (rx_flit_1_1_chi_resp_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_1_1_chi_resp_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_1_1_chi_resp_channel),
  .tx_flit_pend_o               (tx_flit_pend_1_1_chi_resp_channel),
  .tx_flit_v_o                  (tx_flit_v_1_1_chi_resp_channel),
  .tx_flit_o                    (tx_flit_1_1_chi_resp_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_1_1_chi_resp_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_1_1_chi_resp_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_1_1_chi_resp_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_1_1_chi_resp_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_1_1_chi_resp_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_1_1_chi_resp_channel),
  .node_id_x_ths_hop_i          (node_id_x_1_1_chi_resp_channel),
  .node_id_y_ths_hop_i          (node_id_y_1_1_chi_resp_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_1_1),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_1_1),
  .flit_payload_t(flit_payload_t_chi_snoop_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_1_1),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_1_1),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_1_1),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_1_1),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_1_1),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_1_1),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_1_1),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_1_1),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_1_1),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_1_1),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_1_1),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_1_1),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_1_1),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_1_1),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_1_1),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_1_1_chi_snoop_channel(
  .rx_flit_pend_i               (rx_flit_pend_1_1_chi_snoop_channel),
  .rx_flit_v_i                  (rx_flit_v_1_1_chi_snoop_channel),
  .rx_flit_i                    (rx_flit_1_1_chi_snoop_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_1_1_chi_snoop_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_1_1_chi_snoop_channel),
  .tx_flit_pend_o               (tx_flit_pend_1_1_chi_snoop_channel),
  .tx_flit_v_o                  (tx_flit_v_1_1_chi_snoop_channel),
  .tx_flit_o                    (tx_flit_1_1_chi_snoop_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_1_1_chi_snoop_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_1_1_chi_snoop_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_1_1_chi_snoop_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_1_1_chi_snoop_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_1_1_chi_snoop_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_1_1_chi_snoop_channel),
  .node_id_x_ths_hop_i          (node_id_x_1_1_chi_snoop_channel),
  .node_id_y_ths_hop_i          (node_id_y_1_1_chi_snoop_channel),
  .clk    (clk ),
  .rstn   (rst)
);
vnet_router
#(
  .INPUT_PORT_NUM(INPUT_PORT_NUM_1_1),
  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM_1_1),
  .flit_payload_t(flit_payload_t_chi_data_channel),
  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
  .VC_NUM_INPUT_N(VC_NUM_INPUT_N_1_1),
  .VC_NUM_INPUT_S(VC_NUM_INPUT_S_1_1),
  .VC_NUM_INPUT_E(VC_NUM_INPUT_E_1_1),
  .VC_NUM_INPUT_W(VC_NUM_INPUT_W_1_1),
  .VC_NUM_INPUT_L(VC_NUM_INPUT_L_1_1),
  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N_1_1),
  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S_1_1),
  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E_1_1),
  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W_1_1),
  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L_1_1),
  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N_1_1),
  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S_1_1),
  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E_1_1),
  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W_1_1),
  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L_1_1),
  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
)
router_1_1_chi_data_channel(
  .rx_flit_pend_i               (rx_flit_pend_1_1_chi_data_channel),
  .rx_flit_v_i                  (rx_flit_v_1_1_chi_data_channel),
  .rx_flit_i                    (rx_flit_1_1_chi_data_channel),
  .rx_flit_vc_id_i              (rx_flit_vc_id_1_1_chi_data_channel),
  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing_1_1_chi_data_channel),
  .tx_flit_pend_o               (tx_flit_pend_1_1_chi_data_channel),
  .tx_flit_v_o                  (tx_flit_v_1_1_chi_data_channel),
  .tx_flit_o                    (tx_flit_1_1_chi_data_channel),
  .tx_flit_vc_id_o              (tx_flit_vc_id_1_1_chi_data_channel),
  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing_1_1_chi_data_channel),
  .rx_lcrd_v_o                  (rx_lcrd_v_1_1_chi_data_channel),
  .rx_lcrd_id_o                 (rx_lcrd_id_1_1_chi_data_channel),
  .tx_lcrd_v_i                  (tx_lcrd_v_1_1_chi_data_channel),
  .tx_lcrd_id_i                 (tx_lcrd_id_1_1_chi_data_channel),
  .node_id_x_ths_hop_i          (node_id_x_1_1_chi_data_channel),
  .node_id_y_ths_hop_i          (node_id_y_1_1_chi_data_channel),
  .clk    (clk ),
  .rstn   (rst)
);

assign rx_flit_pend_0_0_chi_req_channel[0] = tx_flit_pend_0_1_chi_req_channel[1];
assign rx_flit_v_0_0_chi_req_channel[0] = tx_flit_v_0_1_chi_req_channel[1];
assign rx_flit_0_0_chi_req_channel[0] = tx_flit_0_1_chi_req_channel[1];
assign rx_flit_vc_id_0_0_chi_req_channel[0] = tx_flit_vc_id_0_1_chi_req_channel[1];
assign rx_flit_look_ahead_routing_0_0_chi_req_channel[0] = tx_flit_look_ahead_routing_0_1_chi_req_channel[1];
assign tx_lcrd_v_0_0_chi_req_channel[0] = rx_lcrd_v_0_1_chi_req_channel[1];
assign tx_lcrd_id_0_0_chi_req_channel[0] = rx_lcrd_id_0_1_chi_req_channel[1];
assign rx_flit_pend_0_1_chi_req_channel[1] = tx_flit_pend_0_0_chi_req_channel[0];
assign rx_flit_v_0_1_chi_req_channel[1] = tx_flit_v_0_0_chi_req_channel[0];
assign rx_flit_0_1_chi_req_channel[1] = tx_flit_0_0_chi_req_channel[0];
assign rx_flit_vc_id_0_1_chi_req_channel[1] = tx_flit_vc_id_0_0_chi_req_channel[0];
assign rx_flit_look_ahead_routing_0_1_chi_req_channel[1] = tx_flit_look_ahead_routing_0_0_chi_req_channel[0];
assign tx_lcrd_v_0_1_chi_req_channel[1] = rx_lcrd_v_0_0_chi_req_channel[0];
assign tx_lcrd_id_0_1_chi_req_channel[1] = rx_lcrd_id_0_0_chi_req_channel[0];
assign rx_flit_pend_0_0_chi_resp_channel[0] = tx_flit_pend_0_1_chi_resp_channel[1];
assign rx_flit_v_0_0_chi_resp_channel[0] = tx_flit_v_0_1_chi_resp_channel[1];
assign rx_flit_0_0_chi_resp_channel[0] = tx_flit_0_1_chi_resp_channel[1];
assign rx_flit_vc_id_0_0_chi_resp_channel[0] = tx_flit_vc_id_0_1_chi_resp_channel[1];
assign rx_flit_look_ahead_routing_0_0_chi_resp_channel[0] = tx_flit_look_ahead_routing_0_1_chi_resp_channel[1];
assign tx_lcrd_v_0_0_chi_resp_channel[0] = rx_lcrd_v_0_1_chi_resp_channel[1];
assign tx_lcrd_id_0_0_chi_resp_channel[0] = rx_lcrd_id_0_1_chi_resp_channel[1];
assign rx_flit_pend_0_1_chi_resp_channel[1] = tx_flit_pend_0_0_chi_resp_channel[0];
assign rx_flit_v_0_1_chi_resp_channel[1] = tx_flit_v_0_0_chi_resp_channel[0];
assign rx_flit_0_1_chi_resp_channel[1] = tx_flit_0_0_chi_resp_channel[0];
assign rx_flit_vc_id_0_1_chi_resp_channel[1] = tx_flit_vc_id_0_0_chi_resp_channel[0];
assign rx_flit_look_ahead_routing_0_1_chi_resp_channel[1] = tx_flit_look_ahead_routing_0_0_chi_resp_channel[0];
assign tx_lcrd_v_0_1_chi_resp_channel[1] = rx_lcrd_v_0_0_chi_resp_channel[0];
assign tx_lcrd_id_0_1_chi_resp_channel[1] = rx_lcrd_id_0_0_chi_resp_channel[0];
assign rx_flit_pend_0_0_chi_snoop_channel[0] = tx_flit_pend_0_1_chi_snoop_channel[1];
assign rx_flit_v_0_0_chi_snoop_channel[0] = tx_flit_v_0_1_chi_snoop_channel[1];
assign rx_flit_0_0_chi_snoop_channel[0] = tx_flit_0_1_chi_snoop_channel[1];
assign rx_flit_vc_id_0_0_chi_snoop_channel[0] = tx_flit_vc_id_0_1_chi_snoop_channel[1];
assign rx_flit_look_ahead_routing_0_0_chi_snoop_channel[0] = tx_flit_look_ahead_routing_0_1_chi_snoop_channel[1];
assign tx_lcrd_v_0_0_chi_snoop_channel[0] = rx_lcrd_v_0_1_chi_snoop_channel[1];
assign tx_lcrd_id_0_0_chi_snoop_channel[0] = rx_lcrd_id_0_1_chi_snoop_channel[1];
assign rx_flit_pend_0_1_chi_snoop_channel[1] = tx_flit_pend_0_0_chi_snoop_channel[0];
assign rx_flit_v_0_1_chi_snoop_channel[1] = tx_flit_v_0_0_chi_snoop_channel[0];
assign rx_flit_0_1_chi_snoop_channel[1] = tx_flit_0_0_chi_snoop_channel[0];
assign rx_flit_vc_id_0_1_chi_snoop_channel[1] = tx_flit_vc_id_0_0_chi_snoop_channel[0];
assign rx_flit_look_ahead_routing_0_1_chi_snoop_channel[1] = tx_flit_look_ahead_routing_0_0_chi_snoop_channel[0];
assign tx_lcrd_v_0_1_chi_snoop_channel[1] = rx_lcrd_v_0_0_chi_snoop_channel[0];
assign tx_lcrd_id_0_1_chi_snoop_channel[1] = rx_lcrd_id_0_0_chi_snoop_channel[0];
assign rx_flit_pend_0_0_chi_data_channel[0] = tx_flit_pend_0_1_chi_data_channel[1];
assign rx_flit_v_0_0_chi_data_channel[0] = tx_flit_v_0_1_chi_data_channel[1];
assign rx_flit_0_0_chi_data_channel[0] = tx_flit_0_1_chi_data_channel[1];
assign rx_flit_vc_id_0_0_chi_data_channel[0] = tx_flit_vc_id_0_1_chi_data_channel[1];
assign rx_flit_look_ahead_routing_0_0_chi_data_channel[0] = tx_flit_look_ahead_routing_0_1_chi_data_channel[1];
assign tx_lcrd_v_0_0_chi_data_channel[0] = rx_lcrd_v_0_1_chi_data_channel[1];
assign tx_lcrd_id_0_0_chi_data_channel[0] = rx_lcrd_id_0_1_chi_data_channel[1];
assign rx_flit_pend_0_1_chi_data_channel[1] = tx_flit_pend_0_0_chi_data_channel[0];
assign rx_flit_v_0_1_chi_data_channel[1] = tx_flit_v_0_0_chi_data_channel[0];
assign rx_flit_0_1_chi_data_channel[1] = tx_flit_0_0_chi_data_channel[0];
assign rx_flit_vc_id_0_1_chi_data_channel[1] = tx_flit_vc_id_0_0_chi_data_channel[0];
assign rx_flit_look_ahead_routing_0_1_chi_data_channel[1] = tx_flit_look_ahead_routing_0_0_chi_data_channel[0];
assign tx_lcrd_v_0_1_chi_data_channel[1] = rx_lcrd_v_0_0_chi_data_channel[0];
assign tx_lcrd_id_0_1_chi_data_channel[1] = rx_lcrd_id_0_0_chi_data_channel[0];
assign rx_flit_pend_1_0_chi_req_channel[0] = tx_flit_pend_1_1_chi_req_channel[1];
assign rx_flit_v_1_0_chi_req_channel[0] = tx_flit_v_1_1_chi_req_channel[1];
assign rx_flit_1_0_chi_req_channel[0] = tx_flit_1_1_chi_req_channel[1];
assign rx_flit_vc_id_1_0_chi_req_channel[0] = tx_flit_vc_id_1_1_chi_req_channel[1];
assign rx_flit_look_ahead_routing_1_0_chi_req_channel[0] = tx_flit_look_ahead_routing_1_1_chi_req_channel[1];
assign tx_lcrd_v_1_0_chi_req_channel[0] = rx_lcrd_v_1_1_chi_req_channel[1];
assign tx_lcrd_id_1_0_chi_req_channel[0] = rx_lcrd_id_1_1_chi_req_channel[1];
assign rx_flit_pend_1_1_chi_req_channel[1] = tx_flit_pend_1_0_chi_req_channel[0];
assign rx_flit_v_1_1_chi_req_channel[1] = tx_flit_v_1_0_chi_req_channel[0];
assign rx_flit_1_1_chi_req_channel[1] = tx_flit_1_0_chi_req_channel[0];
assign rx_flit_vc_id_1_1_chi_req_channel[1] = tx_flit_vc_id_1_0_chi_req_channel[0];
assign rx_flit_look_ahead_routing_1_1_chi_req_channel[1] = tx_flit_look_ahead_routing_1_0_chi_req_channel[0];
assign tx_lcrd_v_1_1_chi_req_channel[1] = rx_lcrd_v_1_0_chi_req_channel[0];
assign tx_lcrd_id_1_1_chi_req_channel[1] = rx_lcrd_id_1_0_chi_req_channel[0];
assign rx_flit_pend_1_0_chi_resp_channel[0] = tx_flit_pend_1_1_chi_resp_channel[1];
assign rx_flit_v_1_0_chi_resp_channel[0] = tx_flit_v_1_1_chi_resp_channel[1];
assign rx_flit_1_0_chi_resp_channel[0] = tx_flit_1_1_chi_resp_channel[1];
assign rx_flit_vc_id_1_0_chi_resp_channel[0] = tx_flit_vc_id_1_1_chi_resp_channel[1];
assign rx_flit_look_ahead_routing_1_0_chi_resp_channel[0] = tx_flit_look_ahead_routing_1_1_chi_resp_channel[1];
assign tx_lcrd_v_1_0_chi_resp_channel[0] = rx_lcrd_v_1_1_chi_resp_channel[1];
assign tx_lcrd_id_1_0_chi_resp_channel[0] = rx_lcrd_id_1_1_chi_resp_channel[1];
assign rx_flit_pend_1_1_chi_resp_channel[1] = tx_flit_pend_1_0_chi_resp_channel[0];
assign rx_flit_v_1_1_chi_resp_channel[1] = tx_flit_v_1_0_chi_resp_channel[0];
assign rx_flit_1_1_chi_resp_channel[1] = tx_flit_1_0_chi_resp_channel[0];
assign rx_flit_vc_id_1_1_chi_resp_channel[1] = tx_flit_vc_id_1_0_chi_resp_channel[0];
assign rx_flit_look_ahead_routing_1_1_chi_resp_channel[1] = tx_flit_look_ahead_routing_1_0_chi_resp_channel[0];
assign tx_lcrd_v_1_1_chi_resp_channel[1] = rx_lcrd_v_1_0_chi_resp_channel[0];
assign tx_lcrd_id_1_1_chi_resp_channel[1] = rx_lcrd_id_1_0_chi_resp_channel[0];
assign rx_flit_pend_1_0_chi_snoop_channel[0] = tx_flit_pend_1_1_chi_snoop_channel[1];
assign rx_flit_v_1_0_chi_snoop_channel[0] = tx_flit_v_1_1_chi_snoop_channel[1];
assign rx_flit_1_0_chi_snoop_channel[0] = tx_flit_1_1_chi_snoop_channel[1];
assign rx_flit_vc_id_1_0_chi_snoop_channel[0] = tx_flit_vc_id_1_1_chi_snoop_channel[1];
assign rx_flit_look_ahead_routing_1_0_chi_snoop_channel[0] = tx_flit_look_ahead_routing_1_1_chi_snoop_channel[1];
assign tx_lcrd_v_1_0_chi_snoop_channel[0] = rx_lcrd_v_1_1_chi_snoop_channel[1];
assign tx_lcrd_id_1_0_chi_snoop_channel[0] = rx_lcrd_id_1_1_chi_snoop_channel[1];
assign rx_flit_pend_1_1_chi_snoop_channel[1] = tx_flit_pend_1_0_chi_snoop_channel[0];
assign rx_flit_v_1_1_chi_snoop_channel[1] = tx_flit_v_1_0_chi_snoop_channel[0];
assign rx_flit_1_1_chi_snoop_channel[1] = tx_flit_1_0_chi_snoop_channel[0];
assign rx_flit_vc_id_1_1_chi_snoop_channel[1] = tx_flit_vc_id_1_0_chi_snoop_channel[0];
assign rx_flit_look_ahead_routing_1_1_chi_snoop_channel[1] = tx_flit_look_ahead_routing_1_0_chi_snoop_channel[0];
assign tx_lcrd_v_1_1_chi_snoop_channel[1] = rx_lcrd_v_1_0_chi_snoop_channel[0];
assign tx_lcrd_id_1_1_chi_snoop_channel[1] = rx_lcrd_id_1_0_chi_snoop_channel[0];
assign rx_flit_pend_1_0_chi_data_channel[0] = tx_flit_pend_1_1_chi_data_channel[1];
assign rx_flit_v_1_0_chi_data_channel[0] = tx_flit_v_1_1_chi_data_channel[1];
assign rx_flit_1_0_chi_data_channel[0] = tx_flit_1_1_chi_data_channel[1];
assign rx_flit_vc_id_1_0_chi_data_channel[0] = tx_flit_vc_id_1_1_chi_data_channel[1];
assign rx_flit_look_ahead_routing_1_0_chi_data_channel[0] = tx_flit_look_ahead_routing_1_1_chi_data_channel[1];
assign tx_lcrd_v_1_0_chi_data_channel[0] = rx_lcrd_v_1_1_chi_data_channel[1];
assign tx_lcrd_id_1_0_chi_data_channel[0] = rx_lcrd_id_1_1_chi_data_channel[1];
assign rx_flit_pend_1_1_chi_data_channel[1] = tx_flit_pend_1_0_chi_data_channel[0];
assign rx_flit_v_1_1_chi_data_channel[1] = tx_flit_v_1_0_chi_data_channel[0];
assign rx_flit_1_1_chi_data_channel[1] = tx_flit_1_0_chi_data_channel[0];
assign rx_flit_vc_id_1_1_chi_data_channel[1] = tx_flit_vc_id_1_0_chi_data_channel[0];
assign rx_flit_look_ahead_routing_1_1_chi_data_channel[1] = tx_flit_look_ahead_routing_1_0_chi_data_channel[0];
assign tx_lcrd_v_1_1_chi_data_channel[1] = rx_lcrd_v_1_0_chi_data_channel[0];
assign tx_lcrd_id_1_1_chi_data_channel[1] = rx_lcrd_id_1_0_chi_data_channel[0];
assign rx_flit_pend_0_0_chi_req_channel[2] = tx_flit_pend_1_0_chi_req_channel[3];
assign rx_flit_v_0_0_chi_req_channel[2] = tx_flit_v_1_0_chi_req_channel[3];
assign rx_flit_0_0_chi_req_channel[2] = tx_flit_1_0_chi_req_channel[3];
assign rx_flit_vc_id_0_0_chi_req_channel[2] = tx_flit_vc_id_1_0_chi_req_channel[3];
assign rx_flit_look_ahead_routing_0_0_chi_req_channel[2] = tx_flit_look_ahead_routing_1_0_chi_req_channel[3];
assign tx_lcrd_v_0_0_chi_req_channel[2] = rx_lcrd_v_1_0_chi_req_channel[3];
assign tx_lcrd_id_0_0_chi_req_channel[2] = rx_lcrd_id_1_0_chi_req_channel[3];
assign rx_flit_pend_1_0_chi_req_channel[3] = tx_flit_pend_0_0_chi_req_channel[2];
assign rx_flit_v_1_0_chi_req_channel[3] = tx_flit_v_0_0_chi_req_channel[2];
assign rx_flit_1_0_chi_req_channel[3] = tx_flit_0_0_chi_req_channel[2];
assign rx_flit_vc_id_1_0_chi_req_channel[3] = tx_flit_vc_id_0_0_chi_req_channel[2];
assign rx_flit_look_ahead_routing_1_0_chi_req_channel[3] = tx_flit_look_ahead_routing_0_0_chi_req_channel[2];
assign tx_lcrd_v_1_0_chi_req_channel[3] = rx_lcrd_v_0_0_chi_req_channel[2];
assign tx_lcrd_id_1_0_chi_req_channel[3] = rx_lcrd_id_0_0_chi_req_channel[2];
assign rx_flit_pend_0_0_chi_resp_channel[2] = tx_flit_pend_1_0_chi_resp_channel[3];
assign rx_flit_v_0_0_chi_resp_channel[2] = tx_flit_v_1_0_chi_resp_channel[3];
assign rx_flit_0_0_chi_resp_channel[2] = tx_flit_1_0_chi_resp_channel[3];
assign rx_flit_vc_id_0_0_chi_resp_channel[2] = tx_flit_vc_id_1_0_chi_resp_channel[3];
assign rx_flit_look_ahead_routing_0_0_chi_resp_channel[2] = tx_flit_look_ahead_routing_1_0_chi_resp_channel[3];
assign tx_lcrd_v_0_0_chi_resp_channel[2] = rx_lcrd_v_1_0_chi_resp_channel[3];
assign tx_lcrd_id_0_0_chi_resp_channel[2] = rx_lcrd_id_1_0_chi_resp_channel[3];
assign rx_flit_pend_1_0_chi_resp_channel[3] = tx_flit_pend_0_0_chi_resp_channel[2];
assign rx_flit_v_1_0_chi_resp_channel[3] = tx_flit_v_0_0_chi_resp_channel[2];
assign rx_flit_1_0_chi_resp_channel[3] = tx_flit_0_0_chi_resp_channel[2];
assign rx_flit_vc_id_1_0_chi_resp_channel[3] = tx_flit_vc_id_0_0_chi_resp_channel[2];
assign rx_flit_look_ahead_routing_1_0_chi_resp_channel[3] = tx_flit_look_ahead_routing_0_0_chi_resp_channel[2];
assign tx_lcrd_v_1_0_chi_resp_channel[3] = rx_lcrd_v_0_0_chi_resp_channel[2];
assign tx_lcrd_id_1_0_chi_resp_channel[3] = rx_lcrd_id_0_0_chi_resp_channel[2];
assign rx_flit_pend_0_0_chi_snoop_channel[2] = tx_flit_pend_1_0_chi_snoop_channel[3];
assign rx_flit_v_0_0_chi_snoop_channel[2] = tx_flit_v_1_0_chi_snoop_channel[3];
assign rx_flit_0_0_chi_snoop_channel[2] = tx_flit_1_0_chi_snoop_channel[3];
assign rx_flit_vc_id_0_0_chi_snoop_channel[2] = tx_flit_vc_id_1_0_chi_snoop_channel[3];
assign rx_flit_look_ahead_routing_0_0_chi_snoop_channel[2] = tx_flit_look_ahead_routing_1_0_chi_snoop_channel[3];
assign tx_lcrd_v_0_0_chi_snoop_channel[2] = rx_lcrd_v_1_0_chi_snoop_channel[3];
assign tx_lcrd_id_0_0_chi_snoop_channel[2] = rx_lcrd_id_1_0_chi_snoop_channel[3];
assign rx_flit_pend_1_0_chi_snoop_channel[3] = tx_flit_pend_0_0_chi_snoop_channel[2];
assign rx_flit_v_1_0_chi_snoop_channel[3] = tx_flit_v_0_0_chi_snoop_channel[2];
assign rx_flit_1_0_chi_snoop_channel[3] = tx_flit_0_0_chi_snoop_channel[2];
assign rx_flit_vc_id_1_0_chi_snoop_channel[3] = tx_flit_vc_id_0_0_chi_snoop_channel[2];
assign rx_flit_look_ahead_routing_1_0_chi_snoop_channel[3] = tx_flit_look_ahead_routing_0_0_chi_snoop_channel[2];
assign tx_lcrd_v_1_0_chi_snoop_channel[3] = rx_lcrd_v_0_0_chi_snoop_channel[2];
assign tx_lcrd_id_1_0_chi_snoop_channel[3] = rx_lcrd_id_0_0_chi_snoop_channel[2];
assign rx_flit_pend_0_0_chi_data_channel[2] = tx_flit_pend_1_0_chi_data_channel[3];
assign rx_flit_v_0_0_chi_data_channel[2] = tx_flit_v_1_0_chi_data_channel[3];
assign rx_flit_0_0_chi_data_channel[2] = tx_flit_1_0_chi_data_channel[3];
assign rx_flit_vc_id_0_0_chi_data_channel[2] = tx_flit_vc_id_1_0_chi_data_channel[3];
assign rx_flit_look_ahead_routing_0_0_chi_data_channel[2] = tx_flit_look_ahead_routing_1_0_chi_data_channel[3];
assign tx_lcrd_v_0_0_chi_data_channel[2] = rx_lcrd_v_1_0_chi_data_channel[3];
assign tx_lcrd_id_0_0_chi_data_channel[2] = rx_lcrd_id_1_0_chi_data_channel[3];
assign rx_flit_pend_1_0_chi_data_channel[3] = tx_flit_pend_0_0_chi_data_channel[2];
assign rx_flit_v_1_0_chi_data_channel[3] = tx_flit_v_0_0_chi_data_channel[2];
assign rx_flit_1_0_chi_data_channel[3] = tx_flit_0_0_chi_data_channel[2];
assign rx_flit_vc_id_1_0_chi_data_channel[3] = tx_flit_vc_id_0_0_chi_data_channel[2];
assign rx_flit_look_ahead_routing_1_0_chi_data_channel[3] = tx_flit_look_ahead_routing_0_0_chi_data_channel[2];
assign tx_lcrd_v_1_0_chi_data_channel[3] = rx_lcrd_v_0_0_chi_data_channel[2];
assign tx_lcrd_id_1_0_chi_data_channel[3] = rx_lcrd_id_0_0_chi_data_channel[2];
assign rx_flit_pend_0_1_chi_req_channel[2] = tx_flit_pend_1_1_chi_req_channel[3];
assign rx_flit_v_0_1_chi_req_channel[2] = tx_flit_v_1_1_chi_req_channel[3];
assign rx_flit_0_1_chi_req_channel[2] = tx_flit_1_1_chi_req_channel[3];
assign rx_flit_vc_id_0_1_chi_req_channel[2] = tx_flit_vc_id_1_1_chi_req_channel[3];
assign rx_flit_look_ahead_routing_0_1_chi_req_channel[2] = tx_flit_look_ahead_routing_1_1_chi_req_channel[3];
assign tx_lcrd_v_0_1_chi_req_channel[2] = rx_lcrd_v_1_1_chi_req_channel[3];
assign tx_lcrd_id_0_1_chi_req_channel[2] = rx_lcrd_id_1_1_chi_req_channel[3];
assign rx_flit_pend_1_1_chi_req_channel[3] = tx_flit_pend_0_1_chi_req_channel[2];
assign rx_flit_v_1_1_chi_req_channel[3] = tx_flit_v_0_1_chi_req_channel[2];
assign rx_flit_1_1_chi_req_channel[3] = tx_flit_0_1_chi_req_channel[2];
assign rx_flit_vc_id_1_1_chi_req_channel[3] = tx_flit_vc_id_0_1_chi_req_channel[2];
assign rx_flit_look_ahead_routing_1_1_chi_req_channel[3] = tx_flit_look_ahead_routing_0_1_chi_req_channel[2];
assign tx_lcrd_v_1_1_chi_req_channel[3] = rx_lcrd_v_0_1_chi_req_channel[2];
assign tx_lcrd_id_1_1_chi_req_channel[3] = rx_lcrd_id_0_1_chi_req_channel[2];
assign rx_flit_pend_0_1_chi_resp_channel[2] = tx_flit_pend_1_1_chi_resp_channel[3];
assign rx_flit_v_0_1_chi_resp_channel[2] = tx_flit_v_1_1_chi_resp_channel[3];
assign rx_flit_0_1_chi_resp_channel[2] = tx_flit_1_1_chi_resp_channel[3];
assign rx_flit_vc_id_0_1_chi_resp_channel[2] = tx_flit_vc_id_1_1_chi_resp_channel[3];
assign rx_flit_look_ahead_routing_0_1_chi_resp_channel[2] = tx_flit_look_ahead_routing_1_1_chi_resp_channel[3];
assign tx_lcrd_v_0_1_chi_resp_channel[2] = rx_lcrd_v_1_1_chi_resp_channel[3];
assign tx_lcrd_id_0_1_chi_resp_channel[2] = rx_lcrd_id_1_1_chi_resp_channel[3];
assign rx_flit_pend_1_1_chi_resp_channel[3] = tx_flit_pend_0_1_chi_resp_channel[2];
assign rx_flit_v_1_1_chi_resp_channel[3] = tx_flit_v_0_1_chi_resp_channel[2];
assign rx_flit_1_1_chi_resp_channel[3] = tx_flit_0_1_chi_resp_channel[2];
assign rx_flit_vc_id_1_1_chi_resp_channel[3] = tx_flit_vc_id_0_1_chi_resp_channel[2];
assign rx_flit_look_ahead_routing_1_1_chi_resp_channel[3] = tx_flit_look_ahead_routing_0_1_chi_resp_channel[2];
assign tx_lcrd_v_1_1_chi_resp_channel[3] = rx_lcrd_v_0_1_chi_resp_channel[2];
assign tx_lcrd_id_1_1_chi_resp_channel[3] = rx_lcrd_id_0_1_chi_resp_channel[2];
assign rx_flit_pend_0_1_chi_snoop_channel[2] = tx_flit_pend_1_1_chi_snoop_channel[3];
assign rx_flit_v_0_1_chi_snoop_channel[2] = tx_flit_v_1_1_chi_snoop_channel[3];
assign rx_flit_0_1_chi_snoop_channel[2] = tx_flit_1_1_chi_snoop_channel[3];
assign rx_flit_vc_id_0_1_chi_snoop_channel[2] = tx_flit_vc_id_1_1_chi_snoop_channel[3];
assign rx_flit_look_ahead_routing_0_1_chi_snoop_channel[2] = tx_flit_look_ahead_routing_1_1_chi_snoop_channel[3];
assign tx_lcrd_v_0_1_chi_snoop_channel[2] = rx_lcrd_v_1_1_chi_snoop_channel[3];
assign tx_lcrd_id_0_1_chi_snoop_channel[2] = rx_lcrd_id_1_1_chi_snoop_channel[3];
assign rx_flit_pend_1_1_chi_snoop_channel[3] = tx_flit_pend_0_1_chi_snoop_channel[2];
assign rx_flit_v_1_1_chi_snoop_channel[3] = tx_flit_v_0_1_chi_snoop_channel[2];
assign rx_flit_1_1_chi_snoop_channel[3] = tx_flit_0_1_chi_snoop_channel[2];
assign rx_flit_vc_id_1_1_chi_snoop_channel[3] = tx_flit_vc_id_0_1_chi_snoop_channel[2];
assign rx_flit_look_ahead_routing_1_1_chi_snoop_channel[3] = tx_flit_look_ahead_routing_0_1_chi_snoop_channel[2];
assign tx_lcrd_v_1_1_chi_snoop_channel[3] = rx_lcrd_v_0_1_chi_snoop_channel[2];
assign tx_lcrd_id_1_1_chi_snoop_channel[3] = rx_lcrd_id_0_1_chi_snoop_channel[2];
assign rx_flit_pend_0_1_chi_data_channel[2] = tx_flit_pend_1_1_chi_data_channel[3];
assign rx_flit_v_0_1_chi_data_channel[2] = tx_flit_v_1_1_chi_data_channel[3];
assign rx_flit_0_1_chi_data_channel[2] = tx_flit_1_1_chi_data_channel[3];
assign rx_flit_vc_id_0_1_chi_data_channel[2] = tx_flit_vc_id_1_1_chi_data_channel[3];
assign rx_flit_look_ahead_routing_0_1_chi_data_channel[2] = tx_flit_look_ahead_routing_1_1_chi_data_channel[3];
assign tx_lcrd_v_0_1_chi_data_channel[2] = rx_lcrd_v_1_1_chi_data_channel[3];
assign tx_lcrd_id_0_1_chi_data_channel[2] = rx_lcrd_id_1_1_chi_data_channel[3];
assign rx_flit_pend_1_1_chi_data_channel[3] = tx_flit_pend_0_1_chi_data_channel[2];
assign rx_flit_v_1_1_chi_data_channel[3] = tx_flit_v_0_1_chi_data_channel[2];
assign rx_flit_1_1_chi_data_channel[3] = tx_flit_0_1_chi_data_channel[2];
assign rx_flit_vc_id_1_1_chi_data_channel[3] = tx_flit_vc_id_0_1_chi_data_channel[2];
assign rx_flit_look_ahead_routing_1_1_chi_data_channel[3] = tx_flit_look_ahead_routing_0_1_chi_data_channel[2];
assign tx_lcrd_v_1_1_chi_data_channel[3] = rx_lcrd_v_0_1_chi_data_channel[2];
assign tx_lcrd_id_1_1_chi_data_channel[3] = rx_lcrd_id_0_1_chi_data_channel[2];
assign rx_flit_pend_0_1_chi_req_channel[0] = '0;
assign rx_flit_v_0_1_chi_req_channel[0] = '0;
assign rx_flit_0_1_chi_req_channel[0] = '0;
assign rx_flit_vc_id_0_1_chi_req_channel[0] = '0;
assign rx_flit_look_ahead_routing_0_1_chi_req_channel[0] = '0;
assign tx_lcrd_v_0_1_chi_req_channel[0] = '0;
assign tx_lcrd_id_0_1_chi_req_channel[0] = '0;
assign rx_flit_pend_0_0_chi_req_channel[1] = '0;
assign rx_flit_v_0_0_chi_req_channel[1] = '0;
assign rx_flit_0_0_chi_req_channel[1] = '0;
assign rx_flit_vc_id_0_0_chi_req_channel[1] = '0;
assign rx_flit_look_ahead_routing_0_0_chi_req_channel[1] = '0;
assign tx_lcrd_v_0_0_chi_req_channel[1] = '0;
assign tx_lcrd_id_0_0_chi_req_channel[1] = '0;
assign rx_flit_pend_0_1_chi_resp_channel[0] = '0;
assign rx_flit_v_0_1_chi_resp_channel[0] = '0;
assign rx_flit_0_1_chi_resp_channel[0] = '0;
assign rx_flit_vc_id_0_1_chi_resp_channel[0] = '0;
assign rx_flit_look_ahead_routing_0_1_chi_resp_channel[0] = '0;
assign tx_lcrd_v_0_1_chi_resp_channel[0] = '0;
assign tx_lcrd_id_0_1_chi_resp_channel[0] = '0;
assign rx_flit_pend_0_0_chi_resp_channel[1] = '0;
assign rx_flit_v_0_0_chi_resp_channel[1] = '0;
assign rx_flit_0_0_chi_resp_channel[1] = '0;
assign rx_flit_vc_id_0_0_chi_resp_channel[1] = '0;
assign rx_flit_look_ahead_routing_0_0_chi_resp_channel[1] = '0;
assign tx_lcrd_v_0_0_chi_resp_channel[1] = '0;
assign tx_lcrd_id_0_0_chi_resp_channel[1] = '0;
assign rx_flit_pend_0_1_chi_snoop_channel[0] = '0;
assign rx_flit_v_0_1_chi_snoop_channel[0] = '0;
assign rx_flit_0_1_chi_snoop_channel[0] = '0;
assign rx_flit_vc_id_0_1_chi_snoop_channel[0] = '0;
assign rx_flit_look_ahead_routing_0_1_chi_snoop_channel[0] = '0;
assign tx_lcrd_v_0_1_chi_snoop_channel[0] = '0;
assign tx_lcrd_id_0_1_chi_snoop_channel[0] = '0;
assign rx_flit_pend_0_0_chi_snoop_channel[1] = '0;
assign rx_flit_v_0_0_chi_snoop_channel[1] = '0;
assign rx_flit_0_0_chi_snoop_channel[1] = '0;
assign rx_flit_vc_id_0_0_chi_snoop_channel[1] = '0;
assign rx_flit_look_ahead_routing_0_0_chi_snoop_channel[1] = '0;
assign tx_lcrd_v_0_0_chi_snoop_channel[1] = '0;
assign tx_lcrd_id_0_0_chi_snoop_channel[1] = '0;
assign rx_flit_pend_0_1_chi_data_channel[0] = '0;
assign rx_flit_v_0_1_chi_data_channel[0] = '0;
assign rx_flit_0_1_chi_data_channel[0] = '0;
assign rx_flit_vc_id_0_1_chi_data_channel[0] = '0;
assign rx_flit_look_ahead_routing_0_1_chi_data_channel[0] = '0;
assign tx_lcrd_v_0_1_chi_data_channel[0] = '0;
assign tx_lcrd_id_0_1_chi_data_channel[0] = '0;
assign rx_flit_pend_0_0_chi_data_channel[1] = '0;
assign rx_flit_v_0_0_chi_data_channel[1] = '0;
assign rx_flit_0_0_chi_data_channel[1] = '0;
assign rx_flit_vc_id_0_0_chi_data_channel[1] = '0;
assign rx_flit_look_ahead_routing_0_0_chi_data_channel[1] = '0;
assign tx_lcrd_v_0_0_chi_data_channel[1] = '0;
assign tx_lcrd_id_0_0_chi_data_channel[1] = '0;
assign rx_flit_pend_1_1_chi_req_channel[0] = '0;
assign rx_flit_v_1_1_chi_req_channel[0] = '0;
assign rx_flit_1_1_chi_req_channel[0] = '0;
assign rx_flit_vc_id_1_1_chi_req_channel[0] = '0;
assign rx_flit_look_ahead_routing_1_1_chi_req_channel[0] = '0;
assign tx_lcrd_v_1_1_chi_req_channel[0] = '0;
assign tx_lcrd_id_1_1_chi_req_channel[0] = '0;
assign rx_flit_pend_1_0_chi_req_channel[1] = '0;
assign rx_flit_v_1_0_chi_req_channel[1] = '0;
assign rx_flit_1_0_chi_req_channel[1] = '0;
assign rx_flit_vc_id_1_0_chi_req_channel[1] = '0;
assign rx_flit_look_ahead_routing_1_0_chi_req_channel[1] = '0;
assign tx_lcrd_v_1_0_chi_req_channel[1] = '0;
assign tx_lcrd_id_1_0_chi_req_channel[1] = '0;
assign rx_flit_pend_1_1_chi_resp_channel[0] = '0;
assign rx_flit_v_1_1_chi_resp_channel[0] = '0;
assign rx_flit_1_1_chi_resp_channel[0] = '0;
assign rx_flit_vc_id_1_1_chi_resp_channel[0] = '0;
assign rx_flit_look_ahead_routing_1_1_chi_resp_channel[0] = '0;
assign tx_lcrd_v_1_1_chi_resp_channel[0] = '0;
assign tx_lcrd_id_1_1_chi_resp_channel[0] = '0;
assign rx_flit_pend_1_0_chi_resp_channel[1] = '0;
assign rx_flit_v_1_0_chi_resp_channel[1] = '0;
assign rx_flit_1_0_chi_resp_channel[1] = '0;
assign rx_flit_vc_id_1_0_chi_resp_channel[1] = '0;
assign rx_flit_look_ahead_routing_1_0_chi_resp_channel[1] = '0;
assign tx_lcrd_v_1_0_chi_resp_channel[1] = '0;
assign tx_lcrd_id_1_0_chi_resp_channel[1] = '0;
assign rx_flit_pend_1_1_chi_snoop_channel[0] = '0;
assign rx_flit_v_1_1_chi_snoop_channel[0] = '0;
assign rx_flit_1_1_chi_snoop_channel[0] = '0;
assign rx_flit_vc_id_1_1_chi_snoop_channel[0] = '0;
assign rx_flit_look_ahead_routing_1_1_chi_snoop_channel[0] = '0;
assign tx_lcrd_v_1_1_chi_snoop_channel[0] = '0;
assign tx_lcrd_id_1_1_chi_snoop_channel[0] = '0;
assign rx_flit_pend_1_0_chi_snoop_channel[1] = '0;
assign rx_flit_v_1_0_chi_snoop_channel[1] = '0;
assign rx_flit_1_0_chi_snoop_channel[1] = '0;
assign rx_flit_vc_id_1_0_chi_snoop_channel[1] = '0;
assign rx_flit_look_ahead_routing_1_0_chi_snoop_channel[1] = '0;
assign tx_lcrd_v_1_0_chi_snoop_channel[1] = '0;
assign tx_lcrd_id_1_0_chi_snoop_channel[1] = '0;
assign rx_flit_pend_1_1_chi_data_channel[0] = '0;
assign rx_flit_v_1_1_chi_data_channel[0] = '0;
assign rx_flit_1_1_chi_data_channel[0] = '0;
assign rx_flit_vc_id_1_1_chi_data_channel[0] = '0;
assign rx_flit_look_ahead_routing_1_1_chi_data_channel[0] = '0;
assign tx_lcrd_v_1_1_chi_data_channel[0] = '0;
assign tx_lcrd_id_1_1_chi_data_channel[0] = '0;
assign rx_flit_pend_1_0_chi_data_channel[1] = '0;
assign rx_flit_v_1_0_chi_data_channel[1] = '0;
assign rx_flit_1_0_chi_data_channel[1] = '0;
assign rx_flit_vc_id_1_0_chi_data_channel[1] = '0;
assign rx_flit_look_ahead_routing_1_0_chi_data_channel[1] = '0;
assign tx_lcrd_v_1_0_chi_data_channel[1] = '0;
assign tx_lcrd_id_1_0_chi_data_channel[1] = '0;
assign rx_flit_pend_1_0_chi_req_channel[2] = '0;
assign rx_flit_v_1_0_chi_req_channel[2] = '0;
assign rx_flit_1_0_chi_req_channel[2] = '0;
assign rx_flit_vc_id_1_0_chi_req_channel[2] = '0;
assign rx_flit_look_ahead_routing_1_0_chi_req_channel[2] = '0;
assign tx_lcrd_v_1_0_chi_req_channel[2] = '0;
assign tx_lcrd_id_1_0_chi_req_channel[2] = '0;
assign rx_flit_pend_0_0_chi_req_channel[3] = '0;
assign rx_flit_v_0_0_chi_req_channel[3] = '0;
assign rx_flit_0_0_chi_req_channel[3] = '0;
assign rx_flit_vc_id_0_0_chi_req_channel[3] = '0;
assign rx_flit_look_ahead_routing_0_0_chi_req_channel[3] = '0;
assign tx_lcrd_v_0_0_chi_req_channel[3] = '0;
assign tx_lcrd_id_0_0_chi_req_channel[3] = '0;
assign rx_flit_pend_1_0_chi_resp_channel[2] = '0;
assign rx_flit_v_1_0_chi_resp_channel[2] = '0;
assign rx_flit_1_0_chi_resp_channel[2] = '0;
assign rx_flit_vc_id_1_0_chi_resp_channel[2] = '0;
assign rx_flit_look_ahead_routing_1_0_chi_resp_channel[2] = '0;
assign tx_lcrd_v_1_0_chi_resp_channel[2] = '0;
assign tx_lcrd_id_1_0_chi_resp_channel[2] = '0;
assign rx_flit_pend_0_0_chi_resp_channel[3] = '0;
assign rx_flit_v_0_0_chi_resp_channel[3] = '0;
assign rx_flit_0_0_chi_resp_channel[3] = '0;
assign rx_flit_vc_id_0_0_chi_resp_channel[3] = '0;
assign rx_flit_look_ahead_routing_0_0_chi_resp_channel[3] = '0;
assign tx_lcrd_v_0_0_chi_resp_channel[3] = '0;
assign tx_lcrd_id_0_0_chi_resp_channel[3] = '0;
assign rx_flit_pend_1_0_chi_snoop_channel[2] = '0;
assign rx_flit_v_1_0_chi_snoop_channel[2] = '0;
assign rx_flit_1_0_chi_snoop_channel[2] = '0;
assign rx_flit_vc_id_1_0_chi_snoop_channel[2] = '0;
assign rx_flit_look_ahead_routing_1_0_chi_snoop_channel[2] = '0;
assign tx_lcrd_v_1_0_chi_snoop_channel[2] = '0;
assign tx_lcrd_id_1_0_chi_snoop_channel[2] = '0;
assign rx_flit_pend_0_0_chi_snoop_channel[3] = '0;
assign rx_flit_v_0_0_chi_snoop_channel[3] = '0;
assign rx_flit_0_0_chi_snoop_channel[3] = '0;
assign rx_flit_vc_id_0_0_chi_snoop_channel[3] = '0;
assign rx_flit_look_ahead_routing_0_0_chi_snoop_channel[3] = '0;
assign tx_lcrd_v_0_0_chi_snoop_channel[3] = '0;
assign tx_lcrd_id_0_0_chi_snoop_channel[3] = '0;
assign rx_flit_pend_1_0_chi_data_channel[2] = '0;
assign rx_flit_v_1_0_chi_data_channel[2] = '0;
assign rx_flit_1_0_chi_data_channel[2] = '0;
assign rx_flit_vc_id_1_0_chi_data_channel[2] = '0;
assign rx_flit_look_ahead_routing_1_0_chi_data_channel[2] = '0;
assign tx_lcrd_v_1_0_chi_data_channel[2] = '0;
assign tx_lcrd_id_1_0_chi_data_channel[2] = '0;
assign rx_flit_pend_0_0_chi_data_channel[3] = '0;
assign rx_flit_v_0_0_chi_data_channel[3] = '0;
assign rx_flit_0_0_chi_data_channel[3] = '0;
assign rx_flit_vc_id_0_0_chi_data_channel[3] = '0;
assign rx_flit_look_ahead_routing_0_0_chi_data_channel[3] = '0;
assign tx_lcrd_v_0_0_chi_data_channel[3] = '0;
assign tx_lcrd_id_0_0_chi_data_channel[3] = '0;
assign rx_flit_pend_1_1_chi_req_channel[2] = '0;
assign rx_flit_v_1_1_chi_req_channel[2] = '0;
assign rx_flit_1_1_chi_req_channel[2] = '0;
assign rx_flit_vc_id_1_1_chi_req_channel[2] = '0;
assign rx_flit_look_ahead_routing_1_1_chi_req_channel[2] = '0;
assign tx_lcrd_v_1_1_chi_req_channel[2] = '0;
assign tx_lcrd_id_1_1_chi_req_channel[2] = '0;
assign rx_flit_pend_0_1_chi_req_channel[3] = '0;
assign rx_flit_v_0_1_chi_req_channel[3] = '0;
assign rx_flit_0_1_chi_req_channel[3] = '0;
assign rx_flit_vc_id_0_1_chi_req_channel[3] = '0;
assign rx_flit_look_ahead_routing_0_1_chi_req_channel[3] = '0;
assign tx_lcrd_v_0_1_chi_req_channel[3] = '0;
assign tx_lcrd_id_0_1_chi_req_channel[3] = '0;
assign rx_flit_pend_1_1_chi_resp_channel[2] = '0;
assign rx_flit_v_1_1_chi_resp_channel[2] = '0;
assign rx_flit_1_1_chi_resp_channel[2] = '0;
assign rx_flit_vc_id_1_1_chi_resp_channel[2] = '0;
assign rx_flit_look_ahead_routing_1_1_chi_resp_channel[2] = '0;
assign tx_lcrd_v_1_1_chi_resp_channel[2] = '0;
assign tx_lcrd_id_1_1_chi_resp_channel[2] = '0;
assign rx_flit_pend_0_1_chi_resp_channel[3] = '0;
assign rx_flit_v_0_1_chi_resp_channel[3] = '0;
assign rx_flit_0_1_chi_resp_channel[3] = '0;
assign rx_flit_vc_id_0_1_chi_resp_channel[3] = '0;
assign rx_flit_look_ahead_routing_0_1_chi_resp_channel[3] = '0;
assign tx_lcrd_v_0_1_chi_resp_channel[3] = '0;
assign tx_lcrd_id_0_1_chi_resp_channel[3] = '0;
assign rx_flit_pend_1_1_chi_snoop_channel[2] = '0;
assign rx_flit_v_1_1_chi_snoop_channel[2] = '0;
assign rx_flit_1_1_chi_snoop_channel[2] = '0;
assign rx_flit_vc_id_1_1_chi_snoop_channel[2] = '0;
assign rx_flit_look_ahead_routing_1_1_chi_snoop_channel[2] = '0;
assign tx_lcrd_v_1_1_chi_snoop_channel[2] = '0;
assign tx_lcrd_id_1_1_chi_snoop_channel[2] = '0;
assign rx_flit_pend_0_1_chi_snoop_channel[3] = '0;
assign rx_flit_v_0_1_chi_snoop_channel[3] = '0;
assign rx_flit_0_1_chi_snoop_channel[3] = '0;
assign rx_flit_vc_id_0_1_chi_snoop_channel[3] = '0;
assign rx_flit_look_ahead_routing_0_1_chi_snoop_channel[3] = '0;
assign tx_lcrd_v_0_1_chi_snoop_channel[3] = '0;
assign tx_lcrd_id_0_1_chi_snoop_channel[3] = '0;
assign rx_flit_pend_1_1_chi_data_channel[2] = '0;
assign rx_flit_v_1_1_chi_data_channel[2] = '0;
assign rx_flit_1_1_chi_data_channel[2] = '0;
assign rx_flit_vc_id_1_1_chi_data_channel[2] = '0;
assign rx_flit_look_ahead_routing_1_1_chi_data_channel[2] = '0;
assign tx_lcrd_v_1_1_chi_data_channel[2] = '0;
assign tx_lcrd_id_1_1_chi_data_channel[2] = '0;
assign rx_flit_pend_0_1_chi_data_channel[3] = '0;
assign rx_flit_v_0_1_chi_data_channel[3] = '0;
assign rx_flit_0_1_chi_data_channel[3] = '0;
assign rx_flit_vc_id_0_1_chi_data_channel[3] = '0;
assign rx_flit_look_ahead_routing_0_1_chi_data_channel[3] = '0;
assign tx_lcrd_v_0_1_chi_data_channel[3] = '0;
assign tx_lcrd_id_0_1_chi_data_channel[3] = '0;
endmodule
