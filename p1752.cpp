#include<iostream>
using namespace std;
int main(){
int dp[7];
dp[1]=1;dp[0]=0;
for(int i=2;i<7;i++){
    dp[i]=0;
    for(int j=0;j<i;j++)
        dp[i]=dp[i]+dp[j];
    dp[i]++;
}
int n;
while(cin>>n){
    cout<<dp[n]<<endl;
}
return 0;
}
