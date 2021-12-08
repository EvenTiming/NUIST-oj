#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n];
        int i;
        float max=0,sum=0;
        for(i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]>max)
                    max=a[i];
                sum=sum+a[i];

            }
            if(sum-max<=max)
               printf("%.1f",sum-max);
            else
                cout<<1.0*sum/2;
                cout<<endl;

    }
    return 0;
}
