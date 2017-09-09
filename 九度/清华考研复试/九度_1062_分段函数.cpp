#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
int main(){
    double n;
    while(~scanf("%lf", &n)){
        double res = 0;
        if(n >= 0 && n < 2){
            res = n * (-1) + 2.5;
        }
        else if(n >= 2 && n < 4){
            res = 2 - 1.5 * (n - 3) * (n - 3);
        }
        else if(n >= 4 && n < 6){
            res = n / 2 - 1.5;
        }
        printf("%.3lf\n", res);
    }
 
    return 0;
}