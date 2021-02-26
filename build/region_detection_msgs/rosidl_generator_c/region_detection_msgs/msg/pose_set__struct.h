// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from region_detection_msgs:msg/PoseSet.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__MSG__POSE_SET__STRUCT_H_
#define REGION_DETECTION_MSGS__MSG__POSE_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose_arrays'
#include "geometry_msgs/msg/pose_array__struct.h"

// Struct defined in msg/PoseSet in the package region_detection_msgs.
typedef struct region_detection_msgs__msg__PoseSet
{
  geometry_msgs__msg__PoseArray__Sequence pose_arrays;
} region_detection_msgs__msg__PoseSet;

// Struct for a sequence of region_detection_msgs__msg__PoseSet.
typedef struct region_detection_msgs__msg__PoseSet__Sequence
{
  region_detection_msgs__msg__PoseSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} region_detection_msgs__msg__PoseSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REGION_DETECTION_MSGS__MSG__POSE_SET__STRUCT_H_
