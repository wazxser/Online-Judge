#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

char getNum(char *num){
    if(!strcmp(num, "zero"))
        return '0';
    else if(!strcmp(num, "one"))
        return '1';
    else if(!strcmp(num, "two"))
        return '2';
    else if(!strcmp(num, "three"))
        return '3';
    else if(!strcmp(num, "four"))
        return '4';
    else if(!strcmp(num, "five"))
        return '5';
    else if(!strcmp(num, "six"))
        return '6';
    else if(!strcmp(num, "seven"))
        return '7';
    else if(!strcmp(num, "eight"))
        return '8';
    else if(!strcmp(num, "nine"))
        return '9';
}

int main(){
    char str[20];
    char left[2][20];
    char right[2][30];
    int l[2] = {0, 0};
    int r[2] = {0, 0};
    int num1;
    int num2;
    int cnt1 = 0;
    int cnt2 = 0;

    while(1){
        for(int i = 0; i < 2; i++){
            scanf("%s", left[i]);
            if(!strcmp(left[i], "=")){
                scanf("%s", left[i]);
            }
            if(!strcmp(left[i], "+")){
                break;
            }
            l[i] = (int)getNum(left[i]) - 48;
            cnt1++;
        }

        for(int i = 0; i < 2; i++){
            scanf("%s", right[i]);
            if(!strcmp(right[i], "+")){
                scanf("%s", right[i]);
            }
            if(!strcmp(right[i], "=")){
                break;
            }
            r[i] = (int)getNum(right[i]) - 48;
            cnt2++;
        }

        if(!strcmp("zero", left[0]) && !strcmp("zero", right[0]) && cnt1 == 1 && cnt2 == 1)
            break;

        if(cnt1 == 1){
            num1 = l[0];
        }
        else if(l[0] == 0){
            num1 = l[1];
        }
        else{
            num1 = l[0] * 10 + l[1];
        }

        if(cnt2 == 1){
            num2 = r[0];
        }
        else if(r[0] == 0){
            num2 = r[1];
        }
        else{
            num2 = r[0] * 10 + r[1];
        }

        printf("%d %d\n", num1, num2);
        printf("%d\n", num1 + num2);
        l[0] = 0, l[1] = 0;
        r[0] = 0, r[1] = 0;
        cnt1 = 0;
        cnt2 = 0;
    }

    return 0;
}
