#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int max,min;
    int n,m;
    scanf("%d",&n);
    scanf("%d",&max);
    min=max;
    n=n-1;
    while(n--)
    {
        scanf("%d",&m);
        if(m>max)
            max=m;
        if(m<min)
            min=m;
    }
    printf("%d\n",(max+min)/2);
}
return 0;
}
