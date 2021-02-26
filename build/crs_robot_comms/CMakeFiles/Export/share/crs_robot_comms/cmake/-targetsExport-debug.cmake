#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "crs_robot_comms::crs_robot_comms_ur_comms" for configuration "Debug"
set_property(TARGET crs_robot_comms::crs_robot_comms_ur_comms APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(crs_robot_comms::crs_robot_comms_ur_comms PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/crs_robot_comms/crs_robot_comms_ur_comms"
  )

list(APPEND _IMPORT_CHECK_TARGETS crs_robot_comms::crs_robot_comms_ur_comms )
list(APPEND _IMPORT_CHECK_FILES_FOR_crs_robot_comms::crs_robot_comms_ur_comms "${_IMPORT_PREFIX}/lib/crs_robot_comms/crs_robot_comms_ur_comms" )

# Import target "crs_robot_comms::crs_robot_comms_ur_comms_sim" for configuration "Debug"
set_property(TARGET crs_robot_comms::crs_robot_comms_ur_comms_sim APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(crs_robot_comms::crs_robot_comms_ur_comms_sim PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/crs_robot_comms/crs_robot_comms_ur_comms_sim"
  )

list(APPEND _IMPORT_CHECK_TARGETS crs_robot_comms::crs_robot_comms_ur_comms_sim )
list(APPEND _IMPORT_CHECK_FILES_FOR_crs_robot_comms::crs_robot_comms_ur_comms_sim "${_IMPORT_PREFIX}/lib/crs_robot_comms/crs_robot_comms_ur_comms_sim" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
