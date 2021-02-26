// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:srv/LoadPart.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__LOAD_PART__STRUCT_HPP_
#define CRS_MSGS__SRV__LOAD_PART__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'part_origin'
#include "geometry_msgs/msg/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__LoadPart_Request __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__LoadPart_Request __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadPart_Request_
{
  using Type = LoadPart_Request_<ContainerAllocator>;

  explicit LoadPart_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : part_origin(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_to_part = "";
    }
  }

  explicit LoadPart_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : path_to_part(_alloc),
    part_origin(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_to_part = "";
    }
  }

  // field types and members
  using _path_to_part_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _path_to_part_type path_to_part;
  using _part_origin_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _part_origin_type part_origin;

  // setters for named parameter idiom
  Type & set__path_to_part(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->path_to_part = _arg;
    return *this;
  }
  Type & set__part_origin(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->part_origin = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::LoadPart_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::LoadPart_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::LoadPart_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::LoadPart_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::LoadPart_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::LoadPart_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::LoadPart_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::LoadPart_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::LoadPart_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::LoadPart_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__LoadPart_Request
    std::shared_ptr<crs_msgs::srv::LoadPart_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__LoadPart_Request
    std::shared_ptr<crs_msgs::srv::LoadPart_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadPart_Request_ & other) const
  {
    if (this->path_to_part != other.path_to_part) {
      return false;
    }
    if (this->part_origin != other.part_origin) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadPart_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadPart_Request_

// alias to use template instance with default allocator
using LoadPart_Request =
  crs_msgs::srv::LoadPart_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs


#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__LoadPart_Response __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__LoadPart_Response __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadPart_Response_
{
  using Type = LoadPart_Response_<ContainerAllocator>;

  explicit LoadPart_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  explicit LoadPart_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::LoadPart_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::LoadPart_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::LoadPart_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::LoadPart_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::LoadPart_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::LoadPart_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::LoadPart_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::LoadPart_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::LoadPart_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::LoadPart_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__LoadPart_Response
    std::shared_ptr<crs_msgs::srv::LoadPart_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__LoadPart_Response
    std::shared_ptr<crs_msgs::srv::LoadPart_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadPart_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadPart_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadPart_Response_

// alias to use template instance with default allocator
using LoadPart_Response =
  crs_msgs::srv::LoadPart_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs

namespace crs_msgs
{

namespace srv
{

struct LoadPart
{
  using Request = crs_msgs::srv::LoadPart_Request;
  using Response = crs_msgs::srv::LoadPart_Response;
};

}  // namespace srv

}  // namespace crs_msgs

#endif  // CRS_MSGS__SRV__LOAD_PART__STRUCT_HPP_
