#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int n, t;
int num[1010];
int res;

int min(int num1, int num2) {
	return num1 > num2 ? num2 : num1;
}

int main() {
	scanf("%d", &t);

	while (t--) {
		res = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", num + i);
		}
		sort(num, num + n);

		while(n >= 4) {
			res = res + min(num[n - 1] + num[n - 2] + 2 * num[0], num[n - 1] + num[1] + num[1] + num[0]);
			n -= 2;
		}

		if (n == 3)
			res += num[0] + num[1] + num[2];
		else if (n == 2)
			res += num[1];
		else
			res += num[0];

		printf("%d\n", res);
	}

	return 0;
}