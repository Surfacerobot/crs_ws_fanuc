// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:srv/ExecuteAction.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__EXECUTE_ACTION__STRUCT_HPP_
#define CRS_MSGS__SRV__EXECUTE_ACTION__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__ExecuteAction_Request __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__ExecuteAction_Request __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteAction_Request_
{
  using Type = ExecuteAction_Request_<ContainerAllocator>;

  explicit ExecuteAction_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_id = "";
    }
  }

  explicit ExecuteAction_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : action_id(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_id = "";
    }
  }

  // field types and members
  using _action_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_id_type action_id;

  // setters for named parameter idiom
  Type & set__action_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->action_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__ExecuteAction_Request
    std::shared_ptr<crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__ExecuteAction_Request
    std::shared_ptr<crs_msgs::srv::ExecuteAction_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteAction_Request_ & other) const
  {
    if (this->action_id != other.action_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteAction_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteAction_Request_

// alias to use template instance with default allocator
using ExecuteAction_Request =
  crs_msgs::srv::ExecuteAction_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs


#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__ExecuteAction_Response __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__ExecuteAction_Response __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteAction_Response_
{
  using Type = ExecuteAction_Response_<ContainerAllocator>;

  explicit ExecuteAction_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeeded = false;
      this->err_msg = "";
    }
  }

  explicit ExecuteAction_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : err_msg(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeeded = false;
      this->err_msg = "";
    }
  }

  // field types and members
  using _succeeded_type =
    bool;
  _succeeded_type succeeded;
  using _err_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _err_msg_type err_msg;

  // setters for named parameter idiom
  Type & set__succeeded(
    const bool & _arg)
  {
    this->succeeded = _arg;
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
    crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__ExecuteAction_Response
    std::shared_ptr<crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__ExecuteAction_Response
    std::shared_ptr<crs_msgs::srv::ExecuteAction_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteAction_Response_ & other) const
  {
    if (this->succeeded != other.succeeded) {
      return false;
    }
    if (this->err_msg != other.err_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteAction_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteAction_Response_

// alias to use template instance with default allocator
using ExecuteAction_Response =
  crs_msgs::srv::ExecuteAction_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs

namespace crs_msgs
{

namespace srv
{

struct ExecuteAction
{
  using Request = crs_msgs::srv::ExecuteAction_Request;
  using Response = crs_msgs::srv::ExecuteAction_Response;
};

}  // namespace srv

}  // namespace crs_msgs

#endif  // CRS_MSGS__SRV__EXECUTE_ACTION__STRUCT_HPP_
