# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crs_msgs:srv/CallFreespaceMotion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CallFreespaceMotion_Request(type):
    """Metaclass of message 'CallFreespaceMotion_Request'."""

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
                'crs_msgs.srv.CallFreespaceMotion_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__call_freespace_motion__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__call_freespace_motion__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__call_freespace_motion__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__call_freespace_motion__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__call_freespace_motion__request

            from geometry_msgs.msg import Transform
            if Transform.__class__._TYPE_SUPPORT is None:
                Transform.__class__.__import_type_support__()

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CallFreespaceMotion_Request(metaclass=Metaclass_CallFreespaceMotion_Request):
    """Message class 'CallFreespaceMotion_Request'."""

    __slots__ = [
        '_target_link',
        '_start_position',
        '_goal_position',
        '_goal_pose',
        '_num_steps',
        '_execute',
    ]

    _fields_and_field_types = {
        'target_link': 'string',
        'start_position': 'sensor_msgs/JointState',
        'goal_position': 'sensor_msgs/JointState',
        'goal_pose': 'geometry_msgs/Transform',
        'num_steps': 'int32',
        'execute': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_link = kwargs.get('target_link', str())
        from sensor_msgs.msg import JointState
        self.start_position = kwargs.get('start_position', JointState())
        from sensor_msgs.msg import JointState
        self.goal_position = kwargs.get('goal_position', JointState())
        from geometry_msgs.msg import Transform
        self.goal_pose = kwargs.get('goal_pose', Transform())
        self.num_steps = kwargs.get('num_steps', int())
        self.execute = kwargs.get('execute', bool())

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
        if self.target_link != other.target_link:
            return False
        if self.start_position != other.start_position:
            return False
        if self.goal_position != other.goal_position:
            return False
        if self.goal_pose != other.goal_pose:
            return False
        if self.num_steps != other.num_steps:
            return False
        if self.execute != other.execute:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def target_link(self):
        """Message field 'target_link'."""
        return self._target_link

    @target_link.setter
    def target_link(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'target_link' field must be of type 'str'"
        self._target_link = value

    @property
    def start_position(self):
        """Message field 'start_position'."""
        return self._start_position

    @start_position.setter
    def start_position(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'start_position' field must be a sub message of type 'JointState'"
        self._start_position = value

    @property
    def goal_position(self):
        """Message field 'goal_position'."""
        return self._goal_position

    @goal_position.setter
    def goal_position(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'goal_position' field must be a sub message of type 'JointState'"
        self._goal_position = value

    @property
    def goal_pose(self):
        """Message field 'goal_pose'."""
        return self._goal_pose

    @goal_pose.setter
    def goal_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'goal_pose' field must be a sub message of type 'Transform'"
        self._goal_pose = value

    @property
    def num_steps(self):
        """Message field 'num_steps'."""
        return self._num_steps

    @num_steps.setter
    def num_steps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_steps' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_steps' field must be an integer in [-2147483648, 2147483647]"
        self._num_steps = value

    @property
    def execute(self):
        """Message field 'execute'."""
        return self._execute

    @execute.setter
    def execute(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'execute' field must be of type 'bool'"
        self._execute = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CallFreespaceMotion_Response(type):
    """Metaclass of message 'CallFreespaceMotion_Response'."""

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
                'crs_msgs.srv.CallFreespaceMotion_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__call_freespace_motion__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__call_freespace_motion__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__call_freespace_motion__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__call_freespace_motion__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__call_freespace_motion__response

            from trajectory_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CallFreespaceMotion_Response(metaclass=Metaclass_CallFreespaceMotion_Response):
    """Message class 'CallFreespaceMotion_Response'."""

    __slots__ = [
        '_output_trajectory',
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'output_trajectory': 'trajectory_msgs/JointTrajectory',
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from trajectory_msgs.msg import JointTrajectory
        self.output_trajectory = kwargs.get('output_trajectory', JointTrajectory())
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.output_trajectory != other.output_trajectory:
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def output_trajectory(self):
        """Message field 'output_trajectory'."""
        return self._output_trajectory

    @output_trajectory.setter
    def output_trajectory(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'output_trajectory' field must be a sub message of type 'JointTrajectory'"
        self._output_trajectory = value

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
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_CallFreespaceMotion(type):
    """Metaclass of service 'CallFreespaceMotion'."""

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
                'crs_msgs.srv.CallFreespaceMotion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__call_freespace_motion

            from crs_msgs.srv import _call_freespace_motion
            if _call_freespace_motion.Metaclass_CallFreespaceMotion_Request._TYPE_SUPPORT is None:
                _call_freespace_motion.Metaclass_CallFreespaceMotion_Request.__import_type_support__()
            if _call_freespace_motion.Metaclass_CallFreespaceMotion_Response._TYPE_SUPPORT is None:
                _call_freespace_motion.Metaclass_CallFreespaceMotion_Response.__import_type_support__()


class CallFreespaceMotion(metaclass=Metaclass_CallFreespaceMotion):
    from crs_msgs.srv._call_freespace_motion import CallFreespaceMotion_Request as Request
    from crs_msgs.srv._call_freespace_motion import CallFreespaceMotion_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
