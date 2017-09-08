#include <iostream>
#include <cstdio>
#include <algorithm>
#include <memory.h>
#include <queue>

using namespace std;

priority_queue<pair<int, int> > pq;
int ans[300010];
long long res = 0;

int main(){
    int n, k;
    while(~scanf("%d%d", &n, &k)){
        res = 0;
        for(int i = 1; i <= n+k; i++){
            if(i <= n){
                int cost;
                scanf("%d", &cost);
                pq.push({cost, i});
            }

            if(i > k){
                ans[pq.top().second] = i;
                res += (long long)(i-pq.top().second) * pq.top().first;
                pq.pop();
            }
        }

        printf("%I64d\n", res);
        for(int i = 1; i <= n; i++){
            if(i < n){
                printf("%d ", ans[i]);
            }
            else{
                printf("%d\n", ans[i]);
            }
        }
    }

    return 0;
}
