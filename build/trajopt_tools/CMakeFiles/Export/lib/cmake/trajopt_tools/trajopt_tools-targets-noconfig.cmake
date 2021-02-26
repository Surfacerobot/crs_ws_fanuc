#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajopt::convex_decomposition_hacd_node" for configuration ""
set_property(TARGET trajopt::convex_decomposition_hacd_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(trajopt::convex_decomposition_hacd_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/convex_decomposition_hacd_node"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajopt::convex_decomposition_hacd_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajopt::convex_decomposition_hacd_node "${_IMPORT_PREFIX}/bin/convex_decomposition_hacd_node" )

# Import target "trajopt::convex_decomposition_vhacd_node" for configuration ""
set_property(TARGET trajopt::convex_decomposition_vhacd_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(trajopt::convex_decomposition_vhacd_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/convex_decomposition_vhacd_node"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajopt::convex_decomposition_vhacd_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajopt::convex_decomposition_vhacd_node "${_IMPORT_PREFIX}/bin/convex_decomposition_vhacd_node" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
