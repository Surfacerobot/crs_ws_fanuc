search_mode=OPTIMIZE_MAX_JOINT
srdf_filename=fanuc_r2000ic.srdf
robot_name_in_srdf=fanuc_r2000ic
moveit_config_pkg=fanuc_r2000ic_moveit_config
robot_name=fanuc_r2000ic
planning_group_name=r2000ic_manipulator
ikfast_plugin_pkg=fanuc_r2000ic_moveit_plugins
base_link_name=base_link
eef_link_name=flange
ikfast_output_path=/root/urdftest/test/src/fanuc_r2000ic_moveit_plugins/src/fanuc_r2000ic_r2000ic_manipulator_ikfast_solver.cpp

rosrun moveit_kinematics create_ikfast_moveit_plugin.py\
  --search_mode=$search_mode\
  --srdf_filename=$srdf_filename\
  --robot_name_in_srdf=$robot_name_in_srdf\
  --moveit_config_pkg=$moveit_config_pkg\
  $robot_name\
  $planning_group_name\
  $ikfast_plugin_pkg\
  $base_link_name\
  $eef_link_name\
  $ikfast_output_path
