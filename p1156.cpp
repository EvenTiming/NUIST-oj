#include <iostream>
#include <cstdio>
#include <cstring>


using namespace std;

const int N = 11;

int n;

struct Mat {
   int  mat[N][N];
};


Mat operator * (Mat a, Mat b) {
    Mat c;
    memset(c.mat, 0, sizeof(c.mat));
    int i, j, k;
    for(i = 0; i < n; ++i) {
        for(j = 0; j < n; ++j) {
            for(k = 0; k < n; ++k) {
                c.mat[i][j] += a.mat[i][k] * b.mat[k][j];
            }

            c.mat[i][j] %= 9973;
        }
    }
    return c;
}



Mat operator ^ (Mat a, int k) {
    Mat c;
    int i, j;
    for(i = 0; i < n; ++i){
        for(j = 0; j < n; ++j){
            c.mat[i][j] = (i == j);
        }
    }


    for(; k; k >>= 1) {
        if(k&1){
        	c = c*a;
        }
        a = a*a;
    }
    return c;
}



int getTr(Mat a,int n){
	int i;
	int sum = 0;
	for(i = 0 ; i < n ; ++i){
		sum += a.mat[i][i];
		sum %= 9973;
	}

	return sum;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int k;
		scanf("%d%d",&n,&k);

		Mat m;

		int i;
		int j;
		for(i = 0 ; i < n ; ++i){
			for(j = 0 ; j  < n ; ++j){
				scanf("%d",&m.mat[i][j]);
			}
		}

		m = m^k;
		printf("%d\n",getTr(m,n));
	}

	return 0;
}
