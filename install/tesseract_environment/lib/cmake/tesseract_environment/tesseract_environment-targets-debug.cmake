#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_environment_core" for configuration "Debug"
set_property(TARGET tesseract::tesseract_environment_core APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::tesseract_environment_core PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtesseract_environment_core.so"
  IMPORTED_SONAME_DEBUG "libtesseract_environment_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_environment_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_environment_core "${_IMPORT_PREFIX}/lib/libtesseract_environment_core.so" )

# Import target "tesseract::tesseract_environment_kdl" for configuration "Debug"
set_property(TARGET tesseract::tesseract_environment_kdl APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::tesseract_environment_kdl PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtesseract_environment_kdl.so"
  IMPORTED_SONAME_DEBUG "libtesseract_environment_kdl.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_environment_kdl )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_environment_kdl "${_IMPORT_PREFIX}/lib/libtesseract_environment_kdl.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
