#include<iostream>
#include<algorithm>
using namespace std;
int pathlen(int i,int j);
int p[100][100];
int dp[100][100];
int m,n;
int main(){


while(cin>>m>>n){
    int i,j;
   for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>p[i][j];
            dp[i][j]=-1;
        }
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        dp[i][j]=pathlen(i,j);
        }
    }
    int Max=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){

        if(dp[i][j]>Max)

            Max=dp[i][j];
        }

    }
cout<<Max+1<<endl;
}
return 0;
}
int pathlen(int i,int j){
    int a=0,b=0,c=0,d=0;
        if(i+1<m&&p[i+1][j]>p[i][j]){
            if(dp[i+1][j]!=-1)
                c=1+dp[i+1][j];
            else
                c=1+pathlen(i+1,j);
                }

        if(j+1<n&&p[i][j+1]>p[i][j]){
            if(dp[i][j+1]!=-1)
                d=1+dp[i][j+1];
            else
                d=1+pathlen(i,j+1);
                }
        if(j-1>=0&&p[i][j-1]>p[i][j]){
            if(dp[i][j-1]!=-1)
                a=1+dp[i][j-1];
            else
                a=1+pathlen(i,j-1);
                }
         if(i-1>=0&&p[i-1][j]>p[i][j]){
            if(dp[i-1][j]!=-1)
                b=1+dp[i-1][j];
            else
                b=1+pathlen(i-1,j);
                }
        return max(max(a,b),max(c,d));
    }

