// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/RunRobotScript.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__RUN_ROBOT_SCRIPT__STRUCT_H_
#define CRS_MSGS__SRV__RUN_ROBOT_SCRIPT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filename'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/RunRobotScript in the package crs_msgs.
typedef struct crs_msgs__srv__RunRobotScript_Request
{
  rosidl_generator_c__String filename;
} crs_msgs__srv__RunRobotScript_Request;

// Struct for a sequence of crs_msgs__srv__RunRobotScript_Request.
typedef struct crs_msgs__srv__RunRobotScript_Request__Sequence
{
  crs_msgs__srv__RunRobotScript_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__RunRobotScript_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'answer'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/RunRobotScript in the package crs_msgs.
typedef struct crs_msgs__srv__RunRobotScript_Response
{
  rosidl_generator_c__String answer;
  bool success;
} crs_msgs__srv__RunRobotScript_Response;

// Struct for a sequence of crs_msgs__srv__RunRobotScript_Response.
typedef struct crs_msgs__srv__RunRobotScript_Response__Sequence
{
  crs_msgs__srv__RunRobotScript_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__RunRobotScript_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__RUN_ROBOT_SCRIPT__STRUCT_H_
