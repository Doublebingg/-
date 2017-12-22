#include"OW.h" 
void queryInfo(int choice)//查询指定信息函数
{
	char target[50];
	int i,j;
	if(numUsers==0)	
	{
		printf("没有记录可供查找");
		return ;
	}
	if(choice==1)
	{
		printf("请输入欲查询的用户名：");
		scanf("%s",target);
		i=findRecord(target,0,0);
		if(i!=-1)
		{
			showTable(choice);
			printf("%s\t%s\t%s",records[i].name,records[i].phone,records[i].address);
		}
	}
	getchar();
	getchar();
}
