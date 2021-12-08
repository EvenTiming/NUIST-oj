#include<iostream>
#include<malloc.h>
#include<cstring>
using namespace std;
char *arr[100];
int main()
{
int n;
while(cin>>n)
{
   int i=0;
   while(i<n)
    {
        arr[i]=(char*)malloc(20);
        cin>>arr[i];
        i++;
    }
    char str[]="China";
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
