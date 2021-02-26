// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from crs_msgs:msg/ProcessMotionPlan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "crs_msgs/msg/process_motion_plan__struct.hpp"
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

void ProcessMotionPlan_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) crs_msgs::msg::ProcessMotionPlan(_init);
}

void ProcessMotionPlan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crs_msgs::msg::ProcessMotionPlan *>(message_memory);
  typed_message->~ProcessMotionPlan();
}

size_t size_function__ProcessMotionPlan__process_motions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProcessMotionPlan__process_motions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__ProcessMotionPlan__process_motions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  return &member[index];
}

void resize_function__ProcessMotionPlan__process_motions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ProcessMotionPlan__force_controlled_process_motions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProcessMotionPlan__force_controlled_process_motions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__ProcessMotionPlan__force_controlled_process_motions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectory> *>(untyped_member);
  return &member[index];
}

void resize_function__ProcessMotionPlan__force_controlled_process_motions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectory> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ProcessMotionPlan__free_motions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProcessMotionPlan__free_motions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__ProcessMotionPlan__free_motions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  return &member[index];
}

void resize_function__ProcessMotionPlan__free_motions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ProcessMotionPlan_message_member_array[5] = {
  {
    "start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectory>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::msg::ProcessMotionPlan, start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "process_motions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::msg::ProcessMotionPlan, process_motions),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProcessMotionPlan__process_motions,  // size() function pointer
    get_const_function__ProcessMotionPlan__process_motions,  // get_const(index) function pointer
    get_function__ProcessMotionPlan__process_motions,  // get(index) function pointer
    resize_function__ProcessMotionPlan__process_motions  // resize(index) function pointer
  },
  {
    "force_controlled_process_motions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cartesian_trajectory_msgs::msg::CartesianTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::msg::ProcessMotionPlan, force_controlled_process_motions),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProcessMotionPlan__force_controlled_process_motions,  // size() function pointer
    get_const_function__ProcessMotionPlan__force_controlled_process_motions,  // get_const(index) function pointer
    get_function__ProcessMotionPlan__force_controlled_process_motions,  // get(index) function pointer
    resize_function__ProcessMotionPlan__force_controlled_process_motions  // resize(index) function pointer
  },
  {
    "free_motions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::msg::ProcessMotionPlan, free_motions),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProcessMotionPlan__free_motions,  // size() function pointer
    get_const_function__ProcessMotionPlan__free_motions,  // get_const(index) function pointer
    get_function__ProcessMotionPlan__free_motions,  // get(index) function pointer
    resize_function__ProcessMotionPlan__free_motions  // resize(index) function pointer
  },
  {
    "end",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectory>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crs_msgs::msg::ProcessMotionPlan, end),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ProcessMotionPlan_message_members = {
  "crs_msgs::msg",  // message namespace
  "ProcessMotionPlan",  // message name
  5,  // number of fields
  sizeof(crs_msgs::msg::ProcessMotionPlan),
  ProcessMotionPlan_message_member_array,  // message members
  ProcessMotionPlan_init_function,  // function to initialize message memory (memory has to be allocated)
  ProcessMotionPlan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ProcessMotionPlan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ProcessMotionPlan_message_members,
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
get_message_type_support_handle<crs_msgs::msg::ProcessMotionPlan>()
{
  return &::crs_msgs::msg::rosidl_typesupport_introspection_cpp::ProcessMotionPlan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crs_msgs, msg, ProcessMotionPlan)() {
  return &::crs_msgs::msg::rosidl_typesupport_introspection_cpp::ProcessMotionPlan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
