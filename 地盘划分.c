#include<stdio.h>
int main()
{
    int a,b,t,p;
    int j=0,x;
    while(scanf("%d%d",&a,&b)!=EOF)
{

        if(a>b)
            {t=a;p=b;}
        else
            {t=b;p=a;}

    while(t!=p)
    {

           while(t>p)
           {
               t=t-p;
               j++;
           }
           x=t;
           t=p;
           p=x;
    }

    printf("%d\n",j+1);
}
    return 0;
}
