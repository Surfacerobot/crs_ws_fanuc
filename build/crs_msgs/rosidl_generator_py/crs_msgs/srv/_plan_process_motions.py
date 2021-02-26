# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crs_msgs:srv/PlanProcessMotions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanProcessMotions_Request(type):
    """Metaclass of message 'PlanProcessMotions_Request'."""

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
                'crs_msgs.srv.PlanProcessMotions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_process_motions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_process_motions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_process_motions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_process_motions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_process_motions__request

            from crs_msgs.msg import ToolProcessPath
            if ToolProcessPath.__class__._TYPE_SUPPORT is None:
                ToolProcessPath.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

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


class PlanProcessMotions_Request(metaclass=Metaclass_PlanProcessMotions_Request):
    """Message class 'PlanProcessMotions_Request'."""

    __slots__ = [
        '_tool_link',
        '_start_position',
        '_end_position',
        '_tool_offset',
        '_approach_dist',
        '_retreat_dist',
        '_tool_speed',
        '_target_force',
        '_process_paths',
    ]

    _fields_and_field_types = {
        'tool_link': 'string',
        'start_position': 'sensor_msgs/JointState',
        'end_position': 'sensor_msgs/JointState',
        'tool_offset': 'geometry_msgs/Pose',
        'approach_dist': 'double',
        'retreat_dist': 'double',
        'tool_speed': 'double',
        'target_force': 'double',
        'process_paths': 'sequence<crs_msgs/ToolProcessPath>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['crs_msgs', 'msg'], 'ToolProcessPath')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tool_link = kwargs.get('tool_link', str())
        from sensor_msgs.msg import JointState
        self.start_position = kwargs.get('start_position', JointState())
        from sensor_msgs.msg import JointState
        self.end_position = kwargs.get('end_position', JointState())
        from geometry_msgs.msg import Pose
        self.tool_offset = kwargs.get('tool_offset', Pose())
        self.approach_dist = kwargs.get('approach_dist', float())
        self.retreat_dist = kwargs.get('retreat_dist', float())
        self.tool_speed = kwargs.get('tool_speed', float())
        self.target_force = kwargs.get('target_force', float())
        self.process_paths = kwargs.get('process_paths', [])

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
        if self.tool_link != other.tool_link:
            return False
        if self.start_position != other.start_position:
            return False
        if self.end_position != other.end_position:
            return False
        if self.tool_offset != other.tool_offset:
            return False
        if self.approach_dist != other.approach_dist:
            return False
        if self.retreat_dist != other.retreat_dist:
            return False
        if self.tool_speed != other.tool_speed:
            return False
        if self.target_force != other.target_force:
            return False
        if self.process_paths != other.process_paths:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def tool_link(self):
        """Message field 'tool_link'."""
        return self._tool_link

    @tool_link.setter
    def tool_link(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tool_link' field must be of type 'str'"
        self._tool_link = value

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
    def end_position(self):
        """Message field 'end_position'."""
        return self._end_position

    @end_position.setter
    def end_position(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'end_position' field must be a sub message of type 'JointState'"
        self._end_position = value

    @property
    def tool_offset(self):
        """Message field 'tool_offset'."""
        return self._tool_offset

    @tool_offset.setter
    def tool_offset(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'tool_offset' field must be a sub message of type 'Pose'"
        self._tool_offset = value

    @property
    def approach_dist(self):
        """Message field 'approach_dist'."""
        return self._approach_dist

    @approach_dist.setter
    def approach_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'approach_dist' field must be of type 'float'"
        self._approach_dist = value

    @property
    def retreat_dist(self):
        """Message field 'retreat_dist'."""
        return self._retreat_dist

    @retreat_dist.setter
    def retreat_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'retreat_dist' field must be of type 'float'"
        self._retreat_dist = value

    @property
    def tool_speed(self):
        """Message field 'tool_speed'."""
        return self._tool_speed

    @tool_speed.setter
    def tool_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tool_speed' field must be of type 'float'"
        self._tool_speed = value

    @property
    def target_force(self):
        """Message field 'target_force'."""
        return self._target_force

    @target_force.setter
    def target_force(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_force' field must be of type 'float'"
        self._target_force = value

    @property
    def process_paths(self):
        """Message field 'process_paths'."""
        return self._process_paths

    @process_paths.setter
    def process_paths(self, value):
        if __debug__:
            from crs_msgs.msg import ToolProcessPath
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, ToolProcessPath) for v in value) and
                 True), \
                "The 'process_paths' field must be a set or sequence and each value of type 'ToolProcessPath'"
        self._process_paths = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PlanProcessMotions_Response(type):
    """Metaclass of message 'PlanProcessMotions_Response'."""

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
                'crs_msgs.srv.PlanProcessMotions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_process_motions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_process_motions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_process_motions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_process_motions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_process_motions__response

            from crs_msgs.msg import ProcessMotionPlan
            if ProcessMotionPlan.__class__._TYPE_SUPPORT is None:
                ProcessMotionPlan.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanProcessMotions_Response(metaclass=Metaclass_PlanProcessMotions_Response):
    """Message class 'PlanProcessMotions_Response'."""

    __slots__ = [
        '_plans',
        '_succeeded',
        '_err_msg',
    ]

    _fields_and_field_types = {
        'plans': 'sequence<crs_msgs/ProcessMotionPlan>',
        'succeeded': 'boolean',
        'err_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['crs_msgs', 'msg'], 'ProcessMotionPlan')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.plans = kwargs.get('plans', [])
        self.succeeded = kwargs.get('succeeded', bool())
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
        if self.plans != other.plans:
            return False
        if self.succeeded != other.succeeded:
            return False
        if self.err_msg != other.err_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def plans(self):
        """Message field 'plans'."""
        return self._plans

    @plans.setter
    def plans(self, value):
        if __debug__:
            from crs_msgs.msg import ProcessMotionPlan
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, ProcessMotionPlan) for v in value) and
                 True), \
                "The 'plans' field must be a set or sequence and each value of type 'ProcessMotionPlan'"
        self._plans = value

    @property
    def succeeded(self):
        """Message field 'succeeded'."""
        return self._succeeded

    @succeeded.setter
    def succeeded(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'succeeded' field must be of type 'bool'"
        self._succeeded = value

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


class Metaclass_PlanProcessMotions(type):
    """Metaclass of service 'PlanProcessMotions'."""

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
                'crs_msgs.srv.PlanProcessMotions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__plan_process_motions

            from crs_msgs.srv import _plan_process_motions
            if _plan_process_motions.Metaclass_PlanProcessMotions_Request._TYPE_SUPPORT is None:
                _plan_process_motions.Metaclass_PlanProcessMotions_Request.__import_type_support__()
            if _plan_process_motions.Metaclass_PlanProcessMotions_Response._TYPE_SUPPORT is None:
                _plan_process_motions.Metaclass_PlanProcessMotions_Response.__import_type_support__()


class PlanProcessMotions(metaclass=Metaclass_PlanProcessMotions):
    from crs_msgs.srv._plan_process_motions import PlanProcessMotions_Request as Request
    from crs_msgs.srv._plan_process_motions import PlanProcessMotions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
