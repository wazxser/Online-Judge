#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 1001

using namespace std;

//最长上升子序列，n2算法，求的是上升序列的最大个数
//用数组b[i]来记录到i位置，上升子序列的个数，遍历每次找最大的上升数，最后加上a[i]，加1
//最后排序，取数组b中最大的数
bool compare(int num1, int num2){
    return num1 > num2;
}

int n;
int a[MAX];
int b[MAX];


int main(){
    int max;
    scanf("%d",&n);
    memset(b, 1, 4*n);

    for(int i=0; i<n; i++){
        scanf("%d", a+i);
    }

    for(int i=0; i<n; i++){
        max=0;
        for(int j=0; j<i; j++)
        {
            if(a[i]>a[j] && b[j]>max){
                max = b[j];
            }
        }
        b[i] = max+1;
    }   

    sort(b, b+n, compare);

    printf("%d\n", b[0]);

    return 0;
}
