#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cstring>
#include <memory.h>
#define INF 0x3f3f3f3f
 
using namespace std;
 
int n;
int a[10000], b[10000];
char s[10000];
 
void CreateTree(char s[], int a[]){
    int j, n = strlen(s);
    int i = 0;
    while(i < n){
        for(j = 1; j < 100;){
            if(a[j] == -1){
                a[j] = s[i]-'0';
                break;
            }
            else{
                if(a[j] > s[i]-'0'){
                    j=2*j;
                }
                else{
                    j=2*j+1;
                }
            }
        }
        i++;
    }
}
 
//void CreateTree(char s[], int a[]){
//    int m = strlen(s);
//    int j;
//    a[1] = s[0]-'0';
//    for(int i = 1; i < m; i++){
//        j = 1;
//        while(a[j] != -1){
//            if(a[j] < s[i]-'0'){
//                j = 2*j+1;
//            }
//            else{
//                j = 2*j;
//            }
//        }
//        a[j] = s[i]-'0';
//    }
//}
 
int main(){
    while(~scanf("%d", &n)){
        if(n == 0){
            break;
        }
        scanf("%s", s);
        for(int i = 0; i < 100; i++){
            a[i] = -1;
        }
        CreateTree(s, a);
 
        for(int j = 0; j < n; j++){
            scanf("%s", s);
            for(int i = 0; i < 100; i++){
                b[i] = -1;
            }
            CreateTree(s, b);
 
            int flag = 0;
            for(int i = 1; i < 100; i++){
                if(a[i] != b[i]){
                    flag = 1;
                    break;
                }
            }
 
            if(flag){
                printf("NO\n");
            }
            else{
                printf("YES\n");
            }
        }
    }
 
    return 0;
}