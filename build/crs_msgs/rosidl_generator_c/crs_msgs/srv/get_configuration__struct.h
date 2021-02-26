// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/GetConfiguration.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__GET_CONFIGURATION__STRUCT_H_
#define CRS_MSGS__SRV__GET_CONFIGURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetConfiguration in the package crs_msgs.
typedef struct crs_msgs__srv__GetConfiguration_Request
{
  uint8_t structure_needs_at_least_one_member;
} crs_msgs__srv__GetConfiguration_Request;

// Struct for a sequence of crs_msgs__srv__GetConfiguration_Request.
typedef struct crs_msgs__srv__GetConfiguration_Request__Sequence
{
  crs_msgs__srv__GetConfiguration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__GetConfiguration_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'config'
#include "crs_msgs/msg/process_configuration__struct.h"
// Member 'err_msg'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/GetConfiguration in the package crs_msgs.
typedef struct crs_msgs__srv__GetConfiguration_Response
{
  crs_msgs__msg__ProcessConfiguration config;
  bool success;
  rosidl_generator_c__String err_msg;
} crs_msgs__srv__GetConfiguration_Response;

// Struct for a sequence of crs_msgs__srv__GetConfiguration_Response.
typedef struct crs_msgs__srv__GetConfiguration_Response__Sequence
{
  crs_msgs__srv__GetConfiguration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__GetConfiguration_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__GET_CONFIGURATION__STRUCT_H_
