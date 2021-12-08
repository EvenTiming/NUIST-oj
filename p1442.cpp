#include<iostream>
using namespace std;
int main()
{
	int n;
		while(cin>>n)
		{
			int i,j,k,flag;
			int a[100];int b[100]={0};
		for(i=0;i<n;i++)
			cin>>a[i];
		j=0;
		for(i=0;i<n;i++)
		{
		 flag=1;
		for(k=0;k<j;k++)
		if(a[i]==b[k])
		{flag=0;break;}
		if(flag)
		b[j++]=a[i];
		}
		cout<<j<<endl;
		int t;

		 for(i=0;i<j-1;i++)
			{
				for(k=0;k<j-1;k++)
				if(b[k]>b[k+1])
   {
	   t=b[k+1];
	   b[k+1]=b[k];
	   b[k]=t;

   }
             }


		for(i=0;i<j;i++)
			cout<<b[i]<<' ';
		cout<<endl;

		}
		return 0;
}
