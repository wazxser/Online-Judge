#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int road[1010];
int n, m, x, y, cnt;

int findr(int r){
    int x = r;
    while(road[x] != x)
        x = road[x];
    return x;
}

void merge(int x, int y){
    int fx, fy;
    fx = findr(x);
    fy = findr(y);
    if(fx != fy)
        road[fx] = fy;
}

int main(){
    while(scanf("%d", &n), n){
        cnt = 0;
        for(int i = 1; i <= n; i++){
            road[i] = i;
        }

        scanf("%d", &m);
        for(int i = 0; i < m; i++){
            scanf("%d %d", &x, &y);
            merge(x, y);
        }

        for(int i = 1; i <= n; i++){
            if(road[i] == i)
                cnt++;
        }

        printf("%d\n", cnt-1);
    }
	
    return 0;
}
