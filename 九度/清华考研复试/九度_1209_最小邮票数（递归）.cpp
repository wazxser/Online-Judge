#include <iostream>
#include <cstdio>
#include <algorithm>
#include <memory.h>
#include <queue>
#include <string>

using namespace std;

int m, n;
int num[110];
int minStep;

void pick(int sum, int n, int step){
    if(sum == m){
        if(step < minStep){
            minStep = step;
        }

        return;
    }
    if(sum > m || n == 0){
        return;
    }

    pick(sum+num[n-1], n-1, step+1);
    pick(sum, n-1, step);
}

int main(){
    while(~scanf("%d%d", &m, &n)){
        for(int i = 0; i < n; i++){
            scanf("%d", num+i);
        }
        minStep = m+1;
        pick(0, n, 0);
        if(minStep == m+1){
            printf("0\n");
        }
        else{
            printf("%d\n", minStep);
        }
    }

    return 0;
}
