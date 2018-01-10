#include <iostream>
#include <cstdio>

using namespace std;

int num[110];
int n;

void swap2(int index1, int index2){
    int temp = num[index1];
    num[index1] = num[index2];
    num[index2] = temp;
}

int partit(int low, int high){
    int part = num[low];
    while(low < high){
        while(low < high && num[high] >= part){
            high--;
        }
        swap2(low, high);

        while(low < high && num[low] <= part){
            low++;
        }

        swap2(low, high);
    }

    return low;
}

void qs(int low, int high){
    int partloc;
    if(low < high){
        partloc = partit(low, high);

        qs(low, partloc-1);
        qs(partloc+1, high);
    }
}

int main(){
    while(~scanf("%d", &n)){
        for(int i = 0; i < n; i++){
            scanf("%d", num+i);
        }

        qs(0, n-1);

        for(int i = 0; i < n; i++){
            printf("%d ", num[i]);
        }
        printf("\n");
    }
}
