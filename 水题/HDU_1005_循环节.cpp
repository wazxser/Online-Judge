#include <iostream>
#include <cstdio>

using namespace std;

int a, b, n;
int num[1000];

int main(){
    while(~scanf("%d%d%d", &a, &b, &n)){
        if(a == 0 && b == 0 && n == 0){
            break;
        }
        num[1] = num[2] = 1;
        int flag = 0;
        int begin, end;
        for(int i = 3; i <= n && !flag; i++){
            num[i] = (a * num[i-1] + b * num[i-2]) % 7;
            for(int j = 2; j < i; j++){
                if(num[i] == num[j] && num[i-1] == num[j - 1]){
                    flag = 1;
                    begin = j;
                    end = i;
                }
            }
        }

        if(flag){
            printf("%d\n", num[begin+(n-end) % (end-begin)]);
        }
        else{
            printf("%d\n", num[n]);
        }
    }

    return 0;
}
