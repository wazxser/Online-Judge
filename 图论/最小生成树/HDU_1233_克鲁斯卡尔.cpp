#include <iostream>
#include <cstdio>
#include <memory.h>
#include <algorithm>

using namespace std;

//克鲁斯卡尔+并查集，还是畅通工程

struct node {
	int v1;
	int v2;
	int w;
}Node[100000];
int vset[110];

bool compare(node n1, node n2) {
	if (n1.w < n2.w) {
		return true;
	}
	
	return false;
}

int getparent(int i) {
	while (vset[i] != i) {
		i = vset[i];
	}
	return i;
}

int main() {
	int m, n, a, b, c;
	while (~scanf("%d", &n)) {
		if (n == 0)
			break;
		m = n * (n - 1) / 2;
		//***vset是点的数组，初始化越界问题
		for(int i=1; i <= n; i++) 
			vset[i] = i;
		for (int i = 1; i <= m; i++) {
			scanf("%d%d%d", &a, &b, &c);
			Node[i].v1 = a;
			Node[i].v2 = b;
			Node[i].w = c;
		}

		//***排序，起点位置，终点位置
		sort(Node + 1, Node + m + 1, compare);

		int p1, p2, sum = 0;
		for (int i = 1; i <= m; i++) {
			//cout << sum << endl;
			p1 = getparent(Node[i].v1);
			p2 = getparent(Node[i].v2);

			if (p1 != p2) {
				sum += Node[i].w;
				vset[p2] = p1;
			}
		}

		printf("%d\n", sum);
	}

	return 0;
}