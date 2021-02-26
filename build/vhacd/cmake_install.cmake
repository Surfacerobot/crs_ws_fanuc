# Install script for directory: /root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/crs_ws_fanuc/install/vhacd")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/crs_ws_fanuc/build/vhacd/libvhacd.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so"
         OLD_RPATH "/root/crs_ws_fanuc/install/trajopt_utils/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvhacd.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd/vhacd-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd/vhacd-targets.cmake"
         "/root/crs_ws_fanuc/build/vhacd/CMakeFiles/Export/lib/cmake/vhacd/vhacd-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd/vhacd-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd/vhacd-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd" TYPE FILE FILES "/root/crs_ws_fanuc/build/vhacd/CMakeFiles/Export/lib/cmake/vhacd/vhacd-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd" TYPE FILE FILES "/root/crs_ws_fanuc/build/vhacd/CMakeFiles/Export/lib/cmake/vhacd/vhacd-targets-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/vhacd" TYPE FILE FILES "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vhacd" TYPE FILE FILES
    "/root/crs_ws_fanuc/build/vhacd/vhacd-config.cmake"
    "/root/crs_ws_fanuc/build/vhacd/vhacd-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vhacd" TYPE FILE FILES
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/FloatMath.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/btAlignedAllocator.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/btAlignedObjectArray.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/btConvexHullComputer.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/btMinMax.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/btScalar.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/btVector3.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdCircularList.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdICHull.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdManifoldMesh.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdMesh.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdMutex.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdRaycastMesh.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdSArray.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdTimer.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdVHACD.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdVector.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdVolume.h"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/VHACD.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vhacd" TYPE FILE FILES
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdCircularList.inl"
    "/root/crs_ws_fanuc/src/trajopt_ros/trajopt_ext/vhacd/include/vhacd/inc/vhacdVector.inl"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/crs_ws_fanuc/build/vhacd/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
