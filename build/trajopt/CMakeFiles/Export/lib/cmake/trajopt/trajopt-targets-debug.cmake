#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajopt::trajopt" for configuration "Debug"
set_property(TARGET trajopt::trajopt APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(trajopt::trajopt PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtrajopt.so"
  IMPORTED_SONAME_DEBUG "libtrajopt.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajopt::trajopt )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajopt::trajopt "${_IMPORT_PREFIX}/lib/libtrajopt.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
