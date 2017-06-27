#include <iostream>
#include <cstdio>
#include <memory.h>
#define INF 99999

using namespace std;

int map[27][27];
int d[27];
int sum;
int visit[27];

int main(){
    int n, a, b;
    char ch;
    while(~scanf("%d", &n) && n){

        for(int i = 1; i < 27; i++){
            for(int j = 1; j < 27; j++){
                map[i][j] = INF;
            }
        }

        memset(visit, 0, sizeof(visit));
        memset(d, 0, sizeof(d));
        for(int i = 1; i < n; i++){
            scanf("%c", &ch);
            scanf("%c", &ch);
            scanf("%d", &a);
            for(int j = 1; j <= a; j++){
                scanf("%c", &ch);
                scanf("%c", &ch);
                scanf("%d", &b);
                map[i][ch-'A'+1] = b;
                map[ch-'A'+1][i] = b;
            }
        }

//        for(int i = 1; i < 27; i++){
//            for(int j = 1; j < 27; j++){
//                cout << map[i][j] << " ";
//            }
//            cout << endl;
//        }

        for(int i = 1; i <= n; i++)
            d[i] = map[1][i];
        visit[1] = 1;

        int minn, temp;
        sum = 0;
        for(int i = 1; i < n; i++){
            minn = INF;
            for(int j = 1; j <= n; j++){
                if(!visit[j] && d[j] < minn){
                    temp = j;
                    minn = d[j];
                }
            }
//            cout << minn << endl;
//            cout << (char)(temp + 'A' -1) << endl;
            visit[temp] = 1;
            sum += minn;

            //更新路径值
            for(int j = 1; j <= n; j++){
                if(!visit[j] && map[temp][j] < d[j]){
                    d[j] = map[temp][j];
                }
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
