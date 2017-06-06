#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <climits>
#include <cmath>

using namespace std;

int num;
int cnt;
int n;
int sq;

int main(){
    while(~scanf("%d", &n) && n){
        for(int i = 0; i < n; i++){
            scanf("%d", &num);
            cnt = 0;
            sq = sqrt(num);
            for(int i = 1; i <= sq; i++){
                if(num % i == 0){
                    cnt += 2;
                }
            }
            if(sq * sq == num) cnt--;
            printf("%d\n", cnt);
        }
    }

    return 0;
}
