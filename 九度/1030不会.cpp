#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <string>
#include <stdio.h>

using namespace std;

int n;
int h[50], l[50], t[50];
int dp[110];

struct node{
    int h;
    int l;
    int t;
}Node[35];

bool cmp(node no1, node no2){
    if(no1.t < no2.t){
        return true;
    }

    return false;
}

int main(){
    while(~scanf("%d", &n)){
        if(n < 0){
            break;
        }
        memset(dp, 0, sizeof dp);
        int m = 0;
        for(int i = 0; i < n; i++){
            scanf("%d%d%d", &Node[i].h, &Node[i].l, &Node[i].t);
            m = max(m, Node[i].t);
        }
        sort(Node, Node+n, cmp);

        int res = 0;
        for(int i = 0; i < n; i++){
            for(int j = m; j >= Node[i].l; j--){
                if(j <= Node[i].t){
                    dp[j] = max(dp[j], dp[j-Node[i].l]+Node[i].h);
                    res = max(res, dp[j]);
                }
            }
        }
        printf("%d\n", res);
    }
    return 0;
}
