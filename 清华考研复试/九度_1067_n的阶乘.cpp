#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main(){
    int n;
    long long res;
    while(~scanf("%d", &n)){
        res = 1;
        for(int i = 1; i <= n; i++){
            res = res * i;
        }
 
        printf("%lld\n", res);
    }
 
    return 0;
}