#include <iostream>
#include <cstdio>
#include <memory.h>

using namespace std;

long long c[100010];
long long b[100010];

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d%d", &n, &m);
        for(int i = 0; i < n; i++){
            scanf("%d", c+i);
        }
        long long x, y;
        memset(b, 0, sizeof b);
        while(m--){
            scanf("%I64d%I64d", &x, &y);
            b[x-1] += y;
        }

        for(int i = 0; i < n; i++){
            if(b[i] > c[i]){
                b[i+1] += (b[i] - c[i]);
                b[i] = c[i];
            }
        }

        printf("%I64d\n", b[n]);
        for(int i = 0; i < n; i++){
            if(i < n-1){
                printf("%I64d ", b[i]);
            }
            else{
                printf("%I64d\n", b[i]);
            }
        }
    }

    return 0;
}
