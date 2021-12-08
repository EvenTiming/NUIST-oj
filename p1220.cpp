#include<bits/stdc++.h>
using namespace std;

int huanghou(int i,int w[]);
int num=0;
int main(){
    int a,b;
    int w[8];
    while(scanf("%d",&a)!=EOF){
        for(int i=0;i<8;i++){
            w[i]=-99;
        }
        for(int i=0;i<8;i++)
        for(int j=0;j<8;j++){

           if(i==0&&j==0){
                if(a==1){
                    w[i]=j;
                }
           }else{
               scanf("%d",&b);
                if(b==1){
                    w[i]=j;
                }
           }
        }

        huanghou(0,w);
        printf("%d\n",num);
        num=0;
        for(int i=0;i<8;i++){
            w[i]=-99;
        }
    }
}
int huanghou(int i,int w[]){
    int sum=0;
    if(w[7]!=-99&&i==7){
        num++;
        return 0;
    }
    else if(i==7){
        for(int j=0;j<8;j++){
                 bool f=true;
            for(int m=0;m<7;m++){
                    bool flag=true;
                     double c=abs((w[m]-j)*1.0)/((i-m)*1.0);
                   if(c==1||c==0){
                        flag=false;
                        }
                    if(!flag){
                       f=false;
                        break;
                    }
                }
                if(f)
                    num++;
            }
            return 0;
        }
    else{
        if(w[i]!=-99){
            huanghou(i+1,w);
        }else{
            for(int j=0;j<8;j++){
                   // cout<<i<<','<<j<<endl;
                 bool f=true;
            for(int m=0;m<8;m++){
                if(m==i)
                    continue;
                else{

                    bool flag=true;
                    double c=abs((w[m]-j)*1.0)/((i-m)*1.0);
                   if(c==1||c==0){
                        flag=false;
                        }
                   // cout<<i<<' '<<j<<' '<<flag<<' '<<m<<' '<<w[m]<<' '<<c<<' '<<endl;
                    if(!flag){
                        f=false;
                        break;
                        }
                }
            }
                if(f){
                    w[i]=j;
                    huanghou(i+1,w);
                    w[i]=-99;
                    }
        }
    }
    }

}

