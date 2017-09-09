#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
 
using namespace std;
 
struct node{
    int next;
    int flag;
}word[100005];
 
int main(){
    int first, second, n;
    while(~scanf("%d%d%d", &first, &second, &n)){
        int res = 0;
        int num = 0;
        for(int i = 0; i < n; i++){
            int a, b;
            char ch;
            scanf("%d %c %d", &a, &ch, &b);
            word[a].next = b;
            if(b == -1){
                num++;
            }
        }
 
        if(num >= 2){
            printf("%d\n", -1);
        }
        else{
            int len1 = 0, len2 = 0;
            int i = first;
            while(i != -1){
                len1++;
                i = word[i].next;
            }
 
            int j = second;
            while(j != -1){
                len2++;
                j = word[j].next;
            }
 
            while(len1 > len2){
                first = word[first].next;
                len1--;
            }
 
            while(len2 > len1){
                second = word[second].next;
                len2--;
            }
 
            while(len1 > 0){
                if(first == second){
                    printf("%05d\n", first);
                    break;
                }
                else{
                    first = word[first].next;
                    second = word[second].next;
                }
                len1--;
            }
        }
    }
 
    return 0;
}