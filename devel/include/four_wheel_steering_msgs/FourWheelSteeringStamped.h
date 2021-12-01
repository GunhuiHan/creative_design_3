// Generated by gencpp from file four_wheel_steering_msgs/FourWheelSteeringStamped.msg
// DO NOT EDIT!


#ifndef FOUR_WHEEL_STEERING_MSGS_MESSAGE_FOURWHEELSTEERINGSTAMPED_H
#define FOUR_WHEEL_STEERING_MSGS_MESSAGE_FOURWHEELSTEERINGSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <four_wheel_steering_msgs/FourWheelSteering.h>

namespace four_wheel_steering_msgs
{
template <class ContainerAllocator>
struct FourWheelSteeringStamped_
{
  typedef FourWheelSteeringStamped_<ContainerAllocator> Type;

  FourWheelSteeringStamped_()
    : header()
    , data()  {
    }
  FourWheelSteeringStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::four_wheel_steering_msgs::FourWheelSteering_<ContainerAllocator>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> const> ConstPtr;

}; // struct FourWheelSteeringStamped_

typedef ::four_wheel_steering_msgs::FourWheelSteeringStamped_<std::allocator<void> > FourWheelSteeringStamped;

typedef boost::shared_ptr< ::four_wheel_steering_msgs::FourWheelSteeringStamped > FourWheelSteeringStampedPtr;
typedef boost::shared_ptr< ::four_wheel_steering_msgs::FourWheelSteeringStamped const> FourWheelSteeringStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator1> & lhs, const ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator1> & lhs, const ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace four_wheel_steering_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9226582df815bc6df9e3206bc05923af";
  }

  static const char* value(const ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9226582df815bc6dULL;
  static const uint64_t static_value2 = 0xf9e3206bc05923afULL;
};

template<class ContainerAllocator>
struct DataType< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "four_wheel_steering_msgs/FourWheelSteeringStamped";
  }

  static const char* value(const ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Time stamped drive command or odometry for robots with FourWheelSteering.\n"
"#  $Id$\n"
"\n"
"Header          header\n"
"FourWheelSteering  data\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: four_wheel_steering_msgs/FourWheelSteering\n"
"## Driving command or odometry msg for a FourWheelSteering vehicle.\n"
"#  $Id$\n"
"\n"
"# Assumes FourWheelSteering with front-wheel and rear-wheel steering. The left\n"
"# and right front wheels are generally at different angles. To simplify,\n"
"# the commanded angle corresponds to the yaw of a virtual wheel located at the\n"
"# center of the front or rear axle, like on a tricycle.  Positive yaw is to\n"
"# the left. (This is *not* the angle of the steering wheel inside the\n"
"# passenger compartment.)\n"
"#\n"
"# Zero steering angle velocity means change the steering angle as\n"
"# quickly as possible. Positive velocity indicates an absolute\n"
"# rate of change either left or right.\n"
"#\n"
"float32 front_steering_angle           # position of the virtual angle (radians)\n"
"float32 rear_steering_angle            # position of the virtual angle (radians)\n"
"float32 front_steering_angle_velocity  # rate of change (radians/s)\n"
"float32 rear_steering_angle_velocity   # rate of change (radians/s)\n"
"\n"
"# Speed, acceleration and jerk (the 1st, 2nd and 3rd\n"
"# derivatives of position). All are measured at the vehicle's\n"
"# center of the rear axle.\n"
"#\n"
"# Speed is the scalar magnitude of the velocity vector.\n"
"# The speed value is the norm of the velocity component in x (longitudinal) \n"
"# and y (lateral) direction\n"
"# Direction is forward unless the sign is negative, indicating reverse.\n"
"# If the steering angle are equal to +/- pi/2, then the direction is left\n"
"# unless the sign is negative, indicating right.\n"
"#\n"
"# Zero acceleration means change speed as quickly as\n"
"# possible. Positive acceleration indicates an absolute\n"
"# magnitude; that includes deceleration.\n"
"#\n"
"# Zero jerk means change acceleration as quickly as possible. Positive\n"
"# jerk indicates an absolute rate of acceleration change in\n"
"# either direction (increasing or decreasing).\n"
"#\n"
"float32 speed                   # forward speed (m/s)\n"
"float32 acceleration            # acceleration (m/s^2)\n"
"float32 jerk                    # jerk (m/s^3)\n"
;
  }

  static const char* value(const ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FourWheelSteeringStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::four_wheel_steering_msgs::FourWheelSteeringStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data: ";
    s << std::endl;
    Printer< ::four_wheel_steering_msgs::FourWheelSteering_<ContainerAllocator> >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FOUR_WHEEL_STEERING_MSGS_MESSAGE_FOURWHEELSTEERINGSTAMPED_H
