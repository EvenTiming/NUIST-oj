#include<iostream>
using namespace std;
int max(int, int);
int main()
{
    int t;
    while(cin>>t)
    {
        int a[t][t];
        int i,j;
        for(i=0;i<t;i++)
            for(j=0;j<t;j++)
            cin>>a[i][j];
           int sum1[t][t]={0},sum2[t][t]={0};

            for(j=0;j<t;j++)
           {
               sum1[0][j]=a[0][j];
               sum2[0][j]=a[0][j];
           }
           for(i=1;i<t;i++)
           {
               for(j=0;j<t;j++)
               {
               sum1[i][j]=sum1[i-1][j]+a[i][j];
               sum2[i][j]=sum2[i-1][j]+a[0][j];
               }
           }
           int maxsum=0,sum=0;
           int dp[t];
           for(i=0;i<t;i++)
                {
                    for(j=0;j<t-1;j++)
                    {

                sum=max(sum1[i][j],sum1[i][j]+sum1[i][j+1]);
                    }
                  if(sum>maxsum)
                    maxsum=sum;
                }
           int p;
        for(p=1;p<t;p++)
            {


                for(i=p;i<t;i++)
                {
                    for(j=0;j<t;j++)
                    sum1[i][j]=sum1[i][j]-sum2[p][j];

                    for(j=0;j<t-1;j++)
                    {
                sum=max(sum1[i][j],sum1[i][j]+sum1[i][j+1]);
                    }
                  if(sum>maxsum)
                    maxsum=sum;
                }


             }
             cout<<maxsum<<endl;
    }
    return 0;
}
int max(int x,int y)
{
    return (x>y?x:y);
}
