#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ur_ikfast_kinematics::ur10e_ikfast" for configuration ""
set_property(TARGET ur_ikfast_kinematics::ur10e_ikfast APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ur_ikfast_kinematics::ur10e_ikfast PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libur10e_ikfast.so"
  IMPORTED_SONAME_NOCONFIG "libur10e_ikfast.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ur_ikfast_kinematics::ur10e_ikfast )
list(APPEND _IMPORT_CHECK_FILES_FOR_ur_ikfast_kinematics::ur10e_ikfast "${_IMPORT_PREFIX}/lib/libur10e_ikfast.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
