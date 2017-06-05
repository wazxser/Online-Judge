//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdio>
//
//using namespace std;
//
//int dp[10009];
//
//int main(){
//    int n, t, e, f, cost, value, v;
//    scanf("%d", &t);
//    while(t--){
//        scanf("%d%d", &e, &f);
//        v = f-e;
//        scanf("%d", &n);
//        memset(dp, -1, sizeof(dp));
//        dp[0] = 0;
//        for(int i = 0; i < n; i++){
//            scanf("%d%d", &value, &cost);
//
//            for(int i=0; i+cost <= v; i++){
//                if(dp[i] == -1)
//                    continue;
//                else if(dp[i+cost] == -1)
//                    dp[i+cost] = dp[i] + value;
//                else
//                    dp[i+cost] = min(dp[i+cost], dp[i] + value);
//            }
//        }
//        if(dp[v] == -1){
//            printf("This is impossible.\n");
//        }
//        else{
//            printf("The minimum amount of money in the piggy-bank is %d.\n", dp[v]);
//        }
//    }
//
//    return 0;
//}
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

struct node{
    char color[20];
    int n;
}balloon[1010];

bool cmp(node no1, node no2){
    return no1.n > no2.n;
}

int num;
char str[20];

int main(){
    while(scanf("%d", &num), num){
        int count = 0;
        for(int i = 0; i < num; i++){
            scanf("%s", str);
            bool flag = false;

            for(int k = 0; k < count; k++){
                if(!strcmp(str, balloon[k].color)){
                    balloon[k].n++;
                    flag = true;
                    break;
                }
            }
            if(!flag){
                int len = strlen(str);
                for(int q = 0; q <= len; q++){
                    balloon[count].color[q] = str[q];
                }
                balloon[count].n = 1;
                count++;
            }
        }

        sort(balloon, balloon+count, cmp);

        printf("%s\n", balloon[0].color);
    }

    return 0;
}
