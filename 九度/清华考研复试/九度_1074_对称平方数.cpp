#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    int m;
    char str[20];
    bool flag = true;
    for(int i = 0; i < 256; i++){
        flag = true;
        m = i * i;
        sprintf(str, "%d", m);
        int len = strlen(str);
        for(int a = 0, b = len-1; a <= b; a++, b--){
            if(str[a] != str[b]){
                flag = false;
                break;
            }
        }

        if(flag){
            printf("%d\n", i);
        }

    }

    return 0;
}
