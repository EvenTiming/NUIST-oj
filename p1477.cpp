#include<iostream>
#include<algorithm>
using namespace std;
struct sm{
    int v;
    int w;
    
};
int cmp(sm a,sm b){
return a.v*b.w>b.v*a.w;
}
int main(){
    int n,W;
    int temp;
    while(cin>>n>>W){
            sm a[n];
        for(int i=0;i<n;i++){
            cin>>temp;
            a[i].w=temp;
            cin>>temp;
            a[i].v=temp;
           
        }
        sort(a,a+n,cmp);
        int i;
        double sum=0;

         for(i=0;i<n;i++){
            if(a[i].w<W){
                W=W-a[i].w;

                sum+=a[i].v;
            }else{
                
                sum=sum+a[i].v*(W)*1.0/(a[i].w*1.0);
                break;
            }

        }
     printf("%.2lf\n",sum);
    }
 return 0;
}


