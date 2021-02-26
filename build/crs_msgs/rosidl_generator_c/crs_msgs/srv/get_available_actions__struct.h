// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/GetAvailableActions.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__GET_AVAILABLE_ACTIONS__STRUCT_H_
#define CRS_MSGS__SRV__GET_AVAILABLE_ACTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PATTERN_USER_ACTIONS'.
static const char * const crs_msgs__srv__GetAvailableActions_Request__PATTERN_USER_ACTIONS = "^user*";

// Include directives for member types
// Member 'search_pattern'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/GetAvailableActions in the package crs_msgs.
typedef struct crs_msgs__srv__GetAvailableActions_Request
{
  rosidl_generator_c__String search_pattern;
} crs_msgs__srv__GetAvailableActions_Request;

// Struct for a sequence of crs_msgs__srv__GetAvailableActions_Request.
typedef struct crs_msgs__srv__GetAvailableActions_Request__Sequence
{
  crs_msgs__srv__GetAvailableActions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__GetAvailableActions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'action_ids'
// Member 'err_msg'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/GetAvailableActions in the package crs_msgs.
typedef struct crs_msgs__srv__GetAvailableActions_Response
{
  rosidl_generator_c__String__Sequence action_ids;
  bool succeeded;
  rosidl_generator_c__String err_msg;
} crs_msgs__srv__GetAvailableActions_Response;

// Struct for a sequence of crs_msgs__srv__GetAvailableActions_Response.
typedef struct crs_msgs__srv__GetAvailableActions_Response__Sequence
{
  crs_msgs__srv__GetAvailableActions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__GetAvailableActions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__GET_AVAILABLE_ACTIONS__STRUCT_H_
