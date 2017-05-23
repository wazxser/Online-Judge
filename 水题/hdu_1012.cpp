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

double evalue[10];

int main(){
    evalue[0] = 1;
    for(int i = 1; i < 10; i++){
        evalue[i] = 1;
        for(int k = 2; k <= i; k++){
            evalue[i] = evalue[i] * k;
        }

        evalue[i] = 1/evalue[i];
//        evalue[i] = 1/1.234;
//        printf("%lf", evalue[i]);
    }

    for(int i = 9; i >= 0; i--){
        double value = evalue[i];
        for(int k = 0; k < i; k++){
            value += evalue[k];
        }
        evalue[i] = value;
    }

    printf("n e\n");
    printf("- -----------\n");
    printf("0 %d\n", 1);
    printf("1 %d\n", 2);
    printf("2 %.1f\n", 2.5);

    for(int i = 3; i < 10; i++)
        printf("%d %.9lf\n", i, evalue[i]);

    return 0;
}
