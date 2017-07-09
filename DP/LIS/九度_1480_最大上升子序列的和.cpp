#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 1010

using namespace std;

//最大上升子序列的和，查找子序列为上升序列，并且和为最大的，最后输出最大的和
//dp数组维护上升序列的和
//注意检查当前元素和之前元素和那个值更大的问题

bool compare(int num1, int num2){
    return num1 > num2;
}

int n;
int a[MAX];
int b[MAX];
int sum[MAX];

int main(){
    int max;

    while(~scanf("%d",&n)){
        memset(b, 1, 4*n);
        memset(sum, 0, sizeof(sum));

        for(int i=0; i<n; i++){
            scanf("%d", a+i);
        }

        for(int i=0; i<n; i++){
            sum[i] = a[i];
            for(int j=0; j<i; j++){
                if(a[i]>a[j] && sum[i] < sum[j] + a[i]){
                    sum[i] = sum[j] + a[i];
                }
            }
        }

        sort(sum, sum+n, compare);
        printf("%d\n", sum[0]);
    }

    return 0;
}
