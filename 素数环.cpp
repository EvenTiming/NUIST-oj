#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int isprime[100],a[25],vis[25],n;
void   countprime(){
       int i,j;
       for(i=2;i<=10;i++){
       if(isprime[i])continue;
       for(j=i*i;j<=100;j+=i)
       isprime[j]=1;}
    }
void   prime(int cur){
       int i;
       if(cur==n&&(!isprime[a[1]+a[n]])){
       for(i=1;i<=n;i++)
       if(i==n)
       printf("%d",a[i]);
       else
        printf("%d ",a[i]);
        printf("\n");}
        else {
        for(i=2;i<=n;i++)
        if(!vis[i]&&(!isprime[i+a[cur]]))
        {
         a[cur+1]=i;
         vis[i]=1;
         prime(cur+1);
         vis[i]=0;
         }}
}
int main()
{
    int cour,i,t=1;
    while(scanf("%d",&n),n){
    memset(a,0,sizeof(a));memset(vis,0,sizeof(vis));
    a[1]=1;
    countprime();
    printf("Case %d:\n",t++);
    if(n==1)
    printf("1\n");
    else if(n&1)
    printf("No Answer\n");
    else
    prime(1);
       }
    return 0;
}
//TLE
