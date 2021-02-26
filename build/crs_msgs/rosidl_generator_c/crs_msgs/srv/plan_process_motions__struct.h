// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/PlanProcessMotions.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__PLAN_PROCESS_MOTIONS__STRUCT_H_
#define CRS_MSGS__SRV__PLAN_PROCESS_MOTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tool_link'
#include "rosidl_generator_c/string.h"
// Member 'start_position'
// Member 'end_position'
#include "sensor_msgs/msg/joint_state__struct.h"
// Member 'tool_offset'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'process_paths'
#include "crs_msgs/msg/tool_process_path__struct.h"

// Struct defined in srv/PlanProcessMotions in the package crs_msgs.
typedef struct crs_msgs__srv__PlanProcessMotions_Request
{
  rosidl_generator_c__String tool_link;
  sensor_msgs__msg__JointState start_position;
  sensor_msgs__msg__JointState end_position;
  geometry_msgs__msg__Pose tool_offset;
  double approach_dist;
  double retreat_dist;
  double tool_speed;
  double target_force;
  crs_msgs__msg__ToolProcessPath__Sequence process_paths;
} crs_msgs__srv__PlanProcessMotions_Request;

// Struct for a sequence of crs_msgs__srv__PlanProcessMotions_Request.
typedef struct crs_msgs__srv__PlanProcessMotions_Request__Sequence
{
  crs_msgs__srv__PlanProcessMotions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__PlanProcessMotions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'plans'
#include "crs_msgs/msg/process_motion_plan__struct.h"
// Member 'err_msg'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/PlanProcessMotions in the package crs_msgs.
typedef struct crs_msgs__srv__PlanProcessMotions_Response
{
  crs_msgs__msg__ProcessMotionPlan__Sequence plans;
  bool succeeded;
  rosidl_generator_c__String err_msg;
} crs_msgs__srv__PlanProcessMotions_Response;

// Struct for a sequence of crs_msgs__srv__PlanProcessMotions_Response.
typedef struct crs_msgs__srv__PlanProcessMotions_Response__Sequence
{
  crs_msgs__srv__PlanProcessMotions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crs_msgs__srv__PlanProcessMotions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__PLAN_PROCESS_MOTIONS__STRUCT_H_
