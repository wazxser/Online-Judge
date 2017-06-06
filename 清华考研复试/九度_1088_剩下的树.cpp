#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int L, M;
int lu[10010];
int res;

//int cov(int a1, int a2, int b1, int b2){
//    if(a1 <= b1 && a2 >= b2){
//        return 0;
//    }
//    else if(a1 <= b1 && a2 <= b2 && b1 < a2){
//        return b2 - a2;
//    }
//    else if(a1 >= b1 && a2 <= b2)
//        return a1 - b1 + b2 - a2;
//    else if(b1 <= a1 && b2 >= a1 && b2 <= a2)
//        return a1 - b1;
//    else
//        return -1;
//}

int main(){
    while(~scanf("%d %d", &L, &M)){
        for(int i = 0; i <= L; i++){
            lu[i] = 1;
        }
        int a, b;
        for(int i = 0; i < M; i++){
            scanf("%d %d", &a, &b);
            for(int k = a; k <= b; k++){
                if(lu[k] == 1)
                    lu[k] = 0;
            }
        }
        int cnt = 0;
        for(int i = 0; i <= L; i++){
            if(lu[i] == 1)
                cnt++;
        }

        printf("%d\n", cnt);
    }

    return 0;
}
