#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        while(a--)
        {
            int b;
            scanf("%d",&b);
            sum=sum+b;
        }
        printf("%d\n\n",sum);
        sum=0;
    }
    return 0;
}
