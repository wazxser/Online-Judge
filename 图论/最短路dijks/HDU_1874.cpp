#include <iostream>
#include <cstdio>
#include <algorithm>
#include <memory.h>
#define INF 0x3f3f3f3f

using namespace std;

int n, m;
int map[220][220];
int s, e;
int a, b, w;
int dis[220];
int visit[220];
int k, temp;

void dijkstra(){
    visit[s] = 1;
    for(int i = 0; i < n; i++){
        dis[i] = map[s][i];
    }

    for(int i = 0; i < n; i++){
        k = INF;
        for(int a = 0; a < n; a++){
            if(!visit[a] && dis[a] < k){
                k = dis[a];
                temp = a;
            }
        }
        visit[temp] = 1;

        for(int b = 0; b < n; b++){
            if(!visit[b] && dis[temp]+map[temp][b] < dis[b]){
                dis[b] = dis[temp]+map[temp][b];
            }
        }
    }
}

int main(){
    while(~scanf("%d%d", &n, &m)){
        memset(visit, 0, sizeof visit);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
			//起始点和终点可能重复
                if(i != j)
                    map[i][j] = INF;
                else
                    map[i][j] = 0;
            }
        }

        for(int i = 0; i < m; i++){
            scanf("%d%d%d", &a, &b, &w);
			//找最小的权值
            if(w < map[a][b])
                map[a][b] = map[b][a] = w;
        }

        scanf("%d%d", &s, &e);
        dijkstra();

        if(dis[e] == INF){
            printf("%d\n", -1);
        }
        else{
            printf("%d\n", dis[e]);
        }
    }

    return 0;
}