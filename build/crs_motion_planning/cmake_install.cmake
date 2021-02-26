# Install script for directory: /root/crs_ws_fanuc/src/collaborative-robotic-sanding/crs_motion_planning

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/crs_ws_fanuc/install/crs_motion_planning")
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
  include("/root/crs_ws_fanuc/build/crs_motion_planning/ament_cmake_symlink_install/ament_cmake_symlink_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/crs_motion_planning/" TYPE DIRECTORY FILES "/root/crs_ws_fanuc/src/collaborative-robotic-sanding/crs_motion_planning/include/crs_motion_planning/" FILES_MATCHING REGEX "/[^/]*\\.h[^/]*$" REGEX "/\\.svn$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_processing_utils.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_processing_utils.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_processing_utils.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/crs_ws_fanuc/build/crs_motion_planning/libcrs_motion_planning_path_processing_utils.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_processing_utils.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_processing_utils.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_processing_utils.so"
         OLD_RPATH "/opt/ros/eloquent/lib:/root/crs_ws_fanuc/install/cartesian_trajectory_msgs/lib:/opt/ros/eloquent/opt/yaml_cpp_vendor/lib:/root/crs_ws_fanuc/install/crs_msgs/lib:/root/crs_ws_fanuc/install/tesseract/lib:/root/crs_ws_fanuc/install/tesseract_urdf/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:/root/crs_ws_fanuc/install/tesseract_environment/lib:/root/crs_ws_fanuc/install/tesseract_collision/lib:/root/crs_ws_fanuc/install/fcl/lib:/root/crs_ws_fanuc/install/libccd/lib:/root/crs_ws/install/bullet3/lib:/root/crs_ws_fanuc/install/tesseract_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_scene_graph/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_processing_utils.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_planning_utils.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_planning_utils.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_planning_utils.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/crs_ws_fanuc/build/crs_motion_planning/libcrs_motion_planning_path_planning_utils.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_planning_utils.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_planning_utils.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_planning_utils.so"
         OLD_RPATH "/root/crs_ws_fanuc/build/crs_motion_planning:/opt/ros/eloquent/lib:/root/crs_ws_fanuc/install/ur_ikfast_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_motion_planners/lib:/root/crs_ws_fanuc/install/descartes_samplers/lib:/opt/ros/eloquent/opt/yaml_cpp_vendor/lib:/root/crs_ws_fanuc/install/cartesian_trajectory_msgs/lib:/root/crs_ws_fanuc/install/crs_msgs/lib:/root/crs_ws_fanuc/install/descartes_opw/lib:/root/crs_ws_fanuc/install/descartes_light/lib:/root/crs_ws_fanuc/install/tesseract_process_planners/lib:/root/crs_ws_fanuc/install/trajopt/lib:/root/crs_ws_fanuc/install/tesseract/lib:/root/crs_ws_fanuc/install/tesseract_urdf/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:/root/crs_ws_fanuc/install/tesseract_environment/lib:/root/crs_ws_fanuc/install/tesseract_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_scene_graph/lib:/root/crs_ws_fanuc/install/trajopt_sco/lib:/root/crs_ws_fanuc/install/trajopt_utils/lib:/root/crs_ws_fanuc/install/tesseract_collision/lib:/root/crs_ws/install/bullet3/lib:/root/crs_ws_fanuc/install/fcl/lib:/root/crs_ws_fanuc/install/libccd/lib:/root/crs_ws/install/octomap_msgs/lib:/root/crs_ws/install/tesseract_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcrs_motion_planning_path_planning_utils.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_motion_planning_server" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_motion_planning_server")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_motion_planning_server"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning" TYPE EXECUTABLE FILES "/root/crs_ws_fanuc/build/crs_motion_planning/crs_motion_planning_motion_planning_server")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_motion_planning_server" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_motion_planning_server")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_motion_planning_server"
         OLD_RPATH "/root/crs_ws_fanuc/build/crs_motion_planning:/opt/ros/eloquent/lib:/root/crs_ws_fanuc/install/cartesian_trajectory_msgs/lib:/root/crs_ws_fanuc/install/crs_msgs/lib:/opt/ros/eloquent/opt/yaml_cpp_vendor/lib:/root/crs_ws_fanuc/install/ur_ikfast_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_motion_planners/lib:/root/crs_ws_fanuc/install/descartes_opw/lib:/root/crs_ws_fanuc/install/tesseract_process_planners/lib:/root/crs_ws_fanuc/install/trajopt/lib:/root/crs_ws_fanuc/install/tesseract/lib:/root/crs_ws_fanuc/install/tesseract_urdf/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:/root/crs_ws_fanuc/install/tesseract_environment/lib:/root/crs_ws_fanuc/install/tesseract_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_scene_graph/lib:/root/crs_ws_fanuc/install/trajopt_sco/lib:/root/crs_ws_fanuc/install/trajopt_utils/lib:/root/crs_ws_fanuc/install/tesseract_collision/lib:/root/crs_ws/install/bullet3/lib:/root/crs_ws_fanuc/install/fcl/lib:/root/crs_ws_fanuc/install/libccd/lib:/root/crs_ws/install/octomap_msgs/lib:/root/crs_ws/install/tesseract_msgs/lib:/root/crs_ws_fanuc/install/descartes_samplers/lib:/root/crs_ws_fanuc/install/descartes_light/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_motion_planning_server")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_process_planner_test" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_process_planner_test")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_process_planner_test"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning" TYPE EXECUTABLE FILES "/root/crs_ws_fanuc/build/crs_motion_planning/crs_motion_planning_process_planner_test")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_process_planner_test" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_process_planner_test")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_process_planner_test"
         OLD_RPATH "/root/crs_ws_fanuc/build/crs_motion_planning:/opt/ros/eloquent/lib:/root/crs_ws_fanuc/install/cartesian_trajectory_msgs/lib:/root/crs_ws_fanuc/install/crs_msgs/lib:/opt/ros/eloquent/opt/yaml_cpp_vendor/lib:/root/crs_ws_fanuc/install/ur_ikfast_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_motion_planners/lib:/root/crs_ws_fanuc/install/descartes_opw/lib:/root/crs_ws_fanuc/install/tesseract_process_planners/lib:/root/crs_ws_fanuc/install/trajopt/lib:/root/crs_ws_fanuc/install/tesseract/lib:/root/crs_ws_fanuc/install/tesseract_urdf/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:/root/crs_ws_fanuc/install/tesseract_environment/lib:/root/crs_ws_fanuc/install/tesseract_kinematics/lib:/root/crs_ws_fanuc/install/tesseract_scene_graph/lib:/root/crs_ws_fanuc/install/trajopt_sco/lib:/root/crs_ws_fanuc/install/trajopt_utils/lib:/root/crs_ws_fanuc/install/tesseract_collision/lib:/root/crs_ws/install/bullet3/lib:/root/crs_ws_fanuc/install/fcl/lib:/root/crs_ws_fanuc/install/libccd/lib:/root/crs_ws/install/octomap_msgs/lib:/root/crs_ws/install/tesseract_msgs/lib:/root/crs_ws_fanuc/install/descartes_samplers/lib:/root/crs_ws_fanuc/install/descartes_light/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/crs_motion_planning/crs_motion_planning_process_planner_test")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crs_motion_planning/cmake/-targetsExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crs_motion_planning/cmake/-targetsExport.cmake"
         "/root/crs_ws_fanuc/build/crs_motion_planning/CMakeFiles/Export/share/crs_motion_planning/cmake/-targetsExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crs_motion_planning/cmake/-targetsExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/crs_motion_planning/cmake/-targetsExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crs_motion_planning/cmake" TYPE FILE FILES "/root/crs_ws_fanuc/build/crs_motion_planning/CMakeFiles/Export/share/crs_motion_planning/cmake/-targetsExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/crs_motion_planning/cmake" TYPE FILE FILES "/root/crs_ws_fanuc/build/crs_motion_planning/CMakeFiles/Export/share/crs_motion_planning/cmake/-targetsExport-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/crs_ws_fanuc/build/crs_motion_planning/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
