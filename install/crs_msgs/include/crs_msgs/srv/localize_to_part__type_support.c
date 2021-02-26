// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crs_msgs:srv/LocalizeToPart.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crs_msgs/srv/localize_to_part__rosidl_typesupport_introspection_c.h"
#include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crs_msgs/srv/localize_to_part__functions.h"
#include "crs_msgs/srv/localize_to_part__struct.h"


// Include directives for member types
// Member `frame`
#include "rosidl_generator_c/string_functions.h"
// Member `point_clouds`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `point_clouds`
#include "sensor_msgs/msg/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `transforms`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `transforms`
#include "geometry_msgs/msg/transform_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__srv__LocalizeToPart_Request__init(message_memory);
}

void LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_fini_function(void * message_memory)
{
  crs_msgs__srv__LocalizeToPart_Request__fini(message_memory);
}

size_t LocalizeToPart_Request__rosidl_typesupport_introspection_c__size_function__PointCloud2__point_clouds(
  const void * untyped_member)
{
  const sensor_msgs__msg__PointCloud2__Sequence * member =
    (const sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return member->size;
}

const void * LocalizeToPart_Request__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__point_clouds(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__PointCloud2__Sequence * member =
    (const sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LocalizeToPart_Request__rosidl_typesupport_introspection_c__get_function__PointCloud2__point_clouds(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__PointCloud2__Sequence * member =
    (sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LocalizeToPart_Request__rosidl_typesupport_introspection_c__resize_function__PointCloud2__point_clouds(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__PointCloud2__Sequence * member =
    (sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  sensor_msgs__msg__PointCloud2__Sequence__fini(member);
  return sensor_msgs__msg__PointCloud2__Sequence__init(member, size);
}

size_t LocalizeToPart_Request__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms(
  const void * untyped_member)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * LocalizeToPart_Request__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LocalizeToPart_Request__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LocalizeToPart_Request__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__TransformStamped__Sequence__fini(member);
  return geometry_msgs__msg__TransformStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_message_member_array[3] = {
  {
    "frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__LocalizeToPart_Request, frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_clouds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__LocalizeToPart_Request, point_clouds),  // bytes offset in struct
    NULL,  // default value
    LocalizeToPart_Request__rosidl_typesupport_introspection_c__size_function__PointCloud2__point_clouds,  // size() function pointer
    LocalizeToPart_Request__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__point_clouds,  // get_const(index) function pointer
    LocalizeToPart_Request__rosidl_typesupport_introspection_c__get_function__PointCloud2__point_clouds,  // get(index) function pointer
    LocalizeToPart_Request__rosidl_typesupport_introspection_c__resize_function__PointCloud2__point_clouds  // resize(index) function pointer
  },
  {
    "transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__LocalizeToPart_Request, transforms),  // bytes offset in struct
    NULL,  // default value
    LocalizeToPart_Request__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms,  // size() function pointer
    LocalizeToPart_Request__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms,  // get_const(index) function pointer
    LocalizeToPart_Request__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms,  // get(index) function pointer
    LocalizeToPart_Request__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_message_members = {
  "crs_msgs__srv",  // message namespace
  "LocalizeToPart_Request",  // message name
  3,  // number of fields
  sizeof(crs_msgs__srv__LocalizeToPart_Request),
  LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_message_member_array,  // message members
  LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_message_type_support_handle = {
  0,
  &LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, LocalizeToPart_Request)() {
  LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_message_type_support_handle.typesupport_identifier) {
    LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LocalizeToPart_Request__rosidl_typesupport_introspection_c__LocalizeToPart_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "crs_msgs/srv/localize_to_part__rosidl_typesupport_introspection_c.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "crs_msgs/srv/localize_to_part__functions.h"
// already included above
// #include "crs_msgs/srv/localize_to_part__struct.h"


// Include directives for member types
// Member `error`
// already included above
// #include "rosidl_generator_c/string_functions.h"
// Member `transform`
// already included above
// #include "geometry_msgs/msg/transform_stamped.h"
// Member `transform`
// already included above
// #include "geometry_msgs/msg/transform_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__srv__LocalizeToPart_Response__init(message_memory);
}

void LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_fini_function(void * message_memory)
{
  crs_msgs__srv__LocalizeToPart_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__LocalizeToPart_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__LocalizeToPart_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__LocalizeToPart_Response, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_message_members = {
  "crs_msgs__srv",  // message namespace
  "LocalizeToPart_Response",  // message name
  3,  // number of fields
  sizeof(crs_msgs__srv__LocalizeToPart_Response),
  LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_message_member_array,  // message members
  LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_message_type_support_handle = {
  0,
  &LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, LocalizeToPart_Response)() {
  LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_message_type_support_handle.typesupport_identifier) {
    LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LocalizeToPart_Response__rosidl_typesupport_introspection_c__LocalizeToPart_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "crs_msgs/srv/localize_to_part__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers crs_msgs__srv__localize_to_part__rosidl_typesupport_introspection_c__LocalizeToPart_service_members = {
  "crs_msgs__srv",  // service namespace
  "LocalizeToPart",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // crs_msgs__srv__localize_to_part__rosidl_typesupport_introspection_c__LocalizeToPart_Request_message_type_support_handle,
  NULL  // response message
  // crs_msgs__srv__localize_to_part__rosidl_typesupport_introspection_c__LocalizeToPart_Response_message_type_support_handle
};

static rosidl_service_type_support_t crs_msgs__srv__localize_to_part__rosidl_typesupport_introspection_c__LocalizeToPart_service_type_support_handle = {
  0,
  &crs_msgs__srv__localize_to_part__rosidl_typesupport_introspection_c__LocalizeToPart_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, LocalizeToPart_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, LocalizeToPart_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, LocalizeToPart)() {
  if (!crs_msgs__srv__localize_to_part__rosidl_typesupport_introspection_c__LocalizeToPart_service_type_support_handle.typesupport_identifier) {
    crs_msgs__srv__localize_to_part__rosidl_typesupport_introspection_c__LocalizeToPart_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)crs_msgs__srv__localize_to_part__rosidl_typesupport_introspection_c__LocalizeToPart_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, LocalizeToPart_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, LocalizeToPart_Response)()->data;
  }

  return &crs_msgs__srv__localize_to_part__rosidl_typesupport_introspection_c__LocalizeToPart_service_type_support_handle;
}
