// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crs_msgs:msg/ToolProcessPath.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__MSG__TOOL_PROCESS_PATH__TRAITS_HPP_
#define CRS_MSGS__MSG__TOOL_PROCESS_PATH__TRAITS_HPP_

#include "crs_msgs/msg/tool_process_path__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crs_msgs::msg::ToolProcessPath>()
{
  return "crs_msgs::msg::ToolProcessPath";
}

template<>
struct has_fixed_size<crs_msgs::msg::ToolProcessPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crs_msgs::msg::ToolProcessPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crs_msgs::msg::ToolProcessPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRS_MSGS__MSG__TOOL_PROCESS_PATH__TRAITS_HPP_
