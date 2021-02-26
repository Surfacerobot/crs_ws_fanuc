// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__GEOMETRY__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__GEOMETRY__TRAITS_HPP_

#include "tesseract_msgs/msg/geometry__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'mesh'
#include "tesseract_msgs/msg/mesh__traits.hpp"
// Member 'octomap'
#include "octomap_msgs/msg/octomap__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::Geometry>()
{
  return "tesseract_msgs::msg::Geometry";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::Geometry>
  : std::integral_constant<bool, has_fixed_size<octomap_msgs::msg::Octomap>::value && has_fixed_size<tesseract_msgs::msg::Mesh>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::Geometry>
  : std::integral_constant<bool, has_bounded_size<octomap_msgs::msg::Octomap>::value && has_bounded_size<tesseract_msgs::msg::Mesh>::value> {};

template<>
struct is_message<tesseract_msgs::msg::Geometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__GEOMETRY__TRAITS_HPP_
