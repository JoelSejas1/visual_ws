// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_description:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_description/msg/detail/filtered_sensor__functions.h"
#include "robot_description/msg/detail/filtered_sensor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_description
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FilteredSensor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_description::msg::FilteredSensor(_init);
}

void FilteredSensor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_description::msg::FilteredSensor *>(message_memory);
  typed_message->~FilteredSensor();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FilteredSensor_message_member_array[2] = {
  {
    "sensor_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_description::msg::FilteredSensor, sensor_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_description::msg::FilteredSensor, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FilteredSensor_message_members = {
  "robot_description::msg",  // message namespace
  "FilteredSensor",  // message name
  2,  // number of fields
  sizeof(robot_description::msg::FilteredSensor),
  false,  // has_any_key_member_
  FilteredSensor_message_member_array,  // message members
  FilteredSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  FilteredSensor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FilteredSensor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FilteredSensor_message_members,
  get_message_typesupport_handle_function,
  &robot_description__msg__FilteredSensor__get_type_hash,
  &robot_description__msg__FilteredSensor__get_type_description,
  &robot_description__msg__FilteredSensor__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_description


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_description::msg::FilteredSensor>()
{
  return &::robot_description::msg::rosidl_typesupport_introspection_cpp::FilteredSensor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_description, msg, FilteredSensor)() {
  return &::robot_description::msg::rosidl_typesupport_introspection_cpp::FilteredSensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
