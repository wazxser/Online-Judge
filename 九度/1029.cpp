#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <string>
#include <stdio.h>

using namespace std;

int n;
map<string, string> m;

int main(){
    char s[110];
    string str;
    while(gets(s)){
        str = s;
        if(str[0] == '@'){
            break;
        }

        int len = str.length();
        int i;
        for(i = 0; i < len; i++){
            if(str[i] == ']'){
                break;
            }
        }

        string str1 = str.substr(0, i+1);
        string str2 = str.substr(i+2, len-i-2);
        m[str1] = str2;
        m[str2] = str1;
    }

    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        gets(s);
        str = s;
        cout << str << endl;
        if(m.find(str) == m.end()){
            printf("what?\n");
        }
        else{
            str = m[str];
            if(str[0] != '['){
                cout << str << endl;
            }
            else{
                str = str.substr(1, str.length()-2);
                cout << str << endl;
            }
        }
    }

    return 0;
}
