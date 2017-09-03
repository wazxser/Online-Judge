#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char str[100010];

int main(){
    int k;
    while(~scanf("%d", &k)){
        if(k == 0){
            printf("a\n");
        }
        else if(k == 1){
            printf("aa\n");
        }
        else if(k == 2){
            printf("aabb\n");
        }
        else{
            int sum = 0;
            int index = 0;
            int ch = 0;
            while(sum < k){
                int i;
                for(i = 1; i < k; i++){
                    sum += i;
                    if(sum > k){
                        sum -= i;
                        i--;
                        break;
                    }

                    if(sum == k){
                        break;
                    }
                }
                for(int j = 0; j < i+1; j++){
                    str[j+index] = 'a'+ch;
                }
                index = index+i+1;
                ch++;
            }
            str[index] = '\0';
            printf("%s\n", str);
        }
    }

    return 0;
}
