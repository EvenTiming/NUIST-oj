#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,x,b;
    while(scanf("%d",&n)!=EOF){
    int a;
    a=pow(10,n);
int i;
    int j=0;
    for(i=1;i<n;i++)
    {t=i;b=0;
        while(t)
        {
            x=t%10;
            if(x==4)
                b=1;
            t=t/10;
        }
        if(b)
            j++;

    }
    printf("%d\n",j);}
    return 0;
}
