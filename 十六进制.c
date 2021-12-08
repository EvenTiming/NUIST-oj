
#include<stdio.h>
#include<string.h>
int main()
{
char a[80];
char b[80];
int i,j,x;
gets(a);
i=0;
j=0;
x=0;
while(a[i])
{
if(a[i]>='0'&&a[i]<='9'){
    x=x*16+a[i]-'0';
    b[j++]=a[i];
}
else if(a[i]>='a'&&a[i]<='f')
{
    x=x*16+a[i]+10-'a';
    b[j++]=a[i];
}
else if(a[i]>='A'&&a[i]<='F')
{
    x=x*16+a[i]+10-'A';
    b[j++]=a[i];
}
i++;

}

puts(b);
printf("%d",x);
}
