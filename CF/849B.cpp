#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

long long num[1100];
int s1[1100];
int s2[1100];
int top1, top2;
int n, flag;

bool check(int a, int b){
    top1 = top2 = 0;

    s1[top1++] = a;
    s1[top1++] = b;

    long long dy1 = num[a] - num[b];
    long long dx1 = a - b;

    for(int i = 0; i < n; i++){
        if(i == a || i == b){
            continue;
        }
        long long dy3 = num[s1[top1-1]] - num[i];
        long long dx3 = s1[top1-1] - i;

        if(dy1*dx3 == dy3*dx1){
            s1[top1++] = i;
        }
        else{
            if(top2 == 0){
                s2[top2++] = i;
            }
            else if(top2 == 1){
                long long dy4 = num[s2[top2-1]] - num[i];
                long long dx4 = s2[top2-1] - i;

                if(dy4*dx1 == dy1*dx4){
                    s2[top2++] = i;
                }
                else{
                    return false;
                }
            }
            else{
                long long dy2 = num[s2[top2-1]] - num[s2[top2-2]];
                long long dx2 = s2[top2-1] - s2[top2-2];

                long long dy4 = num[s2[top2-1]] - num[i];
                long long dx4 = s2[top2-1] - i;

                if(dy4*dx2 == dy2*dx4){
                    s2[top2++] = i;
                }
                else{
                    return false;
                }
            }
        }
    }

    if(top2 == 0){
        return false;
    }

    return true;
}

int main(){
    while(~scanf("%d", &n)){
        for(int i = 0; i < n; i++){
            scanf("%I64d", num+i);
        }

        if(check(0, 1) || check(1, 2) || check(0, 2)){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}
