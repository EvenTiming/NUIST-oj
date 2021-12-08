#include<stdio.h>
#include<stdlib.h>
int fun(int ,int ,int );
int main()
{
  int a,b,n;
  while(scanf("%d%d%d",&a,&b,&n)!=EOF)
  {
      if(a==0&&b==0&&n==0)
        exit(0);


      printf("%d\n", fun(a,b,n));
  }
    return 0;
}

int fun(int a,int b,int n)
{


     if(n==1||n==2)
     return 1;
     else
     return (a*fun(a,b,n-1)+b*fun(a,b,n-2))%7;

}
