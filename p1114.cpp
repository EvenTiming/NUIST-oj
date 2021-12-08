#include<iostream>
using namespace std;
int main()
{
    int n;

    while(cin>>n)
    {
        int a[n][n]={0};
    int t;
    int i,j;
    int m=1;
    for(t=n;t>n/2;t--)
    {
      j=t-1;
      for(i=n-t;i<t-1;i++)
        a[i][j]=m++;

      i=t-1;
      for(j=t-1;j>n-t;j--)
        a[i][j]=m++;

      j=n-t;
      for(i=t-1;i>n-t;i--)
        a[i][j]=m++;

      i=n-t;
      for(j=n-t;j<t-1;j++)
        a[i][j]=m++;

    }
    if(n%2)
        a[n/2][n/2]=n*n;
    if(n==1)
        a[0][0]=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }

    }

return 0;
}


