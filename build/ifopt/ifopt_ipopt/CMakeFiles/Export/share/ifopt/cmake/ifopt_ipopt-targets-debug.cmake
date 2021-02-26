#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ifopt::ifopt_ipopt" for configuration "Debug"
set_property(TARGET ifopt::ifopt_ipopt APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(ifopt::ifopt_ipopt PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libifopt_ipopt.so"
  IMPORTED_SONAME_DEBUG "libifopt_ipopt.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ifopt::ifopt_ipopt )
list(APPEND _IMPORT_CHECK_FILES_FOR_ifopt::ifopt_ipopt "${_IMPORT_PREFIX}/lib/libifopt_ipopt.so" )

# Import target "ifopt::ifopt_ipopt-example" for configuration "Debug"
set_property(TARGET ifopt::ifopt_ipopt-example APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(ifopt::ifopt_ipopt-example PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/ifopt/ifopt_ipopt-example"
  )

list(APPEND _IMPORT_CHECK_TARGETS ifopt::ifopt_ipopt-example )
list(APPEND _IMPORT_CHECK_FILES_FOR_ifopt::ifopt_ipopt-example "${_IMPORT_PREFIX}/lib/ifopt/ifopt_ipopt-example" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
