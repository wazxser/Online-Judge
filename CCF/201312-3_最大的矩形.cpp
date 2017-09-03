#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cstring>
#include <memory.h>
#define INF 0x3f3f3f3f

using namespace std;

int n;
int num[1010];

int main(){
    while(~scanf("%d", &n)){
        for(int i = 0; i < n; i++){
            scanf("%d", num+i);
        }

        int res = -1, gao, temp, area;

        for(int i = 0; i < n; i++){
            gao = num[i], temp = 1;
            if(gao > res){
                res = gao;
            }

            for(int j = i+1; j < n; j++){
                if(num[j] < gao){
                    gao = num[j];
                }
                temp++;
                area = gao * temp;
                if(area > res){
                    res = area;
                }
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
