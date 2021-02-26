// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:msg/ProcessConfiguration.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__MSG__PROCESS_CONFIGURATION__STRUCT_HPP_
#define CRS_MSGS__MSG__PROCESS_CONFIGURATION__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__crs_msgs__msg__ProcessConfiguration __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__msg__ProcessConfiguration __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessConfiguration_
{
  using Type = ProcessConfiguration_<ContainerAllocator>;

  explicit ProcessConfiguration_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaml_config = "";
    }
  }

  explicit ProcessConfiguration_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : yaml_config(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaml_config = "";
    }
  }

  // field types and members
  using _yaml_config_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _yaml_config_type yaml_config;

  // setters for named parameter idiom
  Type & set__yaml_config(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->yaml_config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::msg::ProcessConfiguration_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::msg::ProcessConfiguration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::msg::ProcessConfiguration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::msg::ProcessConfiguration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::msg::ProcessConfiguration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::msg::ProcessConfiguration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::msg::ProcessConfiguration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::msg::ProcessConfiguration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::msg::ProcessConfiguration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::msg::ProcessConfiguration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__msg__ProcessConfiguration
    std::shared_ptr<crs_msgs::msg::ProcessConfiguration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__msg__ProcessConfiguration
    std::shared_ptr<crs_msgs::msg::ProcessConfiguration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessConfiguration_ & other) const
  {
    if (this->yaml_config != other.yaml_config) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessConfiguration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessConfiguration_

// alias to use template instance with default allocator
using ProcessConfiguration =
  crs_msgs::msg::ProcessConfiguration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crs_msgs

#endif  // CRS_MSGS__MSG__PROCESS_CONFIGURATION__STRUCT_HPP_
