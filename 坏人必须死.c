#include<stdio.h>
int main()
{
   int n;
   int sum,t,p;
   scanf("%d",&n);
   int k=10000;
   for(k=10000;k<1000000;k++)
   {
       p=k;
   sum=0;
       while(p)
       {
           t=p%10;
           k=p/10;
           sum=sum+t;
       }
       if(sum==n)
        printf("%d",k);
   }

return 0;
}
