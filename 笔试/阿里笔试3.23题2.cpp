#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

/*
阿里3.23笔试题2：
从开始点S到E的最短路径
可以上下左右走，也可以对称跳跃，规则：x1+x2 = n+1, y1+y2 = m+1，跳跃只能5次
#代表障碍

输入：
4 4
#S..
E#..
#...
....

输出：
4
*/

struct node{
    int x;
    int y;
    int step;
    int cnt;
};

int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int sx, sy;
int ex, ey;
char arr[510][510];
int visit[510][510];
int n, m;

bool check(int x, int y){
    if(x >= 1 && x <= n && y >= 1 && y <= m){
        return true;
    }
    else{
        return false;
    }
}

int bfs(){
    queue<node> q;
    node st;
    st.x = sx;
    st.y = sy;
    st.step = 0;
    st.cnt = 5;
    visit[sx][sy] = 1;
    q.push(st);

    while(!q.empty()){
        node now = q.front();
        if(now.x == ex && now.y == ey){
            return now.step;
        }
        q.pop();
        node next;
        for(int i = 0; i < 4; i++){
            next.x = now.x + dir[i][0];
            next.y = now.y + dir[i][1];
            next.step = now.step + 1;
            next.cnt = now.cnt;

            if(check(next.x, next.y) && !visit[next.x][next.y] &&
               (arr[next.x][next.y] == '.' || arr[next.x][next.y] == 'E')){
                visit[next.x][next.y] = 1;
                q.push(next);
            }
        }

        if(now.cnt >= 1){
            next.x = n + 1 - now.x;
            next.y = m + 1 - now.y;
            next.step = now.step + 1;
            next.cnt = now.cnt - 1;

            if(check(next.x, next.y) && !visit[next.x][next.y] &&
               (arr[next.x][next.y] == '.' || arr[next.x][next.y] == 'E')){
                    visit[next.x][next.y] = 1;
                    q.push(next);
           }
        }
    }

    return -1;
}


int main(){
    cin >> n >> m;
    char temp;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> temp;
            if(temp == 'S'){
                sx = i;
                sy = j;
            }
            if(temp == 'E'){
                ex = i;
                ey = j;
            }

            arr[i][j] = temp;
        }
    }

    cout << bfs() << endl;

    return 0;
}
