// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/JointDynamics.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__JOINT_DYNAMICS__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__JOINT_DYNAMICS__TRAITS_HPP_

#include "tesseract_msgs/msg/joint_dynamics__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::JointDynamics>()
{
  return "tesseract_msgs::msg::JointDynamics";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::JointDynamics>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::JointDynamics>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tesseract_msgs::msg::JointDynamics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__JOINT_DYNAMICS__TRAITS_HPP_
