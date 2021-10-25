#include <ros/ros.h>
#include <std_msgs/Float64.h>


void soc_callback(const std_msgs::Float64::ConstPtr& msg)
{
    ROS_INFO("订阅到soc值为: %f",msg->data);
}


int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "soc_sub_node");
    ros::NodeHandle nh;

    ros::Subscriber soc_subscriber = nh.subscribe("soc_topic",1,soc_callback);
    ros::spin();
    return 0;
}