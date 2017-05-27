#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct node{
    char name[30];
    char number[10];
    double score;
}student[1020];

bool cmpScore(node no1, node no2){
    if(no1.score != no2.score){
        return no1.score > no2.score;
    }
    else{
        if(strcmp(no1.number, no2.number) > 0)
            return false;
        else
            return true;
    }
}

int n;

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s%s%lf", &student[i].name, &student[i].number, &student[i].score);
    }

    sort(student, student+n, cmpScore);

    for(int i =0; i < n; i++){
        printf("%s %s %.2lf\n", student[i].name, student[i].number, student[i].score);

    }

    return 0;
}
