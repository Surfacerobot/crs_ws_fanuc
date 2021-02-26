// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/GetROISelection.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__GET_ROI_SELECTION__STRUCT_H_
#define CRS_MSGS__SRV__GET_ROI_SELECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_cloud'
#include "sensor_msgs/msg/point_cloud2__struct.h"

// Struct defined in srv/GetROISelection in the package crs_msgs.
typedef struct crs_msgs__srv__GetROISelection_Request
{
  sensor_msgs__msg__PointCloud2 input_cloud;
} crs_msgs__srv__GetROISelection_Request;

// Struct for a sequence of crs_msgs__srv__GetROISelection_Request.
typedef struct crs_msgs__srv__GetROISelection_Request__Sequence
{
  crs_msgs__srv__GetROISelection_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__GetROISelection_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_generator_c/string.h"
// Member 'cloud_indices'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/GetROISelection in the package crs_msgs.
typedef struct crs_msgs__srv__GetROISelection_Response
{
  bool success;
  rosidl_generator_c__String message;
  rosidl_generator_c__int32__Sequence cloud_indices;
} crs_msgs__srv__GetROISelection_Response;

// Struct for a sequence of crs_msgs__srv__GetROISelection_Response.
typedef struct crs_msgs__srv__GetROISelection_Response__Sequence
{
  crs_msgs__srv__GetROISelection_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__GetROISelection_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__GET_ROI_SELECTION__STRUCT_H_
