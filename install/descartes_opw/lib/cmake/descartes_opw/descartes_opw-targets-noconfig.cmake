#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "descartes::descartes_opw" for configuration ""
set_property(TARGET descartes::descartes_opw APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(descartes::descartes_opw PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdescartes_opw.so"
  IMPORTED_SONAME_NOCONFIG "libdescartes_opw.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS descartes::descartes_opw )
list(APPEND _IMPORT_CHECK_FILES_FOR_descartes::descartes_opw "${_IMPORT_PREFIX}/lib/libdescartes_opw.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
