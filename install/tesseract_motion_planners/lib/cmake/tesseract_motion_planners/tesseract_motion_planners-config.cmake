
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was tesseract_motion_planners-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(tesseract_motion_planners_FOUND ON)
set_and_check(tesseract_motion_planners_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
set_and_check(tesseract_motion_planners_LIBRARY_DIRS "${PACKAGE_PREFIX_DIR}/lib")

include(CMakeFindDependencyMacro)
find_dependency(ompl)
find_dependency(trajopt)
find_dependency(trajopt_sco)
find_dependency(descartes_light)
find_dependency(descartes_samplers)
find_dependency(descartes_opw)
find_dependency(tesseract)
find_dependency(tesseract_common)
find_dependency(console_bridge)
find_dependency(Boost)

include("${CMAKE_CURRENT_LIST_DIR}/tesseract_motion_planners-targets.cmake")
