#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

char pre[30];
char mid[30];
char post[30];
int root;

void tree(int left, int right, char ch){
    for(int i = left; i < right; i++){
        if(mid[i] == ch){
            if(left < i){
                tree(left, i, pre[root++]);
            }
            if(i+1 < right){
                tree(i+1, right, pre[root++]);
            }
            printf("%c", ch);
            break;
        }
    }

}

int main(){
    while(~scanf("%s %s", pre, mid)){
        root = 0;
        tree(0, strlen(pre), pre[root++]);
        printf("\n");
    }
    return 0;
}
