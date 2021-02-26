
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was descartes_samplers-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(descartes_samplers_FOUND ON)
set_and_check(descartes_samplers_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
set_and_check(descartes_samplers_LIBRARY_DIRS "${PACKAGE_PREFIX_DIR}/lib")

include(CMakeFindDependencyMacro)
find_dependency(descartes_light)

include("${CMAKE_CURRENT_LIST_DIR}/descartes_samplers-targets.cmake")
