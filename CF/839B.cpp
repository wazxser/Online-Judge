#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int n, m;
int num[110];

bool cmp(int n1, int n2){
    if(n1 > n2){
        return true;
    }

    return false;
}

int main(){
    while(~scanf("%d%d", &n, &m)){
        for(int i = 0; i < m; i++){
            scanf("%d", num+i);
        }
        int four = n;
        int two = 2 * n;

        int flag = 1;
        while(four > 0 && flag){
            flag = 0;
            for(int i = 0; i < m; i++){
                if(num[i] >= 4){
                    if(four > 0){
                        num[i] -= 4;
                        four--;
                    }
                    flag = 1;
                }
            }
        }

        two += four;
        int one = four;
        flag = 1;
        while(two > 0 && flag){
            flag = 0;
            for(int i = 0; i < m; i++){
                if(num[i] >= 2){
                    if(two > 0){
                        num[i] -= 2;
                        two--;
                    }
                    flag = 1;
                }
            }
        }

        one += two;
        flag = 1;
        while(one > 0 && flag){
            flag = 0;
            for(int i = 0; i < m; i++){
                if(num[i] >= 1){
                    if(one > 0){
                        num[i]--;
                        one--;
                    }
                    flag = 1;
                }
            }
        }

        int sum = 0;
        for(int i = 0; i < m; i++){
            sum += num[i];
        }

        if(sum > 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}
