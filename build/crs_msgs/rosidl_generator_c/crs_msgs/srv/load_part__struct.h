// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/LoadPart.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__LOAD_PART__STRUCT_H_
#define CRS_MSGS__SRV__LOAD_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path_to_part'
#include "rosidl_generator_c/string.h"
// Member 'part_origin'
#include "geometry_msgs/msg/pose__struct.h"

// Struct defined in srv/LoadPart in the package crs_msgs.
typedef struct crs_msgs__srv__LoadPart_Request
{
  rosidl_generator_c__String path_to_part;
  geometry_msgs__msg__Pose part_origin;
} crs_msgs__srv__LoadPart_Request;

// Struct for a sequence of crs_msgs__srv__LoadPart_Request.
typedef struct crs_msgs__srv__LoadPart_Request__Sequence
{
  crs_msgs__srv__LoadPart_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__LoadPart_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/LoadPart in the package crs_msgs.
typedef struct crs_msgs__srv__LoadPart_Response
{
  bool success;
  rosidl_generator_c__String error;
} crs_msgs__srv__LoadPart_Response;

// Struct for a sequence of crs_msgs__srv__LoadPart_Response.
typedef struct crs_msgs__srv__LoadPart_Response__Sequence
{
  crs_msgs__srv__LoadPart_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__LoadPart_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__LOAD_PART__STRUCT_H_
