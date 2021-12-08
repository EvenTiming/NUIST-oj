#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,t;
    while(cin>>n)
    {
        if(n==1)
            cout<<1<<endl;
        int a[n];
        for(i=0;i<n;i++)
        {
            a[i]=i+1;
        }
        for(i=0;i<n;i++)
         {

           for(j=0;j<n-1;j++)
        {
           t=a[j];
           a[j]=a[j+1];
           a[j+1]=t;


            for(k=0;k<n;k++)
                cout<<a[k];

            cout<<endl;
        }

         }
    }
    return 0;
}
