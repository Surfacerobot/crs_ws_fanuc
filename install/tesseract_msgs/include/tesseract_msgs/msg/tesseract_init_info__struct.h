// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/TesseractInitInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__TESSERACT_INIT_INFO__STRUCT_H_
#define TESSERACT_MSGS__MSG__TESSERACT_INIT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SCENE_GRAPH'.
enum
{
  tesseract_msgs__msg__TesseractInitInfo__SCENE_GRAPH = 0
};

/// Constant 'SCENE_GRAPH_SRDF_MODEL'.
enum
{
  tesseract_msgs__msg__TesseractInitInfo__SCENE_GRAPH_SRDF_MODEL = 1
};

/// Constant 'URDF_STRING'.
enum
{
  tesseract_msgs__msg__TesseractInitInfo__URDF_STRING = 2
};

/// Constant 'URDF_STRING_SRDF_STRING'.
enum
{
  tesseract_msgs__msg__TesseractInitInfo__URDF_STRING_SRDF_STRING = 3
};

/// Constant 'URDF_PATH'.
enum
{
  tesseract_msgs__msg__TesseractInitInfo__URDF_PATH = 4
};

/// Constant 'URDF_PATH_SRDF_PATH'.
enum
{
  tesseract_msgs__msg__TesseractInitInfo__URDF_PATH_SRDF_PATH = 5
};

// Include directives for member types
// Member 'scene_graph'
#include "tesseract_msgs/msg/scene_graph__struct.h"
// Member 'urdf_string'
// Member 'srdf_string'
// Member 'urdf_path'
// Member 'srdf_path'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/TesseractInitInfo in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__TesseractInitInfo
{
  uint8_t type;
  tesseract_msgs__msg__SceneGraph scene_graph;
  rosidl_generator_c__String urdf_string;
  rosidl_generator_c__String srdf_string;
  rosidl_generator_c__String urdf_path;
  rosidl_generator_c__String srdf_path;
} tesseract_msgs__msg__TesseractInitInfo;

// Struct for a sequence of tesseract_msgs__msg__TesseractInitInfo.
typedef struct tesseract_msgs__msg__TesseractInitInfo__Sequence
{
  tesseract_msgs__msg__TesseractInitInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__TesseractInitInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__TESSERACT_INIT_INFO__STRUCT_H_
