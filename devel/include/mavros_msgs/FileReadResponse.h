// Generated by gencpp from file mavros_msgs/FileReadResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_FILEREADRESPONSE_H
#define MAVROS_MSGS_MESSAGE_FILEREADRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct FileReadResponse_
{
  typedef FileReadResponse_<ContainerAllocator> Type;

  FileReadResponse_()
    : data()
    , success(false)
    , r_errno(0)  {
    }
  FileReadResponse_(const ContainerAllocator& _alloc)
    : data(_alloc)
    , success(false)
    , r_errno(0)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _data_type;
  _data_type data;

   typedef uint8_t _success_type;
  _success_type success;

   typedef int32_t _r_errno_type;
  _r_errno_type r_errno;





  typedef boost::shared_ptr< ::mavros_msgs::FileReadResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::FileReadResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FileReadResponse_

typedef ::mavros_msgs::FileReadResponse_<std::allocator<void> > FileReadResponse;

typedef boost::shared_ptr< ::mavros_msgs::FileReadResponse > FileReadResponsePtr;
typedef boost::shared_ptr< ::mavros_msgs::FileReadResponse const> FileReadResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::FileReadResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::FileReadResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/lunar/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/lunar/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/lunar/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/lucas/catkin_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/lunar/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/lunar/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileReadResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileReadResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileReadResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileReadResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileReadResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileReadResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::FileReadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "729aa1e22d45390356095d59a2993cb4";
  }

  static const char* value(const ::mavros_msgs::FileReadResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x729aa1e22d453903ULL;
  static const uint64_t static_value2 = 0x56095d59a2993cb4ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::FileReadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/FileReadResponse";
  }

  static const char* value(const ::mavros_msgs::FileReadResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::FileReadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8[] data\n\
bool success\n\
int32 r_errno\n\
\n\
";
  }

  static const char* value(const ::mavros_msgs::FileReadResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::FileReadResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
      stream.next(m.success);
      stream.next(m.r_errno);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FileReadResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::FileReadResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::FileReadResponse_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "r_errno: ";
    Printer<int32_t>::stream(s, indent + "  ", v.r_errno);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_FILEREADRESPONSE_H