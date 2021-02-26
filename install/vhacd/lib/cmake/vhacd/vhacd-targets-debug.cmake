#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajopt::vhacd" for configuration "Debug"
set_property(TARGET trajopt::vhacd APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(trajopt::vhacd PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libvhacd.so"
  IMPORTED_SONAME_DEBUG "libvhacd.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajopt::vhacd )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajopt::vhacd "${_IMPORT_PREFIX}/lib/libvhacd.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
