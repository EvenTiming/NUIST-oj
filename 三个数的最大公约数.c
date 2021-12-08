#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    int  j,i,t;
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
        {
            a=t;
            a=b;
            b=t;
        }
        if(a>c)
        {
            a=t;
            a=c;
            c=t;
        }
        for(i=1;i<=a;i++)
            if(a%i==0&&b%i==0&&c%i==0)
            j=i;
        printf("%d\n",j);
        j=0;

    }
    return 0;

}
