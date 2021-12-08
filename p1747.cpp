#include<iostream>
#include<math.h>
using namespace std;
int num[100000];
int main(){
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int x;
    int mid;
    cin>>m;
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
       int r;
            if(mid==0){
               r =abs(x-num[0])>abs(x-num[1])?num[1]:num[0];
            }
            else{
                if(abs(x-num[mid])<abs(x-num[mid-1])&&abs(x-num[mid])<=abs(x-num[mid+1])){
                    r=num[mid];
                }else if(abs(x-num[mid-1])<=abs(x-num[mid])&&abs(x-num[mid-1])<=abs(x-num[mid+1])){
                    r=num[mid-1];
                }else if(abs(x-num[mid+1])<abs(x-num[mid])&&abs(x-num[mid+1])<abs(x-num[mid-1])){
                    r=num[mid+1];
                }
            }
            cout<<r<<endl;
        }
       
        
    }

