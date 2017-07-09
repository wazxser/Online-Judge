#include <cstdio>

using namespace std;

//题意：将整数拆分为其他整数相加的形式
//例如：4=4, 4=3+1, 4=2+1+1, 4=2+2, 4=1+1+1+1
//动态规划：理解一下递推的思想
//递推之前给定初始化的值
//将所有结果都先计算出来存储在数组中，输出时直接取对应结果

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
