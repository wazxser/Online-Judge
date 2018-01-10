#include <iostream>
#include <cstdio>
#include <queue>
#include <memory.h>

using namespace std;

int num[210];
int visit[210];
int n, a, b;
struct node{
    int no;
    int step;
}Node[210];

queue<node> q;

int check(int x){
    if(x >= 1 && x <= n){
        return 1;
    }
    else{
        return 0;
    }
}

int bfs(){
    while(!q.empty()){
        node no2;
        no2 = q.front();
        q.pop();

        if(no2.no == b){
            return no2.step;
        }

        for(int i = -1; i <= 1; i += 2){
            int temp = no2.no + i*num[no2.no-1];
            if(check(temp) && !visit[temp]){
                node no3;
                no3.no = temp;
                no3.step = no2.step+1;
                visit[temp] = 1;
                q.push(no3);
            }
        }
    }

    return -1;
}

int main(){
    while(~scanf("%d", &n)){
        if(n == 0){
            break;
        }

        scanf("%d%d", &a, &b);
        for(int i = 0; i < n; i++){
            scanf("%d", num+i);
        }

        while(!q.empty()){
            q.pop();
        }
        memset(visit, 0, sizeof visit);

        node no;
        no.no = a;
        no.step = 0;
        q.push(no);
        visit[a] = 1;

        printf("%d\n", bfs());
    }

    return 0;
}
