#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cstring>
#include <memory.h>
#include <stack>
#define INF 0x3f3f3f3f

using namespace std;

int n;
int num[1010];
int zuo[1010];
int you[1010];
stack<int> zhan;
//百分之九十
int main(){
    while(~scanf("%d", &n)){
        for(int i = 0; i < n; i++){
            scanf("%d", num+i);
        }

        zuo[0] = -1;
        zhan.push(0);
        for(int i = 1; i < n; i++){
            while(!zhan.empty() && num[zhan.top()] > num[i]){
                zhan.pop();
            }
            if(zhan.empty()){
                zuo[i] = -1;
            }
            else{
                zuo[i] = zhan.top();
            }
            zhan.push(i);
        }

//        for(int i = 0; i < n; i++){
//            cout << zuo[i] << " ";
//        }

        while(!zhan.empty()){
            zhan.pop();
        }

        you[n-1] = n;
        zhan.push(n-1);
        for(int i = n-2; i >= 0; i--){
            while(!zhan.empty() && num[zhan.top()] > num[i]){
                zhan.pop();
            }
            if(zhan.empty()){
                you[i] = n;
            }
            else{
                you[i] = zhan.top();
            }
            zhan.push(i);
        }

        int res = -1;
        for(int i = 0; i < n; i++){
            int temp = num[i] * (you[i] - zuo[i] - 1);
            if(temp > res){
                res = temp;
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
