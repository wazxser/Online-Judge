#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int t, n, m;
int a, b, c, d;

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
    while(~scanf("%d", &n)){
        if(n == 0)
            break;
        t = n * (n - 1) / 2;
        for(int i = 1; i <= n; i++){
            vset[i] = i;
        }

        m = 1;
        for(int i = 1; i <= t; i++){
            scanf("%d%d%d%d", &a, &b, &c, &d);
            if(d == 0){
                Node[m].v1 = a;
                Node[m].v2 = b;
                Node[m++].w = c;
            }
            else{
                int p1 = findP(a);
                int p2 = findP(b);
                if(p1 != p2){
                    vset[p2] = p1;
                }
            }
        }

//        cout << vset[1] << endl;
//        cout << vset[2] << endl;
//        cout << vset[3] << endl;

        sort(Node+1, Node+m-1, cmp);

        int sum = 0;
        for(int i = 1; i < m; i++){
            int q1 = findP(Node[i].v1);
            int q2 = findP(Node[i].v2);
//            cout << Node[i].v1 << endl;
//            cout << vset[1] << endl;
//            cout << q1 << " " << q2 << endl;
            if(q1 != q2){
                vset[q2] = q1;
                sum += Node[i].w;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
