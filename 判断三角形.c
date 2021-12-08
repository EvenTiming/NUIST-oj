# include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
		while(n--)
		{
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a)
				printf("Not Triangle\n");
else if(a==b&&b==c)
	printf("Regular Triangle\n");
else if(a==b||b==c||a==c)
printf("lsosceles Triangle\n");
else printf("Triangle\n");
		}return 0;}
