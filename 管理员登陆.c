#include"OW.h"

void ad_login()
{
	int choice;
	int i;
	char name[20];
	char password[30];
	loadRecords(3);
	for( ; ; )
	{
		system("cls");//清屏
		printf("\n请输入您的用户名：");
		scanf("%s",name);
		i=findRecord(name,0,0);
		if(i==-1)
		{
			printf("\n该用户名不存在，请重新输入\n按回车后继续：");
			getchar();
			getchar();
		}
		else break;
	}
	for( ; ; )
	{
		printf("\n请输入您的密码：");
		scanf("%s",password);
		if(strcmp(password,records[i].password)!=0)
		{	
			printf("\n密码不正确，请重新输入：\n按回车后继续");
			getchar();
			getchar();
		}
		else break;
	}
	printf("\n登陆成功!\n按回车后继续");
	getchar();
	getchar();
	//登陆之后的东西。 
}
