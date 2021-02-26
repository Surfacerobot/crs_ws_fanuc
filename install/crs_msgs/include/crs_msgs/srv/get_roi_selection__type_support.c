// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crs_msgs:srv/GetROISelection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crs_msgs/srv/get_roi_selection__rosidl_typesupport_introspection_c.h"
#include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crs_msgs/srv/get_roi_selection__functions.h"
#include "crs_msgs/srv/get_roi_selection__struct.h"


// Include directives for member types
// Member `input_cloud`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `input_cloud`
#include "sensor_msgs/msg/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__srv__GetROISelection_Request__init(message_memory);
}

void GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_fini_function(void * message_memory)
{
  crs_msgs__srv__GetROISelection_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_message_member_array[1] = {
  {
    "input_cloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__GetROISelection_Request, input_cloud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_message_members = {
  "crs_msgs__srv",  // message namespace
  "GetROISelection_Request",  // message name
  1,  // number of fields
  sizeof(crs_msgs__srv__GetROISelection_Request),
  GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_message_member_array,  // message members
  GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_message_type_support_handle = {
  0,
  &GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, GetROISelection_Request)() {
  GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_message_type_support_handle.typesupport_identifier) {
    GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetROISelection_Request__rosidl_typesupport_introspection_c__GetROISelection_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "crs_msgs/srv/get_roi_selection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "crs_msgs/srv/get_roi_selection__functions.h"
// already included above
// #include "crs_msgs/srv/get_roi_selection__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_generator_c/string_functions.h"
// Member `cloud_indices`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__srv__GetROISelection_Response__init(message_memory);
}

void GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_fini_function(void * message_memory)
{
  crs_msgs__srv__GetROISelection_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__GetROISelection_Response, success),  // bytes offset in struct
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
    offsetof(crs_msgs__srv__GetROISelection_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cloud_indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__GetROISelection_Response, cloud_indices),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_message_members = {
  "crs_msgs__srv",  // message namespace
  "GetROISelection_Response",  // message name
  3,  // number of fields
  sizeof(crs_msgs__srv__GetROISelection_Response),
  GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_message_member_array,  // message members
  GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_message_type_support_handle = {
  0,
  &GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, GetROISelection_Response)() {
  if (!GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_message_type_support_handle.typesupport_identifier) {
    GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetROISelection_Response__rosidl_typesupport_introspection_c__GetROISelection_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "crs_msgs/srv/get_roi_selection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers crs_msgs__srv__get_roi_selection__rosidl_typesupport_introspection_c__GetROISelection_service_members = {
  "crs_msgs__srv",  // service namespace
  "GetROISelection",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // crs_msgs__srv__get_roi_selection__rosidl_typesupport_introspection_c__GetROISelection_Request_message_type_support_handle,
  NULL  // response message
  // crs_msgs__srv__get_roi_selection__rosidl_typesupport_introspection_c__GetROISelection_Response_message_type_support_handle
};

static rosidl_service_type_support_t crs_msgs__srv__get_roi_selection__rosidl_typesupport_introspection_c__GetROISelection_service_type_support_handle = {
  0,
  &crs_msgs__srv__get_roi_selection__rosidl_typesupport_introspection_c__GetROISelection_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, GetROISelection_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, GetROISelection_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, GetROISelection)() {
  if (!crs_msgs__srv__get_roi_selection__rosidl_typesupport_introspection_c__GetROISelection_service_type_support_handle.typesupport_identifier) {
    crs_msgs__srv__get_roi_selection__rosidl_typesupport_introspection_c__GetROISelection_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)crs_msgs__srv__get_roi_selection__rosidl_typesupport_introspection_c__GetROISelection_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, GetROISelection_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, GetROISelection_Response)()->data;
  }

  return &crs_msgs__srv__get_roi_selection__rosidl_typesupport_introspection_c__GetROISelection_service_type_support_handle;
}
