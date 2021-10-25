#ifndef CAN0_ROS_CLASS_H
#define CAN0_ROS_CLASS_H

#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include "can_vehicle_class.h"
#include "dbc_trans.h"

class Can0RosClass
{
private:
    ros::NodeHandle nh_;
    ros::Subscriber Gear_subscriber_;

    void InitSubscribers(CanVehicleClass& can_name,camera_dbcModelClass& rtObj);
    void InitPublishers();

public:
    static camera_dbcModelClass rtObj;
    Can0RosClass(ros::NodeHandle& nodehandle,char* name);
    CanVehicleClass can0_;
    ros::Publisher Soc_publisher_;
};

#endif