#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 1010

using namespace std;

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

//        for(int i=0; i<n; i++){
//            max = 0;
//            sum[i] = 0;
//            for(int j=0; j<i; j++){
//                if(a[i]>a[j] && b[j]>max){
//                    max = b[j];
//                    sum[i] = sum[j];
//                }
//            }
//            b[i] = max+1;
//            sum[i] += a[i];
//        }

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
