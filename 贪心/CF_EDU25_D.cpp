#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int n, k;
int num[1010];
char s[1000010];
char t[1000010];
int ha[26];

int main(){
    while(~scanf("%s", s)){
        scanf("%s", t);
        int len1 = strlen(s);
        int len2 = strlen(t);
        memset(ha, 0, sizeof ha);

        for(int i = 0; i < len1; i++){
            if(s[i] != '?'){
                ha[s[i] - 97]++;
            }
        }

        int index = 0;
        for(int i = 0; i < len1; i++){
            if(s[i] == '?'){
                index++;
                index %= len2;
                if(ha[t[index] - 97]){
                    ha[t[index] - 97]--;
                    i--;
                }
                else{
                    s[i] = t[index];
                }
            }
        }

        printf("%s\n", s);
    }

    return 0;
}
