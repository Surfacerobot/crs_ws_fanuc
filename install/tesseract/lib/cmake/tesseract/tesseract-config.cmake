
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was tesseract-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(tesseract_FOUND ON)
set_and_check(tesseract_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
set_and_check(tesseract_LIBRARY_DIRS "${PACKAGE_PREFIX_DIR}/lib")
set(tesseract_LIBRARIES "")

include(CMakeFindDependencyMacro)
if(${CMAKE_VERSION} VERSION_LESS "3.10.0")
    find_package(Boost COMPONENTS system)
else()
    find_dependency(Boost COMPONENTS system)
endif()
find_dependency(tesseract_scene_graph)
find_dependency(tesseract_collision)
find_dependency(tesseract_environment)
find_dependency(tesseract_kinematics)
find_dependency(tesseract_common)
find_dependency(tesseract_urdf)
find_dependency(console_bridge)

include("${CMAKE_CURRENT_LIST_DIR}/tesseract-targets.cmake")
