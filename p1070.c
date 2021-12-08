#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n];
        int k,i,j;
        scanf("%d",&k);
        int b[k];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<k;i++)
            b[i]=a[i];
        for(i=k;i<n;i++)
        {
            a[i-k]=a[i];
        }
        for(i=0,j=0;i<k;i++,j++)
            a[n-k+i]=b[j];

        for(i=0;i<n;i++)
            printf("%d\n",a[i]);
    }
    return 0;
}
