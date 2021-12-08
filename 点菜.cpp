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
	int is_empty;//0��ʾ���У�1��ʾ�й˿�
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

//������������
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

//�˵���������
menu menu_head;
void menu_line_section()//�˵����������
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
		printf("�˺�:%d ����:%s �۸�:%d\n",p->num,p->name,p->cost);
		p=p->next;
	}
}
void MENU()
{
	printf("*************************************************\n");
	printf("��������ϵͳ\n");
	printf("*************************************************\n");
	printf("1.���\n");
	printf("2.�ͻ�����\n");
	printf("3.��Ŀ����\n");
	printf("4.�͹�ͳ��\n");
	printf("5.�˳�\n");
}
int ORDER(order *ordert){
	show();
	int i=1;
	int price=0;
	printf("��������Ҫѡ�Ĳ˺�:(����0����)");
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
	printf("��˳ɹ�");
	return price;

}
void client(){
	printf("��ѡ�������Ϊ��");
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
	printf("��������ѡ�������:");
	scanf("%d",&i);
	while(h->next!=NULL){
		if(h->num==i){
			h->is_empty=1;
			h->order_head=ordert;
			break;
		}
		h=h->next;
	}
	printf("���ˣ�");
	h->price=ORDER(ordert);
	printf("���ķ���Ϊ%d\n",h->price);
	resave_table(&table_head);
}
void check(){
	printf("��������������:");
	int i;
	scanf("%d",&i);
	table *p=&table_head;
	while(p->next!=NULL){
		if(p->num==i){
			printf("�����ܷ���Ϊ%d\n",p->price);
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
		printf("��ѡ��:");
		scanf("%d", &i);
		switch (i)
		{
		case 1: client();
		 break;
		case 2: check(); break;
		case 3: {}; break;
		case 4: {}; break;
		case 5: {}; break;
		default:printf("�޴˹��ܣ����鲢��������"); break;
		}
	}
	return 0;
}
