#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

//克鲁斯卡尔+并查集

struct edge{
    int v1;
    int v2;
    int w;
}Edge[55000];

//表示连通性的数组，数组索引和数组元素相连，初始化为自己与自己相连
int vset[55000];

//bool cmp(edge ed1, edge ed2){
//    return ed1.w < ed2.w;
//}

bool operator <(const edge &e1, const edge &e2){
    return e1.w < e2.w;
}


int getparent(int ch){
    if(vset[ch] != ch)
        vset[ch] = getparent(vset[ch]);
    return vset[ch];
}

void krusal(edge Edge[], int m, int e){
    int sum = 0, p1, p2;
    for(int i = 0; i < m; i++){
        p1 = getparent(Edge[i].v1);
        p2 = getparent(Edge[i].v2);
        if(p1 != p2){
            sum += Edge[i].w;
            vset[p2] = p1;
            e--;
        }
    }

    if(!e){
        printf("%d\n", sum);
    }
    else{
        printf("-1\n");
    }
}

int num;
int n, m, k, p, q, c, e;
int t, a, b, p1, p2;

int main(){
    scanf("%d", &num);
    while(num--){
        scanf("%d %d %d", &n, &m, &k);
        e = n - 1;
        for(int i = 1; i <= n; i++){
            vset[i] = i;
        }
        for(int i = 0; i < m; i++){
            scanf("%d %d %d", &p, &q, &c);
            Edge[i].v1 = p;
            Edge[i].v2 = q;
            Edge[i].w = c;
        }

        for(int i = 0; i < k; i++){
            scanf("%d", &t);
            scanf("%d", &a);
            p1 = getparent(a);
            while(--t){
                scanf("%d", &b);
                p2 = getparent(b);
                if(p1 == p2)
                    continue;
                vset[p2] = p1;
                e--;
            }
        }

        sort(Edge, Edge+m);
        krusal(Edge, m, e);
    }

    return 0;
}
