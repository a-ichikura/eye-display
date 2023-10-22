#ifndef _ROS_naoqi_bridge_msgs_ExternalCollisionProtectionNames_h
#define _ROS_naoqi_bridge_msgs_ExternalCollisionProtectionNames_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace naoqi_bridge_msgs
{

  class ExternalCollisionProtectionNames : public ros::Msg
  {
    public:
      typedef uint8_t _data_type;
      _data_type data;
      enum { ALL = 0 };
      enum { MOVE = 1 };
      enum { ARMS = 2 };
      enum { LARM = 3 };
      enum { RARM = 4 };

    ExternalCollisionProtectionNames():
      data(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->data >> (8 * 0)) & 0xFF;
      offset += sizeof(this->data);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->data =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->data);
     return offset;
    }

    virtual const char * getType() override { return "naoqi_bridge_msgs/ExternalCollisionProtectionNames"; };
    virtual const char * getMD5() override { return "20d28f26709d802a81a76ccf17a326ae"; };

  };

}
#endif
