#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int n, k;
int num[1010];

int main(){
    while(~scanf("%d%d", &n, &k)){
        for(int i = 0; i < n; i++){
            scanf("%d", num+i);
        }

        sort(num, num+n);
        int res = 0, m = k;
        int i = 0;
        while(i < n){
            if(num[i] % 2 == 1){
                if(m >= num[i] / 2 + 1){
                    if(m < num[i]){
                        m = num[i];
                    }
                    i++;
                }
                else{
                    res++;
                    m = m * 2;
                }
            }
            else{
                if(m >= num[i] / 2){
                    if(m < num[i]){
                        m = num[i];
                    }
                    i++;
                }
                else{
                    res++;
                    m = m * 2;
                }
            }

        }

        printf("%d\n", res);
    }

    return 0;
}
