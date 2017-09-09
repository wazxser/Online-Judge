#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
char str[25];
 
int main(){
    int h;
 
    while(~scanf("%d", &h)){
        for(int i = h; i <= (3*h-2); i+=2){
            for(int j = 1; j <= (3*h-2-i); j++){
                printf(" ");
            }
            for(int k = 1; k <= i; k++){
                printf("*");
            }
            printf("\n");
        }
    }
 
    return 0;
}