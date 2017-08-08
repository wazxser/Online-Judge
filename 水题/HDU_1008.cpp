#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int n, m, res, k;
char str[110];
int num[110];

int main(){
    while(~scanf("%d", &n)){
        if(n == 0){
            break;
        }
        res = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", num+i);
            if(i == 0){
                res += num[0] * 6;
            }
            if(i > 0){
                if(num[i] - num[i-1] > 0){
                    res += (num[i] - num[i-1]) * 6;
                }
                else if(num[i] - num[i-1] < 0){
                    res += (num[i-1] - num[i]) * 4;
                }
            }
        }

        printf("%d\n", res + n * 5);
    }

    return 0;
}
