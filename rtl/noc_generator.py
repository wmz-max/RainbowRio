import json
import os
 
if __name__ == '__main__':

    with open('noc_config.json','r') as j:
        config = json.load(j)
    noc_type = config['noc']['noc_type']
    node_num_x_dimension = config['noc']['node_num_x_dimension']
    node_num_y_dimension = config['noc']['node_num_y_dimension']
    qos_vc_num_per_input = config['noc']['qos_vc_num_per_input']
    vc_depth = config['noc']['vc_depth']
    req_channel_flit_size = config['chi']['req_channel_flit_size']
    resp_channel_flit_size = config['chi']['resp_channel_flit_size']
    snoop_channel_flit_size = config['chi']['snoop_channel_flit_size']
    data_channel_flit_size = config['chi']['data_channel_flit_size']
    channel_name = ['chi_req_channel','chi_resp_channel','chi_snoop_channel','chi_data_channel']
    local_device_num = []
    for i in range(int(node_num_x_dimension * node_num_y_dimension)):
            router_local_device_num = config['router' + str(i)]['local_device_num']
            local_device_num.append(router_local_device_num)




    router_list = []
    for i in range(int(node_num_x_dimension * node_num_y_dimension)):
        router_list.append(config['router'+str(i)]['local_device_num'])

    parameter_print_list = []
    parameter_print_list.append('module noc_top();')
    parameter_print_list.append('')
    parameter_print_list.append('logic clk;')
    parameter_print_list.append('logic rst;')
    parameter_print_list.append('localparam QOS_VC_NUM_PER_INPUT = ' + str(qos_vc_num_per_input) + ';')
    parameter_print_list.append('localparam VC_DEPTH_INPUT_N = ' + str(vc_depth) + ';')
    parameter_print_list.append('localparam VC_DEPTH_INPUT_S = ' + str(vc_depth) + ';')
    parameter_print_list.append('localparam VC_DEPTH_INPUT_E = ' + str(vc_depth) + ';')
    parameter_print_list.append('localparam VC_DEPTH_INPUT_W = ' + str(vc_depth) + ';')
    parameter_print_list.append('localparam VC_DEPTH_INPUT_L = 1;')
    parameter_print_list.append('localparam type flit_payload_t_chi_req_channel' + ' = ' + 'logic[' + str(req_channel_flit_size) + '-1:0];')
    parameter_print_list.append('localparam type flit_payload_t_chi_resp_channel' + ' = ' + 'logic[' + str(resp_channel_flit_size) + '-1:0];')
    parameter_print_list.append('localparam type flit_payload_t_chi_snoop_channel' + ' = ' + 'logic[' + str(snoop_channel_flit_size) + '-1:0];')
    parameter_print_list.append('localparam type flit_payload_t_chi_data_channel' + ' = ' + 'logic[' + str(data_channel_flit_size) + '-1:0];')
    parameter_print_list.append('VC_ID_NUM_MAX_W = ' + str(vc_depth) +';')
    parameter_print_list.append('NodeID_X_Width = ' + str(node_num_x_dimension))
    parameter_print_list.append('NodeID_Y_Width = ' + str(node_num_y_dimension))
    node_num = 0



    for i in range(int(node_num_x_dimension)):
        for j in range(int(node_num_y_dimension)):
            parameter_print_list.append('localparam INPUT_PORT_NUM' + '_' + str(i) + '_' + str(j) + ' = ' + str(4+local_device_num[node_num]) + ';')
            parameter_print_list.append('localparam OUTPUT_PORT_NUM' + '_' + str(i) + '_' + str(j) + ' = ' + str(4+local_device_num[node_num]) + ';')
            parameter_print_list.append('localparam VC_NUM_INPUT_N' + '_' + str(i) + '_' + str(j) + ' = ' + str(1 + local_device_num[node_num] + qos_vc_num_per_input) + ';')
            parameter_print_list.append('localparam VC_NUM_INPUT_S' + '_' + str(i) + '_' + str(j) + ' = ' + str(1 + local_device_num[node_num] + qos_vc_num_per_input) + ';')
            parameter_print_list.append('localparam VC_NUM_INPUT_E' + '_' + str(i) + '_' + str(j) + ' = ' + str(3 + local_device_num[node_num] + qos_vc_num_per_input) + ';')
            parameter_print_list.append('localparam VC_NUM_INPUT_W' + '_' + str(i) + '_' + str(j) + ' = ' + str(3 + local_device_num[node_num] + qos_vc_num_per_input) + ';')
            parameter_print_list.append('localparam VC_NUM_INPUT_L' + '_' + str(i) + '_' + str(j) + ' = ' + str(3 + local_device_num[node_num] + qos_vc_num_per_input) + ';')
            parameter_print_list.append('localparam VC_NUM_OUTPUT_N' + '_' + str(i) + '_' + str(j) + ' = ' + str(1 + local_device_num[node_num] + qos_vc_num_per_input) + ';')
            parameter_print_list.append('localparam VC_NUM_OUTPUT_S' + '_' + str(i) + '_' + str(j) + ' = ' + str(1 + local_device_num[node_num] + qos_vc_num_per_input) + ';')
            parameter_print_list.append('localparam VC_NUM_OUTPUT_E' + '_' + str(i) + '_' + str(j) + ' = ' + str(3 + local_device_num[node_num] + qos_vc_num_per_input) + ';')
            parameter_print_list.append('localparam VC_NUM_OUTPUT_W' + '_' + str(i) + '_' + str(j) + ' = ' + str(3 + local_device_num[node_num] + qos_vc_num_per_input) + ';')
            parameter_print_list.append('localparam VC_NUM_OUTPUT_L' + '_' + str(i) + '_' + str(j) + ' = ' + str(1) + ';')
            parameter_print_list.append('localparam SA_GLOBAL_INPUT_NUM_N' + '_' + str(i) + '_' + str(j) + ' = ' + str(3 + local_device_num[node_num]) + ';')
            parameter_print_list.append('localparam SA_GLOBAL_INPUT_NUM_S' + '_' + str(i) + '_' + str(j) + ' = ' + str(3 + local_device_num[node_num]) + ';')
            parameter_print_list.append('localparam SA_GLOBAL_INPUT_NUM_E' + '_' + str(i) + '_' + str(j) + ' = ' + str(1 + local_device_num[node_num]) + ';')
            parameter_print_list.append('localparam SA_GLOBAL_INPUT_NUM_W' + '_' + str(i) + '_' + str(j) + ' = ' + str(1 + local_device_num[node_num]) + ';')
            parameter_print_list.append('localparam SA_GLOBAL_INPUT_NUM_L' + '_' + str(i) + '_' + str(j) + ' = ' + str(3 + local_device_num[node_num]) + ';')
            node_num += 1
                

    for i in range(int(node_num_x_dimension)):
        for j in range(int(node_num_y_dimension)):
            for k in range(4):
                parameter_print_list.append('logic                                 [' + 'INPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0]          '  + '                  rx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('logic                                 [' + 'INPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0]          '  + '                  rx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('flit_payload_t_' + channel_name[k] + '        [' + 'INPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0]          '  + '                  rx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('logic                                 [' + 'INPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0][VC_ID_NUM_MAX_W -1:0]      '  + 'rx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('io_port_t                             [' + 'INPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0]          '  + '                  rx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('logic                                 [' + 'OUTPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0]          '  + '                 tx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('logic                                 [' + 'OUTPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0]          '  + '                 tx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('flit_payload_t_' + channel_name[k] +'        [' + 'OUTPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0]          '  + '                 tx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('logic                                 [' + 'OUTPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0][VC_ID_NUM_MAX_W -1:0]     '  + 'tx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('io_port_t                             [' + 'OUTPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0]          '  + '                 tx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('logic                                 [' + 'INPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0]          '  + '                  rx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('logic                                 [' + 'INPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0][VC_ID_NUM_MAX_W -1:0]     '  + ' rx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('logic                                 [' + 'OUTPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0]          '  + '                 tx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('logic                                 [' + 'OUTPUT_PORT_NUM_' + str(i) + '_' + str(j) + ' -1:0][VC_ID_NUM_MAX_W -1:0]'  + '     tx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ';')
                parameter_print_list.append('logic                                 [' + 'NodeID_X_Width -1:0]          '  + '                      node_id_x' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ' = ' + str(i) + ';')
                parameter_print_list.append('logic                                 [' + 'NodeID_Y_Width -1:0]          '  + '                      node_id_y' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + ' = ' + str(j) + ';')

    device_print_list = []
    local_connect_print_list = []
    router_num = 0
    for i in range(int(node_num_x_dimension)):
        for j in range(int(node_num_y_dimension)):
            router_local_device_num = config['router' + str(router_num)]['local_device_num']
            for k in range(router_local_device_num):
                local_device_name = config['router' + str(router_num)]['device' + str(k)]['name']
                device_print_list.append(str(local_device_name) + ' ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) +  '(') 
                if config['router' + str(router_num)]['device' + str(k)]['req_rx'] == 1 :
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_valid_o;')
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_ready_i;')
                    device_print_list.append('.' + channel_name[0] + '_valid_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_valid_o' + '),')
                    device_print_list.append('.' + channel_name[0] + '_ready_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_ready_i' + '),')
                    device_print_list.append('.' + channel_name[0] + '_flit_o (' + 'rx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('local_port_to_router ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_local_port_to_router' + '(')
                    local_connect_print_list.append('.clk (clk),')
                    local_connect_print_list.append('.rstn (rst),')
                    local_connect_print_list.append('.flit_vld_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_valid_o),')
                    local_connect_print_list.append('.free_credit_vld_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_ready_i),')
                    local_connect_print_list.append('.free_credit_vc_id_o (' + 'rx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.look_ahead_routing_o (' + 'rx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_pend_o (' + 'rx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_v_o (' + 'rx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_v_i (' + 'rx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_id_i (' + 'rx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + '])')
                    local_connect_print_list.append(');')
                if config['router' + str(router_num)]['device' + str(k)]['req_tx'] == 1 :
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_valid_i;')
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_ready_o;')
                    device_print_list.append('.' + channel_name[0] + '_valid_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_valid_i' + '),')
                    device_print_list.append('.' + channel_name[0] + '_ready_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_ready_o' + '),')
                    device_print_list.append('.' + channel_name[0] + '_flit_i (' + 'tx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('router_to_local_port ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0]  + '_router_to_local_port' + '(')
                    local_connect_print_list.append('.clk (clk),')
                    local_connect_print_list.append('.rstn (rst),')
                    local_connect_print_list.append('.flit_vld_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_valid_i),')
                    local_connect_print_list.append('.free_credit_vld_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[0] + '_ready_o),')
                    local_connect_print_list.append('.free_credit_vc_id_i (' + 'tx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.look_ahead_routing_i (' + 'tx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_pend_i (' + 'tx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_v_i (' + 'tx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_v_o (' + 'tx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_id_o (' + 'tx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[0] + '[' + str(k + 4) + '])')
                    local_connect_print_list.append(');')
                if config['router' + str(router_num)]['device' + str(k)]['resp_rx'] == 1 :
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_valid_o;')
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_ready_i;')
                    device_print_list.append('.' + channel_name[1] + '_valid_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_valid_o' + '),')
                    device_print_list.append('.' + channel_name[1] + '_ready_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_ready_i' + '),')
                    device_print_list.append('.' + channel_name[1] + '_flit_o (' + 'rx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('local_port_to_router ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1]  + '_local_port_to_router' + '(')
                    local_connect_print_list.append('.clk (clk),')
                    local_connect_print_list.append('.rstn (rst),')
                    local_connect_print_list.append('.flit_vld_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_valid_o),')
                    local_connect_print_list.append('.free_credit_vld_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_ready_i),')
                    local_connect_print_list.append('.free_credit_vc_id_o (' + 'rx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.look_ahead_routing_o (' + 'rx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_pend_o (' + 'rx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_v_o (' + 'rx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_v_i (' + 'rx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_id_i (' + 'rx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + '])')
                    local_connect_print_list.append(');')
                if config['router' + str(router_num)]['device' + str(k)]['resp_tx'] == 1 :
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_valid_i;')
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_ready_o;')
                    device_print_list.append('.' + channel_name[1] + '_valid_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_valid_i' + '),')
                    device_print_list.append('.' + channel_name[1] + '_ready_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_ready_o' + '),')
                    device_print_list.append('.' + channel_name[1] + '_flit_i (' + 'tx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('router_to_local_port ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1]  + '_router_to_local_port' + '(')
                    local_connect_print_list.append('.clk (clk),')
                    local_connect_print_list.append('.rstn (rst),')
                    local_connect_print_list.append('.flit_vld_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_valid_i),')
                    local_connect_print_list.append('.free_credit_vld_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[1] + '_ready_o),')
                    local_connect_print_list.append('.free_credit_vc_id_i (' + 'tx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.look_ahead_routing_i (' + 'tx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_pend_i (' + 'tx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_v_i (' + 'tx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_v_o (' + 'tx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_id_o (' + 'tx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[1] + '[' + str(k + 4) + '])')
                    local_connect_print_list.append(');')                
                if config['router' + str(router_num)]['device' + str(k)]['snoop_rx'] == 1 :
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_valid_o;')
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_ready_i;')
                    device_print_list.append('.' + channel_name[2] + '_valid_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_valid_o' + '),')
                    device_print_list.append('.' + channel_name[2] + '_ready_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_ready_i' + '),')
                    device_print_list.append('.' + channel_name[2] + '_flit_o (' + 'rx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('local_port_to_router ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2]  + '_local_port_to_router' + '(')
                    local_connect_print_list.append('.clk (clk),')
                    local_connect_print_list.append('.rstn (rst),')
                    local_connect_print_list.append('.flit_vld_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_valid_o),')
                    local_connect_print_list.append('.free_credit_vld_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_ready_i),')
                    local_connect_print_list.append('.free_credit_vc_id_o (' + 'rx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.look_ahead_routing_o (' + 'rx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_pend_o (' + 'rx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_v_o (' + 'rx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_v_i (' + 'rx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_id_i (' + 'rx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + '])')
                    local_connect_print_list.append(');')
                if config['router' + str(router_num)]['device' + str(k)]['snoop_tx'] == 1 :
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_valid_i;')
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_ready_o;')
                    device_print_list.append('.' + channel_name[2] + '_valid_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_valid_i' + '),')
                    device_print_list.append('.' + channel_name[2] + '_ready_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_ready_o' + '),')
                    device_print_list.append('.' + channel_name[2] + '_flit_i (' + 'tx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('router_to_local_port ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2]  + '_router_to_local_port' + '(')
                    local_connect_print_list.append('.clk (clk),')
                    local_connect_print_list.append('.rstn (rst),')
                    local_connect_print_list.append('.flit_vld_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_valid_i),')
                    local_connect_print_list.append('.free_credit_vld_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[2] + '_ready_o),')
                    local_connect_print_list.append('.free_credit_vc_id_i (' + 'tx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.look_ahead_routing_i (' + 'tx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_pend_i (' + 'tx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_v_i (' + 'tx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_v_o (' + 'tx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_id_o (' + 'tx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[2] + '[' + str(k + 4) + '])')
                    local_connect_print_list.append(');')                
                if config['router' + str(router_num)]['device' + str(k)]['data_rx'] == 1 :
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_valid_o;')
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_ready_i;')
                    device_print_list.append('.' + channel_name[3] + '_valid_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_valid_o' + '),')
                    device_print_list.append('.' + channel_name[3] + '_ready_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_ready_i' + '),')
                    device_print_list.append('.' + channel_name[3] + '_flit_o (' + 'rx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('local_port_to_router ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3]  + '_local_port_to_router' + '(')
                    local_connect_print_list.append('.clk (clk),')
                    local_connect_print_list.append('.rstn (rst),')
                    local_connect_print_list.append('.flit_vld_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_valid_o),')
                    local_connect_print_list.append('.free_credit_vld_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_ready_i),')
                    local_connect_print_list.append('.free_credit_vc_id_o (' + 'rx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.look_ahead_routing_o (' + 'rx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_pend_o (' + 'rx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_v_o (' + 'rx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_v_i (' + 'rx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_id_i (' + 'rx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + '])')
                    local_connect_print_list.append(');')
                if config['router' + str(router_num)]['device' + str(k)]['data_tx'] == 1 :
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_valid_i;')
                    parameter_print_list.append('logic ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_ready_o;')
                    device_print_list.append('.' + channel_name[3] + '_valid_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_valid_i' + '),')
                    device_print_list.append('.' + channel_name[3] + '_ready_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_ready_o' + '),')
                    device_print_list.append('.' + channel_name[3] + '_flit_i (' + 'tx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('router_to_local_port ' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3]  + '_router_to_local_port' + '(')
                    local_connect_print_list.append('.clk (clk),')
                    local_connect_print_list.append('.rstn (rst),')
                    local_connect_print_list.append('.flit_vld_o (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_valid_i),')
                    local_connect_print_list.append('.free_credit_vld_i (' + 'router_' + str(i) + '_' + str(j) + '_device_' + str(k) + '_' + channel_name[3] + '_ready_o),')
                    local_connect_print_list.append('.free_credit_vc_id_i (' + 'tx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.look_ahead_routing_i (' + 'tx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_pend_i (' + 'tx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.flit_v_i (' + 'tx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_v_o (' + 'tx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + ']),')
                    local_connect_print_list.append('.tx_lcrd_id_o (' + 'tx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[3] + '[' + str(k + 4) + '])')
                    local_connect_print_list.append(');')                
                device_print_list.append('.clk (clk),')
                device_print_list.append('.rst (rst)')
                device_print_list.append(');')
                
            router_num += 1


    router_generator_print_list = []
    for i in range(int(node_num_x_dimension)):
        for j in range(int(node_num_y_dimension)):
            for k in range(4):
                router_generator_print_list.append('vnet_router')
                router_generator_print_list.append('#(')
                router_generator_print_list.append('  .INPUT_PORT_NUM(INPUT_PORT_NUM' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .OUTPUT_PORT_NUM(OUTPUT_PORT_NUM' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .flit_payload_t(flit_payload_t_' + channel_name[k] + '),')
                router_generator_print_list.append('  .QOS_VC_NUM_PER_INPUT(QOS_VC_NUM_PER_INPUT),')
                router_generator_print_list.append('  .VC_NUM_INPUT_N(VC_NUM_INPUT_N' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .VC_NUM_INPUT_S(VC_NUM_INPUT_S' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .VC_NUM_INPUT_E(VC_NUM_INPUT_E' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .VC_NUM_INPUT_W(VC_NUM_INPUT_W' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .VC_NUM_INPUT_L(VC_NUM_INPUT_L' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .SA_GLOBAL_INPUT_NUM_N(SA_GLOBAL_INPUT_NUM_N' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .SA_GLOBAL_INPUT_NUM_S(SA_GLOBAL_INPUT_NUM_S' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .SA_GLOBAL_INPUT_NUM_E(SA_GLOBAL_INPUT_NUM_E' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .SA_GLOBAL_INPUT_NUM_W(SA_GLOBAL_INPUT_NUM_W' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .SA_GLOBAL_INPUT_NUM_L(SA_GLOBAL_INPUT_NUM_L' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .VC_NUM_OUTPUT_N(VC_NUM_OUTPUT_N' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .VC_NUM_OUTPUT_S(VC_NUM_OUTPUT_S' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .VC_NUM_OUTPUT_E(VC_NUM_OUTPUT_E' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .VC_NUM_OUTPUT_W(VC_NUM_OUTPUT_W' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .VC_NUM_OUTPUT_L(VC_NUM_OUTPUT_L' + '_' + str(i) + '_' + str(j) + '),')
                router_generator_print_list.append('  .VC_DEPTH_INPUT_N(VC_DEPTH_INPUT_N ),')
                router_generator_print_list.append('  .VC_DEPTH_INPUT_S(VC_DEPTH_INPUT_S ),')
                router_generator_print_list.append('  .VC_DEPTH_INPUT_E(VC_DEPTH_INPUT_E ),')
                router_generator_print_list.append('  .VC_DEPTH_INPUT_W(VC_DEPTH_INPUT_W ),')
                router_generator_print_list.append('  .VC_DEPTH_INPUT_L(VC_DEPTH_INPUT_L )')
                router_generator_print_list.append(')')
                router_generator_print_list.append('router' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] +'(')
                router_generator_print_list.append('  .rx_flit_pend_i               (rx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .rx_flit_v_i                  (rx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .rx_flit_i                    (rx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .rx_flit_vc_id_i              (rx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .rx_flit_look_ahead_routing_i (rx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .tx_flit_pend_o               (tx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .tx_flit_v_o                  (tx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .tx_flit_o                    (tx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .tx_flit_vc_id_o              (tx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .tx_flit_look_ahead_routing_o (tx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .rx_lcrd_v_o                  (rx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .rx_lcrd_id_o                 (rx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .tx_lcrd_v_i                  (tx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .tx_lcrd_id_i                 (tx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .node_id_x_ths_hop_i          (node_id_x' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .node_id_y_ths_hop_i          (node_id_y' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '),')
                router_generator_print_list.append('  .clk    (clk ),')
                router_generator_print_list.append('  .rstn   (rst)')
                router_generator_print_list.append(');')

    line_generator_print_list = []

    for i in range(int(node_num_x_dimension)):
        for j in range(int(node_num_y_dimension) - 1):
            for k in range(4):      
                line_generator_print_list.append('assign rx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ' = ' + 'tx_flit_pend' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ';')
                line_generator_print_list.append('assign rx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ' = ' + 'tx_flit_v' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ';')
                line_generator_print_list.append('assign rx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ' = ' + 'tx_flit' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ';')
                line_generator_print_list.append('assign rx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ' = ' + 'tx_flit_vc_id' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ';')
                line_generator_print_list.append('assign rx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ' = ' + 'tx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ';')
                line_generator_print_list.append('assign tx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ' = ' + 'rx_lcrd_v' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ';')
                line_generator_print_list.append('assign tx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ' = ' + 'rx_lcrd_id' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ';')
                line_generator_print_list.append('assign rx_flit_pend' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ' = ' + 'tx_flit_pend' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ';')
                line_generator_print_list.append('assign rx_flit_v' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ' = ' + 'tx_flit_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ';')
                line_generator_print_list.append('assign rx_flit' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ' = ' + 'tx_flit' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ';')
                line_generator_print_list.append('assign rx_flit_vc_id' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ' = ' + 'tx_flit_vc_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ';')
                line_generator_print_list.append('assign rx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ' = ' + 'tx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ';')
                line_generator_print_list.append('assign tx_lcrd_v' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ' = ' + 'rx_lcrd_v' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ';')
                line_generator_print_list.append('assign tx_lcrd_id' + '_' + str(i) + '_' + str(j+1) + '_' + channel_name[k] + '[1]' + ' = ' + 'rx_lcrd_id' + '_' + str(i) + '_' + str(j) + '_' + channel_name[k] + '[0]' + ';')

    for i in range(int(node_num_y_dimension)):
        for j in range(int(node_num_x_dimension) - 1):
            for k in range(4):      
                line_generator_print_list.append('assign rx_flit_pend' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + 'tx_flit_pend' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ';')
                line_generator_print_list.append('assign rx_flit_v' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + 'tx_flit_v' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ';')
                line_generator_print_list.append('assign rx_flit' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + 'tx_flit' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ';')
                line_generator_print_list.append('assign rx_flit_vc_id' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + 'tx_flit_vc_id' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ';')
                line_generator_print_list.append('assign rx_flit_look_ahead_routing' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + 'tx_flit_look_ahead_routing' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ';')
                line_generator_print_list.append('assign tx_lcrd_v' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + 'rx_lcrd_v' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ';')
                line_generator_print_list.append('assign tx_lcrd_id' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + 'rx_lcrd_id' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ';')
                line_generator_print_list.append('assign rx_flit_pend' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + 'tx_flit_pend' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ';')
                line_generator_print_list.append('assign rx_flit_v' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + 'tx_flit_v' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ';')
                line_generator_print_list.append('assign rx_flit' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + 'tx_flit' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ';')
                line_generator_print_list.append('assign rx_flit_vc_id' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + 'tx_flit_vc_id' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ';')
                line_generator_print_list.append('assign rx_flit_look_ahead_routing' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + 'tx_flit_look_ahead_routing' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ';')
                line_generator_print_list.append('assign tx_lcrd_v' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + 'rx_lcrd_v' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ';')
                line_generator_print_list.append('assign tx_lcrd_id' + '_' + str(j+1) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + 'rx_lcrd_id' + '_' + str(j) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ';')

    for i in range(int(node_num_x_dimension)):
        for k in range(4):
            line_generator_print_list.append('assign rx_flit_pend' + '_' + str(i) + '_' + str(int(node_num_y_dimension) - 1) + '_' + channel_name[k] + '[0]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_v' + '_' + str(i) + '_' + str(int(node_num_y_dimension) - 1) + '_' + channel_name[k] + '[0]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit' + '_' + str(i) + '_' + str(int(node_num_y_dimension) - 1) + '_' + channel_name[k] + '[0]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_vc_id' + '_' + str(i) + '_' + str(int(node_num_y_dimension) - 1) + '_' + channel_name[k] + '[0]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(int(node_num_y_dimension) - 1) + '_' + channel_name[k] + '[0]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign tx_lcrd_v' + '_' + str(i) + '_' + str(int(node_num_y_dimension) - 1) + '_' + channel_name[k] + '[0]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign tx_lcrd_id' + '_' + str(i) + '_' + str(int(node_num_y_dimension) - 1) + '_' + channel_name[k] + '[0]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_pend' + '_' + str(i) + '_' + str(0) + '_' + channel_name[k] + '[1]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_v' + '_' + str(i) + '_' + str(0) + '_' + channel_name[k] + '[1]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit' + '_' + str(i) + '_' + str(0) + '_' + channel_name[k] + '[1]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_vc_id' + '_' + str(i) + '_' + str(0) + '_' + channel_name[k] + '[1]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_look_ahead_routing' + '_' + str(i) + '_' + str(0) + '_' + channel_name[k] + '[1]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign tx_lcrd_v' + '_' + str(i) + '_' + str(0) + '_' + channel_name[k] + '[1]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign tx_lcrd_id' + '_' + str(i) + '_' + str(0) + '_' + channel_name[k] + '[1]' + ' = ' + "'0" + ';')

    for i in range(int(node_num_y_dimension)):
        for k in range(4):
            line_generator_print_list.append('assign rx_flit_pend' + '_' + str(int(node_num_x_dimension) - 1) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_v' + '_' + str(int(node_num_x_dimension) - 1) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit' + '_' + str(int(node_num_x_dimension) - 1) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_vc_id' + '_' + str(int(node_num_x_dimension) - 1) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_look_ahead_routing' + '_' + str(int(node_num_x_dimension) - 1) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign tx_lcrd_v' + '_' + str(int(node_num_x_dimension) - 1) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign tx_lcrd_id' + '_' + str(int(node_num_x_dimension) - 1) + '_' + str(i) + '_' + channel_name[k] + '[2]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_pend' + '_' + str(0) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_v' + '_' + str(0) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit' + '_' + str(0) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_vc_id' + '_' + str(0) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign rx_flit_look_ahead_routing' + '_' + str(0) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign tx_lcrd_v' + '_' + str(0) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + "'0" + ';')
            line_generator_print_list.append('assign tx_lcrd_id' + '_' + str(0) + '_' + str(i) + '_' + channel_name[k] + '[3]' + ' = ' + "'0" + ';')
    line_generator_print_list.append('endmodule')



    file = 'noc_top.sv'
    with open(file,'w') as f:
        for i in range(len(parameter_print_list)):
            f.write(parameter_print_list[i] + '\n')
        f.write('\n')
        for i in range(len(device_print_list)):
            f.write(device_print_list[i] + '\n')
        f.write('\n')
        for i in range(len(local_connect_print_list)):
            f.write(local_connect_print_list[i] + '\n')
        f.write('\n')
        for i in range(len(router_generator_print_list)):
            f.write(router_generator_print_list[i] + '\n')
        f.write('\n')
        for i in range(len(line_generator_print_list)):
            f.write(line_generator_print_list[i] + '\n')

    control={'DESIGN_NAME': config['eda']['DESIGN_NAME'],
             'VERILOG_FILES': config['eda']['VERILOG_FILES'],
             'DESIGN_IS_CORE': config['eda']['DESIGN_IS_CORE'],
             'ROUTING_CORES': config['eda']['ROUTING_CORES'],
             'CLOCK_PERIOD': config['eda']['CLOCK_PERIOD'],
             'CLOCK_PORT': config['eda']['CLOCK_PORT'],
             'FP_SIZING': config['eda']['FP_SIZING'],
             'PL_TARGET_DENSITY': config['eda']['PL_TARGET_DENSITY'],
             'DIE_AREA': config['eda']['DIE_AREA'],
             'CORE_AREA': config['eda']['CORE_AREA'],
             'FP_IO_MIN_DISTANCE': config['eda']['FP_IO_MIN_DISTANCE'],
             'PL_RESIZER_DESIGN_OPTIMIZATIONS': config['eda']['PL_RESIZER_DESIGN_OPTIMIZATIONS'],
             'PL_RESIZER_TIMING_OPTIMIZATIONS': config['eda']['PL_RESIZER_TIMING_OPTIMIZATIONS']}
    
    with open('eda.json','w') as f:
        json.dump(control,f,indent='\n')
        
            








