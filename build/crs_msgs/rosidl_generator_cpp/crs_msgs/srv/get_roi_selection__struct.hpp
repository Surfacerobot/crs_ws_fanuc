// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:srv/GetROISelection.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__GET_ROI_SELECTION__STRUCT_HPP_
#define CRS_MSGS__SRV__GET_ROI_SELECTION__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'input_cloud'
#include "sensor_msgs/msg/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__GetROISelection_Request __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__GetROISelection_Request __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetROISelection_Request_
{
  using Type = GetROISelection_Request_<ContainerAllocator>;

  explicit GetROISelection_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : input_cloud(_init)
  {
    (void)_init;
  }

  explicit GetROISelection_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : input_cloud(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _input_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _input_cloud_type input_cloud;

  // setters for named parameter idiom
  Type & set__input_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->input_cloud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::GetROISelection_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::GetROISelection_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::GetROISelection_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::GetROISelection_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::GetROISelection_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::GetROISelection_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::GetROISelection_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::GetROISelection_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::GetROISelection_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::GetROISelection_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__GetROISelection_Request
    std::shared_ptr<crs_msgs::srv::GetROISelection_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__GetROISelection_Request
    std::shared_ptr<crs_msgs::srv::GetROISelection_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetROISelection_Request_ & other) const
  {
    if (this->input_cloud != other.input_cloud) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetROISelection_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetROISelection_Request_

// alias to use template instance with default allocator
using GetROISelection_Request =
  crs_msgs::srv::GetROISelection_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs


#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__GetROISelection_Response __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__GetROISelection_Response __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetROISelection_Response_
{
  using Type = GetROISelection_Response_<ContainerAllocator>;

  explicit GetROISelection_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GetROISelection_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;
  using _cloud_indices_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _cloud_indices_type cloud_indices;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__cloud_indices(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->cloud_indices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::GetROISelection_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::GetROISelection_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::GetROISelection_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::GetROISelection_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::GetROISelection_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::GetROISelection_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::GetROISelection_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::GetROISelection_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::GetROISelection_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::GetROISelection_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__GetROISelection_Response
    std::shared_ptr<crs_msgs::srv::GetROISelection_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__GetROISelection_Response
    std::shared_ptr<crs_msgs::srv::GetROISelection_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetROISelection_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->cloud_indices != other.cloud_indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetROISelection_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetROISelection_Response_

// alias to use template instance with default allocator
using GetROISelection_Response =
  crs_msgs::srv::GetROISelection_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs

namespace crs_msgs
{

namespace srv
{

struct GetROISelection
{
  using Request = crs_msgs::srv::GetROISelection_Request;
  using Response = crs_msgs::srv::GetROISelection_Response;
};

}  // namespace srv

}  // namespace crs_msgs

#endif  // CRS_MSGS__SRV__GET_ROI_SELECTION__STRUCT_HPP_
