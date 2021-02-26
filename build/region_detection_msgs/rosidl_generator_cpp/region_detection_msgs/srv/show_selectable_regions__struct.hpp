// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from region_detection_msgs:srv/ShowSelectableRegions.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__SRV__SHOW_SELECTABLE_REGIONS__STRUCT_HPP_
#define REGION_DETECTION_MSGS__SRV__SHOW_SELECTABLE_REGIONS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'selectable_regions'
#include "geometry_msgs/msg/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__region_detection_msgs__srv__ShowSelectableRegions_Request __attribute__((deprecated))
#else
# define DEPRECATED__region_detection_msgs__srv__ShowSelectableRegions_Request __declspec(deprecated)
#endif

namespace region_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ShowSelectableRegions_Request_
{
  using Type = ShowSelectableRegions_Request_<ContainerAllocator>;

  explicit ShowSelectableRegions_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_selected = false;
    }
  }

  explicit ShowSelectableRegions_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_selected = false;
    }
  }

  // field types and members
  using _selectable_regions_type =
    std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other>;
  _selectable_regions_type selectable_regions;
  using _start_selected_type =
    bool;
  _start_selected_type start_selected;

  // setters for named parameter idiom
  Type & set__selectable_regions(
    const std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other> & _arg)
  {
    this->selectable_regions = _arg;
    return *this;
  }
  Type & set__start_selected(
    const bool & _arg)
  {
    this->start_selected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__region_detection_msgs__srv__ShowSelectableRegions_Request
    std::shared_ptr<region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__region_detection_msgs__srv__ShowSelectableRegions_Request
    std::shared_ptr<region_detection_msgs::srv::ShowSelectableRegions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShowSelectableRegions_Request_ & other) const
  {
    if (this->selectable_regions != other.selectable_regions) {
      return false;
    }
    if (this->start_selected != other.start_selected) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShowSelectableRegions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShowSelectableRegions_Request_

// alias to use template instance with default allocator
using ShowSelectableRegions_Request =
  region_detection_msgs::srv::ShowSelectableRegions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace region_detection_msgs


#ifndef _WIN32
# define DEPRECATED__region_detection_msgs__srv__ShowSelectableRegions_Response __attribute__((deprecated))
#else
# define DEPRECATED__region_detection_msgs__srv__ShowSelectableRegions_Response __declspec(deprecated)
#endif

namespace region_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ShowSelectableRegions_Response_
{
  using Type = ShowSelectableRegions_Response_<ContainerAllocator>;

  explicit ShowSelectableRegions_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ShowSelectableRegions_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
    region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__region_detection_msgs__srv__ShowSelectableRegions_Response
    std::shared_ptr<region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__region_detection_msgs__srv__ShowSelectableRegions_Response
    std::shared_ptr<region_detection_msgs::srv::ShowSelectableRegions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShowSelectableRegions_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShowSelectableRegions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShowSelectableRegions_Response_

// alias to use template instance with default allocator
using ShowSelectableRegions_Response =
  region_detection_msgs::srv::ShowSelectableRegions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace region_detection_msgs

namespace region_detection_msgs
{

namespace srv
{

struct ShowSelectableRegions
{
  using Request = region_detection_msgs::srv::ShowSelectableRegions_Request;
  using Response = region_detection_msgs::srv::ShowSelectableRegions_Response;
};

}  // namespace srv

}  // namespace region_detection_msgs

#endif  // REGION_DETECTION_MSGS__SRV__SHOW_SELECTABLE_REGIONS__STRUCT_HPP_
