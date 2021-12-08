#include<stdio.h>
int main()
{
    int t;
    int i;
    int j=0,k=0;
        int b[10],c[10];
    for(i=0;i<10;i++)
      {
          scanf("%d",&t);
          if(t%2==0)
          c[j++]=t;
          else
                b[k++]=t;
      }

    int p;
    for(i=0;i<j;i++)
        for(p=0;p<j-1;p++)
        {
            if(c[p]>c[p+1])
          {

            t=c[p+1];
            c[p+1]=c[p];
            c[p]=t;}
        }
      for(i=0;i<k;i++)
        for(p=0;p<k-1;p++)
        {
            if(b[p]<b[p+1])
            {t=b[p+1];
            b[p+1]=b[p];
            b[p]=t;
        }}
    for(i=0;i<k;i++)
        printf("%d ",b[i]);
    for(i=0;i<j;i++)
        printf("%d ",c[i]);
    return 0;

}
