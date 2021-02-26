// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__JOINT__TRAITS_HPP_
#define TESSERACT_MSGS__MSG__JOINT__TRAITS_HPP_

#include "tesseract_msgs/msg/joint__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'parent_to_joint_origin_transform'
#include "geometry_msgs/msg/pose__traits.hpp"
// Member 'limits'
#include "tesseract_msgs/msg/joint_limits__traits.hpp"
// Member 'dynamics'
#include "tesseract_msgs/msg/joint_dynamics__traits.hpp"
// Member 'safety'
#include "tesseract_msgs/msg/joint_safety__traits.hpp"
// Member 'calibration'
#include "tesseract_msgs/msg/joint_calibration__traits.hpp"
// Member 'mimic'
#include "tesseract_msgs/msg/joint_mimic__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::msg::Joint>()
{
  return "tesseract_msgs::msg::Joint";
}

template<>
struct has_fixed_size<tesseract_msgs::msg::Joint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::msg::Joint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::msg::Joint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__MSG__JOINT__TRAITS_HPP_
