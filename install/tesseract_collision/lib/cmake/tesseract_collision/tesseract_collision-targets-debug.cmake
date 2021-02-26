#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_collision_bullet" for configuration "Debug"
set_property(TARGET tesseract::tesseract_collision_bullet APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::tesseract_collision_bullet PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtesseract_collision_bullet.so"
  IMPORTED_SONAME_DEBUG "libtesseract_collision_bullet.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_collision_bullet )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_collision_bullet "${_IMPORT_PREFIX}/lib/libtesseract_collision_bullet.so" )

# Import target "tesseract::tesseract_collision_fcl" for configuration "Debug"
set_property(TARGET tesseract::tesseract_collision_fcl APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::tesseract_collision_fcl PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtesseract_collision_fcl.so"
  IMPORTED_SONAME_DEBUG "libtesseract_collision_fcl.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_collision_fcl )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_collision_fcl "${_IMPORT_PREFIX}/lib/libtesseract_collision_fcl.so" )

# Import target "tesseract::create_convex_hull" for configuration "Debug"
set_property(TARGET tesseract::create_convex_hull APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tesseract::create_convex_hull PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/create_convex_hull"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::create_convex_hull )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::create_convex_hull "${_IMPORT_PREFIX}/bin/create_convex_hull" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
