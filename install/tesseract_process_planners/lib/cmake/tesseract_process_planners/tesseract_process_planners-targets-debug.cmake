#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_process_planners" for configuration "Debug"
set_property(TARGET tesseract::tesseract_process_planners APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::tesseract_process_planners PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtesseract_process_planners.so"
  IMPORTED_SONAME_DEBUG "libtesseract_process_planners.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_process_planners )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_process_planners "${_IMPORT_PREFIX}/lib/libtesseract_process_planners.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
