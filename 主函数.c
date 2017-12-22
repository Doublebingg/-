#include"OW.h" 
//初始化
int numUsers=0;//用户信息数量 
int numWaters;//商品信息数量 
int numOrders;//订单信息数量 
UserInfo *records=NULL;//记录用户信息的数组 
WtInfo *w_records=NULL;//记录商品信息的数组 
OrInfo *o_records=NULL;//记录订单信息的数组 
char savedTag=0;//信息是否已经保存的标志，1为未保存，0为以保存 
int arraySize;//数组大小

//主函数
int main() 
{
	//初始化数组
	records=(UserInfo*)malloc(sizeof(UserInfo)*INITIAL_SIZE);
	if(records==NULL)
	{
		printf("memory fail!");
		exit(-1);
	}
	w_records=(WtInfo*)malloc(sizeof(WtInfo)*INITIAL_SIZE);
	if(w_records==NULL)
	{
		printf("memory fail!");
		exit(-1);
	}
	o_records=(OrInfo*)malloc(sizeof(OrInfo)*INITIAL_SIZE);
	if(o_records==NULL)
	{
		printf("memory fail!");
		exit(-1);
	}
	arraySize=INITIAL_SIZE;
	rg_menu();
}
