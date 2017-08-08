#include <iostream>
#include <cstdio>
#include <memory.h>
#include <algorithm>
#define INF 0x3f3f3f3f

using namespace std;

int s, t, d;
int a, b, w, k, temp;
int visit[1010];
int map[1010][1010];
int si[1010];
int di[1010];
int dis[1010];

void dijkstra(int s){
    memset(visit, 0, sizeof visit);
    visit[s] = 1;
    for(int i = 1; i <= 1000; i++){
        dis[i] = map[s][i];
    }

    for(int i = 1; i <= 1000; i++){
        k = INF;
        for(int a = 1; a <= 1000; a++){
            if(!visit[a] && dis[a] < k){
                k = dis[a];
                temp = a;
            }
        }
        visit[temp] = 1;

        for(int b = 1; b <= 1000; b++){
            if(!visit[b] && dis[temp]+map[temp][b] < dis[b]){
                dis[b] = dis[temp]+map[temp][b];
            }
        }
    }
}

int main(){
    while(~scanf("%d%d%d", &t, &s, &d)){
        for(int i = 1; i <= 1010; i++){
            for(int j = 1; j <= 1010; j++){
                if(i == j){
                    map[i][j] = 0;
                }
                else{
                    map[i][j] = INF;
                }
            }
        }

        for(int i = 0; i < t; i++){
            scanf("%d%d%d", &a, &b, &w);
            if(w < map[a][b]){
                map[a][b] = map[b][a] = w;
            }
        }

        for(int i = 0; i < s; i++){
            scanf("%d", si+i);
        }

        for(int j = 0; j < d; j++){
            scanf("%d", di+j);
        }

        int lit = INF, q;
        for(int i = 0; i < s; i++){
            dijkstra(si[i]);
            for(int j = 0; j < d; j++){
                q = dis[di[j]];
                if(q < lit){
                    lit = q;
                }
            }
        }
        printf("%d\n", lit);
    }

    return 0;
}

