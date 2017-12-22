#include"OW.h" 

void add_water()//添加商品品牌 
{
	printf("请输入商品名称：");
	scanf("%s",w_temp.brand );
	printf("\n请输入商品价格：");
	scanf("%f",&w_temp.price );
	a_saveRecords(2);
	printf("添加成功！\n");
	getchar();
	getchar();
}
