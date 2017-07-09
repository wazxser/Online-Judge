#include <iostream>
#include <cstdio>
#include <memory.h>
using namespace std;

//01背包从大往小走，完全背包从小往大走

int t, n, m, a, b, c;
int dp[10000];
int v[1100];
int w[1100];
int num[1100];

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		memset(dp, 0, sizeof(dp));
		/*memset(v, 0, sizeof(v));
		memset(w, 0, sizeof(w));*/
		int k = 0;
		for (int i = 0; i < m; i++) {
			scanf("%d%d%d", &a, &b, &c);
			while (c--) {
				v[k] = a;
				w[k++] = b;
			}
		}

		for (int i = 0; i < k; i++) {
			//for (int k = 0; k < num[i]; k++) {
				//不懂为什么要从n往回走
				for (int j = n; j >= v[i]; j--) {
					dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
				}
			//}
		}

		printf("%d\n", dp[n]);
	}

	return 0;
}