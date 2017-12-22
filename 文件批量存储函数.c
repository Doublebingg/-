#include"OW.h"
/*
文件批量储存：1为用户，2为商品，3为订单 
*/ 
int saveRecords(int choice)
{
	FILE *fp;
//	char fname[30];
	if(choice==1) 
	{
		fname=select_file(choice);
		if(numUsers==0)
		{
			printf("没有信息可存！");
			return -1; 
		}
		if((fp=fopen(fname,"w"))==NULL)
		{
			printf("文件储存失败！\n");
			return -1;
		}
		printf("\n存文件中。。。\n");
		fwrite(records,sizeof(UserInfo)*numUsers,1,fp);
		fclose(fp);
		printf("%d条文件储存成功，请继续操作。\n",numUsers);
		savedTag=0;
		return 0;
	}
		if(choice==2) 
	{
		fname=select_file(choice);
		if(numWaters==0)
		{
			printf("没有信息可存！");
			return -1; 
		}
		if((fp=fopen(fname,"w"))==NULL)
		{
			printf("文件储存失败！\n");
			return -1;
		}
		printf("\n存文件中。。。\n");
		fwrite(w_records,sizeof(WtInfo)*numWaters,1,fp);
		fclose(fp);
		printf("%d条文件储存成功，请继续操作。\n",numWaters);
		savedTag=0;
		return 0;
	}
		if(choice==3) 
	{
		fname=select_file(choice);
		if(numOrders==0)
		{
			printf("没有信息可存！");
			return -1; 
		}
		if((fp=fopen(fname,"w"))==NULL)
		{
			printf("文件储存失败！\n");
			return -1;
		}
		printf("\n存文件中。。。\n");
		fwrite(o_records,sizeof(OrInfo)*numOrders,1,fp);
		fclose(fp);
		printf("%d条文件储存成功，请继续操作。\n",numOrders);
		savedTag=0;
		return 0;
	}
}
