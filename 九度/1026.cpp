#include <iostream>
#include <cstdio>

using namespace std;

int a, b, m;
int data[110];
int res[110];

int main(){
    while(~scanf("%d", &m)){
        if(m == 0){
            break;
        }
        scanf("%d%d", &a, &b);
        int k = 0;
        while(a != 0 || b != 0){
            data[k++] = (a%10) + (b%10);
            a = a/10;
            b = b/10;
        }
//
//        for(int i = 0; i < k; i++){
//            cout << data[i] << endl;
//        }

        int n = 0;
        int sum = 1;
        while(sum != 0){
            sum = 0;
            for(int i = k-1; i >= 0; i--){
                int d = data[i]/m;
                sum += d;
                if(i == 0){
                    res[n++] = data[i]%m;
                }
                else{
                    int h = i-1;
                    data[h] += (data[i]%m) * 10;
                }
                data[i] = d;
            }
        }

        if(n == 0){
            printf("0\n");
        }
        else{
            for(int i = n-1; i >= 0; i--){
                printf("%d", res[i]);
            }
            printf("\n");
        }
    }
}
