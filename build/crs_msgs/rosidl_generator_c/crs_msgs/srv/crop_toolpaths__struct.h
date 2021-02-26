// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/CropToolpaths.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__CROP_TOOLPATHS__STRUCT_H_
#define CRS_MSGS__SRV__CROP_TOOLPATHS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'images'
#include "sensor_msgs/msg/image__struct.h"
// Member 'clouds'
#include "sensor_msgs/msg/point_cloud2__struct.h"
// Member 'transforms'
#include "geometry_msgs/msg/transform_stamped__struct.h"
// Member 'toolpaths'
#include "crs_msgs/msg/tool_process_path__struct.h"

// Struct defined in srv/CropToolpaths in the package crs_msgs.
typedef struct crs_msgs__srv__CropToolpaths_Request
{
  sensor_msgs__msg__Image__Sequence images;
  sensor_msgs__msg__PointCloud2__Sequence clouds;
  geometry_msgs__msg__TransformStamped__Sequence transforms;
  crs_msgs__msg__ToolProcessPath__Sequence toolpaths;
} crs_msgs__srv__CropToolpaths_Request;

// Struct for a sequence of crs_msgs__srv__CropToolpaths_Request.
typedef struct crs_msgs__srv__CropToolpaths_Request__Sequence
{
  crs_msgs__srv__CropToolpaths_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__CropToolpaths_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'cropped_toolpaths'
// already included above
// #include "crs_msgs/msg/tool_process_path__struct.h"
// Member 'err_msg'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/CropToolpaths in the package crs_msgs.
typedef struct crs_msgs__srv__CropToolpaths_Response
{
  crs_msgs__msg__ToolProcessPath__Sequence cropped_toolpaths;
  bool succeeded;
  rosidl_generator_c__String err_msg;
} crs_msgs__srv__CropToolpaths_Response;

// Struct for a sequence of crs_msgs__srv__CropToolpaths_Response.
typedef struct crs_msgs__srv__CropToolpaths_Response__Sequence
{
  crs_msgs__srv__CropToolpaths_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__CropToolpaths_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__CROP_TOOLPATHS__STRUCT_H_
