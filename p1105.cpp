#include<iostream>
using namespace std;
int qwe(int);
int main()
{
    int n;
    while(cin>>n)
    {
        int p,q;
        for(p=2;p<=n/2;p++)
            if(qwe(p))
            if(qwe(n-p))
              {
                  cout<<p<<'+'<<n-p<<endl;
                   break;
              }

   }
   return 0;
}
int qwe(int n)
{
   int flag=1;
   int i;
   for(i=2;i<n;i++)
    if(n%i==0)
    flag=0;
   if(flag)
    return 1;
   else
    return 0;
}
