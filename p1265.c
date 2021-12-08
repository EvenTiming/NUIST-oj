#include<stdio.h>
#include<math.h>

int main()
{
  int t,i,p=0;
  float s=0;
  scanf("%d",&t);
  while(t--)
  {
      int n;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      s+=log10(i*1.0);
      p=floor(s)+1;
      printf("%d\n",p);
      s=0;
  }
  return 0;
}
