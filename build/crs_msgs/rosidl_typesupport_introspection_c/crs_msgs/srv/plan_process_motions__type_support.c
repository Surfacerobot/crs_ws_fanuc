// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crs_msgs:srv/PlanProcessMotions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crs_msgs/srv/plan_process_motions__rosidl_typesupport_introspection_c.h"
#include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crs_msgs/srv/plan_process_motions__functions.h"
#include "crs_msgs/srv/plan_process_motions__struct.h"


// Include directives for member types
// Member `tool_link`
#include "rosidl_generator_c/string_functions.h"
// Member `start_position`
// Member `end_position`
#include "sensor_msgs/msg/joint_state.h"
// Member `start_position`
// Member `end_position`
#include "sensor_msgs/msg/joint_state__rosidl_typesupport_introspection_c.h"
// Member `tool_offset`
#include "geometry_msgs/msg/pose.h"
// Member `tool_offset`
#include "geometry_msgs/msg/pose__rosidl_typesupport_introspection_c.h"
// Member `process_paths`
#include "crs_msgs/msg/tool_process_path.h"
// Member `process_paths`
#include "crs_msgs/msg/tool_process_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__srv__PlanProcessMotions_Request__init(message_memory);
}

void PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_fini_function(void * message_memory)
{
  crs_msgs__srv__PlanProcessMotions_Request__fini(message_memory);
}

size_t PlanProcessMotions_Request__rosidl_typesupport_introspection_c__size_function__ToolProcessPath__process_paths(
  const void * untyped_member)
{
  const crs_msgs__msg__ToolProcessPath__Sequence * member =
    (const crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  return member->size;
}

const void * PlanProcessMotions_Request__rosidl_typesupport_introspection_c__get_const_function__ToolProcessPath__process_paths(
  const void * untyped_member, size_t index)
{
  const crs_msgs__msg__ToolProcessPath__Sequence * member =
    (const crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PlanProcessMotions_Request__rosidl_typesupport_introspection_c__get_function__ToolProcessPath__process_paths(
  void * untyped_member, size_t index)
{
  crs_msgs__msg__ToolProcessPath__Sequence * member =
    (crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PlanProcessMotions_Request__rosidl_typesupport_introspection_c__resize_function__ToolProcessPath__process_paths(
  void * untyped_member, size_t size)
{
  crs_msgs__msg__ToolProcessPath__Sequence * member =
    (crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  crs_msgs__msg__ToolProcessPath__Sequence__fini(member);
  return crs_msgs__msg__ToolProcessPath__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_member_array[9] = {
  {
    "tool_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Request, tool_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Request, start_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Request, end_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tool_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Request, tool_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "approach_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Request, approach_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "retreat_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Request, retreat_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tool_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Request, tool_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Request, target_force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "process_paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Request, process_paths),  // bytes offset in struct
    NULL,  // default value
    PlanProcessMotions_Request__rosidl_typesupport_introspection_c__size_function__ToolProcessPath__process_paths,  // size() function pointer
    PlanProcessMotions_Request__rosidl_typesupport_introspection_c__get_const_function__ToolProcessPath__process_paths,  // get_const(index) function pointer
    PlanProcessMotions_Request__rosidl_typesupport_introspection_c__get_function__ToolProcessPath__process_paths,  // get(index) function pointer
    PlanProcessMotions_Request__rosidl_typesupport_introspection_c__resize_function__ToolProcessPath__process_paths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_members = {
  "crs_msgs__srv",  // message namespace
  "PlanProcessMotions_Request",  // message name
  9,  // number of fields
  sizeof(crs_msgs__srv__PlanProcessMotions_Request),
  PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_member_array,  // message members
  PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_type_support_handle = {
  0,
  &PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, PlanProcessMotions_Request)() {
  PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, msg, ToolProcessPath)();
  if (!PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_type_support_handle.typesupport_identifier) {
    PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PlanProcessMotions_Request__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "crs_msgs/srv/plan_process_motions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "crs_msgs/srv/plan_process_motions__functions.h"
// already included above
// #include "crs_msgs/srv/plan_process_motions__struct.h"


// Include directives for member types
// Member `plans`
#include "crs_msgs/msg/process_motion_plan.h"
// Member `plans`
#include "crs_msgs/msg/process_motion_plan__rosidl_typesupport_introspection_c.h"
// Member `err_msg`
// already included above
// #include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__srv__PlanProcessMotions_Response__init(message_memory);
}

void PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_fini_function(void * message_memory)
{
  crs_msgs__srv__PlanProcessMotions_Response__fini(message_memory);
}

size_t PlanProcessMotions_Response__rosidl_typesupport_introspection_c__size_function__ProcessMotionPlan__plans(
  const void * untyped_member)
{
  const crs_msgs__msg__ProcessMotionPlan__Sequence * member =
    (const crs_msgs__msg__ProcessMotionPlan__Sequence *)(untyped_member);
  return member->size;
}

const void * PlanProcessMotions_Response__rosidl_typesupport_introspection_c__get_const_function__ProcessMotionPlan__plans(
  const void * untyped_member, size_t index)
{
  const crs_msgs__msg__ProcessMotionPlan__Sequence * member =
    (const crs_msgs__msg__ProcessMotionPlan__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PlanProcessMotions_Response__rosidl_typesupport_introspection_c__get_function__ProcessMotionPlan__plans(
  void * untyped_member, size_t index)
{
  crs_msgs__msg__ProcessMotionPlan__Sequence * member =
    (crs_msgs__msg__ProcessMotionPlan__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PlanProcessMotions_Response__rosidl_typesupport_introspection_c__resize_function__ProcessMotionPlan__plans(
  void * untyped_member, size_t size)
{
  crs_msgs__msg__ProcessMotionPlan__Sequence * member =
    (crs_msgs__msg__ProcessMotionPlan__Sequence *)(untyped_member);
  crs_msgs__msg__ProcessMotionPlan__Sequence__fini(member);
  return crs_msgs__msg__ProcessMotionPlan__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_message_member_array[3] = {
  {
    "plans",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Response, plans),  // bytes offset in struct
    NULL,  // default value
    PlanProcessMotions_Response__rosidl_typesupport_introspection_c__size_function__ProcessMotionPlan__plans,  // size() function pointer
    PlanProcessMotions_Response__rosidl_typesupport_introspection_c__get_const_function__ProcessMotionPlan__plans,  // get_const(index) function pointer
    PlanProcessMotions_Response__rosidl_typesupport_introspection_c__get_function__ProcessMotionPlan__plans,  // get(index) function pointer
    PlanProcessMotions_Response__rosidl_typesupport_introspection_c__resize_function__ProcessMotionPlan__plans  // resize(index) function pointer
  },
  {
    "succeeded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Response, succeeded),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "err_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__PlanProcessMotions_Response, err_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_message_members = {
  "crs_msgs__srv",  // message namespace
  "PlanProcessMotions_Response",  // message name
  3,  // number of fields
  sizeof(crs_msgs__srv__PlanProcessMotions_Response),
  PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_message_member_array,  // message members
  PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_message_type_support_handle = {
  0,
  &PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, PlanProcessMotions_Response)() {
  PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, msg, ProcessMotionPlan)();
  if (!PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_message_type_support_handle.typesupport_identifier) {
    PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PlanProcessMotions_Response__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "crs_msgs/srv/plan_process_motions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers crs_msgs__srv__plan_process_motions__rosidl_typesupport_introspection_c__PlanProcessMotions_service_members = {
  "crs_msgs__srv",  // service namespace
  "PlanProcessMotions",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // crs_msgs__srv__plan_process_motions__rosidl_typesupport_introspection_c__PlanProcessMotions_Request_message_type_support_handle,
  NULL  // response message
  // crs_msgs__srv__plan_process_motions__rosidl_typesupport_introspection_c__PlanProcessMotions_Response_message_type_support_handle
};

static rosidl_service_type_support_t crs_msgs__srv__plan_process_motions__rosidl_typesupport_introspection_c__PlanProcessMotions_service_type_support_handle = {
  0,
  &crs_msgs__srv__plan_process_motions__rosidl_typesupport_introspection_c__PlanProcessMotions_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, PlanProcessMotions_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, PlanProcessMotions_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, PlanProcessMotions)() {
  if (!crs_msgs__srv__plan_process_motions__rosidl_typesupport_introspection_c__PlanProcessMotions_service_type_support_handle.typesupport_identifier) {
    crs_msgs__srv__plan_process_motions__rosidl_typesupport_introspection_c__PlanProcessMotions_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)crs_msgs__srv__plan_process_motions__rosidl_typesupport_introspection_c__PlanProcessMotions_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, PlanProcessMotions_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, PlanProcessMotions_Response)()->data;
  }

  return &crs_msgs__srv__plan_process_motions__rosidl_typesupport_introspection_c__PlanProcessMotions_service_type_support_handle;
}
