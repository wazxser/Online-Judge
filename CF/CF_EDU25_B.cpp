#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char str[10][10];
int n;
int res[100];
int flag;
int flag1;
int flag2;

int main(){
    flag = 0;
    for(int i = 0; i < 10; i++){
        scanf("%s", str[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 6; j++){
            flag1 = 0;
            flag2 = 0;
            for(int k = 0; k <= 4; k++){
                if(str[i][j+k] == 'O'){
                    flag1 = 1;
                }
                if(str[i][j+k] == '.'){
                    flag2++;
                }
            }

            if(!flag1 && flag2 < 2){
                printf("YES\n");
                flag = 1;
                break;
            }
        }
    }

    for(int i = 0; i < 10 && !flag; i++){
        for(int j = 0; j < 6; j++){
            flag1 = 0;
            flag2 = 0;
            for(int k = 0; k <= 4; k++){
                if(str[j+k][i] == 'O'){
                    flag1 = 1;
                }
                if(str[j+k][i] == '.'){
                    flag2++;
                }
            }
            if(!flag1 && flag2 < 2){
                printf("YES\n");
                flag = 1;
                break;
            }
        }
    }

    for(int i = 0; i < 6 && !flag; i++){
        for(int j = 0; j < 6; j++){
            flag1 = 0;
            flag2 = 0;
            for(int k = 0; k <= 4; k++){
                if(str[i+k][j+k] == 'O'){
                    flag1 = 1;
                }
                if(str[i+k][j+k] == '.'){
                    flag2++;
                }
            }

            if(!flag1 && flag2 < 2){
                printf("YES\n");
                flag = 1;
                break;
            }
        }
    }

    for(int i = 0; i < 6 && !flag; i++){
        for(int j = 9; j > 3; j--){
            flag1 = 0;
            flag2 = 0;
            for(int k = 0; k <= 4; k++){
                if(str[i+k][j-k] == 'O'){
                    flag1 = 1;
                }
                if(str[i+k][j-k] == '.'){
                    flag2++;
                }
            }

            if(!flag1 && flag2 < 2){
                printf("YES\n");
                flag = 1;
                break;
            }
        }
    }

    if(!flag){
        printf("NO\n");
    }

    return 0;
}
