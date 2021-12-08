#include<iostream>
#include<algorithm>
using namespace std;
struct game{
    int time;
    int value;
};
int cmp(game a,game b){
    return a.value>b.value;
}
bool flag[501];
 game g[501];
int main(){
int m;
while(cin>>m){
    int n;
    cin>>n;
   
    for(int i=0;i<n;i++){
        cin>>g[i].time;
        flag[i]=true;
    }
flag[n]=true;
     for(int i=0;i<n;i++){
        cin>>g[i].value;
    }

    sort(g,g+n,cmp);

     
    for(int i=0;i<n;i++){
      if(flag[g[i].time]){
          flag[g[i].time]=false;
      }else{
          bool f=false;
          for(int j=g[i].time;j>0;j--){
              if(flag[j]){
                  flag[j]=false;
                  f=true;
                  break;
              }
          }
          if(!f){
            
              m=m-g[i].value;
          }
      }
    }
    cout<<m<<endl;

}
}