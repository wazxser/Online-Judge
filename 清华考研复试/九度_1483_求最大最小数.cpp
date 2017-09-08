#include <iostream>
#include <cstdio>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n;
    int num[10010];
    while(~scanf("%d", &n)){
        for(int i = 0; i < n; i++){
            scanf("%d", num+i);
        }
 
        sort(num, num+n);
        printf("%d %d\n", num[n-1], num[0]);
    }
 
    return 0;
}