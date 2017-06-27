#include <iostream>
#include <cstdio>

using namespace std;

int a[1000][1000];

int yang(int x, int y){
    if(a[x][y] == 0){
        if(x==y || y==1)
            a[x][y] = 1;
        else{
//            a[x][y] = yang(x-1, y) + yang(x-1, y-1);
            a[x][y] = a[x-1][y] + a[x-1][y-1];
        }
    }

    return a[x][y];
}

int main(){
    int n;
    while(~scanf("%d", &n)){
        for(int i = 2; i <= n; i++){
            for(int j = 1; j < i; j++){
                printf("%d ", yang(i, j));
            }
            printf("%d\n", yang(i, i));
        }
    }

    return 0;
}
