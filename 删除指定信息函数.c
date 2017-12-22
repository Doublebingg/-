#include"OW.h"

void removeRecord(int choice)//删除指定信息函数 1为用户，2为商品，3为订单 
{
	int i,j;
	char str[5];
	char target[50];
	if(choice==1)
	{
		printf("\n请输入用户名：");
		gets(target);
	/*	u_i*/i=findRecord(target,0/*默认查找方式为用户名*/,choice);
	//	i=u_i;
		if(i==-1) printf("没有这个用户！\n");
		showTable(choice);
		printf("%s\t%s\t%s",records[i].name,records[i].phone,records[i].address);
		printf("确定要删除此用户的信息么？(Y/N)");
		gets(str);
		if(str[0]=='y'||str[0]=='Y')
		{
			numUsers--;
			//将后面记录往前移动
			for(j=u_i;j<numUsers;j++) 
			{
				copyURecord(&records[j+1],&records[j]);
			}
		}
	}
	if(choice==2)
	{
		printf("\n请输入商品名称：");
		gets(target);
		/*w_*/i=findRecord(target,0/*默认查找方式为商品名*/,choice);
	//	i=w_i;
		if(i==-1) printf("没有这个商品！\n");
		showTable(choice);
		printf("%s\t%d",w_records[i].brand,w_records[i].price);
		printf("确定要删除此商品的信息么？(Y/N)");
		gets(str);
		if(str[0]=='y'||str[0]=='Y')
		{
			numWaters--;
			//将后面记录往前移动
			for(j=i;j<numWaters;j++) 
			{
				copyWRecord(&w_records[j+1],&w_records[j]);
			}
		}
	}
	if(choice==3)
	{
		printf("\n请输入订单编号：");
		gets(target);
		/*o_i*/i=findRecord(target,0/*默认查找方式为订单编号*/,choice);
	//	i=o_i;
		if(i==-1) printf("没有这个订单！\n");
		showTable(choice);
		printf("%s\t%s\t%s\t%d\t%s",o_records[i].number,o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].date);
		printf("确定要删除此订单的信息么？(Y/N)");
		gets(str);
		if(str[0]=='y'||str[0]=='Y')
		{
			numOrders--;
			//将后面记录往前移动
			for(j=i;j<numOrders;j++) 
			{
				copyORecord(&o_records[j+1],&o_records[j]);
			}
		}
	}
	savedTag=1;
 } 
