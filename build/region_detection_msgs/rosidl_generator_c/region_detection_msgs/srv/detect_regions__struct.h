// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from region_detection_msgs:srv/DetectRegions.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__STRUCT_H_
#define REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__STRUCT_H_

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

// Struct defined in srv/DetectRegions in the package region_detection_msgs.
typedef struct region_detection_msgs__srv__DetectRegions_Request
{
  sensor_msgs__msg__Image__Sequence images;
  sensor_msgs__msg__PointCloud2__Sequence clouds;
  geometry_msgs__msg__TransformStamped__Sequence transforms;
} region_detection_msgs__srv__DetectRegions_Request;

// Struct for a sequence of region_detection_msgs__srv__DetectRegions_Request.
typedef struct region_detection_msgs__srv__DetectRegions_Request__Sequence
{
  region_detection_msgs__srv__DetectRegions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} region_detection_msgs__srv__DetectRegions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'detected_regions'
#include "geometry_msgs/msg/pose_array__struct.h"
// Member 'err_msg'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/DetectRegions in the package region_detection_msgs.
typedef struct region_detection_msgs__srv__DetectRegions_Response
{
  geometry_msgs__msg__PoseArray__Sequence detected_regions;
  bool succeeded;
  rosidl_generator_c__String err_msg;
} region_detection_msgs__srv__DetectRegions_Response;

// Struct for a sequence of region_detection_msgs__srv__DetectRegions_Response.
typedef struct region_detection_msgs__srv__DetectRegions_Response__Sequence
{
  region_detection_msgs__srv__DetectRegions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} region_detection_msgs__srv__DetectRegions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__STRUCT_H_
