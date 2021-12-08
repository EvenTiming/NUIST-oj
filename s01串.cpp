#include <stdio.h>
int N, a[22], T, num=0, b[22];

void print(int y)
{
    int i;
    for(i=y; i>=0; i--){
        printf("%d ", b[i]);
    }
    printf("\n");

}

void f(int x, int y,int sum)
{
    if(x < 0)
	{
        return;
    }
    f(x-1, y, sum);
    b[y] = a[x], sum += a[x];
    if(sum == T)
	{
        num ++;
        print(y);
    }
    f(x-1, y+1, sum);
}

int main()
{
    int i;
    scanf("%d", &N);
    for(i=0; i<N; i++)
        scanf("%d", &a[i]);
    while(scanf("%d", &T)!=EOF){
    f(N-1, 0, 0);
    printf("%d\n", num);
    }
    return 0;
}

