#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "scxml_core::scxml_core" for configuration "Debug"
set_property(TARGET scxml_core::scxml_core APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(scxml_core::scxml_core PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libscxml_core.so"
  IMPORTED_SONAME_DEBUG "libscxml_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS scxml_core::scxml_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_scxml_core::scxml_core "${_IMPORT_PREFIX}/lib/libscxml_core.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
