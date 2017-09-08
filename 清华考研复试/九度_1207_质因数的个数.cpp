#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int num;
    while(~scanf("%d", &num)){
        int res = 0;

        for(int i = 2; i <= 10000000;){
            if(num%i == 0){
                num = num/i;
                res++;
                if(num == 1){
                    break;
                }
            }
            else{
                i++;
            }
        }

        if(num != 1){
            res++;
        }

        printf("%d\n", res);
    }

    return 0;
}
