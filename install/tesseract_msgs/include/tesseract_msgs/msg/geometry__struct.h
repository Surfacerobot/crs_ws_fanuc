// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__GEOMETRY__STRUCT_H_
#define TESSERACT_MSGS__MSG__GEOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPHERE'.
enum
{
  tesseract_msgs__msg__Geometry__SPHERE = 1
};

/// Constant 'CYLINDER'.
enum
{
  tesseract_msgs__msg__Geometry__CYLINDER = 2
};

/// Constant 'CONE'.
enum
{
  tesseract_msgs__msg__Geometry__CONE = 3
};

/// Constant 'BOX'.
enum
{
  tesseract_msgs__msg__Geometry__BOX = 4
};

/// Constant 'PLANE'.
enum
{
  tesseract_msgs__msg__Geometry__PLANE = 5
};

/// Constant 'MESH'.
enum
{
  tesseract_msgs__msg__Geometry__MESH = 6
};

/// Constant 'CONVEX_MESH'.
enum
{
  tesseract_msgs__msg__Geometry__CONVEX_MESH = 7
};

/// Constant 'SDF_MESH'.
enum
{
  tesseract_msgs__msg__Geometry__SDF_MESH = 8
};

/// Constant 'OCTREE'.
enum
{
  tesseract_msgs__msg__Geometry__OCTREE = 9
};

// Include directives for member types
// Member 'mesh'
#include "tesseract_msgs/msg/mesh__struct.h"
// Member 'octomap'
#include "octomap_msgs/msg/octomap__struct.h"

// Struct defined in msg/Geometry in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__Geometry
{
  uint8_t type;
  double sphere_radius;
  double cylinder_dimensions[2];
  double cone_dimensions[2];
  double box_dimensions[3];
  double plane_coeff[4];
  tesseract_msgs__msg__Mesh mesh;
  octomap_msgs__msg__Octomap octomap;
} tesseract_msgs__msg__Geometry;

// Struct for a sequence of tesseract_msgs__msg__Geometry.
typedef struct tesseract_msgs__msg__Geometry__Sequence
{
  tesseract_msgs__msg__Geometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__Geometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__GEOMETRY__STRUCT_H_
