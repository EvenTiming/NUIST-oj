#include<iostream>
using namespace std;
int main()
{
int m;
while(cin>>m){
        int k;
        int a[2*m];
int i,j;

for(i=0;i<100;i++)
    for(j=m+1;j<2*m+1;j++)
{
    for(int t=0;t<2*m;t++)
        a[t]=1;
    k=2*m*i+j;
    int x,y;
    x=0;y=0;
    while(x<m*k)
    {
        y++;
        if(y>2*m)
            y=y%(2*m);
        if((x+1)%k==0)
            {
                if(a[y]==1)
                a[y]=0;
                else
                  continue;
            }
        x++;
    }
    int flag1=1,flag2=1;
    int f;
    for(f=0;f<m;f++)
        if(a[f]==0)
        flag1=0;
    for(f=m;f<2*m;f++)
        if(a[f]==1)
        flag2=0;
        if(flag1&&flag2)
        {cout<<k<<endl;break;}

}


}
return 0;
}

