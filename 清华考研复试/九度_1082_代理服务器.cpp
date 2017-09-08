#include <iostream>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
char dai[1010][20];
char fu[5010][20];
int n, m;
 
int main(){
    while(~scanf("%d", &n)){
        for(int i = 0; i < n; i++){
            scanf("%s", &dai[i]);
        }
 
        scanf("%d", &m);
        for(int i = 0; i < m; i++){
            scanf("%s", &fu[i]);
        }
        if(n == 1){
            int f = 1;
            for(int i = 0; i < m; i++){
                if(!strcmp(dai[0], fu[i])){
                    f = 0;
                }
            }
            if(f){
                printf("%d\n", 0);
            }
            else{
                printf("%d\n", -1);
            }
        }
        else{
            int flag = 1;
            int start = 0;
            int res = 0;
            int max;
            while(flag){
                flag = 0;
                int index;
                max = -1;
                for(int i = 0; i < n; i++){
                    index = start;
                    for(int j = start; j < m && strcmp(dai[i], fu[j]); j++){
                        index++;
                    }
 
                    if(max < index){
                        max = index;
                    }
                }
 
                if(max < m){
                    res++;
                    flag = 1;
                }
                start = index + 1;
            }
 
            printf("%d\n", res);
        }
    }
 
    return 0;
}