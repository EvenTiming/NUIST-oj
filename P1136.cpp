#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[100],s2[100];



	while(scanf("%s",&s1)!=EOF)
    {
        int m[202]={'\0'};
        scanf("%s",&s2);
        int a[200]={0},b[200]={0},l1,l2,c,k,i,j,flag;
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==1||l2==1)
if(s1[0]=='0'||s2[0]=='0')
    {cout<<0;
    goto lable;}
	if(l1<l2) k=l2;
	else k=l1;c=k;
	for(i=0;i<l1;k--,i++)
	a[k]=s1[l1-1-i]-'0';
	for(k=c,i=0;i<l2;k--,i++)
	b[k]=s2[l2-1-i]-'0';

	int t;
	for(i=c;i>=0;i--)
        for(j=c;j>=0;j--)
        {
            t=(c-i+1)+(c-j+1)-1;
            m[t]=m[t]+(a[i]*b[j]);
        }

m[t]=37;
	for(i=1;m[i]!=37;i++)
    {
        if(m[i]>=10)
        {
            m[i+1]=m[i+1]+m[i]/10;
            m[i]=m[i]%10;
        }
    }
m[i]=73;
    i=1;
	while(m[i]!=73)
    {
        i++;
    }
    flag=0;
    while((i--)>1)
    {

        if(m[i]!=0)
            flag=1;
        if(flag)
        cout<<m[i];
    }
    lable:
    printf("\n");
	}

    return 0;
}
