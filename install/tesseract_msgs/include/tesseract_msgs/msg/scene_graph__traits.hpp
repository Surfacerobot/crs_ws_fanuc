// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__SCENE_GRAPH__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__SCENE_GRAPH__TRAITS_HPP_

#include "tesseract_msgs/msg/scene_graph__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::SceneGraph>()
{
  return "tesseract_msgs::msg::SceneGraph";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::SceneGraph>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::SceneGraph>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::SceneGraph>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__SCENE_GRAPH__TRAITS_HPP_
