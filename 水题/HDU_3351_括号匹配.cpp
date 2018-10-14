//题意：括号匹配，给包括左括号和右括号的序列，要求给出改变括号方向的操作数，是整个序列左右括号匹配
//思路：遍历这个括号序列，如果是左括号，记下来，如果是右括号，则消耗一个前边的一个左括号，如果前边的左括号为0，则操作数加一，并且左括号数加一，最后结果是操作数和所剩左括号数的二分之一

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
