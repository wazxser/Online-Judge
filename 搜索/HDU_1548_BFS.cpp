#include <iostream>
#include <cstdio>
#include <memory.h>
#include <cstring>
#include <cmath>
#include <queue>
typedef long long ll;
using namespace std;

struct node{
    int x;
    int step;
} Node;

int n, a, b;
int ki[210], visit[210];
queue<node> q;

bool check(int x){
    if(x < 1 || x > n)
        return true;
    else
        return false;
}

int bfs(){
    node next, p;
    while(!q.empty()){
        p = q.front();
        q.pop();
        if(p.x == b)
            return p.step;
        for(int i = -1; i <= 1; i+=2){
            next = p;
            next.x += i*ki[next.x];
            if(check(next.x) || visit[next.x]){
                continue;
            }
            visit[next.x] = 1;
            next.step++;
            q.push(next);
        }
    }

    return -1;
}

int main(){
    while(~scanf("%d", &n), n){
        scanf("%d%d", &a, &b);
        for(int i = 1; i <= n; i++){
            scanf("%d", ki+i);
        }
        memset(visit, 0, sizeof(visit));
		//清空队列，很重要
        while(!q.empty()){
            q.pop();
        }
        node no;
        no.x = a;
        no.step = 0;
        q.push(no);
        visit[a] = 1;
        printf("%d\n", bfs());
    }
	
    return 0;
}
