#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#define INF 1000000
using namespace std;

int n, e, f, t, sum;
int v[1000], w[1000];
int dp[50010];

int min(int num1, int num2) {
	return num1 > num2 ? num2 : num1;
}

int main() {
	scanf("%d", &t);

	while (t--) {
		scanf("%d%d", &e, &f);
		scanf("%d", &n);
		sum = f - e;

		memset(dp, INF, sizeof(dp));

		for (int i = 0; i < n; i++) {
			scanf("%d %d", v + i, w + i);
		}

		dp[0] = 0;
		for (int i = 0; i < n; i++) {
			for (int k = 0; k <= sum; k++) {
				if (k >= w[i]) {
					dp[k] = min(dp[k], dp[k-w[i]] + v[i]);
				}
			}
		}

		if (dp[sum] != INF)
			printf("The minimum amount of money in the piggy-bank is %d.\n", dp[sum]);
		else
			printf("This is impossible.\n");
	}

	scanf("%d", &n);

	return 0;
}