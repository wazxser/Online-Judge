#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
char str[25];
 
int main(){
    while(~scanf("%s", str)){
        int len = strlen(str);
        sort(str, str+len);
        printf("%s\n", str);
    }
    return 0;
}