#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int n;
long long a, b;
long long num;

int main(){
    scanf("%d", &n);
    while(n--){
        scanf("%I64d%I64d", &a, &b);
        num = a * b;
        int flag = 0;
        long long low = 1, high = 1000005;
        long long mid;

        while(low <= high){
            mid = (low + high) / 2;
            if(mid * mid * mid == num){
//                printf("YES\n");
                flag = 1;
                break;
            }
            else if(mid * mid * mid < num){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        if(!flag){
            printf("NO\n");
        }
        else if(a % mid == 0 && b % mid == 0){
            printf("YES\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}
