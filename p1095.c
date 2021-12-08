#include<stdio.h>
int main()
{
    int t;
    int max=0,n=0,min=100,sum=0,m;
    float ave;
    scanf("%d",&t);
    while(t--)
    {
        while(1)
        {
            scanf("%d",&m);
            if(m!=-1)
            {
                n++;
                sum+=m;
                if(m>max)
                    max=m;
                if(m<min)
                    min=m;
            }
            else
                break;
        }
        ave=1.0*sum/n;
        printf("%d\n%d\n%d\n%.1f\n",n,max,min,ave);
        n=0;max=0;min=100;sum=0;
    }
    return 0;
}
