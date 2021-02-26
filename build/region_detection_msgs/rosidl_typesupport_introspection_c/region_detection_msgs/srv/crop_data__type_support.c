// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from region_detection_msgs:srv/CropData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "region_detection_msgs/srv/crop_data__rosidl_typesupport_introspection_c.h"
#include "region_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "region_detection_msgs/srv/crop_data__functions.h"
#include "region_detection_msgs/srv/crop_data__struct.h"


// Include directives for member types
// Member `crop_regions`
// Member `input_data`
#include "geometry_msgs/msg/pose_array.h"
// Member `crop_regions`
// Member `input_data`
#include "geometry_msgs/msg/pose_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  region_detection_msgs__srv__CropData_Request__init(message_memory);
}

void CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_fini_function(void * message_memory)
{
  region_detection_msgs__srv__CropData_Request__fini(message_memory);
}

size_t CropData_Request__rosidl_typesupport_introspection_c__size_function__PoseArray__crop_regions(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return member->size;
}

const void * CropData_Request__rosidl_typesupport_introspection_c__get_const_function__PoseArray__crop_regions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CropData_Request__rosidl_typesupport_introspection_c__get_function__PoseArray__crop_regions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CropData_Request__rosidl_typesupport_introspection_c__resize_function__PoseArray__crop_regions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseArray__Sequence__fini(member);
  return geometry_msgs__msg__PoseArray__Sequence__init(member, size);
}

size_t CropData_Request__rosidl_typesupport_introspection_c__size_function__PoseArray__input_data(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return member->size;
}

const void * CropData_Request__rosidl_typesupport_introspection_c__get_const_function__PoseArray__input_data(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CropData_Request__rosidl_typesupport_introspection_c__get_function__PoseArray__input_data(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CropData_Request__rosidl_typesupport_introspection_c__resize_function__PoseArray__input_data(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseArray__Sequence__fini(member);
  return geometry_msgs__msg__PoseArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_message_member_array[2] = {
  {
    "crop_regions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__CropData_Request, crop_regions),  // bytes offset in struct
    NULL,  // default value
    CropData_Request__rosidl_typesupport_introspection_c__size_function__PoseArray__crop_regions,  // size() function pointer
    CropData_Request__rosidl_typesupport_introspection_c__get_const_function__PoseArray__crop_regions,  // get_const(index) function pointer
    CropData_Request__rosidl_typesupport_introspection_c__get_function__PoseArray__crop_regions,  // get(index) function pointer
    CropData_Request__rosidl_typesupport_introspection_c__resize_function__PoseArray__crop_regions  // resize(index) function pointer
  },
  {
    "input_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__CropData_Request, input_data),  // bytes offset in struct
    NULL,  // default value
    CropData_Request__rosidl_typesupport_introspection_c__size_function__PoseArray__input_data,  // size() function pointer
    CropData_Request__rosidl_typesupport_introspection_c__get_const_function__PoseArray__input_data,  // get_const(index) function pointer
    CropData_Request__rosidl_typesupport_introspection_c__get_function__PoseArray__input_data,  // get(index) function pointer
    CropData_Request__rosidl_typesupport_introspection_c__resize_function__PoseArray__input_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_message_members = {
  "region_detection_msgs__srv",  // message namespace
  "CropData_Request",  // message name
  2,  // number of fields
  sizeof(region_detection_msgs__srv__CropData_Request),
  CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_message_member_array,  // message members
  CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_message_type_support_handle = {
  0,
  &CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_region_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, CropData_Request)() {
  CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  if (!CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_message_type_support_handle.typesupport_identifier) {
    CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CropData_Request__rosidl_typesupport_introspection_c__CropData_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "region_detection_msgs/srv/crop_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "region_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "region_detection_msgs/srv/crop_data__functions.h"
// already included above
// #include "region_detection_msgs/srv/crop_data__struct.h"


// Include directives for member types
// Member `cropped_data`
#include "region_detection_msgs/msg/pose_set.h"
// Member `cropped_data`
#include "region_detection_msgs/msg/pose_set__rosidl_typesupport_introspection_c.h"
// Member `err_msg`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  region_detection_msgs__srv__CropData_Response__init(message_memory);
}

void CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_fini_function(void * message_memory)
{
  region_detection_msgs__srv__CropData_Response__fini(message_memory);
}

size_t CropData_Response__rosidl_typesupport_introspection_c__size_function__PoseSet__cropped_data(
  const void * untyped_member)
{
  const region_detection_msgs__msg__PoseSet__Sequence * member =
    (const region_detection_msgs__msg__PoseSet__Sequence *)(untyped_member);
  return member->size;
}

const void * CropData_Response__rosidl_typesupport_introspection_c__get_const_function__PoseSet__cropped_data(
  const void * untyped_member, size_t index)
{
  const region_detection_msgs__msg__PoseSet__Sequence * member =
    (const region_detection_msgs__msg__PoseSet__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CropData_Response__rosidl_typesupport_introspection_c__get_function__PoseSet__cropped_data(
  void * untyped_member, size_t index)
{
  region_detection_msgs__msg__PoseSet__Sequence * member =
    (region_detection_msgs__msg__PoseSet__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CropData_Response__rosidl_typesupport_introspection_c__resize_function__PoseSet__cropped_data(
  void * untyped_member, size_t size)
{
  region_detection_msgs__msg__PoseSet__Sequence * member =
    (region_detection_msgs__msg__PoseSet__Sequence *)(untyped_member);
  region_detection_msgs__msg__PoseSet__Sequence__fini(member);
  return region_detection_msgs__msg__PoseSet__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_message_member_array[3] = {
  {
    "cropped_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__CropData_Response, cropped_data),  // bytes offset in struct
    NULL,  // default value
    CropData_Response__rosidl_typesupport_introspection_c__size_function__PoseSet__cropped_data,  // size() function pointer
    CropData_Response__rosidl_typesupport_introspection_c__get_const_function__PoseSet__cropped_data,  // get_const(index) function pointer
    CropData_Response__rosidl_typesupport_introspection_c__get_function__PoseSet__cropped_data,  // get(index) function pointer
    CropData_Response__rosidl_typesupport_introspection_c__resize_function__PoseSet__cropped_data  // resize(index) function pointer
  },
  {
    "succeeded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__CropData_Response, succeeded),  // bytes offset in struct
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
    offsetof(region_detection_msgs__srv__CropData_Response, err_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_message_members = {
  "region_detection_msgs__srv",  // message namespace
  "CropData_Response",  // message name
  3,  // number of fields
  sizeof(region_detection_msgs__srv__CropData_Response),
  CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_message_member_array,  // message members
  CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_message_type_support_handle = {
  0,
  &CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_region_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, CropData_Response)() {
  CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, msg, PoseSet)();
  if (!CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_message_type_support_handle.typesupport_identifier) {
    CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CropData_Response__rosidl_typesupport_introspection_c__CropData_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "region_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "region_detection_msgs/srv/crop_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers region_detection_msgs__srv__crop_data__rosidl_typesupport_introspection_c__CropData_service_members = {
  "region_detection_msgs__srv",  // service namespace
  "CropData",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // region_detection_msgs__srv__crop_data__rosidl_typesupport_introspection_c__CropData_Request_message_type_support_handle,
  NULL  // response message
  // region_detection_msgs__srv__crop_data__rosidl_typesupport_introspection_c__CropData_Response_message_type_support_handle
};

static rosidl_service_type_support_t region_detection_msgs__srv__crop_data__rosidl_typesupport_introspection_c__CropData_service_type_support_handle = {
  0,
  &region_detection_msgs__srv__crop_data__rosidl_typesupport_introspection_c__CropData_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, CropData_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, CropData_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_region_detection_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, CropData)() {
  if (!region_detection_msgs__srv__crop_data__rosidl_typesupport_introspection_c__CropData_service_type_support_handle.typesupport_identifier) {
    region_detection_msgs__srv__crop_data__rosidl_typesupport_introspection_c__CropData_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)region_detection_msgs__srv__crop_data__rosidl_typesupport_introspection_c__CropData_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, CropData_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, CropData_Response)()->data;
  }

  return &region_detection_msgs__srv__crop_data__rosidl_typesupport_introspection_c__CropData_service_type_support_handle;
}
