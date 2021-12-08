#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,a[10001],max=0,sum=0,summ=0;
	int i;
	while(cin>>n)
	{
		for(i=1;i<=n;i++)
			cin>>a[i];
		for(i=1;i<=n;i++)
			if(a[i]>max)
				max=a[i];
		for(i=1;i<=n;i++)
		{
			if(a[i]!=max)
				sum+=a[i];
			summ+=a[i];
		}
		if(sum<max)
			cout<<fixed<<setprecision(1)<<sum;
		else
			cout<<fixed<<setprecision(1)<<summ/2;
		cout<<endl;
		max=sum=summ=0;
	}
	return 0;
}
