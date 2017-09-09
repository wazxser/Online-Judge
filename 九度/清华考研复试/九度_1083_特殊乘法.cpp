#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

char arr1[20];
char arr2[20];
int res;

int main(){
    int n1, n2, cnt1=0, cnt2=0;
    while(~scanf("%s %s", arr1, arr2)){
        res = 0;
        cnt1 = strlen(arr1);
        cnt2 = strlen(arr2);

        for(int i = 0; i < cnt1; i++){
            for(int k = 0; k < cnt2; k++){
                res = res + (arr1[i]-'0') * (arr2[k]-'0');
            }
        }

        printf("%d\n", res);
    }
    return 0;
}
