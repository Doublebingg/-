#include"OW.h" 

void ad_register()//管理员注册 
{
	char i;
	//for( ; ; )
	{
		printf("请输入需要创建的用户名：\n(由不到20个英文、数字及下划线组成：)\n");
		scanf("%s",temp.name);
	/*	for(i=0;;i++)
		{
			printf("您输入的用户名含非法字符或超出界限，请重新输入:");
		}
	*/	
	}
	//for( ; ; )
	{
		printf("请输入账户密码：\n(由不到20个英文、数字及下划线组成：)\n"); 
		scanf("%s",temp.password);
	//	printf("您输入的账户密码含非法字符或超出界限，请重新输入:");
	}
	//for( ; ; )
	a_saveRecords(4);
	printf("注册成功，按回车返回上一层进行登录。");
	getchar();
	getchar();
}
