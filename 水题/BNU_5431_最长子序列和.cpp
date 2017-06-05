#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int num[10010];
int n, l, r, sum, maxm, temp, s;

int main(){
    while(scanf("%d", &n), 1){
        if(n == 0)
            break;
        sum = 0;
        maxm = -1001;
        l = r = s = temp = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", num+i);
            sum += num[i];
            if(sum > maxm){
                maxm = sum;
                l = s;
                r = s + temp;
            }
            temp++;
            if(sum < 0){
                sum = 0;
                s = s + temp;
                temp = 0;
            }
        }
        if(maxm < 0){
            printf("%d %d %d\n", 0, num[0], num[n-1]);
        }
        else
            printf("%d %d %d\n", maxm, num[l], num[r]);
    }
    return 0;
}
