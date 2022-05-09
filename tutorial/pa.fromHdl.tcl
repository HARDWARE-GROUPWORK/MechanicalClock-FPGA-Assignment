
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name tutorial -dir "C:/Users/ASUS/Desktop/FPGA_Project/tutorial/planAhead_run_1" -part xc6slx9tqg144-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "tutorial_led_blink.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {blink_led.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top tutorial_led_blink $srcset
add_files [list {tutorial_led_blink.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx9tqg144-3
