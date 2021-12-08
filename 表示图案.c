#include<stdio.h>
#include<math.h>
int main()
{
    float i,j;
    for(i=-30;i<=30;i++)
        for(j=30;j>=-30;j--)
    {
        if(pow(pow(i*0.05,2)+pow(j*0.05,2)-1,3)-pow(i*0.05,2)*pow(j*0.05,3)<=0)
            printf("1");
        else
            printf(" ");
    }
return 0;
}
