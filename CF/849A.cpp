#include <iostream>
#include <cstdio>

using namespace std;

int num[110];

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", num+i);
    }

    if((n&1) && (num[0]&1) && (num[n-1]&1)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}
