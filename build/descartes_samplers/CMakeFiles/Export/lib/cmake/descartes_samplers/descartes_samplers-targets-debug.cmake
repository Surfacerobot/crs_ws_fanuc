#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "descartes::descartes_samplers" for configuration "Debug"
set_property(TARGET descartes::descartes_samplers APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(descartes::descartes_samplers PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libdescartes_samplers.so"
  IMPORTED_SONAME_DEBUG "libdescartes_samplers.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS descartes::descartes_samplers )
list(APPEND _IMPORT_CHECK_FILES_FOR_descartes::descartes_samplers "${_IMPORT_PREFIX}/lib/libdescartes_samplers.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
