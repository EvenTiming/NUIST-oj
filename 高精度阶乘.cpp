#include<stdio.h>
#include<string.h>
#define N 3000
int f[N];//����׳˵�λ��
int main()
{
    int n,i,j,c;
    while(~scanf("%d",&n))
    {
        memset(f,0,sizeof(f));
        f[0]=1;  //f[0] �����ʼΪ1
        for(i=2;i<=n;i++)
        {
            c=0; //��λ
            for(j=0;j<N;j++)
            {
                f[j]=f[j]*i+c;
                c=f[j]/10;
                f[j]=f[j]%10;
            }
        }
        for(i=N-1;i>=0;i--) if(f[i]) break; //����ǰ��0
        for(j=i;j>=0;j--) printf("%d",f[j]);
        printf("\n");
    }
    return 0;
}
