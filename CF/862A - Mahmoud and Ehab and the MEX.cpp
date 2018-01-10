#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int num[110];

int main(){
    int n, x;
    while(~scanf("%d%d", &n, &x)){
        for(int i = 0; i < n; i++){
            scanf("%d", num+i);
        }

        sort(num, num+n);

        int k = 0;
        int i;
        for(i = 0; i < n; i++){
            if(num[i] < x){
                k++;
            }
            else{
                break;
            }
        }

        int res = x-k;
        if(num[i] == x){
            res++;
        }

        printf("%d\n", res);
    }

    return 0;
}
