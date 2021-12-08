#include<stdio.h>

int main()
{
int a,b,c;
while(scanf("%d%d%d",&a,&b,&c)!=EOF)
{int t;
t=a;
b=b-1;
while(b--)
{
    a=a*t;
}
printf("%d\n",a%c);}
return 0;
}
