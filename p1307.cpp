#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    while(cin>>t)
{
    int a[t][t];


    for(i=0;i<t;i++)
        for(j=0;j<=i;j++)
        cin>>a[i][j];



    for(i=t-1;i>0;i--)
        for(j=0;j<i;j++)
    {
        if(a[i][j]>a[i][j+1])
           {

                a[i-1][j]=a[i][j]+a[i-1][j];
           }
        else
            {

                a[i-1][j]=a[i][j+1]+a[i-1][j];
            }
    }
    cout<<a[0][0]<<endl;
    }
    return 0;
}
