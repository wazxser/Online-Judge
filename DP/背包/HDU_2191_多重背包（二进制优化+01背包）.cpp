#include <iostream>
#include <cstdio>
#include <memory.h>
#include <algorithm>

using namespace std;

int t, n, m;
int w[2010], v[2010];
int dp[1000];
int p, h, c, k;

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &m);
        memset(dp, 0, sizeof dp);
        memset(v, 0, sizeof v);
        memset(w, 0, sizeof w);
        k = 0;
        for(int i = 0; i < m; i++){
            scanf("%d%d%d", &p, &h, &c);
            for(int j = 1; j <= c; j <<= 1){
                v[k] = j * p;
                w[k++] = j * h;
                c -= j;
            }

            if(c > 0){
                v[k] = c * p;
                w[k++] = c * h;
            }
        }

        for(int i = 0; i < k; i++){
            for(int j = n; j >= v[i]; j--){
                dp[j] = max(dp[j], dp[j-v[i]] + w[i]);
            }
        }

        printf("%d\n", dp[n]);

    }

    return 0;
}
