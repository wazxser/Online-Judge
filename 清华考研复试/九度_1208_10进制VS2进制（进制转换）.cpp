#include <iostream>
#include <cstdio>
#include <algorithm>
#include <memory.h>
#include <queue>
#include <string>
#include <cmath>
#define INF 0x3f3f3f3f

using namespace std;

char N[1010];
int data[1010];
int binary[1000010];
int res[1010];
int res2[1010];

int main(){
    while(~scanf("%s", N)){
        int len = strlen(N);
        for(int i = 0; i < len; i++){
            data[i] = N[i]-'0';
        }

        int sum = 1;
        int yu;
        int k = 0;
        while(sum > 0){
            sum = 0;
            for(int i = 0; i < len; i++){
                int d = data[i] / 2;
                int temp = data[i] % 2;
                sum += d;
                if(i < len - 1){
                    data[i+1] += temp*10;
                }
                else{
                    yu = temp;
                }
                data[i] = d;
            }

            binary[k++] = yu;
        }

        sum = 1;
        yu = 0;
        int p = 0;
        while(sum > 0){
            sum = 0;
            for(int i = 0; i < k; i++){
                int d = binary[i] / 10;
                int temp = binary[i] % 10;
                sum += d;
                if(i < k - 1){
                    binary[i+1] += temp*2;
                }
                else{
                    yu = temp;
                }
                binary[i] = d;
            }

            res2[p++] = yu;
        }

        for(int i = p-1; i >= 0; i--){
            printf("%d", res2[i]);
        }

        printf("\n");
    }

    return 0;
}
