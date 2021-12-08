#include<iostream>
#include<malloc.h>
#include<cstring>
#include<string>
using namespace std;
 int i=0;
    while(i<n)
    {
       string arr[i]=(char*)malloc(20);
       i++;
    }
int main()
{
int n;
while(cin>>n)
{

   while(i<n)
    {
        getline(cin,arr[i]);
        i++;
    }
    string str[]="5 China 560 Asia";
    char *p=str;
    for(i=0;i<n-1;i++)
    {
        if((*arr[i])==(*p))
        {
            for(int j=i;j<n-1;j++)
                arr[j]=arr[j+1];
        }
    }
    int j;
    char *temp;
    for(i=0;i<n-2;i++)
        for(j=i;j<n-2;j++)
    {
        if(strcmp(arr[j],arr[j+1])>0)
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"China"<<endl;


}
return 0;
}
