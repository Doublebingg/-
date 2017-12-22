#include"OW.h" 
void quit()
{
	int j;
	char str[5];
	if(savedTag==1)
	{
		printf("是否保存已修改的记录？（Y/N"); 
		gets(str);
		if(str[0]!='n'&&str[0]!='N')
			{
				for(j=1;j<=3;j++)
				{
					saveRecords(j);//文件批量储存函数 1为用户，2为商品，3为订单 
				}
			}
	}
	free(records);
	exit(0);
}
