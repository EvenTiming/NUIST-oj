#include<stdio.h>
int main()
{
    int a,b=0,k,t;
    scanf("%d",&a);
    t=a;
    while(t)
    {
        k=t%10;
        b=b*10+k;
        t=t/10;
    }
    if(a==b)
        printf("�ǻ�����");
    else
        printf("���ǻ�����");

       return 0;
    }
