#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

char str[2020];
int l, ans;

int main(){
    int cas = 1;
    while(~scanf("%s", str)){
        if(str[0] == '-'){
            break;
        }
        int len = strlen(str);
        l = ans = 0;
        for(int i = 0; i < len; i++){
            if(str[i] == '{'){
                l++;
            }

            if(str[i] == '}'){
                if(l > 0){
                    l--;
                }
                else{
                    ans++;
                    l++;
                }
            }
        }

        printf("%d. %d\n", cas++, ans+l/2);
    }

    return 0;
}
