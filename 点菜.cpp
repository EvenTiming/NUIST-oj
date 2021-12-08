#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include<string.h>
typedef struct Order
{
	int num;
	char name[20];
	int cost;
	struct Order* next;
}order;

typedef struct Table
{
	int num;
	int is_empty;//0表示空闲，1表示有顾客
	order* order_head;
	int price;
	struct Table* next;
}table;

typedef struct Menu
{
	int num;
	char name[20];
	int cost;
	struct Menu* next;
}menu;

//餐桌链表生成
table table_head ;
void table_line()
{
	FILE *fp1;
	if((fp1=fopen("F:\\canyin\\table\\table.txt","r+"))==NULL){
		printf("cannot open this file");
		exit(0);
	}
	table *p =&table_head;
	while(!feof(fp1)){
			fscanf(fp1,"%d %d %d ",&(*p).num,&(*p).is_empty,&(*p).price);
					table *q=(table *)malloc(sizeof(table));
			(*p).next=q;
			p=q;
	}
	p=NULL;
	fclose(fp1);
}

//菜单链表生成
menu menu_head;
void menu_line_section()//菜单链表节生成
{
	menu* p =&menu_head;
	FILE *fp;
	if((fp=fopen("F:\\canyin\\menu\\menu.txt","r+"))==NULL){
		printf("cannot open this file");
		exit(0);
	}
	while(!feof(fp)){
		fscanf(fp,"%d %s %d ",&(*p).num,(*p).name,&(*p).cost);
		menu* q = (menu*)malloc(sizeof(menu));
	    (*p).next=q;
	    p=q;
	}
		p=NULL;
	fclose(fp);
}
void resave_table(table *head){
	FILE *fp;
	if((fp=fopen("F:\\canyin\\table\\table.txt","wb+"))==NULL){
		printf("cannot open this file");
		exit(0);
	}
	table *p=head;
	while(p->next!=NULL){
		fprintf(fp,"%d %d %d ",(*p).num,(*p).is_empty,(*p).price);
		p=p->next;
	}
	fclose(fp);
}

void show(){
	menu *p=&menu_head;
	while(p->next=NULL){
		printf("菜号:%d 菜名:%s 价格:%d\n",p->num,p->name,p->cost);
		p=p->next;
	}
}
void MENU()
{
	printf("*************************************************\n");
	printf("餐厅管理系统\n");
	printf("*************************************************\n");
	printf("1.点菜\n");
	printf("2.客户结账\n");
	printf("3.账目管理\n");
	printf("4.餐馆统计\n");
	printf("5.退出\n");
}
int ORDER(order *ordert){
	show();
	int i=1;
	int price=0;
	printf("请输入你要选的菜号:(输入0结束)");
	int t;
	order *p=ordert;
	order *q;
	menu *h=&menu_head;
	while(1){
		scanf("%d",&t);
		if(t==0) break;
		else{
			while(h->next!=NULL){
				if(h->num==t){
					p->num=t;
					strcmp(p->name,h->name);
					p->cost=h->cost;
					price+=p->cost;
					q=(order *)malloc(sizeof(order));
					p->next=q;
					p=q;
					break;
				}
				h=h->next;
			}
		}
		h=&menu_head;

	}
	printf("点菜成功");
	return price;

}
void client(){
	printf("可选择的桌号为：");
	table *h=&table_head;
	while(h->next!=NULL){
		if(h->is_empty==0){
			printf("%d\t",h->num);
		}
		h=h->next;
	}
	printf("\n");
	order *ordert;
	ordert=(order *)malloc(sizeof(order));
	h=&table_head;
	int i;
	printf("请输入您选择的桌号:");
	scanf("%d",&i);
	while(h->next!=NULL){
		if(h->num==i){
			h->is_empty=1;
			h->order_head=ordert;
			break;
		}
		h=h->next;
	}
	printf("请点菜：");
	h->price=ORDER(ordert);
	printf("您的费用为%d\n",h->price);
	resave_table(&table_head);
}
void check(){
	printf("请输入您的桌号:");
	int i;
	scanf("%d",&i);
	table *p=&table_head;
	while(p->next!=NULL){
		if(p->num==i){
			printf("您的总费用为%d\n",p->price);
			p->is_empty=0;
			p->price=0;
			break;
		}
		p=p->next;
	}
resave_table(&table_head);
}
int main()
{
	table_line();
	menu_line_section();
	while (1)
	{
		int i;
		MENU();
		printf("请选择:");
		scanf("%d", &i);
		switch (i)
		{
		case 1: client();
		 break;
		case 2: check(); break;
		case 3: {}; break;
		case 4: {}; break;
		case 5: {}; break;
		default:printf("无此功能，请检查并重新输入"); break;
		}
	}
	return 0;
}
