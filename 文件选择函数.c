#include"OW.h" 
char username[]="user.txt";
char watername[]="water.txt";
char ordername[]="order.txt";
char adname[]="ad.txt";
char* select_file(int choice)//文件选择函数，返回文件名1为用户文件，2为商品文件，3为订单文件，4为管理员文件 
{
	
	switch(choice)
	{
		case 1:return username;break;
		case 2:return watername;break;
		case 3:return ordername;break;
		case 4:return adname;break;
	}
}
