#include<iostream>
#include<algorithm>
using namespace std;
struct data{
int a;
int b;
};
bool comparison(data c,data d){
    return c.b>d.b;
}
int main(){
int m,n;
while(cin>>m>>n){
        data d[n];
    for(int i=0;i<n;i++){
        cin>>d[i].a;
    }
    for(int i=0;i<n;i++){
        cin>>d[i].b;
    }
    sort(d,d+n,comparison);
    //cout<<d[1].b<<endl;
     for(int i=0;i<n;i++){
        cout<<d[i].a<<' ';
    }
    cout<<endl;
     for(int i=0;i<n;i++){
        cout<<d[i].b<<' ';
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(d[i].a>=i+1)
            m=m-d[i].b;

    }
    cout<<m<<endl;
}
return 0;
}
