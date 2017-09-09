#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstring>
 
using namespace std;
 
struct node{
    char name[100];
    int age;
    int score;
}Node[1010];
 
bool compare(node no1, node no2){
    if(no1.score < no2.score){
        return true;
    }
    else if(no1.score > no2.score){
        return false;
    }
    else{
        if(strcmp(no1.name, no2.name) < 0){
            return true;
        }
        else if(strcmp(no1.name, no2.name) > 0){
            return false;
        }
        else{
            return no1.age < no2.age;
        }
    }
}
 
int main(){
    int n;
    while(~scanf("%d", &n)){
        for(int i = 0; i < n; i++){
            scanf("%s %d %d", &Node[i].name, &Node[i].age, &Node[i].score);
        }
 
        sort(Node, Node+n, compare);
        for(int i = 0; i < n; i++){
            printf("%s %d %d\n", Node[i].name, Node[i].age, Node[i].score);
        }
    }
 
    return 0;
}