#include<stdio.h>
#include<string.h>
int main()
{	int n,max,i;
	char str[16];
	char substr[4];
	while(scanf("%s %s",str,substr)!=EOF)
    {
	int maxnum=0;
    max=(int)str[0];
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>max)
		{
		max=str[i];
		maxnum=i;
	}
}
	for(i=0;i<=maxnum;i++)
	printf("%c",str[i]);
	for(i=0;i<3;i++)
	printf("%c",substr[i]);
	for(i=maxnum+1;i<strlen(str);i++)
	printf("%c",str[i]);
	printf("\n");
}
	return 0;
}
