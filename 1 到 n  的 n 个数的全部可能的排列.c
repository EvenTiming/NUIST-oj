#include<stdio.h>
#include<math.h>//后面要调用开方的数学公式
int main()
{
    int i,j,k=1,count=0;//这里定义循环时用到的i，j变量，和计数使用的count变量，还有一个k变量的值作为是否计数
    for(i=100;i<=200;i++)//第一层循环
      {
            for(j=2;j<=sqrt(i);j++)//第二层循环，从2开始一直到i的平方根
        {
            if(i%j==0)//如果为真，说明有其他因子，把k的值变为0
                {
                    k=0;
                    break;//跳出循环，不用再判断后面是否有因子，节省时间
                }
        }
        if(k)//判断k是否为1
        count++;
        k=1;//最后要把k的值重新赋为1
      }
      printf("%d",count);//输出个数
      return 0;
}
