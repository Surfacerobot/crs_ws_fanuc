// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:msg/ToolProcessPath.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__MSG__TOOL_PROCESS_PATH__STRUCT_H_
#define CRS_MSGS__MSG__TOOL_PROCESS_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rasters'
#include "geometry_msgs/msg/pose_array__struct.h"

// Struct defined in msg/ToolProcessPath in the package crs_msgs.
typedef struct crs_msgs__msg__ToolProcessPath
{
  geometry_msgs__msg__PoseArray__Sequence rasters;
} crs_msgs__msg__ToolProcessPath;

// Struct for a sequence of crs_msgs__msg__ToolProcessPath.
typedef struct crs_msgs__msg__ToolProcessPath__Sequence
{
  crs_msgs__msg__ToolProcessPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__msg__ToolProcessPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__MSG__TOOL_PROCESS_PATH__STRUCT_H_
