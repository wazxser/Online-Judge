#include <iostream>
#include <cstdio>
#include <memory.h>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

int n, m;
//���ȶ��У�����д����ʾС���ѣ���С��Ԫ������ߵ����ȼ�
priority_queue<int, vector<int>, greater<int> > q;
int p1, p2;
int map[510][510];
//��ÿ��������
int in[510];

int main(){
    while(~scanf("%d%d", &n, &m)){
        memset(in, 0, sizeof in);
        memset(map, 0, sizeof map);

        for(int i = 0; i < m; i++){
            scanf("%d%d", &p1, &p2);
            //���رߣ��������ݵĹ�
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
