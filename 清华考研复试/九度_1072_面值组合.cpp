#include <iostream>
#include <cstdio>
#include <memory.h>

using namespace std;

int a[1000];

int main(){
    bool flag = false;
    memset(a, -1, sizeof(a));
    int count = 0, money = 0;
    for(int i = 0; i <= 5; i++){
        for(int j = 0; j <= 4; j++){
            for(int k = 0; k <= 6; k++){
                money = i*8 + j*10 + k*18;
                flag = false;
                for(int d = 0; d < count; d++){
                    if(money == a[d]){
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    a[count++] = money;
                }
            }
        }
    }

    printf("%d", count);

    return 0;
}
