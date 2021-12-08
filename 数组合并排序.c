#include<stdio.h>
void qwe(int a[],int b[],int c[],int m,int n);
int main()
{
    int a[100],b[100],c[200];
    int n,m,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter %d integers: ",n);
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter %d integers: ",m);
    for(i=0;i<m;i++)
     scanf("%d",&b[i]);
    qwe(&a,&b,&c,n,m);
    for(i=0;i<m+n;i++)
        printf("%4d",c[i]);
    return 0;
}
void qwe(int a[],int b[],int c[],int n,int m)
{
    int i,j,t;
    for(i=0;i<n;i++)
        c[i]=a[i];
    for(i=0;i<m;i++)
        c[n+i]=b[i];
        for(i=0;i<m+n-1;i++)
            for(j=0;j<m+n-1;j++)
        {
            if(c[j]>c[j+1])
            {
                t=c[j];
                c[j]=c[j+1];
                c[j+1]=t;

            }
        }


}

