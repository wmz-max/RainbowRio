+incdir+$PROJ_ROOT/rtl/include
+incdir+$PROJ_ROOT/tb

$PROJ_ROOT/include/rvh_noc_pkg.sv
$PROJ_ROOT/include/v_noc_pkg.sv  

$PROJ_ROOT/util/std_dffe.sv
$PROJ_ROOT/util/std_dffr.sv
$PROJ_ROOT/util/std_dffre.sv
$PROJ_ROOT/util/std_dffrve.sv

$PROJ_ROOT/util/usage_manager.sv
$PROJ_ROOT/util/mp_fifo.sv
$PROJ_ROOT/util/mp_fifo_ptr_output.sv
$PROJ_ROOT/util/sp_fifo_dat_vld_output.sv
$PROJ_ROOT/util/one_counter.sv
$PROJ_ROOT/util/priority_encoder.sv
$PROJ_ROOT/util/onehot_mux.sv
$PROJ_ROOT/util/one_hot_priority_encoder.sv
$PROJ_ROOT/util/left_circular_rotate.sv
$PROJ_ROOT/util/oh2idx.sv
$PROJ_ROOT/util/one_hot_rr_arb.sv
$PROJ_ROOT/util/select_two_from_n_valid.sv
$PROJ_ROOT/util/freelist.sv

$PROJ_ROOT/util/MuxOH.v
$PROJ_ROOT/util/AgeMatrixSelector.v

// TODO: need to change to compiled dpsram
$PROJ_ROOT/util/simple_dual_one_clock.v

$PROJ_ROOT/input_port.sv
$PROJ_ROOT/look_adead_routing.sv
$PROJ_ROOT/output_port_vc_selection.sv
$PROJ_ROOT/input_port_vc.sv
$PROJ_ROOT/output_port_vc_assignment.sv
$PROJ_ROOT/priority_req_select.sv
$PROJ_ROOT/sa_global.sv
$PROJ_ROOT/switch.sv
$PROJ_ROOT/input_port_flit_decoder.sv
$PROJ_ROOT/input_to_output.sv
$PROJ_ROOT/output_port_vc_credit_counter.sv
$PROJ_ROOT/sa_local.sv
$PROJ_ROOT/performance_monitor.sv
$PROJ_ROOT/vnet_router.sv
$PROJ_ROOT/local_port_look_adead_routing.sv
$PROJ_ROOT/local_port_couple_module.sv
$PROJ_ROOT/tb/tb_mesh.sv  