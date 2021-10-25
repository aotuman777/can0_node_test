# can0_node_test
**can_vehicle_class**
实现cansocket发送报文和接收报文
**dbc_trans.cpp和dbc_trans_data.cpp**
这两个文件不用管，这是simulink自动生成代码的文件，用来进行can解析和打包
**gear_pub.cpp,soc_sub.cpp,can0_test.cpp**
分别是三个ros结点，gear发布消息给can_test，进入回调函数，并发送can报文（这就是问题，send不了）。can0_test接收信号并解析，发送soc数值给soc_sub（目前这一功能可以实现）
