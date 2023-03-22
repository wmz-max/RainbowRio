import json

 
if __name__ == '__main__':

    with open('config.json','r') as f:
        config = json.load(f)
    noc_type = config['noc']['noc_type']
    node_num_x_dimension = config['noc']['node_num_x_dimension']
    node_num_y_dimension = config['noc']['node_num_y_dimension']
    qos_vc_num_per_input = config['noc']['qos_vc_num_per_input']
    vc_depth = config['noc']['vc_depth']
    req_channel_flit_size = config['chi']['req_channel_flit_size']
    resp_channel_flit_size = config['chi']['resp_channel_flit_size']
    snoop_channel_flit_size = config['chi']['snoop_channel_flit_size']
    data_channel_flit_size = config['chi']['data_channel_flit_size']
