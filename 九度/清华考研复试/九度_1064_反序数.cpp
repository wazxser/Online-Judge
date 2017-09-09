#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n, a, b, c, d, res;
    for(int i = 1000; i < 10000; i++){
        a = i / 1000;
        b = i % 1000 / 100;
        c = i % 100 / 10;
        d = i % 10;
        res = d * 1000 + c * 100 + b * 10 + a;
        if(res == 9 * i){
            printf("%d\n", i);
        }
    }
 
    return 0;
}