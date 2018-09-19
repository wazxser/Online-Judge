#include <iostream>
#include <cstdio>
#include <queue>
#include <cmath>
#include <memory.h>

using namespace std;

int n, m, t;
char maze[10][10];
int visit[10][10];
bool flag;
int s1, s2, e1, e2;
int cx[4] = {1, 0, -1, 0};
int cy[4] = {0, 1, 0, -1};

int check(int x, int y){
    if(x > n || x < 1 || y > m || y < 1 || maze[x][y] == 'X')
        return 0;
    return 1;
}

void dfs(int x, int y, int s){
    if(maze[x][y] == 'X')
        return;
    if(maze[x][y] == 'D'){
        if(s == t)
            flag = true;
        return;
    }

    for(int i = 0; i < 4; i++){
        int xi = x + cx[i];
        int yi = y + cy[i];

        if(check(xi, yi) && !visit[xi][yi]){
            visit[xi][yi] = 1;
            dfs(xi, yi, s+1);
            visit[xi][yi] = 0;
        }
        if(flag)
            return;
    }
}

int main(){
    char ch;
    while(~scanf("%d%d%d", &n, &m, &t)){
        if(n==0 && m==0 && t==0)
            break;
        scanf("%c", &ch);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
//                scanf("%c", &ch);
                scanf("%c", &ch);
                maze[i][j] = ch;
                if(ch == 'S'){
                    s1 = i;
                    s2 = j;
                }

                if(ch == 'D'){
                    e1 = i;
                    e2 = j;
                }
            }
            scanf("%c", &ch);
        }

        if((abs(s1-e1) + abs(s2-e2) > t) || (s1+s2+e1+e2+t) % 2 == 1){
            printf("NO\n");
        }
        else{
            memset(visit, 0, sizeof(visit));
            flag = false;
            visit[s1][s2] = 1;
            dfs(s1, s2, 0);

            if(flag)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}
