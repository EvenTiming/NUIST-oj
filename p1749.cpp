#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
//学校oj能过，但存在问题
struct Point {
    double x;
    double y;
};
bool cmp(Point a,Point b){
    if(a.x==a.x){
        return a.y<b.y;
    }
    return a.x<b.x;
}
double lfmin(double a, double b)
{
	return (a<b)?(a):(b);
}
double dist(Point a,Point b){
    return sqrt((a.x-b.x)* (a.x-b.x)+ (a.y-b.y)*(a.y-b.y));
}
Point p[10001];
double length(Point[],int ,int );
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y;
    }
    sort(p,p+n,cmp);

    double len=length(p,0,n-1);
  // cout<<"-------------"<<endl;
    printf("%.4lf\n", len);
    //system("pause");
}
double length(Point p[],int left,int right){
    
    if(right-left+1<=3){
        double ans=1e300;
        for(int i=left;i<right;i++){
            for(int j=i+1;j<=right;j++){
                //printf("%.4lf\n",dist(p[i],p[j]));
                ans=lfmin(ans,dist(p[i],p[j]));
            }
        }
        
        return ans;
    }
    int mid=(left+right)/2;
    double min1=length(p,left,mid);
    double min2=length(p,mid+1,right);
    double min=lfmin(min1,min2);
   // cout<<left<<' '<<right<<endl;
    
    
    int s[10001];
    int k=0;
    for(int i=left;i<=right;i++){
        if(abs(p[i].x-p[mid].x)>min||abs(p[i].y-p[mid].y)>min){
            continue;
        }
        s[k++]=i;
    }
   // cout<<k<<' '<<min<<endl;
    double ans=1e300;
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
          //  cout<<dist(p[s[i]],p[s[j]])<<endl;
             ans=lfmin(ans,dist(p[s[i]],p[s[j]]));
        }
    }
    return lfmin(ans,min);

}
