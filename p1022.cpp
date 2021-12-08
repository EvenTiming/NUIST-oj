#include<iostream>
using namespace std;

void Year(int n);
int YunYear(int n);
int main()
{
    int n;
    while(cin>>n)
    {
       n=n+282;
        Year(n);

        cout<<endl;
    }
    return 0;
}

void Year(int n)
{
    int year=2007;
    while(n>=365)
    {
        n=n-365-YunYear(year);
        year++;
    }

    int a[12]={31,28+YunYear(year),31,30,31,30,31,31,30,31,30,31};
    int i=0;
    while(n>=a[i])
    {
        n=n-a[i];
        i++;
    }
    if(i+1<10&&n+1<10)
    cout<<year<<'-'<<0<<i+1<<'-'<<0<<n+1;
    else if(i+1<10&&n+1>=10)
    cout<<year<<'-'<<0<<i+1<<'-'<<n+1;
    else if(i+1>=10&&n+1<10)
    cout<<year<<'-'<<i+1<<'-'<<0<<n+1;
    else
    cout<<year<<'-'<<i+1<<'-'<<n+1;

}
int YunYear(int n)
{
   if(n%4==0&&n%100!=0)
    return 1;
   if(n%100==0&&n%400!=0)
    return 0;
   if(n%4)
        return 0;
    if(n%400==0)
        return 1;
}
