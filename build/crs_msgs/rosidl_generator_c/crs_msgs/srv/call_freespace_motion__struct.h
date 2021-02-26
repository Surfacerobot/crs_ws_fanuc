// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/CallFreespaceMotion.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__CALL_FREESPACE_MOTION__STRUCT_H_
#define CRS_MSGS__SRV__CALL_FREESPACE_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_link'
#include "rosidl_generator_c/string.h"
// Member 'start_position'
// Member 'goal_position'
#include "sensor_msgs/msg/joint_state__struct.h"
// Member 'goal_pose'
#include "geometry_msgs/msg/transform__struct.h"

// Struct defined in srv/CallFreespaceMotion in the package crs_msgs.
typedef struct crs_msgs__srv__CallFreespaceMotion_Request
{
  rosidl_generator_c__String target_link;
  sensor_msgs__msg__JointState start_position;
  sensor_msgs__msg__JointState goal_position;
  geometry_msgs__msg__Transform goal_pose;
  int32_t num_steps;
  bool execute;
} crs_msgs__srv__CallFreespaceMotion_Request;

// Struct for a sequence of crs_msgs__srv__CallFreespaceMotion_Request.
typedef struct crs_msgs__srv__CallFreespaceMotion_Request__Sequence
{
  crs_msgs__srv__CallFreespaceMotion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__CallFreespaceMotion_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output_trajectory'
#include "trajectory_msgs/msg/joint_trajectory__struct.h"
// Member 'message'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/CallFreespaceMotion in the package crs_msgs.
typedef struct crs_msgs__srv__CallFreespaceMotion_Response
{
  trajectory_msgs__msg__JointTrajectory output_trajectory;
  bool success;
  rosidl_generator_c__String message;
} crs_msgs__srv__CallFreespaceMotion_Response;

// Struct for a sequence of crs_msgs__srv__CallFreespaceMotion_Response.
typedef struct crs_msgs__srv__CallFreespaceMotion_Response__Sequence
{
  crs_msgs__srv__CallFreespaceMotion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__CallFreespaceMotion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__CALL_FREESPACE_MOTION__STRUCT_H_
