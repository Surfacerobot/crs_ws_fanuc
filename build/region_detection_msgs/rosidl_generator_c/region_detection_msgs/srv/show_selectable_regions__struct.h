// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from region_detection_msgs:srv/ShowSelectableRegions.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__SRV__SHOW_SELECTABLE_REGIONS__STRUCT_H_
#define REGION_DETECTION_MSGS__SRV__SHOW_SELECTABLE_REGIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'selectable_regions'
#include "geometry_msgs/msg/pose_array__struct.h"

// Struct defined in srv/ShowSelectableRegions in the package region_detection_msgs.
typedef struct region_detection_msgs__srv__ShowSelectableRegions_Request
{
  geometry_msgs__msg__PoseArray__Sequence selectable_regions;
  bool start_selected;
} region_detection_msgs__srv__ShowSelectableRegions_Request;

// Struct for a sequence of region_detection_msgs__srv__ShowSelectableRegions_Request.
typedef struct region_detection_msgs__srv__ShowSelectableRegions_Request__Sequence
{
  region_detection_msgs__srv__ShowSelectableRegions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} region_detection_msgs__srv__ShowSelectableRegions_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ShowSelectableRegions in the package region_detection_msgs.
typedef struct region_detection_msgs__srv__ShowSelectableRegions_Response
{
  uint8_t structure_needs_at_least_one_member;
} region_detection_msgs__srv__ShowSelectableRegions_Response;

// Struct for a sequence of region_detection_msgs__srv__ShowSelectableRegions_Response.
typedef struct region_detection_msgs__srv__ShowSelectableRegions_Response__Sequence
{
  region_detection_msgs__srv__ShowSelectableRegions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} region_detection_msgs__srv__ShowSelectableRegions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REGION_DETECTION_MSGS__SRV__SHOW_SELECTABLE_REGIONS__STRUCT_H_
