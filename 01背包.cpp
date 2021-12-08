#include<iostream>
using namespace std;
int v[31];
int w[31];

int max(int ,int );
int main(){
     int V;
     int N;
     int dp[N]={0};
     while (cin>>V>>N){
        int i;
       for(i=1;i<=N;i++){
            cin>>v[i]>>w[i];
        }
      for(i=1;i<=N;i++){
          for(int j=V;j>0;j--){
              if(j>=v[i])
                  dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
          }

          for(int m=0;m<=V;m++)
            cout<<dp[m]<<' ';
          cout<<endl;
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

