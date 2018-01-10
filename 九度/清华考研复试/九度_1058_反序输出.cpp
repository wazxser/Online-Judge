#include <iostream>
#include <cstdio>
#include <vector>
 
using namespace std;
 
char str[10];
 
int main(){
    while(~scanf("%s", &str)){
        printf("%c%c%c%c\n", str[3], str[2], str[1], str[0]);
    }
 
    return 0;
}