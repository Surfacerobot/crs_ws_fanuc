#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "region_detection_core::region_detection_core" for configuration ""
set_property(TARGET region_detection_core::region_detection_core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(region_detection_core::region_detection_core PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libregion_detection_core.so"
  IMPORTED_SONAME_NOCONFIG "libregion_detection_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS region_detection_core::region_detection_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_region_detection_core::region_detection_core "${_IMPORT_PREFIX}/lib/libregion_detection_core.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
