#include <iostream>
#include <cstdio>
#include <memory.h>

using namespace std;

int num1[110];
int num2[110];
int n;

void merg(int init[], int merged[], int left, int mid, int right){
    int i = left, j = mid+1, k = left;
    while(i <= mid && j <= right){
        if(init[i] < init[j]){
            merged[k] = init[i];
            i++;
            k++;
        }
        else{
            merged[k] = init[j];
            j++;
            k++;
        }
    }

    while(i <= mid){
        merged[k] = init[i];
        i++;
        k++;
    }

    while(j <= right){
        merged[k] = init[j];
        j++;
        k++;
    }
}

void mergePass(int init[], int merged[], int len){
    int i = 0;
    while(i + len*2-1 <= n-1){
        merg(init, merged, i, i+len-1, i+len*2-1);
        i += len*2;
    }

    if(i+len <= n-1){
        merg(init, merged, i, i+len-1, n-1);
    }
    else{
        for(int j = i; j <= n-1; j++){
            merged[j] = init[j];
        }
    }
}

int main(){
    while(~scanf("%d", &n)){
        for(int i = 0; i < n; i++){
            scanf("%d", num1+i);
        }
        memset(num2, 0, sizeof 0);

        int len = 1;
        while(len < n){
            mergePass(num1, num2, len);
            len *= 2;
            mergePass(num2, num1, len);
            len *= 2;
        }

        for(int i = 0; i < n; i++){
            printf("%d ", num1[i]);
        }
        printf("\n");

        for(int i = 0; i < n; i++){
            printf("%d ", num2[i]);
        }

        printf("\n");
    }
}
