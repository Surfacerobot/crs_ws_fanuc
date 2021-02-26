// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/ExecuteAction.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__EXECUTE_ACTION__STRUCT_H_
#define CRS_MSGS__SRV__EXECUTE_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action_id'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/ExecuteAction in the package crs_msgs.
typedef struct crs_msgs__srv__ExecuteAction_Request
{
  rosidl_generator_c__String action_id;
} crs_msgs__srv__ExecuteAction_Request;

// Struct for a sequence of crs_msgs__srv__ExecuteAction_Request.
typedef struct crs_msgs__srv__ExecuteAction_Request__Sequence
{
  crs_msgs__srv__ExecuteAction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__ExecuteAction_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'err_msg'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/ExecuteAction in the package crs_msgs.
typedef struct crs_msgs__srv__ExecuteAction_Response
{
  bool succeeded;
  rosidl_generator_c__String err_msg;
} crs_msgs__srv__ExecuteAction_Response;

// Struct for a sequence of crs_msgs__srv__ExecuteAction_Response.
typedef struct crs_msgs__srv__ExecuteAction_Response__Sequence
{
  crs_msgs__srv__ExecuteAction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__ExecuteAction_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__EXECUTE_ACTION__STRUCT_H_
