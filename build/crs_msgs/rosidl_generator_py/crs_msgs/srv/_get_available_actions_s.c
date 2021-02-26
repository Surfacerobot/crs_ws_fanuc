// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from crs_msgs:srv/GetAvailableActions.idl
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
#include "crs_msgs/srv/get_available_actions__struct.h"
#include "crs_msgs/srv/get_available_actions__functions.h"

#include "rosidl_generator_c/string.h"
#include "rosidl_generator_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool crs_msgs__srv__get_available_actions__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
        "crs_msgs.srv._get_available_actions.GetAvailableActions_Request",
        full_classname_dest, 63) == 0);
  }
  crs_msgs__srv__GetAvailableActions_Request * ros_message = _ros_message;
  {  // search_pattern
    PyObject * field = PyObject_GetAttrString(_pymsg, "search_pattern");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String__assign(&ros_message->search_pattern, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * crs_msgs__srv__get_available_actions__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetAvailableActions_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("crs_msgs.srv._get_available_actions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetAvailableActions_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  crs_msgs__srv__GetAvailableActions_Request * ros_message = (crs_msgs__srv__GetAvailableActions_Request *)raw_ros_message;
  {  // search_pattern
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->search_pattern.data,
      strlen(ros_message->search_pattern.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "search_pattern", field);
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
// #include "crs_msgs/srv/get_available_actions__struct.h"
// already included above
// #include "crs_msgs/srv/get_available_actions__functions.h"

#include "rosidl_generator_c/primitives_sequence.h"
#include "rosidl_generator_c/primitives_sequence_functions.h"
// already included above
// #include "rosidl_generator_c/string.h"
// already included above
// #include "rosidl_generator_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool crs_msgs__srv__get_available_actions__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
        "crs_msgs.srv._get_available_actions.GetAvailableActions_Response",
        full_classname_dest, 64) == 0);
  }
  crs_msgs__srv__GetAvailableActions_Response * ros_message = _ros_message;
  {  // action_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "action_ids");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'action_ids'");
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
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->action_ids), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->action_ids.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
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
PyObject * crs_msgs__srv__get_available_actions__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetAvailableActions_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("crs_msgs.srv._get_available_actions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetAvailableActions_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  crs_msgs__srv__GetAvailableActions_Response * ros_message = (crs_msgs__srv__GetAvailableActions_Response *)raw_ros_message;
  {  // action_ids
    PyObject * field = NULL;
    size_t size = ros_message->action_ids.size;
    rosidl_generator_c__String * src = ros_message->action_ids.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "action_ids", field);
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
