#include<stdio.h>
int main()
{
    float n,m;
    while(scanf("%f%f",&m,&n)!=EOF){
    float c;
    c=((float)(int)(m/n*100+0.5))/100;
    printf("%.2f\n",c);}
    return 0;
}
