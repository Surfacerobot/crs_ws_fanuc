// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/LocalizeToPart.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__LOCALIZE_TO_PART__STRUCT_H_
#define CRS_MSGS__SRV__LOCALIZE_TO_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame'
#include "rosidl_generator_c/string.h"
// Member 'point_clouds'
#include "sensor_msgs/msg/point_cloud2__struct.h"
// Member 'transforms'
#include "geometry_msgs/msg/transform_stamped__struct.h"

// Struct defined in srv/LocalizeToPart in the package crs_msgs.
typedef struct crs_msgs__srv__LocalizeToPart_Request
{
  rosidl_generator_c__String frame;
  sensor_msgs__msg__PointCloud2__Sequence point_clouds;
  geometry_msgs__msg__TransformStamped__Sequence transforms;
} crs_msgs__srv__LocalizeToPart_Request;

// Struct for a sequence of crs_msgs__srv__LocalizeToPart_Request.
typedef struct crs_msgs__srv__LocalizeToPart_Request__Sequence
{
  crs_msgs__srv__LocalizeToPart_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__LocalizeToPart_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error'
// already included above
// #include "rosidl_generator_c/string.h"
// Member 'transform'
// already included above
// #include "geometry_msgs/msg/transform_stamped__struct.h"

// Struct defined in srv/LocalizeToPart in the package crs_msgs.
typedef struct crs_msgs__srv__LocalizeToPart_Response
{
  bool success;
  rosidl_generator_c__String error;
  geometry_msgs__msg__TransformStamped transform;
} crs_msgs__srv__LocalizeToPart_Response;

// Struct for a sequence of crs_msgs__srv__LocalizeToPart_Response.
typedef struct crs_msgs__srv__LocalizeToPart_Response__Sequence
{
  crs_msgs__srv__LocalizeToPart_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__LocalizeToPart_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__LOCALIZE_TO_PART__STRUCT_H_
