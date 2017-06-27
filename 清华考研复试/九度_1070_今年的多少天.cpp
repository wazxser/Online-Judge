#include <iostream>
#include <cstdio>
#include <memory.h>

using namespace std;

int main(){
    int nian, yue, ri;
    int cnt = 0;
    while(~scanf("%d%d%d", &nian, &yue, &ri)){
        cnt = 0;
        if(nian % 4 == 0 && nian % 100 != 0 || nian % 400 == 0){
            for(int i = 1; i < yue; i++){
                if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
                    cnt += 31;
                }
                else if(i == 2){
                    cnt += 29;
                }
                else{
                    cnt += 30;
                }
            }
        }
        else{
            for(int i = 1; i < yue; i++){
                if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
                    cnt += 31;
                }
                else if(i == 2){
                    cnt += 28;
                }
                else{
                    cnt += 30;
                }
            }
        }

        cnt += ri;
        printf("%d\n", cnt);
    }

    return 0;
}
