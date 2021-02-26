#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract" for configuration "Debug"
set_property(TARGET tesseract::tesseract APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::tesseract PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtesseract.so"
  IMPORTED_SONAME_DEBUG "libtesseract.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract "${_IMPORT_PREFIX}/lib/libtesseract.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
