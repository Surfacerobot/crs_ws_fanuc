// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crs_msgs:srv/CropToolpaths.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crs_msgs/srv/crop_toolpaths__rosidl_typesupport_introspection_c.h"
#include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crs_msgs/srv/crop_toolpaths__functions.h"
#include "crs_msgs/srv/crop_toolpaths__struct.h"


// Include directives for member types
// Member `images`
#include "sensor_msgs/msg/image.h"
// Member `images`
#include "sensor_msgs/msg/image__rosidl_typesupport_introspection_c.h"
// Member `clouds`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `clouds`
#include "sensor_msgs/msg/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `transforms`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `transforms`
#include "geometry_msgs/msg/transform_stamped__rosidl_typesupport_introspection_c.h"
// Member `toolpaths`
#include "crs_msgs/msg/tool_process_path.h"
// Member `toolpaths`
#include "crs_msgs/msg/tool_process_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__srv__CropToolpaths_Request__init(message_memory);
}

void CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_fini_function(void * message_memory)
{
  crs_msgs__srv__CropToolpaths_Request__fini(message_memory);
}

size_t CropToolpaths_Request__rosidl_typesupport_introspection_c__size_function__Image__images(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * CropToolpaths_Request__rosidl_typesupport_introspection_c__get_const_function__Image__images(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CropToolpaths_Request__rosidl_typesupport_introspection_c__get_function__Image__images(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CropToolpaths_Request__rosidl_typesupport_introspection_c__resize_function__Image__images(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

size_t CropToolpaths_Request__rosidl_typesupport_introspection_c__size_function__PointCloud2__clouds(
  const void * untyped_member)
{
  const sensor_msgs__msg__PointCloud2__Sequence * member =
    (const sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return member->size;
}

const void * CropToolpaths_Request__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__clouds(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__PointCloud2__Sequence * member =
    (const sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CropToolpaths_Request__rosidl_typesupport_introspection_c__get_function__PointCloud2__clouds(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__PointCloud2__Sequence * member =
    (sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CropToolpaths_Request__rosidl_typesupport_introspection_c__resize_function__PointCloud2__clouds(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__PointCloud2__Sequence * member =
    (sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  sensor_msgs__msg__PointCloud2__Sequence__fini(member);
  return sensor_msgs__msg__PointCloud2__Sequence__init(member, size);
}

size_t CropToolpaths_Request__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms(
  const void * untyped_member)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * CropToolpaths_Request__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CropToolpaths_Request__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CropToolpaths_Request__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__TransformStamped__Sequence__fini(member);
  return geometry_msgs__msg__TransformStamped__Sequence__init(member, size);
}

size_t CropToolpaths_Request__rosidl_typesupport_introspection_c__size_function__ToolProcessPath__toolpaths(
  const void * untyped_member)
{
  const crs_msgs__msg__ToolProcessPath__Sequence * member =
    (const crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  return member->size;
}

const void * CropToolpaths_Request__rosidl_typesupport_introspection_c__get_const_function__ToolProcessPath__toolpaths(
  const void * untyped_member, size_t index)
{
  const crs_msgs__msg__ToolProcessPath__Sequence * member =
    (const crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CropToolpaths_Request__rosidl_typesupport_introspection_c__get_function__ToolProcessPath__toolpaths(
  void * untyped_member, size_t index)
{
  crs_msgs__msg__ToolProcessPath__Sequence * member =
    (crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CropToolpaths_Request__rosidl_typesupport_introspection_c__resize_function__ToolProcessPath__toolpaths(
  void * untyped_member, size_t size)
{
  crs_msgs__msg__ToolProcessPath__Sequence * member =
    (crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  crs_msgs__msg__ToolProcessPath__Sequence__fini(member);
  return crs_msgs__msg__ToolProcessPath__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_member_array[4] = {
  {
    "images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CropToolpaths_Request, images),  // bytes offset in struct
    NULL,  // default value
    CropToolpaths_Request__rosidl_typesupport_introspection_c__size_function__Image__images,  // size() function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__get_const_function__Image__images,  // get_const(index) function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__get_function__Image__images,  // get(index) function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__resize_function__Image__images  // resize(index) function pointer
  },
  {
    "clouds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CropToolpaths_Request, clouds),  // bytes offset in struct
    NULL,  // default value
    CropToolpaths_Request__rosidl_typesupport_introspection_c__size_function__PointCloud2__clouds,  // size() function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__clouds,  // get_const(index) function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__get_function__PointCloud2__clouds,  // get(index) function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__resize_function__PointCloud2__clouds  // resize(index) function pointer
  },
  {
    "transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CropToolpaths_Request, transforms),  // bytes offset in struct
    NULL,  // default value
    CropToolpaths_Request__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms,  // size() function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms,  // get_const(index) function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms,  // get(index) function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms  // resize(index) function pointer
  },
  {
    "toolpaths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CropToolpaths_Request, toolpaths),  // bytes offset in struct
    NULL,  // default value
    CropToolpaths_Request__rosidl_typesupport_introspection_c__size_function__ToolProcessPath__toolpaths,  // size() function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__get_const_function__ToolProcessPath__toolpaths,  // get_const(index) function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__get_function__ToolProcessPath__toolpaths,  // get(index) function pointer
    CropToolpaths_Request__rosidl_typesupport_introspection_c__resize_function__ToolProcessPath__toolpaths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_members = {
  "crs_msgs__srv",  // message namespace
  "CropToolpaths_Request",  // message name
  4,  // number of fields
  sizeof(crs_msgs__srv__CropToolpaths_Request),
  CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_member_array,  // message members
  CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_type_support_handle = {
  0,
  &CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CropToolpaths_Request)() {
  CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, msg, ToolProcessPath)();
  if (!CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_type_support_handle.typesupport_identifier) {
    CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CropToolpaths_Request__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "crs_msgs/srv/crop_toolpaths__rosidl_typesupport_introspection_c.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "crs_msgs/srv/crop_toolpaths__functions.h"
// already included above
// #include "crs_msgs/srv/crop_toolpaths__struct.h"


// Include directives for member types
// Member `cropped_toolpaths`
// already included above
// #include "crs_msgs/msg/tool_process_path.h"
// Member `cropped_toolpaths`
// already included above
// #include "crs_msgs/msg/tool_process_path__rosidl_typesupport_introspection_c.h"
// Member `err_msg`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__srv__CropToolpaths_Response__init(message_memory);
}

void CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_fini_function(void * message_memory)
{
  crs_msgs__srv__CropToolpaths_Response__fini(message_memory);
}

size_t CropToolpaths_Response__rosidl_typesupport_introspection_c__size_function__ToolProcessPath__cropped_toolpaths(
  const void * untyped_member)
{
  const crs_msgs__msg__ToolProcessPath__Sequence * member =
    (const crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  return member->size;
}

const void * CropToolpaths_Response__rosidl_typesupport_introspection_c__get_const_function__ToolProcessPath__cropped_toolpaths(
  const void * untyped_member, size_t index)
{
  const crs_msgs__msg__ToolProcessPath__Sequence * member =
    (const crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CropToolpaths_Response__rosidl_typesupport_introspection_c__get_function__ToolProcessPath__cropped_toolpaths(
  void * untyped_member, size_t index)
{
  crs_msgs__msg__ToolProcessPath__Sequence * member =
    (crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CropToolpaths_Response__rosidl_typesupport_introspection_c__resize_function__ToolProcessPath__cropped_toolpaths(
  void * untyped_member, size_t size)
{
  crs_msgs__msg__ToolProcessPath__Sequence * member =
    (crs_msgs__msg__ToolProcessPath__Sequence *)(untyped_member);
  crs_msgs__msg__ToolProcessPath__Sequence__fini(member);
  return crs_msgs__msg__ToolProcessPath__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_message_member_array[3] = {
  {
    "cropped_toolpaths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CropToolpaths_Response, cropped_toolpaths),  // bytes offset in struct
    NULL,  // default value
    CropToolpaths_Response__rosidl_typesupport_introspection_c__size_function__ToolProcessPath__cropped_toolpaths,  // size() function pointer
    CropToolpaths_Response__rosidl_typesupport_introspection_c__get_const_function__ToolProcessPath__cropped_toolpaths,  // get_const(index) function pointer
    CropToolpaths_Response__rosidl_typesupport_introspection_c__get_function__ToolProcessPath__cropped_toolpaths,  // get(index) function pointer
    CropToolpaths_Response__rosidl_typesupport_introspection_c__resize_function__ToolProcessPath__cropped_toolpaths  // resize(index) function pointer
  },
  {
    "succeeded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__srv__CropToolpaths_Response, succeeded),  // bytes offset in struct
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
    offsetof(crs_msgs__srv__CropToolpaths_Response, err_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_message_members = {
  "crs_msgs__srv",  // message namespace
  "CropToolpaths_Response",  // message name
  3,  // number of fields
  sizeof(crs_msgs__srv__CropToolpaths_Response),
  CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_message_member_array,  // message members
  CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_message_type_support_handle = {
  0,
  &CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CropToolpaths_Response)() {
  CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, msg, ToolProcessPath)();
  if (!CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_message_type_support_handle.typesupport_identifier) {
    CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CropToolpaths_Response__rosidl_typesupport_introspection_c__CropToolpaths_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "crs_msgs/srv/crop_toolpaths__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers crs_msgs__srv__crop_toolpaths__rosidl_typesupport_introspection_c__CropToolpaths_service_members = {
  "crs_msgs__srv",  // service namespace
  "CropToolpaths",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // crs_msgs__srv__crop_toolpaths__rosidl_typesupport_introspection_c__CropToolpaths_Request_message_type_support_handle,
  NULL  // response message
  // crs_msgs__srv__crop_toolpaths__rosidl_typesupport_introspection_c__CropToolpaths_Response_message_type_support_handle
};

static rosidl_service_type_support_t crs_msgs__srv__crop_toolpaths__rosidl_typesupport_introspection_c__CropToolpaths_service_type_support_handle = {
  0,
  &crs_msgs__srv__crop_toolpaths__rosidl_typesupport_introspection_c__CropToolpaths_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CropToolpaths_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CropToolpaths_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CropToolpaths)() {
  if (!crs_msgs__srv__crop_toolpaths__rosidl_typesupport_introspection_c__CropToolpaths_service_type_support_handle.typesupport_identifier) {
    crs_msgs__srv__crop_toolpaths__rosidl_typesupport_introspection_c__CropToolpaths_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)crs_msgs__srv__crop_toolpaths__rosidl_typesupport_introspection_c__CropToolpaths_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CropToolpaths_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, srv, CropToolpaths_Response)()->data;
  }

  return &crs_msgs__srv__crop_toolpaths__rosidl_typesupport_introspection_c__CropToolpaths_service_type_support_handle;
}
