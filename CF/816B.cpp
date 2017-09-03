#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <string>
#include <stdio.h>
#include <queue>
#include <vector>
#define INF 510

using namespace std;

int n, k, q;
int a, b;
int m[200010];
int satis[200010];
int res;

int main(){
    while(~scanf("%d%d%d", &n, &k, &q)){
        memset(m, 0, sizeof m);
        memset(satis, 0, sizeof satis);
        for(int i = 0; i < n; i++){
            scanf("%d%d", &a, &b);
            m[a]++;
            m[b+1]--;
        }

        for(int i = 1; i < 200010; i++){
            m[i] += m[i-1];
            if(m[i] >= k){
                satis[i]++;
            }
        }


        for(int i = 1; i < 200010; i++){
            satis[i] += satis[i-1];
        }

        for(int i = 0; i < q; i++){
            scanf("%d%d", &a, &b);
            printf("%d\n", satis[b] - satis[a-1]);
        }
    }

    return 0;
}
