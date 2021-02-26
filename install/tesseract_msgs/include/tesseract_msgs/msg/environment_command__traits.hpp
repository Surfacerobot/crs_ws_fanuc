// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__ENVIRONMENT_COMMAND__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__ENVIRONMENT_COMMAND__TRAITS_HPP_

#include "tesseract_msgs/msg/environment_command__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'add_link'
#include "tesseract_msgs/msg/link__traits.hpp"
// Member 'add_joint'
// Member 'move_link_joint'
#include "tesseract_msgs/msg/joint__traits.hpp"
// Member 'change_link_origin_pose'
// Member 'change_joint_origin_pose'
#include "geometry_msgs/msg/pose__traits.hpp"
// Member 'add_allowed_collision'
// Member 'remove_allowed_collision'
#include "tesseract_msgs/msg/allowed_collision_entry__traits.hpp"
// Member 'joint_state'
#include "sensor_msgs/msg/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::EnvironmentCommand>()
{
  return "tesseract_msgs::msg::EnvironmentCommand";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::EnvironmentCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::EnvironmentCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::EnvironmentCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__ENVIRONMENT_COMMAND__TRAITS_HPP_
