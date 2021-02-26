// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from crs_msgs:srv/PlanProcessMotions.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_generator_c/visibility_control.h"
#include "crs_msgs/srv/plan_process_motions__struct.h"
#include "crs_msgs/srv/plan_process_motions__functions.h"

#include "rosidl_generator_c/string.h"
#include "rosidl_generator_c/string_functions.h"

#include "rosidl_generator_c/primitives_sequence.h"
#include "rosidl_generator_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "crs_msgs/msg/tool_process_path__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__joint_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__joint_state__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__joint_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__joint_state__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
bool crs_msgs__msg__tool_process_path__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * crs_msgs__msg__tool_process_path__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool crs_msgs__srv__plan_process_motions__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp(
        "crs_msgs.srv._plan_process_motions.PlanProcessMotions_Request",
        full_classname_dest, 61) == 0);
  }
  crs_msgs__srv__PlanProcessMotions_Request * ros_message = _ros_message;
  {  // tool_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_link");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String__assign(&ros_message->tool_link, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // start_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_position");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__joint_state__convert_from_py(field, &ros_message->start_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // end_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_position");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__joint_state__convert_from_py(field, &ros_message->end_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tool_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_offset");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->tool_offset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // approach_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "approach_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->approach_dist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // retreat_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "retreat_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->retreat_dist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tool_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tool_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_force");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_force = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // process_paths
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_paths");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'process_paths'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!crs_msgs__msg__ToolProcessPath__Sequence__init(&(ros_message->process_paths), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create crs_msgs__msg__ToolProcessPath__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    crs_msgs__msg__ToolProcessPath * dest = ros_message->process_paths.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!crs_msgs__msg__tool_process_path__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * crs_msgs__srv__plan_process_motions__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanProcessMotions_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("crs_msgs.srv._plan_process_motions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanProcessMotions_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  crs_msgs__srv__PlanProcessMotions_Request * ros_message = (crs_msgs__srv__PlanProcessMotions_Request *)raw_ros_message;
  {  // tool_link
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->tool_link.data,
      strlen(ros_message->tool_link.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_position
    PyObject * field = NULL;
    field = sensor_msgs__msg__joint_state__convert_to_py(&ros_message->start_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_position
    PyObject * field = NULL;
    field = sensor_msgs__msg__joint_state__convert_to_py(&ros_message->end_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_offset
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->tool_offset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // approach_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->approach_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "approach_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // retreat_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->retreat_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "retreat_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tool_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_force
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_force);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // process_paths
    PyObject * field = NULL;
    size_t size = ros_message->process_paths.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    crs_msgs__msg__ToolProcessPath * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->process_paths.data[i]);
      PyObject * pyitem = crs_msgs__msg__tool_process_path__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "process_paths", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "crs_msgs/srv/plan_process_motions__struct.h"
// already included above
// #include "crs_msgs/srv/plan_process_motions__functions.h"

// already included above
// #include "rosidl_generator_c/primitives_sequence.h"
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

// already included above
// #include "rosidl_generator_c/string.h"
// already included above
// #include "rosidl_generator_c/string_functions.h"

// Nested array functions includes
#include "crs_msgs/msg/process_motion_plan__functions.h"
// end nested array functions include
bool crs_msgs__msg__process_motion_plan__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * crs_msgs__msg__process_motion_plan__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool crs_msgs__srv__plan_process_motions__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp(
        "crs_msgs.srv._plan_process_motions.PlanProcessMotions_Response",
        full_classname_dest, 62) == 0);
  }
  crs_msgs__srv__PlanProcessMotions_Response * ros_message = _ros_message;
  {  // plans
    PyObject * field = PyObject_GetAttrString(_pymsg, "plans");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'plans'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!crs_msgs__msg__ProcessMotionPlan__Sequence__init(&(ros_message->plans), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create crs_msgs__msg__ProcessMotionPlan__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    crs_msgs__msg__ProcessMotionPlan * dest = ros_message->plans.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!crs_msgs__msg__process_motion_plan__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // succeeded
    PyObject * field = PyObject_GetAttrString(_pymsg, "succeeded");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->succeeded = (Py_True == field);
    Py_DECREF(field);
  }
  {  // err_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_msg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String__assign(&ros_message->err_msg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * crs_msgs__srv__plan_process_motions__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanProcessMotions_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("crs_msgs.srv._plan_process_motions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanProcessMotions_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  crs_msgs__srv__PlanProcessMotions_Response * ros_message = (crs_msgs__srv__PlanProcessMotions_Response *)raw_ros_message;
  {  // plans
    PyObject * field = NULL;
    size_t size = ros_message->plans.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    crs_msgs__msg__ProcessMotionPlan * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->plans.data[i]);
      PyObject * pyitem = crs_msgs__msg__process_motion_plan__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "plans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // succeeded
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->succeeded ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "succeeded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_msg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->err_msg.data,
      strlen(ros_message->err_msg.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
