#include <iostream>
#include <cstdio>

using namespace std;

int hAdjust(int arr[], int s, int m){
    int rc = arr[s];
    for(int j = 2 * s; j <= m; j *= 2){
        if(j < m && arr[j] < arr[j+1])
            j++;
        if(rc > arr[j])
            break;
        arr[s] = arr[j];
        s = j;
    }

    arr[s] = rc;
}

void hsort(int arr[], int length){
    for(int i = length / 2 - 1; i >= 0; i--){
        hAdjust(arr, i, length-1);
    }
}

int main(){
    int arr[8] = {49, 38, 65, 97, 76, 13, 27, 49};

    hsort(arr, 8);
    for(int i = 7; i > 1; i--){
        printf("%d\n", arr[0]);
        arr[0] = arr[i];
        hAdjust(arr, 0, i-1);
    }
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);

    return 0;
}
