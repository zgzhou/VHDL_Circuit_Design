# 
# Synthesis run script generated by Vivado
# 

set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
create_project -in_memory -part xc7vx690tffg1157-3

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_property webtalk.parent_dir C:/Users/Administrator/Desktop/VHDL_Circuit_Design/Example/Parallel_FIR/Parallel_FIR.cache/wt [current_project]
set_property parent.project_path C:/Users/Administrator/Desktop/VHDL_Circuit_Design/Example/Parallel_FIR/Parallel_FIR.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property ip_output_repo c:/Users/Administrator/Desktop/VHDL_Circuit_Design/Example/Parallel_FIR/Parallel_FIR.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
read_vhdl -library xil_defaultlib {
  C:/Users/Administrator/Desktop/VHDL_Circuit_Design/Example/Parallel_FIR/Parallel_FIR.srcs/sources_1/new/my_data_types.vhd
  C:/Users/Administrator/Desktop/VHDL_Circuit_Design/Example/Parallel_FIR/Parallel_FIR.srcs/sources_1/new/DFF.vhd
  C:/Users/Administrator/Desktop/VHDL_Circuit_Design/Example/Parallel_FIR/Parallel_FIR.srcs/sources_1/imports/new/FIR.vhd
  C:/Users/Administrator/Desktop/VHDL_Circuit_Design/Example/Parallel_FIR/Parallel_FIR.srcs/sources_1/new/Parallel_FIR.vhd
}
foreach dcp [get_files -quiet -all *.dcp] {
  set_property used_in_implementation false $dcp
}

synth_design -top Parallel_FIR -part xc7vx690tffg1157-3


write_checkpoint -force -noxdef Parallel_FIR.dcp

catch { report_utilization -file Parallel_FIR_utilization_synth.rpt -pb Parallel_FIR_utilization_synth.pb }
