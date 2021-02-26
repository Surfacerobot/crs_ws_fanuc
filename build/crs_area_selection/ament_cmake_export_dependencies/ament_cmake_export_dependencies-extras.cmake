# generated from ament_cmake_export_dependencies/cmake/ament_cmake_export_dependencies-extras.cmake.in

set(_exported_dependencies "ament_cmake;ament_index_cpp;rclcpp;crs_msgs;geometry_msgs;sensor_msgs;shape_msgs;std_msgs;std_srvs;visualization_msgs;PCL;tf2_ros;tf2_eigen")

find_package(ament_cmake_libraries QUIET REQUIRED)

# find_package() all dependencies
# and append their DEFINITIONS INCLUDE_DIRS, LIBRARIES, and LINK_FLAGS
# variables to crs_area_selection_DEFINITIONS, crs_area_selection_INCLUDE_DIRS,
# crs_area_selection_LIBRARIES, and crs_area_selection_LINK_FLAGS.
# Additionally collect the direct dependency names in
# crs_area_selection_DEPENDENCIES as well as the recursive dependency names
# in crs_area_selection_RECURSIVE_DEPENDENCIES.
if(NOT _exported_dependencies STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  set(crs_area_selection_DEPENDENCIES ${_exported_dependencies})
  set(crs_area_selection_RECURSIVE_DEPENDENCIES ${_exported_dependencies})
  set(_libraries)
  foreach(_dep ${_exported_dependencies})
    if(NOT ${_dep}_FOUND)
      find_package("${_dep}" QUIET REQUIRED)
    endif()
    if(${_dep}_DEFINITIONS)
      list_append_unique(crs_area_selection_DEFINITIONS "${${_dep}_DEFINITIONS}")
    endif()
    if(${_dep}_INCLUDE_DIRS)
      list_append_unique(crs_area_selection_INCLUDE_DIRS "${${_dep}_INCLUDE_DIRS}")
    endif()
    if(${_dep}_LIBRARIES)
      list(APPEND _libraries "${${_dep}_LIBRARIES}")
    endif()
    if(${_dep}_LINK_FLAGS)
      list_append_unique(crs_area_selection_LINK_FLAGS "${${_dep}_LINK_FLAGS}")
    endif()
    if(${_dep}_RECURSIVE_DEPENDENCIES)
      list_append_unique(crs_area_selection_RECURSIVE_DEPENDENCIES "${${_dep}_RECURSIVE_DEPENDENCIES}")
    endif()
    if(_libraries)
      ament_libraries_deduplicate(_libraries "${_libraries}")
      list(APPEND crs_area_selection_LIBRARIES "${_libraries}")
    endif()
  endforeach()
endif()
