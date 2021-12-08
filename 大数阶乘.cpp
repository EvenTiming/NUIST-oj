#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,n,t,num;
    double Num=0;
   while( cin>>n){
    for(int i=0;i<n;i++)
          Num+=log10(i+1);
      num=int(Num)+2;
    int a[num],b[num];
    a[num-1]=1;b[num-1]=1;
    for(i=0;i<num-1;i++)
    {a[i]=0;
    b[i]=0;}
        int ex=0,j,ex2=0;
    for(i=2;i<=n;i++)
    {
        int x,y;
        x=i%10;y=i/10;
        for(j=num;j>=0;j--)
        {
            a[j]=(a[j]*x+ex)%10;
            ex=(a[j]*x+ex)/10;
            b[j]=(b[j]*y+ex2)%10;
            ex2=(b[j]*y+ex2)/10;
        }



        for(j=num;j>=0;j--)
        {
            if(a[j]+b[j+1]>=10)
            {
                a[j]=(a[j]+b[j+1])%10;
                a[j-1]++;
            }
            else
                a[j]=a[j]+b[j+1];

        }






        for(j=0;j<num;j++)
        b[j]=a[j];
    ex=0;ex2=0;
    }



    for(j=0;j<num;j++)
        cout<<a[j];
    cout<<endl;}
    return 0;
}
