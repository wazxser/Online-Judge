#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>
 
using namespace std;
 
int main(){
    int E[60];
    int G[60];
 
    int num1 = 0, num2 = 0;
    for(int i = 2; i <= 60; i++){
        int sum = 0;
        int sq = sqrt(i);
        for(int j = 2; j <= sq; j++){
            if(i % j == 0){
                sum += j;
                sum += i/j;
            }
        }
 
        if(sq * sq == i){
            sum -= sq;
        }
 
//        for(int j = 1; j < i; j++){
//            if(i % j == 0){
//                sum += j;
//            }
//        }
 
        if(sum+1 == i){
            E[num1] = i;
            num1++;
        }
        else if(sum+1 > i){
            G[num2] = i;
            num2++;
        }
    }
 
    printf("E:");
    for(int i = 0; i < num1; i++){
        printf(" %d", E[i]);
    }
    cout << endl;
 
    printf("G:");
    for(int i = 0; i < num2; i++){
        printf(" %d", G[i]);
    }
 
    return 0;
}