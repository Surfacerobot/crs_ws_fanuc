
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was iterative_spline_parameterization-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(iterative_spline_parameterization_FOUND ON)
set_and_check(iterative_spline_parameterization_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
set_and_check(iterative_spline_parameterization_LIBRARY_DIRS "${PACKAGE_PREFIX_DIR}/lib")

#include(CMakeFindDependencyMacro)
#find_dependency(Eigen3)
#if(${CMAKE_VERSION} VERSION_LESS "3.10.0")
#    find_package(Boost COMPONENTS system python thread program_options)
#else()
#    find_dependency(Boost COMPONENTS system python thread program_options)
#endif()
#find_dependency(console_bridge)
#find_dependency(trajopt_sco)
#find_dependency(trajopt_utils)
#find_dependency(tesseract)
#find_dependency(tesseract_visualization)

#find_dependency(PkgConfig)
#pkg_check_modules(JSONCPP jsoncpp)

include("${CMAKE_CURRENT_LIST_DIR}/iterative_spline_parameterization-targets.cmake")
