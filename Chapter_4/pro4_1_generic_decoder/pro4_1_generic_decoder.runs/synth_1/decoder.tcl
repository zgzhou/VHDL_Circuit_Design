# 
# Synthesis run script generated by Vivado
# 

  set_param gui.test TreeTableDev
set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
create_project -in_memory -part xc7vx690tffg1927-3
set_property target_language Verilog [current_project]
set_param project.compositeFile.enableAutoGeneration 0
read_vhdl C:/Users/Administrator/Desktop/VHDL_Circuit_Design-master/Chapter_4/pro4_1_generic_decoder/pro4_1_generic_decoder.srcs/sources_1/new/decoder.vhd
set_param synth.vivado.isSynthRun true
set_property webtalk.parent_dir C:/Users/Administrator/Desktop/VHDL_Circuit_Design-master/Chapter_4/pro4_1_generic_decoder/pro4_1_generic_decoder.data/wt [current_project]
set_property parent.project_dir C:/Users/Administrator/Desktop/VHDL_Circuit_Design-master/Chapter_4/pro4_1_generic_decoder [current_project]
synth_design -top decoder -part xc7vx690tffg1927-3
write_checkpoint decoder.dcp
report_utilization -file decoder_utilization_synth.rpt -pb decoder_utilization_synth.pb
