#include<iostream>
using namespace std;
int v[31];
int w[31];

int max(int ,int );
int main(){
     int V;
     int N;
     while (cin>>V>>N){
        int i;
        int dp[V];
    for(i=1;i<=N;i++){
            cin>>v[i]>>w[i];
        }
    for(i=0;i<=V;i++){
        dp[i]=0;
    }
      for(i=1;i<=N;i++){
          for(int j=V;j>0;j--){
            if(j<v[i])
                break;
            dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
          }
      }
        cout<<dp[V]<<endl;
    }
 return 0;
}
int max(int x,int y){
    if(x>y)
    return x;
    else
    return y;
}


