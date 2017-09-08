#include <iostream>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
char str[110];
char id[30];
 
void init(){
    for(int i = 0; i < 3; i++){
        id[i] = 'a';
    }
 
    for(int i = 3; i < 6; i++){
        id[i] = 'd';
    }
 
    for(int i = 6; i < 9; i++){
        id[i] = 'g';
    }
 
    for(int i = 9; i < 12; i++){
        id[i] = 'j';
    }
 
    for(int i = 12; i < 15; i++){
        id[i] = 'm';
    }
 
    for(int i = 15; i < 19; i++){
        id[i] = 'p';
    }
 
    for(int i = 19; i < 22; i++){
        id[i] = 't';
    }
 
    for(int i = 22; i < 26; i++){
        id[i] = 'w';
    }
}
 
int main(){
    while(~scanf("%s", str)){
        init();
        int len = strlen(str);
        int sum = 0;
        for(int i = 0; i < len; i++){
            sum += (str[i] - id[str[i]-'a'])+1;
            if(i > 0){
                if(id[str[i]-'a'] == id[str[i-1]-'a']){
                    sum += 2;
                }
            }
        }
 
        printf("%d\n", sum);
    }
 
    return 0;
}