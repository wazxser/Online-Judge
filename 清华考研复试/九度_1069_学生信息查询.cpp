#include <iostream>
#include <cstdio>
#include <memory.h>
#include <cstring>

using namespace std;

struct node{
    char no[200];
    char name[200];
    char sex[20];
    int year;
}Node[1010];

int main(){
    int n, num;
    char m[200];
    bool flag = false;
    while(~scanf("%d", &n)){
        for(int i = 0; i < n; i++){
            scanf("%s %s %s %d", Node[i].no, Node[i].name, Node[i].sex, &Node[i].year);
        }
        scanf("%d", &num);
        while(num--){
            scanf("%s", m);
            flag = false;
            for(int i = 0; i < n; i++){
                if(!strcmp(m, Node[i].no)){
                    printf("%s %s %s %d\n", Node[i].no, Node[i].name, Node[i].sex, Node[i].year);
                    flag = true;
                    break;
                }
            }
            if(!flag){
                printf("No Answer!\n");
            }
        }
    }

    return 0;
}
