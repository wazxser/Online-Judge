#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
#include <memory.h>

using namespace std;

int m, n;
string num, res;
int data[1010], output[1010];

int main(){
    while(~scanf("%d%d", &m, &n)){
        cin >> num;
        memset(output, 0, sizeof output);
        int len = num.length();
        for(int i = 0; i < num.length(); i++){
            if(isalpha(num[i])){
                data[i] = num[i] - 'A' + 10;
            }
            else{
                data[i] = num[i] - '0';
            }
        }
        int sum = 1;
        int k = 0;
        while(sum){
            sum = 0;
            for(int i = 0; i < len; i++){
                int d = data[i] / n;
                sum += d;
                if(i == len - 1){
                    output[k++] = data[i] % n;
                }
                else{
                    data[i+1] += (data[i] % n) * m;
                }
                data[i] = d;
            }
        }
        if(k == 0){
            printf("0\n");
        }
        else{
            for(int i = 0; i < k; i++){
                if(output[k-i-1] > 9){
//                      cout << (char)output[k-i-1] - 10 + 'a';
                    printf("%c", output[k-i-1] - 10 + 'a');
                }
                else{
                    printf("%d", output[k-i-1]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
