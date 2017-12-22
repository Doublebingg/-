#include"OW.h"

void modify_user()//修改用户信息函数 
{
	int i;
	int choice=-1;
	if(numUsers==0)	
	{
		printf("没有可供修改的记录") ;
		return ;
	} 
	for( ; ; )
	{
		i=u_i;
		switch(select_m_user())
		{
			case 1:{
				printf("原用户名为：%s",records[i].name);
				printf("请输入新用户名：");
				scanf("%s",records[i].name);
				printf("修改成功！\n输入回车后返回上一层") ;
				getchar();
				getchar();
				break;
			}break;
			case 2:{
				printf("原密码为：%s",records[i].password );
				printf("请输入新密码：");
				scanf("%s",records[i].password );
				printf("修改成功！\n输入回车后返回上一层") ;
				getchar();
				getchar();
				break;
			}break;
			case 3:{
				printf("原号码为：%s",records[i].phone );
				printf("请输入新号码：");
				scanf("%s",records[i].phone );
				printf("修改成功！\n输入回车后返回上一层") ;
				getchar();
				getchar();
				break;
			}break;
			case 4:{
				printf("原地址为：%s",records[i].address );
				printf("请输入新地址：");
				scanf("%s",records[i].address );
				printf("修改成功！\n输入回车后返回上一层") ;
				getchar();
				getchar();
				break;
			}break;
			case 0:quit() ;
			default:printf("\n输入错误，重选0-4:\n输入回车后继续");getchar();getchar();
		}
	}
	
}

int select_m_user()//修改用户信息菜单的选择 
{
	int choice=-1;
	while(choice!=0){
		system("cls");//清屏
		printf("\n修改菜单");
		printf("\n1.修改用户名");
		printf("\n2.修改密码");
		printf("\n3.修改电话号码");
		printf("\n3.修改收货地址");
		printf("\n4.返回上一层");
		printf("\n0.退出程序\n");
		printf("输入数字进行选择:");
		scanf("%d",&choice);
		return choice;
}
}
