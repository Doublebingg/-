#include"OW.h"

void rg_menu()//登录菜单 
{
	for( ; ; ){
		switch(s_rg_menu())
		{
			case 1:user_login();break;//用户登录 
			case 2:ad_login();break;//管理员登陆 
			case 3:user_register();break;//新用户注册 
	//		case 4:ad_register();break;//管理员注册 
			case 0:quit();
			default:printf("\n输入错误，重选0-3:\n输入回车后继续");getchar();getchar();
		}
	}
} 

int s_rg_menu()//登录菜单的选择 
{	int choice=-1;
	while(choice!=0)
	{
		system("cls");//清屏
		printf("主菜单\n");
		printf("1.用户登录\n");
		printf("2.管理员登陆\n");
		printf("3.新用户注册\n");
		printf("0.退出程序\n");
		printf("输入数字进行选择:");
		scanf("%d",&choice);
		return choice;
	}
}
