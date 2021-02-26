// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/VisualGeometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__VISUAL_GEOMETRY__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__VISUAL_GEOMETRY__TRAITS_HPP_

#include "tesseract_msgs/msg/visual_geometry__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'origin'
#include "geometry_msgs/msg/pose__traits.hpp"
// Member 'geometry'
#include "tesseract_msgs/msg/geometry__traits.hpp"
// Member 'material'
#include "tesseract_msgs/msg/material__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::VisualGeometry>()
{
  return "tesseract_msgs::msg::VisualGeometry";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::VisualGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::VisualGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::VisualGeometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__VISUAL_GEOMETRY__TRAITS_HPP_
