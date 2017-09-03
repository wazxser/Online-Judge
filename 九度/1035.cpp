#include <iostream>
#include <cstdio>

using namespace std;

int n, k, x;
int num[110];
char str[5];

int findP(int n1, int n2){
    x = 0;
    while(n1 != num[n1]){
        x++;
        n1 = num[n1];
        if(n1 == n2){
            return x;
        }
    }

    return -1;
}

int main(){
    while(~scanf("%d%d", &n, &k)){
        if(n==0 && k==0){
            break;
        }
        for(int i = 0; i < 110; i++){
            num[i] = i;
        }
        for(int i = 0; i < n; i++){
            scanf("%s", str);
            num[str[1]-'A'] = str[0]-'A';
            num[str[2]-'A'] = str[0]-'A';
        }

        for(int i = 0; i < k; i++){
            scanf("%s", str);
            int res = findP(str[0]-'A', str[1]-'A');
            if(res != -1){
                while(res){
                    if(res == 2){
                        printf("grand");
                    }
                    else if(res == 1){
                        printf("parent");
                    }
                    else{
                        printf("great-");
                    }
                    res--;
                }
                printf("\n");
            }
            else{
                res = findP(str[1]-'A', str[0]-'A');
                if(res != -1){
                    while(res){
                        if(res == 2){
                            printf("grand");
                        }
                        else if(res == 1){
                            printf("child");
                        }
                        else{
                            printf("great-");
                        }
                        res--;
                    }
                    printf("\n");
                }
                else{
                    printf("-\n");
                }
            }
        }
    }
}
