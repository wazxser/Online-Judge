#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <climits>
#define N 30000

using namespace std;

long long l1, l2, l3, c1, c2, c3;
long long s, e;

long long getcost(int s, int e, long long len[]){
    if(len[e] - len[s] <= l1)
        return c1;
    else if(len[e] - len[s] <= l2)
        return c2;
    else
        return c3;
}

int main(){
    int num;

    while(~scanf("%ld %ld %ld %ld %ld %ld", &l1, &l2, &l3, &c1, &c2, &c3)){
        scanf("%ld %ld", &s, &e);
        scanf("%d", &num);

        long long len[num+5];
        len[1] = 0;
        for(int i = 2; i <= num; i++){
            scanf("%ld", len+i);
        }
        long long cost[num+5];
        for(int i = 0; i < num+1; i++){
            cost[i] = 0;
        }
        for(int i = s+1; i <= e; i++){
            long long min=LONG_LONG_MAX, temp=0;
            for(int k = i-1; (k >= s) && (len[i] - len[k] <= l3); k--){
                temp = cost[k] + getcost(k, i, len);
                if(temp < min){
                    min = temp;
                }
            }

            cost[i] = min;
        }
        long long res = cost[e];
        printf("%ld\n", res);
    }

    return 0;
}
