#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

/*
阿里3.23笔试题1：
n个人，选择1~n个人组队，并选择其中一个作为队长
选择人数不同或者队长不同都代表不同的结果
一共有多少种选择

输入：
2

输出：
4
*/

long long n;

int main(){
    scanf("%lld", &n);

    long long b = n - 1;
    long long a = 2;
    long long res = 1;
    while(b){
        if(b&1){
            res *= a;
        }

        a *= a;
        b >>= 1;
    }

    printf("%lld\n", (n * res) % 1000000007);

    return 0;
}
