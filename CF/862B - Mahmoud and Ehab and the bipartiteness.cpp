#include <iostream>
#include <cstdio>
#include <vector>
#include <memory.h>

using namespace std;

vector<int> v[100010];
long long num0;
long long num1;
int vis[100010];

void dfs(int x, int step){
    for(int i = 0; i < v[x].size(); i++){
        if(!vis[v[x][i]]){
            vis[v[x][i]] = 1;
            if(step%2 == 1){
                num0++;
            }
            else{
                num1++;
            }
            dfs(v[x][i], step+1);
        }
    }
}

int main(){
    int n, a, b;
    while(~scanf("%d", &n)){
        for(int i = 0; i < n-1; i++){
            scanf("%d%d", &a, &b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        memset(vis, 0, sizeof vis);
        num0 = 1;
        num1 = 0;
        vis[1] = 1;
        dfs(1, 0);
//        cout << num1 << endl;
//        cout << num0 << endl;
        printf("%I64d\n", num1*num0 - (n-1));
    }

    return 0;
}
