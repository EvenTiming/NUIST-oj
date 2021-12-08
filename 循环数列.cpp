#include<bits/stdc++.h>

using namespace std;
const int N = 3e4 + 10;
int n;
int dp[N];

int main() {
    while (scanf("%d", &n), n) {
        for (int i = 1; i <= n; i++)dp[i] = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            scanf("%d", &x);
            dp[x] = dp[(n + x - 2) % n + 1] + 1;
        }
        printf("%d\n", n - *max_element(dp + 1, dp + 1 + n));
    }
    return 0;
}
