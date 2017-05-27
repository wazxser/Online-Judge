#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int num[3010];

int main(){
    int n;
    int x, y;
    cin >> n;
    while(n != 0){
        x = y = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            if(!(x == y && x == 0))
                num[i-1] = abs(x - y);
            y = x;
        }

        sort(num, num+n-1);

        int i;
        for(i = 0; i < n-1; i++){
            if(num[i] != i+1)
                break;
        }

        if(i == n-1){
            printf("Jumper\n");
        }
        else{
            printf("Not Jumper\n");
        }

        cin >> n;
    }

    return 0;
}
