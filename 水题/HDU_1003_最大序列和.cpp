#include <iostream>
#include <cstdio>

using namespace std;

int t;
int n;
int num[100010];

int main(){
    scanf("%d", &t);
    int cas = 1;
    int flag = t;
    while(t--){
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            scanf("%d", num+i);
        }

        int sum = 0, max = -999999, s = 1, r = 0, l = 1, temp = 0;
        for(int i = 1; i <= n; i++){
            sum += num[i];
            if(max < sum){
                max = sum;
                l = s;
                r = i;
            }

            if(sum < 0){
                s = i + 1;
                sum = 0;
            }
        }

        printf("Case %d:\n", cas++);
        printf("%d %d %d\n", max, l, r);
        if(t > 0)
            printf("aaa\n");
    }

    return 0;
}
