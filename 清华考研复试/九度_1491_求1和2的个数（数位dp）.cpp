#include <iostream>
#include <cstdio>
#include <algorithm>
#include <memory.h>
#include <queue>
#include <string>

using namespace std;

int main(){
    string str;
    while(cin >> str){
        int len = str.length();
        int res, cnt, num;
        res = cnt = num = 0;

        for(int i = 0; i < len; i++){
            int t = str[i] - '0';
            res = (res-cnt)*10 + num*2 + cnt*(t+1) + min(t, 2);

            if(t == 1 || t == 2){
                cnt++;
            }

            num = num*10 + t;
            num = num%20123;
            res = res%20123;
        }

        printf("%d\n", res);
    }

    return 0;
}
