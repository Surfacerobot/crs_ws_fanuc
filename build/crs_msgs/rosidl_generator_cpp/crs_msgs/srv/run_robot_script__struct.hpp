// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:srv/RunRobotScript.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__RUN_ROBOT_SCRIPT__STRUCT_HPP_
#define CRS_MSGS__SRV__RUN_ROBOT_SCRIPT__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__RunRobotScript_Request __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__RunRobotScript_Request __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RunRobotScript_Request_
{
  using Type = RunRobotScript_Request_<ContainerAllocator>;

  explicit RunRobotScript_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  explicit RunRobotScript_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : filename(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _filename_type filename;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->filename = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__RunRobotScript_Request
    std::shared_ptr<crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__RunRobotScript_Request
    std::shared_ptr<crs_msgs::srv::RunRobotScript_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunRobotScript_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunRobotScript_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunRobotScript_Request_

// alias to use template instance with default allocator
using RunRobotScript_Request =
  crs_msgs::srv::RunRobotScript_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs


#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__RunRobotScript_Response __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__RunRobotScript_Response __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RunRobotScript_Response_
{
  using Type = RunRobotScript_Response_<ContainerAllocator>;

  explicit RunRobotScript_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
      this->success = false;
    }
  }

  explicit RunRobotScript_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : answer(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
      this->success = false;
    }
  }

  // field types and members
  using _answer_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _answer_type answer;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__answer(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->answer = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__RunRobotScript_Response
    std::shared_ptr<crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__RunRobotScript_Response
    std::shared_ptr<crs_msgs::srv::RunRobotScript_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunRobotScript_Response_ & other) const
  {
    if (this->answer != other.answer) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunRobotScript_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunRobotScript_Response_

// alias to use template instance with default allocator
using RunRobotScript_Response =
  crs_msgs::srv::RunRobotScript_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs

namespace crs_msgs
{

namespace srv
{

struct RunRobotScript
{
  using Request = crs_msgs::srv::RunRobotScript_Request;
  using Response = crs_msgs::srv::RunRobotScript_Response;
};

}  // namespace srv

}  // namespace crs_msgs

#endif  // CRS_MSGS__SRV__RUN_ROBOT_SCRIPT__STRUCT_HPP_
