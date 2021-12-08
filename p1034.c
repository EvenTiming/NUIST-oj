#include<stdio.h>
#include<string.h>
int main()
{
    int k,l,i,j;
    char a[101];
    while(scanf("%d",&k)!=EOF)
    {


    scanf("%s",&a);
    char b[k];
    l=strlen(a);
    for(i=0;i<k;i++)
        b[i]=a[i];
    for(i=0;i<l-k;i++)
            a[i]=a[i+k];
    for(i=l-k,j=0;i<l,j<k;i++,j++)
        a[i]=b[j];
    for(i=0;i<l;i++)
        printf("%c",a[i]);
        printf("\n");
    }
    return 0;

}
