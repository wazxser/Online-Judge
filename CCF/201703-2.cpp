#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cstring>
#include <memory.h>
#include <stack>
#define INF 0x3f3f3f3f

using namespace std;

int n, m;
int num[1010];

int main(){
    while(~scanf("%d", &n)){
        for(int i = 1; i <= n; i++){
            num[i] = i;
        }
        scanf("%d", &m);
        int x, y, index;
        for(int i = 0; i < m; i++){
            scanf("%d%d", &x, &y);
            for(int k = 1; k <= n; k++){
                if(num[k] == x){
                   index = k;
                }
            }
            if(y > 0){
                for(int j = 0; j < y; j++){
                    int temp = num[index+j];
                    num[index+j] = num[index+j+1];
                    num[index+j+1] = temp;
                }
            }
            else{
                y = abs(y);
                for(int j = 0; j < y; j++){
                    int temp = num[index-j];
                    num[index-j] = num[index-j-1];
                    num[index-j-1] = temp;
                }
            }
        }

        for(int i = 1; i < n; i++){
            printf("%d ", num[i]);
        }

        printf("%d\n", num[n]);
    }

    return 0;
}
