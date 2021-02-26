#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_kinematics_kdl" for configuration "Debug"
set_property(TARGET tesseract::tesseract_kinematics_kdl APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::tesseract_kinematics_kdl PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtesseract_kinematics_kdl.so"
  IMPORTED_SONAME_DEBUG "libtesseract_kinematics_kdl.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_kinematics_kdl )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_kinematics_kdl "${_IMPORT_PREFIX}/lib/libtesseract_kinematics_kdl.so" )

# Import target "tesseract::tesseract_kinematics_opw" for configuration "Debug"
set_property(TARGET tesseract::tesseract_kinematics_opw APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::tesseract_kinematics_opw PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtesseract_kinematics_opw.so"
  IMPORTED_SONAME_DEBUG "libtesseract_kinematics_opw.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_kinematics_opw )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_kinematics_opw "${_IMPORT_PREFIX}/lib/libtesseract_kinematics_opw.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
