
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name Mechanical_clock -dir "C:/Users/ASUS/Desktop/FPGA_Project/Mechanical_clock/planAhead_run_3" -part xc6slx9tqg144-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/ASUS/Desktop/FPGA_Project/Mechanical_clock/MECHANICAL_CLOCK.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/ASUS/Desktop/FPGA_Project/Mechanical_clock} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "MECHANICAL_CLOCK.ucf" [current_fileset -constrset]
add_files [list {MECHANICAL_CLOCK.ucf}] -fileset [get_property constrset [current_run]]
link_design
