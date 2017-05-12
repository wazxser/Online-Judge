#include <cstdio>

using namespace std;

int dp[121][121];

int main() {
    dp[0][0] = 1;
    dp[1][1] = 1;

    for(int i = 2; i <= 121; i++){
        for(int j = 1; j <= i; j++){
            if(i - j > j){
                dp[i][j] = dp[i][j-1] + dp[i-j][j];
            }
            else{
                dp[i][j] = dp[i][j-1] + dp[i-j][i-j];
            }
        }
    }

    int n;
    while(~scanf("%d", &n)){
        printf("%d\n", dp[n][n]);
    }

    return 0;
}
