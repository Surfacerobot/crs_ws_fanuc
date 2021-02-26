// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/VisualGeometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__VISUAL_GEOMETRY__STRUCT_H_
#define TESSERACT_MSGS__MSG__VISUAL_GEOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_generator_c/string.h"
// Member 'origin'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'geometry'
#include "tesseract_msgs/msg/geometry__struct.h"
// Member 'material'
#include "tesseract_msgs/msg/material__struct.h"

// Struct defined in msg/VisualGeometry in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__VisualGeometry
{
  rosidl_generator_c__String name;
  geometry_msgs__msg__Pose origin;
  tesseract_msgs__msg__Geometry geometry;
  tesseract_msgs__msg__Material material;
} tesseract_msgs__msg__VisualGeometry;

// Struct for a sequence of tesseract_msgs__msg__VisualGeometry.
typedef struct tesseract_msgs__msg__VisualGeometry__Sequence
{
  tesseract_msgs__msg__VisualGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__VisualGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__VISUAL_GEOMETRY__STRUCT_H_
