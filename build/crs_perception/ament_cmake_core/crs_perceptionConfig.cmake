# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_crs_perception_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED crs_perception_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(crs_perception_FOUND FALSE)
  elseif(NOT crs_perception_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(crs_perception_FOUND FALSE)
  endif()
  return()
endif()
set(_crs_perception_CONFIG_INCLUDED TRUE)

# output package information
if(NOT crs_perception_FIND_QUIETLY)
  message(STATUS "Found crs_perception: 0.0.0 (${crs_perception_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'crs_perception' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(crs_perception_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${crs_perception_DIR}/${_extra}")
endforeach()
