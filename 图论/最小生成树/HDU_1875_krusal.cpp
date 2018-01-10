#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int t, n, m;
int biao[110][2];
int a, b, c, x, y;

struct node{
    int v1;
    int v2;
    double w;
}Node[10010];

int vset[110];

bool cmp(node no1, node no2){
    if(no1.w < no2.w){
        return true;
    }
    else{
        return false;
    }
}

int findP(int i){
    while(i != vset[i]){
        i = vset[i];
    }

    return i;
}

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            vset[i] = i;
        }

        for(int i = 0; i < n; i++){
            scanf("%d%d", &biao[i][0], &biao[i][1]);
        }

        a = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                b = biao[i][0] - biao[j][0];
                c = biao[i][1] - biao[j][1];
                double bian = sqrt(b * b + c * c);
                if(bian >= 10 && bian <= 1000){
                    Node[a].v1 = i;
                    Node[a].v2 = j;
                    Node[a++].w = bian;
                }
            }
        }

        sort(Node, Node+a, cmp);

        int p1, p2;
        double sum = 0;
        for(int i = 0; i < a; i++){
            p1 = findP(Node[i].v1);
            p2 = findP(Node[i].v2);

            if(p1 != p2){
                vset[p2] = p1;
                sum += Node[i].w;
            }
        }

        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(vset[i] == i)cnt++;
        }

        if(cnt <= 1){
            printf("%.1lf\n", sum*100);
        }
        else{
            printf("oh!\n");
        }
    }
	
    return 0;
}
