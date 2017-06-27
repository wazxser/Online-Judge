#include <iostream>
#include <cstdio>
#include <memory.h>
#include <cstring>
#include <cmath>
typedef long long ll;
using namespace std;

int res[1000001];

int main(){
    int num;
    int cnt;
    while(~scanf("%d", &num)){
        memset(res, 0, sizeof(res));
        res[0] = 1;
        res[1] = 1;

        for(int i = 2; i <= num; i++){
            for(int j = 1; j <= res[0]; j++){
                res[j] *= i;
            }

            for(int j = 1; j <= res[0]; j++){
                if(res[j] >= 10){
                    res[j+1] += res[j] / 10;
                    res[j] %= 10;
                    if(j == res[0])
                        res[0]++;
                }
            }
        }

        for(int i = res[0]; i >= 1; i--)
//            printf("%d", res[i]);
            cout << res[i];
        cout << endl;
    }

    return 0;
}
