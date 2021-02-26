
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was region_detection_core-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(region_detection_core_FOUND ON)
set_and_check(region_detection_core_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
set_and_check(region_detection_core_LIBRARIES "${PACKAGE_PREFIX_DIR}/lib")

include(CMakeFindDependencyMacro)

if(${CMAKE_VERSION} VERSION_LESS "3.10.0")
	find_package(Boost)
	find_package(OpenCV REQUIRED COMPONENTS core imgproc imgcodecs highgui)
	find_package(PCL REQUIRED COMPONENTS common filters surface segmentation)
	find_package(Eigen3 REQUIRED)
	find_package(yaml-cpp REQUIRED)
	find_package(console_bridge REQUIRED)	
else()
	find_dependency(Boost)
	find_dependency(OpenCV REQUIRED COMPONENTS core imgproc imgcodecs highgui)
	find_dependency(PCL REQUIRED COMPONENTS common filters surface segmentation)
	find_dependency(Eigen3 REQUIRED)
	find_dependency(yaml-cpp REQUIRED)
	find_dependency(console_bridge REQUIRED)	
endif()
 
include("${CMAKE_CURRENT_LIST_DIR}/region_detection_core-targets.cmake")
