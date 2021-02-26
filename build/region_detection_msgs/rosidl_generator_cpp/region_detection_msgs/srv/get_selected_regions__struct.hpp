// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from region_detection_msgs:srv/GetSelectedRegions.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__SRV__GET_SELECTED_REGIONS__STRUCT_HPP_
#define REGION_DETECTION_MSGS__SRV__GET_SELECTED_REGIONS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__region_detection_msgs__srv__GetSelectedRegions_Request __attribute__((deprecated))
#else
# define DEPRECATED__region_detection_msgs__srv__GetSelectedRegions_Request __declspec(deprecated)
#endif

namespace region_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSelectedRegions_Request_
{
  using Type = GetSelectedRegions_Request_<ContainerAllocator>;

  explicit GetSelectedRegions_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetSelectedRegions_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
    region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__region_detection_msgs__srv__GetSelectedRegions_Request
    std::shared_ptr<region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__region_detection_msgs__srv__GetSelectedRegions_Request
    std::shared_ptr<region_detection_msgs::srv::GetSelectedRegions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSelectedRegions_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSelectedRegions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSelectedRegions_Request_

// alias to use template instance with default allocator
using GetSelectedRegions_Request =
  region_detection_msgs::srv::GetSelectedRegions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace region_detection_msgs


#ifndef _WIN32
# define DEPRECATED__region_detection_msgs__srv__GetSelectedRegions_Response __attribute__((deprecated))
#else
# define DEPRECATED__region_detection_msgs__srv__GetSelectedRegions_Response __declspec(deprecated)
#endif

namespace region_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSelectedRegions_Response_
{
  using Type = GetSelectedRegions_Response_<ContainerAllocator>;

  explicit GetSelectedRegions_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetSelectedRegions_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _selected_regions_indices_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _selected_regions_indices_type selected_regions_indices;

  // setters for named parameter idiom
  Type & set__selected_regions_indices(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->selected_regions_indices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__region_detection_msgs__srv__GetSelectedRegions_Response
    std::shared_ptr<region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__region_detection_msgs__srv__GetSelectedRegions_Response
    std::shared_ptr<region_detection_msgs::srv::GetSelectedRegions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSelectedRegions_Response_ & other) const
  {
    if (this->selected_regions_indices != other.selected_regions_indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSelectedRegions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSelectedRegions_Response_

// alias to use template instance with default allocator
using GetSelectedRegions_Response =
  region_detection_msgs::srv::GetSelectedRegions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace region_detection_msgs

namespace region_detection_msgs
{

namespace srv
{

struct GetSelectedRegions
{
  using Request = region_detection_msgs::srv::GetSelectedRegions_Request;
  using Response = region_detection_msgs::srv::GetSelectedRegions_Response;
};

}  // namespace srv

}  // namespace region_detection_msgs

#endif  // REGION_DETECTION_MSGS__SRV__GET_SELECTED_REGIONS__STRUCT_HPP_
