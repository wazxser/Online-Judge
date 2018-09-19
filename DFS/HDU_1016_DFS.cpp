#include <iostream>
#include <cstdio>
#include <memory.h>

using namespace std;

int n;
int visit[25];
int num[25];

int check(int num1, int num2){
    int he = num1 + num2;
    for(int i = 2; i*i <= he; i++){
        if(he % i == 0)
            return 0;
    }

    return 1;
}

void dfs(int x, int dep){
    if(visit[x]){
        return;
    }

    num[dep] = x;
    if(dep == n-1){
        if(check(x, 1)){
            for(int i = 0; i < n; i++){
                if(i < n-1){
                    printf("%d ", num[i]);
                }
                else{
                    printf("%d\n", num[i]);
                }
            }
            return;
        }
    }

    visit[x] = 1;
    for(int i = 1; i <= n; i++){
        if(check(x, i) && !visit[i]){
            dfs(i, dep+1);
        }
    }

    visit[x] = 0;
}

int main(){
    int ca = 1;
    while(~scanf("%d", &n)){
        printf("Case %d:\n", ca++);
        memset(visit, 0, sizeof visit);
        dfs(1, 0);
        printf("\n");
    }

    return 0;
}
