// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from crs_msgs:msg/ProcessConfiguration.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "crs_msgs/msg/process_configuration__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace crs_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ProcessConfiguration_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) crs_msgs::msg::ProcessConfiguration(_init);
}

void ProcessConfiguration_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crs_msgs::msg::ProcessConfiguration *>(message_memory);
  typed_message->~ProcessConfiguration();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ProcessConfiguration_message_member_array[1] = {
  {
    "yaml_config",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::msg::ProcessConfiguration, yaml_config),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ProcessConfiguration_message_members = {
  "crs_msgs::msg",  // message namespace
  "ProcessConfiguration",  // message name
  1,  // number of fields
  sizeof(crs_msgs::msg::ProcessConfiguration),
  ProcessConfiguration_message_member_array,  // message members
  ProcessConfiguration_init_function,  // function to initialize message memory (memory has to be allocated)
  ProcessConfiguration_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ProcessConfiguration_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ProcessConfiguration_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace crs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<crs_msgs::msg::ProcessConfiguration>()
{
  return &::crs_msgs::msg::rosidl_typesupport_introspection_cpp::ProcessConfiguration_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crs_msgs, msg, ProcessConfiguration)() {
  return &::crs_msgs::msg::rosidl_typesupport_introspection_cpp::ProcessConfiguration_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
