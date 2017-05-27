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