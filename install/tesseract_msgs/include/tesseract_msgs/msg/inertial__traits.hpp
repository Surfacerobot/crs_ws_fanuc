// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/Inertial.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__INERTIAL__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__INERTIAL__TRAITS_HPP_

#include "tesseract_msgs/msg/inertial__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'origin'
#include "geometry_msgs/msg/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::Inertial>()
{
  return "tesseract_msgs::msg::Inertial";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::Inertial>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::Inertial>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<tesseract_msgs::msg::Inertial>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__INERTIAL__TRAITS_HPP_
