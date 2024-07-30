# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flatfish_ros_efuse_serial:msg/StatusChannel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StatusChannel(type):
    """Metaclass of message 'StatusChannel'."""

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
            module = import_type_support('flatfish_ros_efuse_serial')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'flatfish_ros_efuse_serial.msg.StatusChannel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status_channel
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status_channel
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status_channel
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status_channel
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status_channel

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StatusChannel(metaclass=Metaclass_StatusChannel):
    """Message class 'StatusChannel'."""

    __slots__ = [
        '_name',
        '_default_on',
        '_channel_on',
        '_max_current',
        '_current',
        '_check_voltage',
        '_error_led',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'default_on': 'boolean',
        'channel_on': 'boolean',
        'max_current': 'double',
        'current': 'double',
        'check_voltage': 'boolean',
        'error_led': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.default_on = kwargs.get('default_on', bool())
        self.channel_on = kwargs.get('channel_on', bool())
        self.max_current = kwargs.get('max_current', float())
        self.current = kwargs.get('current', float())
        self.check_voltage = kwargs.get('check_voltage', bool())
        self.error_led = kwargs.get('error_led', bool())

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
        if self.name != other.name:
            return False
        if self.default_on != other.default_on:
            return False
        if self.channel_on != other.channel_on:
            return False
        if self.max_current != other.max_current:
            return False
        if self.current != other.current:
            return False
        if self.check_voltage != other.check_voltage:
            return False
        if self.error_led != other.error_led:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def default_on(self):
        """Message field 'default_on'."""
        return self._default_on

    @default_on.setter
    def default_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'default_on' field must be of type 'bool'"
        self._default_on = value

    @builtins.property
    def channel_on(self):
        """Message field 'channel_on'."""
        return self._channel_on

    @channel_on.setter
    def channel_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'channel_on' field must be of type 'bool'"
        self._channel_on = value

    @builtins.property
    def max_current(self):
        """Message field 'max_current'."""
        return self._max_current

    @max_current.setter
    def max_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_current = value

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current = value

    @builtins.property
    def check_voltage(self):
        """Message field 'check_voltage'."""
        return self._check_voltage

    @check_voltage.setter
    def check_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_voltage' field must be of type 'bool'"
        self._check_voltage = value

    @builtins.property
    def error_led(self):
        """Message field 'error_led'."""
        return self._error_led

    @error_led.setter
    def error_led(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'error_led' field must be of type 'bool'"
        self._error_led = value
