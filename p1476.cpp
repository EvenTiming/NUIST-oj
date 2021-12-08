#include<iostream>
#include<algorithm>
using namespace std;
struct pro{
    int a;
    int b;
    bool flag;
    int min;
};
int cmp(pro ax,pro bx){
    return ax.min<bx.min;
}
pro p[1001];
int order[1001];
int main(){
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            p[i].a=temp;
            p[i].flag=false;
           
        }
        for(int i=0;i<n;i++){
            int temp;
             cin>>temp;
            p[i].b=temp;
            p[i].min=p[i].a>p[i].b?p[i].b:p[i].a;
        }
        sort(p,p+n,cmp);
       
       
        int left=0;
        int right=n-1;
        int temp=n;
        int i=0;
        while(temp--){
            if(p[i].min==p[i].a){
                order[left++]=i;
            }else if(p[i].min==p[i].b){
                order[right--]=i;
            }
            i++;
        }
        int sum1=0;
        int sum2=0;
        for ( i = 0; i < n; i++) {
        sum1 += p[order[i]].a;
        //还没有加工第i个的第二道程序之前总时间取决于sum1，和sum2的最大值。
        sum2 = sum1>sum2?sum1:sum2;
        //之后在执行第二道工序
        sum2 += p[order[i]].b;
    }
    cout << sum2 << endl;
        
    }
}