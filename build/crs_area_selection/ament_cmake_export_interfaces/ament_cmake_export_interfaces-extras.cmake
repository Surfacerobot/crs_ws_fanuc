# generated from ament_cmake_export_interfaces/cmake/ament_cmake_export_interfaces-extras.cmake.in

set(_exported_interfaces "-targets")

# include all exported interfaces
if(NOT _exported_interfaces STREQUAL "")
  foreach(_interface ${_exported_interfaces})
    include("${crs_area_selection_DIR}/${_interface}Export.cmake")
    list(APPEND crs_area_selection_INTERFACES "crs_area_selection::${_interface}")
  endforeach()
endif()
