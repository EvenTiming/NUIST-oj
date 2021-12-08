#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        int i=0;
        scanf("%d",&a);
        while(a)
        {
            if(a%2)
                i++;
            a/=2;
        }
        printf("%d\n",i);
        i=0;
    }
    return 0;
}
