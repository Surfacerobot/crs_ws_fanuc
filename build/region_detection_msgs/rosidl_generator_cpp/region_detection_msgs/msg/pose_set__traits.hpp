// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from region_detection_msgs:msg/PoseSet.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__MSG__POSE_SET__TRAITS_HPP_
#define REGION_DETECTION_MSGS__MSG__POSE_SET__TRAITS_HPP_

#include "region_detection_msgs/msg/pose_set__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<region_detection_msgs::msg::PoseSet>()
{
  return "region_detection_msgs::msg::PoseSet";
}

template<>
struct has_fixed_size<region_detection_msgs::msg::PoseSet>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<region_detection_msgs::msg::PoseSet>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<region_detection_msgs::msg::PoseSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // REGION_DETECTION_MSGS__MSG__POSE_SET__TRAITS_HPP_
