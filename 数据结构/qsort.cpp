#include <iostream>
#include <cstdio>

using namespace std;

int part(int arr[], int low, int high){
    int pivot = arr[low];
    while(low < high){
        while(low < high && arr[high] >= pivot)
            high--;
        arr[low] = arr[high];
        while(low < high && arr[low] <= pivot)
            low++;
        arr[high] = arr[low];
    }

    arr[low] = pivot;

    return low;
}

void qsort(int arr[], int low, int high){
    if(low < high){
        int loc = part(arr, low, high);
        qsort(arr, low, loc-1);
        qsort(arr, loc+1, high);
    }
}

int main(){
    int arr[8];
    for(int i = 0; i < 8; i++){
        scanf("%d", &arr[i]);
    }

    qsort(arr, 0, 7);

    for(int i = 0; i < 8; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
