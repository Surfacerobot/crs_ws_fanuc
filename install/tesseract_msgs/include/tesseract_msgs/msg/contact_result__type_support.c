// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/ContactResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/contact_result__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/contact_result__functions.h"
#include "tesseract_msgs/msg/contact_result__struct.h"


// Include directives for member types
// Member `link_names`
#include "rosidl_generator_c/string_functions.h"
// Member `nearest_points`
// Member `nearest_points_local`
// Member `normal`
#include "geometry_msgs/msg/vector3.h"
// Member `nearest_points`
// Member `nearest_points_local`
// Member `normal`
#include "geometry_msgs/msg/vector3__rosidl_typesupport_introspection_c.h"
// Member `transform`
// Member `cc_transform`
#include "geometry_msgs/msg/pose.h"
// Member `transform`
// Member `cc_transform`
#include "geometry_msgs/msg/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ContactResult__rosidl_typesupport_introspection_c__ContactResult_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__ContactResult__init(message_memory);
}

void ContactResult__rosidl_typesupport_introspection_c__ContactResult_fini_function(void * message_memory)
{
  tesseract_msgs__msg__ContactResult__fini(message_memory);
}

size_t ContactResult__rosidl_typesupport_introspection_c__size_function__Vector3__nearest_points(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * ContactResult__rosidl_typesupport_introspection_c__get_const_function__Vector3__nearest_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3 ** member =
    (const geometry_msgs__msg__Vector3 **)(untyped_member);
  return &(*member)[index];
}

void * ContactResult__rosidl_typesupport_introspection_c__get_function__Vector3__nearest_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3 ** member =
    (geometry_msgs__msg__Vector3 **)(untyped_member);
  return &(*member)[index];
}

size_t ContactResult__rosidl_typesupport_introspection_c__size_function__Vector3__nearest_points_local(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * ContactResult__rosidl_typesupport_introspection_c__get_const_function__Vector3__nearest_points_local(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3 ** member =
    (const geometry_msgs__msg__Vector3 **)(untyped_member);
  return &(*member)[index];
}

void * ContactResult__rosidl_typesupport_introspection_c__get_function__Vector3__nearest_points_local(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3 ** member =
    (geometry_msgs__msg__Vector3 **)(untyped_member);
  return &(*member)[index];
}

size_t ContactResult__rosidl_typesupport_introspection_c__size_function__Pose__transform(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * ContactResult__rosidl_typesupport_introspection_c__get_const_function__Pose__transform(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose ** member =
    (const geometry_msgs__msg__Pose **)(untyped_member);
  return &(*member)[index];
}

void * ContactResult__rosidl_typesupport_introspection_c__get_function__Pose__transform(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose ** member =
    (geometry_msgs__msg__Pose **)(untyped_member);
  return &(*member)[index];
}

size_t ContactResult__rosidl_typesupport_introspection_c__size_function__Pose__cc_transform(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * ContactResult__rosidl_typesupport_introspection_c__get_const_function__Pose__cc_transform(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose ** member =
    (const geometry_msgs__msg__Pose **)(untyped_member);
  return &(*member)[index];
}

void * ContactResult__rosidl_typesupport_introspection_c__get_function__Pose__cc_transform(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose ** member =
    (geometry_msgs__msg__Pose **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[12] = {
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, type_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, link_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, shape_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subshape_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, subshape_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nearest_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, nearest_points),  // bytes offset in struct
    NULL,  // default value
    ContactResult__rosidl_typesupport_introspection_c__size_function__Vector3__nearest_points,  // size() function pointer
    ContactResult__rosidl_typesupport_introspection_c__get_const_function__Vector3__nearest_points,  // get_const(index) function pointer
    ContactResult__rosidl_typesupport_introspection_c__get_function__Vector3__nearest_points,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nearest_points_local",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, nearest_points_local),  // bytes offset in struct
    NULL,  // default value
    ContactResult__rosidl_typesupport_introspection_c__size_function__Vector3__nearest_points_local,  // size() function pointer
    ContactResult__rosidl_typesupport_introspection_c__get_const_function__Vector3__nearest_points_local,  // get_const(index) function pointer
    ContactResult__rosidl_typesupport_introspection_c__get_function__Vector3__nearest_points_local,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, transform),  // bytes offset in struct
    NULL,  // default value
    ContactResult__rosidl_typesupport_introspection_c__size_function__Pose__transform,  // size() function pointer
    ContactResult__rosidl_typesupport_introspection_c__get_const_function__Pose__transform,  // get_const(index) function pointer
    ContactResult__rosidl_typesupport_introspection_c__get_function__Pose__transform,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "normal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, normal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cc_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, cc_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cc_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, cc_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cc_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__ContactResult, cc_transform),  // bytes offset in struct
    NULL,  // default value
    ContactResult__rosidl_typesupport_introspection_c__size_function__Pose__cc_transform,  // size() function pointer
    ContactResult__rosidl_typesupport_introspection_c__get_const_function__Pose__cc_transform,  // get_const(index) function pointer
    ContactResult__rosidl_typesupport_introspection_c__get_function__Pose__cc_transform,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "ContactResult",  // message name
  12,  // number of fields
  sizeof(tesseract_msgs__msg__ContactResult),
  ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array,  // message members
  ContactResult__rosidl_typesupport_introspection_c__ContactResult_init_function,  // function to initialize message memory (memory has to be allocated)
  ContactResult__rosidl_typesupport_introspection_c__ContactResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_type_support_handle = {
  0,
  &ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, ContactResult)() {
  ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_type_support_handle.typesupport_identifier) {
    ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ContactResult__rosidl_typesupport_introspection_c__ContactResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
