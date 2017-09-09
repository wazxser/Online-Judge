#include <iostream>
#include <cstdio>
 
using namespace std;
 
int num[1000100];
 
int main(){
    int n;
    num[0] = 1;
    num[1] = 1;
    num[2] = 2;
    for(int i = 3; i <= 1000000; i++){
        if(i&1){
            num[i] = num[i-1] % 1000000000;
        }
        else{
            num[i] = (num[i-1] + num[i/2]) % 1000000000;
        }
    }
 
    while(~scanf("%d", &n)){
        printf("%d\n", num[n]);
    }
 
    return 0;
}