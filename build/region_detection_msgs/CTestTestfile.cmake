# CMake generated Testfile for 
# Source directory: /root/crs_ws_fanuc/src/region_detection/region_detection_msgs
# Build directory: /root/crs_ws_fanuc/build/region_detection_msgs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/root/crs_ws_fanuc/build/region_detection_msgs/test_results/region_detection_msgs/lint_cmake.xunit.xml" "--package-name" "region_detection_msgs" "--output-file" "/root/crs_ws_fanuc/build/region_detection_msgs/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/root/crs_ws_fanuc/build/region_detection_msgs/test_results/region_detection_msgs/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/crs_ws_fanuc/src/region_detection/region_detection_msgs")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/root/crs_ws_fanuc/build/region_detection_msgs/test_results/region_detection_msgs/xmllint.xunit.xml" "--package-name" "region_detection_msgs" "--output-file" "/root/crs_ws_fanuc/build/region_detection_msgs/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/root/crs_ws_fanuc/build/region_detection_msgs/test_results/region_detection_msgs/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/crs_ws_fanuc/src/region_detection/region_detection_msgs")
subdirs("region_detection_msgs__py")
