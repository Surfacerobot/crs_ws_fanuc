// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/TesseractInitInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__TESSERACT_INIT_INFO__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__TESSERACT_INIT_INFO__TRAITS_HPP_

#include "tesseract_msgs/msg/tesseract_init_info__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'scene_graph'
#include "tesseract_msgs/msg/scene_graph__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::TesseractInitInfo>()
{
  return "tesseract_msgs::msg::TesseractInitInfo";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::TesseractInitInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::TesseractInitInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::TesseractInitInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__TESSERACT_INIT_INFO__TRAITS_HPP_
