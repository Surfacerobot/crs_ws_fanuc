// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/ContactResult.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__CONTACT_RESULT__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__CONTACT_RESULT__TRAITS_HPP_

#include "tesseract_msgs/msg/contact_result__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'nearest_points'
// Member 'nearest_points_local'
// Member 'normal'
#include "geometry_msgs/msg/vector3__traits.hpp"
// Member 'transform'
// Member 'cc_transform'
#include "geometry_msgs/msg/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::ContactResult>()
{
  return "tesseract_msgs::msg::ContactResult";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::ContactResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::ContactResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::ContactResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__CONTACT_RESULT__TRAITS_HPP_
