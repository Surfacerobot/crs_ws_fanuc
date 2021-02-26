// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crs_msgs:srv/CallFreespaceMotion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crs_msgs/srv/call_freespace_motion__rosidl_typesupport_introspection_c.h"
#include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crs_msgs/srv/call_freespace_motion__functions.h"
#include "crs_msgs/srv/call_freespace_motion__struct.h"


// Include directives for member types
// Member `target_link`
#include "rosidl_generator_c/string_functions.h"
// Member `start_position`
// Member `goal_position`
#include "sensor_msgs/msg/joint_state.h"
// Member `start_position`
// Member `goal_position`
#include "sensor_msgs/msg/joint_state__rosidl_typesupport_introspection_c.h"
// Member `goal_pose`
#include "geometry_msgs/msg/transform.h"
// Member `goal_pose`
#include "geometry_msgs/msg/transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__srv__CallFreespaceMotion_Request__init(message_memory);
}

void CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_fini_function(void * message_memory)
{
  crs_msgs__srv__CallFreespaceMotion_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_member_array[6] = {
  {
    "target_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CallFreespaceMotion_Request, target_link),  // bytes offset in struct
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
    offsetof(crs_msgs__srv__CallFreespaceMotion_Request, start_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CallFreespaceMotion_Request, goal_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CallFreespaceMotion_Request, goal_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_steps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CallFreespaceMotion_Request, num_steps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "execute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CallFreespaceMotion_Request, execute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_members = {
  "crs_msgs__srv",  // message namespace
  "CallFreespaceMotion_Request",  // message name
  6,  // number of fields
  sizeof(crs_msgs__srv__CallFreespaceMotion_Request),
  CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_member_array,  // message members
  CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_type_support_handle = {
  0,
  &CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CallFreespaceMotion_Request)() {
  CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  if (!CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_type_support_handle.typesupport_identifier) {
    CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CallFreespaceMotion_Request__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "crs_msgs/srv/call_freespace_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "crs_msgs/srv/call_freespace_motion__functions.h"
// already included above
// #include "crs_msgs/srv/call_freespace_motion__struct.h"


// Include directives for member types
// Member `output_trajectory`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `output_trajectory`
#include "trajectory_msgs/msg/joint_trajectory__rosidl_typesupport_introspection_c.h"
// Member `message`
// already included above
// #include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__srv__CallFreespaceMotion_Response__init(message_memory);
}

void CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_fini_function(void * message_memory)
{
  crs_msgs__srv__CallFreespaceMotion_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_message_member_array[3] = {
  {
    "output_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CallFreespaceMotion_Response, output_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CallFreespaceMotion_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CallFreespaceMotion_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_message_members = {
  "crs_msgs__srv",  // message namespace
  "CallFreespaceMotion_Response",  // message name
  3,  // number of fields
  sizeof(crs_msgs__srv__CallFreespaceMotion_Response),
  CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_message_member_array,  // message members
  CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_message_type_support_handle = {
  0,
  &CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CallFreespaceMotion_Response)() {
  CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  if (!CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_message_type_support_handle.typesupport_identifier) {
    CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CallFreespaceMotion_Response__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "crs_msgs/srv/call_freespace_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers crs_msgs__srv__call_freespace_motion__rosidl_typesupport_introspection_c__CallFreespaceMotion_service_members = {
  "crs_msgs__srv",  // service namespace
  "CallFreespaceMotion",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // crs_msgs__srv__call_freespace_motion__rosidl_typesupport_introspection_c__CallFreespaceMotion_Request_message_type_support_handle,
  NULL  // response message
  // crs_msgs__srv__call_freespace_motion__rosidl_typesupport_introspection_c__CallFreespaceMotion_Response_message_type_support_handle
};

static rosidl_service_type_support_t crs_msgs__srv__call_freespace_motion__rosidl_typesupport_introspection_c__CallFreespaceMotion_service_type_support_handle = {
  0,
  &crs_msgs__srv__call_freespace_motion__rosidl_typesupport_introspection_c__CallFreespaceMotion_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CallFreespaceMotion_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CallFreespaceMotion_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CallFreespaceMotion)() {
  if (!crs_msgs__srv__call_freespace_motion__rosidl_typesupport_introspection_c__CallFreespaceMotion_service_type_support_handle.typesupport_identifier) {
    crs_msgs__srv__call_freespace_motion__rosidl_typesupport_introspection_c__CallFreespaceMotion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)crs_msgs__srv__call_freespace_motion__rosidl_typesupport_introspection_c__CallFreespaceMotion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CallFreespaceMotion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CallFreespaceMotion_Response)()->data;
  }

  return &crs_msgs__srv__call_freespace_motion__rosidl_typesupport_introspection_c__CallFreespaceMotion_service_type_support_handle;
}
