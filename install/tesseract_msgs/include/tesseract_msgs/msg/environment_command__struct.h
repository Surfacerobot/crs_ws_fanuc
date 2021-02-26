// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__ENVIRONMENT_COMMAND__STRUCT_H_
#define TESSERACT_MSGS__MSG__ENVIRONMENT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADD'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__ADD = 0
};

/// Constant 'MOVE_LINK'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__MOVE_LINK = 1
};

/// Constant 'MOVE_JOINT'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__MOVE_JOINT = 2
};

/// Constant 'REMOVE_LINK'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__REMOVE_LINK = 3
};

/// Constant 'REMOVE_JOINT'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__REMOVE_JOINT = 4
};

/// Constant 'CHANGE_LINK_ORIGIN'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_LINK_ORIGIN = 5
};

/// Constant 'CHANGE_JOINT_ORIGIN'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_JOINT_ORIGIN = 6
};

/// Constant 'CHANGE_LINK_COLLISION_ENABLED'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_LINK_COLLISION_ENABLED = 7
};

/// Constant 'CHANGE_LINK_VISIBILITY'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__CHANGE_LINK_VISIBILITY = 8
};

/// Constant 'ADD_ALLOWED_COLLISION'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__ADD_ALLOWED_COLLISION = 9
};

/// Constant 'REMOVE_ALLOWED_COLLISION'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__REMOVE_ALLOWED_COLLISION = 10
};

/// Constant 'REMOVE_ALLOWED_COLLISION_LINK'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__REMOVE_ALLOWED_COLLISION_LINK = 11
};

/// Constant 'UPDATE_JOINT_STATE'.
enum
{
  tesseract_msgs__msg__EnvironmentCommand__UPDATE_JOINT_STATE = 12
};

// Include directives for member types
// Member 'add_link'
#include "tesseract_msgs/msg/link__struct.h"
// Member 'add_joint'
// Member 'move_link_joint'
#include "tesseract_msgs/msg/joint__struct.h"
// Member 'move_joint_name'
// Member 'move_joint_parent_link'
// Member 'remove_link'
// Member 'remove_joint'
// Member 'change_link_origin_name'
// Member 'change_joint_origin_name'
// Member 'change_link_collision_enabled_name'
// Member 'change_link_visibility_name'
// Member 'remove_allowed_collision_link'
#include "rosidl_generator_c/string.h"
// Member 'change_link_origin_pose'
// Member 'change_joint_origin_pose'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'add_allowed_collision'
// Member 'remove_allowed_collision'
#include "tesseract_msgs/msg/allowed_collision_entry__struct.h"
// Member 'joint_state'
#include "sensor_msgs/msg/joint_state__struct.h"

// Struct defined in msg/EnvironmentCommand in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__EnvironmentCommand
{
  uint8_t command;
  tesseract_msgs__msg__Link add_link;
  tesseract_msgs__msg__Joint add_joint;
  tesseract_msgs__msg__Joint move_link_joint;
  rosidl_generator_c__String move_joint_name;
  rosidl_generator_c__String move_joint_parent_link;
  rosidl_generator_c__String remove_link;
  rosidl_generator_c__String remove_joint;
  rosidl_generator_c__String change_link_origin_name;
  geometry_msgs__msg__Pose change_link_origin_pose;
  rosidl_generator_c__String change_joint_origin_name;
  geometry_msgs__msg__Pose change_joint_origin_pose;
  rosidl_generator_c__String change_link_collision_enabled_name;
  bool change_link_collision_enabled_value;
  rosidl_generator_c__String change_link_visibility_name;
  bool change_link_visibility_value;
  tesseract_msgs__msg__AllowedCollisionEntry add_allowed_collision;
  tesseract_msgs__msg__AllowedCollisionEntry remove_allowed_collision;
  rosidl_generator_c__String remove_allowed_collision_link;
  sensor_msgs__msg__JointState joint_state;
} tesseract_msgs__msg__EnvironmentCommand;

// Struct for a sequence of tesseract_msgs__msg__EnvironmentCommand.
typedef struct tesseract_msgs__msg__EnvironmentCommand__Sequence
{
  tesseract_msgs__msg__EnvironmentCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__EnvironmentCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__ENVIRONMENT_COMMAND__STRUCT_H_
