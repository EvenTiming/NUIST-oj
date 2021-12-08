#include <stdio.h>
#include <string.h>
typedef struct{
	int mat[15][15];
}MOD;
int n;

MOD mul(MOD a,MOD b,int p)
{
	int i,j,k;
	MOD c;
	memset(c.mat,0,sizeof(c.mat));

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				c.mat[i][j]=(c.mat[i][j]+a.mat[i][k]*b.mat[k][j])%p;
			}
		}
	}

	return c;

}

MOD PowerMod(MOD a,int b,int p)
{
	MOD c;
	int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			c.mat[i][j]= (i==j);

	while(b>0)
	{
		if(b%2)
			c=mul(c,a,p);
		b/=2;
		a=mul(a,a,p);
	}
	return c;
}

int main()
{
	int T;
	int k,i,j;
	int sum;
	MOD c;
	scanf("%d",&T);
	while(T--)
	{
		sum=0;
		scanf("%d %d",&n,&k);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				scanf("%d",c.mat[i]+j);
		}
		c=PowerMod(c,k,9973);

		for(i=1;i<=n;i++)
			sum=(sum+c.mat[i][i])%9973;
		printf("%d\n",sum);
	}

	return 0;
}
