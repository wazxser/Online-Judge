#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n;
    while(~scanf("%d", &n)){
        for(int i = 1; i <= 2*(n-1)+1; i += 2){
            int a = 0, b = 1, num;
            if(i == 1){
                printf("0\n");
                continue;
            }
            for(int k = 0; k < i; k++){
                if(k == 0){
                    printf("0 ");
                    continue;
                }
                if(k == 1){
                    printf("1 ");
                    continue;
                }
 
                num = a + b;
                a = b;
                b = num;
                if(k == i - 1){
                    printf("%d", num);
                }
                else{
                    printf("%d ", num);
                }
            }
            printf("\n");
        }
    }
 
    return 0;
}