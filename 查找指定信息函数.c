#include"OW.h" 
/*
参数：target:欲查找信息的某一项与target相同
	  targetType：表明从哪一项查找，默认0,可添加选择方式. 
	  choice：选择查找哪种信息 1用户，2商品，3订单 
返回：找到的信息的序号，若找不到则返回-1. 
*/
int findRecord(char* target,int targetType,int choice)//查找指定信息函数 
{	
	int i;
	if(choice==1)
	{
		for(i=0;i<numUsers;i++)
		{
			if((targetType==0&&strcmp(target,records[i].name)==0))//||(targetType==1&&strcmp(target,records[i].phone))
			return i;
		}
		return -1;
	}
	if(choice==2)
	{
		for(i=0;i<numWaters;i++)
		{
			if((targetType==0&&strcmp(target,w_records[i].brand)==0))//||(targetType==1&&strcmp(target,records[i].phone))
			return i;
		}
		return -1;
	}
	if(choice==3)
	{
		for(i=0;i<numOrders;i++)
		{
			if((targetType==0&&strcmp(target,o_records[i].number)==0))//||(targetType==1&&strcmp(target,records[i].phone))
			return i;
		}
		return -1;
	}
}
