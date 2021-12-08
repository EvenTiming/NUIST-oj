#include<iostream>
using namespace std;
int getFoots(int);
int main()
{
    int n;
    while(cin>>n)
    {


        int t=0;

        t=getFoots(n);


        cout<<t<<endl;
    }
    return 0;
}
int getFoots(int n)
{

    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else if(n==3)
        return 2;
    else if(n==4)
        return 2;
     return getFoots(n-2)+2*getFoots(n-3)+getFoots(n-4);



}
