# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget trajopt::trajopt_ifopt)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target trajopt::trajopt_ifopt
add_library(trajopt::trajopt_ifopt SHARED IMPORTED)

set_target_properties(trajopt::trajopt_ifopt PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_14"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ifopt/include;/usr/include/eigen3"
  INTERFACE_LINK_LIBRARIES "console_bridge;ifopt::ifopt_core;trajopt::trajopt_utils;trajopt::trajopt;tesseract::tesseract"
)

# Import target "trajopt::trajopt_ifopt" for configuration "Debug"
set_property(TARGET trajopt::trajopt_ifopt APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(trajopt::trajopt_ifopt PROPERTIES
  IMPORTED_LOCATION_DEBUG "/root/crs_ws_fanuc/build/trajopt_ifopt/libtrajopt_ifopt.so"
  IMPORTED_SONAME_DEBUG "libtrajopt_ifopt.so"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
