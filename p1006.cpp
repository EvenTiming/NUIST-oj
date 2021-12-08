#include<iostream>
using namespace std;
int main()
{
    int n;
    int a,b,t,m,q;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        m=a;
        q=b;
        if(b>a)
        {
        t=a;
        a=b;
        b=t;
        }
        t=a%b;
        while(t>0)
        {
          a=b;
          b=t;
          t=a%b;
        }
        cout<<(m*q)/b<<endl;
    }
    return 0;
}
