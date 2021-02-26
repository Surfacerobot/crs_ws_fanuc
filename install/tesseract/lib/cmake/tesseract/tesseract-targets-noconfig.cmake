#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract" for configuration ""
set_property(TARGET tesseract::tesseract APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract "${_IMPORT_PREFIX}/lib/libtesseract.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
