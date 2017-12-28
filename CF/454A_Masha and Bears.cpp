#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int num1, num2, num3, num4;
    int res1, res2, res3;
    int flag;
    int flag2;
    while(~scanf("%d %d %d %d", &num1, &num2, &num3, &num4)){
        flag = 0;
        res1 = 2*num1;
        res2 = 2*num2;

        if(res2 <= 2*num4){
            flag = 1;
        }

        flag2 = 0;
        for(res3 = num3; res3 <= 2*num3; res3++){
            if(num4 <= res3 && 2*num4 >= res3){
                flag2 = 1;
                break;
            }
        }

        if(flag){
            printf("-1\n");
        }
        else if(flag2 == 0){
            printf("-1\n");
        }
        else{
            printf("%d\n%d\n%d\n", res1, res2, res3);
        }
    }

    return 0;
}
