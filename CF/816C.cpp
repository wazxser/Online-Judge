#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <string>
#include <stdio.h>
#include <queue>
#include <vector>
#define INF 510

using namespace std;

int n, k;
int m[110][110];
int row[110];
int col[110];

int main(){
    while(~scanf("%d%d", &n, &k)){
        memset(m, 0, sizeof m);
        memset(row, 0, sizeof row);
        memset(col, 0, sizeof col);

        for(int i = 0; i < n ; i++){
            for(int j = 0; j < k; j++){
                scanf("%d", &m[i][j]);
            }
        }

        int num = 0;
        int min;

        if(n > k){
            for(int j = 0; j < k; j++){
                min = INF;
                for(int i = 0; i < n; i++){
                    if(m[i][j] < min){
                        min = m[i][j];
                    }
                }

                for(int i = 0; i < n; i++){
                    m[i][j] -= min;
                }

                col[j] += min;
                num += min;
            }
            for(int i = 0; i < n; i++){
                min = INF;
                for(int j = 0; j < k; j++){
                    if(m[i][j] < min){
                        min = m[i][j];
                    }
                }

                for(int j = 0; j < k; j++){
                    m[i][j] -= min;
                }
    //            cout << min << endl;
                row[i] += min;
                num += min;
            }
        }
        else{
            for(int i = 0; i < n; i++){
                min = INF;
                for(int j = 0; j < k; j++){
                    if(m[i][j] < min){
                        min = m[i][j];
                    }
                }

                for(int j = 0; j < k; j++){
                    m[i][j] -= min;
                }
    //            cout << min << endl;
                row[i] += min;
                num += min;
            }

            for(int j = 0; j < k; j++){
                min = INF;
                for(int i = 0; i < n; i++){
                    if(m[i][j] < min){
                        min = m[i][j];
                    }
                }

                for(int i = 0; i < n; i++){
                    m[i][j] -= min;
                }

                col[j] += min;
                num += min;
            }
        }


        int flag = 0;
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < k; j++){
                if(m[i][j]){
                    flag = 1;
                }
            }
        }

        if(flag){
            printf("-1\n");
        }
        else{
            printf("%d\n", num);
            for(int i = 0; i < n; i++){
                while(row[i]){
                    row[i]--;
                    printf("row %d\n", i+1);
                }
            }

            for(int i = 0; i < k; i++){
                while(col[i]){
                    col[i]--;
                    printf("col %d\n", i+1);
                }
            }
        }
    }

    return 0;
}
