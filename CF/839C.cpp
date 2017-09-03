#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <string>
#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

int n;
vector<int> m[100010];
int visit[100010];
double res;

void dfs(int v, double f){
    visit[v] = 1;
    int s = m[v].size();
    int ms = s;
    if(v != 1)
        ms--;
    if(ms == 0)
        return;

    double temp = f * (1.0/ms);
    for(int i = 0; i < s; i++){
        if(visit[m[v][i]])
            continue;
        res += temp;
        dfs(m[v][i], temp);
    }

    return;
}

int main(){
    while(~scanf("%d", &n)){
        memset(visit, 0, sizeof visit);
        for(int i = 0; i < n-1; i++){
            int a, b;
            scanf("%d%d", &a, &b);
            m[a].push_back(b);
            m[b].push_back(a);
        }
        res = 0;
        dfs(1, 1.0);

        printf("%.15lf\n", res);
    }

    return 0;
}
