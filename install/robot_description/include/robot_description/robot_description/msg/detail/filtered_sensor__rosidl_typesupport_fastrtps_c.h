// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robot_description:msg/FilteredSensor.idl
// generated code does not contain a copyright notice
#ifndef ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_description/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_description/msg/detail/filtered_sensor__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_description
bool cdr_serialize_robot_description__msg__FilteredSensor(
  const robot_description__msg__FilteredSensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_description
bool cdr_deserialize_robot_description__msg__FilteredSensor(
  eprosima::fastcdr::Cdr &,
  robot_description__msg__FilteredSensor * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_description
size_t get_serialized_size_robot_description__msg__FilteredSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_description
size_t max_serialized_size_robot_description__msg__FilteredSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_description
bool cdr_serialize_key_robot_description__msg__FilteredSensor(
  const robot_description__msg__FilteredSensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_description
size_t get_serialized_size_key_robot_description__msg__FilteredSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_description
size_t max_serialized_size_key_robot_description__msg__FilteredSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_description
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_description, msg, FilteredSensor)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
