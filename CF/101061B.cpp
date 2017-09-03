#include <iostream>
#include <cstdio>
#include <algorithm>
#include <memory.h>

using namespace std;

long long q;

struct node{
    long long mat[3][3];
}origin, res;

node multiply(node no1, node no2){
    node temp;
    memset(temp.mat, 0, sizeof temp.mat);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3 ; k++){
                temp.mat[i][j] += (no1.mat[i][k]*no2.mat[k][j])%1000000007;
            }
        }
    }

    return temp;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        long long output = 0;

        origin.mat[0][0] = 1;
        origin.mat[0][1] = 4;
        origin.mat[0][2] = 7;
        origin.mat[1][0] = 2;
        origin.mat[1][1] = 5;
        origin.mat[1][2] = 8;
        origin.mat[2][0] = 3;
        origin.mat[2][1] = 6;
        origin.mat[2][2] = 9;


        res.mat[0][0] = 1;
        res.mat[0][1] = 0;
        res.mat[0][2] = 0;
        res.mat[1][0] = 0;
        res.mat[1][1] = 1;
        res.mat[1][2] = 0;
        res.mat[2][0] = 0;
        res.mat[2][1] = 0;
        res.mat[2][2] = 1;

        int n2 = n-1;
        while(n2 != 0){
            if(n2&1 != 0){
                res = multiply(res, origin);
            }
            origin = multiply(origin, origin);
            n2 >>= 1;
        }

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                output += (res.mat[i][j]) % 10000000007;
            }
        }

        printf("%ld\n", output%1000000007);
    }

    return 0;
}
