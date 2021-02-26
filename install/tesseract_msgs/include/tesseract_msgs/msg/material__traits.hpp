// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/Material.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__MATERIAL__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__MATERIAL__TRAITS_HPP_

#include "tesseract_msgs/msg/material__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'color'
#include "std_msgs/msg/color_rgba__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::Material>()
{
  return "tesseract_msgs::msg::Material";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::Material>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::Material>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::Material>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__MATERIAL__TRAITS_HPP_
