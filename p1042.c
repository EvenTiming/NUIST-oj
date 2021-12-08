#include<stdio.h>
int main()
{
    char a[12];
    int b[12];
    int i;
    while(scanf("%s",&a)!=EOF)
    {
        b[0]=6;
        for(i=1;i<6;i++)
            b[i]=a[i+5]-'0';
        for(i=0;i<6;i++)
            printf("%d",b[i]);
        printf("\n");

    }
    return 0;
}
