#include <stdio.h>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int dp[1010][1010], val[1010], vol[1010];

int main(){
    int n;
    scanf("%d", &n);
    for(int k = 0; k < n; k++){
        int num, volume;
        scanf("%d%d", &num, &volume);

        for(int j = 1; j <= num; j++){
            scanf("%d", val+j);
        }

        for(int j = 1; j <= num; j++){
            scanf("%d", vol+j);
        }

        memset(dp, 0, sizeof(dp));

        for(int i = 1; i <= num; i++){
            for(int j = 0; j <= volume; j++){
                if(j >= vol[i]){
                    if(dp[i-1][j] < dp[i-1][j-vol[i]]+val[i])
                        dp[i][j] = dp[i-1][j-vol[i]]+val[i];
                    else
                        dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

//        for(int i = 0; i < num; i++){
//            for(int j = 0; j < volume; j++){
//                cout << dp[i][j] << " ";
//            }
//            cout << endl;
//        }
        printf("%d\n", dp[num][volume]);
    }

    return 0;
}
