// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_description:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_description/msg/filtered_sensor.h"


#ifndef ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__FUNCTIONS_H_
#define ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "robot_description/msg/rosidl_generator_c__visibility_control.h"

#include "robot_description/msg/detail/filtered_sensor__struct.h"

/// Initialize msg/FilteredSensor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_description__msg__FilteredSensor
 * )) before or use
 * robot_description__msg__FilteredSensor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
bool
robot_description__msg__FilteredSensor__init(robot_description__msg__FilteredSensor * msg);

/// Finalize msg/FilteredSensor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
void
robot_description__msg__FilteredSensor__fini(robot_description__msg__FilteredSensor * msg);

/// Create msg/FilteredSensor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_description__msg__FilteredSensor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
robot_description__msg__FilteredSensor *
robot_description__msg__FilteredSensor__create(void);

/// Destroy msg/FilteredSensor message.
/**
 * It calls
 * robot_description__msg__FilteredSensor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
void
robot_description__msg__FilteredSensor__destroy(robot_description__msg__FilteredSensor * msg);

/// Check for msg/FilteredSensor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
bool
robot_description__msg__FilteredSensor__are_equal(const robot_description__msg__FilteredSensor * lhs, const robot_description__msg__FilteredSensor * rhs);

/// Copy a msg/FilteredSensor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
bool
robot_description__msg__FilteredSensor__copy(
  const robot_description__msg__FilteredSensor * input,
  robot_description__msg__FilteredSensor * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robot_description
const rosidl_type_hash_t *
robot_description__msg__FilteredSensor__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robot_description
const rosidl_runtime_c__type_description__TypeDescription *
robot_description__msg__FilteredSensor__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robot_description
const rosidl_runtime_c__type_description__TypeSource *
robot_description__msg__FilteredSensor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robot_description
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_description__msg__FilteredSensor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/FilteredSensor messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_description__msg__FilteredSensor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
bool
robot_description__msg__FilteredSensor__Sequence__init(robot_description__msg__FilteredSensor__Sequence * array, size_t size);

/// Finalize array of msg/FilteredSensor messages.
/**
 * It calls
 * robot_description__msg__FilteredSensor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
void
robot_description__msg__FilteredSensor__Sequence__fini(robot_description__msg__FilteredSensor__Sequence * array);

/// Create array of msg/FilteredSensor messages.
/**
 * It allocates the memory for the array and calls
 * robot_description__msg__FilteredSensor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
robot_description__msg__FilteredSensor__Sequence *
robot_description__msg__FilteredSensor__Sequence__create(size_t size);

/// Destroy array of msg/FilteredSensor messages.
/**
 * It calls
 * robot_description__msg__FilteredSensor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
void
robot_description__msg__FilteredSensor__Sequence__destroy(robot_description__msg__FilteredSensor__Sequence * array);

/// Check for msg/FilteredSensor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
bool
robot_description__msg__FilteredSensor__Sequence__are_equal(const robot_description__msg__FilteredSensor__Sequence * lhs, const robot_description__msg__FilteredSensor__Sequence * rhs);

/// Copy an array of msg/FilteredSensor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_description
bool
robot_description__msg__FilteredSensor__Sequence__copy(
  const robot_description__msg__FilteredSensor__Sequence * input,
  robot_description__msg__FilteredSensor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__FUNCTIONS_H_
