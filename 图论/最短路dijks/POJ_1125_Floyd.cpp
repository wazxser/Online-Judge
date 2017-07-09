#include <iostream>
#include <cstdio>
#include <vector>
//#include <memory.h>
#define INF 99999

using namespace std;

//floyd, 多有点之间的最短路径，复杂度O(n3)，权值可为负
//超时，节点数应控制在200以内

int map[1010][1010];
int a, b, c, p;
int n, m, s, t;

int min(int a, int b) {
	return a > b ? b : a;
}

void floyd() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (map[j][i] + map[i][k] < map[j][k]) {
					map[j][k] = map[j][i] + map[i][k];
				}
			}
		}
	}
}

int main() {
	while (~scanf("%d", &n)) {
		if (n == 0)
			break;

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == j) 
					map[i][j] = 0;
				else
					map[i][j] = INF;
			}
		}

		int a, b;
		for (int k = 1; k <= n; k++) {
			scanf("%d", &m);
			for (int i = 1; i <= m; i++) {
				scanf("%d%d", &a, &b);
				map[k][a] = b;
			}
		}			

		floyd();

		int min = INF, index = 0;
		int max;
		for (int i = 1; i <= n; i++) {
			max = 0;
			for (int j = 1; j <= n; j++) {
				if (map[i][j] > max) {
					max = map[i][j];
				}
			}

			if (max < min) {
				min = max;
				index = i;
			}
		}

		if (min < INF) {
			printf("%d %d\n", index, min);
		}
		else {
			printf("disjoint\n");
		}
	}

	return 0;
}