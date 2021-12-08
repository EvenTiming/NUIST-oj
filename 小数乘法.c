#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int max=0,min=101;
        float ave,sum=0;
        int a,j=0;
        for(;;){
        scanf("%d",&a);
        if(a>=0)
        {j++;
            sum=sum+a;
        if(a>max)
            max=a;
        if(a<min)
            min=a;
        }
        if(a==-1)
            {ave=sum/j;
            printf("%d\n%d\n%d\n%.1f\n",j,max,min,ave);
            j=0;max=0;min=101;ave=0;
            break;
            }}
    }
    return 0;
}
