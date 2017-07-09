#include <iostream>
#include <cstdio>
#include <memory.h>

using namespace std;

int n;
int visit[25];
int num[25];

int check(int num1, int num2){
    int he = num1 + num2;
//    if(he < 2)
//        return 0;
    for(int i = 2; i * i <= he; i++){
        if(he % i == 0)
            return 0;
    }

    return 1;
}

void dfs(int u, int dep){
    if(visit[u])
        return;
    num[dep] = u;
    if(dep == n && check(u, 1)){
        for(int i = 1; i <= n; i++){
            printf("%d", num[i]);
            if(i == n)
                printf("\n");
            else
                printf(" ");
        }
        return;
    }

    visit[u] = 1;
    for(int i = 2; i <= n; i++){
        if(visit[i])
            continue;
        if(check(u, i)){
            dfs(i, dep+1);
        }
    }
    visit[u] = 0;
}

int main(){
    int w = 1;
    while(~scanf("%d", &n)){
        printf("Case %d:\n", w++);
        memset(visit, 0, sizeof(visit));
        dfs(1, 1);
        printf("\n");
    }

    return 0;
}
