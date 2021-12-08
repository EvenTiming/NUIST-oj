#include<iostream>
using namespace std;
int num[100000];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int x;
    int mid;
    while(m--){
        cin>>x;
        int left=0;
        int right=n-1;
         mid=(right+left)/2;
        while(right>left){
          
            if(num[mid]>x){
                right=mid-1;
            }
            else if(num[mid]<x){
                left=mid+1;
            }
            else{
                break;
            }

             mid=(right+left)/2;
        }
        if(num[0]>x)
            cout<<-1<<endl;
        else if(num[mid]==x){
           cout<<num[mid]<<endl;
       }
       else if(num[mid]>x&&mid!=0&&num[mid-1]<=x){
           cout<<num[mid-1]<<endl;
       }else if(num[mid]<x){
           cout<<num[mid]<<endl;
       }
       
        
    }

}