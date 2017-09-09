#include <iostream>
#include <cstdio>
#include <algorithm>
#include <memory.h>
#include <queue>
#include <string>
#define INF 0x3f3f3f3f

using namespace std;

int m, n;
int num[110];
int minStep;
int dp[110];

int main(){
    while(~scanf("%d%d", &m, &n)){
        for(int i = 0; i < n; i++){
            scanf("%d", num+i);
        }

        for(int i = 0; i <= m; i++){
            dp[i] = INF;
        }
        dp[0] = 0;
        for(int i = 0; i < n; i++){
            for(int j = m; j >= num[i]; j--){
                if(dp[j-num[i]] != INF){
                    dp[j] = min(dp[j], dp[j-num[i]]+1);
                }
            }
        }

        printf("%d\n", dp[m] == INF ? 0 : dp[m]);
    }

    return 0;
}
