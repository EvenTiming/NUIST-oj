#include<iostream>
using namespace std;
int main()
{
    int n;
    int a,b,t;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
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
        cout<<b<<endl;
    }
    return 0;
}
