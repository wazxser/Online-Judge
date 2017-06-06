//#include <iostream>
//#include <cstdio>
//#include <memory>
//
//using namespace std;
//
//int map[27][27];
//int d[27];
//int sum;
//bool visit[27];
//
//int main(){
//    int n, a, b;
//    char ch;
//    while(~scanf("%d", &n)){
//        memset(map, 0, sizeof(map));
//        memset(visit, true, sizeof(visit));
//        memset(d, 0, sizeof(d));
//        for(int i = 1; i < n; i++){
//            scanf("%c", &ch);
//            scanf("%c", &ch);
//            scanf("%d", &a);
//            for(int j = 1; j <= a; j++){
//                scanf("%c", &ch);
//                scanf("%c", &ch);
//                scanf("%d", &b);
//                map[i-1][ch-'A'] = b;
//                map[ch - 'A'][i-1] = b;
//            }
//        }
//
//        for(int i = 1; i < n; i++)
//            d[i] = map[i][0];
//    }
//
//    return 0;
//}
#include <iostream>
#include <cstdio>
#include <memory.h>
#include <climits>
using namespace std;
#define INF 99999

int m[110][110];
int visit[110];
int dis[110];

void dijks(int n, int s){
    int minn, temp;
    visit[s] = 1;
    for(int i = 1; i <= n; i++){
        dis[i] = m[s][i];
    }

//    for(int i = 0; i <= n; i++)
//        cout << dis[i] << endl;

    for(int i = 0; i < n; i++){
        minn = INF;
        for(int j = 1; j <= n; j++){
            if(!visit[j] && dis[j] < minn){
                temp = j;
                minn = dis[j];
            }
        }

        visit[temp] = 1;
        for(int j = 1; j <= n; j++){
            if(!visit[j] && dis[temp] + m[temp][j] < dis[j])
                dis[j] = dis[temp] + m[temp][j];
        }
    }
}

int main(){
    int n, mm, a, b, w;
    while(~scanf("%d %d", &n, &mm) && n+mm){
//        memset(m, INF, sizeof(m));
        memset(visit, 0, sizeof(visit));
        memset(dis, 0, sizeof(dis));

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                m[i][j] = INF;
            }
        }

        for(int i = 1; i <= mm; i++){
            scanf("%d %d %d", &a, &b, &w);
            m[a][b] = w;
            m[b][a] = w;
        }

        dijks(n, 1);
        printf("%d\n", dis[n]);
    }

    return 0;
}
