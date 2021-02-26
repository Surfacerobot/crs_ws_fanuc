# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_region_detection_rclcpp_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED region_detection_rclcpp_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(region_detection_rclcpp_FOUND FALSE)
  elseif(NOT region_detection_rclcpp_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(region_detection_rclcpp_FOUND FALSE)
  endif()
  return()
endif()
set(_region_detection_rclcpp_CONFIG_INCLUDED TRUE)

# output package information
if(NOT region_detection_rclcpp_FIND_QUIETLY)
  message(STATUS "Found region_detection_rclcpp: 0.0.0 (${region_detection_rclcpp_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'region_detection_rclcpp' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(region_detection_rclcpp_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${region_detection_rclcpp_DIR}/${_extra}")
endforeach()
