module tb_mesh
import rvh_noc_pkg::*;
import v_noc_pkg::*;
#(
  // mesh parameters
  parameter  NODE_NUM_X_DIMESION = 2,
  parameter  NODE_NUM_Y_DIMESION = 2,
  
  // router parameters
  parameter  INPUT_PORT_NUM = INPUT_PORT_NUMBER,
  parameter  OUTPUT_PORT_NUM = OUTPUT_PORT_NUMBER,
  parameter  LOCAL_PORT_NUM  = INPUT_PORT_NUM-4,
  parameter type flit_payload_t = logic[FLIT_LENGTH-1:0],

  // parameter  QOS_VC_NUM_PER_INPUT = QOS_VC_NUM_PER_INPUT,

  parameter VC_NUM_INPUT_N = 1+LOCAL_PORT_NUM+QOS_VC_NUM_PER_INPUT,
  parameter VC_NUM_INPUT_S = 1+LOCAL_PORT_NUM+QOS_VC_NUM_PER_INPUT,
  parameter VC_NUM_INPUT_E = 3+LOCAL_PORT_NUM+QOS_VC_NUM_PER_INPUT,
  parameter VC_NUM_INPUT_W = 3+LOCAL_PORT_NUM+QOS_VC_NUM_PER_INPUT,
`ifdef ALLOW_SAME_ROUTER_L2L_TRANSFER
  parameter  VC_NUM_INPUT_L = 4+LOCAL_PORT_NUM-1+QOS_VC_NUM_PER_INPUT,
`else
  parameter  VC_NUM_INPUT_L = 4+QOS_VC_NUM_PER_INPUT,
`endif
  parameter  SA_GLOBAL_INPUT_NUM_N = 3+LOCAL_PORT_NUM,
  parameter  SA_GLOBAL_INPUT_NUM_S = 3+LOCAL_PORT_NUM,
  parameter  SA_GLOBAL_INPUT_NUM_E = 1+LOCAL_PORT_NUM,
  parameter  SA_GLOBAL_INPUT_NUM_W = 1+LOCAL_PORT_NUM,
`ifdef ALLOW_SAME_ROUTER_L2L_TRANSFER
  parameter  SA_GLOBAL_INPUT_NUM_L = 4+LOCAL_PORT_NUM-1,
`else
  parameter  SA_GLOBAL_INPUT_NUM_L = 4,
`endif
  parameter  VC_NUM_OUTPUT_N = 1+LOCAL_PORT_NUM+QOS_VC_NUM_PER_INPUT,
  parameter  VC_NUM_OUTPUT_S = 1+LOCAL_PORT_NUM+QOS_VC_NUM_PER_INPUT,
  parameter  VC_NUM_OUTPUT_E = 3+LOCAL_PORT_NUM+QOS_VC_NUM_PER_INPUT,
  parameter  VC_NUM_OUTPUT_W = 3+LOCAL_PORT_NUM+QOS_VC_NUM_PER_INPUT,
  parameter  VC_NUM_OUTPUT_L = 1,
  parameter  VC_DEPTH_INPUT_N = VC_DEPTH_MAX,
  parameter  VC_DEPTH_INPUT_S = VC_DEPTH_MAX,
  parameter  VC_DEPTH_INPUT_E = VC_DEPTH_MAX,
  parameter  VC_DEPTH_INPUT_W = VC_DEPTH_MAX,
  parameter  VC_DEPTH_INPUT_L = VC_DEPTH_MAX,

  parameter int  V_CPU_DATA_REQ_NUM_PER_CORE_PER_CYCLE = 3,
  parameter int  V_CPU_INST_REQ_NUM_PER_CORE_PER_CYCLE = 1,
  parameter real V_L1D_MISS_RATE = 10, // %
  parameter real V_L1I_MISS_RATE = 10, // %
  parameter real V_L2_MISS_RATE  = 100, // %
  parameter int  V_CORE_NUM = NODE_NUM_X_DIMESION * NODE_NUM_Y_DIMESION * LOCAL_PORT_NUM,
  parameter int  V_CACHE_MISS_ALL_CORE_PER_CYCLE = V_CORE_NUM,
  // parameter int  V_CACHE_MISS_ALL_CORE_PER_CYCLE = ((V_CPU_DATA_REQ_NUM_PER_CORE_PER_CYCLE * V_CORE_NUM) * V_L1D_MISS_RATE +
  //                                                   (V_CPU_INST_REQ_NUM_PER_CORE_PER_CYCLE * V_CORE_NUM) * V_L1I_MISS_RATE) *
  //                                                   V_L2_MISS_RATE / 100 / 100,
  

  // test_generator parameters
  parameter TEST_CASE_MESH_RANDOM   = 1,                      // random sender and receiver
  parameter TEST_CASE_MESH_DIAGONAL = !TEST_CASE_MESH_RANDOM, // from (0,0) to (NODE_NUM_X_DIMESION-1, NODE_NUM_Y_DIMESION-1)
  
  parameter RANDOM_BIT_NUM          = 168, // 32,64,80,128,168
  
  parameter SCOREBOARD_TIMEOUT_EN        = !TEST_CASE_MESH_DIAGONAL,
  parameter SCOREBOARD_TIMEOUT_THRESHOLD = 16384,
  
  parameter TEST_CASE_NUM_PER_CYCLE = RANDOM_BIT_NUM/3,
  // parameter TEST_CASE_NUM_PER_CYCLE = V_CACHE_MISS_ALL_CORE_PER_CYCLE < 1                ? 1                : 
  //                                     V_CACHE_MISS_ALL_CORE_PER_CYCLE > RANDOM_BIT_NUM/3 ? RANDOM_BIT_NUM/3 : // no more than RANDOM_BIT_NUM/3
  //                                     V_CACHE_MISS_ALL_CORE_PER_CYCLE,

  // scoreboard parameters
  parameter SCOREBOARD_ENTRY_NUM_PER_SENDER = 64,

  // sender parameters
  parameter SENDER_NUM = NODE_NUM_X_DIMESION*NODE_NUM_Y_DIMESION*LOCAL_PORT_NUM,
  parameter SENDER_FLIT_BUFFER_DEPTH = 512,

  parameter SENDER_TIMEOUT_EN        = !TEST_CASE_MESH_DIAGONAL,
  parameter SENDER_TIMEOUT_THRESHOLD = 16384,

  // receiver parameters
  parameter RECEIVER_NUM = SENDER_NUM,

  // overall longest test cycle
  parameter LONGEST_TEST_CYCLE = 100000
)
(

);

  genvar i, j, k;

  // Ports
  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][OUTPUT_PORT_NUM-1:0]                       tx_flit_pend;
  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][OUTPUT_PORT_NUM-1:0]                       tx_flit_v;
  flit_payload_t  [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][OUTPUT_PORT_NUM-1:0]                       tx_flit;
  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][OUTPUT_PORT_NUM-1:0][VC_ID_NUM_MAX_W-1:0]  tx_flit_vc_id;
  io_port_t       [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][OUTPUT_PORT_NUM-1:0]                       tx_flit_look_ahead_routing;

  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][OUTPUT_PORT_NUM-1:0]                       rx_flit_pend;
  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][OUTPUT_PORT_NUM-1:0]                       rx_flit_v;
  flit_payload_t  [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][OUTPUT_PORT_NUM-1:0]                       rx_flit;
  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][OUTPUT_PORT_NUM-1:0][VC_ID_NUM_MAX_W-1:0]  rx_flit_vc_id;
  io_port_t       [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][OUTPUT_PORT_NUM-1:0]                       rx_flit_look_ahead_routing;

  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][INPUT_PORT_NUM-1:0]                        tx_lcrd_v;
  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][INPUT_PORT_NUM-1:0][VC_ID_NUM_MAX_W-1:0]   tx_lcrd_id;

  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][INPUT_PORT_NUM-1:0]                        rx_lcrd_v;
  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][INPUT_PORT_NUM-1:0][VC_ID_NUM_MAX_W-1:0]   rx_lcrd_id;


  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][NodeID_X_Width-1:0]                        node_id_x;
  logic           [NODE_NUM_X_DIMESION-1:0][NODE_NUM_Y_DIMESION-1:0][NodeID_Y_Width-1:0]                        node_id_y;

  logic clk;
  logic rstn;


  // generate mesh routers
  generate
    for(i = 0; i < NODE_NUM_X_DIMESION; i++) begin: gen_mesh_routers_x_dimesion
      for(j = 0; j < NODE_NUM_Y_DIMESION; j++) begin: gen_mesh_routers_y_dimesion
        vnet_router
        #(
          .INPUT_PORT_NUM(INPUT_PORT_NUM ),
          .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM ),
          .flit_payload_t(flit_payload_t),
          .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),
          .VC_NUM_INPUT_N(VC_NUM_INPUT_N ),
          .VC_NUM_INPUT_S(VC_NUM_INPUT_S ),
          .VC_NUM_INPUT_E(VC_NUM_INPUT_E ),
          .VC_NUM_INPUT_W(VC_NUM_INPUT_W ),
          .VC_NUM_INPUT_L(VC_NUM_INPUT_L ),
          .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N ),
          .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S ),
          .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E ),
          .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W ),
          .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L ),
          .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N ),
          .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S ),
          .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E ),
          .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W ),
          .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L ),
          .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),
          .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),
          .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),
          .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),
          .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )
        )
        vnet_router_dut (
          .rx_flit_pend_i               (rx_flit_pend               [i][j] ),
          .rx_flit_v_i                  (rx_flit_v                  [i][j] ),
          .rx_flit_i                    (rx_flit                    [i][j] ),
          .rx_flit_vc_id_i              (rx_flit_vc_id              [i][j] ),
          .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing [i][j] ),

          .tx_flit_pend_o               (tx_flit_pend               [i][j] ),
          .tx_flit_v_o                  (tx_flit_v                  [i][j] ),
          .tx_flit_o                    (tx_flit                    [i][j] ),
          .tx_flit_vc_id_o              (tx_flit_vc_id              [i][j] ),
          .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing [i][j] ),

          .rx_lcrd_v_o                  (rx_lcrd_v                  [i][j] ),
          .rx_lcrd_id_o                 (rx_lcrd_id                 [i][j] ),

          .tx_lcrd_v_i                  (tx_lcrd_v                  [i][j] ),
          .tx_lcrd_id_i                 (tx_lcrd_id                 [i][j] ),

          .node_id_x_ths_hop_i          (node_id_x                  [i][j] ),
          .node_id_y_ths_hop_i          (node_id_y                  [i][j] ),

          .clk    (clk ),
          .rstn   (rstn)
        );
      end
    end
  endgenerate

  // assign node id to each router
  generate
    for(i = 0; i < NODE_NUM_X_DIMESION; i++) begin: gen_node_id_x_x_dimesion
      for(j = 0; j < NODE_NUM_Y_DIMESION; j++) begin: gen_node_id_x_y_dimesion
        assign node_id_x [i][j] = i;
      end
    end
    for(i = 0; i < NODE_NUM_Y_DIMESION; i++) begin: gen_node_id_y_y_dimesion
      for(j = 0; j < NODE_NUM_X_DIMESION; j++) begin: gen_node_id_y_x_dimesion
        assign node_id_y [j][i] = i;
      end
    end
  endgenerate

  // connect each router together
  generate
    for(i = 0; i < NODE_NUM_X_DIMESION; i++) begin: gen_connect_routers_ns_x_dimesion
      for(j = 0; j < NODE_NUM_Y_DIMESION-1; j++) begin: gen_connect_routers_ns_y_dimesion
        // connect N inport to S outport
        assign rx_flit_pend               [i][j][0]   = tx_flit_pend                [i][j+1][1];
        assign rx_flit_v                  [i][j][0]   = tx_flit_v                   [i][j+1][1];
        assign rx_flit                    [i][j][0]   = tx_flit                     [i][j+1][1];
        assign rx_flit_vc_id              [i][j][0]   = tx_flit_vc_id               [i][j+1][1];
        assign rx_flit_look_ahead_routing [i][j][0]   = tx_flit_look_ahead_routing  [i][j+1][1];

        assign tx_lcrd_v                  [i][j][0]   = rx_lcrd_v                   [i][j+1][1];
        assign tx_lcrd_id                 [i][j][0]   = rx_lcrd_id                  [i][j+1][1];

        // connect S inport to N outport
        assign rx_flit_pend               [i][j+1][1] = tx_flit_pend                [i][j][0];
        assign rx_flit_v                  [i][j+1][1] = tx_flit_v                   [i][j][0];
        assign rx_flit                    [i][j+1][1] = tx_flit                     [i][j][0];
        assign rx_flit_vc_id              [i][j+1][1] = tx_flit_vc_id               [i][j][0];
        assign rx_flit_look_ahead_routing [i][j+1][1] = tx_flit_look_ahead_routing  [i][j][0];

        assign tx_lcrd_v                  [i][j+1][1] = rx_lcrd_v                   [i][j][0];
        assign tx_lcrd_id                 [i][j+1][1] = rx_lcrd_id                  [i][j][0];
      end
    end
  endgenerate

  generate
    for(i = 0; i < NODE_NUM_Y_DIMESION; i++) begin: gen_connect_routers_ew_x_dimesion
      for(j = 0; j < NODE_NUM_X_DIMESION-1; j++) begin: gen_connect_routers_ew_y_dimesion
        // connect E inport to W outport
        assign rx_flit_pend               [j][i][2]   = tx_flit_pend                [j+1][i][3];
        assign rx_flit_v                  [j][i][2]   = tx_flit_v                   [j+1][i][3];
        assign rx_flit                    [j][i][2]   = tx_flit                     [j+1][i][3];
        assign rx_flit_vc_id              [j][i][2]   = tx_flit_vc_id               [j+1][i][3];
        assign rx_flit_look_ahead_routing [j][i][2]   = tx_flit_look_ahead_routing  [j+1][i][3];

        assign tx_lcrd_v                  [j][i][2]   = rx_lcrd_v                   [j+1][i][3];
        assign tx_lcrd_id                 [j][i][2]   = rx_lcrd_id                  [j+1][i][3];

        // connect W inport to E outport
        assign rx_flit_pend               [j+1][i][3] = tx_flit_pend                [j][i][2];
        assign rx_flit_v                  [j+1][i][3] = tx_flit_v                   [j][i][2];
        assign rx_flit                    [j+1][i][3] = tx_flit                     [j][i][2];
        assign rx_flit_vc_id              [j+1][i][3] = tx_flit_vc_id               [j][i][2];
        assign rx_flit_look_ahead_routing [j+1][i][3] = tx_flit_look_ahead_routing  [j][i][2];

        assign tx_lcrd_v                  [j+1][i][3] = rx_lcrd_v                   [j][i][2];
        assign tx_lcrd_id                 [j+1][i][3] = rx_lcrd_id                  [j][i][2];
      end
    end
  endgenerate

  // other unused non-local ports, assign router rx to 0
  generate
    for(i = 0; i < NODE_NUM_X_DIMESION; i++) begin: gen_unused_non_local_ports_x_dimesion
      assign rx_flit_pend               [i][NODE_NUM_Y_DIMESION-1][0]   = '0;
      assign rx_flit_v                  [i][NODE_NUM_Y_DIMESION-1][0]   = '0;
      assign rx_flit                    [i][NODE_NUM_Y_DIMESION-1][0]   = '0;
      assign rx_flit_vc_id              [i][NODE_NUM_Y_DIMESION-1][0]   = '0;
      assign rx_flit_look_ahead_routing [i][NODE_NUM_Y_DIMESION-1][0]   = '0;

      assign tx_lcrd_v                  [i][NODE_NUM_Y_DIMESION-1][0]   = '0;
      assign tx_lcrd_id                 [i][NODE_NUM_Y_DIMESION-1][0]   = '0;


      assign rx_flit_pend               [i][0][1]                       = '0;
      assign rx_flit_v                  [i][0][1]                       = '0;
      assign rx_flit                    [i][0][1]                       = '0;
      assign rx_flit_vc_id              [i][0][1]                       = '0;
      assign rx_flit_look_ahead_routing [i][0][1]                       = '0;

      assign tx_lcrd_v                  [i][0][1]                       = '0;
      assign tx_lcrd_id                 [i][0][1]                       = '0;
    end

    for(i = 0; i < NODE_NUM_Y_DIMESION; i++) begin: gen_unused_non_local_ports_y_dimesion
      // connect E inport to W outport
      assign rx_flit_pend               [NODE_NUM_X_DIMESION-1][i][2]   = '0;
      assign rx_flit_v                  [NODE_NUM_X_DIMESION-1][i][2]   = '0;
      assign rx_flit                    [NODE_NUM_X_DIMESION-1][i][2]   = '0;
      assign rx_flit_vc_id              [NODE_NUM_X_DIMESION-1][i][2]   = '0;
      assign rx_flit_look_ahead_routing [NODE_NUM_X_DIMESION-1][i][2]   = '0;

      assign tx_lcrd_v                  [NODE_NUM_X_DIMESION-1][i][2]   = '0;
      assign tx_lcrd_id                 [NODE_NUM_X_DIMESION-1][i][2]   = '0;

      // connect W inport to E outport
      assign rx_flit_pend               [0][i][3]                       = '0;
      assign rx_flit_v                  [0][i][3]                       = '0;
      assign rx_flit                    [0][i][3]                       = '0;
      assign rx_flit_vc_id              [0][i][3]                       = '0;
      assign rx_flit_look_ahead_routing [0][i][3]                       = '0;

      assign tx_lcrd_v                  [0][i][3]                       = '0;
      assign tx_lcrd_id                 [0][i][3]                       = '0;
    end
  endgenerate

endmodule
