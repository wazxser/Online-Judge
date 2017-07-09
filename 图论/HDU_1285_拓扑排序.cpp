#include <iostream>
#include <cstdio>
#include <memory.h>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

int n, m;
//优先队列，这种写法表示小根堆，最小的元素有最高的优先级
priority_queue<int, vector<int>, greater<int> > q;
int p1, p2;
int map[510][510];
//存每个点的入度
int in[510];

int main(){
    while(~scanf("%d%d", &n, &m)){
        memset(in, 0, sizeof in);
        memset(map, 0, sizeof map);

        for(int i = 0; i < m; i++){
            scanf("%d%d", &p1, &p2);
            //有重边，输入数据的锅
            if(!map[p1][p2]){
                map[p1][p2] = 1;
                in[p2]++;
            }
        }

        for(int i = 1; i <= n; i++){
            if(!in[i]){
                q.push(i);
            }
        }

        int k = 1;
        while(!q.empty()){
            int v = q.top();
            q.pop();
            if(k < n){
                printf("%d ", v);
                k++;
            }
            else{
                printf("%d\n", v);
            }

            for(int i = 1; i <= n; i++){
                if(map[v][i]){
                    in[i]--;
                    if(!in[i])
                        q.push(i);
                }
            }
        }
    }

    return 0;
}
