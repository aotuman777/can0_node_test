#include <ros/ros.h>
#include <std_msgs/Float64.h>

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "gear_pub_node");
    ros::NodeHandle nh;
    ros::Publisher Gear_Publisher = nh.advertise<std_msgs::Float64>("gear_topic",1,true);

    std_msgs::Float64 msg;
    msg.data = 1;
    ros::Rate r(20);
    while(ros::ok())
    {
        Gear_Publisher.publish(msg);
        ROS_INFO("Gear第一位为: %f", msg.data);
        r.sleep();
        ros::spinOnce();
    }
    return 0;
}