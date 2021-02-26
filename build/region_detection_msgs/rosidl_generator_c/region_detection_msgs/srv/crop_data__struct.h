// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from region_detection_msgs:srv/CropData.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__SRV__CROP_DATA__STRUCT_H_
#define REGION_DETECTION_MSGS__SRV__CROP_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'crop_regions'
// Member 'input_data'
#include "geometry_msgs/msg/pose_array__struct.h"

// Struct defined in srv/CropData in the package region_detection_msgs.
typedef struct region_detection_msgs__srv__CropData_Request
{
  geometry_msgs__msg__PoseArray__Sequence crop_regions;
  geometry_msgs__msg__PoseArray__Sequence input_data;
} region_detection_msgs__srv__CropData_Request;

// Struct for a sequence of region_detection_msgs__srv__CropData_Request.
typedef struct region_detection_msgs__srv__CropData_Request__Sequence
{
  region_detection_msgs__srv__CropData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} region_detection_msgs__srv__CropData_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'cropped_data'
#include "region_detection_msgs/msg/pose_set__struct.h"
// Member 'err_msg'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/CropData in the package region_detection_msgs.
typedef struct region_detection_msgs__srv__CropData_Response
{
  region_detection_msgs__msg__PoseSet__Sequence cropped_data;
  bool succeeded;
  rosidl_generator_c__String err_msg;
} region_detection_msgs__srv__CropData_Response;

// Struct for a sequence of region_detection_msgs__srv__CropData_Response.
typedef struct region_detection_msgs__srv__CropData_Response__Sequence
{
  region_detection_msgs__srv__CropData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} region_detection_msgs__srv__CropData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REGION_DETECTION_MSGS__SRV__CROP_DATA__STRUCT_H_
