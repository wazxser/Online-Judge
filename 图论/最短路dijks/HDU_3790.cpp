#include <iostream>
#include <cstdio>
#include <memory.h>
#define INF 1<<30

using namespace std;

int map1[1010][1010], map2[1010][1010];
int vis[1010];
int dis[1010], cost[1010];
int n, m, s, t;
int a, b, c, p;

void dijkstra() {
	vis[s] = 1;                          //将起始点加入访问数组，注意起始点不一定是第一个点
	for (int i = 1; i <= n; i++) {
		dis[i] = map1[s][i];
		cost[i] = map2[s][i];
	}

	int min, temp;
	for (int k = 1; k < n; k++) {                  //剩下点的遍历次数
		min = INF; 
		for (int i = 1; i <= n; i++) {             //找到目前最小的点
			if (!vis[i] && dis[i] < min) {
				temp = i;
				min = dis[i];
			}
		}

		vis[temp] = 1;
		for (int j = 1; j <= n; j++) {
			if (!vis[j] && dis[temp] + map1[temp][j] < dis[j]) {         //更新
				dis[j] = dis[temp] + map1[temp][j];
				cost[j] = cost[temp] + map2[temp][j];
			}
			else if (!vis[j] && dis[temp] + map1[temp][j] == dis[j]) {   //如果距离相同就找花费最小的
				if (cost[j] > cost[temp] + map2[temp][j])
					cost[j] = cost[temp] + map2[temp][j];
			}
		}
	}
}

int main() {
	while (~scanf("%d%d", &n, &m)) {
		if (n == 0 && m == 0) {
			break;
		}
		memset(vis, 0, sizeof(vis));  //初始化vis数组

		for (int i = 1; i <= n; i++) {              //初始化两个邻接矩阵
			for (int j = 1; j <= n; j++) {
				map1[i][j] = map2[i][j] = INF;
			}
		}

		for (int i = 1; i <= m; i++) {              //读入图的数据
			scanf("%d %d %d %d", &a, &b, &c, &p);
			if (c < map1[a][b]) {
				map1[a][b] = map1[b][a] = c;
				map2[a][b] = map2[b][a] = p;
			}
		}

		scanf("%d%d", &s, &t);

		dijkstra();

		printf("%d %d\n", dis[t], cost[t]);
	}

	return 0;
}