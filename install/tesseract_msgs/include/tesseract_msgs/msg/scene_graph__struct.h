// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__SCENE_GRAPH__STRUCT_H_
#define TESSERACT_MSGS__MSG__SCENE_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'graph_name'
// Member 'graph_root'
#include "rosidl_generator_c/string.h"
// Member 'link_list'
#include "tesseract_msgs/msg/link__struct.h"
// Member 'joint_list'
#include "tesseract_msgs/msg/joint__struct.h"
// Member 'acm'
#include "tesseract_msgs/msg/allowed_collision_entry__struct.h"

// Struct defined in msg/SceneGraph in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__SceneGraph
{
  rosidl_generator_c__String graph_name;
  rosidl_generator_c__String graph_root;
  tesseract_msgs__msg__Link__Sequence link_list;
  tesseract_msgs__msg__Joint__Sequence joint_list;
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence acm;
} tesseract_msgs__msg__SceneGraph;

// Struct for a sequence of tesseract_msgs__msg__SceneGraph.
typedef struct tesseract_msgs__msg__SceneGraph__Sequence
{
  tesseract_msgs__msg__SceneGraph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__SceneGraph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__SCENE_GRAPH__STRUCT_H_
