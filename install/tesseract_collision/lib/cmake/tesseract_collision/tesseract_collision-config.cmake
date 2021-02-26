
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was tesseract_collision-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(tesseract_collision_FOUND ON)
set_and_check(tesseract_collision_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
set_and_check(tesseract_collision_LIBRARY_DIRS "${PACKAGE_PREFIX_DIR}/lib")

include(CMakeFindDependencyMacro)
if(${CMAKE_VERSION} VERSION_LESS "3.10.0")
    find_package(Boost COMPONENTS system thread program_options)
else()
    find_dependency(Boost COMPONENTS system thread program_options)
endif()
find_dependency(Eigen3)
find_dependency(octomap)
find_dependency(console_bridge)
find_dependency(tesseract_common)
find_dependency(tesseract_geometry)
find_dependency(tesseract_support)
find_dependency(Bullet)
find_dependency(fcl)
find_dependency(ccd)

include("${CMAKE_CURRENT_LIST_DIR}/tesseract_collision-targets.cmake")
