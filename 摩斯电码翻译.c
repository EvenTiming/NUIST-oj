#include<stdio.h>
#include<string.h>
int main()
{
	char a[][6]={ ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"  };
	char b[37]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
	char c[101];
	int i,j;
	while(scanf("%s",c)!=EOF)
	{
		for(i=0;i<strlen(c);i++)
		{
		for(j=0;j<37;j++)

         {
         	if(c[i]==b[j]&&i!=strlen(c)-1)
         	{
         		printf("%s",a[j]);
         		printf("===");
         	}
         	if(c[i]==b[j]&&i==strlen(c)-1)
         	{
         		printf("%s\n",a[j]);
         	}
         }
	}
	}
	return 0;
}
