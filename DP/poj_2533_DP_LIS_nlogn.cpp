#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 1001

using namespace std;

bool compare(int num1, int num2){
    return num1 > num2;
}

int n;
int a[MAX];
int b[MAX];

int main(){
    int max;
    scanf("%d",&n);
    memset(b, 1, n);

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
