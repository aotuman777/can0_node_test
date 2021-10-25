#include <errno.h>
#include "can0_t/can_vehicle_class.h"


CanVehicleClass::CanVehicleClass(char* name)
{
    this->can_name=name;
    printf("%s","In class constructor of CanVehicleClass.");
    // Can_Init();
    // CAN_Receive_Msg(receive_msg,receive_id);
    // Can_Send_Msg(send_msg,send_len,send_id);
}

int CanVehicleClass::Can_Init()
{
    int ret;
    struct sockaddr_can addr;
    struct ifreq ifr;
    // system("sudo ip link set can0 type vcan bitrate 100000");
    // system("sudo ifconfig can0 up");
    // printf("this is a can send demo\r\n");
//1.Create socket
    this->s = socket(PF_CAN, SOCK_RAW, CAN_RAW);
    if (this->s < 0)
    {
        perror("socket PF_CAN failed");
        return -1;
    }
//2.Specify can0 device
    strcpy(ifr.ifr_name, this->can_name);
    ret = ioctl(this->s, SIOCGIFINDEX, &ifr);
    if (ret < 0) 
    {
        perror("ioctl failed");
        return -1;
    }
//3.Bind the socket to can0
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;
    ret = bind(this->s, (struct sockaddr *)&addr, sizeof(addr));
    if (ret < 0) 
    {
        perror("bind failed");
        return -1;
    }
//4.Disable filtering rules, do not receive packets, only send
    setsockopt(this->s, SOL_CAN_RAW, CAN_RAW_FILTER, NULL, 0);  
//5.return socket
    return this->s;
}

unsigned char CanVehicleClass::CAN_Receive_Msg(can_frame &receive_msg,vector<unsigned int> &receive_id_vec)
{
    //Define receive rules
	struct can_filter rfilter[receive_id_vec.size()];
    for(int i=0;i<receive_id_vec.size();++i)
    {
        rfilter[i].can_id = receive_id_vec[i];
        rfilter[i].can_mask = CAN_SFF_MASK;
    }
	setsockopt(this->s, SOL_CAN_RAW, CAN_RAW_FILTER, &rfilter, sizeof(rfilter));

	int nbytes=0; 
	int i;    

	while(1)
    {
        nbytes = read(this->s, &receive_msg, sizeof(receive_msg));
        if(nbytes > 0)
        {
		    return receive_msg.can_id;
	    }
	    if(nbytes == -1)
        {
            printf("%s","receive error msg");
	        close(this->s);
	        return -1;
	    }     
    }	
}

int CanVehicleClass::Can_Send_Msg(vector<can_frame>& send_msg_vec)
{
    int nbytes;
    //  struct can_frame frame;
    //  frame.can_id  = send_id;
    //  frame.can_dlc = send_len;
    //  for(int i=0;i<send_len;i++)
    //  frame.data[i]=send_msg[i];	
//Send message

    for(int i = 0; i < send_msg_vec.size(); ++i)
    {
        nbytes = write(this->s, &send_msg_vec[i], sizeof(send_msg_vec[i])); 
        if(nbytes != sizeof(send_msg_vec[i]))
        {
        printf("%s,%s","send error frame ",strerror(errno));
        close(this->s);
        return -1;
        }	
    }
     return nbytes;	
}

