// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__JOINT_LIMITS__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__JOINT_LIMITS__TRAITS_HPP_

#include "tesseract_msgs/msg/joint_limits__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::JointLimits>()
{
  return "tesseract_msgs::msg::JointLimits";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::JointLimits>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::JointLimits>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tesseract_msgs::msg::JointLimits>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__JOINT_LIMITS__TRAITS_HPP_
