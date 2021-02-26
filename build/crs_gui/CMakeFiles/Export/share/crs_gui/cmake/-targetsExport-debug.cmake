#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "crs_gui::crs_gui_panels" for configuration "Debug"
set_property(TARGET crs_gui::crs_gui_panels APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(crs_gui::crs_gui_panels PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libcrs_gui_panels.so"
  IMPORTED_SONAME_DEBUG "libcrs_gui_panels.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS crs_gui::crs_gui_panels )
list(APPEND _IMPORT_CHECK_FILES_FOR_crs_gui::crs_gui_panels "${_IMPORT_PREFIX}/lib/libcrs_gui_panels.so" )

# Import target "crs_gui::crs_gui_widgets" for configuration "Debug"
set_property(TARGET crs_gui::crs_gui_widgets APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(crs_gui::crs_gui_widgets PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libcrs_gui_widgets.so"
  IMPORTED_SONAME_DEBUG "libcrs_gui_widgets.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS crs_gui::crs_gui_widgets )
list(APPEND _IMPORT_CHECK_FILES_FOR_crs_gui::crs_gui_widgets "${_IMPORT_PREFIX}/lib/libcrs_gui_widgets.so" )

# Import target "crs_gui::crs_gui_area_selection_demo" for configuration "Debug"
set_property(TARGET crs_gui::crs_gui_area_selection_demo APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(crs_gui::crs_gui_area_selection_demo PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/crs_gui/crs_gui_area_selection_demo"
  )

list(APPEND _IMPORT_CHECK_TARGETS crs_gui::crs_gui_area_selection_demo )
list(APPEND _IMPORT_CHECK_FILES_FOR_crs_gui::crs_gui_area_selection_demo "${_IMPORT_PREFIX}/lib/crs_gui/crs_gui_area_selection_demo" )

# Import target "crs_gui::crs_gui_part_selection_demo" for configuration "Debug"
set_property(TARGET crs_gui::crs_gui_part_selection_demo APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(crs_gui::crs_gui_part_selection_demo PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/crs_gui/crs_gui_part_selection_demo"
  )

list(APPEND _IMPORT_CHECK_TARGETS crs_gui::crs_gui_part_selection_demo )
list(APPEND _IMPORT_CHECK_FILES_FOR_crs_gui::crs_gui_part_selection_demo "${_IMPORT_PREFIX}/lib/crs_gui/crs_gui_part_selection_demo" )

# Import target "crs_gui::crs_gui_crs_application_demo" for configuration "Debug"
set_property(TARGET crs_gui::crs_gui_crs_application_demo APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(crs_gui::crs_gui_crs_application_demo PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/crs_gui/crs_gui_crs_application_demo"
  )

list(APPEND _IMPORT_CHECK_TARGETS crs_gui::crs_gui_crs_application_demo )
list(APPEND _IMPORT_CHECK_FILES_FOR_crs_gui::crs_gui_crs_application_demo "${_IMPORT_PREFIX}/lib/crs_gui/crs_gui_crs_application_demo" )

# Import target "crs_gui::crs_gui_state_machine_interface_demo" for configuration "Debug"
set_property(TARGET crs_gui::crs_gui_state_machine_interface_demo APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(crs_gui::crs_gui_state_machine_interface_demo PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/crs_gui/crs_gui_state_machine_interface_demo"
  )

list(APPEND _IMPORT_CHECK_TARGETS crs_gui::crs_gui_state_machine_interface_demo )
list(APPEND _IMPORT_CHECK_FILES_FOR_crs_gui::crs_gui_state_machine_interface_demo "${_IMPORT_PREFIX}/lib/crs_gui/crs_gui_state_machine_interface_demo" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
