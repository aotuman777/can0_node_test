#include "can0_t/can0_ros_class.h"
#include "can0_t/dbc_trans.h"
//#include msg头文件
void Can0MsgSend_Gear_CommandMsg(const std_msgs::Float64::ConstPtr& gear_msg,CanVehicleClass& can_name, camera_dbcModelClass& rtObj)
{                            //举个例子，第1个参数应该是Esr_Tx_msg 来自同步node                                                                                                  

        rtObj.rtU.gear_command_param.Gear_Enable_control=gear_msg->data;//01
        rtObj.rtU.gear_command_param.Gear_Shift_Req=3;
        rtObj.rtU.gear_command_param.IPC_Mode_Shift=0;
        rtObj.rtU.gear_command_param.IPC_Stop_Eme=0;
        
        rtObj.step();//要重新设计dbc文件档位解析的那个。
        can_frame temp;
        temp.can_id=rtObj.rtY.Gear_command_msg.ID;
        temp.can_dlc=rtObj.rtY.Gear_command_msg.Length;
        for(int i=0;i<rtObj.rtY.Gear_command_msg.Length;++i)
        {
            temp.data[i]=rtObj.rtY.Gear_command_msg.Data[i];
        }
        can_name.send_msg_vec.push_back(temp);
        can_name.Can_Send_Msg(can_name.send_msg_vec);

}

Can0RosClass::Can0RosClass(ros::NodeHandle& nodehandle, char* name):can0_(name),nh_(nodehandle)
{
    ROS_INFO("in class constructor of Can0RosClass");
    InitSubscribers(this->can0_,this->rtObj);
    InitPublishers();
}

void Can0RosClass::InitSubscribers(CanVehicleClass& can_name,camera_dbcModelClass& rtObj)
{
    ROS_INFO("Initializing Subscribers");
    Gear_subscriber_=nh_.subscribe<std_msgs::Float64>("gear_topic",1,boost::bind(&Can0MsgSend_Gear_CommandMsg,_1,can0_,rtObj));
}

void Can0RosClass::InitPublishers()
{
    ROS_INFO("Initializing Publishers");
    Soc_publisher_=nh_.advertise<std_msgs::Float64>("soc_topic",1,true);
}

void Can0MsgReceive(Can0RosClass& Can0RosClass,ros::Publisher& pub,camera_dbcModelClass& rtObj)
{
    ros::Rate r(20);
    while(ros::ok())
    {
        Can0RosClass.can0_.CAN_Receive_Msg(Can0RosClass.can0_.receive_msg,Can0RosClass.can0_.receive_id_vec);//id是底盘信号id：0c2 0c3
        
        rtObj.rtU.test_Bms_msg.ID = Can0RosClass.can0_.receive_msg.can_id;
        rtObj.rtU.test_Bms_msg.Length = Can0RosClass.can0_.receive_msg.can_dlc;
        
        // gettimeofday(&t,NULL);
        // cout << t.tv_sec * 1000 + t.tv_usec / 1000 << " ";
        // cout << Can0RosClass.can0_.receive_msg.can_id << " ";
        for(int i = 0; i < Can0RosClass.can0_.receive_msg.can_dlc; ++i)
        {
            rtObj.rtU.test_Bms_msg.Data[i] = Can0RosClass.can0_.receive_msg.data[i];
            // cout << (int)Can0RosClass.can0_.receive_msg.data[i] << " ";
        }
        // cout << endl;
        rtObj.step();
        std_msgs::Float64 soc_msg;
        soc_msg.data=rtObj.rtY.BMS_feedback[2];
        pub.publish(soc_msg);
        r.sleep();
        // cout << rtObj.rtY.BMS_feedback_l.Current << endl;
    }
        ros::spinOnce();
}

//下面这个函数应该是作为subscriber的回调函数，记住在定义sub时要使用boost的bind进行多参数传递



// void Can1MsgSend_Brk_Spd(const sensor_msgs::BatteryState& b, Can0RosClass& Can0RosClass, camera_dbcModelClass& rtObj)
// {                            //举个例子，第1个参数应该是自定义的msg，包括brake(可能不需要处理) speed,yaw_rate
//                                 //而且他们来自不同传感器应该同步之后,创建的一个新的msg包括这几个数据

// }