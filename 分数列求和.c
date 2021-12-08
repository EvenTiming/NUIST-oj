#include<stdio.h>
int main()
{
    float sum,a,b,c,d,t,p,u;
int j;

    int n;
    while(scanf("%d",&n)!=EOF){
    sum=0;
    a=2;
    b=1;
    c=1;
    d=1;
    j=1;
    while(n--)
    {
    if(j%2==0)
   u=-1*a/c;
   else
    u=a/c;
    sum=sum+u;
    t=a;
    p=c;
    a=a+b;
    c=c+d;
    b=t;
    d=p;
j++;
    }
    printf("%.4f\n",sum);}
    return 0;
}
