#include<iostream>
using namespace std;
int main()
{
    int n,m,t=1,sum=1;
    while(cin>>n)
    {
        t=1;sum=1;
        int i=1,j=1;
        while(sum<n)
        {
            t++;
            sum+=t;
        }
        sum=sum-t;
        m=n-sum;
        if(t%2==0)
            {i=t-m+1;
            j=m;}
        else
            {i=m;
            j=t-m+1;}
        cout<<j<<"/"<<i<<endl;

}
return 0;
}
