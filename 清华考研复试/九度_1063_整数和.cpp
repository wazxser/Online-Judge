#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n;
    while(~scanf("%d", &n)){
        int res = 0;
        if(n >= 0){
            for(int i = n; i <= 2*n; i++){
                res += i;
            }
        }
        else{
            for(int i = 2*n; i <= n; i++){
                res += i;
            }
        }
 
        printf("%d\n", res);
    }
 
    return 0;
}