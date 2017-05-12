#include <cstdio>

#define MAX 25

typedef long long ll;

ll dp[MAX];

int main(){
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;

    for(int i = 3; i < MAX; i++){
        dp[i] = dp[i-1] * (i-1);
    }

    int n;
    while(~scanf("%d", &n)){
        printf("%lld\n", dp[n]);
    }

    return 0;
}
