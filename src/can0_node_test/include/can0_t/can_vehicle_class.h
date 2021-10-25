#ifndef CAN_VEHICLE_CLASS_H
#define CAN_VEHICLE_CLASS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <linux/can.h>
#include <linux/can/raw.h>
#include <vector>

using namespace std;

class CanVehicleClass
{
private:


public:
    char* can_name;//绑定的can口
    int s;//socketcan套接字
    CanVehicleClass(char* name);

    int Can_Init();
    unsigned char CAN_Receive_Msg(can_frame& receive_msg,vector<unsigned int> &receive_id);
    int Can_Send_Msg(vector<can_frame>& send_msg_vec);

    vector<can_frame> send_msg_vec;//打算发送的报文
    vector<unsigned int> receive_id_vec;//接受过滤的报文id
    can_frame receive_msg;//接收到的报文
};


#endif