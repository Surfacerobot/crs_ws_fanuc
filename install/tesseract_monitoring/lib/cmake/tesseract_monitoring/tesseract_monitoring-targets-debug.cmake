#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_monitoring_contacts_node" for configuration "Debug"
set_property(TARGET tesseract::tesseract_monitoring_contacts_node APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::tesseract_monitoring_contacts_node PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/tesseract_monitoring_contacts_node"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_monitoring_contacts_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_monitoring_contacts_node "${_IMPORT_PREFIX}/lib/tesseract_monitoring_contacts_node" )

# Import target "tesseract::tesseract_monitoring_environment" for configuration "Debug"
set_property(TARGET tesseract::tesseract_monitoring_environment APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::tesseract_monitoring_environment PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtesseract_monitoring_environment.so"
  IMPORTED_SONAME_DEBUG "libtesseract_monitoring_environment.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_monitoring_environment )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_monitoring_environment "${_IMPORT_PREFIX}/lib/libtesseract_monitoring_environment.so" )

# Import target "tesseract::tesseract_monitoring_environment_node" for configuration "Debug"
set_property(TARGET tesseract::tesseract_monitoring_environment_node APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::tesseract_monitoring_environment_node PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/tesseract_monitoring_environment_node"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_monitoring_environment_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_monitoring_environment_node "${_IMPORT_PREFIX}/lib/tesseract_monitoring_environment_node" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
