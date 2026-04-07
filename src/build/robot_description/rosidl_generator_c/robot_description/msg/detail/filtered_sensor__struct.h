// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_description:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_description/msg/filtered_sensor.h"


#ifndef ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__STRUCT_H_
#define ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FilteredSensor in the package robot_description.
typedef struct robot_description__msg__FilteredSensor
{
  double sensor_value;
  rosidl_runtime_c__String name;
} robot_description__msg__FilteredSensor;

// Struct for a sequence of robot_description__msg__FilteredSensor.
typedef struct robot_description__msg__FilteredSensor__Sequence
{
  robot_description__msg__FilteredSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_description__msg__FilteredSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__STRUCT_H_
