#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char str[100];
int n;
int res[100];

int main(){
    while(~scanf("%d", &n)){
        scanf("%s", str);
        int num = 0;
        int index = 0;
        int flag = 0;
        for(int i = 0; i < n; i++){
            if(str[i] == '1'){
                flag = 0;
                num++;
            }
            else{
                if(flag){
                    res[index++] = 0;
                }
                else{
                    res[index++] = num;
                    num = 0;
                }
                flag = 1;
            }
        }
        res[index++] = num;

        for(int i = 0; i < index; i++){
            printf("%d", res[i]);
        }

        printf("\n");
    }

    return 0;
}
