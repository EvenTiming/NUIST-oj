#include<iostream>
#include<map>
using namespace std;
int A[2001];
int B[2001];
int C[2001];
int D[2001];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>A[i]>>B[i]>>C[i]>>D[i];
        }
        map<int,int> m;
        int r;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                r=A[i]+B[j];
                if(m.find(r)!=m.end()){
                    m[r]++;
                }else{
                    m.insert(pair<int, int> (r, 1));//c++ map使用，插入操作
                }
            }
        }
    //     map<int, int>::iterator iter;
    // iter = m.begin();
    // while(iter != m.end()) {
    //     cout << iter->first << " : " << iter->second << endl;
    //     iter++;
    // }
     
         int sum=0;
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                r=C[i]+D[j];
                if(m.find(-r)!=m.end()){
                   sum=sum+m[-r];
                }
            }
        }
        cout<<sum<<endl;
       // system("pause");
            }
}