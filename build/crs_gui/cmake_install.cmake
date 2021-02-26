# Install script for directory: /root/crs_ws_fanuc/src/collaborative-robotic-sanding/crs_gui

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/crs_ws_fanuc/install/crs_gui")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/root/crs_ws_fanuc/build/crs_gui/ament_cmake_symlink_install/ament_cmake_symlink_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_panels.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_panels.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_panels.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/crs_ws_fanuc/build/crs_gui/libcrs_gui_panels.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_panels.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_panels.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_panels.so"
         OLD_RPATH "/root/crs_ws_fanuc/build/crs_gui:/root/crs_ws_fanuc/install/crs_area_selection/lib:/opt/ros/eloquent/lib:/root/crs_ws_fanuc/install/crs_motion_planning/lib:/opt/ros/eloquent/opt/yaml_cpp_vendor/lib:/root/crs_ws_fanuc/install/tesseract/lib:/root/crs_ws_fanuc/install/tesseract_urdf/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:/root/crs_ws_fanuc/install/tesseract_environment/lib:/root/crs_ws_fanuc/install/tesseract_collision/lib:/root/crs_ws_fanuc/install/fcl/lib:/root/crs_ws_fanuc/install/libccd/lib:/root/crs_ws/install/bullet3/lib:/root/crs_ws_fanuc/install/tesseract_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_scene_graph/lib:/root/crs_ws_fanuc/install/cartesian_trajectory_msgs/lib:/root/crs_ws_fanuc/install/crs_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_panels.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_widgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_widgets.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_widgets.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/crs_ws_fanuc/build/crs_gui/libcrs_gui_widgets.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_widgets.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_widgets.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_widgets.so"
         OLD_RPATH "/root/crs_ws_fanuc/install/crs_area_selection/lib:/root/crs_ws_fanuc/install/crs_motion_planning/lib:/opt/ros/eloquent/lib:/root/crs_ws_fanuc/install/cartesian_trajectory_msgs/lib:/root/crs_ws_fanuc/install/crs_msgs/lib:/opt/ros/eloquent/opt/yaml_cpp_vendor/lib:/root/crs_ws_fanuc/install/tesseract/lib:/root/crs_ws_fanuc/install/tesseract_urdf/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:/root/crs_ws_fanuc/install/tesseract_environment/lib:/root/crs_ws_fanuc/install/tesseract_collision/lib:/root/crs_ws_fanuc/install/fcl/lib:/root/crs_ws_fanuc/install/libccd/lib:/root/crs_ws/install/bullet3/lib:/root/crs_ws_fanuc/install/tesseract_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_scene_graph/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_gui_widgets.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_area_selection_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_area_selection_demo")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_area_selection_demo"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/crs_gui" TYPE EXECUTABLE FILES "/root/crs_ws_fanuc/build/crs_gui/crs_gui_area_selection_demo")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_area_selection_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_area_selection_demo")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_area_selection_demo"
         OLD_RPATH "/root/crs_ws_fanuc/build/crs_gui:/root/crs_ws_fanuc/install/crs_area_selection/lib:/opt/ros/eloquent/lib:/root/crs_ws_fanuc/install/crs_motion_planning/lib:/opt/ros/eloquent/opt/yaml_cpp_vendor/lib:/root/crs_ws_fanuc/install/tesseract/lib:/root/crs_ws_fanuc/install/tesseract_urdf/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:/root/crs_ws_fanuc/install/tesseract_environment/lib:/root/crs_ws_fanuc/install/tesseract_collision/lib:/root/crs_ws_fanuc/install/fcl/lib:/root/crs_ws_fanuc/install/libccd/lib:/root/crs_ws/install/bullet3/lib:/root/crs_ws_fanuc/install/tesseract_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_scene_graph/lib:/root/crs_ws_fanuc/install/cartesian_trajectory_msgs/lib:/root/crs_ws_fanuc/install/crs_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_area_selection_demo")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_part_selection_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_part_selection_demo")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_part_selection_demo"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/crs_gui" TYPE EXECUTABLE FILES "/root/crs_ws_fanuc/build/crs_gui/crs_gui_part_selection_demo")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_part_selection_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_part_selection_demo")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_part_selection_demo"
         OLD_RPATH "/root/crs_ws_fanuc/build/crs_gui:/root/crs_ws_fanuc/install/crs_area_selection/lib:/opt/ros/eloquent/lib:/root/crs_ws_fanuc/install/crs_motion_planning/lib:/opt/ros/eloquent/opt/yaml_cpp_vendor/lib:/root/crs_ws_fanuc/install/tesseract/lib:/root/crs_ws_fanuc/install/tesseract_urdf/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:/root/crs_ws_fanuc/install/tesseract_environment/lib:/root/crs_ws_fanuc/install/tesseract_collision/lib:/root/crs_ws_fanuc/install/fcl/lib:/root/crs_ws_fanuc/install/libccd/lib:/root/crs_ws/install/bullet3/lib:/root/crs_ws_fanuc/install/tesseract_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_scene_graph/lib:/root/crs_ws_fanuc/install/cartesian_trajectory_msgs/lib:/root/crs_ws_fanuc/install/crs_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_part_selection_demo")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_crs_application_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_crs_application_demo")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_crs_application_demo"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/crs_gui" TYPE EXECUTABLE FILES "/root/crs_ws_fanuc/build/crs_gui/crs_gui_crs_application_demo")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_crs_application_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_crs_application_demo")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_crs_application_demo"
         OLD_RPATH "/root/crs_ws_fanuc/build/crs_gui:/root/crs_ws_fanuc/install/crs_area_selection/lib:/opt/ros/eloquent/lib:/root/crs_ws_fanuc/install/crs_motion_planning/lib:/opt/ros/eloquent/opt/yaml_cpp_vendor/lib:/root/crs_ws_fanuc/install/tesseract/lib:/root/crs_ws_fanuc/install/tesseract_urdf/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:/root/crs_ws_fanuc/install/tesseract_environment/lib:/root/crs_ws_fanuc/install/tesseract_collision/lib:/root/crs_ws_fanuc/install/fcl/lib:/root/crs_ws_fanuc/install/libccd/lib:/root/crs_ws/install/bullet3/lib:/root/crs_ws_fanuc/install/tesseract_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_scene_graph/lib:/root/crs_ws_fanuc/install/cartesian_trajectory_msgs/lib:/root/crs_ws_fanuc/install/crs_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_crs_application_demo")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_state_machine_interface_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_state_machine_interface_demo")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_state_machine_interface_demo"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/crs_gui" TYPE EXECUTABLE FILES "/root/crs_ws_fanuc/build/crs_gui/crs_gui_state_machine_interface_demo")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_state_machine_interface_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_state_machine_interface_demo")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_state_machine_interface_demo"
         OLD_RPATH "/root/crs_ws_fanuc/build/crs_gui:/root/crs_ws_fanuc/install/crs_area_selection/lib:/opt/ros/eloquent/lib:/root/crs_ws_fanuc/install/crs_motion_planning/lib:/opt/ros/eloquent/opt/yaml_cpp_vendor/lib:/root/crs_ws_fanuc/install/tesseract/lib:/root/crs_ws_fanuc/install/tesseract_urdf/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:/root/crs_ws_fanuc/install/tesseract_environment/lib:/root/crs_ws_fanuc/install/tesseract_collision/lib:/root/crs_ws_fanuc/install/fcl/lib:/root/crs_ws_fanuc/install/libccd/lib:/root/crs_ws/install/bullet3/lib:/root/crs_ws_fanuc/install/tesseract_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_scene_graph/lib:/root/crs_ws_fanuc/install/cartesian_trajectory_msgs/lib:/root/crs_ws_fanuc/install/crs_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_gui/crs_gui_state_machine_interface_demo")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/crs_ws_fanuc/src/collaborative-robotic-sanding/crs_gui/include/" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crs_gui/cmake/-targetsExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crs_gui/cmake/-targetsExport.cmake"
         "/root/crs_ws_fanuc/build/crs_gui/CMakeFiles/Export/share/crs_gui/cmake/-targetsExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crs_gui/cmake/-targetsExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crs_gui/cmake/-targetsExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crs_gui/cmake" TYPE FILE FILES "/root/crs_ws_fanuc/build/crs_gui/CMakeFiles/Export/share/crs_gui/cmake/-targetsExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crs_gui/cmake" TYPE FILE FILES "/root/crs_ws_fanuc/build/crs_gui/CMakeFiles/Export/share/crs_gui/cmake/-targetsExport-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/crs_ws_fanuc/build/crs_gui/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
