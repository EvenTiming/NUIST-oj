#include<stdio.h>
int main()
{
    int n,sum=1;
    int i;
 while(scanf("%d",&n)!=EOF)
 {
     for(i=0;i<n-1;i++)
     sum=(sum+1)*2;
     printf("%d\n",sum);
     sum=1;
 }
 return 0;
}
