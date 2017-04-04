# 
# Synthesis run script generated by Vivado
# 

  set_param gui.test TreeTableDev
set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
create_project -in_memory -part xc7vx690tffg1157-3
set_property target_language Verilog [current_project]
set_param project.compositeFile.enableAutoGeneration 0
read_vhdl C:/Users/Administrator/Desktop/VHDL_Circuit_Design-master/Chapter_8/pro8_1_BCDcounter/pro8_1_BCDcounter.srcs/sources_1/new/BCDcounter.vhd
set_param synth.vivado.isSynthRun true
set_property webtalk.parent_dir C:/Users/Administrator/Desktop/VHDL_Circuit_Design-master/Chapter_8/pro8_1_BCDcounter/pro8_1_BCDcounter.data/wt [current_project]
set_property parent.project_dir C:/Users/Administrator/Desktop/VHDL_Circuit_Design-master/Chapter_8/pro8_1_BCDcounter [current_project]
synth_design -top BCDcounter -part xc7vx690tffg1157-3
write_checkpoint BCDcounter.dcp
report_utilization -file BCDcounter_utilization_synth.rpt -pb BCDcounter_utilization_synth.pb
