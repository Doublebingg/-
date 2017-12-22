#ifndef H_OW_HH
#define H_OW_HH

#include<stdio.h> 
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>

#define INITIAL_SIZE 100 
#define INCR_SIZE 50

struct User_info//用户结构体 
{
	char name[20];//用户名 
	char password[20];//密码 
	char phone[11];//电话号码 
	char address[50];//送货地址 
}; 
typedef struct User_info UserInfo;

/*struct Ad_info//管理员结构体
{
	char name[20];//用户名
	char password[20];//密码 
 } 
typedef struct Ad_info AdInfo;*/

struct Water_info//桶装水结构体 
{
	char brand[50];//商品名称 
	float price;//价格 
};
typedef struct Water_info WtInfo;

struct Order_info//订单结构体 
{
	char number;//订单编号 
	char date[20];//订单日期 
	char brand[50];//商品名称 
	int amount;//订单数量 
	char name[20];//下单用户
	char phone[11];//用户电话 
	char address[50];//送货地址 
};
typedef struct Order_info OrInfo;

extern int numUsers;//用户信息的数量 
extern int numWaters;//商品信息的数量 
extern int numOrders;//订单信息的数量 

extern UserInfo* records;//记录用户信息的数组
extern WtInfo* w_records;//记录商品信息的数组 
extern OrInfo* o_records;//记录订单信息的数组 

extern UserInfo temp;//记录增加的一条用户信息 
extern WtInfo w_temp;//记录增加的一条商品信息 
extern OrInfo o_temp;//记录增加的一条订单信息 

extern char savedTag;//信息是否已经保存的标志，1为未保存，0为以保存 
extern int arraySize;////数组大小
extern char*fname;//文件名字的指针 

extern int u_i;//用户信息的序号
extern int w_i;//商品信息的序号 
extern int o_i;//订单信息的序号 


void rg_menu();//登录菜单
int s_rg_menu();//登录菜单的选择 

void user_login();//用户登录 
void ad_login();//管理员登陆
 
void ad_register();//管理员注册 
void user_register();//用户注册 
void add_water();//添加商品函数 
void add_order();//添加订单函数
int a_saveRecords(int);//单个信息追加储存函数 1为用户，2为商品，3为订单
void addRecord();//在当前表增加新的信息 
 
int saveRecords(int);//文件批量储存函数 1为用户，2为商品，3为订单 
int loadRecords(int);//文件读取函数 1为用户，2为商品，3为订单 
char* select_file(int);//选择文件进行操作 1为用户，2为商品，3为订单 

void display(int);//显示信息函数 1为用户，2为商品，3为订单
 
void showTable(int);//输出表头信息 1为用户，2为商品，3为订单  

void removeRecord(int);//删除指定信息函数 1为用户，2为商品，3为订单 

int findRecord(char*,int,int);//查找指定信息函数，最后一个int 1为用户，2为商品，3为订单  
void queryInfo();//查询指定信息函数 

void copyURecord(UserInfo*,UserInfo*);//复制用户信息函数 
void copyWRecord(WtInfo*,WtInfo*);//复制商品信息函数 
void copyORecord(OrInfo*,OrInfo*);//复制订单信息函数 
 
void modify_user();//修改用户信息函数 
int select_m_user();//修改用户信息菜单的选择 

void quit();//退出程序

#endif  //H_OW_HH

