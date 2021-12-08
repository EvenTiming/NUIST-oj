#include<iostream>
using namespace std;
int main()
{
 int a;
 while(cin>>a)
 {
     int t=0,n,m;
     m=a;
     while(a>0)
     {
         n=a%10;
         t=t*10+n;
         a/=10;
     }
     if(m==t)
        cout<<"yes"<<endl;
     else
        cout<<"no"<<endl;
 }
 return 0;
}
