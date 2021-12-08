#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int a[t][t];
        int i,j;
        for(i=0;i<t;i++)
            for(j=0;j<t;j++)
            cin>>a[i][j];

        int m,n;
        int max=0;
        for(m=0;m<t;m++)
           for(n=0;n<t;n++)
              for(i=m;i<t;i++)
                for(j=n;j<t;j++)

            {
            int p,q;
            int b[t]={0};
            for(p=m;p<=i;p++)
                for(q=n;q<=j;q++)
                b[p]=b[p]+a[p][q];
              for(p=m;p<i;p++)
                    if(b[p]+b[p+1]>0)
                    b[p+1]=b[p]+b[p+1];
              else
                b[p+1]=0;
              for(p=m;p<=i;p++)
                if(b[p]>max)
                max=b[p];

            }


    cout<<max<<endl;
    }
    return 0;
}
//TLE
