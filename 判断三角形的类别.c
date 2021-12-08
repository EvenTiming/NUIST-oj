#include<stdio.h>
int main()
{
         int t;
         int a,b;
         int i=1,j=1;
         scanf("%d",&t);
         while(t--)
         {
           scanf("%d%d",&a,&b);
             while(a>=0&&b>=0)
             {
                 if(j%2!=0)
                    a=a-i;
                 else
                    b=b-i;
                 i++;
                 j++;
             }
            if(a<0)
            {

            if(t==0)
                printf("A");
            else
                printf("A\n");}
            else
            {if(t==0)
                printf("B");
            else
                printf("B\n");
            }

                }
return 0;

}
