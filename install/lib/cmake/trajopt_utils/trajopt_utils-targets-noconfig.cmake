#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajopt::trajopt_utils" for configuration ""
set_property(TARGET trajopt::trajopt_utils APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(trajopt::trajopt_utils PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtrajopt_utils.so"
  IMPORTED_SONAME_NOCONFIG "libtrajopt_utils.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajopt::trajopt_utils )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajopt::trajopt_utils "${_IMPORT_PREFIX}/lib/libtrajopt_utils.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
