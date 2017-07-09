#include <cstdio>

//题意：将n封信全部装错信封的可能方式
//递推，n-1封信全部装错，到第n封信时，应该有dp[i-1] * (i-1)

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
