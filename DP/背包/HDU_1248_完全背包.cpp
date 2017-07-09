#include <iostream>
#include <cstdio>
#include <memory.h>
using namespace std;

int t, n;
int dp[100100];
int v[3] = { 150, 200, 350 };

int max(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		memset(dp, 0, sizeof(dp));

		for (int i = 0; i < 3; i++) {
			//cout << 111 << endl;
			for (int j = v[i]; j <= n; j++) {
				dp[j] = max(dp[j], dp[j - v[i]] + v[i]);
			}
		}

		printf("%d\n", n-dp[n]);
	}
	return 0;
}