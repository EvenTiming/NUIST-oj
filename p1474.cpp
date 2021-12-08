#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int i,j;
        unsigned long long m;
        unsigned long long num[n];
        for(i=0;i<n;i++){
            cin>>num[i];
        }
        while(n!=1){
            for(i=0;i<n-1;i++){
                for(j=0;j<n-i-1;j++){
                    if(num[j]>num[j+1]){
                        m=num[j];
                        num[j]=num[j+1];
                        num[j+1]=m;
                    }
                }
            }
            m=num[0]*num[1]+1;
            num[0]=m;
            n--;
            for(i=1;i<n;i++){
                num[i]=num[i+1];
            }
        }
        cout<<num[0]<<endl;
    }
    return 0;
}
