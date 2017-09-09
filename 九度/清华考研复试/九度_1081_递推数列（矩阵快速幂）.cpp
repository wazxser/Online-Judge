#include <iostream>
#include <cstdio>
#include <algorithm>
#include <memory.h>
#include <queue>
#include <string>

using namespace std;

long long a0, a1, p, q, k;

struct node{
    long long mat[2][2];
}origin, res;

node multiply(node no1, node no2){
    node temp;
    memset(temp.mat, 0, sizeof temp.mat);
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                temp.mat[i][j] += (no1.mat[i][k]*no2.mat[k][j])%10000;
            }
        }
    }

    return temp;
}

int main(){
    while(~scanf("%lld %lld %lld %lld %lld", &a0, &a1, &p, &q, &k)){
        if(k == 0){
            printf("%d\n", a0);
        }
        else if(k == 1){
            printf("%d\n", a1);
        }
        else{
            origin.mat[0][0] = p % 10000;
            origin.mat[0][1] = q % 10000;
            origin.mat[1][0] = 1;
            origin.mat[1][1] = 0;

            res.mat[0][0] = 1;
            res.mat[0][1] = 0;
            res.mat[1][0] = 0;
            res.mat[1][1] = 1;

            int n = k-1;
            while(n != 0){
                if(n&1 != 0){
                    res = multiply(res, origin);
                }
                origin = multiply(origin, origin);
                n >>= 1;
            }

            long long output = res.mat[0][0]*a1 + res.mat[0][1]*a0;

            printf("%lld\n", output%10000);
        }
    }

    return 0;
}
