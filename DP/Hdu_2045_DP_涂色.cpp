#include <cstdio>
typedef long long ll;
ll dp[55];

int main(){
    dp[0] = 0;
    dp[1] = 3;
    dp[2] = 6;
    dp[3] = 6;

    for(int i = 4; i < 55; i++){
        dp[i] = dp[i-1] + 2*dp[i-2];
    }

    int n;
    while(~scanf("%d", &n)){
        printf("%lld\n", dp[n]);
    }

    return 0;
}
