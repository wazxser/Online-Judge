#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <string>
#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

int n, q, c;
int t, x1, y1, x2, y2;
int cnt[11][110][110];

int main(){
    while(~scanf("%d%d%d", &n, &q, &c)){
        memset(cnt, 0, sizeof cnt);
        for(int i = 0; i < n; i++){
            int x, y, s;
            scanf("%d%d%d", &x, &y, &s);
            cnt[s][x][y]++;
        }

        for(int i = 0; i <= c; i++){
            for(int a = 1; a < 110; a++){
                for(int b = 1; b < 110; b++){
                    cnt[i][a][b] += cnt[i][a-1][b] + cnt[i][a][b-1] - cnt[i][a-1][b-1];
                }
            }
        }

        for(int i = 0; i < q; i++){
            scanf("%d%d%d%d%d", &t, &x1, &y1, &x2, &y2);
            int res = 0;
            for(int j = 0; j <= c; j++){
                int bright = (j+t) % (c+1);
                int amount = cnt[j][x2][y2] - cnt[j][x1-1][y2] - cnt[j][x2][y1-1] + cnt[j][x1-1][y1-1];
                res += amount*bright;
            }

            printf("%d\n", res);
        }
    }

    return 0;
}
