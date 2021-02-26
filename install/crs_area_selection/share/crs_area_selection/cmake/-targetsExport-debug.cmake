#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "crs_area_selection::crs_area_selection_area_selection" for configuration "Debug"
set_property(TARGET crs_area_selection::crs_area_selection_area_selection APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(crs_area_selection::crs_area_selection_area_selection PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libcrs_area_selection_area_selection.so"
  IMPORTED_SONAME_DEBUG "libcrs_area_selection_area_selection.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS crs_area_selection::crs_area_selection_area_selection )
list(APPEND _IMPORT_CHECK_FILES_FOR_crs_area_selection::crs_area_selection_area_selection "${_IMPORT_PREFIX}/lib/libcrs_area_selection_area_selection.so" )

# Import target "crs_area_selection::crs_area_selection_area_selection_node" for configuration "Debug"
set_property(TARGET crs_area_selection::crs_area_selection_area_selection_node APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(crs_area_selection::crs_area_selection_area_selection_node PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/crs_area_selection/crs_area_selection_area_selection_node"
  )

list(APPEND _IMPORT_CHECK_TARGETS crs_area_selection::crs_area_selection_area_selection_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_crs_area_selection::crs_area_selection_area_selection_node "${_IMPORT_PREFIX}/lib/crs_area_selection/crs_area_selection_area_selection_node" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
