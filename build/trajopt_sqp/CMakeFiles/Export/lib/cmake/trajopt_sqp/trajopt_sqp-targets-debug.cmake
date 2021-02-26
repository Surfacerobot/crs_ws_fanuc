#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajopt::trajopt_sqp" for configuration "Debug"
set_property(TARGET trajopt::trajopt_sqp APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(trajopt::trajopt_sqp PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtrajopt_sqp.so"
  IMPORTED_SONAME_DEBUG "libtrajopt_sqp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajopt::trajopt_sqp )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajopt::trajopt_sqp "${_IMPORT_PREFIX}/lib/libtrajopt_sqp.so" )

# Import target "trajopt::trajopt_sqp_callbacks" for configuration "Debug"
set_property(TARGET trajopt::trajopt_sqp_callbacks APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(trajopt::trajopt_sqp_callbacks PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtrajopt_sqp_callbacks.so"
  IMPORTED_SONAME_DEBUG "libtrajopt_sqp_callbacks.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajopt::trajopt_sqp_callbacks )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajopt::trajopt_sqp_callbacks "${_IMPORT_PREFIX}/lib/libtrajopt_sqp_callbacks.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
