#include <iostream>
#include <cstdio>

using namespace std;

long long q;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%I64d", &q);
        if(q % 2 == 1){
            printf("First Box\n");
        }
        else{
            int num = 0;
            while(q % 2 == 0){
                q = q / 2;
                num++;
            }
            if(num&1){
                printf("Second Box\n");
            }
            else{
                printf("First Box\n");
            }
        }
    }

    return 0;
}
