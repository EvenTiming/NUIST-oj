#include<bits/stdc++.h>
using namespace std;
string houxu(string ,string);
int main(){
    string qianxu;
    string zhongxu;
    while(cin>>zhongxu){
        cin>>qianxu;
        string re=houxu(qianxu,zhongxu);
        cout<<re<<endl;
    }

return 0;

}
string houxu(string qianxu,string zhongxu){
    if(qianxu.length()==1)
        return qianxu;
    if(qianxu.length()==0)
        return qianxu;
    char root=qianxu[0];
    int n=zhongxu.length();
    const char* p = zhongxu.c_str();
    int i=0;
    for(i=0;i<n;i++){
        if(p[i]==root){
        break;
        }
    }

    string left=zhongxu.substr(0,i);
    string leftq=qianxu.substr(1,i);
    string right=zhongxu.substr(i+1);
    string rightq=qianxu.substr(i+1);
    /*cout<<left<<endl;
        cout<<leftq<<endl;
            cout<<right<<endl;
            cout<<rightq<<endl;*/
    string result=houxu(leftq,left)+houxu(rightq,right)+root;
    return result;
}
