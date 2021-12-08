#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int num[500001];
int temp[500001];
long long count=0;
void Sort(int num[],int l,int r);
void hebing(int num[],int l,int r);
int main(){
    int n;
    
cin>>n;
        count=0;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    Sort(num,0,n-1);
   
    cout<<count<<endl;
   
    
    
}
void Sort(int num[],int l,int r){
    if(l<r){
    int mid=(l+r)/2;
    Sort(num,l,mid);
    Sort(num,mid+1,r);
    
    hebing(num,l,r);
    }
}
void hebing(int num[],int l,int r){
    int mid=(l+r)/2;
    int t=0;
    int i=l;
    int j=mid+1;
    
     while (i<=mid && j<=r){
            if(num[i]<=num[j]){
                temp[t++] = num[i++];
               
            }else {
                temp[t++] = num[j++];
                count=count+(mid-i+1);
            }
        }
        while(i<=mid){//将左边剩余元素填充进temp中
            temp[t++] = num[i++];
        }
        while(j<=r){//将右序列剩余元素填充进temp中
            temp[t++] = num[j++];
        }
        t = 0;
        //将temp中的元素全部拷贝到原数组中
        while(l <= r){
            num[l++] = temp[t++];
        }
}