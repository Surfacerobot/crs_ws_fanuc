// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:srv/GetConfiguration.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__GET_CONFIGURATION__STRUCT_HPP_
#define CRS_MSGS__SRV__GET_CONFIGURATION__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__GetConfiguration_Request __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__GetConfiguration_Request __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetConfiguration_Request_
{
  using Type = GetConfiguration_Request_<ContainerAllocator>;

  explicit GetConfiguration_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetConfiguration_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;

  // setters for named parameter idiom
  Type & set__structure_needs_at_least_one_member(
    const uint8_t & _arg)
  {
    this->structure_needs_at_least_one_member = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__GetConfiguration_Request
    std::shared_ptr<crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__GetConfiguration_Request
    std::shared_ptr<crs_msgs::srv::GetConfiguration_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetConfiguration_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetConfiguration_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetConfiguration_Request_

// alias to use template instance with default allocator
using GetConfiguration_Request =
  crs_msgs::srv::GetConfiguration_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs


// Include directives for member types
// Member 'config'
#include "crs_msgs/msg/process_configuration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__GetConfiguration_Response __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__GetConfiguration_Response __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetConfiguration_Response_
{
  using Type = GetConfiguration_Response_<ContainerAllocator>;

  explicit GetConfiguration_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : config(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->err_msg = "";
    }
  }

  explicit GetConfiguration_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : config(_alloc, _init),
    err_msg(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->err_msg = "";
    }
  }

  // field types and members
  using _config_type =
    crs_msgs::msg::ProcessConfiguration_<ContainerAllocator>;
  _config_type config;
  using _success_type =
    bool;
  _success_type success;
  using _err_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _err_msg_type err_msg;

  // setters for named parameter idiom
  Type & set__config(
    const crs_msgs::msg::ProcessConfiguration_<ContainerAllocator> & _arg)
  {
    this->config = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__err_msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->err_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__GetConfiguration_Response
    std::shared_ptr<crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__GetConfiguration_Response
    std::shared_ptr<crs_msgs::srv::GetConfiguration_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetConfiguration_Response_ & other) const
  {
    if (this->config != other.config) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->err_msg != other.err_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetConfiguration_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetConfiguration_Response_

// alias to use template instance with default allocator
using GetConfiguration_Response =
  crs_msgs::srv::GetConfiguration_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs

namespace crs_msgs
{

namespace srv
{

struct GetConfiguration
{
  using Request = crs_msgs::srv::GetConfiguration_Request;
  using Response = crs_msgs::srv::GetConfiguration_Response;
};

}  // namespace srv

}  // namespace crs_msgs

#endif  // CRS_MSGS__SRV__GET_CONFIGURATION__STRUCT_HPP_
