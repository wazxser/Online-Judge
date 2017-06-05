#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

struct node{
    char word[25];
    int num;
}text[2050];

bool cmp(node no1, node no2){
    return no1.num > no2.num;
}

bool cmpStr(node no1, node no2){
//    int len1 = strlen(no1.word);
//    int len2 = strlen(no2.word);
//    int len = len1 > len2 ? len1 : len2;

    if(strcmp(no1.word, no2.word) < 0){
        return true;
    }
    return false;
}

int main(){
//    char s1[25], s2[25];
//    scanf("%s %s", s1, s2);
//    if(strcmp(s1, s2) > 0){
//        cout << s1 << endl;
//    }
//    else
//        cout << s2 << endl;
//    if(strcmp(s1, s2) < 0){
//        cout << s2 << endl;
//    }

    char str[25];
    int cnt = 0, cnt3 = 0, count=0;
    bool flag = true;
    while(~scanf("%s", str)){
        for(int i = 0; i < cnt; i++){
            if(!strcmp(str, text[i].word)){
                text[i].num++;
                flag = false;
                break;
            }
        }
        if(flag){
            for(int i = 0; i < strlen(str); i++)
                text[cnt].word[i] = str[i];
            text[cnt].num = 1;
            cnt++;
        }

        flag = true;
    }

    sort(text, text+cnt, cmp);
    for(int i = 0; i < cnt; i++){
        if(text[i].num >= 3){
//            printf("%s\n", text[i].word);
            cnt3++;
        }
    }

    for(int i = 0; i < cnt; i++){
        for(int k = 0; k < strlen(text[i].word); k++){
            if(text[i].word[k] >= 'A' && text[i].word[k] <= 'Z')
                text[i].word[k] += 32;
        }
    }

    count = min(cnt3, 10);
    sort(text, text+count, cmpStr);
    for(int i = 0; i< count; i++)
        printf("%s\n", text[i].word);

    return 0;
}
