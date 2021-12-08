#include<stdio.h>
int main(){
	int a[500]={0};
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		a[i]=1;
	}
	int count1=2,count2=0,n=0;
	while(count2<500){
		a[n]=0;
		if((n+count1)<t)
		n+=count1;
		else if((n+count1)>=t)
            {
			n=(n+count1)%t;
		    }
		count1+=1;
		count2+=1;
	}
	for(int i=0;i<t;i++){
		if(a[i]==1) printf("可能在第%d个洞\n",i+1);
	}
	return 0;
}
