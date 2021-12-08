#include<stdio.h>
#include<string.h>
int main()
{
    char str[16],str2[20];
    char substr[3];
    char s='0';
    int i,t,n,j;
    while(scanf("%s",&str)!=EOF)
    {
        scanf("%s",&substr);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]-'0'>s-'0')
        {
            t=i;
            s=str[i];
        }
    }

    for(i=0;i<t+1;i++)
        str2[i]=str[i];
    for(i=t+1,j=0;i<t+4,j<3;i++,j++)
        str2[i]=substr[j];
    for(i=t+4;i<n+3;i++)
        str2[i]=str[i-3];
        for(i=0;i<n+3;i++)
            printf("%c",str2[i]);
    printf("\n");
    s='0';
    }
    return 0;
}
