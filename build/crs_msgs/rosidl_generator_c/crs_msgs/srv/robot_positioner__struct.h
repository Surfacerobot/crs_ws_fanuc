// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/RobotPositioner.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__ROBOT_POSITIONER__STRUCT_H_
#define CRS_MSGS__SRV__ROBOT_POSITIONER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POSITION1'.
enum
{
  crs_msgs__srv__RobotPositioner_Request__POSITION1 = 0
};

/// Constant 'POSITION2'.
enum
{
  crs_msgs__srv__RobotPositioner_Request__POSITION2 = 1
};

/// Constant 'POSITION3'.
enum
{
  crs_msgs__srv__RobotPositioner_Request__POSITION3 = 2
};

/// Constant 'RAIL1'.
enum
{
  crs_msgs__srv__RobotPositioner_Request__RAIL1 = 0
};

/// Constant 'RAIL2'.
enum
{
  crs_msgs__srv__RobotPositioner_Request__RAIL2 = 1
};

// Struct defined in srv/RobotPositioner in the package crs_msgs.
typedef struct crs_msgs__srv__RobotPositioner_Request
{
  uint8_t robot_position;
  uint8_t robot_rail;
} crs_msgs__srv__RobotPositioner_Request;

// Struct for a sequence of crs_msgs__srv__RobotPositioner_Request.
typedef struct crs_msgs__srv__RobotPositioner_Request__Sequence
{
  crs_msgs__srv__RobotPositioner_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__RobotPositioner_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/RobotPositioner in the package crs_msgs.
typedef struct crs_msgs__srv__RobotPositioner_Response
{
  bool success;
  rosidl_generator_c__String error;
} crs_msgs__srv__RobotPositioner_Response;

// Struct for a sequence of crs_msgs__srv__RobotPositioner_Response.
typedef struct crs_msgs__srv__RobotPositioner_Response__Sequence
{
  crs_msgs__srv__RobotPositioner_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__RobotPositioner_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__ROBOT_POSITIONER__STRUCT_H_
