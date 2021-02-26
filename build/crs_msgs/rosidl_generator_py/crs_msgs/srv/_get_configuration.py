# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crs_msgs:srv/GetConfiguration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetConfiguration_Request(type):
    """Metaclass of message 'GetConfiguration_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('crs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crs_msgs.srv.GetConfiguration_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_configuration__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_configuration__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_configuration__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_configuration__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_configuration__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetConfiguration_Request(metaclass=Metaclass_GetConfiguration_Request):
    """Message class 'GetConfiguration_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetConfiguration_Response(type):
    """Metaclass of message 'GetConfiguration_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('crs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crs_msgs.srv.GetConfiguration_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_configuration__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_configuration__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_configuration__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_configuration__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_configuration__response

            from crs_msgs.msg import ProcessConfiguration
            if ProcessConfiguration.__class__._TYPE_SUPPORT is None:
                ProcessConfiguration.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetConfiguration_Response(metaclass=Metaclass_GetConfiguration_Response):
    """Message class 'GetConfiguration_Response'."""

    __slots__ = [
        '_config',
        '_success',
        '_err_msg',
    ]

    _fields_and_field_types = {
        'config': 'crs_msgs/ProcessConfiguration',
        'success': 'boolean',
        'err_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['crs_msgs', 'msg'], 'ProcessConfiguration'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from crs_msgs.msg import ProcessConfiguration
        self.config = kwargs.get('config', ProcessConfiguration())
        self.success = kwargs.get('success', bool())
        self.err_msg = kwargs.get('err_msg', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.config != other.config:
            return False
        if self.success != other.success:
            return False
        if self.err_msg != other.err_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def config(self):
        """Message field 'config'."""
        return self._config

    @config.setter
    def config(self, value):
        if __debug__:
            from crs_msgs.msg import ProcessConfiguration
            assert \
                isinstance(value, ProcessConfiguration), \
                "The 'config' field must be a sub message of type 'ProcessConfiguration'"
        self._config = value

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def err_msg(self):
        """Message field 'err_msg'."""
        return self._err_msg

    @err_msg.setter
    def err_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'err_msg' field must be of type 'str'"
        self._err_msg = value


class Metaclass_GetConfiguration(type):
    """Metaclass of service 'GetConfiguration'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('crs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crs_msgs.srv.GetConfiguration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_configuration

            from crs_msgs.srv import _get_configuration
            if _get_configuration.Metaclass_GetConfiguration_Request._TYPE_SUPPORT is None:
                _get_configuration.Metaclass_GetConfiguration_Request.__import_type_support__()
            if _get_configuration.Metaclass_GetConfiguration_Response._TYPE_SUPPORT is None:
                _get_configuration.Metaclass_GetConfiguration_Response.__import_type_support__()


class GetConfiguration(metaclass=Metaclass_GetConfiguration):
    from crs_msgs.srv._get_configuration import GetConfiguration_Request as Request
    from crs_msgs.srv._get_configuration import GetConfiguration_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
