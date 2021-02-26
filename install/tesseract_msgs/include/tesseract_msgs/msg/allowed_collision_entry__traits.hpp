// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_

#include "tesseract_msgs/msg/allowed_collision_entry__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::AllowedCollisionEntry>()
{
  return "tesseract_msgs::msg::AllowedCollisionEntry";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::AllowedCollisionEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::AllowedCollisionEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::AllowedCollisionEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__ALLOWED_COLLISION_ENTRY__TRAITS_HPP_
