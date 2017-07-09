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
	vis[s] = 1;                          //����ʼ�����������飬ע����ʼ�㲻һ���ǵ�һ����
	for (int i = 1; i <= n; i++) {
		dis[i] = map1[s][i];
		cost[i] = map2[s][i];
	}

	int min, temp;
	for (int k = 1; k < n; k++) {                  //ʣ�µ�ı�������
		min = INF; 
		for (int i = 1; i <= n; i++) {             //�ҵ�Ŀǰ��С�ĵ�
			if (!vis[i] && dis[i] < min) {
				temp = i;
				min = dis[i];
			}
		}

		vis[temp] = 1;
		for (int j = 1; j <= n; j++) {
			if (!vis[j] && dis[temp] + map1[temp][j] < dis[j]) {         //����
				dis[j] = dis[temp] + map1[temp][j];
				cost[j] = cost[temp] + map2[temp][j];
			}
			else if (!vis[j] && dis[temp] + map1[temp][j] == dis[j]) {   //���������ͬ���һ�����С��
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
		memset(vis, 0, sizeof(vis));  //��ʼ��vis����

		for (int i = 1; i <= n; i++) {              //��ʼ�������ڽӾ���
			for (int j = 1; j <= n; j++) {
				map1[i][j] = map2[i][j] = INF;
			}
		}

		for (int i = 1; i <= m; i++) {              //����ͼ������
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