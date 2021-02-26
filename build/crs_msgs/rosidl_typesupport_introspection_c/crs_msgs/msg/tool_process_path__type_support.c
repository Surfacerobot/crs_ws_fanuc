// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crs_msgs:msg/ToolProcessPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crs_msgs/msg/tool_process_path__rosidl_typesupport_introspection_c.h"
#include "crs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crs_msgs/msg/tool_process_path__functions.h"
#include "crs_msgs/msg/tool_process_path__struct.h"


// Include directives for member types
// Member `rasters`
#include "geometry_msgs/msg/pose_array.h"
// Member `rasters`
#include "geometry_msgs/msg/pose_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crs_msgs__msg__ToolProcessPath__init(message_memory);
}

void ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_fini_function(void * message_memory)
{
  crs_msgs__msg__ToolProcessPath__fini(message_memory);
}

size_t ToolProcessPath__rosidl_typesupport_introspection_c__size_function__PoseArray__rasters(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return member->size;
}

const void * ToolProcessPath__rosidl_typesupport_introspection_c__get_const_function__PoseArray__rasters(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ToolProcessPath__rosidl_typesupport_introspection_c__get_function__PoseArray__rasters(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ToolProcessPath__rosidl_typesupport_introspection_c__resize_function__PoseArray__rasters(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseArray__Sequence__fini(member);
  return geometry_msgs__msg__PoseArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_message_member_array[1] = {
  {
    "rasters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs__msg__ToolProcessPath, rasters),  // bytes offset in struct
    NULL,  // default value
    ToolProcessPath__rosidl_typesupport_introspection_c__size_function__PoseArray__rasters,  // size() function pointer
    ToolProcessPath__rosidl_typesupport_introspection_c__get_const_function__PoseArray__rasters,  // get_const(index) function pointer
    ToolProcessPath__rosidl_typesupport_introspection_c__get_function__PoseArray__rasters,  // get(index) function pointer
    ToolProcessPath__rosidl_typesupport_introspection_c__resize_function__PoseArray__rasters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_message_members = {
  "crs_msgs__msg",  // message namespace
  "ToolProcessPath",  // message name
  1,  // number of fields
  sizeof(crs_msgs__msg__ToolProcessPath),
  ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_message_member_array,  // message members
  ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_init_function,  // function to initialize message memory (memory has to be allocated)
  ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_message_type_support_handle = {
  0,
  &ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crs_msgs, msg, ToolProcessPath)() {
  ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  if (!ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_message_type_support_handle.typesupport_identifier) {
    ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ToolProcessPath__rosidl_typesupport_introspection_c__ToolProcessPath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
