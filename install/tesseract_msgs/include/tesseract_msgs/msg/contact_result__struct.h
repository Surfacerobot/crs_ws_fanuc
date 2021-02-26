// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/ContactResult.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__CONTACT_RESULT__STRUCT_H_
#define TESSERACT_MSGS__MSG__CONTACT_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CCTYPE_NONE'.
enum
{
  tesseract_msgs__msg__ContactResult__CCTYPE_NONE = 0
};

/// Constant 'CCTYPE_TIME0'.
enum
{
  tesseract_msgs__msg__ContactResult__CCTYPE_TIME0 = 1
};

/// Constant 'CCTYPE_TIME1'.
enum
{
  tesseract_msgs__msg__ContactResult__CCTYPE_TIME1 = 2
};

/// Constant 'CCTYPE_BETWEEN'.
enum
{
  tesseract_msgs__msg__ContactResult__CCTYPE_BETWEEN = 3
};

// Include directives for member types
// Member 'link_names'
#include "rosidl_generator_c/string.h"
// Member 'nearest_points'
// Member 'nearest_points_local'
// Member 'normal'
#include "geometry_msgs/msg/vector3__struct.h"
// Member 'transform'
// Member 'cc_transform'
#include "geometry_msgs/msg/pose__struct.h"

// Struct defined in msg/ContactResult in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__ContactResult
{
  double distance;
  uint8_t type_id[2];
  rosidl_generator_c__String link_names[2];
  uint64_t shape_id[2];
  uint64_t subshape_id[2];
  geometry_msgs__msg__Vector3 nearest_points[2];
  geometry_msgs__msg__Vector3 nearest_points_local[2];
  geometry_msgs__msg__Pose transform[2];
  geometry_msgs__msg__Vector3 normal;
  double cc_time[2];
  uint8_t cc_type[2];
  geometry_msgs__msg__Pose cc_transform[2];
} tesseract_msgs__msg__ContactResult;

// Struct for a sequence of tesseract_msgs__msg__ContactResult.
typedef struct tesseract_msgs__msg__ContactResult__Sequence
{
  tesseract_msgs__msg__ContactResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__ContactResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__CONTACT_RESULT__STRUCT_H_
